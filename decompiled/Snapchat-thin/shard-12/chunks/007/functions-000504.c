/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109745670; end: 1097456df;  */

undefined * FUN_109745670(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-3];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10974570c();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_1097456e0();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 1097456e0; end: 10974570b;  */

void FUN_1097456e0(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_1097465b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 10974570c; end: 10974573f;  */

void FUN_10974570c(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x58);
  if (lVar1 != 0) {
    FUN_109745740();
  }
  return;
}



/* Entry: 109745740; end: 109745bb7;  */

undefined8 * FUN_109745740(undefined8 *param_1,ushort *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  uint *puVar10;
  code *pcVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined1 auStack_92 [2];
  uint auStack_90 [2];
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  ushort *puStack_60;
  int iStack_58;
  undefined2 uStack_54;
  ushort *puVar9;
  
  param_1[10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  auStack_90[0] = 0;
  iStack_64 = 0;
  puStack_60 = (ushort *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  bStack_68 = 0;
  iStack_58 = 0x10000;
  uStack_54 = 0;
  iVar6 = *(int *)(param_2 + 0xc);
  if (iVar6 == -1) {
    puVar9 = param_2;
    FUN_109710978();
    iVar6 = (int)puVar9;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  puVar9 = (ushort *)&UNK_10dfe4888;
  iStack_58 = iVar6;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0x636d6170,*(undefined8 *)(param_2 + 0x14));
    puVar9 = param_2;
    if (param_2 == (ushort *)0x0) {
      puVar9 = (ushort *)&UNK_10dfe4888;
    }
  }
  if (*(int *)puVar9 != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar4) {
        *(int *)puVar9 = *(int *)puVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_60 = puVar9;
  bVar5 = 0;
  do {
    bStack_68 = bVar5;
    lVar14 = *(long *)(puStack_60 + 8);
    uStack_78._0_4_ = *(uint *)(puStack_60 + 0xc);
    uStack_80 = lVar14 + (ulong)(uint)uStack_78;
    uVar13 = (uint)uStack_78 << 6;
    if (uVar13 < 0x4001) {
      uVar13 = 0x4000;
    }
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uStack_78._4_4_ = 0x3fffffff;
    if ((uint)uStack_78 >> 0x1a == 0) {
      uStack_78._4_4_ = uVar13;
    }
    auStack_90[0] = 0;
    iStack_64 = 0;
    uStack_70 = uStack_70 & 0xffffffff;
    lStack_88 = lVar14;
    if (lVar14 == 0) {
      FUN_1096f5a5c();
      puStack_60 = (ushort *)0x0;
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      goto LAB_1097458dc;
    }
    lVar7 = lVar14;
    FUN_109745dfc(lVar14,auStack_90);
    if ((int)lVar7 != 0) {
      if (iStack_64 == 0) {
        FUN_1096f5a5c(puStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      }
      else {
        iStack_64 = 0;
        FUN_109745dfc(lVar14,auStack_90);
        iVar6 = iStack_64;
        FUN_1096f5a5c(puStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        uVar13 = 0;
        if (iVar6 == 0) {
          uVar13 = (uint)lVar14;
        }
        if ((uVar13 & 1) == 0) goto LAB_1097458cc;
      }
      puStack_60 = (ushort *)0x0;
      uStack_80 = 0;
      lStack_88 = 0;
      if (*(int *)(puVar9 + 2) != 0) {
        puVar9[2] = 0;
        puVar9[3] = 0;
      }
      goto LAB_1097458dc;
    }
    if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_1097458b8;
    if ((*(int *)(puVar9 + 2) == 0) || (puVar8 = puVar9, FUN_1096f59a0(), ((ulong)puVar8 & 1) == 0))
    {
      uStack_80 = (ulong)*(uint *)(puVar9 + 0xc);
      lStack_88 = 0;
      goto LAB_1097458b8;
    }
    uStack_80 = *(long *)(puVar9 + 8) + (ulong)*(uint *)(puVar9 + 0xc);
    bVar5 = 1;
  } while (*(long *)(puVar9 + 8) != 0);
  lStack_88 = 0;
LAB_1097458b8:
  FUN_1096f5a5c(puStack_60);
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_1097458cc:
  puStack_60 = (ushort *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  FUN_1096f5a5c(puVar9);
  puVar9 = (ushort *)&UNK_10dfe4888;
LAB_1097458dc:
  param_1[10] = puVar9;
  FUN_109710c0c(auStack_90);
  puVar9 = (ushort *)&UNK_10dfe4888;
  if ((ushort *)param_1[10] != (ushort *)0x0) {
    puVar9 = (ushort *)param_1[10];
  }
  puVar8 = (ushort *)&UNK_10dfe4888;
  if (3 < *(uint *)(puVar9 + 0xc)) {
    puVar8 = *(ushort **)(puVar9 + 8);
  }
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  auStack_92 = (undefined1  [2])0x0;
  puVar9 = puVar8;
  FUN_109745bb8(puVar8,3,0);
  if (puVar9 == (ushort *)0x0) {
    puVar9 = puVar8;
    FUN_109745bb8(puVar8,3,10);
    if (((((puVar9 != (ushort *)0x0) ||
          (puVar9 = puVar8, FUN_109745bb8(puVar8,0,6), puVar9 != (ushort *)0x0)) ||
         (puVar9 = puVar8, FUN_109745bb8(puVar8,0,4), puVar9 != (ushort *)0x0)) ||
        ((puVar9 = puVar8, FUN_109745bb8(puVar8,3,1), puVar9 != (ushort *)0x0 ||
         (puVar9 = puVar8, FUN_109745bb8(puVar8,0,3), puVar9 != (ushort *)0x0)))) ||
       ((puVar9 = puVar8, FUN_109745bb8(puVar8,0,2), puVar9 != (ushort *)0x0 ||
        ((puVar9 = puVar8, FUN_109745bb8(puVar8,0,1), puVar9 != (ushort *)0x0 ||
         (puVar9 = puVar8, FUN_109745bb8(puVar8,0,0), puVar9 != (ushort *)0x0))))))
    goto LAB_1097459d8;
    puVar9 = puVar8;
    FUN_109745bb8(puVar8,1,0);
    if (puVar9 == (ushort *)0x0) {
      puVar9 = puVar8;
      FUN_109745bb8(puVar8,1,0xffff);
      if (puVar9 == (ushort *)0x0) {
        puVar9 = (ushort *)&UNK_10dfe4888;
        goto LAB_1097459d8;
      }
      puVar10 = (uint *)(auStack_92 + 1);
    }
    else {
      auStack_92[1] = 1;
      puVar10 = (uint *)auStack_92;
    }
  }
  else {
    puVar10 = auStack_90;
  }
  *(undefined1 *)puVar10 = 1;
LAB_1097459d8:
  *param_1 = puVar9;
  param_1[1] = &UNK_10dfe4888;
  FUN_109745bb8(puVar8,0,5);
  if ((puVar8 != (ushort *)0x0) && ((ushort)(*puVar8 >> 8 | *puVar8 << 8) == 0xe)) {
    param_1[1] = puVar8;
  }
  puVar8 = (ushort *)&UNK_10dfe4888;
  if (puVar9 != (ushort *)0x0) {
    puVar8 = puVar9;
  }
  param_1[3] = puVar8;
  uVar2 = *puVar8 >> 8 | *puVar8 << 8;
  if (uVar2 == 4) {
    uVar13 = ((uint)(puVar8[3] >> 8) | (puVar8[3] & 0xff00ff) << 8) >> 1;
    *(uint *)(param_1 + 9) = uVar13;
    uVar12 = (ulong)(uVar13 << 1);
    puVar1 = (undefined *)((long)(puVar8 + 7) + uVar12 + 2);
    param_1[4] = puVar8 + 7;
    param_1[5] = puVar1;
    puVar1 = puVar1 + uVar12;
    param_1[6] = puVar1;
    param_1[7] = puVar1 + uVar12;
    param_1[8] = puVar1 + uVar12 + uVar12;
    *(uint *)((long)param_1 + 0x4c) =
         (((uint)(puVar8[1] >> 8) | (puVar8[1] & 0xff00ff) << 8) + uVar13 * -8) - 0x10 >> 1;
    param_1[3] = param_1 + 4;
    pcVar11 = FUN_109745df4;
  }
  else if (uVar2 == 0xc) {
    pcVar11 = FUN_109745df4;
  }
  else {
    pcVar11 = FUN_109745c78;
  }
  param_1[2] = pcVar11;
  return param_1;
}



/* Entry: 109745bb8; end: 109745c77;  */

long FUN_109745bb8(long param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  if (uVar9 == 0) {
    puVar6 = &UNK_10dfe4888;
  }
  else {
    iVar8 = 0;
    iVar7 = uVar9 - 1;
    puVar6 = &UNK_10dfe4888;
    do {
      uVar4 = (uint)(iVar7 + iVar8) >> 1;
      puVar1 = (ushort *)(param_1 + 4 + (ulong)uVar4 * 8);
      uVar3 = *puVar1;
      uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      uVar9 = (uint)(uVar5 < param_2);
      if (param_2 < uVar5) {
        uVar9 = 0xffffffff;
      }
      if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) == param_2) {
        if (param_3 != 0xffff) {
          uVar3 = puVar1[1];
          uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
          uVar9 = (uint)(uVar5 < param_3);
          if (param_3 < uVar5) {
            uVar9 = 0xffffffff;
          }
          if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) != param_3) goto LAB_109745c30;
        }
LAB_109745c50:
        puVar6 = (undefined *)(param_1 + 4 + (ulong)uVar4 * 8);
        break;
      }
LAB_109745c30:
      if ((int)uVar9 < 0) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (uVar9 == 0) goto LAB_109745c50;
        iVar8 = uVar4 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  uVar9 = (*(uint *)(puVar6 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar6 + 4) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  lVar2 = 0;
  if (uVar9 != 0) {
    lVar2 = param_1 + (ulong)uVar9;
  }
  return lVar2;
}



/* Entry: 109745c78; end: 109745df3;  */

undefined1 * FUN_109745c78(ushort *param_1,ulong param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  ushort **ppuVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  uint uStack_28;
  uint uStack_24;
  
  ppuVar4 = &puStack_50;
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  uVar5 = (uint)param_2;
  if (uVar3 < 10) {
    if (uVar3 == 0) {
      if (0xff < uVar5) {
        return (undefined1 *)0x0;
      }
      bVar1 = *(byte *)((long)param_1 + (param_2 & 0xffffffff) + 6);
      uVar5 = (uint)bVar1;
      if (bVar1 == 0) {
        return (undefined1 *)0x0;
      }
      goto LAB_109745d50;
    }
    if (uVar3 == 4) {
      uStack_28 = ((uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8) >> 1;
      puStack_50 = param_1 + 7;
      uVar6 = (ulong)(uStack_28 << 1);
      lStack_48 = (long)puStack_50 + uVar6 + 2;
      lStack_40 = lStack_48 + uVar6;
      lStack_38 = lStack_40 + uVar6;
      lStack_30 = lStack_38 + uVar6;
      uStack_24 = (((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) + uStack_28 * -8) - 0x10
                  >> 1;
      func_0x0001097464d8(&puStack_50,param_2,param_3);
      return (undefined1 *)ppuVar4;
    }
    if (uVar3 != 6) {
      return (undefined1 *)0x0;
    }
    uVar5 = uVar5 - ((uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8);
    if (uVar5 < ((uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8)) {
      param_1 = param_1 + (ulong)uVar5 + 5;
    }
    else {
LAB_109745de8:
      param_1 = (ushort *)&UNK_10dfe4888;
    }
  }
  else {
    if (uVar3 != 10) {
      if (uVar3 == 0xc) {
        uVar5 = (int)param_1 + 0xc;
        func_0x000109746458();
        FUN_109712054();
        if (uVar5 != 0) {
          *param_3 = uVar5;
        }
        return (undefined1 *)(ulong)(uVar5 != 0);
      }
      if (uVar3 != 0xd) {
        return (undefined1 *)0x0;
      }
      param_1 = param_1 + 6;
      func_0x000109746458();
      uVar5 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (uVar5 == 0) {
        return (undefined1 *)0x0;
      }
      goto LAB_109745d50;
    }
    uVar2 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
    uVar5 = uVar5 - (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
    if ((uVar2 >> 0x10 | uVar2 << 0x10) <= uVar5) goto LAB_109745de8;
    param_1 = param_1 + (ulong)uVar5 + 10;
  }
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 == 0) {
    return (undefined1 *)0x0;
  }
LAB_109745d50:
  *param_3 = uVar5;
  return (undefined1 *)0x1;
}



/* Entry: 109745df4; end: 109745dfb;  */

bool FUN_109745df4(int param_1,undefined8 param_2,int *param_3)

{
  param_1 = param_1 + 0xc;
  FUN_109746458();
  FUN_109712054();
  if (param_1 != 0) {
    *param_3 = param_1;
  }
  return param_1 != 0;
}



/* Entry: 109745dfc; end: 1097463a3;  */

undefined8 FUN_109745dfc(char *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  char *pcVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  ushort *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  
  pcVar4 = param_1 + 4;
  if ((((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8))) ||
        (param_1[1] != '\0' || *param_1 != '\0')) ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8)))) ||
      (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8)) ||
       (uVar8 = (uint)(byte)param_1[2] << 0xb | (uint)(byte)param_1[3] << 3,
       (uint)(*(int *)(param_2 + 0x10) - (int)pcVar4) < uVar8)))) ||
     (iVar11 = *(int *)(param_2 + 0x1c) - uVar8, *(int *)(param_2 + 0x1c) = iVar11, iVar11 < 1)) {
LAB_109745e2c:
    uVar14 = 0;
  }
  else {
    uVar8 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    if (uVar8 != 0) {
      uVar22 = 0;
      do {
        if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
            pcVar4 + (uVar22 * 8 - *(long *)(param_2 + 8)) + 8) goto LAB_109745e2c;
        uVar16 = (*(uint *)(pcVar4 + uVar22 * 8 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar4 + uVar22 * 8 + 4) & 0xff00ff) << 8;
        uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
        if (uVar16 == 0) goto LAB_109745f28;
        puVar15 = (ushort *)(param_1 + uVar16);
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)(puVar15 + 1) - *(long *)(param_2 + 8))
           ) goto LAB_109745f04;
        uVar10 = *puVar15 >> 8 | *puVar15 << 8;
        if (uVar10 < 10) {
          if (uVar10 == 0) {
            if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                (char *)((long)puVar15 + (0x106 - *(long *)(param_2 + 8)))) goto LAB_109745f04;
          }
          else if (uVar10 == 4) {
            if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                (char *)((long)puVar15 + (0xe - *(long *)(param_2 + 8)))) goto LAB_109745f04;
            uVar16 = (uint)(puVar15[1] >> 8) | (puVar15[1] & 0xff00ff) << 8;
            uVar19 = *(long *)(param_2 + 0x10) - (long)puVar15;
            bVar12 = false;
            bVar13 = true;
            if ((ulong)((long)puVar15 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
            {
              bVar13 = (uint)uVar19 <= uVar16;
              bVar12 = uVar16 == (uint)uVar19;
            }
            if ((bVar13 && !bVar12) ||
               (iVar11 = *(int *)(param_2 + 0x1c) - uVar16, *(int *)(param_2 + 0x1c) = iVar11,
               iVar11 < 1)) {
              if (0xfffe < uVar19) {
                uVar19 = 0xffff;
              }
              if (*(uint *)(param_2 + 0x2c) < 0x20) {
                uVar18 = *(uint *)(param_2 + 0x2c) + 1;
                *(uint *)(param_2 + 0x2c) = uVar18;
                if (*(char *)(param_2 + 0x28) == '\x01') {
                  uVar16 = (uint)uVar19;
                  uVar18 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                  puVar15[1] = (ushort)uVar18;
                  uVar16 = (uVar16 & 0xff00ff00) >> 8 & 0xff;
                  uVar18 = (uVar18 & 0xffff) >> 8;
                  goto LAB_109746320;
                }
                goto LAB_109745f08;
              }
              goto LAB_109745e2c;
            }
            uVar16 = (uint)(byte)puVar15[1];
            uVar18 = (uint)*(byte *)((long)puVar15 + 3);
LAB_109746320:
            if ((uVar18 | uVar16 << 8) <
                ((uint)(byte)puVar15[3] << 10 | (uint)*(byte *)((long)puVar15 + 7) << 2) + 0x10)
            goto LAB_109745f04;
          }
          else if (uVar10 == 6) {
            if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                (char *)((long)puVar15 + (10 - *(long *)(param_2 + 8)))) goto LAB_109745f04;
            puVar15 = puVar15 + 4;
            func_0x00010972bb24(puVar15,param_2);
            goto joined_r0x000109745f9c;
          }
        }
        else if (uVar10 < 0xd) {
          if (uVar10 == 10) {
            puVar5 = puVar15 + 10;
            if (((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))
                  ) || ((int)((uint)(byte)puVar15[8] << 0x18) < 0)) ||
                ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))))
               || ((uVar16 = (uint)*(byte *)((long)puVar15 + 0x13) |
                             (uint)*(byte *)((long)puVar15 + 0x11) << 0x10 |
                             (uint)(byte)puVar15[9] << 8 | (uint)(byte)puVar15[8] << 0x18,
                   (uint)(*(int *)(param_2 + 0x10) - (int)puVar5) < uVar16 * 2 ||
                   (iVar11 = *(int *)(param_2 + 0x1c) + uVar16 * -2,
                   *(int *)(param_2 + 0x1c) = iVar11, iVar11 < 1)))) goto LAB_109745f04;
          }
          else if (uVar10 == 0xc) goto LAB_10974629c;
        }
        else if (uVar10 == 0xd) {
LAB_10974629c:
          if ((char *)((long)puVar15 + (0x10 - *(long *)(param_2 + 8))) <=
              (char *)(ulong)*(uint *)(param_2 + 0x18)) {
            puVar15 = puVar15 + 6;
            FUN_1097463a4(puVar15,param_2);
joined_r0x000109745f9c:
            if (((ulong)puVar15 & 1) != 0) goto LAB_109745f28;
          }
LAB_109745f04:
          uVar18 = *(uint *)(param_2 + 0x2c);
LAB_109745f08:
          if ((0x1f < uVar18) ||
             (*(uint *)(param_2 + 0x2c) = uVar18 + 1, *(char *)(param_2 + 0x28) != '\x01'))
          goto LAB_109745e2c;
          pcVar1 = pcVar4 + uVar22 * 8 + 4;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
        }
        else if (uVar10 == 0xe) {
          puVar5 = puVar15 + 5;
          if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8)))
              || (uVar18 = (*(uint *)(puVar15 + 3) & 0xff00ff00) >> 8 |
                           (*(uint *)(puVar15 + 3) & 0xff00ff) << 8,
                 uVar19 = (ulong)(uVar18 >> 0x10 | uVar18 << 0x10) * 0xb,
                 (uVar19 & 0xffffffff00000000) != 0)) ||
             (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8)) ||
              ((uVar18 = (uint)uVar19, (uint)(*(int *)(param_2 + 0x10) - (int)puVar5) < uVar18 ||
               (iVar11 = *(int *)(param_2 + 0x1c) - uVar18, *(int *)(param_2 + 0x1c) = iVar11,
               iVar11 < 1)))))) goto LAB_109745f04;
          uVar18 = (*(uint *)(puVar15 + 3) & 0xff00ff00) >> 8 |
                   (*(uint *)(puVar15 + 3) & 0xff00ff) << 8;
          uVar9 = uVar18 >> 0x10 | uVar18 << 0x10;
          if (uVar9 != 0) {
            lVar17 = 0;
            do {
              lVar20 = (lVar17 + (ulong)uVar16) - *(long *)(param_2 + 8);
              if (((char *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + lVar20 + 0x15) ||
                 ((char *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + lVar20 + 0x11))
              goto LAB_109745f04;
              lVar20 = *(long *)(param_2 + 8);
              pbVar21 = (byte *)(ulong)*(uint *)(param_2 + 0x18);
              uVar18 = (uint)*(byte *)((long)puVar15 + lVar17 + 0xd) << 0x18 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0xe) << 0x10 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0xf) << 8 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0x10);
              if (uVar18 != 0) {
                pbVar2 = (byte *)((long)puVar15 + (ulong)uVar18);
                pbVar6 = pbVar2 + 4;
                if ((pbVar6 + -lVar20 <= pbVar21) && (*pbVar2 < 0x40)) {
                  lVar20 = *(long *)(param_2 + 8);
                  pbVar21 = (byte *)(ulong)*(uint *)(param_2 + 0x18);
                  if ((pbVar6 + -lVar20 <= pbVar21) &&
                     ((uVar18 = ((uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[3])
                                << 2 | (uint)pbVar2[2] << 10,
                      uVar18 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar6) &&
                      (iVar11 = *(int *)(param_2 + 0x1c) - uVar18, *(int *)(param_2 + 0x1c) = iVar11
                      , 0 < iVar11)))) goto LAB_10974612c;
                }
                if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_109745e2c;
                uVar18 = *(uint *)(param_2 + 0x2c) + 1;
                *(uint *)(param_2 + 0x2c) = uVar18;
                if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_109745f08;
                pcVar1 = (char *)((long)puVar15 + lVar17 + 0xd);
                pcVar1[0] = '\0';
                pcVar1[1] = '\0';
                pcVar1[2] = '\0';
                pcVar1[3] = '\0';
                lVar20 = *(long *)(param_2 + 8);
                pbVar21 = (byte *)(ulong)*(uint *)(param_2 + 0x18);
              }
LAB_10974612c:
              if (pbVar21 < param_1 + ((lVar17 + (ulong)uVar16) - lVar20) + 0x15)
              goto LAB_109745f04;
              uVar18 = (uint)*(byte *)((long)puVar15 + lVar17 + 0x11) << 0x18 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0x12) << 0x10 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0x13) << 8 |
                       (uint)*(byte *)((long)puVar15 + lVar17 + 0x14);
              if (uVar18 != 0) {
                puVar3 = (uint *)((long)puVar15 + (ulong)uVar18);
                puVar7 = puVar3 + 1;
                if (((((ulong)*(uint *)(param_2 + 0x18) <
                       (ulong)((long)puVar7 - *(long *)(param_2 + 8))) ||
                     (uVar18 = *puVar3,
                     uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8,
                     uVar19 = (ulong)(uVar18 >> 0x10 | uVar18 << 0x10) * 5,
                     (uVar19 & 0xffffffff00000000) != 0)) ||
                    ((ulong)*(uint *)(param_2 + 0x18) <
                     (ulong)((long)puVar7 - *(long *)(param_2 + 8)))) ||
                   ((uVar18 = (uint)uVar19, (uint)(*(int *)(param_2 + 0x10) - (int)puVar7) < uVar18
                    || (iVar11 = *(int *)(param_2 + 0x1c) - uVar18,
                       *(int *)(param_2 + 0x1c) = iVar11, iVar11 < 1)))) {
                  if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_109745e2c;
                  uVar18 = *(uint *)(param_2 + 0x2c) + 1;
                  *(uint *)(param_2 + 0x2c) = uVar18;
                  if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_109745f08;
                  pcVar1 = (char *)((long)puVar15 + lVar17 + 0x11);
                  pcVar1[0] = '\0';
                  pcVar1[1] = '\0';
                  pcVar1[2] = '\0';
                  pcVar1[3] = '\0';
                }
              }
              lVar17 = lVar17 + 0xb;
            } while ((ulong)uVar9 * 0xb - lVar17 != 0);
          }
        }
LAB_109745f28:
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar8);
    }
    uVar14 = 1;
  }
  return uVar14;
}



/* Entry: 1097463a4; end: 109746417;  */

bool FUN_1097463a4(uint *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = param_1 + 1;
  if (((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       (uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8,
       uVar4 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10) * 0xc, (uVar4 & 0xffffffff00000000) == 0)) &&
      ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar3 = (uint)uVar4, uVar3 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1))) {
    iVar2 = *(int *)(param_2 + 0x1c) - uVar3;
    *(int *)(param_2 + 0x1c) = iVar2;
    return 0 < iVar2;
  }
  return false;
}



/* Entry: 109746418; end: 109746457;  */

bool FUN_109746418(int param_1,undefined8 param_2,int *param_3)

{
  param_1 = param_1 + 0xc;
  FUN_109746458();
  FUN_109712054();
  if (param_1 != 0) {
    *param_3 = param_1;
  }
  return param_1 != 0;
}



/* Entry: 109746458; end: 1097465af;  */

uint * FUN_109746458(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  iVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    do {
      uVar1 = (uint)(iVar3 + iVar4) >> 1;
      uVar2 = param_1[(ulong)uVar1 * 3 + 1];
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      if (param_2 < (uVar2 >> 0x10 | uVar2 << 0x10)) {
        iVar3 = uVar1 - 1;
      }
      else {
        uVar2 = (param_1 + (ulong)uVar1 * 3 + 1)[1];
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        if (param_2 <= (uVar2 >> 0x10 | uVar2 << 0x10)) {
          return param_1 + (ulong)uVar1 * 3 + 1;
        }
        iVar4 = uVar1 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return (uint *)&UNK_10dfe4b1b;
}



/* Entry: 1097465b0; end: 1097465df;  */

long FUN_1097465b0(long param_1)

{
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
  return param_1;
}



/* Entry: 1097465e0; end: 10974666b;  */

void FUN_1097465e0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0x12], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10974666c();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974666c; end: 10974688b;  */

int * FUN_10974666c(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  auStack_80[0] = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_44 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x66766172,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulong)param_1 >> 0x20);
  bVar5 = 0;
  while( true ) {
    bStack_58 = bVar5;
    lVar8 = *(long *)(CONCAT44(uStack_4c,uStack_50) + 0x10);
    uStack_68._0_4_ = *(uint *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar1 = (uint)uStack_68 << 6;
    if (uVar1 < 0x4001) {
      uVar1 = 0x4000;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar1;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      uStack_50 = 0;
      uStack_4c = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_1097467c8;
    }
    lVar6 = lVar8;
    FUN_10974688c(lVar8,auStack_80);
    if ((int)lVar6 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_1097467a4;
    if ((param_1[1] == 0) || (piVar7 = param_1, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_1097467a4;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar5 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_1097467a4:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_1097467b8:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_1097467c8:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_10974688c(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    if (((uint)(iVar4 == 0) & (uint)lVar8) == 0) goto LAB_1097467b8;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_1097467c8;
}



/* Entry: 10974688c; end: 1097469d3;  */

bool FUN_10974688c(ushort *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((((ulong)((long)param_1 + (4 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
       && ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) &&
      ((ulong)((long)param_1 + (0x10 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
      ) && ((ushort)(param_1[5] >> 8 | param_1[5] << 8) == 0x14)) {
    if (((uint)(byte)param_1[4] << 10 | (uint)*(byte *)((long)param_1 + 9) << 2) + 4 <=
        ((uint)(param_1[7] >> 8) | (param_1[7] & 0xff00ff) << 8)) {
      uVar3 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar1 = &UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar1 = (undefined *)((long)param_1 + (ulong)uVar3);
      }
      if ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
        uVar3 = (uint)CONCAT11((byte)param_1[4],*(byte *)((long)param_1 + 9));
        iVar4 = (int)*(undefined8 *)(param_2 + 0x10);
        if (uVar3 * 0x14 <= (uint)(iVar4 - (int)puVar1)) {
          iVar2 = *(int *)(param_2 + 0x1c) + uVar3 * -0x14;
          *(int *)(param_2 + 0x1c) = iVar2;
          if (0 < iVar2) {
            uVar3 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
            puVar1 = &UNK_10dfe4888;
            if (uVar3 != 0) {
              puVar1 = (undefined *)((long)param_1 + (ulong)uVar3);
            }
            if ((ulong)*(uint *)(param_2 + 0x18) <
                (ulong)((long)(puVar1 + (ulong)((uint)(param_1[4] >> 8) |
                                               (param_1[4] & 0xff00ff) << 8) * 0x14) -
                       *(long *)(param_2 + 8))) {
              return false;
            }
            uVar3 = ((uint)(param_1[7] >> 8) | (param_1[7] & 0xff00ff) << 8) *
                    ((uint)(param_1[6] >> 8) | (param_1[6] & 0xff00ff) << 8);
            if ((uint)(iVar4 - (int)(puVar1 + (ulong)((uint)(param_1[4] >> 8) |
                                                     (param_1[4] & 0xff00ff) << 8) * 0x14)) < uVar3)
            {
              return false;
            }
            iVar2 = iVar2 - uVar3;
            *(int *)(param_2 + 0x1c) = iVar2;
            return 0 < iVar2;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1097469d4; end: 109746a5f;  */

void FUN_1097469d4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0x13], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_109746a60();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 109746a60; end: 109746c7b;  */

int * FUN_109746a60(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  auStack_80[0] = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_44 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x61766172,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulong)param_1 >> 0x20);
  bVar4 = 0;
  while( true ) {
    bStack_58 = bVar4;
    lVar8 = *(long *)(CONCAT44(uStack_4c,uStack_50) + 0x10);
    uStack_68._0_4_ = *(uint *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      uStack_50 = 0;
      uStack_4c = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_109746bbc;
    }
    lVar5 = lVar8;
    FUN_109746c7c(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_109746b98;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_109746b98;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar4 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_109746b98:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_109746bac:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_109746bbc:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_109746c7c(lVar8,auStack_80);
    iVar3 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar3 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_109746bac;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_109746bbc;
}



/* Entry: 109746c7c; end: 109746db3;  */

ushort * FUN_109746c7c(ushort *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  if (((ulong)((long)param_1 + (4 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) &&
     (uVar7 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8, uVar7 - 1 < 2)) {
    puVar8 = param_1 + 4;
    lVar4 = *(long *)(param_2 + 8);
    uVar5 = (ulong)*(uint *)(param_2 + 0x18);
    if ((ulong)((long)puVar8 - lVar4) <= uVar5) {
      uVar6 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
      if (uVar6 != 0) {
        do {
          puVar3 = puVar8 + 1;
          if (uVar5 < (ulong)((long)puVar3 - lVar4)) {
            return (ushort *)0x0;
          }
          lVar4 = *(long *)(param_2 + 8);
          uVar5 = (ulong)*(uint *)(param_2 + 0x18);
          if (uVar5 < (ulong)((long)puVar3 - lVar4)) {
            return (ushort *)0x0;
          }
          uVar7 = (uint)(byte)*puVar8 << 10 | (uint)*(byte *)((long)puVar8 + 1) << 2;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar3) < uVar7) {
            return (ushort *)0x0;
          }
          iVar2 = *(int *)(param_2 + 0x1c) - uVar7;
          *(int *)(param_2 + 0x1c) = iVar2;
          if (iVar2 < 1) {
            return (ushort *)0x0;
          }
          puVar8 = puVar8 + (ulong)(byte)*puVar8 * 0x200 +
                            (ulong)*(byte *)((long)puVar8 + 1) * 2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar7 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
      }
      if (uVar7 < 2) {
        return (ushort *)0x1;
      }
      puVar3 = puVar8;
      FUN_10971e098(puVar8,param_2,param_1);
      if ((int)puVar3 == 0) {
        return puVar3;
      }
      puVar1 = (uint *)(puVar8 + 2);
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (4 - *(long *)(param_2 + 8)))) {
        return (ushort *)0x0;
      }
      uVar7 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (uVar7 != 0) {
        uVar5 = (long)param_1 + (ulong)uVar7;
        FUN_10971e1dc();
        if ((uVar5 & 1) == 0) {
          if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
             (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
             *(char *)(param_2 + 0x28) != '\x01')) {
            return (ushort *)0x0;
          }
          *puVar1 = 0;
        }
      }
      return (ushort *)0x1;
    }
  }
  return (ushort *)0x0;
}



/* Entry: 109746db4; end: 109746e3f;  */

void FUN_109746db4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-6], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_109746e40();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 109746e40; end: 10974705b;  */

int * FUN_109746e40(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  auStack_80[0] = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_44 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x4f532f32,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulong)param_1 >> 0x20);
  bVar4 = 0;
  while( true ) {
    bStack_58 = bVar4;
    lVar8 = *(long *)(CONCAT44(uStack_4c,uStack_50) + 0x10);
    uStack_68._0_4_ = *(uint *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      uStack_50 = 0;
      uStack_4c = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_109746f9c;
    }
    lVar5 = lVar8;
    FUN_10974705c(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_109746f78;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_109746f78;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar4 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_109746f78:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_109746f8c:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_109746f9c:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_10974705c(lVar8,auStack_80);
    iVar3 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar3 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_109746f8c;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_109746f9c;
}



/* Entry: 10974705c; end: 1097470cf;  */

undefined8 FUN_10974705c(ushort *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (0x4e - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = *param_1 >> 8 | *param_1 << 8;
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (uVar3 < (ulong)((long)param_1 + (0x56 - lVar2))) {
      return 0;
    }
    if (uVar1 != 1) {
      if (uVar3 < (ulong)((long)param_1 + (0x60 - lVar2))) {
        return 0;
      }
      if ((4 < uVar1) && (uVar3 < (ulong)((long)param_1 + (100 - lVar2)))) {
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 1097470d0; end: 109747257;  */

undefined8 *
FUN_1097470d0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4,long param_5,
             int param_6)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_3 + 0x70);
  puVar1 = (undefined *)(*(long *)(param_3 + 0xb8) + (ulong)param_4 * 0x30);
  if (*(uint *)(param_3 + 0xb4) <= param_4) {
    puVar1 = &UNK_10dfe4888;
  }
  uVar7 = *(undefined8 *)(puVar1 + 0x20);
  _bzero((long)param_1 + 0x14,0x100c);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  *(undefined1 *)(param_1 + 0x209) = 0;
  *(undefined4 *)((long)param_1 + 0x104c) = 0;
  lVar4 = -0xf0;
  do {
    *(undefined8 *)((long)param_1 + lVar4 + 0x1148) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1140) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  uVar2 = *(uint *)(param_2 + 1);
  param_1[0x204] = *param_2;
  param_1[0x205] = (ulong)uVar2;
  param_1[0x206] = 0;
  *(undefined2 *)((long)param_1 + 0x1039) = 1;
  *(undefined4 *)((long)param_1 + 0x103c) = 0;
  param_1[0x208] = 0;
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  FUN_109747258(param_1 + 0x228,uVar6);
  FUN_109747258(param_1 + 0x22a,uVar7);
  bVar3 = false;
  param_1[0x233] = 0;
  param_1[0x232] = 0;
  *(undefined2 *)((long)param_1 + 0x11a1) = 0;
  param_1[0x22e] = param_5;
  *(int *)(param_1 + 0x22f) = param_6;
  pcVar5 = *(char **)(param_3 + 0x78);
  param_1[0x230] = pcVar5;
  if ((param_5 != 0) && (param_6 != 0)) {
    bVar3 = pcVar5[1] != '\0' || *pcVar5 != '\0';
  }
  *(bool *)(param_1 + 0x234) = bVar3;
  puVar1 = (undefined *)(*(long *)(param_3 + 0xb8) + (ulong)param_4 * 0x30);
  if (*(uint *)(param_3 + 0xb4) <= param_4) {
    puVar1 = &UNK_10dfe4888;
  }
  *(undefined4 *)((long)param_1 + 0x118c) = *(undefined4 *)(puVar1 + 0x28);
  return param_1;
}



/* Entry: 109747258; end: 109747297;  */

void FUN_109747258(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(uint **)(param_1 + 2) = param_2;
  if (param_2 == (uint *)0x0) {
    uVar2 = 0x6b;
  }
  else {
    uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = 0x46b;
    if (0x846b < uVar1) {
      uVar3 = 0x8000;
    }
    uVar2 = 0x6b;
    if (0x4d7 < uVar1) {
      uVar2 = uVar3;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 109747298; end: 1097473ff;  */

void FUN_109747298(undefined8 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (*(int *)((long)param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    uRam000000011382ab30 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(int *)((long)param_1 + 0x14) - 1;
    *(uint *)((long)param_1 + 0x14) = uVar2;
    iVar4 = (int)(double)param_1[(ulong)uVar2 + 3];
  }
  uVar2 = *param_2 + iVar4;
  uVar5 = (ulong)uVar2;
  if (((((int)uVar2 < 0) || (*(uint **)(param_2 + 2) == (uint *)0x0)) ||
      (uVar1 = **(uint **)(param_2 + 2), uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8
      , (uVar1 >> 0x10 | uVar1 << 0x10) <= uVar2)) ||
     (uVar1 = *(uint *)((long)param_1 + 0x104c), 9 < uVar1)) {
    *(int *)((long)param_1 + 0xc) = *(int *)(param_1 + 1) + 1;
    return;
  }
  uVar6 = *param_1;
  param_1[0x205] = param_1[1];
  param_1[0x204] = uVar6;
  *(uint *)((long)param_1 + 0x104c) = uVar1 + 1;
  param_1[(ulong)uVar1 * 3 + 0x20b] = param_1[1];
  param_1[(ulong)uVar1 * 3 + 0x20a] = uVar6;
  param_1[(ulong)uVar1 * 3 + 0x20c] = param_1[0x206];
  puVar3 = *(uint **)(param_2 + 2);
  if (puVar3 != (uint *)0x0) {
    uVar1 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
    if (uVar2 < (uVar1 >> 0x10 | uVar1 << 0x10)) {
      FUN_10970098c();
      uVar5 = uVar5 & 0xffffffff;
      goto LAB_109747348;
    }
    puVar3 = (uint *)0x0;
  }
  uVar5 = 0;
LAB_109747348:
  param_1[0x204] = puVar3;
  param_1[0x205] = uVar5;
  *(undefined4 *)(param_1 + 0x206) = param_3;
  *(uint *)((long)param_1 + 0x1034) = uVar2;
  param_1[1] = param_1[0x205];
  *param_1 = param_1[0x204];
  return;
}



/* Entry: 109747400; end: 109747453;  */

void FUN_109747400(long param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_2;
  if (dVar1 < *(double *)(param_1 + 8)) {
    *(double *)(param_1 + 8) = dVar1;
    dVar1 = *param_2;
  }
  if (*(double *)(param_1 + 0x18) < dVar1) {
    *(double *)(param_1 + 0x18) = dVar1;
  }
  dVar1 = param_2[1];
  if (dVar1 < *(double *)(param_1 + 0x10)) {
    *(double *)(param_1 + 0x10) = dVar1;
    dVar1 = param_2[1];
  }
  if (*(double *)(param_1 + 0x20) < dVar1) {
    *(double *)(param_1 + 0x20) = dVar1;
  }
  return;
}



/* Entry: 109747454; end: 1097474db;  */

void FUN_109747454(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    *param_2 = 1;
    FUN_109747400(param_2,param_1 + 0x1160);
  }
  FUN_109747400(param_2,param_3);
  FUN_109747400(param_2,param_4);
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x1168) = param_5[1];
  *(undefined8 *)(param_1 + 0x1160) = uVar2;
  dVar1 = *(double *)(param_1 + 0x1160);
  if (dVar1 < *(double *)(param_2 + 8)) {
    *(double *)(param_2 + 8) = dVar1;
    dVar1 = *(double *)(param_1 + 0x1160);
  }
  if (*(double *)(param_2 + 0x18) < dVar1) {
    *(double *)(param_2 + 0x18) = dVar1;
  }
  dVar1 = *(double *)(param_1 + 0x1168);
  if (dVar1 < *(double *)(param_2 + 0x10)) {
    *(double *)(param_2 + 0x10) = dVar1;
    dVar1 = *(double *)(param_1 + 0x1168);
  }
  if (*(double *)(param_2 + 0x20) < dVar1) {
    *(double *)(param_2 + 0x20) = dVar1;
  }
  return;
}



/* Entry: 1097474dc; end: 109747747;  */

void FUN_1097474dc(undefined4 param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined4 *puStack_68;
  
  if ((*(byte *)(param_2 + 0x11a2) & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_2 + 0x1180);
  puVar9 = (uint *)&UNK_10dfe4888;
  if (*(uint *)(param_2 + 0x118c) <
      ((uint)(*(ushort *)(lVar8 + 8) >> 8) | (*(ushort *)(lVar8 + 8) & 0xff00ff) << 8)) {
    puVar9 = (uint *)(lVar8 + (ulong)*(uint *)(param_2 + 0x118c) * 4 + 10);
  }
  uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  puVar9 = (uint *)&UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar9 = (uint *)(lVar8 + 2 + (ulong)uVar4);
  }
  uVar4 = (uint)(ushort)((ushort)puVar9[1] >> 8) | ((ushort)puVar9[1] & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x1188) = uVar4;
  if (*(char *)(param_2 + 0x11a0) != '\x01') goto LAB_1097476fc;
  uVar6 = *(uint *)(param_2 + 0x1190);
  if ((int)uVar6 < 0) {
LAB_1097475b8:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
    goto LAB_1097476fc;
  }
  uVar2 = *(uint *)(param_2 + 0x1194);
  uVar5 = uVar2;
  if (uVar2 <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar6 < uVar5 || uVar5 < uVar6 >> 2) {
    if (uVar2 >> 0x1e != 0) {
LAB_1097475b0:
      *(uint *)(param_2 + 0x1190) = ~uVar6;
      goto LAB_1097475b8;
    }
    lVar8 = *(long *)(param_2 + 0x1198);
    if (uVar5 == 0) {
      _free();
      lVar8 = 0;
    }
    else {
      _realloc(lVar8,uVar5 << 2);
      if (lVar8 == 0) {
        uVar6 = *(uint *)(param_2 + 0x1190);
        if (uVar5 <= uVar6) goto LAB_1097475d8;
        goto LAB_1097475b0;
      }
    }
    *(long *)(param_2 + 0x1198) = lVar8;
    *(uint *)(param_2 + 0x1190) = uVar5;
  }
LAB_1097475d8:
  uVar6 = *(uint *)(param_2 + 0x1194);
  if (uVar6 < uVar4) {
    _bzero(*(long *)(param_2 + 0x1198) + (ulong)uVar6 * 4,(uVar4 - uVar6) * 4);
    *(uint *)(param_2 + 0x1194) = uVar4;
    lVar7 = *(long *)(param_2 + 0x1180);
    lVar8 = lVar7 + 2;
    uVar6 = *(uint *)(param_2 + 0x118c);
    uVar10 = *(undefined8 *)(param_2 + 0x1170);
    uVar11 = *(undefined4 *)(param_2 + 0x1178);
LAB_109747630:
    puStack_68 = *(undefined4 **)(param_2 + 0x1198);
  }
  else {
    *(uint *)(param_2 + 0x1194) = uVar4;
    lVar7 = *(long *)(param_2 + 0x1180);
    lVar8 = lVar7 + 2;
    uVar6 = *(uint *)(param_2 + 0x118c);
    uVar10 = *(undefined8 *)(param_2 + 0x1170);
    uVar11 = *(undefined4 *)(param_2 + 0x1178);
    if (uVar4 != 0) goto LAB_109747630;
    puStack_68 = (undefined4 *)0x11382ab30;
    uRam000000011382ab30 = 0;
  }
  uVar4 = *(uint *)(param_2 + 0x1188);
  puVar9 = (uint *)&UNK_10dfe4888;
  if (uVar6 < ((uint)(*(ushort *)(lVar7 + 8) >> 8) | (*(ushort *)(lVar7 + 8) & 0xff00ff) << 8)) {
    puVar9 = (uint *)(lVar7 + (ulong)uVar6 * 4 + 10);
  }
  uVar6 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  puVar9 = (uint *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar9 = (uint *)(lVar8 + (ulong)uVar6);
  }
  uVar6 = (*(uint *)(lVar7 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar7 + 4) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  puVar1 = (uint *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar1 = (uint *)(lVar8 + (ulong)uVar6);
  }
  uVar3 = (ushort)puVar9[1];
  uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
  uVar6 = uVar4;
  if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= uVar4) {
    uVar6 = uVar5;
  }
  uVar12 = (ulong)uVar6;
  if (uVar6 != 0) {
    puVar13 = (undefined *)((long)puVar9 + 7);
    puVar14 = puStack_68;
    do {
      FUN_10971ec24(puVar1,*(ushort *)(puVar13 + -1) >> 8 | *(ushort *)(puVar13 + -1) << 8,uVar10,
                    uVar11,0);
      *puVar14 = param_1;
      puVar13 = puVar13 + 2;
      uVar12 = uVar12 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar12 != 0);
  }
  if (uVar5 < uVar4) {
    _bzero((long)puStack_68 + (ulong)(uVar5 << 2),(ulong)(uVar4 + ~uVar6) * 4 + 4);
  }
LAB_1097476fc:
  *(undefined1 *)(param_2 + 0x11a2) = 1;
  return;
}



/* Entry: 109747748; end: 1097477c7;  */

void FUN_109747748(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    uRam000000011382ab30 = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x14) - 1;
    *(uint *)(param_1 + 0x14) = uVar1;
    iVar2 = (int)*(double *)(param_1 + (ulong)uVar1 * 8 + 0x18);
    if (iVar2 < 0) {
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  if (((*(byte *)(param_1 + 0x11a1) & 1) == 0) && (*(char *)(param_1 + 0x11a2) != '\x01')) {
    lVar3 = 0x118c;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + 1;
    lVar3 = 0xc;
  }
  *(int *)(param_1 + lVar3) = iVar2;
  *(undefined1 *)(param_1 + 0x11a1) = 1;
  return;
}



/* Entry: 1097477c8; end: 109747977;  */

void FUN_1097477c8(float param_1,float param_2,double param_3,double param_4,float *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  
  param_1 = param_1 * (float)param_3;
  lVar1 = *(long *)(param_5 + 2);
  uVar2 = *(undefined8 *)(param_5 + 4);
  if (*(char *)(param_5 + 1) == '\x01') {
    fVar3 = param_5[6];
  }
  else {
    param_1 = param_1 + *param_5 * param_2 * (float)param_4;
    fVar3 = param_5[6];
  }
  if (fVar3 != 0.0) {
    if ((param_5[7] != param_5[9]) || (param_5[8] != param_5[10])) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar2,param_5 + 6,uVar4);
    }
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar2,param_5 + 6,uVar4);
    param_5[8] = 0.0;
    param_5[6] = 0.0;
    param_5[7] = 0.0;
  }
  param_5[9] = param_1;
  param_5[10] = param_2 * (float)param_4;
  return;
}



/* Entry: 109747978; end: 109747abb;  */

void FUN_109747978(float param_1,float param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,float *param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_1 * (float)param_3;
  fVar8 = param_1 * (float)param_5;
  param_1 = param_1 * (float)param_7;
  fVar6 = param_2 * (float)param_8;
  lVar1 = *(long *)(param_9 + 2);
  uVar2 = *(undefined8 *)(param_9 + 4);
  if (*(char *)(param_9 + 1) == '\x01') {
    if (param_9[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar2,param_9 + 6);
    }
    pcVar4 = *(code **)(lVar1 + 0x28);
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  else {
    fVar5 = *param_9;
    if (param_9[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar2,param_9 + 6);
    }
    fVar7 = fVar7 + fVar5 * param_2 * (float)param_4;
    fVar8 = fVar8 + fVar5 * param_2 * (float)param_6;
    pcVar4 = *(code **)(lVar1 + 0x28);
    param_1 = param_1 + fVar5 * fVar6;
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  (*pcVar4)(fVar7,param_2 * (float)param_4,fVar8,param_2 * (float)param_6,param_1,fVar6,lVar1,uVar2,
            param_9 + 6,uVar3);
  param_9[9] = param_1;
  param_9[10] = fVar6;
  return;
}



/* Entry: 109747abc; end: 109747cdb;  */

int * FUN_109747abc(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  auStack_80[0] = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_44 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x4350414c,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulong)param_1 >> 0x20);
  bVar5 = 0;
  while( true ) {
    bStack_58 = bVar5;
    lVar8 = *(long *)(CONCAT44(uStack_4c,uStack_50) + 0x10);
    uStack_68._0_4_ = *(uint *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar1 = (uint)uStack_68 << 6;
    if (uVar1 < 0x4001) {
      uVar1 = 0x4000;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar1;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      uStack_50 = 0;
      uStack_4c = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_109747c18;
    }
    lVar6 = lVar8;
    FUN_109747cdc(lVar8,auStack_80);
    if ((int)lVar6 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_109747bf4;
    if ((param_1[1] == 0) || (piVar7 = param_1, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_109747bf4;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar5 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_109747bf4:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_109747c08:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_109747c18:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_109747cdc(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    if (((uint)(iVar4 == 0) & (uint)lVar8) == 0) goto LAB_109747c08;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_109747c18;
}



/* Entry: 109747cdc; end: 109747f23;  */

bool FUN_109747cdc(char *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar7 = param_1 + 0xc;
  if ((ulong)((long)pcVar7 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    if ((ulong)((long)(param_1 +
                      (ulong)(byte)param_1[0xb] +
                      (ulong)(byte)param_1[10] * 0x100 +
                      (ulong)(byte)param_1[8] * 0x1000000 + (ulong)(byte)param_1[9] * 0x10000) -
               *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
      uVar3 = (uint)(byte)param_1[6] << 10 | (uint)(byte)param_1[7] << 2;
      iVar8 = (int)*(undefined8 *)(param_2 + 0x10);
      if (uVar3 <= (uint)(iVar8 - (int)(param_1 +
                                       (ulong)(byte)param_1[0xb] +
                                       (ulong)(byte)param_1[10] * 0x100 +
                                       (ulong)(byte)param_1[8] * 0x1000000 +
                                       (ulong)(byte)param_1[9] * 0x10000))) {
        iVar4 = *(int *)(param_2 + 0x1c) - uVar3;
        *(int *)(param_2 + 0x1c) = iVar4;
        if (0 < iVar4) {
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar7 - *(long *)(param_2 + 8))) {
            return false;
          }
          uVar3 = (uint)(byte)param_1[4] << 9 | (uint)(byte)param_1[5] << 1;
          if ((uint)(iVar8 - (int)pcVar7) < uVar3) {
            return false;
          }
          iVar4 = iVar4 - uVar3;
          *(int *)(param_2 + 0x1c) = iVar4;
          if (0 < iVar4) {
            if (param_1[1] == '\0' && *param_1 == '\0') {
              return true;
            }
            lVar5 = (ulong)(byte)param_1[4] * 0x200 + (ulong)(byte)param_1[5] * 2;
            lVar6 = *(long *)(param_2 + 8);
            pcVar7 = (char *)(ulong)*(uint *)(param_2 + 0x18);
            if (param_1 + (lVar5 - lVar6) + 0x18 <= pcVar7) {
              uVar3 = (uint)CONCAT11(param_1[4],param_1[5]);
              bVar1 = param_1[2];
              bVar2 = param_1[3];
              if (((param_1[lVar5 + 0xd] == 0 && param_1[lVar5 + 0xc] == 0) &&
                   (param_1[lVar5 + 0xe] == 0 && param_1[lVar5 + 0xf] == 0)) ||
                 (((param_1 + (ulong)(byte)param_1[lVar5 + 0xf] +
                              (ulong)(byte)param_1[lVar5 + 0xe] * 0x100 +
                              (ulong)(byte)param_1[lVar5 + 0xc] * 0x1000000 +
                              (ulong)(byte)param_1[lVar5 + 0xd] * 0x10000 + -lVar6 <= pcVar7 &&
                   (uVar3 * 4 <=
                    (uint)(*(int *)(param_2 + 0x10) -
                          (int)(param_1 +
                               (ulong)(byte)param_1[lVar5 + 0xf] +
                               (ulong)(byte)param_1[lVar5 + 0xe] * 0x100 +
                               (ulong)(byte)param_1[lVar5 + 0xc] * 0x1000000 +
                               (ulong)(byte)param_1[lVar5 + 0xd] * 0x10000)))) &&
                  (iVar8 = *(int *)(param_2 + 0x1c) + uVar3 * -4, *(int *)(param_2 + 0x1c) = iVar8,
                  0 < iVar8)))) {
                if (((param_1[lVar5 + 0x11] == 0 && param_1[lVar5 + 0x10] == 0) &&
                     (param_1[lVar5 + 0x12] == 0 && param_1[lVar5 + 0x13] == 0)) ||
                   (((param_1 + (ulong)(byte)param_1[lVar5 + 0x13] +
                                (ulong)(byte)param_1[lVar5 + 0x12] * 0x100 +
                                (ulong)(byte)param_1[lVar5 + 0x10] * 0x1000000 +
                                (ulong)(byte)param_1[lVar5 + 0x11] * 0x10000 + -lVar6 <= pcVar7 &&
                     (uVar3 * 2 <=
                      (uint)(*(int *)(param_2 + 0x10) -
                            (int)(param_1 +
                                 (ulong)(byte)param_1[lVar5 + 0x13] +
                                 (ulong)(byte)param_1[lVar5 + 0x12] * 0x100 +
                                 (ulong)(byte)param_1[lVar5 + 0x10] * 0x1000000 +
                                 (ulong)(byte)param_1[lVar5 + 0x11] * 0x10000)))) &&
                    (iVar8 = *(int *)(param_2 + 0x1c) + uVar3 * -2, *(int *)(param_2 + 0x1c) = iVar8
                    , 0 < iVar8)))) {
                  if ((param_1[lVar5 + 0x15] == 0 && param_1[lVar5 + 0x14] == 0) &&
                      (param_1[lVar5 + 0x16] == 0 && param_1[lVar5 + 0x17] == 0)) {
                    return true;
                  }
                  if ((param_1 + (ulong)(byte)param_1[lVar5 + 0x17] +
                                 (ulong)(byte)param_1[lVar5 + 0x16] * 0x100 +
                                 (ulong)(byte)param_1[lVar5 + 0x14] * 0x1000000 +
                                 (ulong)(byte)param_1[lVar5 + 0x15] * 0x10000 + -lVar6 <= pcVar7) &&
                     (uVar3 = (uint)bVar1 << 9 | (uint)bVar2 << 1,
                     uVar3 <= (uint)(*(int *)(param_2 + 0x10) -
                                    (int)(param_1 +
                                         (ulong)(byte)param_1[lVar5 + 0x17] +
                                         (ulong)(byte)param_1[lVar5 + 0x16] * 0x100 +
                                         (ulong)(byte)param_1[lVar5 + 0x14] * 0x1000000 +
                                         (ulong)(byte)param_1[lVar5 + 0x15] * 0x10000)))) {
                    iVar8 = *(int *)(param_2 + 0x1c) - uVar3;
                    *(int *)(param_2 + 0x1c) = iVar8;
                    return 0 < iVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 109747f24; end: 109747fbb;  */

void FUN_109747f24(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (*param_1 == 0) {
    do {
      puVar3 = (undefined *)param_1[-0x22];
      if (puVar3 == (undefined *)0x0) {
        return;
      }
      FUN_109747fbc();
      if (puVar3 == (undefined *)0x0) {
        if (*param_1 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = (long)&UNK_10dfe4888;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      }
      else {
        if (*param_1 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = (long)puVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (puVar3 != &UNK_10dfe4888) {
          FUN_1096f5a5c();
        }
      }
    } while (*param_1 == 0);
  }
  return;
}



/* Entry: 109747fbc; end: 109748037;  */

undefined1 * FUN_109747fbc(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined2 uStack_24;
  
  puVar1 = auStack_60;
  auStack_60[0] = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_24 = 1;
  FUN_109748038(auStack_60,param_1,0x434f4c52);
  FUN_109710c0c(auStack_60);
  return (undefined1 *)puVar1;
}



/* Entry: 109748038; end: 1097480cb;  */

int * FUN_109748038(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  int *piVar7;
  
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    iVar6 = param_2[6];
    if (iVar6 == -1) {
      piVar7 = param_2;
      FUN_109710978();
      iVar6 = (int)piVar7;
    }
    param_1[0xe] = iVar6;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (((int)param_3 == 0) || (*(code **)(param_2 + 8) == (code *)0x0)) {
    param_2 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_2 + 8))(param_2,param_3,*(undefined8 *)(param_2 + 10));
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&UNK_10dfe4888;
    }
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar5) {
        *param_2 = *param_2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = 0;
  *(int **)(param_1 + 0xc) = param_2;
  while( true ) {
    *(undefined1 *)(param_1 + 10) = uVar9;
    lVar10 = *(long *)(*(long *)(param_1 + 0xc) + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc) + 0x18);
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar2;
    uVar3 = uVar2 << 6;
    if (uVar3 < 0x4001) {
      uVar3 = 0x4000;
    }
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar2 >> 0x1a == 0) {
      uVar1 = uVar3;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[9] = 0;
    if (lVar10 == 0) {
      FUN_1096f5a5c();
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      return param_2;
    }
    lVar8 = lVar10;
    FUN_10974826c(lVar10,param_1);
    if ((int)lVar8 != 0) {
      if (param_1[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
      }
      else {
        param_1[0xb] = 0;
        FUN_10974826c(lVar10,param_1);
        iVar6 = param_1[0xb];
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        if (((int)lVar10 == 0) || (iVar6 != 0)) goto LAB_1097481d0;
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      param_2[1] = 0;
      return param_2;
    }
    if ((param_1[0xb] == 0) || ((*(byte *)(param_1 + 10) & 1) != 0)) goto LAB_1097481bc;
    if ((param_2[1] == 0) || (piVar7 = param_2, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) break;
    lVar10 = *(long *)(param_2 + 4);
    uVar3 = param_2[6];
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar3;
    uVar9 = 1;
    if (lVar10 == 0) {
LAB_1097481bc:
      FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
LAB_1097481d0:
      FUN_1096f5a5c(param_2);
      return (int *)&UNK_10dfe4888;
    }
  }
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  *(ulong *)(param_1 + 4) = (ulong)uVar3;
  goto LAB_1097481bc;
}



/* Entry: 1097480cc; end: 10974826b;  */

int * FUN_1097480cc(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  undefined1 uVar9;
  long lVar10;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar6) {
        *param_2 = *param_2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar9 = 0;
  *(int **)(param_1 + 0xc) = param_2;
  while( true ) {
    *(undefined1 *)(param_1 + 10) = uVar9;
    lVar10 = *(long *)(*(long *)(param_1 + 0xc) + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc) + 0x18);
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar2;
    uVar4 = uVar2 << 6;
    if (uVar4 < 0x4001) {
      uVar4 = 0x4000;
    }
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar2 >> 0x1a == 0) {
      uVar1 = uVar4;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[9] = 0;
    if (lVar10 == 0) {
      FUN_1096f5a5c();
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      return param_2;
    }
    lVar7 = lVar10;
    FUN_10974826c(lVar10,param_1);
    if ((int)lVar7 != 0) {
      if (param_1[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
      }
      else {
        param_1[0xb] = 0;
        FUN_10974826c(lVar10,param_1);
        iVar3 = param_1[0xb];
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        if (((int)lVar10 == 0) || (iVar3 != 0)) goto LAB_1097481d0;
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      param_2[1] = 0;
      return param_2;
    }
    if ((param_1[0xb] == 0) || ((*(byte *)(param_1 + 10) & 1) != 0)) goto LAB_1097481bc;
    if ((param_2[1] == 0) || (piVar8 = param_2, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) break;
    lVar10 = *(long *)(param_2 + 4);
    uVar4 = param_2[6];
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar4;
    uVar9 = 1;
    if (lVar10 == 0) {
LAB_1097481bc:
      FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
LAB_1097481d0:
      FUN_1096f5a5c(param_2);
      return (int *)&UNK_10dfe4888;
    }
  }
  uVar4 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  *(ulong *)(param_1 + 4) = (ulong)uVar4;
  goto LAB_1097481bc;
}



/* Entry: 10974826c; end: 10974877f;  */

char * FUN_10974826c(char *param_1,long param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  uint *puVar15;
  
  pcVar2 = param_1 + 0xe;
  if ((ulong)((long)pcVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    if ((ulong)((long)(param_1 +
                      (ulong)(byte)param_1[7] +
                      (ulong)(byte)param_1[6] * 0x100 +
                      (ulong)(byte)param_1[5] * 0x10000 + (ulong)(byte)param_1[4] * 0x1000000) -
               *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
      uVar4 = *(ushort *)(param_1 + 2);
      iVar3 = ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      iVar9 = (int)*(undefined8 *)(param_2 + 0x10);
      if ((uint)(iVar3 * 2) <=
          (uint)(iVar9 - (int)(param_1 +
                              (ulong)(byte)param_1[7] +
                              (ulong)(byte)param_1[6] * 0x100 +
                              (ulong)(byte)param_1[5] * 0x10000 +
                              (ulong)(byte)param_1[4] * 0x1000000))) {
        iVar3 = *(int *)(param_2 + 0x1c) + iVar3 * -2;
        *(int *)(param_2 + 0x1c) = iVar3;
        if (((0 < iVar3) &&
            (uVar5 = (uint)(byte)param_1[0xc] << 10 | (uint)(byte)param_1[0xd] << 2,
            (ulong)((long)(param_1 +
                          (ulong)(byte)param_1[0xb] +
                          (ulong)(byte)param_1[10] * 0x100 +
                          (ulong)(byte)param_1[8] * 0x1000000 + (ulong)(byte)param_1[9] * 0x10000) -
                   *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18) &&
            uVar5 <= (uint)(iVar9 - (int)(param_1 +
                                         (ulong)(byte)param_1[0xb] +
                                         (ulong)(byte)param_1[10] * 0x100 +
                                         (ulong)(byte)param_1[8] * 0x1000000 +
                                         (ulong)(byte)param_1[9] * 0x10000)))) &&
           (iVar3 = iVar3 - uVar5, *(int *)(param_2 + 0x1c) = iVar3, 0 < iVar3)) {
          if (param_1[1] == '\0' && *param_1 == '\0') {
            return (char *)0x1;
          }
          pcVar8 = param_1 + 0x12;
          if ((ulong)((long)pcVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
            uVar5 = (*(uint *)(param_1 + 0xe) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 0xe) & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if (uVar5 != 0) {
              puVar1 = (uint *)(param_1 + uVar5);
              puVar15 = puVar1 + 1;
              if ((((ulong)*(uint *)(param_2 + 0x18) <
                    (ulong)((long)puVar15 - *(long *)(param_2 + 8))) ||
                  (uVar10 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8,
                  uVar11 = (ulong)(uVar10 >> 0x10 | uVar10 << 0x10) * 6,
                  (uVar11 & 0xffffffff00000000) != 0)) ||
                 (((ulong)*(uint *)(param_2 + 0x18) <
                   (ulong)((long)puVar15 - *(long *)(param_2 + 8)) ||
                  ((uVar10 = (uint)uVar11, (uint)(*(int *)(param_2 + 0x10) - (int)puVar15) < uVar10
                   || (iVar3 = *(int *)(param_2 + 0x1c) - uVar10, *(int *)(param_2 + 0x1c) = iVar3,
                      iVar3 < 1)))))) {
LAB_109748730:
                if (0x1f < *(uint *)(param_2 + 0x2c)) {
                  return (char *)0x0;
                }
                *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
                if (*(char *)(param_2 + 0x28) != '\x01') {
                  return (char *)0x0;
                }
                pcVar2[0] = '\0';
                pcVar2[1] = '\0';
                pcVar2[2] = '\0';
                pcVar2[3] = '\0';
              }
              else {
                uVar10 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
                uVar11 = (ulong)uVar10;
                if (uVar10 != 0) {
                  pcVar14 = param_1 + uVar5;
                  pcVar12 = pcVar14 + 10;
                  do {
                    pcVar14 = pcVar14 + 6;
                    if (((ulong)*(uint *)(param_2 + 0x18) <
                         (ulong)((long)pcVar12 - *(long *)(param_2 + 8))) ||
                       (pcVar6 = pcVar14, FUN_109748780(pcVar14,param_2,puVar1),
                       ((ulong)pcVar6 & 1) == 0)) goto LAB_109748730;
                    pcVar12 = pcVar12 + 6;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
              }
            }
            pcVar2 = param_1 + 0x16;
            if ((ulong)((long)pcVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
            {
              uVar5 = (*(uint *)(param_1 + 0x12) & 0xff00ff00) >> 8 |
                      (*(uint *)(param_1 + 0x12) & 0xff00ff) << 8;
              uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
              if (uVar5 != 0) {
                puVar1 = (uint *)(param_1 + uVar5);
                puVar15 = puVar1 + 1;
                if (((((ulong)*(uint *)(param_2 + 0x18) <
                       (ulong)((long)puVar15 - *(long *)(param_2 + 8))) || (0x3f < (byte)*puVar1))
                    || ((ulong)*(uint *)(param_2 + 0x18) <
                        (ulong)((long)puVar15 - *(long *)(param_2 + 8)))) ||
                   ((uVar5 = ((uint)(byte)*puVar1 << 0x18 |
                              (uint)*(byte *)((long)puVar1 + 1) << 0x10 |
                             (uint)*(byte *)((long)puVar1 + 3)) << 2 |
                             (uint)*(byte *)((long)puVar1 + 2) << 10,
                    (uint)(*(int *)(param_2 + 0x10) - (int)puVar15) < uVar5 ||
                    (iVar3 = *(int *)(param_2 + 0x1c) - uVar5, *(int *)(param_2 + 0x1c) = iVar3,
                    iVar3 < 1)))) {
LAB_109748758:
                  if (0x1f < *(uint *)(param_2 + 0x2c)) {
                    return (char *)0x0;
                  }
                  *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
                  if (*(char *)(param_2 + 0x28) != '\x01') {
                    return (char *)0x0;
                  }
                  pcVar8[0] = '\0';
                  pcVar8[1] = '\0';
                  pcVar8[2] = '\0';
                  pcVar8[3] = '\0';
                }
                else {
                  uVar5 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                  uVar11 = (ulong)uVar5;
                  if (uVar5 != 0) {
                    do {
                      puVar7 = puVar15;
                      FUN_109748780(puVar15,param_2,puVar1);
                      if (((ulong)puVar7 & 1) == 0) goto LAB_109748758;
                      puVar15 = puVar15 + 1;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                }
              }
              pcVar8 = param_1 + 0x1a;
              if ((ulong)((long)pcVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)
                 ) {
                uVar5 = (*(uint *)(param_1 + 0x16) & 0xff00ff00) >> 8 |
                        (*(uint *)(param_1 + 0x16) & 0xff00ff) << 8;
                uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                if (uVar5 != 0) {
                  pcVar12 = param_1 + (ulong)uVar5 + 5;
                  if ((((ulong)*(uint *)(param_2 + 0x18) <
                        (ulong)((long)pcVar12 - *(long *)(param_2 + 8))) ||
                      (uVar10 = (*(uint *)(param_1 + (ulong)uVar5 + 1) & 0xff00ff00) >> 8 |
                                (*(uint *)(param_1 + (ulong)uVar5 + 1) & 0xff00ff) << 8,
                      uVar11 = (ulong)(uVar10 >> 0x10 | uVar10 << 0x10) * 7,
                      (uVar11 & 0xffffffff00000000) != 0)) ||
                     (((ulong)*(uint *)(param_2 + 0x18) <
                       (ulong)((long)pcVar12 - *(long *)(param_2 + 8)) ||
                      ((uVar10 = (uint)uVar11,
                       (uint)(*(int *)(param_2 + 0x10) - (int)pcVar12) < uVar10 ||
                       (iVar3 = *(int *)(param_2 + 0x1c) - uVar10, *(int *)(param_2 + 0x1c) = iVar3,
                       iVar3 < 1)))))) {
LAB_109748570:
                    if (0x1f < *(uint *)(param_2 + 0x2c)) {
                      return (char *)0x0;
                    }
                    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
                    if (*(char *)(param_2 + 0x28) != '\x01') {
                      return (char *)0x0;
                    }
                    pcVar2[0] = '\0';
                    pcVar2[1] = '\0';
                    pcVar2[2] = '\0';
                    pcVar2[3] = '\0';
                  }
                  else {
                    uVar10 = (*(uint *)(param_1 + (ulong)uVar5 + 1) & 0xff00ff00) >> 8 |
                             (*(uint *)(param_1 + (ulong)uVar5 + 1) & 0xff00ff) << 8;
                    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
                    uVar11 = (ulong)uVar10;
                    if (uVar10 != 0) {
                      pcVar12 = param_1 + (ulong)uVar5 + 0xc;
                      pbVar13 = (byte *)(param_1 + (ulong)uVar5 + 0xb);
                      do {
                        if ((ulong)*(uint *)(param_2 + 0x18) <
                            (ulong)((long)pcVar12 - *(long *)(param_2 + 8))) goto LAB_109748570;
                        uVar10 = (uint)pbVar13[-2] << 0x10 | (uint)pbVar13[-1] << 8 | (uint)*pbVar13
                        ;
                        if (uVar10 == 0) goto LAB_10974867c;
                        pcVar14 = param_1 + (ulong)uVar10 + (ulong)uVar5;
                        if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                            pcVar14 + (1 - *(long *)(param_2 + 8))) {
LAB_109748654:
                          if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                             (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                             *(char *)(param_2 + 0x28) != '\x01')) goto LAB_109748570;
                          pbVar13[-2] = 0;
                          pbVar13[-1] = 0;
                          *pbVar13 = 0;
                        }
                        else if (*pcVar14 == '\x01') {
                          if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                              pcVar14 + (9 - *(long *)(param_2 + 8))) goto LAB_109748654;
                        }
                        else if ((*pcVar14 == '\x02') &&
                                ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                                 pcVar14 + (0xd - *(long *)(param_2 + 8)) ||
                                 (char *)(ulong)*(uint *)(param_2 + 0x18) <
                                 pcVar14 + (9 - *(long *)(param_2 + 8)))) goto LAB_109748654;
LAB_10974867c:
                        pcVar12 = pcVar12 + 7;
                        pbVar13 = pbVar13 + 7;
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                  }
                }
                FUN_10971e098(pcVar8,param_2,param_1);
                if ((int)pcVar8 == 0) {
                  return pcVar8;
                }
                puVar1 = (uint *)(param_1 + 0x1e);
                if ((ulong)*(uint *)(param_2 + 0x18) <
                    (ulong)((long)puVar1 + (4 - *(long *)(param_2 + 8)))) {
                  return (char *)0x0;
                }
                uVar5 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                if (uVar5 != 0) {
                  param_1 = param_1 + uVar5;
                  FUN_10971e1dc();
                  if (((ulong)param_1 & 1) == 0) {
                    if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                       (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                       *(char *)(param_2 + 0x28) != '\x01')) {
                      return (char *)0x0;
                    }
                    *puVar1 = 0;
                  }
                }
                return (char *)0x1;
              }
            }
          }
        }
      }
    }
  }
  return (char *)0x0;
}



/* Entry: 109748780; end: 109748ab3;  */

undefined8 FUN_109748780(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    func_0x00010974880c();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
  }
  return 1;
}



/* Entry: 109748ab4; end: 109748c63;  */

undefined8 FUN_109748ab4(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (3 - *(long *)(param_2 + 8))) {
    return 0;
  }
  uVar4 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  if (uVar4 != 0) {
    param_3 = param_3 + (ulong)uVar4;
    lVar1 = param_3 + 3;
    if (((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar3 = *(ushort *)(param_3 + 1);
      iVar2 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
      if (((uint)(iVar2 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar1)) &&
         (iVar2 = *(int *)(param_2 + 0x1c) + iVar2 * -2, *(int *)(param_2 + 0x1c) = iVar2, 0 < iVar2
         )) {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_2 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
    if (*(char *)(param_2 + 0x28) != '\x01') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 1;
}



/* Entry: 109748c64; end: 109748d03;  */

undefined8 FUN_109748c64(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (3 - *(long *)(param_2 + 8))) {
    return 0;
  }
  uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    func_0x00010974880c();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return 1;
}



/* Entry: 109748d04; end: 109748eab;  */

void FUN_109748d04(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((ulong)((param_1 + 7) - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    lVar2 = param_1 + 1;
    FUN_109748c64(lVar2,param_2,param_1);
    if (((((int)lVar2 != 0) &&
         ((ulong)((param_1 + 7) - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
        (uVar1 = (uint)*(byte *)(param_1 + 4) << 0x10 | (uint)*(byte *)(param_1 + 5) << 8 |
                 (uint)*(byte *)(param_1 + 6), uVar1 != 0)) &&
       ((((ulong)*(uint *)(param_2 + 0x18) <
          ((param_1 + (ulong)uVar1) - *(long *)(param_2 + 8)) + 0x18 &&
         (*(uint *)(param_2 + 0x2c) < 0x20)) &&
        (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
        *(char *)(param_2 + 0x28) == '\x01')))) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  return;
}



/* Entry: 109748eac; end: 10974907f;  */

undefined8 FUN_109748eac(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar4 + 0xcU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar4 + 8U) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 1);
  if (pbVar1 + (3 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    uVar2 = (uint)*pbVar1 << 0x10 | (uint)*(byte *)(param_1 + 2) << 8 | (uint)*(byte *)(param_1 + 3)
    ;
    if (uVar2 != 0) {
      uVar3 = param_1 + (ulong)uVar2;
      func_0x00010974880c();
      if ((uVar3 & 1) == 0) {
        if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
           (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
           *(char *)(param_2 + 0x28) != '\x01')) {
          return 0;
        }
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
      }
    }
    return 1;
  }
  return 0;
}



/* Entry: 109749080; end: 1097490ff;  */

undefined8 FUN_109749080(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (param_1 - *(long *)(param_2 + 8)) + 8U) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar4 = iVar2 + -8;
  if (iVar4 == 0 || iVar2 < 8) {
    iVar4 = -1;
  }
  *(int *)(param_2 + 0x1c) = iVar4;
  if (iVar2 < 9) {
    return 0;
  }
  lVar6 = param_1 + 1;
  FUN_109748c64(lVar6,param_2,param_1);
  if ((int)lVar6 == 0) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 5);
  if (pbVar1 + (3 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    uVar3 = (uint)*pbVar1 << 0x10 | (uint)*(byte *)(param_1 + 6) << 8 | (uint)*(byte *)(param_1 + 7)
    ;
    if (uVar3 != 0) {
      uVar5 = param_1 + (ulong)uVar3;
      func_0x00010974880c();
      if ((uVar5 & 1) == 0) {
        if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
           (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
           *(char *)(param_2 + 0x28) != '\x01')) {
          return 0;
        }
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
    }
    return 1;
  }
  return 0;
}



/* Entry: 109749100; end: 10974914b;  */

void FUN_109749100(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    FUN_1096f5a5c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10974914c; end: 1097493b3;  */

undefined8 * FUN_10974914c(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar9;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  int *piVar8;
  
  puVar6 = (undefined8 *)0x1;
  _calloc(1,8);
  if (puVar6 != (undefined8 *)0x0) {
    auStack_80[0] = 0;
    iStack_54 = 0;
    piStack_50 = (int *)0x0;
    uStack_70 = 0;
    lStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    bStack_58 = 0;
    iStack_48 = 0x10000;
    uStack_44 = 0;
    iVar5 = param_1[6];
    if (iVar5 == -1) {
      piVar8 = param_1;
      FUN_109710978();
      iVar5 = (int)piVar8;
    }
    uStack_44 = CONCAT11(uStack_44._1_1_,1);
    iStack_48 = iVar5;
    if (*(code **)(param_1 + 8) == (code *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
    else {
      (**(code **)(param_1 + 8))(param_1,0x53564720,*(undefined8 *)(param_1 + 10));
      if (param_1 == (int *)0x0) {
        param_1 = (int *)&UNK_10dfe4888;
      }
    }
    if (*param_1 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = *param_1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    piStack_50 = param_1;
    bVar4 = 0;
    do {
      bStack_58 = bVar4;
      lVar9 = *(long *)(piStack_50 + 4);
      uStack_68._0_4_ = piStack_50[6];
      uStack_70 = lVar9 + (ulong)(uint)uStack_68;
      uVar1 = (uint)uStack_68 << 6;
      if (uVar1 < 0x4001) {
        uVar1 = 0x4000;
      }
      if (0x3ffffffe < uVar1) {
        uVar1 = 0x3fffffff;
      }
      uStack_68._4_4_ = 0x3fffffff;
      if ((uint)uStack_68 >> 0x1a == 0) {
        uStack_68._4_4_ = uVar1;
      }
      iStack_54 = 0;
      auStack_80[0] = 0;
      uStack_60 = uStack_60 & 0xffffffff;
      lStack_78 = lVar9;
      if (lVar9 == 0) {
        FUN_1096f5a5c();
        piStack_50 = (int *)0x0;
        lStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
        goto LAB_1097492e0;
      }
      lVar7 = lVar9;
      FUN_1097493b4(lVar9,auStack_80);
      if ((int)lVar7 != 0) {
        if (iStack_54 == 0) {
          FUN_1096f5a5c(piStack_50);
          uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
        }
        else {
          iStack_54 = 0;
          FUN_1097493b4(lVar9,auStack_80);
          iVar5 = iStack_54;
          FUN_1096f5a5c(piStack_50);
          uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
          if (((uint)(iVar5 == 0) & (uint)lVar9) == 0) goto LAB_1097492d0;
        }
        piStack_50 = (int *)0x0;
        uStack_70 = 0;
        lStack_78 = 0;
        if (param_1[1] != 0) {
          param_1[1] = 0;
        }
        goto LAB_1097492e0;
      }
      if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_1097492bc;
      if ((param_1[1] == 0) || (piVar8 = param_1, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) {
        uStack_70 = (ulong)(uint)param_1[6];
        lStack_78 = 0;
        goto LAB_1097492bc;
      }
      uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
      bVar4 = 1;
    } while (*(long *)(param_1 + 4) != 0);
    lStack_78 = 0;
LAB_1097492bc:
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_1097492d0:
    piStack_50 = (int *)0x0;
    uStack_70 = 0;
    lStack_78 = 0;
    FUN_1096f5a5c(param_1);
    param_1 = (int *)&UNK_10dfe4888;
LAB_1097492e0:
    *puVar6 = param_1;
    FUN_109710c0c(auStack_80);
  }
  return puVar6;
}



/* Entry: 1097493b4; end: 109749453;  */

bool FUN_1097493b4(long param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 - *(long *)(param_2 + 8)) + 10U <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar5 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    puVar3 = (ushort *)&UNK_10dfe4888;
    if (uVar5 != 0) {
      puVar3 = (ushort *)(param_1 + (ulong)uVar5);
    }
    puVar1 = puVar3 + 1;
    if (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar4 = *puVar3;
      iVar2 = ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      if ((uint)(iVar2 * 4) <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1)) {
        iVar2 = *(int *)(param_2 + 0x1c) + iVar2 * -4;
        *(int *)(param_2 + 0x1c) = iVar2;
        return 0 < iVar2;
      }
    }
  }
  return false;
}



/* Entry: 109749454; end: 1097494cf;  */

undefined * FUN_109749454(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x24];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_1097494fc();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_1097494d0();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 1097494d0; end: 1097494fb;  */

void FUN_1097494d0(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_109749d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 1097494fc; end: 10974952f;  */

void FUN_1097494fc(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x18);
  if (lVar1 != 0) {
    FUN_109749530();
  }
  return;
}



/* Entry: 109749530; end: 1097499db;  */

/* WARNING: Removing unreachable block (ram,0x0001097497d8) */
/* WARNING: Removing unreachable block (ram,0x0001097497e0) */
/* WARNING: Removing unreachable block (ram,0x0001097498a8) */
/* WARNING: Removing unreachable block (ram,0x0001097497e8) */
/* WARNING: Removing unreachable block (ram,0x0001097498ac) */
/* WARNING: Removing unreachable block (ram,0x0001097497f8) */
/* WARNING: Removing unreachable block (ram,0x00010974980c) */
/* WARNING: Removing unreachable block (ram,0x000109749854) */
/* WARNING: Removing unreachable block (ram,0x000109749870) */
/* WARNING: Removing unreachable block (ram,0x000109749878) */
/* WARNING: Removing unreachable block (ram,0x0001097498a4) */

undefined8 * FUN_109749530(undefined8 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  uint uVar8;
  long lVar9;
  undefined4 auStack_90 [2];
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_58;
  undefined2 uStack_54;
  int *piVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  auStack_90[0] = 0;
  iStack_64 = 0;
  piStack_60 = (int *)0x0;
  pbStack_80 = (byte *)0x0;
  pbStack_88 = (byte *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  bStack_68 = 0;
  iStack_58 = 0x10000;
  uStack_54 = 0;
  iVar4 = param_2[6];
  if (iVar4 == -1) {
    piVar7 = param_2;
    func_0x000109710978();
    iVar4 = (int)piVar7;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  iStack_58 = iVar4;
  if (*(code **)(param_2 + 8) == (code *)0x0) {
    piVar7 = (int *)&UNK_10dfe4888;
  }
  else {
    piVar7 = param_2;
    (**(code **)(param_2 + 8))(param_2,0x43424c43,*(undefined8 *)(param_2 + 10));
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar7 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_60 = piVar7;
  bVar3 = 0;
  while( true ) {
    bStack_68 = bVar3;
    lVar9 = *(long *)(piStack_60 + 4);
    uStack_78._0_4_ = piStack_60[6];
    pbStack_80 = (byte *)(lVar9 + (ulong)(uint)uStack_78);
    uVar8 = (uint)uStack_78 << 6;
    if (uVar8 < 0x4001) {
      uVar8 = 0x4000;
    }
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uStack_78._4_4_ = 0x3fffffff;
    if ((uint)uStack_78 >> 0x1a == 0) {
      uStack_78._4_4_ = uVar8;
    }
    auStack_90[0] = 0;
    iStack_64 = 0;
    uStack_70 = uStack_70 & 0xffffffff;
    pbStack_88 = (byte *)lVar9;
    if (lVar9 == 0) {
      FUN_1096f5a5c();
      piStack_60 = (int *)0x0;
      pbStack_88 = (byte *)0x0;
      pbStack_80 = (byte *)0x0;
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      goto LAB_1097496bc;
    }
    lVar5 = lVar9;
    FUN_1097499dc(lVar9,auStack_90);
    if ((int)lVar5 != 0) break;
    if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_109749698;
    if ((piVar7[1] == 0) || (piVar6 = piVar7, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      pbStack_80 = (byte *)(ulong)(uint)piVar7[6];
      pbStack_88 = (byte *)0x0;
      goto LAB_109749698;
    }
    pbStack_80 = (byte *)(*(long *)(piVar7 + 4) + (ulong)(uint)piVar7[6]);
    bVar3 = 1;
    if (*(long *)(piVar7 + 4) == 0) {
      pbStack_88 = (byte *)0x0;
LAB_109749698:
      FUN_1096f5a5c(piStack_60);
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_1097496ac:
      piStack_60 = (int *)0x0;
      pbStack_80 = (byte *)0x0;
      pbStack_88 = (byte *)0x0;
      FUN_1096f5a5c(piVar7);
      piVar7 = (int *)&UNK_10dfe4888;
LAB_1097496bc:
      *param_1 = piVar7;
      FUN_109710c0c(auStack_90);
      auStack_90[0] = 0;
      iStack_64 = 0;
      piStack_60 = (int *)0x0;
      pbStack_80 = (byte *)0x0;
      pbStack_88 = (byte *)0x0;
      uStack_70 = 0;
      uStack_78 = 0;
      bStack_68 = 0;
      iStack_58 = 0x10000;
      uStack_54 = 0;
      iVar4 = param_2[6];
      if (iVar4 == -1) {
        piVar7 = param_2;
        func_0x000109710978();
        iVar4 = (int)piVar7;
      }
      uStack_54 = CONCAT11(uStack_54._1_1_,1);
      iStack_58 = iVar4;
      if (*(code **)(param_2 + 8) == (code *)0x0) {
        piVar7 = (int *)&UNK_10dfe4888;
      }
      else {
        piVar7 = param_2;
        (**(code **)(param_2 + 8))(param_2,0x43424454,*(undefined8 *)(param_2 + 10));
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)&UNK_10dfe4888;
        }
      }
      if (*piVar7 != 0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      bStack_68 = 0;
      pbStack_88 = *(byte **)(piVar7 + 4);
      uStack_78._0_4_ = piVar7[6];
      pbStack_80 = pbStack_88 + (uint)uStack_78;
      uVar8 = (uint)uStack_78 << 6;
      if (uVar8 < 0x4001) {
        uVar8 = 0x4000;
      }
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar8;
      }
      auStack_90[0] = 0;
      iStack_64 = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      piStack_60 = piVar7;
      if (pbStack_88 == (byte *)0x0) {
        FUN_1096f5a5c();
        piStack_60 = (int *)0x0;
        pbStack_88 = (byte *)0x0;
        pbStack_80 = (byte *)0x0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      }
      else if (((uint)uStack_78 < 4) || ((pbStack_88[1] & 0xfe | (uint)*pbStack_88 << 8) != 2)) {
        FUN_1096f5a5c(piVar7);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        piStack_60 = (int *)0x0;
        pbStack_80 = (byte *)0x0;
        pbStack_88 = (byte *)0x0;
        FUN_1096f5a5c(piVar7);
        piVar7 = (int *)&UNK_10dfe4888;
      }
      else {
        FUN_1096f5a5c(piVar7);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        piStack_60 = (int *)0x0;
        pbStack_80 = (byte *)0x0;
        pbStack_88 = (byte *)0x0;
        if (piVar7[1] != 0) {
          piVar7[1] = 0;
        }
      }
      param_1[1] = piVar7;
      FUN_109710c0c(auStack_90);
      iVar4 = param_2[5];
      if (iVar4 == 0) {
        func_0x0001097109c0();
        iVar4 = (int)param_2;
      }
      *(int *)(param_1 + 2) = iVar4;
      return param_1;
    }
  }
  if (iStack_64 == 0) {
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  }
  else {
    iStack_64 = 0;
    FUN_1097499dc(lVar9,auStack_90);
    iVar4 = iStack_64;
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
    uVar8 = 0;
    if (iVar4 == 0) {
      uVar8 = (uint)lVar9;
    }
    if ((uVar8 & 1) == 0) goto LAB_1097496ac;
  }
  piStack_60 = (int *)0x0;
  pbStack_80 = (byte *)0x0;
  pbStack_88 = (byte *)0x0;
  if (piVar7[1] != 0) {
    piVar7[1] = 0;
  }
  goto LAB_1097496bc;
}



/* Entry: 1097499dc; end: 109749d23;  */

undefined8 FUN_1097499dc(byte *param_1,long param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  long lVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  byte *pbVar23;
  
  pbVar1 = param_1 + 8;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pbVar1 - *(long *)(param_2 + 8))) {
    uVar19 = 0;
  }
  else if ((((((param_1[1] & 0xfe | (uint)*param_1 << 8) == 2) &&
             ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
            && (uVar18 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                         (*(uint *)(param_1 + 4) & 0xff00ff) << 8,
               uVar20 = (ulong)(uVar18 >> 0x10 | uVar18 << 0x10) * 0x30,
               (uVar20 & 0xffffffff00000000) == 0)) &&
           (((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18) &&
            (uVar18 = (uint)uVar20, uVar18 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))))) &&
          (iVar15 = *(int *)(param_2 + 0x1c) - uVar18, *(int *)(param_2 + 0x1c) = iVar15, 0 < iVar15
          )) {
    uVar18 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if (uVar18 != 0) {
      uVar20 = 0;
      lVar22 = *(long *)(param_2 + 8);
      pbVar23 = (byte *)(ulong)*(uint *)(param_2 + 0x18);
      do {
        pbVar21 = pbVar1 + uVar20 * 0x30;
        if (((pbVar23 < pbVar21 + (0x30 - lVar22)) ||
            ((byte *)(ulong)*(uint *)(param_2 + 0x18) < pbVar21 + (4 - *(long *)(param_2 + 8)))) ||
           (0x1f < pbVar21[8])) goto LAB_109749d14;
        bVar5 = *pbVar21;
        bVar6 = pbVar21[1];
        bVar7 = pbVar21[2];
        bVar8 = pbVar21[3];
        pbVar23 = param_1 + (ulong)bVar8 +
                            (ulong)bVar7 * 0x100 + (ulong)bVar5 * 0x1000000 + (ulong)bVar6 * 0x10000
        ;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pbVar23 - *(long *)(param_2 + 8)))
        goto LAB_109749d14;
        uVar13 = (uint)pbVar21[8] * 0x1000000;
        bVar9 = pbVar21[9];
        bVar10 = pbVar21[10];
        bVar11 = pbVar21[0xb];
        uVar17 = uVar13 | (uint)bVar9 << 0x10 | (uint)CONCAT11(bVar10,bVar11);
        if (((uint)(*(int *)(param_2 + 0x10) - (int)pbVar23) < uVar17 * 8) ||
           (iVar15 = *(int *)(param_2 + 0x1c) + uVar17 * -8, *(int *)(param_2 + 0x1c) = iVar15,
           iVar15 < 1)) goto LAB_109749d14;
        if (uVar17 != 0) {
          lVar22 = 0;
          lVar3 = (ulong)bVar5 * 0x1000000 + (ulong)bVar6 * 0x10000 +
                  (ulong)bVar7 * 0x100 + (ulong)bVar8;
          do {
            if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                param_1 + ((lVar22 + lVar3 + 8) - *(long *)(param_2 + 8))) goto LAB_109749d14;
            puVar4 = (ushort *)(param_1 + lVar22 + lVar3);
            uVar12 = *puVar4;
            uVar17 = (uint)(puVar4[1] >> 8) | (puVar4[1] & 0xff00ff) << 8;
            if ((uVar17 < ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8)) ||
               ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                param_1 + ((lVar22 + lVar3 + 8) - *(long *)(param_2 + 8)))) goto LAB_109749d14;
            lVar16 = lVar22 + lVar3;
            uVar14 = (uint)(byte)puVar4[2] << 0x18 | (uint)param_1[lVar16 + 5] << 0x10 |
                     (uint)param_1[lVar16 + 6] << 8 | (uint)param_1[lVar16 + 7];
            if (uVar14 != 0) {
              puVar2 = (ushort *)((long)(pbVar23 + uVar14) + 8);
              if ((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)
                 ) {
                iVar15 = uVar17 - ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8);
                uVar12 = *(ushort *)(pbVar23 + uVar14);
                uVar12 = uVar12 >> 8 | uVar12 << 8;
                if (uVar12 == 3) {
                  if ((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <=
                      (ulong)*(uint *)(param_2 + 0x18)) {
                    uVar17 = iVar15 * 2 + 4;
LAB_109749cb0:
                    if ((uVar17 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar2)) &&
                       (iVar15 = *(int *)(param_2 + 0x1c) - uVar17,
                       *(int *)(param_2 + 0x1c) = iVar15, 0 < iVar15)) goto LAB_109749c44;
                  }
                }
                else {
                  if (uVar12 != 1) goto LAB_109749c44;
                  if ((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <=
                      (ulong)*(uint *)(param_2 + 0x18)) {
                    uVar17 = iVar15 * 4 + 8;
                    goto LAB_109749cb0;
                  }
                }
              }
              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                 (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                 *(char *)(param_2 + 0x28) != '\x01')) goto LAB_109749d14;
              puVar4[2] = 0;
              puVar4[3] = 0;
            }
LAB_109749c44:
            lVar22 = lVar22 + 8;
          } while ((ulong)(uVar13 + (uint)bVar9 * 0x10000 + (uint)bVar10 * 0x100 + (uint)bVar11) <<
                   3 != lVar22);
        }
        lVar22 = *(long *)(param_2 + 8);
        pbVar23 = (byte *)(ulong)*(uint *)(param_2 + 0x18);
        if (pbVar23 < pbVar21 + (0x1c - lVar22)) {
          return 0;
        }
        if (pbVar23 < pbVar21 + (0x28 - lVar22)) {
          return 0;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar18);
    }
    uVar19 = 1;
  }
  else {
LAB_109749d14:
    uVar19 = 0;
  }
  return uVar19;
}



/* Entry: 109749d24; end: 109749d5f;  */

undefined8 * FUN_109749d24(undefined8 *param_1)

{
  FUN_1096f5a5c(*param_1);
  *param_1 = 0;
  FUN_1096f5a5c(param_1[1]);
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109749d60; end: 109749ddb;  */

undefined * FUN_109749d60(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x25];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_109749e08();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_109749ddc();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 109749ddc; end: 109749e07;  */

void FUN_109749ddc(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_10974a24c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 109749e08; end: 109749e3b;  */

void FUN_109749e08(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x10);
  if (lVar1 != 0) {
    FUN_109749e3c();
  }
  return;
}



/* Entry: 109749e3c; end: 109749edf;  */

undefined8 * FUN_109749e3c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  puVar2 = auStack_60;
  *param_1 = 0;
  auStack_60[0] = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0x10000;
  uStack_24 = 0;
  FUN_109749ee0(auStack_60,param_2,0x73626978);
  *param_1 = puVar2;
  FUN_109710c0c(auStack_60);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == -1) {
    FUN_109710978();
    iVar1 = (int)param_2;
  }
  *(int *)(param_1 + 1) = iVar1;
  return param_1;
}



/* Entry: 109749ee0; end: 10974a0e3;  */

int * FUN_109749ee0(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 uVar9;
  long lVar10;
  int *piVar8;
  
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    iVar6 = param_2[6];
    if (iVar6 == -1) {
      piVar8 = param_2;
      FUN_109710978();
      iVar6 = (int)piVar8;
    }
    param_1[0xe] = iVar6;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (((int)param_3 == 0) || (*(code **)(param_2 + 8) == (code *)0x0)) {
    param_2 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_2 + 8))(param_2,param_3,*(undefined8 *)(param_2 + 10));
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_2 != 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar5) {
        *param_2 = *param_2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = 0;
  *(int **)(param_1 + 0xc) = param_2;
  while( true ) {
    *(undefined1 *)(param_1 + 10) = uVar9;
    lVar10 = *(long *)(*(long *)(param_1 + 0xc) + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc) + 0x18);
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar2;
    uVar3 = uVar2 << 6;
    if (uVar3 < 0x4001) {
      uVar3 = 0x4000;
    }
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar2 >> 0x1a == 0) {
      uVar1 = uVar3;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[9] = 0;
    if (lVar10 == 0) {
      FUN_1096f5a5c();
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      return param_2;
    }
    lVar7 = lVar10;
    FUN_10974a0e4(lVar10,param_1);
    if ((int)lVar7 != 0) {
      if (param_1[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
      }
      else {
        param_1[0xb] = 0;
        FUN_10974a0e4(lVar10,param_1);
        iVar6 = param_1[0xb];
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        if (((int)lVar10 == 0) || (iVar6 != 0)) goto LAB_10974a030;
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      param_2[1] = 0;
      return param_2;
    }
    if ((param_1[0xb] == 0) || ((*(byte *)(param_1 + 10) & 1) != 0)) goto LAB_10974a01c;
    if ((param_2[1] == 0) || (piVar8 = param_2, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) break;
    lVar10 = *(long *)(param_2 + 4);
    uVar3 = param_2[6];
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar3;
    uVar9 = 1;
    if (lVar10 == 0) {
LAB_10974a01c:
      FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
LAB_10974a030:
      FUN_1096f5a5c(param_2);
      return (int *)&UNK_10dfe4888;
    }
  }
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  *(ulong *)(param_1 + 4) = (ulong)uVar3;
  goto LAB_10974a01c;
}



/* Entry: 10974a0e4; end: 10974a24b;  */

undefined8 FUN_10974a0e4(char *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  char *pcVar6;
  
  puVar4 = (uint *)(param_1 + 8);
  if ((((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar4 - *(long *)(param_2 + 8))) ||
        (param_1[1] == '\0' && *param_1 == '\0')) ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar4 - *(long *)(param_2 + 8)))) ||
      ((0x3f < (byte)param_1[4] ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar4 - *(long *)(param_2 + 8)))))) ||
     ((uVar2 = ((uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[5] << 0x10 |
               (uint)(byte)param_1[7]) << 2 | (uint)(byte)param_1[6] << 10,
      (uint)(*(int *)(param_2 + 0x10) - (int)puVar4) < uVar2 ||
      (iVar3 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar3, iVar3 < 1)))) {
    return 0;
  }
  uVar2 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar5 = (ulong)uVar2;
  if (uVar2 != 0) {
    pcVar6 = param_1 + 0xc;
    do {
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar6 - *(long *)(param_2 + 8))) {
        return 0;
      }
      uVar2 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((uVar2 != 0) &&
         ((((ulong)*(uint *)(param_2 + 0x18) <
            (ulong)((long)(param_1 + (ulong)uVar2 + 4) - *(long *)(param_2 + 8)) ||
           (uVar1 = *(int *)(param_2 + 0x38) + 1, uVar1 >> 0x1e != 0)) ||
          (((uint)(*(int *)(param_2 + 0x10) - (int)(param_1 + (ulong)uVar2 + 4)) < uVar1 * 4 ||
           (iVar3 = *(int *)(param_2 + 0x1c) + uVar1 * -4, *(int *)(param_2 + 0x1c) = iVar3,
           iVar3 < 1)))))) {
        if (0x1f < *(uint *)(param_2 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
        if (*(char *)(param_2 + 0x28) != '\x01') {
          return 0;
        }
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      pcVar6 = pcVar6 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 1;
}



/* Entry: 10974a24c; end: 10974a27b;  */

undefined8 * FUN_10974a24c(undefined8 *param_1)

{
  FUN_1096f5a5c(*param_1);
  *param_1 = 0;
  return param_1;
}



/* Entry: 10974a27c; end: 10974a2eb;  */

void FUN_10974a27c(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    _free(param_1[6]);
    FUN_1096f5a5c(*param_1);
    *param_1 = 0;
    if (*(int *)(param_1 + 3) != 0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      _free(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10974a2ec; end: 10974a337;  */

void FUN_10974a2ec(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10974a338; end: 10974a39b;  */

void FUN_10974a338(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    FUN_1096f5a5c(*param_1);
    *param_1 = 0;
    if (*(int *)(param_1 + 2) != 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      _free(param_1[3]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10974a39c; end: 10974a40b;  */

undefined * FUN_10974a39c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0xf];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10974a40c();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_10974a2ec();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10974a40c; end: 10974a72f;  */

undefined8 * FUN_10974a40c(int *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 auStack_80 [2];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  
  puVar6 = (undefined8 *)0x1;
  _calloc(1,0x30);
  if (puVar6 != (undefined8 *)0x0) {
    piVar7 = param_1 + 0x1a;
    FUN_10974a730();
    puVar10 = *(undefined **)(piVar7 + 4);
    uVar9 = piVar7[6];
    piVar7 = param_1 + 0x1a;
    FUN_10974a730();
    puVar8 = &UNK_10dfe4888;
    if (0x35 < (uint)piVar7[6]) {
      puVar8 = *(undefined **)(piVar7 + 4);
    }
    if (((ushort)(*(ushort *)(puVar8 + 0x32) >> 8 | *(ushort *)(puVar8 + 0x32) << 8) < 2) &&
       ((ushort)(*(ushort *)(puVar8 + 0x34) >> 8 | *(ushort *)(puVar8 + 0x34) << 8) < 2)) {
      puVar8 = &UNK_10dfe4888;
      if (0x35 < uVar9) {
        puVar8 = puVar10;
      }
      *(bool *)(puVar6 + 3) = puVar8[0x33] == '\0' && puVar8[0x32] == '\0';
      plVar1 = (long *)(param_1 + 0x34);
      do {
        while( true ) {
          while( true ) {
            puVar8 = (undefined *)*plVar1;
            if (((undefined *)*plVar1 != (undefined *)0x0) ||
               (puVar10 = *(undefined **)(param_1 + 0x18), puVar8 = &UNK_10dfe4888,
               puVar10 == (undefined *)0x0)) goto LAB_10974a50c;
            FUN_10974aa84();
            if (puVar10 == (undefined *)0x0) break;
            if (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = (long)puVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              puVar8 = puVar10;
              if (cVar3 == '\0') goto LAB_10974a50c;
            }
            else {
              ClearExclusiveLocal();
            }
            if (puVar10 != &UNK_10dfe4888) {
              FUN_1096f5a5c();
            }
          }
          if (*plVar1 == 0) break;
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = (long)&UNK_10dfe4888;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10974a50c:
      puVar6[4] = puVar8;
      auStack_80[0] = 0;
      uStack_54 = 0;
      piStack_50 = (int *)0x0;
      lStack_70 = 0;
      lStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      iStack_48 = 0x10000;
      uStack_44 = 0;
      iVar5 = param_1[6];
      if (iVar5 == -1) {
        piVar7 = param_1;
        FUN_109710978();
        iVar5 = (int)piVar7;
      }
      uStack_44 = CONCAT11(uStack_44._1_1_,1);
      piVar7 = (int *)&UNK_10dfe4888;
      iStack_48 = iVar5;
      if (*(code **)(param_1 + 8) != (code *)0x0) {
        piVar7 = param_1;
        (**(code **)(param_1 + 8))(param_1,0x676c7966,*(undefined8 *)(param_1 + 10));
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)&UNK_10dfe4888;
        }
      }
      if (*piVar7 != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = *piVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_58 = 0;
      lVar11 = *(long *)(piVar7 + 4);
      uStack_68._0_4_ = piVar7[6];
      lStack_70 = lVar11 + (ulong)(uint)uStack_68;
      uVar9 = (uint)uStack_68 << 6;
      if (uVar9 < 0x4001) {
        uVar9 = 0x4000;
      }
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uStack_68._4_4_ = 0x3fffffff;
      if ((uint)uStack_68 >> 0x1a == 0) {
        uStack_68._4_4_ = uVar9;
      }
      uStack_54 = 0;
      auStack_80[0] = 0;
      uStack_60 = uStack_60 & 0xffffffff;
      lStack_78 = lVar11;
      piStack_50 = piVar7;
      FUN_1096f5a5c(piVar7);
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      if ((lVar11 != 0) && (piVar7[1] != 0)) {
        piVar7[1] = 0;
      }
      puVar6[5] = piVar7;
      FUN_109710c0c(auStack_80);
      plVar1 = (long *)(param_1 + 0x42);
      puVar8 = (undefined *)*plVar1;
      if ((undefined *)*plVar1 == (undefined *)0x0) {
        do {
          puVar10 = *(undefined **)(param_1 + 0x18);
          puVar8 = &UNK_10dfe4888;
          if (puVar10 == (undefined *)0x0) break;
          FUN_10974abb0();
          if (puVar10 == (undefined *)0x0) {
            puVar10 = &UNK_10dfe4888;
          }
          if (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = (long)puVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            puVar8 = puVar10;
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          FUN_10974a338();
          puVar8 = (undefined *)*plVar1;
        } while (puVar8 == (undefined *)0x0);
      }
      *puVar6 = puVar8;
      piVar7 = param_1 + 0x22;
      FUN_10971da04();
      puVar6[1] = piVar7;
      piVar7 = param_1 + 0x30;
      FUN_10971ed6c();
      puVar6[2] = piVar7;
      piVar7 = (int *)&UNK_10dfe4888;
      if ((int *)puVar6[4] != (int *)0x0) {
        piVar7 = (int *)puVar6[4];
      }
      uVar9 = 1;
      if (*(char *)(puVar6 + 3) == '\0') {
        uVar9 = 2;
      }
      uVar2 = 0;
      if ((uint)piVar7[6] >> (ulong)uVar9 != 0) {
        uVar2 = ((uint)piVar7[6] >> (ulong)uVar9) - 1;
      }
      *(uint *)((long)puVar6 + 0x1c) = uVar2;
      uVar9 = param_1[6];
      if (uVar9 == 0xffffffff) {
        FUN_109710978();
        uVar9 = (uint)param_1;
      }
      if (uVar9 <= uVar2) {
        uVar2 = uVar9;
      }
      *(uint *)((long)puVar6 + 0x1c) = uVar2;
    }
  }
  return puVar6;
}



/* Entry: 10974a730; end: 10974a7bb;  */

void FUN_10974a730(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-1], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10974a7bc();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974a7bc; end: 10974a837;  */

undefined1 * FUN_10974a7bc(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined2 uStack_24;
  
  puVar1 = auStack_60;
  auStack_60[0] = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_24 = 1;
  FUN_10974a838(auStack_60,param_1,0x68656164);
  FUN_109710c0c(auStack_60);
  return (undefined1 *)puVar1;
}



/* Entry: 10974a838; end: 10974aa3f;  */

int * FUN_10974a838(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar8;
  
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    iVar6 = param_2[6];
    if (iVar6 == -1) {
      piVar8 = param_2;
      FUN_109710978();
      iVar6 = (int)piVar8;
    }
    param_1[0xe] = iVar6;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (((int)param_3 == 0) || (*(code **)(param_2 + 8) == (code *)0x0)) {
    param_2 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_2 + 8))(param_2,param_3,*(undefined8 *)(param_2 + 10));
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_2 != 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar5) {
        *param_2 = *param_2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = 0;
  *(int **)(param_1 + 0xc) = param_2;
  while( true ) {
    *(undefined1 *)(param_1 + 10) = uVar9;
    uVar11 = *(ulong *)(*(long *)(param_1 + 0xc) + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc) + 0x18);
    *(ulong *)(param_1 + 2) = uVar11;
    *(ulong *)(param_1 + 4) = uVar11 + uVar2;
    uVar3 = uVar2 << 6;
    if (uVar3 < 0x4001) {
      uVar3 = 0x4000;
    }
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar2 >> 0x1a == 0) {
      uVar1 = uVar3;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[9] = 0;
    if (uVar11 == 0) {
      FUN_1096f5a5c();
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      return param_2;
    }
    uVar7 = uVar11;
    FUN_10974aa40(uVar11,uVar11);
    if ((int)uVar7 != 0) {
      if (param_1[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
      }
      else {
        param_1[0xb] = 0;
        FUN_10974aa40(uVar11,*(undefined8 *)(param_1 + 2),param_1[6]);
        iVar6 = param_1[0xb];
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        if ((iVar6 != 0) || ((uVar11 & 1) == 0)) goto LAB_10974a988;
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      param_2[1] = 0;
      return param_2;
    }
    if ((param_1[0xb] == 0) || ((*(byte *)(param_1 + 10) & 1) != 0)) goto LAB_10974a974;
    if ((param_2[1] == 0) || (piVar8 = param_2, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) break;
    lVar10 = *(long *)(param_2 + 4);
    uVar3 = param_2[6];
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar3;
    uVar9 = 1;
    if (lVar10 == 0) {
LAB_10974a974:
      FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
LAB_10974a988:
      FUN_1096f5a5c(param_2);
      return (int *)&UNK_10dfe4888;
    }
  }
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  *(ulong *)(param_1 + 4) = (ulong)uVar3;
  goto LAB_10974a974;
}



/* Entry: 10974aa40; end: 10974aa83;  */

bool FUN_10974aa40(ushort *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  if (((ulong)((long)param_1 + (0x36 - param_2)) <= (ulong)param_3) &&
     ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) {
    uVar1 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
    return (uVar1 >> 0x10 | uVar1 << 0x10) == 0x5f0f3cf5;
  }
  return false;
}



/* Entry: 10974aa84; end: 10974abaf;  */

int * FUN_10974aa84(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 auStack_60 [2];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  auStack_60[0] = 0;
  lStack_50 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_24 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x6c6f6361,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = SUB84(param_1,0);
  uStack_2c = (undefined4)((ulong)param_1 >> 0x20);
  uStack_38 = 0;
  lVar4 = *(long *)(param_1 + 4);
  uStack_48._0_4_ = param_1[6];
  lStack_50 = lVar4 + (ulong)(uint)uStack_48;
  uVar1 = (uint)uStack_48 << 6;
  if (uVar1 < 0x4001) {
    uVar1 = 0x4000;
  }
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  uStack_48._4_4_ = 0x3fffffff;
  if ((uint)uStack_48 >> 0x1a == 0) {
    uStack_48._4_4_ = uVar1;
  }
  uStack_34 = 0;
  auStack_60[0] = 0;
  uStack_40 = uStack_40 & 0xffffffff;
  lStack_58 = lVar4;
  FUN_1096f5a5c(param_1);
  uStack_30 = 0;
  uStack_2c = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
  if ((lVar4 != 0) && (param_1[1] != 0)) {
    param_1[1] = 0;
  }
  FUN_109710c0c(auStack_60);
  return param_1;
}



/* Entry: 10974abb0; end: 10974afef;  */

undefined8 * FUN_10974abb0(int *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar17;
  int *piVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  long lVar26;
  undefined4 auStack_a0 [2];
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  byte bStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_68;
  undefined2 uStack_64;
  int *piVar16;
  
  puVar12 = (undefined8 *)0x1;
  _calloc(1,0x20);
  if (puVar12 != (undefined8 *)0x0) {
    auStack_a0[0] = 0;
    iStack_74 = 0;
    piStack_70 = (int *)0x0;
    uStack_90 = 0;
    lStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    bStack_78 = 0;
    iStack_68 = 0x10000;
    uStack_64 = 0;
    iVar11 = param_1[6];
    if (iVar11 == -1) {
      piVar16 = param_1;
      FUN_109710978();
      iVar11 = (int)piVar16;
    }
    uStack_64 = CONCAT11(uStack_64._1_1_,1);
    piVar16 = (int *)&UNK_10dfe4888;
    iStack_68 = iVar11;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      piVar16 = param_1;
      (**(code **)(param_1 + 8))(param_1,0x67766172,*(undefined8 *)(param_1 + 10));
      if (piVar16 == (int *)0x0) {
        piVar16 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar16 != 0) {
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar10) {
          *piVar16 = *piVar16 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    piStack_70 = piVar16;
    bVar2 = 0;
    do {
      bStack_78 = bVar2;
      lVar26 = *(long *)(piStack_70 + 4);
      uStack_88._0_4_ = piStack_70[6];
      uStack_90 = lVar26 + (ulong)(uint)uStack_88;
      uVar20 = (uint)uStack_88 << 6;
      if (uVar20 < 0x4001) {
        uVar20 = 0x4000;
      }
      if (0x3ffffffe < uVar20) {
        uVar20 = 0x3fffffff;
      }
      uStack_88._4_4_ = 0x3fffffff;
      if ((uint)uStack_88 >> 0x1a == 0) {
        uStack_88._4_4_ = uVar20;
      }
      iStack_74 = 0;
      auStack_a0[0] = 0;
      uStack_80 = uStack_80 & 0xffffffff;
      lStack_98 = lVar26;
      if (lVar26 == 0) {
        FUN_1096f5a5c();
        piStack_70 = (int *)0x0;
        lStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
        goto LAB_10974ad54;
      }
      lVar13 = lVar26;
      FUN_10974aff0(lVar26,auStack_a0);
      if ((int)lVar13 != 0) {
        if (iStack_74 == 0) {
          FUN_1096f5a5c(piStack_70);
          uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
        }
        else {
          iStack_74 = 0;
          FUN_10974aff0(lVar26,auStack_a0);
          iVar11 = iStack_74;
          FUN_1096f5a5c(piStack_70);
          uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
          if (((uint)(iVar11 == 0) & (uint)lVar26) == 0) goto LAB_10974ad44;
        }
        piStack_70 = (int *)0x0;
        uStack_90 = 0;
        lStack_98 = 0;
        if (piVar16[1] != 0) {
          piVar16[1] = 0;
        }
        goto LAB_10974ad54;
      }
      if ((iStack_74 == 0) || ((bStack_78 & 1) != 0)) goto LAB_10974ad30;
      if ((piVar16[1] == 0) || (piVar14 = piVar16, FUN_1096f59a0(), ((ulong)piVar14 & 1) == 0)) {
        uStack_90 = (ulong)(uint)piVar16[6];
        lStack_98 = 0;
        goto LAB_10974ad30;
      }
      uStack_90 = *(long *)(piVar16 + 4) + (ulong)(uint)piVar16[6];
      bVar2 = 1;
    } while (*(long *)(piVar16 + 4) != 0);
    lStack_98 = 0;
LAB_10974ad30:
    FUN_1096f5a5c(piStack_70);
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
LAB_10974ad44:
    piStack_70 = (int *)0x0;
    uStack_90 = 0;
    lStack_98 = 0;
    FUN_1096f5a5c(piVar16);
    piVar16 = (int *)&UNK_10dfe4888;
LAB_10974ad54:
    *puVar12 = piVar16;
    FUN_109710c0c(auStack_a0);
    piVar18 = *(int **)(piVar16 + 4);
    uVar20 = piVar16[6];
    piVar14 = (int *)&UNK_10dfe4888;
    if (0x13 < uVar20) {
      piVar14 = piVar18;
    }
    if ((*(char *)((long)piVar14 + 1) == '\0' && (char)*piVar14 == '\0') &&
        (*(char *)((long)piVar14 + 2) == '\0' && *(char *)((long)piVar14 + 3) == '\0')) {
      iVar11 = 0;
    }
    else {
      iVar11 = param_1[6];
      if (iVar11 == -1) {
        FUN_109710978();
        iVar11 = (int)param_1;
        piVar18 = *(int **)(piVar16 + 4);
        uVar20 = piVar16[6];
      }
    }
    *(int *)(puVar12 + 1) = iVar11;
    piVar14 = (int *)&UNK_10dfe4888;
    if (0x13 < uVar20) {
      piVar14 = piVar18;
    }
    uVar1 = *(uint *)(puVar12 + 2);
    if (-1 < (int)uVar1) {
      bVar2 = *(byte *)(piVar14 + 2);
      bVar3 = *(byte *)((long)piVar14 + 9);
      bVar4 = *(byte *)((long)piVar14 + 10);
      bVar5 = *(byte *)((long)piVar14 + 0xb);
      uVar8 = (uint)(*(ushort *)((long)piVar14 + 6) >> 8) |
              (*(ushort *)((long)piVar14 + 6) & 0xff00ff) << 8;
      uVar17 = uVar1;
      if (uVar1 < uVar8) {
        do {
          uVar17 = uVar17 + (uVar17 >> 1) + 8;
        } while (uVar17 < uVar8);
        lVar26 = puVar12[3];
        FUN_10974b104(lVar26,uVar17);
        if (lVar26 == 0) {
          *(uint *)(puVar12 + 2) = ~uVar1;
          return puVar12;
        }
        puVar12[3] = lVar26;
        *(uint *)(puVar12 + 2) = uVar17;
        piVar18 = *(int **)(piVar16 + 4);
        uVar20 = piVar16[6];
      }
      *(uint *)((long)puVar12 + 0x14) = uVar8;
      piVar16 = (int *)&UNK_10dfe4888;
      if (0x13 < uVar20) {
        piVar16 = piVar18;
      }
      if (uVar8 != 0) {
        uVar19 = 0;
        uVar21 = 0;
        bVar6 = *(byte *)(piVar16 + 1);
        bVar7 = *(byte *)((long)piVar16 + 5);
        uVar20 = (uint)bVar6 * 0x100 + (uint)bVar7;
        lVar26 = puVar12[3];
        do {
          if (CONCAT11(bVar6,bVar7) == 0) {
            uVar23 = 0xffffffffffffffff;
          }
          else {
            uVar22 = 0;
            uVar24 = 0xffffffff;
            uVar15 = 0xffffffff;
            pcVar25 = (char *)((long)piVar14 +
                              uVar19 * 2 +
                              (ulong)bVar2 * 0x1000000 + (ulong)bVar3 * 0x10000 +
                              (ulong)bVar4 * 0x100 + (ulong)bVar5 + 1);
            do {
              if (*pcVar25 != '\0' || pcVar25[-1] != '\0') {
                if (uVar15 == 0xffffffff) {
                  uVar15 = uVar22 & 0xffffffff;
                }
                else {
                  uVar23 = 0xffffffff;
                  bVar10 = uVar24 != 0xffffffff;
                  uVar24 = 0xffffffff;
                  if (bVar10) break;
                  uVar24 = uVar22 & 0xffffffff;
                }
              }
              pcVar25 = pcVar25 + 2;
              uVar22 = uVar22 + 1;
              uVar23 = uVar15;
            } while (uVar20 != uVar22);
            uVar23 = uVar23 | uVar24 << 0x20;
          }
          *(ulong *)(lVar26 + uVar21 * 8) = uVar23;
          uVar21 = uVar21 + 1;
          uVar19 = (ulong)((int)uVar19 + uVar20);
        } while (uVar21 != uVar8);
      }
    }
  }
  return puVar12;
}



/* Entry: 10974aff0; end: 10974b103;  */

bool FUN_10974aff0(ushort *param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = param_1 + 10;
  if (((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) &&
      ((ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)))
     && (iVar3 = ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8) *
                 ((uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8), -1 < iVar3)) {
    lVar2 = (long)param_1 +
            (ulong)*(byte *)((long)param_1 + 0xb) +
            (ulong)(byte)param_1[5] * 0x100 +
            (ulong)*(byte *)((long)param_1 + 9) * 0x10000 + (ulong)(byte)param_1[4] * 0x1000000;
    if (((ulong)(lVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       (iVar5 = (int)*(undefined8 *)(param_2 + 0x10),
       (uint)(iVar3 * 2) <= (uint)(iVar5 - (int)lVar2))) {
      iVar3 = *(int *)(param_2 + 0x1c) + iVar3 * -2;
      *(int *)(param_2 + 0x1c) = iVar3;
      if (0 < iVar3) {
        uVar4 = *(int *)(param_2 + 0x38) + 1;
        if ((*(byte *)((long)param_1 + 0xf) & 1) == 0) {
          if ((int)uVar4 < 0) {
            return false;
          }
          uVar4 = uVar4 * 2;
        }
        else {
          if (uVar4 >> 0x1e != 0) {
            return false;
          }
          uVar4 = uVar4 * 4;
        }
        if ((uVar4 <= (uint)(iVar5 - (int)puVar1)) &&
           ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
          *(uint *)(param_2 + 0x1c) = iVar3 - uVar4;
          return 0 < (int)(iVar3 - uVar4);
        }
      }
    }
  }
  return false;
}



/* Entry: 10974b104; end: 10974b127;  */

undefined8 FUN_10974b104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,param_2 << 3);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 10974b128; end: 10974b197;  */

undefined * FUN_10974b128(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-7];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10974b198();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_10974a27c();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10974b198; end: 10974b54f;  */

undefined8 * FUN_10974b198(uint *param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 auStack_90 [2];
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  uint *puStack_60;
  uint uStack_58;
  undefined2 uStack_54;
  uint *puVar12;
  
  puVar8 = (undefined8 *)0x1;
  _calloc(1,0x38);
  if (puVar8 != (undefined8 *)0x0) {
    auStack_90[0] = 0;
    iStack_64 = 0;
    puStack_60 = (uint *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    bStack_68 = 0;
    uStack_58 = 0x10000;
    uStack_54 = 0;
    uVar6 = param_1[6];
    if (uVar6 == 0xffffffff) {
      puVar12 = param_1;
      FUN_109710978();
      uVar6 = (uint)puVar12;
    }
    uStack_54 = CONCAT11(uStack_54._1_1_,1);
    puVar12 = (uint *)&UNK_10dfe4888;
    uStack_58 = uVar6;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      puVar12 = param_1;
      (**(code **)(param_1 + 8))(param_1,0x706f7374,*(undefined8 *)(param_1 + 10));
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)&UNK_10dfe4888;
      }
    }
    if (*puVar12 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *puVar12 = *puVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_60 = puVar12;
    bVar5 = 0;
    do {
      bStack_68 = bVar5;
      lVar14 = *(long *)(puStack_60 + 4);
      uStack_78._0_4_ = puStack_60[6];
      uStack_80 = lVar14 + (ulong)(uint)uStack_78;
      uVar6 = (uint)uStack_78 << 6;
      if (uVar6 < 0x4001) {
        uVar6 = 0x4000;
      }
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar6;
      }
      iStack_64 = 0;
      auStack_90[0] = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      lStack_88 = lVar14;
      if (lVar14 == 0) {
        FUN_1096f5a5c();
        puStack_60 = (uint *)0x0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        goto LAB_10974b338;
      }
      lVar9 = lVar14;
      FUN_10974b550(lVar14,auStack_90);
      if ((int)lVar9 != 0) {
        if (iStack_64 == 0) {
          FUN_1096f5a5c(puStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        }
        else {
          iStack_64 = 0;
          FUN_10974b550(lVar14,auStack_90);
          iVar4 = iStack_64;
          FUN_1096f5a5c(puStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          if (((uint)(iVar4 == 0) & (uint)lVar14) == 0) goto LAB_10974b328;
        }
        puStack_60 = (uint *)0x0;
        uStack_80 = 0;
        lStack_88 = 0;
        if (puVar12[1] != 0) {
          puVar12[1] = 0;
        }
        goto LAB_10974b338;
      }
      if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10974b314;
      if ((puVar12[1] == 0) || (puVar10 = puVar12, FUN_1096f59a0(), ((ulong)puVar10 & 1) == 0)) {
        uStack_80 = (ulong)puVar12[6];
        lStack_88 = 0;
        goto LAB_10974b314;
      }
      uStack_80 = *(long *)(puVar12 + 4) + (ulong)puVar12[6];
      bVar5 = 1;
    } while (*(long *)(puVar12 + 4) != 0);
    lStack_88 = 0;
LAB_10974b314:
    FUN_1096f5a5c(puStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10974b328:
    puStack_60 = (uint *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    FUN_1096f5a5c(puVar12);
    puVar12 = (uint *)&UNK_10dfe4888;
LAB_10974b338:
    *puVar8 = puVar12;
    FUN_109710c0c(auStack_90);
    uVar6 = puVar12[6];
    puVar10 = (uint *)&UNK_10dfe4888;
    if (0x1f < uVar6) {
      puVar10 = *(uint **)(puVar12 + 4);
    }
    uVar7 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    *(uint *)(puVar8 + 1) = uVar7;
    if (uVar7 == 0x20000) {
      puVar10 = (uint *)&UNK_10dfe4888;
      if (0x1f < puVar12[6]) {
        puVar10 = *(uint **)(puVar12 + 4);
      }
      puVar12 = puVar10 + 8;
      uVar7 = *puVar12;
      puVar8[2] = puVar12;
      puVar8[5] = (undefined *)
                  ((long)puVar12 +
                  (ulong)(byte)uVar7 * 0x200 + (ulong)*(byte *)((long)puVar10 + 0x21) * 2 + 2);
      uVar7 = param_1[6];
      if (uVar7 == 0xffffffff) {
        FUN_109710978();
        uVar7 = (uint)param_1;
      }
      if (uVar6 >> 3 <= uVar7) {
        uVar7 = uVar6 >> 3;
      }
      FUN_1097115cc(puVar8 + 3,uVar7,0);
      uVar7 = *(uint *)((long)puVar8 + 0x1c);
      if (uVar7 < 0xffff) {
        pbVar1 = (byte *)((long)puVar10 + (ulong)uVar6);
        pbVar13 = (byte *)puVar8[5];
        if (pbVar13 < pbVar1) {
          while (pbVar13 + *pbVar13 < pbVar1) {
            uVar15 = puVar8[5];
            if ((int)uVar7 < *(int *)(puVar8 + 3)) {
LAB_10974b41c:
              *(int *)(puVar8[4] + (ulong)uVar7 * 4) = (int)pbVar13 - (int)uVar15;
              uVar7 = uVar7 + 1;
              *(uint *)((long)puVar8 + 0x1c) = uVar7;
            }
            else {
              puVar11 = puVar8 + 3;
              FUN_1097115cc(puVar11,uVar7 + 1,0);
              if ((int)puVar11 != 0) {
                uVar7 = *(uint *)((long)puVar8 + 0x1c);
                goto LAB_10974b41c;
              }
              uRam000000011382ab30 = 0;
              uVar7 = *(uint *)((long)puVar8 + 0x1c);
            }
            if (0xfffe < uVar7) {
              return puVar8;
            }
            pbVar13 = pbVar13 + (ulong)*pbVar13 + 1;
            if (pbVar1 <= pbVar13) {
              return puVar8;
            }
          }
        }
      }
    }
  }
  return puVar8;
}



/* Entry: 10974b550; end: 10974b5c3;  */

bool FUN_10974b550(uint *param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + 8;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 == 0x10000) {
LAB_10974b5a0:
    bVar1 = true;
  }
  else {
    if (uVar3 == 0x20000) {
      FUN_10971e484();
      if (((ulong)puVar2 & 1) != 0) goto LAB_10974b5a0;
      uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    }
    bVar1 = uVar3 == 0x30000;
  }
  return bVar1;
}



/* Entry: 10974b5c4; end: 10974b6df;  */

undefined8 * FUN_10974b5c4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x98) + 0x120);
  puVar3 = &UNK_10dfe4888;
  if ((undefined *)*puVar5 != (undefined *)0x0) {
    puVar3 = (undefined *)*puVar5;
  }
  puVar2 = &UNK_10dfe4888;
  if (3 < *(uint *)(puVar3 + 0x18)) {
    puVar2 = *(undefined **)(puVar3 + 0x10);
  }
  func_0x00010972a6f4();
  uVar6 = *(undefined8 *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = (int)param_2;
  puVar3 = puVar2;
  FUN_10974b6e0();
  *(int *)(param_1 + 0x134) = (int)puVar3;
  func_0x000109734828(param_1 + 8,param_1,0);
  func_0x000109734828(param_1 + 0x48,param_1,1);
  FUN_109701398(puVar5,param_2);
  if (puVar5 != (undefined8 *)0x0) {
    if (CONCAT11(puVar2[4],puVar2[5]) != 0) {
      puVar5 = puVar5 + 4;
      iVar1 = (uint)(byte)puVar2[4] * 0x100 + (uint)(byte)puVar2[5];
      do {
        iVar1 = iVar1 + -1;
        puVar4 = puVar5;
        FUN_10974b720(puVar5,param_1);
        if (((ulong)puVar4 & 1) != 0) break;
        puVar5 = puVar5 + 7;
      } while (iVar1 != 0);
      goto LAB_10974b6a4;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_10974b6a4:
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  func_0x000109734828(param_1 + 8,param_1,0);
  func_0x000109734828(param_1 + 0x48,param_1,1);
  return puVar4;
}



/* Entry: 10974b6e0; end: 10974b71f;  */

uint FUN_10974b6e0(long param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(byte *)(param_1 + 3));
  if ((*(byte *)(param_1 + 3) >> 4 & 1) == 0) {
    return uVar1;
  }
  pbVar3 = (byte *)(param_1 + 4);
  lVar2 = (ulong)*pbVar3 * 0x200 + (ulong)*(byte *)(param_1 + 5) * 2;
  return (uint)pbVar3[lVar2 + 3] << 0x10 | (uint)pbVar3[lVar2 + 2] << 0x18 | uVar1;
}



/* Entry: 10974b720; end: 10974b777;  */

void FUN_10974b720(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  FUN_10972a9e4(puVar1,*(undefined4 *)
                        (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                        (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010974b768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[1])(*param_1,param_2);
    return;
  }
  return;
}



/* Entry: 10974b778; end: 10974b893;  */

undefined8 * FUN_10974b778(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x98) + 0x128);
  puVar3 = &UNK_10dfe4888;
  if ((undefined *)*puVar5 != (undefined *)0x0) {
    puVar3 = (undefined *)*puVar5;
  }
  puVar2 = &UNK_10dfe4888;
  if (3 < *(uint *)(puVar3 + 0x18)) {
    puVar2 = *(undefined **)(puVar3 + 0x10);
  }
  func_0x00010972a6f4();
  uVar6 = *(undefined8 *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = (int)param_2;
  puVar3 = puVar2;
  FUN_10974b6e0();
  *(int *)(param_1 + 0x134) = (int)puVar3;
  func_0x000109734828(param_1 + 8,param_1,0);
  func_0x000109734828(param_1 + 0x48,param_1,1);
  FUN_10974b894(puVar5,param_2);
  if (puVar5 != (undefined8 *)0x0) {
    if (CONCAT11(puVar2[4],puVar2[5]) != 0) {
      puVar5 = puVar5 + 4;
      iVar1 = (uint)(byte)puVar2[4] * 0x100 + (uint)(byte)puVar2[5];
      do {
        iVar1 = iVar1 + -1;
        puVar4 = puVar5;
        FUN_10974b720(puVar5,param_1);
        if (((ulong)puVar4 & 1) != 0) break;
        puVar5 = puVar5 + 7;
      } while (iVar1 != 0);
      goto LAB_10974b858;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_10974b858:
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  func_0x000109734828(param_1 + 8,param_1,0);
  func_0x000109734828(param_1 + 0x48,param_1,1);
  return puVar4;
}



/* Entry: 10974b894; end: 10974b94f;  */

undefined * FUN_10974b894(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(uint *)(param_1 + 1) <= (uint)param_2) {
    return (undefined *)0x0;
  }
  puVar4 = *(undefined **)(param_1[2] + (param_2 & 0xffffffff) * 8);
  if (puVar4 == (undefined *)0x0) {
    do {
      puVar4 = &UNK_10dfe4888;
      if ((undefined *)*param_1 != (undefined *)0x0) {
        puVar4 = (undefined *)*param_1;
      }
      puVar5 = &UNK_10dfe4888;
      if (3 < *(uint *)(puVar4 + 0x18)) {
        puVar5 = *(undefined **)(puVar4 + 0x10);
      }
      func_0x00010972a6f4(puVar5,param_2);
      FUN_10974b950();
      if (puVar5 == (undefined *)0x0) {
        return (undefined *)0x0;
      }
      plVar1 = (long *)(param_1[2] + (param_2 & 0xffffffff) * 8);
      if (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = (long)puVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return puVar5;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free();
      puVar4 = *(undefined **)(param_1[2] + (param_2 & 0xffffffff) * 8);
    } while (puVar4 == (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 10974b950; end: 10974bd43;  */

undefined8 * FUN_10974b950(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 auStack_80 [2];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar4 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
  uVar13 = (ulong)uVar4;
  uVar14 = (ulong)(uVar4 * 0x38);
  puVar5 = (undefined8 *)0x1;
  _calloc(1,uVar4 * 0x38 + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    puStack_78 = puVar5 + 4;
    auStack_80[0] = 0;
    uStack_70 = 0xffffffff00000000;
    uStack_68 = 0;
    if (uVar4 == 0) {
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    }
    else {
      uVar15 = 0;
      uVar3 = *param_1 >> 8 | *param_1 << 8;
      do {
        puVar6 = (ushort *)&UNK_10dfe4888;
        if (uVar15 < ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8)) {
          puVar6 = param_1 + uVar15 + 3;
        }
        uVar4 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
        puVar6 = (ushort *)&UNK_10dfe4888;
        uVar8 = uVar3;
        if (uVar4 != 0) {
          puVar6 = (ushort *)((long)param_1 + (ulong)uVar4);
        }
        while (uVar8 == 9) {
          if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) != 1) goto LAB_10974bca0;
          uVar4 = (*(uint *)(puVar6 + 2) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar6 + 2) & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          puVar2 = puVar6 + 1;
          puVar1 = (ushort *)&UNK_10dfe4888;
          if (uVar4 != 0) {
            puVar1 = (ushort *)((long)puVar6 + (ulong)uVar4);
          }
          puVar6 = puVar1;
          uVar8 = *puVar2 >> 8 | *puVar2 << 8;
        }
        if (uVar8 < 5) {
          if (uVar8 < 3) {
            if (uVar8 == 1) {
              uVar8 = *puVar6 >> 8 | *puVar6 << 8;
              if (uVar8 == 1) {
                pcVar9 = FUN_10974bd44;
                uVar10 = 0x10974bd48;
                uVar12 = 0x10974bd4c;
              }
              else {
                if (uVar8 != 2) goto LAB_10974bca0;
                pcVar9 = FUN_10974c22c;
                uVar10 = 0x10974c230;
                uVar12 = 0x10974c234;
              }
            }
            else {
              if (uVar8 != 2) goto LAB_10974bca0;
              uVar8 = *puVar6 >> 8 | *puVar6 << 8;
              if (uVar8 == 1) {
                pcVar9 = FUN_10974c364;
                uVar10 = 0x10974c368;
                uVar12 = 0x10974c36c;
              }
              else {
                if (uVar8 != 2) goto LAB_10974bca0;
                pcVar9 = FUN_10974c6ac;
                uVar10 = 0x10974c6b0;
                uVar12 = 0x10974c6b4;
              }
            }
            puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
            *puVar7 = puVar6;
            puVar7[1] = pcVar9;
            puVar7[2] = uVar10;
            puVar7[3] = uVar12;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[4] = 0;
LAB_10974bc88:
            uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
            uVar4 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
            puVar2 = (ushort *)&UNK_10dfe4888;
            if (uVar4 != 0) {
              puVar2 = (ushort *)((long)puVar6 + (ulong)uVar4);
            }
            FUN_10972bcd8(puVar2);
          }
          else if (uVar8 == 3) {
            if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1) {
              puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
              *puVar7 = puVar6;
              puVar7[1] = FUN_10974c9b4;
              puVar7[2] = 0x10974c9b8;
              uVar10 = 0x10974c9bc;
              goto LAB_10974bc10;
            }
          }
          else if ((uVar8 == 4) && ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1)) {
            puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
            *puVar7 = puVar6;
            puVar7[1] = FUN_10974d1d8;
            puVar7[2] = 0x10974d1dc;
            uVar10 = 0x10974d1e0;
LAB_10974bc10:
            puVar7[3] = uVar10;
LAB_10974bc14:
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[4] = 0;
            goto LAB_10974bc88;
          }
        }
        else if (uVar8 < 7) {
          if (uVar8 == 5) {
            if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1) {
              puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
              *puVar7 = puVar6;
              puVar7[1] = FUN_10974d678;
              puVar7[2] = 0x10974d67c;
              uVar10 = 0x10974d680;
              goto LAB_10974bc10;
            }
          }
          else if ((uVar8 == 6) && ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1)) {
            puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
            *puVar7 = puVar6;
            puVar7[1] = FUN_10974d8d4;
            puVar7[2] = 0x10974d8d8;
            puVar7[3] = 0x10974d8dc;
            goto LAB_10974bc14;
          }
        }
        else if (uVar8 == 7) {
          func_0x00010973127c(puVar6,auStack_80);
        }
        else if (uVar8 == 8) {
          func_0x00010973141c(puVar6,auStack_80);
        }
LAB_10974bca0:
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar13);
      uVar15 = 0;
      puVar5[2] = 0;
      uVar10 = 0;
      uVar12 = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar11 = puVar5 + 10;
      do {
        uVar17 = puVar11[-1];
        uVar16 = puVar11[-2];
        uVar10 = CONCAT17((byte)(uVar16 >> 0x38) | (byte)((ulong)uVar10 >> 0x38),
                          CONCAT16((byte)(uVar16 >> 0x30) | (byte)((ulong)uVar10 >> 0x30),
                                   CONCAT15((byte)(uVar16 >> 0x28) | (byte)((ulong)uVar10 >> 0x28),
                                            CONCAT14((byte)(uVar16 >> 0x20) |
                                                     (byte)((ulong)uVar10 >> 0x20),
                                                     CONCAT13((byte)(uVar16 >> 0x18) |
                                                              (byte)((ulong)uVar10 >> 0x18),
                                                              CONCAT12((byte)(uVar16 >> 0x10) |
                                                                       (byte)((ulong)uVar10 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar16 >> 8)
                                                                                 | (byte)((ulong)
                                                  uVar10 >> 8),(byte)uVar16 | (byte)uVar10)))))));
        uVar12 = CONCAT17((byte)(uVar17 >> 0x38) | (byte)((ulong)uVar12 >> 0x38),
                          CONCAT16((byte)(uVar17 >> 0x30) | (byte)((ulong)uVar12 >> 0x30),
                                   CONCAT15((byte)(uVar17 >> 0x28) | (byte)((ulong)uVar12 >> 0x28),
                                            CONCAT14((byte)(uVar17 >> 0x20) |
                                                     (byte)((ulong)uVar12 >> 0x20),
                                                     CONCAT13((byte)(uVar17 >> 0x18) |
                                                              (byte)((ulong)uVar12 >> 0x18),
                                                              CONCAT12((byte)(uVar17 >> 0x10) |
                                                                       (byte)((ulong)uVar12 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar17 >> 8)
                                                                                 | (byte)((ulong)
                                                  uVar12 >> 8),(byte)uVar17 | (byte)uVar12)))))));
        puVar5[1] = uVar12;
        *puVar5 = uVar10;
        uVar15 = *puVar11 | uVar15;
        puVar5[2] = uVar15;
        uVar14 = uVar14 - 0x38;
        puVar11 = puVar11 + 7;
      } while (uVar14 != 0);
      uVar14 = (ulong)uStack_70._4_4_;
      *(uint *)(puVar5 + 3) = uStack_70._4_4_;
      puVar7 = puVar5 + 6;
      do {
        if (uVar14 != 0) {
          *puVar7 = puVar7[-1];
        }
        puVar7 = puVar7 + 7;
        uVar14 = uVar14 - 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return puVar5;
}



/* Entry: 10974bd44; end: 10974bd53;  */

bool FUN_10974bd44(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0xa0);
  uVar1 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar2 = &UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_1 + (ulong)uVar1);
  }
  func_0x000109729bf8(puVar2,*(undefined4 *)
                              (*(long *)(lVar3 + 0x70) + (ulong)*(uint *)(lVar3 + 0x5c) * 0x14));
  if ((int)puVar2 != -1) {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5aa);
    }
    FUN_10974be4c(param_1 + 4,param_2,param_1,param_1 + 6,
                  *(long *)(lVar3 + 0x80) + (ulong)*(uint *)(lVar3 + 0x5c) * 0x14);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5c2);
    }
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
  }
  return (int)puVar2 != -1;
}



/* Entry: 10974bd54; end: 10974be4b;  */

bool FUN_10974bd54(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0xa0);
  uVar1 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar2 = &UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_1 + (ulong)uVar1);
  }
  func_0x000109729bf8(puVar2,*(undefined4 *)
                              (*(long *)(lVar3 + 0x70) + (ulong)*(uint *)(lVar3 + 0x5c) * 0x14));
  if ((int)puVar2 != -1) {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5aa);
    }
    FUN_10974be4c(param_1 + 4,param_2,param_1,param_1 + 6,
                  *(long *)(lVar3 + 0x80) + (ulong)*(uint *)(lVar3 + 0x5c) * 0x14);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5c2);
    }
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
  }
  return (int)puVar2 != -1;
}



/* Entry: 10974be4c; end: 10974c22b;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10974be4c(char *param_1,long param_2,long param_3,ushort *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort *puVar11;
  undefined *puVar12;
  long lVar13;
  ushort *puVar14;
  
  bVar4 = param_1[1];
  if (bVar4 == 0 && *param_1 == '\0') {
    bVar8 = false;
  }
  else {
    lVar13 = *(long *)(param_2 + 0x90);
    uVar3 = *(uint *)(param_2 + 0x128);
    if ((bVar4 & 1) == 0) {
      bVar8 = false;
    }
    else {
      bVar8 = *(byte *)((long)param_4 + 1) != 0 || (byte)*param_4 != 0;
      param_5[2] = param_5[2] +
                   (int)(*(long *)(lVar13 + 0x58) *
                         ((long)(short)((ushort)(byte)*param_4 << 8) |
                         (ulong)*(byte *)((long)param_4 + 1)) + 0x8000 >> 0x10);
      param_4 = param_4 + 1;
    }
    puVar14 = param_4;
    if ((bVar4 >> 1 & 1) != 0) {
      bVar5 = *(byte *)((long)param_4 + 1);
      puVar14 = param_4 + 1;
      uVar7 = *param_4;
      param_5[3] = param_5[3] +
                   (int)(*(long *)(lVar13 + 0x60) *
                         ((long)(short)((ushort)(byte)uVar7 << 8) | (ulong)bVar5) + 0x8000 >> 0x10);
      if (bVar5 != 0 || (byte)uVar7 != 0) {
        bVar8 = true;
      }
    }
    uVar3 = uVar3 & 0xfffffffe;
    if ((bVar4 >> 2 & 1) != 0) {
      if ((uVar3 == 4) &&
         (bVar5 = *(byte *)((long)puVar14 + 1), uVar7 = *puVar14,
         *param_5 = *param_5 +
                    (int)(*(long *)(lVar13 + 0x58) *
                          ((long)(short)((ushort)(byte)uVar7 << 8) | (ulong)bVar5) + 0x8000 >> 0x10)
         , bVar5 != 0 || (byte)uVar7 != 0)) {
        bVar8 = true;
      }
      puVar14 = puVar14 + 1;
    }
    if ((bVar4 >> 3 & 1) != 0) {
      if ((uVar3 != 4) &&
         (bVar5 = *(byte *)((long)puVar14 + 1), uVar7 = *puVar14,
         param_5[1] = param_5[1] -
                      (int)(*(long *)(lVar13 + 0x60) *
                            ((long)(short)((ushort)(byte)uVar7 << 8) | (ulong)bVar5) + 0x8000 >>
                           0x10), bVar5 != 0 || (byte)uVar7 != 0)) {
        bVar8 = true;
      }
      puVar14 = puVar14 + 1;
    }
    if (0xf < (byte)param_1[1]) {
      if (*(int *)(lVar13 + 0x68) == 0) {
        bVar9 = *(int *)(lVar13 + 0x78) != 0;
      }
      else {
        bVar9 = true;
      }
      if (*(int *)(lVar13 + 0x6c) == 0) {
        bVar10 = *(int *)(lVar13 + 0x78) != 0;
        if (!bVar9 && !bVar10) {
          return bVar8;
        }
      }
      else {
        bVar10 = true;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x100);
      uVar2 = *(undefined8 *)(param_2 + 0x108);
      if ((bVar4 >> 4 & 1) != 0) {
        if (bVar9) {
          uVar7 = *puVar14;
          bVar5 = *(byte *)((long)puVar14 + 1);
          puVar11 = puVar14;
          FUN_10972bb90(puVar14,param_2 + 0xa8,param_3);
          puVar12 = &UNK_10dfe4888;
          if (((int)puVar11 != 0) &&
             (uVar6 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8, uVar6 != 0)) {
            puVar12 = (undefined *)(param_3 + (ulong)uVar6);
          }
          func_0x000109729fb8(puVar12,lVar13,uVar1,uVar2);
          param_5[2] = param_5[2] + (int)puVar12;
          if (bVar5 != 0 || (byte)uVar7 != 0) {
            bVar8 = true;
          }
        }
        puVar14 = puVar14 + 1;
      }
      if ((bVar4 >> 5 & 1) != 0) {
        if (bVar10) {
          uVar7 = *puVar14;
          bVar5 = *(byte *)((long)puVar14 + 1);
          puVar11 = puVar14;
          FUN_10972bb90(puVar14,param_2 + 0xa8,param_3);
          puVar12 = &UNK_10dfe4888;
          if (((int)puVar11 != 0) &&
             (uVar6 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8, uVar6 != 0)) {
            puVar12 = (undefined *)(param_3 + (ulong)uVar6);
          }
          func_0x00010972a058(puVar12,lVar13,uVar1,uVar2);
          param_5[3] = param_5[3] + (int)puVar12;
          if (bVar5 != 0 || (byte)uVar7 != 0) {
            bVar8 = true;
          }
        }
        puVar14 = puVar14 + 1;
      }
      if ((bVar4 >> 6 & 1) != 0) {
        if ((bool)(uVar3 == 4 & bVar9)) {
          uVar7 = *puVar14;
          bVar5 = *(byte *)((long)puVar14 + 1);
          puVar11 = puVar14;
          FUN_10972bb90(puVar14,param_2 + 0xa8,param_3);
          puVar12 = &UNK_10dfe4888;
          if (((int)puVar11 != 0) &&
             (uVar6 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8, uVar6 != 0)) {
            puVar12 = (undefined *)(param_3 + (ulong)uVar6);
          }
          func_0x000109729fb8(puVar12,lVar13,uVar1,uVar2);
          *param_5 = *param_5 + (int)puVar12;
          if (bVar5 != 0 || (byte)uVar7 != 0) {
            bVar8 = true;
          }
        }
        puVar14 = puVar14 + 1;
      }
      if ((((char)bVar4 < '\0') && (uVar3 != 4)) && (bVar10)) {
        uVar7 = *puVar14;
        bVar4 = *(byte *)((long)puVar14 + 1);
        puVar11 = puVar14;
        FUN_10972bb90(puVar14,param_2 + 0xa8,param_3);
        puVar12 = &UNK_10dfe4888;
        if (((int)puVar11 != 0) &&
           (uVar3 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8, uVar3 != 0)) {
          puVar12 = (undefined *)(param_3 + (ulong)uVar3);
        }
        func_0x00010972a058(puVar12,lVar13,uVar1,uVar2);
        param_5[1] = param_5[1] - (int)puVar12;
        if (bVar4 != 0 || (byte)uVar7 != 0) {
          bVar8 = true;
        }
      }
    }
  }
  return bVar8;
}



/* Entry: 10974c22c; end: 10974c23b;  */

undefined8 FUN_10974c22c(long param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0xa0);
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 == 0xffffffff) ||
     (((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8) <= uVar2)
     ) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5aa);
    }
    uVar1 = *(undefined2 *)(param_1 + 4);
    FUN_10974be4c((undefined2 *)(param_1 + 4),param_2,param_1,
                  param_1 + (ulong)((byte)(POPCOUNT((char)((ushort)uVar1 >> 8)) +
                                          POPCOUNT((char)uVar1)) * uVar2) * 2 + 8,
                  *(long *)(lVar5 + 0x80) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5c2);
    }
    *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10974c23c; end: 10974c363;  */

undefined8 FUN_10974c23c(long param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0xa0);
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 == 0xffffffff) ||
     (((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8) <= uVar2)
     ) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5aa);
    }
    uVar1 = *(undefined2 *)(param_1 + 4);
    FUN_10974be4c((undefined2 *)(param_1 + 4),param_2,param_1,
                  param_1 + (ulong)((byte)(POPCOUNT((char)((ushort)uVar1 >> 8)) +
                                          POPCOUNT((char)uVar1)) * uVar2) * 2 + 8,
                  *(long *)(lVar5 + 0x80) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5c2);
    }
    *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10974c364; end: 10974c373;  */

void FUN_10974c364(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  long lVar5;
  undefined4 uStack_34;
  
  lVar5 = *(long *)(param_2 + 0xa0);
  uVar1 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar2 = &UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_1 + (ulong)uVar1);
  }
  func_0x000109729bf8(puVar2,*(undefined4 *)
                              (*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14));
  if ((uint)puVar2 != 0xffffffff) {
    puVar3 = (undefined4 *)(param_2 + 8);
    *puVar3 = *(undefined4 *)(lVar5 + 0x5c);
    FUN_109732850(puVar3,&uStack_34);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_109730c80(lVar5,*(undefined4 *)(lVar5 + 0x5c),uStack_34);
    }
    else {
      puVar4 = (ushort *)&UNK_10dfe4888;
      if ((uint)puVar2 <
          ((uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8)) {
        puVar4 = (ushort *)(param_1 + ((ulong)puVar2 & 0xffffffff) * 2 + 10);
      }
      uVar1 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar1 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar1);
      }
      FUN_10974c468(puVar4,param_2,param_1 + 4,*(undefined4 *)(param_2 + 8));
    }
  }
  return;
}



/* Entry: 10974c374; end: 10974c467;  */

void FUN_10974c374(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  long lVar5;
  undefined4 uStack_34;
  
  lVar5 = *(long *)(param_2 + 0xa0);
  uVar1 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar2 = &UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_1 + (ulong)uVar1);
  }
  func_0x000109729bf8(puVar2,*(undefined4 *)
                              (*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14));
  if ((uint)puVar2 != 0xffffffff) {
    puVar3 = (undefined4 *)(param_2 + 8);
    *puVar3 = *(undefined4 *)(lVar5 + 0x5c);
    FUN_109732850(puVar3,&uStack_34);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_109730c80(lVar5,*(undefined4 *)(lVar5 + 0x5c),uStack_34);
    }
    else {
      puVar4 = (ushort *)&UNK_10dfe4888;
      if ((uint)puVar2 <
          ((uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8)) {
        puVar4 = (ushort *)(param_1 + ((ulong)puVar2 & 0xffffffff) * 2 + 10);
      }
      uVar1 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar1 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar1);
      }
      FUN_10974c468(puVar4,param_2,param_1 + 4,*(undefined4 *)(param_2 + 8));
    }
  }
  return;
}



/* Entry: 10974c468; end: 10974c6ab;  */

undefined8 FUN_10974c468(ushort *param_1,long param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar7;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 != 0) {
    iVar9 = 0;
    uVar1 = *param_3;
    uVar4 = (uint)(byte)(POPCOUNT((char)(uVar1 >> 8)) + POPCOUNT((char)uVar1));
    puVar7 = param_3 + 1;
    uVar2 = *puVar7;
    uVar6 = *(uint *)(*(long *)(lVar11 + 0x70) + (ulong)param_4 * 0x14);
    iVar10 = uVar5 - 1;
    do {
      uVar5 = (uint)(iVar10 + iVar9) >> 1;
      puVar12 = (ushort *)
                ((long)param_1 +
                (ulong)(((byte)(POPCOUNT((char)(uVar2 >> 8)) + POPCOUNT((char)uVar2)) + uVar4) * 2 +
                       2) * (ulong)uVar5 + 2);
      uVar3 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
      if (uVar6 < uVar3) {
        iVar10 = uVar5 - 1;
      }
      else {
        if (uVar3 == uVar6) {
          if (*(long *)(lVar11 + 0xd0) != 0) {
            FUN_1096f53f4(lVar11,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5d9);
          }
          if (uVar1 >> 8 == 0 && (uVar1 & 0xff) == 0) {
            uVar5 = 0;
          }
          else {
            FUN_10974be4c(param_3,param_2,param_1,puVar12 + 1,
                          *(long *)(lVar11 + 0x80) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14);
            uVar5 = (uint)param_3;
          }
          if (uVar2 >> 8 == 0 && (uVar2 & 0xff) == 0) {
            uVar6 = 0;
          }
          else {
            FUN_10974be4c(puVar7,param_2,param_1,puVar12 + (ulong)uVar4 + 1,
                          *(long *)(lVar11 + 0x80) + (ulong)param_4 * 0x14);
            uVar6 = (uint)puVar7;
          }
          lVar8 = *(long *)(param_2 + 0xa0);
          if ((((uVar5 | uVar6) & 1) != 0) && (*(long *)(lVar8 + 0xd0) != 0)) {
            FUN_1096f53f4(lVar8,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5f5);
            lVar8 = *(long *)(param_2 + 0xa0);
          }
          if (*(long *)(lVar8 + 0xd0) != 0) {
            FUN_1096f53f4(lVar8,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f60c);
          }
          if (((uVar5 | uVar6) & 1) != 0) {
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),param_4 + 1,1,0);
          }
          uVar5 = param_4;
          if (uVar2 >> 8 != 0 || (uVar2 & 0xff) != 0) {
            uVar5 = param_4 + 1;
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),param_4 + 2,1,0);
          }
          *(uint *)(lVar11 + 0x5c) = uVar5;
          return 1;
        }
        iVar9 = uVar5 + 1;
      }
    } while (iVar9 <= iVar10);
  }
  FUN_109730c80(lVar11,*(undefined4 *)(lVar11 + 0x5c),param_4 + 1);
  return 0;
}



/* Entry: 10974c6ac; end: 10974c6bb;  */

undefined8 FUN_10974c6ac(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iStack_64;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar7 = &UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar7 = (undefined *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(puVar7,*(undefined4 *)
                              (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14));
  if ((int)puVar7 != -1) {
    puVar12 = (uint *)(param_2 + 8);
    *puVar12 = *(uint *)(lVar11 + 0x5c);
    puVar8 = puVar12;
    FUN_109732850(puVar12,&iStack_64);
    if (((ulong)puVar8 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar11 + 0x5c);
    }
    else {
      uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
      puVar7 = &UNK_10dfe4888;
      if (uVar6 != 0) {
        puVar7 = (undefined *)(param_1 + (ulong)uVar6);
      }
      func_0x000109729ab0(puVar7,*(undefined4 *)
                                  (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14
                                  ));
      uVar6 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar9 = &UNK_10dfe4888;
      if (uVar6 != 0) {
        puVar9 = (undefined *)(param_1 + (ulong)uVar6);
      }
      func_0x000109729ab0(puVar9,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)*puVar12 * 0x14))
      ;
      if ((uint)puVar7 <
          ((uint)(*(ushort *)(param_1 + 0xc) >> 8) | (*(ushort *)(param_1 + 0xc) & 0xff00ff) << 8))
      {
        uVar2 = *(ushort *)(param_1 + 0xe);
        if ((uint)puVar9 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
          puVar14 = (ushort *)(param_1 + 4);
          uVar3 = *puVar14;
          puVar13 = (ushort *)(param_1 + 6);
          uVar4 = *puVar13;
          uVar6 = (uint)(byte)(POPCOUNT((char)(uVar3 >> 8)) + POPCOUNT((char)uVar3));
          if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
            FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5d9);
          }
          lVar10 = param_1 + (ulong)(((byte)(POPCOUNT((char)(uVar4 >> 8)) + POPCOUNT((char)uVar4)) +
                                     uVar6) * ((uint)puVar9 +
                                              ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) *
                                              (uint)puVar7)) * 2 + 0x10;
          if (uVar3 >> 8 == 0 && (uVar3 & 0xff) == 0) {
            uVar5 = 0;
          }
          else {
            FUN_10974be4c(puVar14,param_2,param_1,lVar10,
                          *(long *)(lVar11 + 0x80) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14);
            uVar5 = (uint)puVar14;
          }
          if (uVar4 >> 8 == 0 && (uVar4 & 0xff) == 0) {
            uVar6 = 0;
          }
          else {
            FUN_10974be4c(puVar13,param_2,param_1,lVar10 + (ulong)uVar6 * 2,
                          *(long *)(lVar11 + 0x80) + (ulong)*(uint *)(param_2 + 8) * 0x14);
            uVar6 = (uint)puVar13;
          }
          lVar10 = *(long *)(param_2 + 0xa0);
          if ((((uVar5 | uVar6) & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) {
            FUN_1096f53f4(lVar10,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5f5);
            lVar10 = *(long *)(param_2 + 0xa0);
          }
          if (*(long *)(lVar10 + 0xd0) != 0) {
            FUN_1096f53f4(lVar10,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f60c);
          }
          if (((uVar5 | uVar6) & 1) == 0) {
            FUN_109730c80(lVar11,*(undefined4 *)(lVar11 + 0x5c),*puVar12 + 1);
          }
          else {
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),*puVar12 + 1,1,0);
          }
          if (uVar4 >> 8 != 0 || (uVar4 & 0xff) != 0) {
            uVar6 = *puVar12;
            *puVar12 = uVar6 + 1;
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),uVar6 + 2,1,0);
          }
          *(uint *)(lVar11 + 0x5c) = *puVar12;
          return 1;
        }
      }
      uVar1 = *(undefined4 *)(lVar11 + 0x5c);
      iStack_64 = *puVar12 + 1;
    }
    FUN_109730c80(lVar11,uVar1,iStack_64);
  }
  return 0;
}



/* Entry: 10974c6bc; end: 10974c9b3;  */

undefined8 FUN_10974c6bc(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iStack_64;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar7 = &UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar7 = (undefined *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(puVar7,*(undefined4 *)
                              (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14));
  if ((int)puVar7 != -1) {
    puVar12 = (uint *)(param_2 + 8);
    *puVar12 = *(uint *)(lVar11 + 0x5c);
    puVar8 = puVar12;
    FUN_109732850(puVar12,&iStack_64);
    if (((ulong)puVar8 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar11 + 0x5c);
    }
    else {
      uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
      puVar7 = &UNK_10dfe4888;
      if (uVar6 != 0) {
        puVar7 = (undefined *)(param_1 + (ulong)uVar6);
      }
      func_0x000109729ab0(puVar7,*(undefined4 *)
                                  (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14
                                  ));
      uVar6 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar9 = &UNK_10dfe4888;
      if (uVar6 != 0) {
        puVar9 = (undefined *)(param_1 + (ulong)uVar6);
      }
      func_0x000109729ab0(puVar9,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)*puVar12 * 0x14))
      ;
      if ((uint)puVar7 <
          ((uint)(*(ushort *)(param_1 + 0xc) >> 8) | (*(ushort *)(param_1 + 0xc) & 0xff00ff) << 8))
      {
        uVar2 = *(ushort *)(param_1 + 0xe);
        if ((uint)puVar9 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
          puVar14 = (ushort *)(param_1 + 4);
          uVar3 = *puVar14;
          puVar13 = (ushort *)(param_1 + 6);
          uVar4 = *puVar13;
          uVar6 = (uint)(byte)(POPCOUNT((char)(uVar3 >> 8)) + POPCOUNT((char)uVar3));
          if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
            FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5d9);
          }
          lVar10 = param_1 + (ulong)(((byte)(POPCOUNT((char)(uVar4 >> 8)) + POPCOUNT((char)uVar4)) +
                                     uVar6) * ((uint)puVar9 +
                                              ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) *
                                              (uint)puVar7)) * 2 + 0x10;
          if (uVar3 >> 8 == 0 && (uVar3 & 0xff) == 0) {
            uVar5 = 0;
          }
          else {
            FUN_10974be4c(puVar14,param_2,param_1,lVar10,
                          *(long *)(lVar11 + 0x80) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14);
            uVar5 = (uint)puVar14;
          }
          if (uVar4 >> 8 == 0 && (uVar4 & 0xff) == 0) {
            uVar6 = 0;
          }
          else {
            FUN_10974be4c(puVar13,param_2,param_1,lVar10 + (ulong)uVar6 * 2,
                          *(long *)(lVar11 + 0x80) + (ulong)*(uint *)(param_2 + 8) * 0x14);
            uVar6 = (uint)puVar13;
          }
          lVar10 = *(long *)(param_2 + 0xa0);
          if ((((uVar5 | uVar6) & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) {
            FUN_1096f53f4(lVar10,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f5f5);
            lVar10 = *(long *)(param_2 + 0xa0);
          }
          if (*(long *)(lVar10 + 0xd0) != 0) {
            FUN_1096f53f4(lVar10,*(undefined8 *)(param_2 + 0x90),&UNK_10f57f60c);
          }
          if (((uVar5 | uVar6) & 1) == 0) {
            FUN_109730c80(lVar11,*(undefined4 *)(lVar11 + 0x5c),*puVar12 + 1);
          }
          else {
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),*puVar12 + 1,1,0);
          }
          if (uVar4 >> 8 != 0 || (uVar4 & 0xff) != 0) {
            uVar6 = *puVar12;
            *puVar12 = uVar6 + 1;
            FUN_109710ea8(lVar11,3,*(undefined4 *)(lVar11 + 0x5c),uVar6 + 2,1,0);
          }
          *(uint *)(lVar11 + 0x5c) = *puVar12;
          return 1;
        }
      }
      uVar1 = *(undefined4 *)(lVar11 + 0x5c);
      iStack_64 = *puVar12 + 1;
    }
    FUN_109730c80(lVar11,uVar1,iStack_64);
  }
  return 0;
}



/* Entry: 10974c9b4; end: 10974c9c3;  */

void FUN_10974c9b4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  int iVar17;
  ushort *puVar18;
  ulong uVar19;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar4 = (ushort *)&UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar4 = (ushort *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar4,*(undefined4 *)
                              (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14));
  puVar15 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar4 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar15 = (ushort *)(param_1 + ((ulong)puVar4 & 0xffffffff) * 4 + 6);
  }
  if (*(char *)((long)puVar15 + 1) == '\0' && (char)*puVar15 == '\0') {
    return;
  }
  puVar4 = puVar15;
  func_0x0001097304fc(puVar15,param_2 + 0xa8,param_1);
  if ((int)puVar4 == 0) {
    return;
  }
  puVar12 = (uint *)(param_2 + 8);
  *puVar12 = *(uint *)(lVar11 + 0x5c);
  puVar5 = puVar12;
  FUN_109733d90(puVar12,&uStack_64);
  if (((ulong)puVar5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar1 = *(int *)(lVar11 + 0x5c);
  }
  else {
    uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar4 = (ushort *)(param_1 + (ulong)uVar2);
    }
    func_0x000109729bf8(puVar4,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)*puVar12 * 0x14));
    puVar18 = (ushort *)&UNK_10dfe4888;
    if ((uint)puVar4 <
        ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
      puVar18 = (ushort *)(param_1 + ((ulong)puVar4 & 0xffffffff) * 4 + 6);
    }
    puVar4 = puVar18 + 1;
    if ((*(char *)((long)puVar18 + 3) != '\0' || (char)*puVar4 != '\0') &&
       (func_0x0001097304fc(puVar4,param_2 + 0xa8,param_1), ((ulong)puVar4 & 1) != 0)) {
      uVar19 = (ulong)*(uint *)(param_2 + 8);
      uVar2 = *(uint *)(lVar11 + 0x5c);
      uVar13 = (ulong)uVar2;
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f62a);
      }
      FUN_109710ea8(lVar11,3,uVar19,uVar2 + 1,1,0);
      uVar3 = (uint)(puVar18[1] >> 8) | (puVar18[1] & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar3);
      }
      FUN_10974cee0(puVar4,param_2,*(undefined4 *)(*(long *)(lVar11 + 0x70) + uVar19 * 0x14),
                    &fStack_70,&fStack_74);
      uVar3 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar3);
      }
      FUN_10974cee0(puVar4,param_2,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)uVar2 * 0x14),
                    &fStack_68,&fStack_6c);
      lVar14 = *(long *)(lVar11 + 0x80);
      iVar1 = *(int *)(param_2 + 0x128);
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          piVar8 = (int *)(lVar14 + uVar19 * 0x14);
          piVar6 = (int *)(lVar14 + uVar13 * 0x14);
          iVar10 = piVar6[2];
          iVar17 = (int)((float)(int)(fStack_68 + 0.5) + (float)iVar10);
          *piVar8 = (int)((float)(int)(fStack_70 + 0.5) + (float)piVar8[2]);
          *piVar6 = *piVar6 - iVar17;
          piVar6[2] = iVar10 - iVar17;
        }
        else if (iVar1 == 5) {
          piVar6 = (int *)(lVar14 + uVar19 * 0x14);
          iVar10 = (int)((float)(int)(fStack_70 + 0.5) + (float)piVar6[2]);
          *piVar6 = *piVar6 - iVar10;
          piVar6[2] = piVar6[2] - iVar10;
          piVar6 = (int *)(lVar14 + uVar13 * 0x14);
          *piVar6 = (int)((float)(int)(fStack_68 + 0.5) + (float)piVar6[2]);
        }
      }
      else if (iVar1 == 6) {
        lVar9 = lVar14 + uVar19 * 0x14;
        lVar7 = lVar14 + uVar13 * 0x14;
        iVar10 = *(int *)(lVar7 + 0xc);
        iVar17 = (int)((float)(int)(fStack_6c + 0.5) + (float)iVar10);
        *(int *)(lVar9 + 4) = (int)((float)(int)(fStack_74 + 0.5) + (float)*(int *)(lVar9 + 0xc));
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - iVar17;
        *(int *)(lVar7 + 0xc) = iVar10 - iVar17;
      }
      else if (iVar1 == 7) {
        lVar7 = lVar14 + uVar19 * 0x14;
        iVar10 = (int)((float)(int)(fStack_74 + 0.5) + (float)*(int *)(lVar7 + 0xc));
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - iVar10;
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) - iVar10;
        *(int *)(lVar14 + uVar13 * 0x14 + 4) = (int)(fStack_6c + 0.5);
      }
      iVar17 = (int)((fStack_68 - fStack_70) + 0.5);
      iVar10 = (int)((fStack_6c - fStack_74) + 0.5);
      uVar16 = uVar19;
      if ((*(byte *)(param_2 + 0x134) & 1) == 0) {
        iVar17 = -iVar17;
        iVar10 = -iVar10;
        uVar16 = uVar13;
        uVar13 = uVar19;
      }
      func_0x00010974d120(lVar14,uVar16,iVar1,uVar13);
      lVar9 = lVar14 + uVar16 * 0x14;
      *(undefined1 *)(lVar9 + 0x12) = 2;
      *(short *)(lVar9 + 0x10) = (short)uVar13 - (short)uVar16;
      *(uint *)(lVar11 + 0xc0) = *(uint *)(lVar11 + 0xc0) | 8;
      lVar7 = 0xc;
      if ((*(uint *)(param_2 + 0x128) & 0xfffffffe) != 4) {
        lVar7 = 8;
        iVar10 = iVar17;
      }
      *(int *)(lVar9 + lVar7) = iVar10;
      lVar14 = lVar14 + uVar13 * 0x14;
      if ((int)*(short *)(lVar14 + 0x10) + (int)*(short *)(lVar9 + 0x10) == 0) {
        *(undefined2 *)(lVar14 + 0x10) = 0;
        lVar7 = 0xc;
        if ((*(uint *)(param_2 + 0x128) & 0xfffffffe) != 4) {
          lVar7 = 8;
        }
        *(undefined4 *)(lVar14 + lVar7) = 0;
      }
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f657);
      }
      *(int *)(lVar11 + 0x5c) = *(int *)(lVar11 + 0x5c) + 1;
      return;
    }
    if ((*(byte *)(lVar11 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar1 = *(int *)(lVar11 + 0x5c);
    uStack_64 = *puVar12;
  }
  FUN_109710ea8(lVar11,2,uStack_64,iVar1 + 1,0,1);
  return;
}



/* Entry: 10974c9c4; end: 10974cedf;  */

void FUN_10974c9c4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  int iVar17;
  ushort *puVar18;
  ulong uVar19;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar4 = (ushort *)&UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar4 = (ushort *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar4,*(undefined4 *)
                              (*(long *)(lVar11 + 0x70) + (ulong)*(uint *)(lVar11 + 0x5c) * 0x14));
  puVar15 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar4 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar15 = (ushort *)(param_1 + ((ulong)puVar4 & 0xffffffff) * 4 + 6);
  }
  if (*(char *)((long)puVar15 + 1) == '\0' && (char)*puVar15 == '\0') {
    return;
  }
  puVar4 = puVar15;
  func_0x0001097304fc(puVar15,param_2 + 0xa8,param_1);
  if ((int)puVar4 == 0) {
    return;
  }
  puVar12 = (uint *)(param_2 + 8);
  *puVar12 = *(uint *)(lVar11 + 0x5c);
  puVar5 = puVar12;
  FUN_109733d90(puVar12,&uStack_64);
  if (((ulong)puVar5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar1 = *(int *)(lVar11 + 0x5c);
  }
  else {
    uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar4 = (ushort *)(param_1 + (ulong)uVar2);
    }
    func_0x000109729bf8(puVar4,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)*puVar12 * 0x14));
    puVar18 = (ushort *)&UNK_10dfe4888;
    if ((uint)puVar4 <
        ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
      puVar18 = (ushort *)(param_1 + ((ulong)puVar4 & 0xffffffff) * 4 + 6);
    }
    puVar4 = puVar18 + 1;
    if ((*(char *)((long)puVar18 + 3) != '\0' || (char)*puVar4 != '\0') &&
       (func_0x0001097304fc(puVar4,param_2 + 0xa8,param_1), ((ulong)puVar4 & 1) != 0)) {
      uVar19 = (ulong)*(uint *)(param_2 + 8);
      uVar2 = *(uint *)(lVar11 + 0x5c);
      uVar13 = (ulong)uVar2;
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f62a);
      }
      FUN_109710ea8(lVar11,3,uVar19,uVar2 + 1,1,0);
      uVar3 = (uint)(puVar18[1] >> 8) | (puVar18[1] & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar3);
      }
      FUN_10974cee0(puVar4,param_2,*(undefined4 *)(*(long *)(lVar11 + 0x70) + uVar19 * 0x14),
                    &fStack_70,&fStack_74);
      uVar3 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar4 = (ushort *)(param_1 + (ulong)uVar3);
      }
      FUN_10974cee0(puVar4,param_2,*(undefined4 *)(*(long *)(lVar11 + 0x70) + (ulong)uVar2 * 0x14),
                    &fStack_68,&fStack_6c);
      lVar14 = *(long *)(lVar11 + 0x80);
      iVar1 = *(int *)(param_2 + 0x128);
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          piVar8 = (int *)(lVar14 + uVar19 * 0x14);
          piVar6 = (int *)(lVar14 + uVar13 * 0x14);
          iVar10 = piVar6[2];
          iVar17 = (int)((float)(int)(fStack_68 + 0.5) + (float)iVar10);
          *piVar8 = (int)((float)(int)(fStack_70 + 0.5) + (float)piVar8[2]);
          *piVar6 = *piVar6 - iVar17;
          piVar6[2] = iVar10 - iVar17;
        }
        else if (iVar1 == 5) {
          piVar6 = (int *)(lVar14 + uVar19 * 0x14);
          iVar10 = (int)((float)(int)(fStack_70 + 0.5) + (float)piVar6[2]);
          *piVar6 = *piVar6 - iVar10;
          piVar6[2] = piVar6[2] - iVar10;
          piVar6 = (int *)(lVar14 + uVar13 * 0x14);
          *piVar6 = (int)((float)(int)(fStack_68 + 0.5) + (float)piVar6[2]);
        }
      }
      else if (iVar1 == 6) {
        lVar9 = lVar14 + uVar19 * 0x14;
        lVar7 = lVar14 + uVar13 * 0x14;
        iVar10 = *(int *)(lVar7 + 0xc);
        iVar17 = (int)((float)(int)(fStack_6c + 0.5) + (float)iVar10);
        *(int *)(lVar9 + 4) = (int)((float)(int)(fStack_74 + 0.5) + (float)*(int *)(lVar9 + 0xc));
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - iVar17;
        *(int *)(lVar7 + 0xc) = iVar10 - iVar17;
      }
      else if (iVar1 == 7) {
        lVar7 = lVar14 + uVar19 * 0x14;
        iVar10 = (int)((float)(int)(fStack_74 + 0.5) + (float)*(int *)(lVar7 + 0xc));
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - iVar10;
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) - iVar10;
        *(int *)(lVar14 + uVar13 * 0x14 + 4) = (int)(fStack_6c + 0.5);
      }
      iVar17 = (int)((fStack_68 - fStack_70) + 0.5);
      iVar10 = (int)((fStack_6c - fStack_74) + 0.5);
      uVar16 = uVar19;
      if ((*(byte *)(param_2 + 0x134) & 1) == 0) {
        iVar17 = -iVar17;
        iVar10 = -iVar10;
        uVar16 = uVar13;
        uVar13 = uVar19;
      }
      func_0x00010974d120(lVar14,uVar16,iVar1,uVar13);
      lVar9 = lVar14 + uVar16 * 0x14;
      *(undefined1 *)(lVar9 + 0x12) = 2;
      *(short *)(lVar9 + 0x10) = (short)uVar13 - (short)uVar16;
      *(uint *)(lVar11 + 0xc0) = *(uint *)(lVar11 + 0xc0) | 8;
      lVar7 = 0xc;
      if ((*(uint *)(param_2 + 0x128) & 0xfffffffe) != 4) {
        lVar7 = 8;
        iVar10 = iVar17;
      }
      *(int *)(lVar9 + lVar7) = iVar10;
      lVar14 = lVar14 + uVar13 * 0x14;
      if ((int)*(short *)(lVar14 + 0x10) + (int)*(short *)(lVar9 + 0x10) == 0) {
        *(undefined2 *)(lVar14 + 0x10) = 0;
        lVar7 = 0xc;
        if ((*(uint *)(param_2 + 0x128) & 0xfffffffe) != 4) {
          lVar7 = 8;
        }
        *(undefined4 *)(lVar14 + lVar7) = 0;
      }
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f657);
      }
      *(int *)(lVar11 + 0x5c) = *(int *)(lVar11 + 0x5c) + 1;
      return;
    }
    if ((*(byte *)(lVar11 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar1 = *(int *)(lVar11 + 0x5c);
    uStack_64 = *puVar12;
  }
  FUN_109710ea8(lVar11,2,uStack_64,iVar1 + 1,0,1);
  return;
}



/* Entry: 10974cee0; end: 10974d1d7;  */

void FUN_10974cee0(ushort *param_1,long param_2,undefined8 param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ushort *puVar7;
  undefined *puVar8;
  long lVar9;
  float fVar10;
  undefined8 uStack_48;
  
  *param_5 = 0.0;
  *param_4 = 0.0;
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  if (uVar3 == 3) {
    lVar9 = *(long *)(param_2 + 0x90);
    *param_4 = *(float *)(lVar9 + 0x4c) * (float)(int)(short)(param_1[1] >> 8 | param_1[1] << 8);
    *param_5 = *(float *)(lVar9 + 0x50) * (float)(int)(short)(param_1[2] >> 8 | param_1[2] << 8);
    if ((*(int *)(lVar9 + 0x68) != 0) || (*(int *)(lVar9 + 0x78) != 0)) {
      puVar7 = param_1 + 3;
      FUN_10972bb90(puVar7,param_2 + 0xa8,param_1);
      if ((int)puVar7 != 0) {
        uVar4 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
        puVar8 = &UNK_10dfe4888;
        if (uVar4 != 0) {
          puVar8 = (undefined *)((long)param_1 + (ulong)uVar4);
        }
        FUN_109729fb8(puVar8,lVar9,*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0x108)
                     );
        *param_4 = *param_4 + (float)(int)puVar8;
      }
    }
    if ((*(int *)(lVar9 + 0x6c) == 0) && (*(int *)(lVar9 + 0x78) == 0)) {
      return;
    }
    puVar7 = param_1 + 4;
    FUN_10972bb90(puVar7,param_2 + 0xa8,param_1);
    if ((int)puVar7 == 0) {
      return;
    }
    uVar4 = (uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8;
    puVar8 = &UNK_10dfe4888;
    if (uVar4 != 0) {
      puVar8 = (undefined *)((long)param_1 + (ulong)uVar4);
    }
    func_0x00010972a058(puVar8,lVar9,*(undefined8 *)(param_2 + 0x100),
                        *(undefined8 *)(param_2 + 0x108));
    fVar10 = *param_5 + (float)(int)puVar8;
    goto LAB_10974d104;
  }
  if (uVar3 == 2) {
    bVar5 = false;
    lVar9 = *(long *)(param_2 + 0x90);
    iVar1 = *(int *)(lVar9 + 0x68);
    iVar2 = *(int *)(lVar9 + 0x6c);
    uStack_48 = 0;
    if (iVar1 == 0 && iVar2 == 0) {
LAB_10974cfb8:
      *param_4 = *(float *)(lVar9 + 0x4c) * (float)(int)(short)(param_1[1] >> 8 | param_1[1] << 8);
      if (bVar5) goto joined_r0x00010974d0e8;
    }
    else {
      lVar6 = lVar9;
      func_0x0001096fb4c8(lVar9,param_3,param_1[3] >> 8 | param_1[3] << 8,4,(long)&uStack_48 + 4,
                          &uStack_48);
      bVar5 = (int)lVar6 != 0;
      if (iVar1 == 0 || (int)lVar6 == 0) goto LAB_10974cfb8;
      *param_4 = (float)uStack_48._4_4_;
joined_r0x00010974d0e8:
      if (iVar2 != 0) {
        fVar10 = (float)(int)uStack_48;
        goto LAB_10974d104;
      }
    }
    uVar3 = param_1[2] >> 8 | param_1[2] << 8;
    fVar10 = *(float *)(lVar9 + 0x50);
  }
  else {
    if (uVar3 != 1) {
      return;
    }
    lVar9 = *(long *)(param_2 + 0x90);
    *param_4 = *(float *)(lVar9 + 0x4c) * (float)(int)(short)(param_1[1] >> 8 | param_1[1] << 8);
    uVar3 = param_1[2] >> 8 | param_1[2] << 8;
    fVar10 = *(float *)(lVar9 + 0x50);
  }
  fVar10 = fVar10 * (float)(int)(short)uVar3;
LAB_10974d104:
  *param_5 = fVar10;
  return;
}



/* Entry: 10974d1d8; end: 10974d1e7;  */

ushort * FUN_10974d1d8(long param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar16 = *(long *)(param_2 + 0xa0);
  uVar13 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar10 = (ushort *)&UNK_10dfe4888;
  if (uVar13 != 0) {
    puVar10 = (ushort *)(param_1 + (ulong)uVar13);
  }
  func_0x000109729bf8(puVar10,*(undefined4 *)
                               (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14));
  if ((uint)puVar10 != 0xffffffff) {
    *(undefined4 *)(param_2 + 0x18) = 8;
    uVar13 = *(uint *)(param_2 + 0x14c);
    uVar9 = *(uint *)(lVar16 + 0x5c);
    uVar17 = (ulong)uVar9;
    if (uVar9 < uVar13) {
      uVar13 = 0;
      *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
    }
    if (uVar13 < uVar9) {
      do {
        uVar13 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar13;
        lVar15 = param_2 + 8;
        func_0x000109732900(lVar15,*(long *)(lVar16 + 0x70) + uVar17 * 0x14);
        if ((int)lVar15 == 0) {
          uVar18 = *(ulong *)(lVar16 + 0x70);
          uVar11 = uVar18;
          FUN_10974d3e4(uVar18,uVar17);
          if ((uVar11 & 1) == 0) {
            uVar9 = (uint)(*(ushort *)(param_1 + 4) >> 8) |
                    (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
            puVar12 = (ushort *)&UNK_10dfe4888;
            if (uVar9 != 0) {
              puVar12 = (ushort *)(param_1 + (ulong)uVar9);
            }
            func_0x000109729bf8(puVar12,*(undefined4 *)(uVar18 + uVar17 * 0x14));
            if ((int)puVar12 == -1) goto LAB_10974d2ec;
          }
          *(uint *)(param_2 + 0x148) = uVar13;
          break;
        }
LAB_10974d2ec:
      } while (*(uint *)(param_2 + 0x14c) < uVar13);
    }
    iVar2 = *(int *)(lVar16 + 0x5c);
    *(int *)(param_2 + 0x14c) = iVar2;
    uVar13 = *(uint *)(param_2 + 0x148);
    uVar17 = (ulong)uVar13;
    if (uVar13 == 0xffffffff) {
      if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
        return (ushort *)0x0;
      }
      uVar17 = 0;
    }
    else {
      uVar9 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
      puVar12 = (ushort *)&UNK_10dfe4888;
      if (uVar9 != 0) {
        puVar12 = (ushort *)(param_1 + (ulong)uVar9);
      }
      func_0x000109729bf8(puVar12,*(undefined4 *)(*(long *)(lVar16 + 0x70) + (ulong)uVar13 * 0x14));
      uVar9 = (uint)puVar12;
      if (uVar9 != 0xffffffff) {
        uVar5 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        puVar12 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar12 = (ushort *)(param_1 + (ulong)uVar5);
        }
        uVar5 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8
        ;
        puVar1 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar1 = (ushort *)(param_1 + (ulong)uVar5);
        }
        uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
        lVar16 = *(long *)(param_2 + 0xa0);
        puVar14 = (ushort *)&UNK_10dfe4888;
        if ((uint)puVar10 < ((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8)) {
          puVar14 = puVar12 + ((ulong)puVar10 & 0xffffffff) * 2 + 1;
        }
        uVar6 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8;
        if (uVar6 < uVar5 && uVar9 < ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8)) {
          uVar8 = puVar14[1];
          uVar3 = *(undefined *)((long)puVar14 + 3);
          uVar6 = uVar6 + uVar5 * uVar9;
          puVar10 = puVar1 + (ulong)uVar6 + 1;
          FUN_109730900(puVar10,param_2 + 0xa8,puVar1);
          if ((int)puVar10 == 0) {
            return puVar10;
          }
          cVar4 = *(char *)((long)puVar1 + (ulong)uVar6 * 2 + 3);
          if (cVar4 != '\0' || (char)puVar1[(ulong)uVar6 + 1] != '\0') {
            uVar7 = CONCAT11((char)puVar1[(ulong)uVar6 + 1],cVar4);
            puVar10 = (ushort *)&UNK_10dfe4888;
            if (uVar7 != 0) {
              puVar10 = (ushort *)((long)puVar1 + (ulong)uVar7);
            }
            uVar9 = (uint)CONCAT11((char)uVar8,uVar3);
            puVar1 = (ushort *)&UNK_10dfe4888;
            if (uVar9 != 0) {
              puVar1 = (ushort *)((long)puVar12 + (ulong)uVar9);
            }
            FUN_109710ea8(lVar16,3,uVar17,*(int *)(lVar16 + 0x5c) + 1,1,0);
            FUN_10974cee0(puVar1,param_2,
                          *(undefined4 *)
                           (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14),
                          &fStack_64,&fStack_68);
            FUN_10974cee0(puVar10,param_2,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14),
                          &fStack_6c,&fStack_70);
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f683
                           );
            }
            lVar15 = *(long *)(lVar16 + 0x80) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14;
            *(ulong *)(lVar15 + 8) =
                 CONCAT44((int)(float)(int)((fStack_70 - fStack_68) + 0.5),
                          (int)(float)(int)((fStack_6c - fStack_64) + 0.5));
            *(undefined1 *)(lVar15 + 0x12) = 1;
            *(short *)(lVar15 + 0x10) = (short)uVar13 - (short)*(undefined4 *)(lVar16 + 0x5c);
            *(uint *)(lVar16 + 0xc0) = *(uint *)(lVar16 + 0xc0) | 8;
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f6ad
                           );
            }
            *(int *)(lVar16 + 0x5c) = *(int *)(lVar16 + 0x5c) + 1;
            return (ushort *)0x1;
          }
        }
        return (ushort *)0x0;
      }
      if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
        return (ushort *)0x0;
      }
      iVar2 = *(int *)(lVar16 + 0x5c);
    }
    FUN_109710ea8(lVar16,2,uVar17,iVar2 + 1,0,1);
  }
  return (ushort *)0x0;
}



/* Entry: 10974d1e8; end: 10974d3e3;  */

ushort * FUN_10974d1e8(long param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar16 = *(long *)(param_2 + 0xa0);
  uVar13 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar10 = (ushort *)&UNK_10dfe4888;
  if (uVar13 != 0) {
    puVar10 = (ushort *)(param_1 + (ulong)uVar13);
  }
  func_0x000109729bf8(puVar10,*(undefined4 *)
                               (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14));
  if ((uint)puVar10 != 0xffffffff) {
    *(undefined4 *)(param_2 + 0x18) = 8;
    uVar13 = *(uint *)(param_2 + 0x14c);
    uVar9 = *(uint *)(lVar16 + 0x5c);
    uVar17 = (ulong)uVar9;
    if (uVar9 < uVar13) {
      uVar13 = 0;
      *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
    }
    if (uVar13 < uVar9) {
      do {
        uVar13 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar13;
        lVar15 = param_2 + 8;
        func_0x000109732900(lVar15,*(long *)(lVar16 + 0x70) + uVar17 * 0x14);
        if ((int)lVar15 == 0) {
          uVar18 = *(ulong *)(lVar16 + 0x70);
          uVar11 = uVar18;
          FUN_10974d3e4(uVar18,uVar17);
          if ((uVar11 & 1) == 0) {
            uVar9 = (uint)(*(ushort *)(param_1 + 4) >> 8) |
                    (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
            puVar12 = (ushort *)&UNK_10dfe4888;
            if (uVar9 != 0) {
              puVar12 = (ushort *)(param_1 + (ulong)uVar9);
            }
            func_0x000109729bf8(puVar12,*(undefined4 *)(uVar18 + uVar17 * 0x14));
            if ((int)puVar12 == -1) goto LAB_10974d2ec;
          }
          *(uint *)(param_2 + 0x148) = uVar13;
          break;
        }
LAB_10974d2ec:
      } while (*(uint *)(param_2 + 0x14c) < uVar13);
    }
    iVar2 = *(int *)(lVar16 + 0x5c);
    *(int *)(param_2 + 0x14c) = iVar2;
    uVar13 = *(uint *)(param_2 + 0x148);
    uVar17 = (ulong)uVar13;
    if (uVar13 == 0xffffffff) {
      if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
        return (ushort *)0x0;
      }
      uVar17 = 0;
    }
    else {
      uVar9 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
      puVar12 = (ushort *)&UNK_10dfe4888;
      if (uVar9 != 0) {
        puVar12 = (ushort *)(param_1 + (ulong)uVar9);
      }
      func_0x000109729bf8(puVar12,*(undefined4 *)(*(long *)(lVar16 + 0x70) + (ulong)uVar13 * 0x14));
      uVar9 = (uint)puVar12;
      if (uVar9 != 0xffffffff) {
        uVar5 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        puVar12 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar12 = (ushort *)(param_1 + (ulong)uVar5);
        }
        uVar5 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8
        ;
        puVar1 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar1 = (ushort *)(param_1 + (ulong)uVar5);
        }
        uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
        lVar16 = *(long *)(param_2 + 0xa0);
        puVar14 = (ushort *)&UNK_10dfe4888;
        if ((uint)puVar10 < ((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8)) {
          puVar14 = puVar12 + ((ulong)puVar10 & 0xffffffff) * 2 + 1;
        }
        uVar6 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8;
        if (uVar6 < uVar5 && uVar9 < ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8)) {
          uVar8 = puVar14[1];
          uVar3 = *(undefined *)((long)puVar14 + 3);
          uVar6 = uVar6 + uVar5 * uVar9;
          puVar10 = puVar1 + (ulong)uVar6 + 1;
          FUN_109730900(puVar10,param_2 + 0xa8,puVar1);
          if ((int)puVar10 == 0) {
            return puVar10;
          }
          cVar4 = *(char *)((long)puVar1 + (ulong)uVar6 * 2 + 3);
          if (cVar4 != '\0' || (char)puVar1[(ulong)uVar6 + 1] != '\0') {
            uVar7 = CONCAT11((char)puVar1[(ulong)uVar6 + 1],cVar4);
            puVar10 = (ushort *)&UNK_10dfe4888;
            if (uVar7 != 0) {
              puVar10 = (ushort *)((long)puVar1 + (ulong)uVar7);
            }
            uVar9 = (uint)CONCAT11((char)uVar8,uVar3);
            puVar1 = (ushort *)&UNK_10dfe4888;
            if (uVar9 != 0) {
              puVar1 = (ushort *)((long)puVar12 + (ulong)uVar9);
            }
            FUN_109710ea8(lVar16,3,uVar17,*(int *)(lVar16 + 0x5c) + 1,1,0);
            FUN_10974cee0(puVar1,param_2,
                          *(undefined4 *)
                           (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14),
                          &fStack_64,&fStack_68);
            FUN_10974cee0(puVar10,param_2,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14),
                          &fStack_6c,&fStack_70);
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f683
                           );
            }
            lVar15 = *(long *)(lVar16 + 0x80) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14;
            *(ulong *)(lVar15 + 8) =
                 CONCAT44((int)(float)(int)((fStack_70 - fStack_68) + 0.5),
                          (int)(float)(int)((fStack_6c - fStack_64) + 0.5));
            *(undefined1 *)(lVar15 + 0x12) = 1;
            *(short *)(lVar15 + 0x10) = (short)uVar13 - (short)*(undefined4 *)(lVar16 + 0x5c);
            *(uint *)(lVar16 + 0xc0) = *(uint *)(lVar16 + 0xc0) | 8;
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f6ad
                           );
            }
            *(int *)(lVar16 + 0x5c) = *(int *)(lVar16 + 0x5c) + 1;
            return (ushort *)0x1;
          }
        }
        return (ushort *)0x0;
      }
      if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
        return (ushort *)0x0;
      }
      iVar2 = *(int *)(lVar16 + 0x5c);
    }
    FUN_109710ea8(lVar16,2,uVar17,iVar2 + 1,0,1);
  }
  return (ushort *)0x0;
}



/* Entry: 10974d3e4; end: 10974d463;  */

bool FUN_10974d3e4(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  
  lVar5 = param_1 + (ulong)param_2 * 0x14;
  if ((*(ushort *)(lVar5 + 0xc) >> 6 & 1) == 0) {
    return true;
  }
  bVar4 = *(byte *)(lVar5 + 0xe);
  bVar1 = bVar4 & 0xf;
  if ((bVar4 & 0x10) != 0) {
    bVar1 = 0;
  }
  bVar3 = true;
  if (((param_2 != 0) && (bVar1 != 0)) &&
     (param_1 = param_1 + (ulong)(param_2 - 1) * 0x14, (*(ushort *)(param_1 + 0xc) & 0x48) == 0x40))
  {
    bVar2 = *(byte *)(param_1 + 0xe);
    if ((bVar2 ^ bVar4) < 0x20) {
      bVar4 = 1;
      if ((bVar2 & 0x10) == 0) {
        bVar4 = (bVar2 & 0xf) + 1;
      }
      bVar3 = bVar1 != bVar4;
    }
  }
  return bVar3;
}



/* Entry: 10974d464; end: 10974d677;  */

void FUN_10974d464(ushort *param_1,long param_2,uint param_3,uint param_4,ushort *param_5,
                  uint param_6,ulong param_7)

{
  ushort *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar9 = *(long *)(param_2 + 0xa0);
  puVar7 = (ushort *)&UNK_10dfe4888;
  if (param_3 < ((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8)) {
    puVar7 = param_1 + (ulong)param_3 * 2 + 1;
  }
  uVar4 = (uint)(*puVar7 >> 8) | (*puVar7 & 0xff00ff) << 8;
  if (uVar4 < param_6 && param_4 < ((uint)(*param_5 >> 8) | (*param_5 & 0xff00ff) << 8)) {
    uVar6 = puVar7[1];
    uVar2 = *(undefined *)((long)puVar7 + 3);
    uVar4 = uVar4 + param_6 * param_4;
    puVar7 = param_5 + (ulong)uVar4 + 1;
    FUN_109730900(puVar7,param_2 + 0xa8,param_5);
    if ((int)puVar7 != 0) {
      cVar3 = *(char *)((long)param_5 + (ulong)uVar4 * 2 + 3);
      if (cVar3 != '\0' || (char)param_5[(ulong)uVar4 + 1] != '\0') {
        uVar5 = CONCAT11((char)param_5[(ulong)uVar4 + 1],cVar3);
        puVar7 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar7 = (ushort *)((long)param_5 + (ulong)uVar5);
        }
        uVar4 = (uint)CONCAT11((char)uVar6,uVar2);
        puVar1 = (ushort *)&UNK_10dfe4888;
        if (uVar4 != 0) {
          puVar1 = (ushort *)((long)param_1 + (ulong)uVar4);
        }
        FUN_109710ea8(lVar9,3,param_7,*(int *)(lVar9 + 0x5c) + 1,1,0);
        FUN_10974cee0(puVar1,param_2,
                      *(undefined4 *)
                       (*(long *)(lVar9 + 0x70) + (ulong)*(uint *)(lVar9 + 0x5c) * 0x14),&fStack_64,
                      &fStack_68);
        FUN_10974cee0(puVar7,param_2,
                      *(undefined4 *)(*(long *)(lVar9 + 0x70) + (param_7 & 0xffffffff) * 0x14),
                      &fStack_6c,&fStack_70);
        if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
          FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f683);
        }
        lVar8 = *(long *)(lVar9 + 0x80) + (ulong)*(uint *)(lVar9 + 0x5c) * 0x14;
        *(ulong *)(lVar8 + 8) =
             CONCAT44((int)(float)(int)((fStack_70 - fStack_68) + 0.5),
                      (int)(float)(int)((fStack_6c - fStack_64) + 0.5));
        *(undefined1 *)(lVar8 + 0x12) = 1;
        *(short *)(lVar8 + 0x10) = (short)param_7 - (short)*(undefined4 *)(lVar9 + 0x5c);
        *(uint *)(lVar9 + 0xc0) = *(uint *)(lVar9 + 0xc0) | 8;
        if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
          FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f6ad);
        }
        *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      }
    }
  }
  return;
}



/* Entry: 10974d678; end: 10974d687;  */

ushort * FUN_10974d678(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar16 = *(long *)(param_2 + 0xa0);
  uVar7 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar10 = (ushort *)&UNK_10dfe4888;
  if (uVar7 != 0) {
    puVar10 = (ushort *)(param_1 + (ulong)uVar7);
  }
  func_0x000109729bf8(puVar10,*(undefined4 *)
                               (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14));
  if ((uint)puVar10 != 0xffffffff) {
    *(undefined4 *)(param_2 + 0x18) = 8;
    uVar17 = (ulong)*(uint *)(lVar16 + 0x5c);
    if (*(uint *)(lVar16 + 0x5c) < *(uint *)(param_2 + 0x14c)) {
      *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
    }
    do {
      if ((uint)uVar17 <= *(uint *)(param_2 + 0x14c)) {
        uVar17 = (ulong)*(uint *)(param_2 + 0x148);
        iVar2 = *(int *)(lVar16 + 0x5c);
        *(int *)(param_2 + 0x14c) = iVar2;
        if (*(uint *)(param_2 + 0x148) != 0xffffffff) goto LAB_10974d774;
        if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
          return (ushort *)0x0;
        }
        uVar17 = 0;
        goto LAB_10974d8bc;
      }
      uVar7 = (uint)uVar17 - 1;
      uVar17 = (ulong)uVar7;
      lVar15 = param_2 + 8;
      func_0x000109732900(lVar15,*(long *)(lVar16 + 0x70) + uVar17 * 0x14);
    } while ((int)lVar15 != 0);
    *(uint *)(param_2 + 0x148) = uVar7;
    *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(lVar16 + 0x5c);
LAB_10974d774:
    uVar7 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puVar11 = (ushort *)&UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar11 = (ushort *)(param_1 + (ulong)uVar7);
    }
    func_0x000109729bf8(puVar11,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14));
    if ((uint)puVar11 != 0xffffffff) {
      uVar7 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar14 = (ushort *)&UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar14 = (ushort *)(param_1 + (ulong)uVar7);
      }
      puVar12 = (ushort *)&UNK_10dfe4888;
      if (((uint)puVar11 < ((uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8)) &&
         (uVar7 = (uint)(puVar14[((ulong)puVar11 & 0xffffffff) + 1] >> 8) |
                  (puVar14[((ulong)puVar11 & 0xffffffff) + 1] & 0xff00ff) << 8, uVar7 != 0)) {
        puVar12 = (ushort *)((long)puVar14 + (ulong)uVar7);
      }
      uVar7 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
      if (uVar7 != 0) {
        bVar4 = *(byte *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14 + 0xe);
        uVar13 = uVar7;
        if (0x1f < bVar4) {
          bVar5 = *(byte *)(*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14 + 0xe)
          ;
          uVar1 = bVar5 & 0xf;
          if ((bVar5 & 0x10) != 0) {
            uVar1 = 0;
          }
          if (uVar1 <= uVar7) {
            uVar13 = uVar1;
          }
          if (uVar1 == 0 || 0x1f < (bVar5 ^ bVar4)) {
            uVar13 = uVar7;
          }
        }
        uVar7 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        puVar11 = (ushort *)&UNK_10dfe4888;
        if (uVar7 != 0) {
          puVar11 = (ushort *)(param_1 + (ulong)uVar7);
        }
        uVar7 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
        lVar16 = *(long *)(param_2 + 0xa0);
        puVar14 = (ushort *)&UNK_10dfe4888;
        if ((uint)puVar10 < ((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8)) {
          puVar14 = puVar11 + ((ulong)puVar10 & 0xffffffff) * 2 + 1;
        }
        uVar1 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8;
        if (uVar1 < uVar7 && uVar13 - 1 < ((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8)) {
          uVar9 = puVar14[1];
          uVar3 = *(undefined *)((long)puVar14 + 3);
          uVar1 = uVar1 + uVar7 * (uVar13 - 1);
          puVar10 = puVar12 + (ulong)uVar1 + 1;
          FUN_109730900(puVar10,param_2 + 0xa8,puVar12);
          if ((int)puVar10 == 0) {
            return puVar10;
          }
          cVar6 = *(char *)((long)puVar12 + (ulong)uVar1 * 2 + 3);
          if (cVar6 != '\0' || (char)puVar12[(ulong)uVar1 + 1] != '\0') {
            uVar8 = CONCAT11((char)puVar12[(ulong)uVar1 + 1],cVar6);
            puVar10 = (ushort *)&UNK_10dfe4888;
            if (uVar8 != 0) {
              puVar10 = (ushort *)((long)puVar12 + (ulong)uVar8);
            }
            uVar7 = (uint)CONCAT11((char)uVar9,uVar3);
            puVar14 = (ushort *)&UNK_10dfe4888;
            if (uVar7 != 0) {
              puVar14 = (ushort *)((long)puVar11 + (ulong)uVar7);
            }
            FUN_109710ea8(lVar16,3,uVar17,*(int *)(lVar16 + 0x5c) + 1,1,0);
            FUN_10974cee0(puVar14,param_2,
                          *(undefined4 *)
                           (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14),
                          &fStack_64,&fStack_68);
            FUN_10974cee0(puVar10,param_2,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14),
                          &fStack_6c,&fStack_70);
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f683
                           );
            }
            lVar15 = *(long *)(lVar16 + 0x80) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14;
            *(ulong *)(lVar15 + 8) =
                 CONCAT44((int)(float)(int)((fStack_70 - fStack_68) + 0.5),
                          (int)(float)(int)((fStack_6c - fStack_64) + 0.5));
            *(undefined1 *)(lVar15 + 0x12) = 1;
            *(short *)(lVar15 + 0x10) = (short)uVar17 - (short)*(undefined4 *)(lVar16 + 0x5c);
            *(uint *)(lVar16 + 0xc0) = *(uint *)(lVar16 + 0xc0) | 8;
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f6ad
                           );
            }
            *(int *)(lVar16 + 0x5c) = *(int *)(lVar16 + 0x5c) + 1;
            return (ushort *)0x1;
          }
        }
        return (ushort *)0x0;
      }
    }
    if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) != 0) {
      iVar2 = *(int *)(lVar16 + 0x5c);
LAB_10974d8bc:
      FUN_109710ea8(lVar16,2,uVar17,iVar2 + 1,0,1);
    }
  }
  return (ushort *)0x0;
}



/* Entry: 10974d688; end: 10974d8d3;  */

ushort * FUN_10974d688(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar16 = *(long *)(param_2 + 0xa0);
  uVar7 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar10 = (ushort *)&UNK_10dfe4888;
  if (uVar7 != 0) {
    puVar10 = (ushort *)(param_1 + (ulong)uVar7);
  }
  func_0x000109729bf8(puVar10,*(undefined4 *)
                               (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14));
  if ((uint)puVar10 != 0xffffffff) {
    *(undefined4 *)(param_2 + 0x18) = 8;
    uVar17 = (ulong)*(uint *)(lVar16 + 0x5c);
    if (*(uint *)(lVar16 + 0x5c) < *(uint *)(param_2 + 0x14c)) {
      *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
    }
    do {
      if ((uint)uVar17 <= *(uint *)(param_2 + 0x14c)) {
        uVar17 = (ulong)*(uint *)(param_2 + 0x148);
        iVar2 = *(int *)(lVar16 + 0x5c);
        *(int *)(param_2 + 0x14c) = iVar2;
        if (*(uint *)(param_2 + 0x148) != 0xffffffff) goto LAB_10974d774;
        if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) {
          return (ushort *)0x0;
        }
        uVar17 = 0;
        goto LAB_10974d8bc;
      }
      uVar7 = (uint)uVar17 - 1;
      uVar17 = (ulong)uVar7;
      lVar15 = param_2 + 8;
      func_0x000109732900(lVar15,*(long *)(lVar16 + 0x70) + uVar17 * 0x14);
    } while ((int)lVar15 != 0);
    *(uint *)(param_2 + 0x148) = uVar7;
    *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(lVar16 + 0x5c);
LAB_10974d774:
    uVar7 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puVar11 = (ushort *)&UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar11 = (ushort *)(param_1 + (ulong)uVar7);
    }
    func_0x000109729bf8(puVar11,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14));
    if ((uint)puVar11 != 0xffffffff) {
      uVar7 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar14 = (ushort *)&UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar14 = (ushort *)(param_1 + (ulong)uVar7);
      }
      puVar12 = (ushort *)&UNK_10dfe4888;
      if (((uint)puVar11 < ((uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8)) &&
         (uVar7 = (uint)(puVar14[((ulong)puVar11 & 0xffffffff) + 1] >> 8) |
                  (puVar14[((ulong)puVar11 & 0xffffffff) + 1] & 0xff00ff) << 8, uVar7 != 0)) {
        puVar12 = (ushort *)((long)puVar14 + (ulong)uVar7);
      }
      uVar7 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
      if (uVar7 != 0) {
        bVar4 = *(byte *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14 + 0xe);
        uVar13 = uVar7;
        if (0x1f < bVar4) {
          bVar5 = *(byte *)(*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14 + 0xe)
          ;
          uVar1 = bVar5 & 0xf;
          if ((bVar5 & 0x10) != 0) {
            uVar1 = 0;
          }
          if (uVar1 <= uVar7) {
            uVar13 = uVar1;
          }
          if (uVar1 == 0 || 0x1f < (bVar5 ^ bVar4)) {
            uVar13 = uVar7;
          }
        }
        uVar7 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        puVar11 = (ushort *)&UNK_10dfe4888;
        if (uVar7 != 0) {
          puVar11 = (ushort *)(param_1 + (ulong)uVar7);
        }
        uVar7 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
        lVar16 = *(long *)(param_2 + 0xa0);
        puVar14 = (ushort *)&UNK_10dfe4888;
        if ((uint)puVar10 < ((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8)) {
          puVar14 = puVar11 + ((ulong)puVar10 & 0xffffffff) * 2 + 1;
        }
        uVar1 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8;
        if (uVar1 < uVar7 && uVar13 - 1 < ((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8)) {
          uVar9 = puVar14[1];
          uVar3 = *(undefined *)((long)puVar14 + 3);
          uVar1 = uVar1 + uVar7 * (uVar13 - 1);
          puVar10 = puVar12 + (ulong)uVar1 + 1;
          FUN_109730900(puVar10,param_2 + 0xa8,puVar12);
          if ((int)puVar10 == 0) {
            return puVar10;
          }
          cVar6 = *(char *)((long)puVar12 + (ulong)uVar1 * 2 + 3);
          if (cVar6 != '\0' || (char)puVar12[(ulong)uVar1 + 1] != '\0') {
            uVar8 = CONCAT11((char)puVar12[(ulong)uVar1 + 1],cVar6);
            puVar10 = (ushort *)&UNK_10dfe4888;
            if (uVar8 != 0) {
              puVar10 = (ushort *)((long)puVar12 + (ulong)uVar8);
            }
            uVar7 = (uint)CONCAT11((char)uVar9,uVar3);
            puVar14 = (ushort *)&UNK_10dfe4888;
            if (uVar7 != 0) {
              puVar14 = (ushort *)((long)puVar11 + (ulong)uVar7);
            }
            FUN_109710ea8(lVar16,3,uVar17,*(int *)(lVar16 + 0x5c) + 1,1,0);
            FUN_10974cee0(puVar14,param_2,
                          *(undefined4 *)
                           (*(long *)(lVar16 + 0x70) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14),
                          &fStack_64,&fStack_68);
            FUN_10974cee0(puVar10,param_2,*(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar17 * 0x14),
                          &fStack_6c,&fStack_70);
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f683
                           );
            }
            lVar15 = *(long *)(lVar16 + 0x80) + (ulong)*(uint *)(lVar16 + 0x5c) * 0x14;
            *(ulong *)(lVar15 + 8) =
                 CONCAT44((int)(float)(int)((fStack_70 - fStack_68) + 0.5),
                          (int)(float)(int)((fStack_6c - fStack_64) + 0.5));
            *(undefined1 *)(lVar15 + 0x12) = 1;
            *(short *)(lVar15 + 0x10) = (short)uVar17 - (short)*(undefined4 *)(lVar16 + 0x5c);
            *(uint *)(lVar16 + 0xc0) = *(uint *)(lVar16 + 0xc0) | 8;
            if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
              FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57f6ad
                           );
            }
            *(int *)(lVar16 + 0x5c) = *(int *)(lVar16 + 0x5c) + 1;
            return (ushort *)0x1;
          }
        }
        return (ushort *)0x0;
      }
    }
    if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) != 0) {
      iVar2 = *(int *)(lVar16 + 0x5c);
LAB_10974d8bc:
      FUN_109710ea8(lVar16,2,uVar17,iVar2 + 1,0,1);
    }
  }
  return (ushort *)0x0;
}


