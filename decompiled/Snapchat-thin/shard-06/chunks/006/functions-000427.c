/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c138e8; end: 104c13907;  */

void FUN_104c138e8(void)

{
  long unaff_x21;
  long unaff_x25;
  undefined4 unaff_w27;
  
  func_0x000104c132d0();
  *(undefined4 *)(unaff_x25 + unaff_x21) = unaff_w27;
  return;
}



/* Entry: 104c13908; end: 104c139b3;  */

void FUN_104c13908(void)

{
  return;
}



/* Entry: 104c139b4; end: 104c139eb;  */

ulong FUN_104c139b4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x9;
  
  func_0x000104c13cdc();
  if ((bool)in_CY && !(bool)in_ZR) {
    FUN_104c139ec();
  }
  func_0x000104c13cc0();
  return extraout_x9 >> (extraout_x8 & 0x3f);
}



/* Entry: 104c139ec; end: 104c13a53;  */

void FUN_104c139ec(ulong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = 0;
  iVar1 = (int)param_1[1];
  pbVar3 = (byte *)param_1[2];
  do {
    if ((byte *)param_1[4] <= pbVar3) {
      *(undefined4 *)((long)param_1 + 0xc) = 1;
      if (uVar2 == 0) {
        return;
      }
      break;
    }
    param_1[2] = (ulong)(pbVar3 + 1);
    uVar2 = (uint)*pbVar3 | uVar2 << 8;
    iVar1 = iVar1 + 8;
    *(int *)(param_1 + 1) = iVar1;
    pbVar3 = pbVar3 + 1;
  } while (iVar1 < param_2);
  *param_1 = (ulong)uVar2 << ((ulong)(uint)-iVar1 & 0x3f) | *param_1;
  return;
}



/* Entry: 104c13a54; end: 104c13a8b;  */

long FUN_104c13a54(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x9;
  
  func_0x000104c13cdc();
  if ((bool)in_CY && !(bool)in_ZR) {
    FUN_104c139ec();
  }
  func_0x000104c13cc0();
  return extraout_x9 >> (extraout_x8 & 0x3f);
}



/* Entry: 104c13a8c; end: 104c13bb7;  */

ulong FUN_104c13a8c(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    lVar3 = param_1;
    FUN_104c139b4(param_1,8);
    uVar2 = (uint)lVar3;
    uVar4 = (ulong)(uVar2 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    if ((uVar2 >> 7 & 1) == 0) break;
    bVar1 = uVar5 < 0x31;
    uVar5 = uVar5 + 7;
  } while (bVar1);
  if (((uVar2 >> 7 & 1) != 0) || (uVar4 >> 0x20 != 0)) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return uVar4;
}



/* Entry: 104c13bb8; end: 104c13c93;  */

int FUN_104c13bb8(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  iVar2 = 1 << (ulong)(param_3 & 0x1f);
  param_2 = iVar2 + param_2;
  uVar7 = 2;
  uVar3 = 2 << (ulong)(param_3 & 0x1f);
  while( true ) {
    uVar1 = 3;
    if (uVar7 != 2) {
      uVar1 = uVar7;
    }
    if (uVar3 < (uint)((3 << (ulong)(uVar1 & 0x1f)) + iVar6)) break;
    uVar5 = param_1;
    func_0x000104c13954();
    if ((int)uVar5 == 0) {
      FUN_104c139b4(param_1,uVar1);
      iVar4 = (int)param_1;
LAB_104c13c48:
      if (uVar3 < (uint)(param_2 * 2)) {
        param_2 = uVar3 - param_2;
        FUN_104c13c94(param_2,iVar4 + iVar6);
        param_2 = uVar3 - param_2;
      }
      else {
        FUN_104c13c94(param_2,iVar4 + iVar6);
      }
      return param_2 - iVar2;
    }
    iVar6 = (1 << (ulong)(uVar1 & 0x1f)) + iVar6;
    uVar7 = uVar7 + 1;
  }
  func_0x000104c13af4(param_1,(uVar3 | 1) - iVar6);
  iVar4 = (int)param_1;
  goto LAB_104c13c48;
}



/* Entry: 104c13c94; end: 104c13cfb;  */

uint FUN_104c13c94(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = -(param_2 + 1 >> 1);
  if ((param_2 & 1) == 0) {
    uVar1 = param_2 >> 1;
  }
  if (param_2 <= (uint)(param_1 * 2)) {
    param_2 = param_1 + uVar1;
  }
  return param_2;
}



/* Entry: 104c13cfc; end: 104c14123;  */

ulong FUN_104c13cfc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   uint param_7,byte *param_8,long param_9,long param_10,uint param_11,
                   undefined4 param_12,uint *param_13,int param_14,int param_15,int param_16,
                   undefined4 param_17,undefined1 *param_18)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  byte *pbStack_88;
  byte *pbStack_80;
  
  uVar16 = (ulong)param_11;
  if (param_11 - 1 < 8) {
    uVar12 = *param_13 * 3 + (uint)(byte)(&UNK_10dd6b5c2)[param_11 - 1];
    *param_13 = uVar12;
    if ((int)uVar12 < 0x5b) {
      uVar11 = 6;
      if (uVar12 == 0x5a || param_4 == 0) {
        uVar11 = 1;
      }
      uVar16 = (ulong)uVar11;
    }
    else if (uVar12 < 0xb4) {
      uVar16 = 7;
    }
    else {
      uVar11 = 8;
      if (uVar12 == 0xb4 || param_2 == 0) {
        uVar11 = 2;
      }
      uVar16 = (ulong)uVar11;
    }
  }
  else if (param_11 == 0 || param_11 == 0xc) {
    uVar16 = (ulong)(byte)(&UNK_10dd6b5ca)[(long)param_4 + (long)param_2 * 2 + (ulong)param_11 * 4];
  }
  bVar4 = (&UNK_10dd6b5fe)[uVar16];
  pbVar13 = param_8;
  if ((param_4 != 0) &&
     (((bVar4 & 6) != 0 || ((pbVar13 = pbStack_80, param_2 == 0 && ((bVar4 & 1) != 0)))))) {
    pbVar1 = (byte *)(param_10 + (param_1 << 2));
    pbStack_88 = param_8 + -param_9;
    pbVar13 = param_8 + -param_9;
    if (param_10 != 0) {
      pbStack_88 = pbVar1;
      pbVar13 = pbVar1;
    }
  }
  pbStack_80 = pbVar13;
  if ((bVar4 & 1) != 0) {
    uVar12 = param_15 * 4;
    puVar2 = param_18 + param_15 * -4;
    if (param_2 == 0) {
      if (param_4 == 0) {
        bVar10 = 0x81;
      }
      else {
        bVar10 = *pbStack_88;
      }
      _memset(puVar2,bVar10,(long)(int)uVar12);
    }
    else {
      uVar5 = (param_6 - param_3) * 4;
      uVar11 = uVar12;
      if ((param_6 - param_3) * 4 <= (int)uVar12) {
        uVar11 = uVar5;
      }
      pbVar13 = param_8 + -1;
      uVar15 = uVar12;
      for (uVar14 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
          uVar14 = uVar14 - 1) {
        uVar15 = uVar15 - 1;
        puVar2[(int)uVar15] = *pbVar13;
        pbVar13 = pbVar13 + param_9;
      }
      if ((int)uVar5 < (int)uVar12) {
        _memset(puVar2,puVar2[uVar12 - uVar11]);
      }
    }
    if ((bVar4 >> 4 & 1) != 0) {
      if (((param_2 == 0) || ((param_7 >> 3 & 1) == 0)) ||
         (iVar6 = param_6 - (param_15 + param_3), iVar6 == 0 || param_6 < param_15 + param_3)) {
        uVar14 = (ulong)(int)uVar12;
        uVar3 = *puVar2;
      }
      else {
        uVar11 = uVar12;
        if (iVar6 * 4 <= (int)uVar12) {
          uVar11 = iVar6 * 4;
        }
        pbVar13 = param_8 + param_9 * (int)uVar12 + -1;
        pbVar1 = param_18 + ~(long)(int)uVar12;
        for (lVar17 = -(ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); lVar17 != 0;
            lVar17 = lVar17 + 1) {
          *pbVar1 = *pbVar13;
          pbVar13 = pbVar13 + param_9;
          pbVar1 = pbVar1 + -1;
        }
        if ((int)uVar12 <= iVar6 * 4) goto LAB_104c13f80;
        uVar14 = (ulong)(uVar12 - uVar11);
        uVar3 = puVar2[-(long)(int)uVar11];
      }
      _memset((long)puVar2 - (long)(int)uVar12,uVar3,uVar14);
    }
  }
LAB_104c13f80:
  if ((bVar4 >> 1 & 1) == 0) goto LAB_104c14094;
  iVar6 = param_14 * 4;
  puVar2 = param_18 + 1;
  if (param_4 == 0) {
    if (param_2 == 0) {
      bVar10 = 0x7f;
    }
    else {
      bVar10 = param_8[-1];
    }
    uVar14 = (ulong)iVar6;
    puVar9 = puVar2;
LAB_104c13ff4:
    _memset(puVar9,bVar10,uVar14);
  }
  else {
    iVar7 = (param_5 - param_1) * 4;
    iVar8 = iVar6;
    if ((param_5 - param_1) * 4 <= iVar6) {
      iVar8 = iVar7;
    }
    _memcpy(puVar2,pbStack_88,(long)iVar8);
    if (iVar7 < iVar6) {
      uVar14 = (ulong)(uint)(iVar6 - iVar8);
      bVar10 = (puVar2 + iVar8)[-1];
      puVar9 = puVar2 + iVar8;
      goto LAB_104c13ff4;
    }
  }
  if ((bVar4 >> 3 & 1) != 0) {
    if (((param_4 == 0) || ((param_7 & 1) == 0)) ||
       (iVar8 = param_5 - (param_14 + param_1), iVar8 == 0 || param_5 < param_14 + param_1)) {
      _memset(puVar2 + iVar6,(puVar2 + iVar6)[-1],(long)iVar6);
    }
    else {
      iVar7 = iVar6;
      if (iVar8 * 4 <= iVar6) {
        iVar7 = iVar8 * 4;
      }
      lVar17 = (long)iVar7;
      _memcpy(puVar2 + iVar6,pbStack_88 + iVar6,lVar17);
      if (iVar8 * 4 < iVar6) {
        _memset(puVar2 + iVar6 + lVar17,puVar2[lVar17 + iVar6 + -1],iVar6 - iVar7);
      }
    }
  }
LAB_104c14094:
  if ((bVar4 >> 2 & 1) != 0) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        uVar12 = 0x80;
      }
      else {
        uVar12 = (uint)*pbStack_88;
      }
    }
    else {
      uVar12 = (uint)pbStack_80[-1];
    }
    *param_18 = (char)uVar12;
    if (((int)uVar16 == 7 && 5 < param_15 + param_14) && (param_16 != 0)) {
      *param_18 = (char)(((uint)(byte)param_18[1] + (uint)(byte)param_18[-1]) * 5 + uVar12 * 6 + 8
                        >> 4);
    }
  }
  return uVar16;
}



/* Entry: 104c14124; end: 104c141e7;  */

undefined4 FUN_104c14124(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    if ((int)param_1 < 9) {
      if (0x37 < param_2) {
        return 1;
      }
      return 0;
    }
    if (0x10 < param_1) {
      if (0x18 < param_1) {
        uVar2 = 1;
        if (3 < param_2) {
          uVar2 = 2;
        }
        uVar1 = 3;
        if (param_1 < 0x21 && param_2 < 0x20) {
          uVar1 = uVar2;
        }
        return uVar1;
      }
      if (0x1f < param_2) {
        return 3;
      }
      if (0xf < param_2) {
        return 2;
      }
      if (7 < param_2) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (8 < (int)param_1) {
      if (0x10 < param_1) {
        if (param_1 < 0x19 && param_2 < 4) {
          return 0;
        }
        return 3;
      }
      if (param_2 < 0x30) {
        if (param_2 < 0x14) {
          return 0;
        }
        return 1;
      }
      return 2;
    }
    if (0x3f < param_2) {
      return 2;
    }
  }
  if (0x27 < param_2) {
    return 1;
  }
  return 0;
}



/* Entry: 104c141e8; end: 104c1433b;  */

/* WARNING: Possible PIC construction at 0x000104c145a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c145b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c145c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c145bc) */
/* WARNING: Removing unreachable block (ram,0x000104c145ac) */
/* WARNING: Removing unreachable block (ram,0x000104c145c8) */
/* WARNING: Removing unreachable block (ram,0x000104c145cc) */
/* WARNING: Removing unreachable block (ram,0x000104c145f8) */
/* WARNING: Removing unreachable block (ram,0x000104c14670) */
/* WARNING: Removing unreachable block (ram,0x000104c14688) */
/* WARNING: Removing unreachable block (ram,0x000104c1468c) */
/* WARNING: Removing unreachable block (ram,0x000104c146d8) */
/* WARNING: Removing unreachable block (ram,0x000104c146dc) */
/* WARNING: Removing unreachable block (ram,0x000104c14690) */
/* WARNING: Removing unreachable block (ram,0x000104c146a0) */
/* WARNING: Removing unreachable block (ram,0x000104c146a8) */
/* WARNING: Removing unreachable block (ram,0x000104c14650) */
/* WARNING: Removing unreachable block (ram,0x000104c14654) */
/* WARNING: Removing unreachable block (ram,0x000104c146c8) */
/* WARNING: Removing unreachable block (ram,0x000104c1470c) */
/* WARNING: Removing unreachable block (ram,0x000104c1471c) */
/* WARNING: Removing unreachable block (ram,0x000104c1475c) */
/* WARNING: Removing unreachable block (ram,0x000104c14754) */
/* WARNING: Removing unreachable block (ram,0x000104c14760) */
/* WARNING: Removing unreachable block (ram,0x000104c1478c) */
/* WARNING: Removing unreachable block (ram,0x000104c1476c) */
/* WARNING: Removing unreachable block (ram,0x000104c145d8) */

undefined8 FUN_104c141e8(undefined8 param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint in_w5;
  uint uVar8;
  uint uVar9;
  int in_w7;
  undefined8 extraout_x8;
  int iVar10;
  undefined8 unaff_x19;
  int iVar11;
  undefined8 unaff_x20;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long unaff_x25;
  bool bVar15;
  undefined1 auStack_2c3 [65];
  undefined1 auStack_282 [65];
  undefined1 auStack_241 [81];
  undefined1 auStack_186 [302];
  undefined8 uStack_58;
  
  func_0x000104c14804();
  func_0x000104c147dc();
  uVar2 = *(ushort *)(&UNK_10dd75ca0 + (in_w5 & 0x1fe));
  uVar8 = (uint)uVar2;
  iVar10 = (int)unaff_x19;
  iVar11 = (int)unaff_x20;
  uStack_58 = extraout_x8;
  if (in_w5 < 0x400) {
LAB_104c1422c:
    uVar4 = iVar11 == iVar10;
    iVar14 = iVar11;
    if (iVar10 <= iVar11) {
      iVar14 = iVar10;
    }
    iVar14 = iVar14 + iVar11;
    ___memcpy_chk(auStack_186,unaff_x25 + 1,(long)iVar14,0x12e);
LAB_104c14298:
    iVar14 = iVar14 + -1;
    bVar15 = true;
    iVar10 = 1;
  }
  else {
    iVar14 = iVar10 + iVar11;
    if ((in_w5 & 0x1ff) < 0x33 || (int)(0x10U >> (ulong)(in_w5 >> 9 & 1)) < iVar14) {
      iVar5 = iVar14;
      FUN_104c14124(iVar14,0x5a - (in_w5 & 0x1ff));
      if (iVar5 == 0) goto LAB_104c1422c;
      uVar4 = iVar11 == iVar10;
      iVar5 = iVar11;
      if (iVar10 <= iVar11) {
        iVar5 = iVar10;
      }
      func_0x000104c14818(iVar5);
      func_0x000100d7ddf0();
      goto LAB_104c14298;
    }
    uVar4 = iVar11 == iVar10;
    iVar5 = iVar11;
    if (iVar10 <= iVar11) {
      iVar5 = iVar10;
    }
    func_0x000104c14818(iVar5);
    func_0x000100d7dd2c();
    bVar15 = false;
    iVar14 = iVar14 * 2 + -2;
    uVar8 = (uint)uVar2 << 1;
    iVar10 = 2;
  }
  func_0x000100d7dfdc(auStack_186 + (long)iVar14 + 1,auStack_186[iVar14],iVar10 * (iVar11 + 0xf));
  puVar7 = auStack_186;
  if (bVar15) {
    func_0x000100d7dff0();
  }
  else {
    func_0x000100d7e224();
  }
  func_0x000104c147b8(uStack_58);
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar9 = uVar8;
  func_0x000104c147dc();
  uVar12 = (ulong)(uVar9 >> 9 & 1);
  uVar1 = uVar9 & 0x1ff;
  iVar10 = (int)unaff_x19;
  iVar11 = (int)unaff_x20;
  if (uVar9 < 0x400) {
    bVar15 = false;
LAB_104c143c4:
    ___memcpy_chk(auStack_282 + 1,puVar7 + 1,(long)iVar11,0x81);
    if (bVar15) {
LAB_104c14560:
      auStack_2c3[0] = *puVar7;
      func_0x000104c147ac(auStack_2c3 + 1);
      func_0x000100d7dd94(auStack_241,unaff_x19,auStack_2c3);
      return param_1;
    }
    if (uVar8 < 0x400) goto LAB_104c14528;
    uVar13 = (ulong)(uint)(iVar10 + iVar11);
  }
  else {
    uVar9 = iVar10 + iVar11;
    uVar13 = (ulong)uVar9;
    uVar3 = 0x10 >> uVar12;
    bVar15 = 0x8c < uVar1 && (int)uVar9 <= (int)uVar3;
    if (uVar1 - 0x5a < 0x28 && (int)uVar9 <= (int)uVar3) {
      func_0x000100d7dd94(auStack_282,unaff_x20,puVar7);
    }
    else {
      uVar6 = uVar13;
      FUN_104c14124(uVar13,uVar1 - 0x5a,uVar12);
      if ((int)uVar6 == 0) goto LAB_104c143c4;
      iVar5 = iVar14;
      if (iVar11 <= iVar14) {
        iVar5 = iVar11;
      }
      func_0x000100d7ddf0(auStack_282 + 1,iVar5,puVar7,unaff_x20,uVar6);
      if (iVar11 - iVar14 == 0 || iVar11 < iVar14) {
        bVar15 = 0x8c < uVar1 && (int)uVar9 <= (int)uVar3;
      }
      else {
        _memcpy(auStack_282 + (iVar14 + 1),puVar7 + (iVar14 + 1),iVar11 - iVar14);
      }
      if (bVar15) goto LAB_104c14560;
    }
  }
  FUN_104c14124(uVar13,0xb4 - uVar1,uVar12);
  if ((int)uVar13 != 0) {
    auStack_2c3[0] = *puVar7;
    func_0x000104c147ac(auStack_2c3 + 1);
    iVar11 = in_w7;
    if (iVar10 <= in_w7) {
      iVar11 = iVar10;
    }
    func_0x000100d7ddf0(auStack_241 + 1,iVar11,auStack_2c3,unaff_x19,uVar13);
    if (iVar10 - in_w7 == 0 || iVar10 < in_w7) {
      return param_1;
    }
    _memcpy(auStack_241 + (in_w7 + 1),auStack_2c3 + (in_w7 + 1),iVar10 - in_w7);
    return param_1;
  }
LAB_104c14528:
  func_0x000104c147ac(auStack_241 + 1);
  return param_1;
}



/* Entry: 104c1433c; end: 104c1478f;  */

/* WARNING: Possible PIC construction at 0x000104c145a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c145b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c145c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c145bc) */
/* WARNING: Removing unreachable block (ram,0x000104c145ac) */
/* WARNING: Removing unreachable block (ram,0x000104c145c8) */
/* WARNING: Removing unreachable block (ram,0x000104c145cc) */
/* WARNING: Removing unreachable block (ram,0x000104c145f8) */
/* WARNING: Removing unreachable block (ram,0x000104c14670) */
/* WARNING: Removing unreachable block (ram,0x000104c14688) */
/* WARNING: Removing unreachable block (ram,0x000104c1468c) */
/* WARNING: Removing unreachable block (ram,0x000104c146d8) */
/* WARNING: Removing unreachable block (ram,0x000104c146dc) */
/* WARNING: Removing unreachable block (ram,0x000104c14690) */
/* WARNING: Removing unreachable block (ram,0x000104c146a0) */
/* WARNING: Removing unreachable block (ram,0x000104c146a8) */
/* WARNING: Removing unreachable block (ram,0x000104c14650) */
/* WARNING: Removing unreachable block (ram,0x000104c14654) */
/* WARNING: Removing unreachable block (ram,0x000104c146c8) */
/* WARNING: Removing unreachable block (ram,0x000104c1470c) */
/* WARNING: Removing unreachable block (ram,0x000104c1471c) */
/* WARNING: Removing unreachable block (ram,0x000104c1475c) */
/* WARNING: Removing unreachable block (ram,0x000104c14754) */
/* WARNING: Removing unreachable block (ram,0x000104c14760) */
/* WARNING: Removing unreachable block (ram,0x000104c1478c) */
/* WARNING: Removing unreachable block (ram,0x000104c1476c) */
/* WARNING: Removing unreachable block (ram,0x000104c145d8) */

undefined8
FUN_104c1433c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 auStack_133 [65];
  undefined1 auStack_f2 [65];
  undefined1 auStack_b1 [81];
  
  uVar5 = param_6;
  func_0x000104c147dc();
  uVar8 = (ulong)(uVar5 >> 9 & 1);
  uVar1 = uVar5 & 0x1ff;
  iVar6 = (int)param_5;
  iVar7 = (int)param_4;
  if (uVar5 < 0x400) {
    bVar10 = false;
LAB_104c143c4:
    ___memcpy_chk(auStack_f2 + 1,param_3 + 1,(long)iVar7,0x81);
    if (bVar10) {
LAB_104c14560:
      auStack_133[0] = *param_3;
      func_0x000104c147ac(auStack_133 + 1);
      func_0x000100d7dd94(auStack_b1,param_5,auStack_133);
      return param_1;
    }
    if (param_6 < 0x400) goto LAB_104c14528;
    uVar9 = (ulong)(uint)(iVar6 + iVar7);
  }
  else {
    uVar5 = iVar6 + iVar7;
    uVar9 = (ulong)uVar5;
    uVar3 = 0x10 >> uVar8;
    bVar10 = 0x8c < uVar1 && (int)uVar5 <= (int)uVar3;
    if (uVar1 - 0x5a < 0x28 && (int)uVar5 <= (int)uVar3) {
      func_0x000100d7dd94(auStack_f2,param_4,param_3);
    }
    else {
      uVar4 = uVar9;
      FUN_104c14124(uVar9,uVar1 - 0x5a,uVar8);
      if ((int)uVar4 == 0) goto LAB_104c143c4;
      iVar2 = param_7;
      if (iVar7 <= param_7) {
        iVar2 = iVar7;
      }
      func_0x000100d7ddf0(auStack_f2 + 1,iVar2,param_3,param_4,uVar4);
      if (iVar7 - param_7 == 0 || iVar7 < param_7) {
        bVar10 = 0x8c < uVar1 && (int)uVar5 <= (int)uVar3;
      }
      else {
        _memcpy(auStack_f2 + (param_7 + 1),param_3 + (param_7 + 1),iVar7 - param_7);
      }
      if (bVar10) goto LAB_104c14560;
    }
  }
  FUN_104c14124(uVar9,0xb4 - uVar1,uVar8);
  if ((int)uVar9 != 0) {
    auStack_133[0] = *param_3;
    func_0x000104c147ac(auStack_133 + 1);
    iVar7 = param_8;
    if (iVar6 <= param_8) {
      iVar7 = iVar6;
    }
    func_0x000100d7ddf0(auStack_b1 + 1,iVar7,auStack_133,param_5,uVar9);
    if (iVar6 - param_8 == 0 || iVar6 < param_8) {
      return param_1;
    }
    _memcpy(auStack_b1 + (param_8 + 1),auStack_133 + (param_8 + 1),iVar6 - param_8);
    return param_1;
  }
LAB_104c14528:
  func_0x000104c147ac(auStack_b1 + 1);
  return param_1;
}



/* Entry: 104c14790; end: 104c1495b;  */

undefined1  [16] FUN_104c14790(void)

{
  undefined1 in_stack_00000010 [16];
  
  return in_stack_00000010;
}



/* Entry: 104c1495c; end: 104c166f7;  */

void FUN_104c1495c(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
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
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  long lVar67;
  int iVar68;
  long lVar69;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  int extraout_w8_14;
  int extraout_w8_15;
  int extraout_w8_16;
  int extraout_w8_17;
  int extraout_w8_18;
  int extraout_w8_19;
  int extraout_w8_20;
  int extraout_w8_21;
  int extraout_w8_22;
  int extraout_w8_23;
  int extraout_w8_24;
  int extraout_w8_25;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  int extraout_w9_09;
  int extraout_w9_10;
  int extraout_w9_11;
  int extraout_w9_12;
  int extraout_w9_13;
  int extraout_w9_14;
  int extraout_w9_15;
  int extraout_w9_16;
  int extraout_w9_17;
  int extraout_w9_18;
  int extraout_w9_19;
  int extraout_w9_20;
  int extraout_w9_21;
  int extraout_w9_22;
  int extraout_w9_23;
  int extraout_w9_24;
  int extraout_w9_25;
  int iVar70;
  int iVar71;
  
  FUN_104c17c14(param_1,param_2 << 1,param_3,param_4,1);
  iVar14 = param_1[param_2 * 0x1f] * -0xb08 + 0x800 >> 0xc;
  iVar1 = param_1[param_2] * 0x65 + 0x800 >> 0xc;
  iVar2 = iVar14 + iVar1;
  iVar71 = (int)param_4;
  iVar13 = iVar2;
  if (iVar71 <= iVar2) {
    iVar13 = iVar71;
  }
  iVar70 = (int)param_3;
  iVar1 = iVar1 - iVar14;
  iVar14 = iVar70;
  if (iVar70 <= iVar2) {
    iVar14 = iVar13;
  }
  iVar2 = iVar1;
  if (iVar71 <= iVar1) {
    iVar2 = iVar71;
  }
  iVar13 = iVar70;
  if (iVar70 <= iVar1) {
    iVar13 = iVar2;
  }
  iVar2 = param_1[param_2 * 0xf] * -0x5c2 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x11] * 0x67c + 0x800 >> 0xc;
  iVar48 = iVar2 - iVar1;
  iVar3 = iVar48;
  if (iVar71 <= iVar48) {
    iVar3 = iVar71;
  }
  iVar1 = iVar1 + iVar2;
  iVar2 = iVar70;
  if (iVar70 <= iVar48) {
    iVar2 = iVar3;
  }
  iVar3 = iVar1;
  if (iVar71 <= iVar1) {
    iVar3 = iVar71;
  }
  iVar48 = iVar70;
  if (iVar70 <= iVar1) {
    iVar48 = iVar3;
  }
  iVar15 = param_1[param_2 * 0x17] * -0x88f + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 9] * 0x381 + 0x800 >> 0xc;
  iVar3 = iVar15 + iVar1;
  iVar11 = iVar3;
  if (iVar71 <= iVar3) {
    iVar11 = iVar71;
  }
  iVar1 = iVar1 - iVar15;
  iVar15 = iVar70;
  if (iVar70 <= iVar3) {
    iVar15 = iVar11;
  }
  iVar3 = iVar1;
  if (iVar71 <= iVar1) {
    iVar3 = iVar71;
  }
  iVar11 = iVar70;
  if (iVar70 <= iVar1) {
    iVar11 = iVar3;
  }
  iVar3 = param_1[param_2 * 7] * -700 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x19] * 0x937 + 0x800 >> 0xc;
  iVar49 = iVar3 - iVar1;
  iVar4 = iVar49;
  if (iVar71 <= iVar49) {
    iVar4 = iVar71;
  }
  iVar1 = iVar1 + iVar3;
  iVar3 = iVar70;
  if (iVar70 <= iVar49) {
    iVar3 = iVar4;
  }
  iVar4 = iVar1;
  if (iVar71 <= iVar1) {
    iVar4 = iVar71;
  }
  iVar49 = iVar70;
  if (iVar70 <= iVar1) {
    iVar49 = iVar4;
  }
  iVar16 = param_1[param_2 * 0x1b] * -0x9d8 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 5] * 0x1f5 + 0x800 >> 0xc;
  iVar4 = iVar16 + iVar1;
  iVar12 = iVar4;
  if (iVar71 <= iVar4) {
    iVar12 = iVar71;
  }
  iVar1 = iVar1 - iVar16;
  iVar16 = iVar70;
  if (iVar70 <= iVar4) {
    iVar16 = iVar12;
  }
  iVar4 = iVar1;
  if (iVar71 <= iVar1) {
    iVar4 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar1) {
    iVar12 = iVar4;
  }
  iVar4 = param_1[param_2 * 0xb] * -0x444 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x15] * 0x7e3 + 0x800 >> 0xc;
  iVar50 = iVar4 - iVar1;
  iVar5 = iVar50;
  if (iVar71 <= iVar50) {
    iVar5 = iVar71;
  }
  iVar1 = iVar1 + iVar4;
  iVar4 = iVar70;
  if (iVar70 <= iVar50) {
    iVar4 = iVar5;
  }
  iVar5 = iVar1;
  if (iVar71 <= iVar1) {
    iVar5 = iVar71;
  }
  iVar50 = iVar70;
  if (iVar70 <= iVar1) {
    iVar50 = iVar5;
  }
  iVar17 = param_1[param_2 * 0x13] * -0x732 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0xd] * 0x505 + 0x800 >> 0xc;
  iVar5 = iVar17 + iVar1;
  iVar10 = iVar5;
  if (iVar71 <= iVar5) {
    iVar10 = iVar71;
  }
  iVar1 = iVar1 - iVar17;
  iVar17 = iVar70;
  if (iVar70 <= iVar5) {
    iVar17 = iVar10;
  }
  iVar5 = iVar1;
  if (iVar71 <= iVar1) {
    iVar5 = iVar71;
  }
  iVar10 = iVar70;
  if (iVar70 <= iVar1) {
    iVar10 = iVar5;
  }
  iVar5 = param_1[param_2 * 3] * -0x12d + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x1d] * 0xa73 + 0x800 >> 0xc;
  iVar51 = iVar5 - iVar1;
  iVar6 = iVar51;
  if (iVar71 <= iVar51) {
    iVar6 = iVar71;
  }
  iVar1 = iVar1 + iVar5;
  iVar5 = iVar70;
  if (iVar70 <= iVar51) {
    iVar5 = iVar6;
  }
  iVar6 = iVar1;
  if (iVar71 <= iVar1) {
    iVar6 = iVar71;
  }
  iVar51 = iVar70;
  if (iVar70 <= iVar1) {
    iVar51 = iVar6;
  }
  iVar18 = param_1[param_2 * 0x1d] * 0xc1e + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 3] * 0xff5 + 0x800 >> 0xc;
  iVar6 = iVar18 + iVar1;
  iVar9 = iVar6;
  if (iVar71 <= iVar6) {
    iVar9 = iVar71;
  }
  iVar1 = iVar1 - iVar18;
  iVar18 = iVar70;
  if (iVar70 <= iVar6) {
    iVar18 = iVar9;
  }
  iVar6 = iVar1;
  if (iVar71 <= iVar1) {
    iVar6 = iVar71;
  }
  iVar9 = iVar70;
  if (iVar70 <= iVar1) {
    iVar9 = iVar6;
  }
  iVar6 = param_1[param_2 * 0xd] * 0xf31 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x13] * 0xe4b + 0x800 >> 0xc;
  iVar52 = iVar6 - iVar1;
  iVar7 = iVar52;
  if (iVar71 <= iVar52) {
    iVar7 = iVar71;
  }
  iVar1 = iVar1 + iVar6;
  iVar6 = iVar70;
  if (iVar70 <= iVar52) {
    iVar6 = iVar7;
  }
  iVar7 = iVar1;
  if (iVar71 <= iVar1) {
    iVar7 = iVar71;
  }
  iVar52 = iVar70;
  if (iVar70 <= iVar1) {
    iVar52 = iVar7;
  }
  iVar19 = param_1[param_2 * 0x15] * 0xdec + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0xb] * 0xf6c + 0x800 >> 0xc;
  iVar7 = iVar19 + iVar1;
  iVar61 = iVar7;
  if (iVar71 <= iVar7) {
    iVar61 = iVar71;
  }
  iVar1 = iVar1 - iVar19;
  iVar19 = iVar70;
  if (iVar70 <= iVar7) {
    iVar19 = iVar61;
  }
  iVar7 = iVar1;
  if (iVar71 <= iVar1) {
    iVar7 = iVar71;
  }
  iVar61 = iVar70;
  if (iVar70 <= iVar1) {
    iVar61 = iVar7;
  }
  iVar7 = param_1[param_2 * 5] * 0xfe1 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x1b] * 0xc9d + 0x800 >> 0xc;
  iVar53 = iVar7 - iVar1;
  iVar8 = iVar53;
  if (iVar71 <= iVar53) {
    iVar8 = iVar71;
  }
  iVar1 = iVar1 + iVar7;
  iVar7 = iVar70;
  if (iVar70 <= iVar53) {
    iVar7 = iVar8;
  }
  iVar8 = iVar1;
  if (iVar71 <= iVar1) {
    iVar8 = iVar71;
  }
  iVar53 = iVar70;
  if (iVar70 <= iVar1) {
    iVar53 = iVar8;
  }
  iVar20 = param_1[param_2 * 0x19] * 0xd15 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 7] * 0xfc4 + 0x800 >> 0xc;
  iVar8 = iVar20 + iVar1;
  iVar66 = iVar8;
  if (iVar71 <= iVar8) {
    iVar66 = iVar71;
  }
  iVar1 = iVar1 - iVar20;
  iVar20 = iVar70;
  if (iVar70 <= iVar8) {
    iVar20 = iVar66;
  }
  iVar8 = iVar1;
  if (iVar71 <= iVar1) {
    iVar8 = iVar71;
  }
  iVar66 = iVar70;
  if (iVar70 <= iVar1) {
    iVar66 = iVar8;
  }
  iVar8 = param_1[param_2 * 9] * 0xf9c + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x17] * 0xd85 + 0x800 >> 0xc;
  iVar54 = iVar8 - iVar1;
  iVar65 = iVar54;
  if (iVar71 <= iVar54) {
    iVar65 = iVar71;
  }
  iVar21 = iVar70;
  if (iVar70 <= iVar54) {
    iVar21 = iVar65;
  }
  iVar1 = iVar1 + iVar8;
  iVar8 = iVar1;
  if (iVar71 <= iVar1) {
    iVar8 = iVar71;
  }
  iVar65 = iVar70;
  if (iVar70 <= iVar1) {
    iVar65 = iVar8;
  }
  iVar54 = param_1[param_2 * 0x11] * 0xea1 + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0xf] * 0xeee + 0x800 >> 0xc;
  iVar8 = iVar54 + iVar1;
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar1 = iVar1 - iVar54;
  iVar54 = iVar70;
  if (iVar70 <= iVar8) {
    iVar54 = iVar64;
  }
  iVar8 = iVar1;
  if (iVar71 <= iVar1) {
    iVar8 = iVar71;
  }
  iVar64 = iVar70;
  if (iVar70 <= iVar1) {
    iVar64 = iVar8;
  }
  iVar8 = param_1[param_2] * 0xfff + 0x800 >> 0xc;
  iVar1 = param_1[param_2 * 0x1f] * 0xb97 + 0x800 >> 0xc;
  iVar55 = iVar8 - iVar1;
  iVar62 = iVar55;
  if (iVar71 <= iVar55) {
    iVar62 = iVar71;
  }
  iVar1 = iVar1 + iVar8;
  iVar8 = iVar70;
  if (iVar70 <= iVar55) {
    iVar8 = iVar62;
  }
  iVar62 = iVar1;
  if (iVar71 <= iVar1) {
    iVar62 = iVar71;
  }
  iVar55 = iVar6 + (iVar10 * -0x4a5 + iVar6 * -0xb0 + 0x800 >> 0xc);
  iVar56 = (iVar5 * 0xb0 + iVar9 * -0x4a5 + 0x800 >> 0xc) - iVar5;
  iVar9 = iVar9 + (iVar5 * -0x4a5 + iVar9 * -0xb0 + 0x800 >> 0xc);
  iVar10 = iVar10 + (iVar10 * -0xb0 + iVar6 * 0x4a5 + 0x800 >> 0xc);
  iVar5 = (iVar4 * -0x78b + iVar61 * 0x1e4 + 0x800 >> 0xc) - iVar61;
  iVar4 = (iVar4 * 0x1e4 + iVar61 * 0x78b + 0x800 >> 0xc) - iVar4;
  iVar6 = (iVar12 * 0x1e4 + iVar7 * 0x78b + 0x800 >> 0xc) - iVar12;
  iVar7 = iVar7 + (iVar12 * 0x78b + iVar7 * -0x1e4 + 0x800 >> 0xc);
  iVar12 = iVar70;
  if (iVar70 <= iVar1) {
    iVar12 = iVar62;
  }
  iVar1 = iVar14 + iVar48;
  iVar61 = iVar1;
  if (iVar71 <= iVar1) {
    iVar61 = iVar71;
  }
  iVar57 = (iVar13 * 0x14 + iVar8 * 0x191 + 0x800 >> 0xc) - iVar13;
  iVar58 = (iVar2 * -0x191 + iVar64 * 0x14 + 0x800 >> 0xc) - iVar64;
  iVar62 = iVar70;
  if (iVar70 <= iVar1) {
    iVar62 = iVar61;
  }
  iVar1 = iVar57 + iVar58;
  iVar61 = iVar1;
  if (iVar71 <= iVar1) {
    iVar61 = iVar71;
  }
  iVar57 = iVar57 - iVar58;
  iVar58 = iVar70;
  if (iVar70 <= iVar1) {
    iVar58 = iVar61;
  }
  iVar1 = iVar57;
  if (iVar71 <= iVar57) {
    iVar1 = iVar71;
  }
  iVar14 = iVar14 - iVar48;
  iVar48 = iVar70;
  if (iVar70 <= iVar57) {
    iVar48 = iVar1;
  }
  iVar1 = iVar14;
  if (iVar71 <= iVar14) {
    iVar1 = iVar71;
  }
  iVar61 = iVar70;
  if (iVar70 <= iVar14) {
    iVar61 = iVar1;
  }
  iVar14 = iVar49 - iVar15;
  iVar1 = iVar14;
  if (iVar71 <= iVar14) {
    iVar1 = iVar71;
  }
  iVar57 = iVar3 * -0x62f + iVar66 * -0x513 + 0x400 >> 0xb;
  iVar60 = iVar70;
  if (iVar70 <= iVar14) {
    iVar60 = iVar1;
  }
  iVar1 = iVar11 * -0x513 + iVar21 * 0x62f + 0x400 >> 0xb;
  iVar59 = iVar57 - iVar1;
  iVar14 = iVar59;
  if (iVar71 <= iVar59) {
    iVar14 = iVar71;
  }
  iVar57 = iVar57 + iVar1;
  iVar1 = iVar70;
  if (iVar70 <= iVar59) {
    iVar1 = iVar14;
  }
  iVar14 = iVar57;
  if (iVar71 <= iVar57) {
    iVar14 = iVar71;
  }
  iVar49 = iVar49 + iVar15;
  iVar15 = iVar70;
  if (iVar70 <= iVar57) {
    iVar15 = iVar14;
  }
  iVar14 = iVar49;
  if (iVar71 <= iVar49) {
    iVar14 = iVar71;
  }
  iVar57 = iVar70;
  if (iVar70 <= iVar49) {
    iVar57 = iVar14;
  }
  iVar14 = iVar16 + iVar50;
  iVar49 = iVar14;
  if (iVar71 <= iVar14) {
    iVar49 = iVar71;
  }
  iVar59 = iVar70;
  if (iVar70 <= iVar14) {
    iVar59 = iVar49;
  }
  iVar14 = iVar6 + iVar5;
  iVar49 = iVar14;
  if (iVar71 <= iVar14) {
    iVar49 = iVar71;
  }
  iVar6 = iVar6 - iVar5;
  iVar5 = iVar70;
  if (iVar70 <= iVar14) {
    iVar5 = iVar49;
  }
  iVar14 = iVar6;
  if (iVar71 <= iVar6) {
    iVar14 = iVar71;
  }
  iVar16 = iVar16 - iVar50;
  iVar49 = iVar70;
  if (iVar70 <= iVar6) {
    iVar49 = iVar14;
  }
  iVar14 = iVar16;
  if (iVar71 <= iVar16) {
    iVar14 = iVar71;
  }
  iVar50 = iVar70;
  if (iVar70 <= iVar16) {
    iVar50 = iVar14;
  }
  iVar16 = iVar51 - iVar17;
  iVar14 = iVar16;
  if (iVar71 <= iVar16) {
    iVar14 = iVar71;
  }
  iVar6 = iVar70;
  if (iVar70 <= iVar16) {
    iVar6 = iVar14;
  }
  iVar16 = iVar56 - iVar55;
  iVar14 = iVar16;
  if (iVar71 <= iVar16) {
    iVar14 = iVar71;
  }
  iVar56 = iVar56 + iVar55;
  iVar55 = iVar70;
  if (iVar70 <= iVar16) {
    iVar55 = iVar14;
  }
  iVar14 = iVar56;
  if (iVar71 <= iVar56) {
    iVar14 = iVar71;
  }
  iVar51 = iVar51 + iVar17;
  iVar16 = iVar70;
  if (iVar70 <= iVar56) {
    iVar16 = iVar14;
  }
  iVar14 = iVar51;
  if (iVar71 <= iVar51) {
    iVar14 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar51) {
    iVar17 = iVar14;
  }
  iVar14 = iVar18 + iVar52;
  iVar51 = iVar14;
  if (iVar71 <= iVar14) {
    iVar51 = iVar71;
  }
  iVar56 = iVar70;
  if (iVar70 <= iVar14) {
    iVar56 = iVar51;
  }
  iVar14 = iVar9 + iVar10;
  iVar51 = iVar14;
  if (iVar71 <= iVar14) {
    iVar51 = iVar71;
  }
  iVar9 = iVar9 - iVar10;
  iVar10 = iVar70;
  if (iVar70 <= iVar14) {
    iVar10 = iVar51;
  }
  iVar14 = iVar9;
  if (iVar71 <= iVar9) {
    iVar14 = iVar71;
  }
  iVar18 = iVar18 - iVar52;
  iVar51 = iVar70;
  if (iVar70 <= iVar9) {
    iVar51 = iVar14;
  }
  iVar14 = iVar18;
  if (iVar71 <= iVar18) {
    iVar14 = iVar71;
  }
  iVar9 = iVar70;
  if (iVar70 <= iVar18) {
    iVar9 = iVar14;
  }
  iVar18 = iVar53 - iVar19;
  iVar14 = iVar18;
  if (iVar71 <= iVar18) {
    iVar14 = iVar71;
  }
  iVar52 = iVar70;
  if (iVar70 <= iVar18) {
    iVar52 = iVar14;
  }
  iVar18 = iVar7 - iVar4;
  iVar14 = iVar18;
  if (iVar71 <= iVar18) {
    iVar14 = iVar71;
  }
  iVar22 = iVar70;
  if (iVar70 <= iVar18) {
    iVar22 = iVar14;
  }
  iVar2 = (iVar2 * 0x14 + iVar64 * 0x191 + 0x800 >> 0xc) - iVar2;
  iVar8 = iVar8 + (iVar13 * 0x191 + iVar8 * -0x14 + 0x800 >> 0xc);
  iVar7 = iVar7 + iVar4;
  iVar14 = iVar7;
  if (iVar71 <= iVar7) {
    iVar14 = iVar71;
  }
  iVar53 = iVar53 + iVar19;
  iVar13 = iVar70;
  if (iVar70 <= iVar7) {
    iVar13 = iVar14;
  }
  iVar14 = iVar53;
  if (iVar71 <= iVar53) {
    iVar14 = iVar71;
  }
  iVar4 = iVar70;
  if (iVar70 <= iVar53) {
    iVar4 = iVar14;
  }
  iVar14 = iVar20 + iVar65;
  iVar18 = iVar14;
  if (iVar71 <= iVar14) {
    iVar18 = iVar71;
  }
  iVar3 = iVar3 * -0x513 + iVar66 * 0x62f + 0x400 >> 0xb;
  iVar7 = iVar70;
  if (iVar70 <= iVar14) {
    iVar7 = iVar18;
  }
  iVar14 = iVar11 * 0x62f + iVar21 * 0x513 + 0x400 >> 0xb;
  iVar11 = iVar3 + iVar14;
  iVar18 = iVar11;
  if (iVar71 <= iVar11) {
    iVar18 = iVar71;
  }
  iVar3 = iVar3 - iVar14;
  iVar14 = iVar70;
  if (iVar70 <= iVar11) {
    iVar14 = iVar18;
  }
  iVar11 = iVar3;
  if (iVar71 <= iVar3) {
    iVar11 = iVar71;
  }
  iVar20 = iVar20 - iVar65;
  iVar18 = iVar70;
  if (iVar70 <= iVar3) {
    iVar18 = iVar11;
  }
  iVar3 = iVar20;
  if (iVar71 <= iVar20) {
    iVar3 = iVar71;
  }
  iVar11 = iVar70;
  if (iVar70 <= iVar20) {
    iVar11 = iVar3;
  }
  iVar19 = iVar12 - iVar54;
  iVar3 = iVar19;
  if (iVar71 <= iVar19) {
    iVar3 = iVar71;
  }
  iVar53 = iVar70;
  if (iVar70 <= iVar19) {
    iVar53 = iVar3;
  }
  iVar19 = iVar8 - iVar2;
  iVar3 = iVar19;
  if (iVar71 <= iVar19) {
    iVar3 = iVar71;
  }
  iVar8 = iVar8 + iVar2;
  iVar2 = iVar70;
  if (iVar70 <= iVar19) {
    iVar2 = iVar3;
  }
  iVar3 = iVar8;
  if (iVar71 <= iVar8) {
    iVar3 = iVar71;
  }
  iVar12 = iVar12 + iVar54;
  iVar19 = iVar70;
  if (iVar70 <= iVar8) {
    iVar19 = iVar3;
  }
  iVar3 = iVar12;
  if (iVar71 <= iVar12) {
    iVar3 = iVar71;
  }
  iVar8 = (iVar1 * -799 + iVar18 * 0x4f + 0x800 >> 0xc) - iVar18;
  iVar1 = (iVar1 * 0x4f + iVar18 * 799 + 0x800 >> 0xc) - iVar1;
  iVar18 = (iVar60 * -799 + iVar11 * 0x4f + 0x800 >> 0xc) - iVar11;
  iVar60 = (iVar60 * 0x4f + iVar11 * 799 + 0x800 >> 0xc) - iVar60;
  iVar11 = (iVar61 * 0x4f + iVar53 * 799 + 0x800 >> 0xc) - iVar61;
  iVar53 = iVar53 + (iVar61 * 799 + iVar53 * -0x4f + 0x800 >> 0xc);
  iVar61 = (iVar48 * 0x4f + iVar2 * 799 + 0x800 >> 0xc) - iVar48;
  iVar2 = iVar2 + (iVar48 * 799 + iVar2 * -0x4f + 0x800 >> 0xc);
  iVar48 = iVar70;
  if (iVar70 <= iVar12) {
    iVar48 = iVar3;
  }
  iVar3 = iVar62 + iVar57;
  iVar12 = iVar3;
  if (iVar71 <= iVar3) {
    iVar12 = iVar71;
  }
  iVar20 = iVar70;
  if (iVar70 <= iVar3) {
    iVar20 = iVar12;
  }
  iVar3 = iVar58 + iVar15;
  iVar12 = iVar3;
  if (iVar71 <= iVar3) {
    iVar12 = iVar71;
  }
  iVar66 = iVar70;
  if (iVar70 <= iVar3) {
    iVar66 = iVar12;
  }
  iVar3 = iVar61 + iVar8;
  iVar12 = iVar3;
  if (iVar71 <= iVar3) {
    iVar12 = iVar71;
  }
  iVar65 = iVar70;
  if (iVar70 <= iVar3) {
    iVar65 = iVar12;
  }
  iVar3 = iVar11 + iVar18;
  iVar12 = iVar3;
  if (iVar71 <= iVar3) {
    iVar12 = iVar71;
  }
  iVar11 = iVar11 - iVar18;
  iVar18 = iVar70;
  if (iVar70 <= iVar3) {
    iVar18 = iVar12;
  }
  iVar3 = iVar11;
  if (iVar71 <= iVar11) {
    iVar3 = iVar71;
  }
  iVar61 = iVar61 - iVar8;
  iVar12 = iVar70;
  if (iVar70 <= iVar11) {
    iVar12 = iVar3;
  }
  iVar3 = iVar61;
  if (iVar71 <= iVar61) {
    iVar3 = iVar71;
  }
  iVar58 = iVar58 - iVar15;
  iVar15 = iVar70;
  if (iVar70 <= iVar61) {
    iVar15 = iVar3;
  }
  iVar3 = iVar58;
  if (iVar71 <= iVar58) {
    iVar3 = iVar71;
  }
  iVar62 = iVar62 - iVar57;
  iVar11 = iVar70;
  if (iVar70 <= iVar58) {
    iVar11 = iVar3;
  }
  iVar3 = iVar62;
  if (iVar71 <= iVar62) {
    iVar3 = iVar71;
  }
  iVar61 = iVar70;
  if (iVar70 <= iVar62) {
    iVar61 = iVar3;
  }
  iVar8 = iVar17 - iVar59;
  iVar3 = iVar8;
  if (iVar71 <= iVar8) {
    iVar3 = iVar71;
  }
  iVar54 = iVar70;
  if (iVar70 <= iVar8) {
    iVar54 = iVar3;
  }
  iVar8 = iVar16 - iVar5;
  iVar3 = iVar8;
  if (iVar71 <= iVar8) {
    iVar3 = iVar71;
  }
  iVar21 = iVar55 * -0x6a7 + iVar51 * -0x472 + 0x400 >> 0xb;
  iVar64 = iVar70;
  if (iVar70 <= iVar8) {
    iVar64 = iVar3;
  }
  iVar3 = iVar49 * -0x472 + iVar22 * 0x6a7 + 0x400 >> 0xb;
  iVar62 = iVar21 - iVar3;
  iVar8 = iVar62;
  if (iVar71 <= iVar62) {
    iVar8 = iVar71;
  }
  iVar58 = iVar6 * -0x6a7 + iVar9 * -0x472 + 0x400 >> 0xb;
  iVar57 = iVar70;
  if (iVar70 <= iVar62) {
    iVar57 = iVar8;
  }
  iVar8 = iVar50 * -0x472 + iVar52 * 0x6a7 + 0x400 >> 0xb;
  iVar63 = iVar58 - iVar8;
  iVar62 = iVar63;
  if (iVar71 <= iVar63) {
    iVar62 = iVar71;
  }
  iVar58 = iVar58 + iVar8;
  iVar8 = iVar70;
  if (iVar70 <= iVar63) {
    iVar8 = iVar62;
  }
  iVar62 = iVar58;
  if (iVar71 <= iVar58) {
    iVar62 = iVar71;
  }
  iVar21 = iVar21 + iVar3;
  iVar3 = iVar70;
  if (iVar70 <= iVar58) {
    iVar3 = iVar62;
  }
  iVar62 = iVar21;
  if (iVar71 <= iVar21) {
    iVar62 = iVar71;
  }
  iVar16 = iVar16 + iVar5;
  iVar5 = iVar70;
  if (iVar70 <= iVar21) {
    iVar5 = iVar62;
  }
  iVar21 = iVar16;
  if (iVar71 <= iVar16) {
    iVar21 = iVar71;
  }
  iVar17 = iVar17 + iVar59;
  iVar62 = iVar70;
  if (iVar70 <= iVar16) {
    iVar62 = iVar21;
  }
  iVar16 = iVar17;
  if (iVar71 <= iVar17) {
    iVar16 = iVar71;
  }
  iVar21 = iVar70;
  if (iVar70 <= iVar17) {
    iVar21 = iVar16;
  }
  iVar16 = iVar56 + iVar4;
  iVar17 = iVar16;
  if (iVar71 <= iVar16) {
    iVar17 = iVar71;
  }
  iVar58 = iVar70;
  if (iVar70 <= iVar16) {
    iVar58 = iVar17;
  }
  iVar16 = iVar10 + iVar13;
  iVar17 = iVar16;
  if (iVar71 <= iVar16) {
    iVar17 = iVar71;
  }
  iVar51 = iVar55 * -0x472 + iVar51 * 0x6a7 + 0x400 >> 0xb;
  iVar55 = iVar70;
  if (iVar70 <= iVar16) {
    iVar55 = iVar17;
  }
  iVar49 = iVar49 * 0x6a7 + iVar22 * 0x472 + 0x400 >> 0xb;
  iVar16 = iVar51 + iVar49;
  iVar17 = iVar16;
  if (iVar71 <= iVar16) {
    iVar17 = iVar71;
  }
  iVar6 = iVar6 * -0x472 + iVar9 * 0x6a7 + 0x400 >> 0xb;
  iVar9 = iVar70;
  if (iVar70 <= iVar16) {
    iVar9 = iVar17;
  }
  iVar16 = iVar50 * 0x6a7 + iVar52 * 0x472 + 0x400 >> 0xb;
  iVar50 = iVar6 + iVar16;
  iVar17 = iVar50;
  if (iVar71 <= iVar50) {
    iVar17 = iVar71;
  }
  iVar6 = iVar6 - iVar16;
  iVar16 = iVar70;
  if (iVar70 <= iVar50) {
    iVar16 = iVar17;
  }
  iVar50 = iVar6;
  if (iVar71 <= iVar6) {
    iVar50 = iVar71;
  }
  iVar51 = iVar51 - iVar49;
  iVar49 = iVar70;
  if (iVar70 <= iVar6) {
    iVar49 = iVar50;
  }
  iVar50 = iVar51;
  if (iVar71 <= iVar51) {
    iVar50 = iVar71;
  }
  iVar10 = iVar10 - iVar13;
  iVar13 = iVar70;
  if (iVar70 <= iVar51) {
    iVar13 = iVar50;
  }
  iVar50 = iVar10;
  if (iVar71 <= iVar10) {
    iVar50 = iVar71;
  }
  iVar56 = iVar56 - iVar4;
  iVar4 = iVar70;
  if (iVar70 <= iVar10) {
    iVar4 = iVar50;
  }
  iVar50 = iVar56;
  if (iVar71 <= iVar56) {
    iVar50 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar56) {
    iVar17 = iVar50;
  }
  iVar10 = iVar48 - iVar7;
  iVar50 = iVar10;
  if (iVar71 <= iVar10) {
    iVar50 = iVar71;
  }
  iVar6 = iVar70;
  if (iVar70 <= iVar10) {
    iVar6 = iVar50;
  }
  iVar10 = iVar19 - iVar14;
  iVar50 = iVar10;
  if (iVar71 <= iVar10) {
    iVar50 = iVar71;
  }
  iVar51 = iVar70;
  if (iVar70 <= iVar10) {
    iVar51 = iVar50;
  }
  iVar10 = iVar2 - iVar1;
  iVar50 = iVar10;
  if (iVar71 <= iVar10) {
    iVar50 = iVar71;
  }
  iVar52 = iVar70;
  if (iVar70 <= iVar10) {
    iVar52 = iVar50;
  }
  iVar10 = iVar53 - iVar60;
  iVar50 = iVar10;
  if (iVar71 <= iVar10) {
    iVar50 = iVar71;
  }
  iVar53 = iVar53 + iVar60;
  iVar56 = iVar70;
  if (iVar70 <= iVar10) {
    iVar56 = iVar50;
  }
  iVar50 = iVar53;
  if (iVar71 <= iVar53) {
    iVar50 = iVar71;
  }
  iVar2 = iVar2 + iVar1;
  iVar1 = iVar70;
  if (iVar70 <= iVar53) {
    iVar1 = iVar50;
  }
  iVar50 = iVar2;
  if (iVar71 <= iVar2) {
    iVar50 = iVar71;
  }
  iVar19 = iVar19 + iVar14;
  iVar14 = iVar70;
  if (iVar70 <= iVar2) {
    iVar14 = iVar50;
  }
  iVar2 = iVar19;
  if (iVar71 <= iVar19) {
    iVar2 = iVar71;
  }
  iVar48 = iVar48 + iVar7;
  iVar50 = iVar70;
  if (iVar70 <= iVar19) {
    iVar50 = iVar2;
  }
  iVar2 = iVar48;
  if (iVar71 <= iVar48) {
    iVar2 = iVar71;
  }
  iVar10 = (iVar8 * -0x61f + iVar49 * 0x138 + 0x800 >> 0xc) - iVar49;
  iVar8 = (iVar8 * 0x138 + iVar49 * 0x61f + 0x800 >> 0xc) - iVar8;
  iVar49 = (iVar57 * -0x61f + iVar13 * 0x138 + 0x800 >> 0xc) - iVar13;
  iVar57 = (iVar57 * 0x138 + iVar13 * 0x61f + 0x800 >> 0xc) - iVar57;
  iVar7 = (iVar64 * -0x61f + iVar4 * 0x138 + 0x800 >> 0xc) - iVar4;
  iVar64 = (iVar64 * 0x138 + iVar4 * 0x61f + 0x800 >> 0xc) - iVar64;
  iVar4 = (iVar54 * -0x61f + iVar17 * 0x138 + 0x800 >> 0xc) - iVar17;
  iVar54 = (iVar54 * 0x138 + iVar17 * 0x61f + 0x800 >> 0xc) - iVar54;
  iVar17 = (iVar61 * 0x138 + iVar6 * 0x61f + 0x800 >> 0xc) - iVar61;
  iVar6 = iVar6 + (iVar61 * 0x61f + iVar6 * -0x138 + 0x800 >> 0xc);
  iVar19 = (iVar11 * 0x138 + iVar51 * 0x61f + 0x800 >> 0xc) - iVar11;
  iVar51 = iVar51 + (iVar11 * 0x61f + iVar51 * -0x138 + 0x800 >> 0xc);
  iVar11 = (iVar15 * 0x138 + iVar52 * 0x61f + 0x800 >> 0xc) - iVar15;
  iVar52 = iVar52 + (iVar15 * 0x61f + iVar52 * -0x138 + 0x800 >> 0xc);
  iVar15 = (iVar12 * 0x138 + iVar56 * 0x61f + 0x800 >> 0xc) - iVar12;
  iVar56 = iVar56 + (iVar12 * 0x61f + iVar56 * -0x138 + 0x800 >> 0xc);
  iVar13 = iVar70;
  if (iVar70 <= iVar48) {
    iVar13 = iVar2;
  }
  iVar2 = iVar20 + iVar21;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar2) {
    iVar12 = iVar48;
  }
  iVar2 = iVar66 + iVar62;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar61 = iVar70;
  if (iVar70 <= iVar2) {
    iVar61 = iVar48;
  }
  iVar2 = iVar65 + iVar5;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar53 = iVar70;
  if (iVar70 <= iVar2) {
    iVar53 = iVar48;
  }
  iVar2 = iVar18 + iVar3;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar60 = iVar70;
  if (iVar70 <= iVar2) {
    iVar60 = iVar48;
  }
  iVar2 = iVar15 + iVar10;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar59 = iVar70;
  if (iVar70 <= iVar2) {
    iVar59 = iVar48;
  }
  iVar2 = iVar11 + iVar49;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar22 = iVar70;
  if (iVar70 <= iVar2) {
    iVar22 = iVar48;
  }
  iVar2 = iVar19 + iVar7;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar63 = iVar70;
  if (iVar70 <= iVar2) {
    iVar63 = iVar48;
  }
  iVar2 = iVar17 + iVar4;
  iVar48 = iVar2;
  if (iVar71 <= iVar2) {
    iVar48 = iVar71;
  }
  iVar17 = iVar17 - iVar4;
  iVar4 = iVar70;
  if (iVar70 <= iVar2) {
    iVar4 = iVar48;
  }
  iVar2 = iVar17;
  if (iVar71 <= iVar17) {
    iVar2 = iVar71;
  }
  iVar19 = iVar19 - iVar7;
  iVar48 = iVar70;
  if (iVar70 <= iVar17) {
    iVar48 = iVar2;
  }
  iVar2 = iVar19;
  if (iVar71 <= iVar19) {
    iVar2 = iVar71;
  }
  iVar11 = iVar11 - iVar49;
  iVar49 = iVar70;
  if (iVar70 <= iVar19) {
    iVar49 = iVar2;
  }
  iVar2 = iVar11;
  if (iVar71 <= iVar11) {
    iVar2 = iVar71;
  }
  iVar15 = iVar15 - iVar10;
  iVar17 = iVar70;
  if (iVar70 <= iVar11) {
    iVar17 = iVar2;
  }
  iVar2 = iVar15;
  if (iVar71 <= iVar15) {
    iVar2 = iVar71;
  }
  iVar18 = iVar18 - iVar3;
  iVar3 = iVar70;
  if (iVar70 <= iVar15) {
    iVar3 = iVar2;
  }
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar65 = iVar65 - iVar5;
  iVar15 = iVar70;
  if (iVar70 <= iVar18) {
    iVar15 = iVar2;
  }
  iVar2 = iVar65;
  if (iVar71 <= iVar65) {
    iVar2 = iVar71;
  }
  iVar66 = iVar66 - iVar62;
  iVar11 = iVar70;
  if (iVar70 <= iVar65) {
    iVar11 = iVar2;
  }
  iVar2 = iVar66;
  if (iVar71 <= iVar66) {
    iVar2 = iVar71;
  }
  iVar20 = iVar20 - iVar21;
  iVar5 = iVar70;
  if (iVar70 <= iVar66) {
    iVar5 = iVar2;
  }
  iVar2 = iVar20;
  if (iVar71 <= iVar20) {
    iVar2 = iVar71;
  }
  iVar10 = iVar70;
  if (iVar70 <= iVar20) {
    iVar10 = iVar2;
  }
  iVar18 = iVar13 - iVar58;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar7 = iVar70;
  if (iVar70 <= iVar18) {
    iVar7 = iVar2;
  }
  iVar18 = iVar50 - iVar55;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar19 = iVar70;
  if (iVar70 <= iVar18) {
    iVar19 = iVar2;
  }
  iVar18 = iVar14 - iVar9;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar20 = iVar70;
  if (iVar70 <= iVar18) {
    iVar20 = iVar2;
  }
  iVar18 = iVar1 - iVar16;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar66 = iVar70;
  if (iVar70 <= iVar18) {
    iVar66 = iVar2;
  }
  iVar18 = iVar56 - iVar8;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar65 = iVar70;
  if (iVar70 <= iVar18) {
    iVar65 = iVar2;
  }
  iVar18 = iVar52 - iVar57;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar21 = iVar70;
  if (iVar70 <= iVar18) {
    iVar21 = iVar2;
  }
  iVar18 = iVar51 - iVar64;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar62 = iVar70;
  if (iVar70 <= iVar18) {
    iVar62 = iVar2;
  }
  iVar18 = iVar6 - iVar54;
  iVar2 = iVar18;
  if (iVar71 <= iVar18) {
    iVar2 = iVar71;
  }
  iVar6 = iVar6 + iVar54;
  iVar54 = iVar70;
  if (iVar70 <= iVar18) {
    iVar54 = iVar2;
  }
  iVar2 = iVar6;
  if (iVar71 <= iVar6) {
    iVar2 = iVar71;
  }
  iVar51 = iVar51 + iVar64;
  iVar18 = iVar70;
  if (iVar70 <= iVar6) {
    iVar18 = iVar2;
  }
  iVar2 = iVar51;
  if (iVar71 <= iVar51) {
    iVar2 = iVar71;
  }
  iVar52 = iVar52 + iVar57;
  iVar6 = iVar70;
  if (iVar70 <= iVar51) {
    iVar6 = iVar2;
  }
  iVar2 = iVar52;
  if (iVar71 <= iVar52) {
    iVar2 = iVar71;
  }
  iVar56 = iVar56 + iVar8;
  iVar51 = iVar70;
  if (iVar70 <= iVar52) {
    iVar51 = iVar2;
  }
  iVar2 = iVar56;
  if (iVar71 <= iVar56) {
    iVar2 = iVar71;
  }
  iVar1 = iVar1 + iVar16;
  iVar16 = iVar70;
  if (iVar70 <= iVar56) {
    iVar16 = iVar2;
  }
  iVar2 = iVar1;
  if (iVar71 <= iVar1) {
    iVar2 = iVar71;
  }
  iVar14 = iVar14 + iVar9;
  iVar9 = iVar70;
  if (iVar70 <= iVar1) {
    iVar9 = iVar2;
  }
  iVar1 = iVar14;
  if (iVar71 <= iVar14) {
    iVar1 = iVar71;
  }
  iVar50 = iVar50 + iVar55;
  iVar2 = iVar70;
  if (iVar70 <= iVar14) {
    iVar2 = iVar1;
  }
  iVar1 = iVar50;
  if (iVar71 <= iVar50) {
    iVar1 = iVar71;
  }
  iVar14 = iVar70;
  if (iVar70 <= iVar50) {
    iVar14 = iVar1;
  }
  func_0x000104c18a10(iVar13 + iVar58);
  iVar1 = iVar70;
  if (iVar70 <= extraout_w8) {
    iVar1 = extraout_w9;
  }
  iVar52 = *param_1;
  iVar13 = iVar1 + iVar52;
  iVar50 = iVar13;
  if (iVar71 <= iVar13) {
    iVar50 = iVar71;
  }
  iVar56 = param_1[param_2 * 2];
  iVar58 = param_1[param_2 * 4];
  iVar8 = param_1[param_2 * 6];
  iVar64 = param_1[param_2 * 8];
  iVar57 = param_1[param_2 * 10];
  iVar23 = param_1[param_2 * 0xc];
  iVar24 = param_1[param_2 * 0xe];
  lVar69 = param_2 * 0x40;
  iVar25 = param_1[param_2 * 0x10];
  iVar26 = param_1[param_2 * 0x12];
  iVar27 = param_1[param_2 * 0x14];
  iVar28 = param_1[param_2 * 0x16];
  iVar29 = param_1[param_2 * 0x18];
  iVar30 = param_1[param_2 * 0x1a];
  iVar31 = param_1[param_2 * 0x1c];
  iVar32 = param_1[param_2 * 0x1e];
  iVar33 = param_1[param_2 * 0x20];
  iVar34 = param_1[param_2 * 0x22];
  iVar35 = param_1[param_2 * 0x24];
  iVar36 = param_1[param_2 * 0x26];
  iVar68 = param_1[param_2 * 0x28];
  iVar37 = param_1[param_2 * 0x2a];
  iVar38 = param_1[param_2 * 0x2c];
  iVar39 = param_1[param_2 * 0x2e];
  iVar40 = param_1[param_2 * 0x30];
  iVar41 = param_1[param_2 * 0x32];
  iVar42 = param_1[param_2 * 0x34];
  iVar43 = param_1[param_2 * 0x36];
  iVar44 = param_1[param_2 * 0x38];
  iVar45 = param_1[param_2 * 0x3a];
  iVar46 = param_1[param_2 * 0x3c];
  iVar55 = iVar70;
  if (iVar70 <= iVar13) {
    iVar55 = iVar50;
  }
  iVar47 = param_1[param_2 * 0x3e];
  *param_1 = iVar55;
  iVar13 = iVar14 + iVar56;
  iVar50 = iVar13;
  if (iVar71 <= iVar13) {
    iVar50 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar13) {
    iVar55 = iVar50;
  }
  param_1[param_2] = iVar55;
  iVar13 = iVar2 + iVar58;
  iVar50 = iVar13;
  if (iVar71 <= iVar13) {
    iVar50 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar13) {
    iVar55 = iVar50;
  }
  param_1[param_2 * 2] = iVar55;
  iVar8 = iVar9 + iVar8;
  iVar13 = iVar8;
  if (iVar71 <= iVar8) {
    iVar13 = iVar71;
  }
  iVar50 = iVar70;
  if (iVar70 <= iVar8) {
    iVar50 = iVar13;
  }
  param_1[param_2 * 3] = iVar50;
  iVar64 = iVar16 + iVar64;
  iVar13 = iVar64;
  if (iVar71 <= iVar64) {
    iVar13 = iVar71;
  }
  iVar50 = iVar70;
  if (iVar70 <= iVar64) {
    iVar50 = iVar13;
  }
  param_1[param_2 * 4] = iVar50;
  lVar67 = param_2;
  func_0x000104c18a10(iVar51 + iVar57);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_00) {
    iVar13 = extraout_w9_00;
  }
  param_1[param_2 * 5] = iVar13;
  func_0x000104c18a10(iVar6 + iVar23);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_01) {
    iVar13 = extraout_w9_01;
  }
  param_1[param_2 * 6] = iVar13;
  func_0x000104c18a10(iVar18 + iVar24);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_02) {
    iVar13 = extraout_w9_02;
  }
  param_1[param_2 * 7] = iVar13;
  iVar13 = (iVar48 + iVar54) * 0xb5 + 0x80 >> 8;
  iVar50 = iVar25 + iVar13;
  iVar8 = iVar50;
  if (iVar71 <= iVar50) {
    iVar8 = iVar71;
  }
  iVar64 = iVar70;
  if (iVar70 <= iVar50) {
    iVar64 = iVar8;
  }
  param_1[param_2 * 8] = iVar64;
  iVar50 = (iVar49 + iVar62) * 0xb5 + 0x80 >> 8;
  iVar8 = iVar26 + iVar50;
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 9] = iVar55;
  iVar8 = iVar27 + ((iVar17 + iVar21) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 10] = iVar55;
  iVar8 = iVar28 + ((iVar3 + iVar65) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 0xb] = iVar55;
  iVar8 = iVar29 + ((iVar15 + iVar66) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 0xc] = iVar55;
  iVar8 = iVar30 + ((iVar11 + iVar20) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 0xd] = iVar55;
  iVar8 = iVar31 + ((iVar5 + iVar19) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 0xe] = iVar55;
  iVar8 = iVar32 + ((iVar10 + iVar7) * 0xb5 + 0x80 >> 8);
  iVar64 = iVar8;
  if (iVar71 <= iVar8) {
    iVar64 = iVar71;
  }
  iVar55 = iVar70;
  if (iVar70 <= iVar8) {
    iVar55 = iVar64;
  }
  param_1[param_2 * 0xf] = iVar55;
  iVar10 = iVar33 + ((iVar7 - iVar10) * 0xb5 + 0x80 >> 8);
  iVar7 = iVar10;
  if (iVar71 <= iVar10) {
    iVar7 = iVar71;
  }
  iVar8 = iVar70;
  if (iVar70 <= iVar10) {
    iVar8 = iVar7;
  }
  *(int *)((long)param_1 + lVar69) = iVar8;
  iVar5 = iVar34 + ((iVar19 - iVar5) * 0xb5 + 0x80 >> 8);
  iVar10 = iVar5;
  if (iVar71 <= iVar5) {
    iVar10 = iVar71;
  }
  iVar7 = iVar70;
  if (iVar70 <= iVar5) {
    iVar7 = iVar10;
  }
  param_1[param_2 * 0x11] = iVar7;
  iVar11 = iVar35 + ((iVar20 - iVar11) * 0xb5 + 0x80 >> 8);
  iVar5 = iVar11;
  if (iVar71 <= iVar11) {
    iVar5 = iVar71;
  }
  iVar10 = iVar70;
  if (iVar70 <= iVar11) {
    iVar10 = iVar5;
  }
  param_1[param_2 * 0x12] = iVar10;
  iVar15 = iVar36 + ((iVar66 - iVar15) * 0xb5 + 0x80 >> 8);
  iVar11 = iVar15;
  if (iVar71 <= iVar15) {
    iVar11 = iVar71;
  }
  iVar5 = iVar70;
  if (iVar70 <= iVar15) {
    iVar5 = iVar11;
  }
  param_1[param_2 * 0x13] = iVar5;
  iVar3 = (iVar65 - iVar3) * 0xb5 + 0x80 >> 8;
  iVar15 = iVar68 + iVar3;
  iVar11 = iVar15;
  if (iVar71 <= iVar15) {
    iVar11 = iVar71;
  }
  iVar5 = iVar70;
  if (iVar70 <= iVar15) {
    iVar5 = iVar11;
  }
  param_1[param_2 * 0x14] = iVar5;
  iVar15 = (iVar21 - iVar17) * 0xb5 + 0x80 >> 8;
  iVar11 = iVar37 + iVar15;
  iVar5 = iVar11;
  if (iVar71 <= iVar11) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar11) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x15] = iVar17;
  iVar11 = (iVar62 - iVar49) * 0xb5 + 0x80 >> 8;
  iVar49 = iVar38 + iVar11;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x16] = iVar17;
  iVar48 = (iVar54 - iVar48) * 0xb5 + 0x80 >> 8;
  iVar49 = iVar39 + iVar48;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x17] = iVar17;
  iVar49 = iVar40 + iVar4;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x18] = iVar17;
  iVar49 = iVar41 + iVar63;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x19] = iVar17;
  iVar49 = iVar22 + iVar42;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1a] = iVar17;
  iVar49 = iVar43 + iVar59;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1b] = iVar17;
  iVar49 = iVar44 + iVar60;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1c] = iVar17;
  iVar49 = iVar45 + iVar53;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1d] = iVar17;
  iVar49 = iVar46 + iVar61;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1e] = iVar17;
  iVar49 = iVar47 + iVar12;
  iVar5 = iVar49;
  if (iVar71 <= iVar49) {
    iVar5 = iVar71;
  }
  iVar17 = iVar70;
  if (iVar70 <= iVar49) {
    iVar17 = iVar5;
  }
  param_1[param_2 * 0x1f] = iVar17;
  iVar47 = iVar47 - iVar12;
  iVar49 = iVar47;
  if (iVar71 <= iVar47) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar47) {
    iVar12 = iVar49;
  }
  param_1[param_2 * 0x20] = iVar12;
  iVar46 = iVar46 - iVar61;
  iVar49 = iVar46;
  if (iVar71 <= iVar46) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar46) {
    iVar12 = iVar49;
  }
  param_1[lVar67 * 0x21] = iVar12;
  iVar45 = iVar45 - iVar53;
  iVar49 = iVar45;
  if (iVar71 <= iVar45) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar45) {
    iVar12 = iVar49;
  }
  param_1[param_2 * 0x22] = iVar12;
  iVar44 = iVar44 - iVar60;
  iVar49 = iVar44;
  if (iVar71 <= iVar44) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar44) {
    iVar12 = iVar49;
  }
  param_1[lVar67 * 0x23] = iVar12;
  iVar43 = iVar43 - iVar59;
  iVar49 = iVar43;
  if (iVar71 <= iVar43) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar43) {
    iVar12 = iVar49;
  }
  param_1[param_2 * 0x24] = iVar12;
  iVar42 = iVar42 - iVar22;
  iVar49 = iVar42;
  if (iVar71 <= iVar42) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar42) {
    iVar12 = iVar49;
  }
  param_1[lVar67 * 0x25] = iVar12;
  iVar41 = iVar41 - iVar63;
  iVar49 = iVar41;
  if (iVar71 <= iVar41) {
    iVar49 = iVar71;
  }
  iVar12 = iVar70;
  if (iVar70 <= iVar41) {
    iVar12 = iVar49;
  }
  param_1[param_2 * 0x26] = iVar12;
  iVar40 = iVar40 - iVar4;
  iVar4 = iVar40;
  if (iVar71 <= iVar40) {
    iVar4 = iVar71;
  }
  iVar49 = iVar70;
  if (iVar70 <= iVar40) {
    iVar49 = iVar4;
  }
  param_1[lVar67 * 0x27] = iVar49;
  iVar39 = iVar39 - iVar48;
  iVar48 = iVar39;
  if (iVar71 <= iVar39) {
    iVar48 = iVar71;
  }
  iVar71 = iVar70;
  if (iVar70 <= iVar39) {
    iVar71 = iVar48;
  }
  param_1[param_2 * 0x28] = iVar71;
  func_0x000104c18a10(iVar38 - iVar11);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_03) {
    iVar71 = extraout_w9_03;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c18a10(iVar37 - iVar15);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_04) {
    iVar71 = extraout_w9_04;
  }
  param_1[param_2 * 0x2a] = iVar71;
  func_0x000104c18a10(iVar68 - iVar3);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_05) {
    iVar71 = extraout_w9_05;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c189f0(iVar36);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_06) {
    iVar71 = extraout_w9_06;
  }
  param_1[param_2 * 0x2c] = iVar71;
  func_0x000104c189f0(iVar35);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_07) {
    iVar71 = extraout_w9_07;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c189f0(iVar34);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_08) {
    iVar71 = extraout_w9_08;
  }
  param_1[param_2 * 0x2e] = iVar71;
  func_0x000104c189f0(iVar33);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_09) {
    iVar71 = extraout_w9_09;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c189f0(iVar32);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_10) {
    iVar71 = extraout_w9_10;
  }
  param_1[param_2 * 0x30] = iVar71;
  func_0x000104c189f0(iVar31);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_11) {
    iVar71 = extraout_w9_11;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c189f0(iVar30);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_12) {
    iVar71 = extraout_w9_12;
  }
  param_1[param_2 * 0x32] = iVar71;
  func_0x000104c189f0(iVar29);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_13) {
    iVar71 = extraout_w9_13;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c189f0(iVar28);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_14) {
    iVar71 = extraout_w9_14;
  }
  param_1[param_2 * 0x34] = iVar71;
  func_0x000104c189f0(iVar27);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_15) {
    iVar71 = extraout_w9_15;
  }
  func_0x000104c18a44(iVar71);
  func_0x000104c18a10(iVar26 - iVar50);
  iVar71 = iVar70;
  if (iVar70 <= extraout_w8_16) {
    iVar71 = extraout_w9_16;
  }
  param_1[param_2 * 0x36] = iVar71;
  func_0x000104c18a10(iVar25 - iVar13);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_17) {
    iVar13 = extraout_w9_17;
  }
  func_0x000104c18a44(iVar13);
  func_0x000104c18a00(iVar18);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_18) {
    iVar13 = extraout_w9_18;
  }
  param_1[param_2 * 0x38] = iVar13;
  func_0x000104c18a00(iVar6);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_19) {
    iVar13 = extraout_w9_19;
  }
  func_0x000104c18a44(iVar13);
  func_0x000104c18a00(iVar51);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_20) {
    iVar13 = extraout_w9_20;
  }
  param_1[param_2 * 0x3a] = iVar13;
  func_0x000104c18a00(iVar16);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_21) {
    iVar13 = extraout_w9_21;
  }
  func_0x000104c18a44(iVar13);
  func_0x000104c18a00(iVar9);
  iVar13 = iVar70;
  if (iVar70 <= extraout_w8_22) {
    iVar13 = extraout_w9_22;
  }
  param_1[param_2 * 0x3c] = iVar13;
  func_0x000104c18a10(iVar58 - iVar2);
  iVar2 = iVar70;
  if (iVar70 <= extraout_w8_23) {
    iVar2 = extraout_w9_23;
  }
  func_0x000104c18a44(iVar2);
  func_0x000104c18a10(iVar56 - iVar14);
  iVar2 = iVar70;
  if (iVar70 <= extraout_w8_24) {
    iVar2 = extraout_w9_24;
  }
  param_1[param_2 * 0x3e] = iVar2;
  func_0x000104c18a10(iVar52 - iVar1);
  if (iVar70 <= extraout_w8_25) {
    iVar70 = extraout_w9_25;
  }
  func_0x000104c18a44(iVar70);
  return;
}



/* Entry: 104c166f8; end: 104c168cb;  */

void FUN_104c166f8(int *param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *param_1;
  iVar7 = param_1[param_2];
  if (param_5 == 0) {
    iVar1 = param_1[param_2 * 3];
    iVar5 = (param_1[param_2 * 2] + iVar4) * 0xb5 + 0x80 >> 8;
    iVar4 = (iVar4 - param_1[param_2 * 2]) * 0xb5 + 0x80 >> 8;
    iVar6 = (iVar1 * 0x138 + iVar7 * 0x61f + 0x800 >> 0xc) - iVar1;
    iVar7 = iVar7 + (iVar1 * 0x61f + iVar7 * -0x138 + 0x800 >> 0xc);
  }
  else {
    iVar4 = iVar4 * 0xb5 + 0x80 >> 8;
    iVar6 = iVar7 * 0x61f + 0x800 >> 0xc;
    iVar7 = iVar7 * 0xec8 + 0x800 >> 0xc;
    iVar5 = iVar4;
  }
  iVar1 = iVar5 + iVar7;
  iVar2 = iVar1;
  if (param_4 <= iVar1) {
    iVar2 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar1) {
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  iVar1 = iVar4 + iVar6;
  iVar2 = iVar1;
  if (param_4 <= iVar1) {
    iVar2 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar1) {
    iVar3 = iVar2;
  }
  param_1[param_2] = iVar3;
  iVar4 = iVar4 - iVar6;
  iVar6 = iVar4;
  if (param_4 <= iVar4) {
    iVar6 = param_4;
  }
  iVar1 = param_3;
  if (param_3 <= iVar4) {
    iVar1 = iVar6;
  }
  param_1[param_2 * 2] = iVar1;
  iVar5 = iVar5 - iVar7;
  iVar7 = iVar5;
  if (param_4 <= iVar5) {
    iVar7 = param_4;
  }
  if (param_3 <= iVar5) {
    param_3 = iVar7;
  }
  param_1[param_2 * 3] = param_3;
  return;
}



/* Entry: 104c168cc; end: 104c16b13;  */

void FUN_104c168cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_w19;
  int *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  
  func_0x000104c18a50();
  FUN_104c166f8();
  iVar10 = unaff_x20[unaff_x22];
  iVar11 = unaff_x20[unaff_x22 * 3];
  if (unaff_w23 == 0) {
    iVar1 = unaff_x20[unaff_x22 * 7];
    iVar9 = (iVar1 * 0x4f + iVar10 * 799 + 0x800 >> 0xc) - iVar1;
    iVar12 = unaff_x20[unaff_x22 * 5] * 0x6a7 + iVar11 * -0x472 + 0x400 >> 0xb;
    iVar11 = unaff_x20[unaff_x22 * 5] * 0x472 + iVar11 * 0x6a7 + 0x400 >> 0xb;
    iVar10 = iVar10 + (iVar1 * 799 + iVar10 * -0x4f + 0x800 >> 0xc);
  }
  else {
    iVar9 = iVar10 * 799 + 0x800 >> 0xc;
    iVar12 = iVar11 * -0x8e4 + 0x800 >> 0xc;
    iVar11 = iVar11 * 0xd4e + 0x800 >> 0xc;
    iVar10 = iVar10 * 0xfb1 + 0x800 >> 0xc;
  }
  iVar1 = iVar9 + iVar12;
  iVar3 = iVar1;
  if (unaff_w21 <= iVar1) {
    iVar3 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar1) {
    iVar2 = iVar3;
  }
  iVar9 = iVar9 - iVar12;
  iVar12 = iVar9;
  if (unaff_w21 <= iVar9) {
    iVar12 = unaff_w21;
  }
  iVar1 = unaff_w19;
  if (unaff_w19 <= iVar9) {
    iVar1 = iVar12;
  }
  iVar9 = iVar11 + iVar10;
  iVar12 = iVar9;
  if (unaff_w21 <= iVar9) {
    iVar12 = unaff_w21;
  }
  iVar3 = unaff_w19;
  if (unaff_w19 <= iVar9) {
    iVar3 = iVar12;
  }
  iVar10 = iVar10 - iVar11;
  iVar11 = iVar10;
  if (unaff_w21 <= iVar10) {
    iVar11 = unaff_w21;
  }
  iVar9 = unaff_w19;
  if (unaff_w19 <= iVar10) {
    iVar9 = iVar11;
  }
  iVar12 = *unaff_x20;
  iVar6 = unaff_x20[unaff_x22 * 2];
  iVar7 = unaff_x20[unaff_x22 * 4];
  iVar8 = unaff_x20[unaff_x22 * 6];
  iVar10 = iVar12 + iVar3;
  iVar11 = iVar10;
  if (unaff_w21 <= iVar10) {
    iVar11 = unaff_w21;
  }
  iVar5 = unaff_w19;
  if (unaff_w19 <= iVar10) {
    iVar5 = iVar11;
  }
  *unaff_x20 = iVar5;
  iVar10 = (iVar1 + iVar9) * 0xb5 + 0x80 >> 8;
  iVar11 = iVar6 + iVar10;
  iVar5 = iVar11;
  if (unaff_w21 <= iVar11) {
    iVar5 = unaff_w21;
  }
  iVar4 = unaff_w19;
  if (unaff_w19 <= iVar11) {
    iVar4 = iVar5;
  }
  unaff_x20[unaff_x22] = iVar4;
  iVar11 = (iVar9 - iVar1) * 0xb5 + 0x80 >> 8;
  iVar9 = iVar7 + iVar11;
  iVar1 = iVar9;
  if (unaff_w21 <= iVar9) {
    iVar1 = unaff_w21;
  }
  iVar5 = unaff_w19;
  if (unaff_w19 <= iVar9) {
    iVar5 = iVar1;
  }
  unaff_x20[unaff_x22 * 2] = iVar5;
  iVar9 = iVar8 + iVar2;
  iVar1 = iVar9;
  if (unaff_w21 <= iVar9) {
    iVar1 = unaff_w21;
  }
  iVar5 = unaff_w19;
  if (unaff_w19 <= iVar9) {
    iVar5 = iVar1;
  }
  unaff_x20[unaff_x22 * 3] = iVar5;
  iVar8 = iVar8 - iVar2;
  iVar9 = iVar8;
  if (unaff_w21 <= iVar8) {
    iVar9 = unaff_w21;
  }
  iVar1 = unaff_w19;
  if (unaff_w19 <= iVar8) {
    iVar1 = iVar9;
  }
  unaff_x20[unaff_x22 * 4] = iVar1;
  iVar7 = iVar7 - iVar11;
  iVar11 = iVar7;
  if (unaff_w21 <= iVar7) {
    iVar11 = unaff_w21;
  }
  iVar9 = unaff_w19;
  if (unaff_w19 <= iVar7) {
    iVar9 = iVar11;
  }
  unaff_x20[unaff_x22 * 5] = iVar9;
  iVar6 = iVar6 - iVar10;
  iVar10 = iVar6;
  if (unaff_w21 <= iVar6) {
    iVar10 = unaff_w21;
  }
  iVar11 = unaff_w19;
  if (unaff_w19 <= iVar6) {
    iVar11 = iVar10;
  }
  unaff_x20[unaff_x22 * 6] = iVar11;
  iVar12 = iVar12 - iVar3;
  iVar10 = iVar12;
  if (unaff_w21 <= iVar12) {
    iVar10 = unaff_w21;
  }
  if (unaff_w19 <= iVar12) {
    unaff_w19 = iVar10;
  }
  unaff_x20[unaff_x22 * 7] = unaff_w19;
  return;
}



/* Entry: 104c16b14; end: 104c16e27;  */

void FUN_104c16b14(int *param_1,long param_2,int param_3,int param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar8 = param_1[param_2];
  iVar9 = param_1[param_2 * 2];
  iVar10 = param_1[param_2 * 5];
  iVar11 = param_1[param_2 * 6];
  iVar7 = *param_1;
  iVar12 = param_1[param_2 * 7];
  iVar1 = iVar12 + (iVar12 * -0x14 + iVar7 * 0x191 + 0x800 >> 0xc);
  iVar7 = (iVar12 * 0x191 + iVar7 * 0x14 + 0x800 >> 0xc) - iVar7;
  iVar12 = iVar10 + (iVar10 * -0x1e4 + iVar9 * 0x78b + 0x800 >> 0xc);
  iVar9 = (iVar10 * 0x78b + iVar9 * 0x1e4 + 0x800 >> 0xc) - iVar9;
  iVar2 = iVar11 + (iVar11 * -0xb0 + iVar8 * 0x4a5 + 0x800 >> 0xc);
  iVar8 = iVar8 + (iVar11 * -0x4a5 + iVar8 * -0xb0 + 0x800 >> 0xc);
  iVar10 = param_1[param_2 * 4] * 0x62f + param_1[param_2 * 3] * 0x513 + 0x400 >> 0xb;
  iVar11 = iVar1 + iVar10;
  iVar3 = iVar11;
  if (param_4 <= iVar11) {
    iVar3 = param_4;
  }
  iVar13 = param_3;
  if (param_3 <= iVar11) {
    iVar13 = iVar3;
  }
  iVar11 = param_1[param_2 * 4] * -0x513 + param_1[param_2 * 3] * 0x62f + 0x400 >> 0xb;
  iVar3 = iVar7 + iVar11;
  iVar5 = iVar3;
  if (param_4 <= iVar3) {
    iVar5 = param_4;
  }
  iVar14 = param_3;
  if (param_3 <= iVar3) {
    iVar14 = iVar5;
  }
  iVar3 = iVar2 + iVar12;
  iVar5 = iVar3;
  if (param_4 <= iVar3) {
    iVar5 = param_4;
  }
  iVar4 = param_3;
  if (param_3 <= iVar3) {
    iVar4 = iVar5;
  }
  iVar3 = iVar8 + iVar9;
  iVar5 = iVar3;
  if (param_4 <= iVar3) {
    iVar5 = param_4;
  }
  iVar6 = param_3;
  if (param_3 <= iVar3) {
    iVar6 = iVar5;
  }
  iVar1 = iVar1 - iVar10;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar1) {
    iVar3 = iVar10;
  }
  iVar7 = iVar7 - iVar11;
  iVar10 = iVar7;
  if (param_4 <= iVar7) {
    iVar10 = param_4;
  }
  iVar1 = param_3;
  if (param_3 <= iVar7) {
    iVar1 = iVar10;
  }
  iVar12 = iVar12 - iVar2;
  iVar10 = iVar12;
  if (param_4 <= iVar12) {
    iVar10 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar12) {
    iVar2 = iVar10;
  }
  iVar9 = iVar9 - iVar8;
  iVar10 = iVar9;
  if (param_4 <= iVar9) {
    iVar10 = param_4;
  }
  iVar12 = param_3;
  if (param_3 <= iVar9) {
    iVar12 = iVar10;
  }
  iVar10 = iVar3 + (iVar3 * -0x138 + iVar1 * 0x61f + 0x800 >> 0xc);
  iVar1 = (iVar1 * 0x138 + iVar3 * 0x61f + 0x800 >> 0xc) - iVar1;
  iVar8 = iVar12 + (iVar2 * -0x61f + iVar12 * -0x138 + 0x800 >> 0xc);
  iVar2 = iVar2 + (iVar12 * 0x61f + iVar2 * -0x138 + 0x800 >> 0xc);
  iVar12 = iVar13 + iVar4;
  iVar11 = iVar12;
  if (param_4 <= iVar12) {
    iVar11 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar12) {
    iVar3 = iVar11;
  }
  *param_5 = iVar3;
  iVar12 = iVar14 + iVar6;
  iVar11 = iVar12;
  if (param_4 <= iVar12) {
    iVar11 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar12) {
    iVar3 = iVar11;
  }
  param_5[param_6 * 7] = -iVar3;
  iVar13 = iVar13 - iVar4;
  iVar12 = iVar13;
  if (param_4 <= iVar13) {
    iVar12 = param_4;
  }
  iVar11 = param_3;
  if (param_3 <= iVar13) {
    iVar11 = iVar12;
  }
  iVar14 = iVar14 - iVar6;
  iVar12 = iVar14;
  if (param_4 <= iVar14) {
    iVar12 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar14) {
    iVar3 = iVar12;
  }
  iVar12 = iVar10 + iVar8;
  iVar7 = iVar12;
  if (param_4 <= iVar12) {
    iVar7 = param_4;
  }
  iVar9 = param_3;
  if (param_3 <= iVar12) {
    iVar9 = iVar7;
  }
  param_5[param_6] = -iVar9;
  iVar12 = iVar1 + iVar2;
  iVar7 = iVar12;
  if (param_4 <= iVar12) {
    iVar7 = param_4;
  }
  iVar9 = param_3;
  if (param_3 <= iVar12) {
    iVar9 = iVar7;
  }
  param_5[param_6 * 6] = iVar9;
  iVar10 = iVar10 - iVar8;
  iVar12 = iVar10;
  if (param_4 <= iVar10) {
    iVar12 = param_4;
  }
  iVar8 = param_3;
  if (param_3 <= iVar10) {
    iVar8 = iVar12;
  }
  iVar1 = iVar1 - iVar2;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  if (param_3 <= iVar1) {
    param_3 = iVar10;
  }
  param_5[param_6 * 3] = -((iVar11 + iVar3) * 0xb5 + 0x80 >> 8);
  param_5[param_6 * 4] = (iVar11 - iVar3) * 0xb5 + 0x80 >> 8;
  param_5[param_6 * 2] = (iVar8 + param_3) * 0xb5 + 0x80 >> 8;
  param_5[param_6 * 5] = -((iVar8 - param_3) * 0xb5 + 0x80 >> 8);
  return;
}



/* Entry: 104c16e28; end: 104c173cb;  */

void FUN_104c16e28(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int unaff_w19;
  int *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  
  func_0x000104c18a50();
  FUN_104c168cc();
  iVar15 = unaff_x20[unaff_x22];
  iVar16 = unaff_x20[unaff_x22 * 3];
  iVar19 = unaff_x20[unaff_x22 * 5];
  iVar18 = unaff_x20[unaff_x22 * 7];
  if (unaff_w23 == 0) {
    iVar1 = unaff_x20[unaff_x22 * 0xb];
    iVar12 = unaff_x20[unaff_x22 * 0xf];
    iVar13 = unaff_x20[unaff_x22 * 0xd];
    iVar20 = (iVar12 * 0x14 + iVar15 * 0x191 + 0x800 >> 0xc) - iVar12;
    iVar21 = unaff_x20[unaff_x22 * 9] * 0x62f + iVar18 * -0x513 + 0x400 >> 0xb;
    iVar14 = (iVar1 * 0x1e4 + iVar19 * 0x78b + 0x800 >> 0xc) - iVar1;
    iVar17 = iVar13 + (iVar13 * -0xb0 + iVar16 * -0x4a5 + 0x800 >> 0xc);
    iVar16 = iVar16 + (iVar13 * 0x4a5 + iVar16 * -0xb0 + 0x800 >> 0xc);
    iVar19 = iVar19 + (iVar1 * 0x78b + iVar19 * -0x1e4 + 0x800 >> 0xc);
    iVar18 = unaff_x20[unaff_x22 * 9] * 0x513 + iVar18 * 0x62f + 0x400 >> 0xb;
    iVar15 = iVar15 + (iVar12 * 0x191 + iVar15 * -0x14 + 0x800 >> 0xc);
  }
  else {
    iVar20 = iVar15 * 0x191 + 0x800 >> 0xc;
    iVar21 = iVar18 * -0xa26 + 0x800 >> 0xc;
    iVar14 = iVar19 * 0x78b + 0x800 >> 0xc;
    iVar17 = iVar16 * -0x4a5 + 0x800 >> 0xc;
    iVar16 = iVar16 * 0xf50 + 0x800 >> 0xc;
    iVar19 = iVar19 * 0xe1c + 0x800 >> 0xc;
    iVar18 = iVar18 * 0xc5e + 0x800 >> 0xc;
    iVar15 = iVar15 * 0xfec + 0x800 >> 0xc;
  }
  iVar1 = iVar20 + iVar21;
  iVar12 = iVar1;
  if (unaff_w21 <= iVar1) {
    iVar12 = unaff_w21;
  }
  iVar13 = unaff_w19;
  if (unaff_w19 <= iVar1) {
    iVar13 = iVar12;
  }
  iVar20 = iVar20 - iVar21;
  iVar21 = iVar20;
  if (unaff_w21 <= iVar20) {
    iVar21 = unaff_w21;
  }
  iVar1 = unaff_w19;
  if (unaff_w19 <= iVar20) {
    iVar1 = iVar21;
  }
  iVar21 = iVar17 - iVar14;
  iVar20 = iVar21;
  if (unaff_w21 <= iVar21) {
    iVar20 = unaff_w21;
  }
  iVar12 = unaff_w19;
  if (unaff_w19 <= iVar21) {
    iVar12 = iVar20;
  }
  iVar14 = iVar14 + iVar17;
  iVar17 = iVar14;
  if (unaff_w21 <= iVar14) {
    iVar17 = unaff_w21;
  }
  iVar20 = unaff_w19;
  if (unaff_w19 <= iVar14) {
    iVar20 = iVar17;
  }
  iVar17 = iVar16 + iVar19;
  iVar14 = iVar17;
  if (unaff_w21 <= iVar17) {
    iVar14 = unaff_w21;
  }
  iVar21 = unaff_w19;
  if (unaff_w19 <= iVar17) {
    iVar21 = iVar14;
  }
  iVar16 = iVar16 - iVar19;
  iVar19 = iVar16;
  if (unaff_w21 <= iVar16) {
    iVar19 = unaff_w21;
  }
  iVar17 = unaff_w19;
  if (unaff_w19 <= iVar16) {
    iVar17 = iVar19;
  }
  iVar19 = iVar15 - iVar18;
  iVar16 = iVar19;
  if (unaff_w21 <= iVar19) {
    iVar16 = unaff_w21;
  }
  iVar14 = unaff_w19;
  if (unaff_w19 <= iVar19) {
    iVar14 = iVar16;
  }
  iVar18 = iVar18 + iVar15;
  iVar16 = iVar18;
  if (unaff_w21 <= iVar18) {
    iVar16 = unaff_w21;
  }
  iVar19 = unaff_w19;
  if (unaff_w19 <= iVar18) {
    iVar19 = iVar16;
  }
  iVar11 = (iVar1 * 0x138 + iVar14 * 0x61f + 0x800 >> 0xc) - iVar1;
  iVar14 = iVar14 + (iVar1 * 0x61f + iVar14 * -0x138 + 0x800 >> 0xc);
  iVar18 = (iVar12 * -0x61f + iVar17 * 0x138 + 0x800 >> 0xc) - iVar17;
  iVar12 = (iVar12 * 0x138 + iVar17 * 0x61f + 0x800 >> 0xc) - iVar12;
  iVar16 = iVar13 + iVar20;
  iVar15 = iVar16;
  if (unaff_w21 <= iVar16) {
    iVar15 = unaff_w21;
  }
  iVar17 = unaff_w19;
  if (unaff_w19 <= iVar16) {
    iVar17 = iVar15;
  }
  iVar16 = iVar11 + iVar18;
  iVar15 = iVar16;
  if (unaff_w21 <= iVar16) {
    iVar15 = unaff_w21;
  }
  iVar1 = unaff_w19;
  if (unaff_w19 <= iVar16) {
    iVar1 = iVar15;
  }
  iVar11 = iVar11 - iVar18;
  iVar16 = iVar11;
  if (unaff_w21 <= iVar11) {
    iVar16 = unaff_w21;
  }
  iVar15 = unaff_w19;
  if (unaff_w19 <= iVar11) {
    iVar15 = iVar16;
  }
  iVar13 = iVar13 - iVar20;
  iVar16 = iVar13;
  if (unaff_w21 <= iVar13) {
    iVar16 = unaff_w21;
  }
  iVar18 = unaff_w19;
  if (unaff_w19 <= iVar13) {
    iVar18 = iVar16;
  }
  iVar20 = iVar19 - iVar21;
  iVar16 = iVar20;
  if (unaff_w21 <= iVar20) {
    iVar16 = unaff_w21;
  }
  iVar13 = unaff_w19;
  if (unaff_w19 <= iVar20) {
    iVar13 = iVar16;
  }
  iVar20 = iVar14 - iVar12;
  iVar16 = iVar20;
  if (unaff_w21 <= iVar20) {
    iVar16 = unaff_w21;
  }
  iVar11 = unaff_w19;
  if (unaff_w19 <= iVar20) {
    iVar11 = iVar16;
  }
  iVar14 = iVar14 + iVar12;
  iVar16 = iVar14;
  if (unaff_w21 <= iVar14) {
    iVar16 = unaff_w21;
  }
  iVar20 = unaff_w19;
  if (unaff_w19 <= iVar14) {
    iVar20 = iVar16;
  }
  iVar21 = iVar21 + iVar19;
  iVar16 = iVar21;
  if (unaff_w21 <= iVar21) {
    iVar16 = unaff_w21;
  }
  iVar19 = unaff_w19;
  if (unaff_w19 <= iVar21) {
    iVar19 = iVar16;
  }
  iVar12 = unaff_x20[unaff_x22 * 2];
  iVar5 = unaff_x20[unaff_x22 * 4];
  iVar21 = *unaff_x20;
  iVar6 = unaff_x20[unaff_x22 * 6];
  iVar16 = iVar19 + iVar21;
  iVar14 = iVar16;
  if (unaff_w21 <= iVar16) {
    iVar14 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar16) {
    iVar2 = iVar14;
  }
  iVar7 = unaff_x20[unaff_x22 * 8];
  iVar8 = unaff_x20[unaff_x22 * 10];
  iVar9 = unaff_x20[unaff_x22 * 0xc];
  iVar10 = unaff_x20[unaff_x22 * 0xe];
  *unaff_x20 = iVar2;
  iVar16 = iVar20 + iVar12;
  iVar14 = iVar16;
  if (unaff_w21 <= iVar16) {
    iVar14 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar16) {
    iVar2 = iVar14;
  }
  unaff_x20[unaff_x22] = iVar2;
  iVar16 = (iVar11 + iVar15) * 0xb5 + 0x80 >> 8;
  iVar14 = iVar5 + iVar16;
  iVar2 = iVar14;
  if (unaff_w21 <= iVar14) {
    iVar2 = unaff_w21;
  }
  iVar4 = unaff_w19;
  if (unaff_w19 <= iVar14) {
    iVar4 = iVar2;
  }
  unaff_x20[unaff_x22 * 2] = iVar4;
  iVar14 = (iVar18 + iVar13) * 0xb5 + 0x80 >> 8;
  iVar2 = iVar6 + iVar14;
  iVar4 = iVar2;
  if (unaff_w21 <= iVar2) {
    iVar4 = unaff_w21;
  }
  iVar3 = unaff_w19;
  if (unaff_w19 <= iVar2) {
    iVar3 = iVar4;
  }
  unaff_x20[unaff_x22 * 3] = iVar3;
  iVar18 = (iVar13 - iVar18) * 0xb5 + 0x80 >> 8;
  iVar13 = iVar7 + iVar18;
  iVar2 = iVar13;
  if (unaff_w21 <= iVar13) {
    iVar2 = unaff_w21;
  }
  iVar4 = unaff_w19;
  if (unaff_w19 <= iVar13) {
    iVar4 = iVar2;
  }
  unaff_x20[unaff_x22 * 4] = iVar4;
  iVar15 = (iVar11 - iVar15) * 0xb5 + 0x80 >> 8;
  iVar13 = iVar8 + iVar15;
  iVar11 = iVar13;
  if (unaff_w21 <= iVar13) {
    iVar11 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar13) {
    iVar2 = iVar11;
  }
  unaff_x20[unaff_x22 * 5] = iVar2;
  iVar13 = iVar1 + iVar9;
  iVar11 = iVar13;
  if (unaff_w21 <= iVar13) {
    iVar11 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar13) {
    iVar2 = iVar11;
  }
  unaff_x20[unaff_x22 * 6] = iVar2;
  iVar13 = iVar10 + iVar17;
  iVar11 = iVar13;
  if (unaff_w21 <= iVar13) {
    iVar11 = unaff_w21;
  }
  iVar2 = unaff_w19;
  if (unaff_w19 <= iVar13) {
    iVar2 = iVar11;
  }
  unaff_x20[unaff_x22 * 7] = iVar2;
  iVar10 = iVar10 - iVar17;
  iVar17 = iVar10;
  if (unaff_w21 <= iVar10) {
    iVar17 = unaff_w21;
  }
  iVar13 = unaff_w19;
  if (unaff_w19 <= iVar10) {
    iVar13 = iVar17;
  }
  unaff_x20[unaff_x22 * 8] = iVar13;
  iVar9 = iVar9 - iVar1;
  iVar17 = iVar9;
  if (unaff_w21 <= iVar9) {
    iVar17 = unaff_w21;
  }
  iVar1 = unaff_w19;
  if (unaff_w19 <= iVar9) {
    iVar1 = iVar17;
  }
  unaff_x20[unaff_x22 * 9] = iVar1;
  iVar8 = iVar8 - iVar15;
  iVar15 = iVar8;
  if (unaff_w21 <= iVar8) {
    iVar15 = unaff_w21;
  }
  iVar17 = unaff_w19;
  if (unaff_w19 <= iVar8) {
    iVar17 = iVar15;
  }
  unaff_x20[unaff_x22 * 10] = iVar17;
  iVar7 = iVar7 - iVar18;
  iVar15 = iVar7;
  if (unaff_w21 <= iVar7) {
    iVar15 = unaff_w21;
  }
  iVar18 = unaff_w19;
  if (unaff_w19 <= iVar7) {
    iVar18 = iVar15;
  }
  unaff_x20[unaff_x22 * 0xb] = iVar18;
  iVar6 = iVar6 - iVar14;
  iVar15 = iVar6;
  if (unaff_w21 <= iVar6) {
    iVar15 = unaff_w21;
  }
  iVar18 = unaff_w19;
  if (unaff_w19 <= iVar6) {
    iVar18 = iVar15;
  }
  unaff_x20[unaff_x22 * 0xc] = iVar18;
  iVar5 = iVar5 - iVar16;
  iVar16 = iVar5;
  if (unaff_w21 <= iVar5) {
    iVar16 = unaff_w21;
  }
  iVar15 = unaff_w19;
  if (unaff_w19 <= iVar5) {
    iVar15 = iVar16;
  }
  unaff_x20[unaff_x22 * 0xd] = iVar15;
  iVar12 = iVar12 - iVar20;
  iVar16 = iVar12;
  if (unaff_w21 <= iVar12) {
    iVar16 = unaff_w21;
  }
  iVar15 = unaff_w19;
  if (unaff_w19 <= iVar12) {
    iVar15 = iVar16;
  }
  unaff_x20[unaff_x22 * 0xe] = iVar15;
  iVar21 = iVar21 - iVar19;
  iVar16 = iVar21;
  if (unaff_w21 <= iVar21) {
    iVar16 = unaff_w21;
  }
  if (unaff_w19 <= iVar21) {
    unaff_w19 = iVar16;
  }
  unaff_x20[unaff_x22 * 0xf] = unaff_w19;
  return;
}



/* Entry: 104c173cc; end: 104c17c13;  */

void FUN_104c173cc(int *param_1,long param_2,int param_3,int param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  iVar9 = param_1[param_2 * 2];
  iVar10 = param_1[param_2 * 3];
  iVar11 = param_1[param_2 * 4];
  iVar12 = param_1[param_2 * 5];
  iVar13 = param_1[param_2 * 7];
  iVar14 = param_1[param_2 * 8];
  iVar15 = param_1[param_2 * 10];
  iVar16 = param_1[param_2 * 0xb];
  iVar17 = param_1[param_2 * 0xc];
  iVar18 = param_1[param_2 * 0xf];
  iVar8 = *param_1;
  iVar1 = iVar18 + (iVar18 * -5 + iVar8 * 0xc9 + 0x800 >> 0xc);
  iVar19 = param_1[param_2 * 0xd];
  iVar20 = param_1[param_2];
  iVar21 = param_1[param_2 * 0xe];
  iVar8 = (iVar8 * 5 + iVar18 * 0xc9 + 0x800 >> 0xc) - iVar8;
  iVar18 = iVar19 + (iVar19 * -0x7b + iVar9 * 0x3e3 + 0x800 >> 0xc);
  iVar9 = (iVar19 * 0x3e3 + iVar9 * 0x7b + 0x800 >> 0xc) - iVar9;
  iVar19 = iVar16 + (iVar16 * -0x189 + iVar11 * 0x6d7 + 0x800 >> 0xc);
  iVar11 = (iVar16 * 0x6d7 + iVar11 * 0x189 + 0x800 >> 0xc) - iVar11;
  iVar16 = iVar14 + (iVar14 * -0x425 + iVar13 * 0xabf + 0x800 >> 0xc);
  iVar13 = iVar13 + (iVar14 * -0xabf + iVar13 * -0x425 + 0x800 >> 0xc);
  iVar14 = iVar15 + (iVar15 * -0x247 + iVar12 * 0x83a + 0x800 >> 0xc);
  iVar12 = iVar12 + (iVar15 * -0x83a + iVar12 * -0x247 + 0x800 >> 0xc);
  iVar15 = iVar17 + (iVar17 * -0xef + iVar10 * 0x564 + 0x800 >> 0xc);
  iVar10 = iVar10 + (iVar17 * -0x564 + iVar10 * -0xef + 0x800 >> 0xc);
  iVar17 = iVar21 + (iVar21 * -0x2c + iVar20 * 0x259 + 0x800 >> 0xc);
  iVar20 = iVar20 + (iVar21 * -0x259 + iVar20 * -0x2c + 0x800 >> 0xc);
  iVar21 = iVar1 + iVar16;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar21) {
    iVar22 = iVar2;
  }
  iVar21 = iVar8 + iVar13;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar23 = param_3;
  if (param_3 <= iVar21) {
    iVar23 = iVar2;
  }
  iVar21 = iVar18 + iVar14;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar24 = param_3;
  if (param_3 <= iVar21) {
    iVar24 = iVar2;
  }
  iVar21 = iVar9 + iVar12;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar25 = param_3;
  if (param_3 <= iVar21) {
    iVar25 = iVar2;
  }
  iVar21 = iVar15 + iVar19;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar7 = param_3;
  if (param_3 <= iVar21) {
    iVar7 = iVar2;
  }
  iVar21 = iVar10 + iVar11;
  iVar2 = iVar21;
  if (param_4 <= iVar21) {
    iVar2 = param_4;
  }
  iVar4 = param_3;
  if (param_3 <= iVar21) {
    iVar4 = iVar2;
  }
  iVar21 = param_1[param_2 * 9] * 0x66d + param_1[param_2 * 6] * 0x4c4 + 0x400 >> 0xb;
  iVar2 = iVar17 + iVar21;
  iVar3 = iVar2;
  if (param_4 <= iVar2) {
    iVar3 = param_4;
  }
  iVar5 = param_3;
  if (param_3 <= iVar2) {
    iVar5 = iVar3;
  }
  iVar2 = param_1[param_2 * 9] * 0x4c4 + param_1[param_2 * 6] * -0x66d + 0x400 >> 0xb;
  iVar3 = iVar20 + iVar2;
  iVar6 = iVar3;
  if (param_4 <= iVar3) {
    iVar6 = param_4;
  }
  iVar1 = iVar1 - iVar16;
  iVar16 = param_3;
  if (param_3 <= iVar3) {
    iVar16 = iVar6;
  }
  iVar3 = iVar1;
  if (param_4 <= iVar1) {
    iVar3 = param_4;
  }
  iVar8 = iVar8 - iVar13;
  iVar13 = param_3;
  if (param_3 <= iVar1) {
    iVar13 = iVar3;
  }
  iVar1 = iVar8;
  if (param_4 <= iVar8) {
    iVar1 = param_4;
  }
  iVar18 = iVar18 - iVar14;
  iVar14 = param_3;
  if (param_3 <= iVar8) {
    iVar14 = iVar1;
  }
  iVar1 = iVar18;
  if (param_4 <= iVar18) {
    iVar1 = param_4;
  }
  iVar9 = iVar9 - iVar12;
  iVar12 = param_3;
  if (param_3 <= iVar18) {
    iVar12 = iVar1;
  }
  iVar1 = iVar9;
  if (param_4 <= iVar9) {
    iVar1 = param_4;
  }
  iVar19 = iVar19 - iVar15;
  iVar18 = param_3;
  if (param_3 <= iVar9) {
    iVar18 = iVar1;
  }
  iVar1 = iVar19;
  if (param_4 <= iVar19) {
    iVar1 = param_4;
  }
  iVar11 = iVar11 - iVar10;
  iVar15 = param_3;
  if (param_3 <= iVar19) {
    iVar15 = iVar1;
  }
  iVar1 = iVar11;
  if (param_4 <= iVar11) {
    iVar1 = param_4;
  }
  iVar21 = iVar21 - iVar17;
  iVar19 = param_3;
  if (param_3 <= iVar11) {
    iVar19 = iVar1;
  }
  iVar1 = iVar21;
  if (param_4 <= iVar21) {
    iVar1 = param_4;
  }
  iVar2 = iVar2 - iVar20;
  iVar10 = param_3;
  if (param_3 <= iVar21) {
    iVar10 = iVar1;
  }
  iVar1 = iVar2;
  if (param_4 <= iVar2) {
    iVar1 = param_4;
  }
  iVar17 = iVar13 + (iVar13 * -0x4f + iVar14 * 799 + 0x800 >> 0xc);
  iVar14 = (iVar14 * 0x4f + iVar13 * 799 + 0x800 >> 0xc) - iVar14;
  iVar13 = iVar18 + (iVar12 * 0x8e4 + iVar18 * -0x2b2 + 0x800 >> 0xc);
  iVar12 = iVar12 + (iVar18 * -0x8e4 + iVar12 * -0x2b2 + 0x800 >> 0xc);
  iVar18 = iVar19 + (iVar15 * -799 + iVar19 * -0x4f + 0x800 >> 0xc);
  iVar15 = iVar15 + (iVar19 * 799 + iVar15 * -0x4f + 0x800 >> 0xc);
  iVar19 = param_3;
  if (param_3 <= iVar2) {
    iVar19 = iVar1;
  }
  iVar20 = (iVar10 * 0x2b2 + iVar19 * 0x8e4 + 0x800 >> 0xc) - iVar10;
  iVar19 = iVar19 + (iVar19 * -0x2b2 + iVar10 * 0x8e4 + 0x800 >> 0xc);
  iVar1 = iVar22 + iVar7;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar21 = param_3;
  if (param_3 <= iVar1) {
    iVar21 = iVar10;
  }
  iVar1 = iVar23 + iVar4;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar1) {
    iVar2 = iVar10;
  }
  iVar1 = iVar5 + iVar24;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar8 = param_3;
  if (param_3 <= iVar1) {
    iVar8 = iVar10;
  }
  iVar1 = iVar16 + iVar25;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar22 = iVar22 - iVar7;
  iVar9 = param_3;
  if (param_3 <= iVar1) {
    iVar9 = iVar10;
  }
  iVar1 = iVar22;
  if (param_4 <= iVar22) {
    iVar1 = param_4;
  }
  iVar23 = iVar23 - iVar4;
  iVar10 = param_3;
  if (param_3 <= iVar22) {
    iVar10 = iVar1;
  }
  iVar1 = iVar23;
  if (param_4 <= iVar23) {
    iVar1 = param_4;
  }
  iVar24 = iVar24 - iVar5;
  iVar11 = param_3;
  if (param_3 <= iVar23) {
    iVar11 = iVar1;
  }
  iVar1 = iVar24;
  if (param_4 <= iVar24) {
    iVar1 = param_4;
  }
  iVar25 = iVar25 - iVar16;
  iVar16 = param_3;
  if (param_3 <= iVar24) {
    iVar16 = iVar1;
  }
  iVar1 = iVar25;
  if (param_4 <= iVar25) {
    iVar1 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar25) {
    iVar22 = iVar1;
  }
  iVar1 = iVar17 + iVar18;
  iVar23 = iVar1;
  if (param_4 <= iVar1) {
    iVar23 = param_4;
  }
  iVar24 = param_3;
  if (param_3 <= iVar1) {
    iVar24 = iVar23;
  }
  iVar1 = iVar14 + iVar15;
  iVar23 = iVar1;
  if (param_4 <= iVar1) {
    iVar23 = param_4;
  }
  iVar25 = param_3;
  if (param_3 <= iVar1) {
    iVar25 = iVar23;
  }
  iVar1 = iVar20 + iVar13;
  iVar23 = iVar1;
  if (param_4 <= iVar1) {
    iVar23 = param_4;
  }
  iVar7 = param_3;
  if (param_3 <= iVar1) {
    iVar7 = iVar23;
  }
  iVar1 = iVar19 + iVar12;
  iVar23 = iVar1;
  if (param_4 <= iVar1) {
    iVar23 = param_4;
  }
  iVar17 = iVar17 - iVar18;
  iVar18 = param_3;
  if (param_3 <= iVar1) {
    iVar18 = iVar23;
  }
  iVar1 = iVar17;
  if (param_4 <= iVar17) {
    iVar1 = param_4;
  }
  iVar14 = iVar14 - iVar15;
  iVar15 = param_3;
  if (param_3 <= iVar17) {
    iVar15 = iVar1;
  }
  iVar1 = iVar14;
  if (param_4 <= iVar14) {
    iVar1 = param_4;
  }
  iVar13 = iVar13 - iVar20;
  iVar17 = param_3;
  if (param_3 <= iVar14) {
    iVar17 = iVar1;
  }
  iVar1 = iVar13;
  if (param_4 <= iVar13) {
    iVar1 = param_4;
  }
  iVar12 = iVar12 - iVar19;
  iVar19 = param_3;
  if (param_3 <= iVar13) {
    iVar19 = iVar1;
  }
  iVar1 = iVar12;
  if (param_4 <= iVar12) {
    iVar1 = param_4;
  }
  iVar13 = param_3;
  if (param_3 <= iVar12) {
    iVar13 = iVar1;
  }
  iVar1 = iVar21 + iVar8;
  iVar14 = iVar1;
  if (param_4 <= iVar1) {
    iVar14 = param_4;
  }
  iVar12 = param_3;
  if (param_3 <= iVar1) {
    iVar12 = iVar14;
  }
  *param_5 = iVar12;
  iVar1 = iVar2 + iVar9;
  iVar14 = iVar1;
  if (param_4 <= iVar1) {
    iVar14 = param_4;
  }
  iVar12 = param_3;
  if (param_3 <= iVar1) {
    iVar12 = iVar14;
  }
  param_5[param_6 * 0xf] = -iVar12;
  iVar21 = iVar21 - iVar8;
  iVar1 = iVar21;
  if (param_4 <= iVar21) {
    iVar1 = param_4;
  }
  iVar14 = param_3;
  if (param_3 <= iVar21) {
    iVar14 = iVar1;
  }
  iVar2 = iVar2 - iVar9;
  iVar1 = iVar2;
  if (param_4 <= iVar2) {
    iVar1 = param_4;
  }
  iVar12 = iVar10 + (iVar10 * -0x138 + iVar11 * 0x61f + 0x800 >> 0xc);
  iVar20 = iVar22 + (iVar16 * -0x61f + iVar22 * -0x138 + 0x800 >> 0xc);
  iVar21 = param_3;
  if (param_3 <= iVar2) {
    iVar21 = iVar1;
  }
  iVar1 = iVar12 + iVar20;
  iVar2 = iVar1;
  if (param_4 <= iVar1) {
    iVar2 = param_4;
  }
  iVar8 = param_3;
  if (param_3 <= iVar1) {
    iVar8 = iVar2;
  }
  param_5[param_6 * 3] = -iVar8;
  iVar11 = (iVar11 * 0x138 + iVar10 * 0x61f + 0x800 >> 0xc) - iVar11;
  iVar16 = iVar16 + (iVar22 * 0x61f + iVar16 * -0x138 + 0x800 >> 0xc);
  iVar1 = iVar11 + iVar16;
  iVar10 = iVar1;
  if (param_4 <= iVar1) {
    iVar10 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar1) {
    iVar2 = iVar10;
  }
  param_5[param_6 * 0xc] = iVar2;
  iVar12 = iVar12 - iVar20;
  iVar1 = iVar12;
  if (param_4 <= iVar12) {
    iVar1 = param_4;
  }
  iVar10 = param_3;
  if (param_3 <= iVar12) {
    iVar10 = iVar1;
  }
  iVar11 = iVar11 - iVar16;
  iVar1 = iVar11;
  if (param_4 <= iVar11) {
    iVar1 = param_4;
  }
  iVar16 = param_3;
  if (param_3 <= iVar11) {
    iVar16 = iVar1;
  }
  iVar1 = iVar24 + iVar7;
  iVar12 = iVar1;
  if (param_4 <= iVar1) {
    iVar12 = param_4;
  }
  iVar20 = param_3;
  if (param_3 <= iVar1) {
    iVar20 = iVar12;
  }
  param_5[param_6] = -iVar20;
  iVar1 = iVar25 + iVar18;
  iVar12 = iVar1;
  if (param_4 <= iVar1) {
    iVar12 = param_4;
  }
  iVar20 = param_3;
  if (param_3 <= iVar1) {
    iVar20 = iVar12;
  }
  param_5[param_6 * 0xe] = iVar20;
  iVar1 = iVar15 + (iVar15 * -0x138 + iVar17 * 0x61f + 0x800 >> 0xc);
  iVar17 = (iVar17 * 0x138 + iVar15 * 0x61f + 0x800 >> 0xc) - iVar17;
  iVar12 = iVar13 + (iVar19 * -0x61f + iVar13 * -0x138 + 0x800 >> 0xc);
  iVar19 = iVar19 + (iVar13 * 0x61f + iVar19 * -0x138 + 0x800 >> 0xc);
  iVar24 = iVar24 - iVar7;
  iVar13 = iVar24;
  if (param_4 <= iVar24) {
    iVar13 = param_4;
  }
  iVar15 = param_3;
  if (param_3 <= iVar24) {
    iVar15 = iVar13;
  }
  iVar25 = iVar25 - iVar18;
  iVar18 = iVar25;
  if (param_4 <= iVar25) {
    iVar18 = param_4;
  }
  iVar13 = param_3;
  if (param_3 <= iVar25) {
    iVar13 = iVar18;
  }
  iVar18 = iVar1 + iVar12;
  iVar20 = iVar18;
  if (param_4 <= iVar18) {
    iVar20 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar18) {
    iVar2 = iVar20;
  }
  param_5[param_6 * 2] = iVar2;
  iVar18 = iVar17 + iVar19;
  iVar20 = iVar18;
  if (param_4 <= iVar18) {
    iVar20 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar18) {
    iVar2 = iVar20;
  }
  param_5[param_6 * 0xd] = -iVar2;
  param_5[param_6 * 7] = -((iVar14 + iVar21) * 0xb5 + 0x80 >> 8);
  param_5[param_6 * 8] = (iVar14 - iVar21) * 0xb5 + 0x80 >> 8;
  param_5[param_6 * 4] = (iVar10 + iVar16) * 0xb5 + 0x80 >> 8;
  param_5[param_6 * 0xb] = -((iVar10 - iVar16) * 0xb5 + 0x80 >> 8);
  param_5[param_6 * 6] = (iVar15 + iVar13) * 0xb5 + 0x80 >> 8;
  param_5[param_6 * 9] = -((iVar15 - iVar13) * 0xb5 + 0x80 >> 8);
  iVar1 = iVar1 - iVar12;
  iVar18 = iVar1;
  if (param_4 <= iVar1) {
    iVar18 = param_4;
  }
  iVar17 = iVar17 - iVar19;
  iVar19 = param_3;
  if (param_3 <= iVar1) {
    iVar19 = iVar18;
  }
  iVar1 = iVar17;
  if (param_4 <= iVar17) {
    iVar1 = param_4;
  }
  if (param_3 <= iVar17) {
    param_3 = iVar1;
  }
  param_5[param_6 * 5] = -((iVar19 + param_3) * 0xb5 + 0x80 >> 8);
  param_5[param_6 * 10] = (iVar19 - param_3) * 0xb5 + 0x80 >> 8;
  return;
}



/* Entry: 104c17c14; end: 104c189ef;  */

void FUN_104c17c14(int *param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar25;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
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
  
  FUN_104c16e28(param_1,param_2 << 1);
  iVar22 = param_1[param_2];
  iVar35 = param_1[param_2 * 3];
  iVar27 = param_1[param_2 * 5];
  iVar32 = param_1[param_2 * 7];
  iVar30 = param_1[param_2 * 9];
  iVar31 = param_1[param_2 * 0xb];
  iVar26 = param_1[param_2 * 0xd];
  iVar33 = param_1[param_2 * 0xf];
  if (param_5 == 0) {
    iVar24 = param_1[param_2 * 0x11];
    iVar29 = param_1[param_2 * 0x15];
    iVar25 = param_1[param_2 * 0x19];
    iVar1 = param_1[param_2 * 0x1f];
    iVar21 = param_1[param_2 * 0x1d];
    iVar23 = (iVar1 * 5 + iVar22 * 0xc9 + 0x800 >> 0xc) - iVar1;
    iVar34 = iVar21 + (iVar21 * -0x2c + iVar35 * -0x259 + 0x800 >> 0xc);
    iVar19 = param_1[param_2 * 0x17];
    iVar20 = iVar29 + (iVar29 * -0x247 + iVar31 * -0x83a + 0x800 >> 0xc);
    iVar35 = iVar35 + (iVar21 * 0x259 + iVar35 * -0x2c + 0x800 >> 0xc);
    iVar21 = param_1[param_2 * 0x1b];
    iVar31 = iVar31 + (iVar29 * 0x83a + iVar31 * -0x247 + 0x800 >> 0xc);
    iVar28 = (iVar21 * 0x7b + iVar27 * 0x3e3 + 0x800 >> 0xc) - iVar21;
    iVar29 = iVar25 + (iVar25 * -0xef + iVar32 * -0x564 + 0x800 >> 0xc);
    iVar27 = iVar27 + (iVar21 * 0x3e3 + iVar27 * -0x7b + 0x800 >> 0xc);
    iVar32 = iVar32 + (iVar25 * 0x564 + iVar32 * -0xef + 0x800 >> 0xc);
    iVar21 = (iVar19 * 0x189 + iVar30 * 0x6d7 + 0x800 >> 0xc) - iVar19;
    iVar25 = iVar24 + (iVar24 * -0x425 + iVar33 * -0xabf + 0x800 >> 0xc);
    iVar30 = iVar30 + (iVar19 * 0x6d7 + iVar30 * -0x189 + 0x800 >> 0xc);
    iVar33 = iVar33 + (iVar24 * 0xabf + iVar33 * -0x425 + 0x800 >> 0xc);
    iVar22 = iVar22 + (iVar22 * -5 + iVar1 * 0xc9 + 0x800 >> 0xc);
    iVar24 = param_1[param_2 * 0x13] * -0x66d + iVar26 * 0x4c4 + 0x400 >> 0xb;
    iVar26 = param_1[param_2 * 0x13] * 0x4c4 + iVar26 * 0x66d + 0x400 >> 0xb;
  }
  else {
    iVar23 = iVar22 * 0xc9 + 0x800 >> 0xc;
    iVar25 = iVar33 * -0xabf + 0x800 >> 0xc;
    iVar21 = iVar30 * 0x6d7 + 0x800 >> 0xc;
    iVar29 = iVar32 * -0x564 + 0x800 >> 0xc;
    iVar28 = iVar27 * 0x3e3 + 0x800 >> 0xc;
    iVar20 = iVar31 * -0x83a + 0x800 >> 0xc;
    iVar24 = iVar26 * 0x988 + 0x800 >> 0xc;
    iVar34 = iVar35 * -0x259 + 0x800 >> 0xc;
    iVar35 = iVar35 * 0xfd4 + 0x800 >> 0xc;
    iVar26 = iVar26 * 0xcda + 0x800 >> 0xc;
    iVar31 = iVar31 * 0xdb9 + 0x800 >> 0xc;
    iVar27 = iVar27 * 0xf85 + 0x800 >> 0xc;
    iVar32 = iVar32 * 0xf11 + 0x800 >> 0xc;
    iVar30 = iVar30 * 0xe77 + 0x800 >> 0xc;
    iVar33 = iVar33 * 0xbdb + 0x800 >> 0xc;
    iVar22 = iVar22 * 0xffb + 0x800 >> 0xc;
  }
  iVar1 = iVar23 + iVar25;
  iVar19 = iVar1;
  if (param_4 <= iVar1) {
    iVar19 = param_4;
  }
  iVar23 = iVar23 - iVar25;
  iVar25 = param_3;
  if (param_3 <= iVar1) {
    iVar25 = iVar19;
  }
  iVar1 = iVar23;
  if (param_4 <= iVar23) {
    iVar1 = param_4;
  }
  iVar19 = param_3;
  if (param_3 <= iVar23) {
    iVar19 = iVar1;
  }
  iVar1 = iVar29 - iVar21;
  iVar23 = iVar1;
  if (param_4 <= iVar1) {
    iVar23 = param_4;
  }
  iVar21 = iVar21 + iVar29;
  iVar29 = param_3;
  if (param_3 <= iVar1) {
    iVar29 = iVar23;
  }
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar1 = param_3;
  if (param_3 <= iVar21) {
    iVar1 = iVar23;
  }
  iVar21 = iVar28 + iVar20;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = iVar28 - iVar20;
  iVar20 = param_3;
  if (param_3 <= iVar21) {
    iVar20 = iVar23;
  }
  iVar21 = iVar28;
  if (param_4 <= iVar28) {
    iVar21 = param_4;
  }
  iVar23 = param_3;
  if (param_3 <= iVar28) {
    iVar23 = iVar21;
  }
  iVar28 = iVar34 - iVar24;
  iVar21 = iVar28;
  if (param_4 <= iVar28) {
    iVar21 = param_4;
  }
  iVar24 = iVar24 + iVar34;
  iVar34 = param_3;
  if (param_3 <= iVar28) {
    iVar34 = iVar21;
  }
  iVar21 = iVar24;
  if (param_4 <= iVar24) {
    iVar21 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar24) {
    iVar28 = iVar21;
  }
  iVar21 = iVar35 + iVar26;
  iVar24 = iVar21;
  if (param_4 <= iVar21) {
    iVar24 = param_4;
  }
  iVar35 = iVar35 - iVar26;
  iVar26 = param_3;
  if (param_3 <= iVar21) {
    iVar26 = iVar24;
  }
  iVar21 = iVar35;
  if (param_4 <= iVar35) {
    iVar21 = param_4;
  }
  iVar24 = param_3;
  if (param_3 <= iVar35) {
    iVar24 = iVar21;
  }
  iVar21 = iVar27 - iVar31;
  iVar35 = iVar21;
  if (param_4 <= iVar21) {
    iVar35 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar21) {
    iVar2 = iVar35;
  }
  iVar31 = iVar31 + iVar27;
  iVar35 = iVar31;
  if (param_4 <= iVar31) {
    iVar35 = param_4;
  }
  iVar27 = param_3;
  if (param_3 <= iVar31) {
    iVar27 = iVar35;
  }
  iVar35 = iVar32 + iVar30;
  iVar31 = iVar35;
  if (param_4 <= iVar35) {
    iVar31 = param_4;
  }
  iVar32 = iVar32 - iVar30;
  iVar30 = param_3;
  if (param_3 <= iVar35) {
    iVar30 = iVar31;
  }
  iVar35 = iVar32;
  if (param_4 <= iVar32) {
    iVar35 = param_4;
  }
  iVar31 = param_3;
  if (param_3 <= iVar32) {
    iVar31 = iVar35;
  }
  iVar32 = iVar22 - iVar33;
  iVar35 = iVar32;
  if (param_4 <= iVar32) {
    iVar35 = param_4;
  }
  iVar33 = iVar33 + iVar22;
  iVar22 = param_3;
  if (param_3 <= iVar32) {
    iVar22 = iVar35;
  }
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar17 = (iVar19 * 0x4f + iVar22 * 799 + 0x800 >> 0xc) - iVar19;
  iVar22 = iVar22 + (iVar19 * 799 + iVar22 * -0x4f + 0x800 >> 0xc);
  iVar21 = (iVar29 * -799 + iVar31 * 0x4f + 0x800 >> 0xc) - iVar31;
  iVar29 = (iVar29 * 0x4f + iVar31 * 799 + 0x800 >> 0xc) - iVar29;
  iVar32 = param_3;
  if (param_3 <= iVar33) {
    iVar32 = iVar35;
  }
  iVar35 = iVar25 + iVar1;
  iVar31 = iVar35;
  if (param_4 <= iVar35) {
    iVar31 = param_4;
  }
  iVar33 = param_3;
  if (param_3 <= iVar35) {
    iVar33 = iVar31;
  }
  iVar35 = iVar17 + iVar21;
  iVar31 = iVar35;
  if (param_4 <= iVar35) {
    iVar31 = param_4;
  }
  iVar17 = iVar17 - iVar21;
  iVar21 = param_3;
  if (param_3 <= iVar35) {
    iVar21 = iVar31;
  }
  iVar35 = iVar17;
  if (param_4 <= iVar17) {
    iVar35 = param_4;
  }
  iVar25 = iVar25 - iVar1;
  iVar31 = param_3;
  if (param_3 <= iVar17) {
    iVar31 = iVar35;
  }
  iVar35 = iVar25;
  if (param_4 <= iVar25) {
    iVar35 = param_4;
  }
  iVar1 = param_3;
  if (param_3 <= iVar25) {
    iVar1 = iVar35;
  }
  iVar25 = iVar28 - iVar20;
  iVar35 = iVar25;
  if (param_4 <= iVar25) {
    iVar35 = param_4;
  }
  iVar19 = param_3;
  if (param_3 <= iVar25) {
    iVar19 = iVar35;
  }
  iVar25 = iVar34 * -0x6a7 + iVar24 * -0x472 + 0x400 >> 0xb;
  iVar35 = iVar23 * -0x472 + iVar2 * 0x6a7 + 0x400 >> 0xb;
  iVar18 = iVar25 - iVar35;
  iVar17 = iVar18;
  if (param_4 <= iVar18) {
    iVar17 = param_4;
  }
  iVar35 = iVar35 + iVar25;
  iVar25 = param_3;
  if (param_3 <= iVar18) {
    iVar25 = iVar17;
  }
  iVar17 = iVar35;
  if (param_4 <= iVar35) {
    iVar17 = param_4;
  }
  iVar20 = iVar20 + iVar28;
  iVar28 = param_3;
  if (param_3 <= iVar35) {
    iVar28 = iVar17;
  }
  iVar35 = iVar20;
  if (param_4 <= iVar20) {
    iVar35 = param_4;
  }
  iVar17 = param_3;
  if (param_3 <= iVar20) {
    iVar17 = iVar35;
  }
  iVar35 = iVar26 + iVar27;
  iVar20 = iVar35;
  if (param_4 <= iVar35) {
    iVar20 = param_4;
  }
  iVar18 = param_3;
  if (param_3 <= iVar35) {
    iVar18 = iVar20;
  }
  iVar20 = iVar23 * 0x6a7 + iVar2 * 0x472 + 0x400 >> 0xb;
  iVar35 = iVar34 * -0x472 + iVar24 * 0x6a7 + 0x400 >> 0xb;
  iVar34 = iVar20 + iVar35;
  iVar24 = iVar34;
  if (param_4 <= iVar34) {
    iVar24 = param_4;
  }
  iVar35 = iVar35 - iVar20;
  iVar20 = param_3;
  if (param_3 <= iVar34) {
    iVar20 = iVar24;
  }
  iVar34 = iVar35;
  if (param_4 <= iVar35) {
    iVar34 = param_4;
  }
  iVar26 = iVar26 - iVar27;
  iVar27 = param_3;
  if (param_3 <= iVar35) {
    iVar27 = iVar34;
  }
  iVar35 = iVar26;
  if (param_4 <= iVar26) {
    iVar35 = param_4;
  }
  iVar34 = param_3;
  if (param_3 <= iVar26) {
    iVar34 = iVar35;
  }
  iVar26 = iVar32 - iVar30;
  iVar35 = iVar26;
  if (param_4 <= iVar26) {
    iVar35 = param_4;
  }
  iVar24 = param_3;
  if (param_3 <= iVar26) {
    iVar24 = iVar35;
  }
  iVar26 = iVar22 - iVar29;
  iVar35 = iVar26;
  if (param_4 <= iVar26) {
    iVar35 = param_4;
  }
  iVar22 = iVar22 + iVar29;
  iVar29 = param_3;
  if (param_3 <= iVar26) {
    iVar29 = iVar35;
  }
  iVar35 = iVar22;
  if (param_4 <= iVar22) {
    iVar35 = param_4;
  }
  iVar30 = iVar30 + iVar32;
  iVar32 = param_3;
  if (param_3 <= iVar22) {
    iVar32 = iVar35;
  }
  iVar35 = iVar30;
  if (param_4 <= iVar30) {
    iVar35 = param_4;
  }
  iVar23 = (iVar31 * 0x138 + iVar29 * 0x61f + 0x800 >> 0xc) - iVar31;
  iVar29 = iVar29 + (iVar29 * -0x138 + iVar31 * 0x61f + 0x800 >> 0xc);
  iVar26 = (iVar1 * 0x138 + iVar24 * 0x61f + 0x800 >> 0xc) - iVar1;
  iVar24 = iVar24 + (iVar1 * 0x61f + iVar24 * -0x138 + 0x800 >> 0xc);
  iVar22 = (iVar19 * -0x61f + iVar34 * 0x138 + 0x800 >> 0xc) - iVar34;
  iVar19 = (iVar19 * 0x138 + iVar34 * 0x61f + 0x800 >> 0xc) - iVar19;
  iVar31 = (iVar27 * 0x138 + iVar25 * -0x61f + 0x800 >> 0xc) - iVar27;
  iVar25 = (iVar25 * 0x138 + iVar27 * 0x61f + 0x800 >> 0xc) - iVar25;
  iVar27 = param_3;
  if (param_3 <= iVar30) {
    iVar27 = iVar35;
  }
  iVar35 = iVar33 + iVar17;
  iVar30 = iVar35;
  if (param_4 <= iVar35) {
    iVar30 = param_4;
  }
  iVar34 = param_3;
  if (param_3 <= iVar35) {
    iVar34 = iVar30;
  }
  iVar35 = iVar21 + iVar28;
  iVar30 = iVar35;
  if (param_4 <= iVar35) {
    iVar30 = param_4;
  }
  iVar1 = param_3;
  if (param_3 <= iVar35) {
    iVar1 = iVar30;
  }
  iVar35 = iVar23 + iVar31;
  iVar30 = iVar35;
  if (param_4 <= iVar35) {
    iVar30 = param_4;
  }
  iVar2 = param_3;
  if (param_3 <= iVar35) {
    iVar2 = iVar30;
  }
  iVar35 = iVar26 + iVar22;
  iVar30 = iVar35;
  if (param_4 <= iVar35) {
    iVar30 = param_4;
  }
  iVar26 = iVar26 - iVar22;
  iVar22 = param_3;
  if (param_3 <= iVar35) {
    iVar22 = iVar30;
  }
  iVar35 = iVar26;
  if (param_4 <= iVar26) {
    iVar35 = param_4;
  }
  iVar23 = iVar23 - iVar31;
  iVar30 = param_3;
  if (param_3 <= iVar26) {
    iVar30 = iVar35;
  }
  iVar35 = iVar23;
  if (param_4 <= iVar23) {
    iVar35 = param_4;
  }
  iVar21 = iVar21 - iVar28;
  iVar31 = param_3;
  if (param_3 <= iVar23) {
    iVar31 = iVar35;
  }
  iVar35 = iVar21;
  if (param_4 <= iVar21) {
    iVar35 = param_4;
  }
  iVar33 = iVar33 - iVar17;
  iVar26 = param_3;
  if (param_3 <= iVar21) {
    iVar26 = iVar35;
  }
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar21 = param_3;
  if (param_3 <= iVar33) {
    iVar21 = iVar35;
  }
  iVar33 = iVar27 - iVar18;
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar23 = param_3;
  if (param_3 <= iVar33) {
    iVar23 = iVar35;
  }
  iVar33 = iVar32 - iVar20;
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar33) {
    iVar28 = iVar35;
  }
  iVar33 = iVar29 - iVar25;
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar17 = param_3;
  if (param_3 <= iVar33) {
    iVar17 = iVar35;
  }
  iVar33 = iVar24 - iVar19;
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar24 = iVar24 + iVar19;
  iVar19 = param_3;
  if (param_3 <= iVar33) {
    iVar19 = iVar35;
  }
  iVar35 = iVar24;
  if (param_4 <= iVar24) {
    iVar35 = param_4;
  }
  iVar29 = iVar29 + iVar25;
  iVar33 = param_3;
  if (param_3 <= iVar24) {
    iVar33 = iVar35;
  }
  iVar35 = iVar29;
  if (param_4 <= iVar29) {
    iVar35 = param_4;
  }
  iVar32 = iVar32 + iVar20;
  iVar20 = param_3;
  if (param_3 <= iVar29) {
    iVar20 = iVar35;
  }
  iVar35 = iVar32;
  if (param_4 <= iVar32) {
    iVar35 = param_4;
  }
  iVar18 = iVar18 + iVar27;
  iVar27 = param_3;
  if (param_3 <= iVar32) {
    iVar27 = iVar35;
  }
  iVar35 = iVar18;
  if (param_4 <= iVar18) {
    iVar35 = param_4;
  }
  iVar32 = param_3;
  if (param_3 <= iVar18) {
    iVar32 = iVar35;
  }
  iVar29 = *param_1;
  iVar32 = iVar29 + iVar32;
  iVar35 = iVar32;
  if (param_4 <= iVar32) {
    iVar35 = param_4;
  }
  iVar24 = param_1[param_2 * 2];
  iVar25 = param_3;
  if (param_3 <= iVar32) {
    iVar25 = iVar35;
  }
  iVar32 = param_1[param_2 * 4];
  iVar18 = param_1[param_2 * 6];
  iVar5 = param_1[param_2 * 8];
  iVar6 = param_1[param_2 * 10];
  iVar7 = param_1[param_2 * 0xc];
  iVar8 = param_1[param_2 * 0xe];
  iVar9 = param_1[param_2 * 0x10];
  iVar10 = param_1[param_2 * 0x12];
  iVar11 = param_1[param_2 * 0x14];
  iVar12 = param_1[param_2 * 0x16];
  iVar13 = param_1[param_2 * 0x18];
  iVar14 = param_1[param_2 * 0x1a];
  iVar15 = param_1[param_2 * 0x1c];
  iVar16 = param_1[param_2 * 0x1e];
  *param_1 = iVar25;
  iVar27 = iVar27 + iVar24;
  iVar35 = iVar27;
  if (param_4 <= iVar27) {
    iVar35 = param_4;
  }
  iVar25 = param_3;
  if (param_3 <= iVar27) {
    iVar25 = iVar35;
  }
  param_1[param_2] = iVar25;
  iVar20 = iVar20 + iVar32;
  iVar35 = iVar20;
  if (param_4 <= iVar20) {
    iVar35 = param_4;
  }
  iVar27 = param_3;
  if (param_3 <= iVar20) {
    iVar27 = iVar35;
  }
  param_1[param_2 * 2] = iVar27;
  iVar33 = iVar33 + iVar18;
  iVar35 = iVar33;
  if (param_4 <= iVar33) {
    iVar35 = param_4;
  }
  iVar27 = param_3;
  if (param_3 <= iVar33) {
    iVar27 = iVar35;
  }
  param_1[param_2 * 3] = iVar27;
  iVar35 = (iVar19 + iVar30) * 0xb5 + 0x80 >> 8;
  iVar27 = iVar5 + iVar35;
  iVar33 = iVar27;
  if (param_4 <= iVar27) {
    iVar33 = param_4;
  }
  iVar20 = param_3;
  if (param_3 <= iVar27) {
    iVar20 = iVar33;
  }
  param_1[param_2 * 4] = iVar20;
  iVar27 = (iVar17 + iVar31) * 0xb5 + 0x80 >> 8;
  iVar33 = iVar6 + iVar27;
  iVar20 = iVar33;
  if (param_4 <= iVar33) {
    iVar20 = param_4;
  }
  iVar25 = param_3;
  if (param_3 <= iVar33) {
    iVar25 = iVar20;
  }
  param_1[param_2 * 5] = iVar25;
  iVar33 = (iVar28 + iVar26) * 0xb5 + 0x80 >> 8;
  iVar20 = iVar7 + iVar33;
  iVar25 = iVar20;
  if (param_4 <= iVar20) {
    iVar25 = param_4;
  }
  iVar4 = param_3;
  if (param_3 <= iVar20) {
    iVar4 = iVar25;
  }
  param_1[param_2 * 6] = iVar4;
  iVar20 = (iVar21 + iVar23) * 0xb5 + 0x80 >> 8;
  iVar25 = iVar8 + iVar20;
  iVar4 = iVar25;
  if (param_4 <= iVar25) {
    iVar4 = param_4;
  }
  iVar3 = param_3;
  if (param_3 <= iVar25) {
    iVar3 = iVar4;
  }
  param_1[param_2 * 7] = iVar3;
  iVar25 = (iVar23 - iVar21) * 0xb5 + 0x80 >> 8;
  iVar21 = iVar9 + iVar25;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar4 = param_3;
  if (param_3 <= iVar21) {
    iVar4 = iVar23;
  }
  param_1[param_2 * 8] = iVar4;
  iVar26 = (iVar28 - iVar26) * 0xb5 + 0x80 >> 8;
  iVar21 = iVar10 + iVar26;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 9] = iVar28;
  iVar31 = (iVar17 - iVar31) * 0xb5 + 0x80 >> 8;
  iVar21 = iVar11 + iVar31;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 10] = iVar28;
  iVar30 = (iVar19 - iVar30) * 0xb5 + 0x80 >> 8;
  iVar21 = iVar12 + iVar30;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 0xb] = iVar28;
  iVar21 = iVar13 + iVar22;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 0xc] = iVar28;
  iVar21 = iVar2 + iVar14;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 0xd] = iVar28;
  iVar21 = iVar15 + iVar1;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 0xe] = iVar28;
  iVar21 = iVar16 + iVar34;
  iVar23 = iVar21;
  if (param_4 <= iVar21) {
    iVar23 = param_4;
  }
  iVar28 = param_3;
  if (param_3 <= iVar21) {
    iVar28 = iVar23;
  }
  param_1[param_2 * 0xf] = iVar28;
  iVar16 = iVar16 - iVar34;
  iVar34 = iVar16;
  if (param_4 <= iVar16) {
    iVar34 = param_4;
  }
  iVar21 = param_3;
  if (param_3 <= iVar16) {
    iVar21 = iVar34;
  }
  param_1[param_2 * 0x10] = iVar21;
  iVar15 = iVar15 - iVar1;
  iVar34 = iVar15;
  if (param_4 <= iVar15) {
    iVar34 = param_4;
  }
  iVar21 = param_3;
  if (param_3 <= iVar15) {
    iVar21 = iVar34;
  }
  param_1[param_2 * 0x11] = iVar21;
  iVar14 = iVar14 - iVar2;
  iVar34 = iVar14;
  if (param_4 <= iVar14) {
    iVar34 = param_4;
  }
  iVar21 = param_3;
  if (param_3 <= iVar14) {
    iVar21 = iVar34;
  }
  param_1[param_2 * 0x12] = iVar21;
  iVar13 = iVar13 - iVar22;
  iVar22 = iVar13;
  if (param_4 <= iVar13) {
    iVar22 = param_4;
  }
  iVar34 = param_3;
  if (param_3 <= iVar13) {
    iVar34 = iVar22;
  }
  param_1[param_2 * 0x13] = iVar34;
  iVar12 = iVar12 - iVar30;
  iVar30 = iVar12;
  if (param_4 <= iVar12) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar12) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x14] = iVar22;
  iVar11 = iVar11 - iVar31;
  iVar30 = iVar11;
  if (param_4 <= iVar11) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar11) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x15] = iVar22;
  iVar10 = iVar10 - iVar26;
  iVar30 = iVar10;
  if (param_4 <= iVar10) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar10) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x16] = iVar22;
  iVar9 = iVar9 - iVar25;
  iVar30 = iVar9;
  if (param_4 <= iVar9) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar9) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x17] = iVar22;
  iVar8 = iVar8 - iVar20;
  iVar30 = iVar8;
  if (param_4 <= iVar8) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar8) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x18] = iVar22;
  iVar7 = iVar7 - iVar33;
  iVar30 = iVar7;
  if (param_4 <= iVar7) {
    iVar30 = param_4;
  }
  iVar22 = param_3;
  if (param_3 <= iVar7) {
    iVar22 = iVar30;
  }
  param_1[param_2 * 0x19] = iVar22;
  iVar6 = iVar6 - iVar27;
  iVar27 = iVar6;
  if (param_4 <= iVar6) {
    iVar27 = param_4;
  }
  iVar30 = param_3;
  if (param_3 <= iVar6) {
    iVar30 = iVar27;
  }
  param_1[param_2 * 0x1a] = iVar30;
  iVar5 = iVar5 - iVar35;
  iVar35 = iVar5;
  if (param_4 <= iVar5) {
    iVar35 = param_4;
  }
  iVar27 = param_3;
  if (param_3 <= iVar5) {
    iVar27 = iVar35;
  }
  param_1[param_2 * 0x1b] = iVar27;
  func_0x000104c18a34(iVar18);
  iVar35 = param_3;
  if (param_3 <= extraout_w8) {
    iVar35 = extraout_w9;
  }
  param_1[param_2 * 0x1c] = iVar35;
  func_0x000104c18a34(iVar32);
  iVar35 = param_3;
  if (param_3 <= extraout_w8_00) {
    iVar35 = extraout_w9_00;
  }
  param_1[param_2 * 0x1d] = iVar35;
  func_0x000104c18a34(iVar24);
  iVar35 = param_3;
  if (param_3 <= extraout_w8_01) {
    iVar35 = extraout_w9_01;
  }
  param_1[param_2 * 0x1e] = iVar35;
  func_0x000104c18a34(iVar29);
  if (param_3 <= extraout_w8_02) {
    param_3 = extraout_w9_02;
  }
  param_1[param_2 * 0x1f] = param_3;
  return;
}



/* Entry: 104c189f0; end: 104c1903b;  */

void FUN_104c189f0(void)

{
  return;
}



/* Entry: 104c1903c; end: 104c193e7;  */

void FUN_104c1903c(undefined1 *param_1,ulong param_2,short *param_3,ulong param_4,uint param_5,
                  uint param_6,ulong param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong extraout_x8;
  undefined *puVar15;
  ulong extraout_x8_00;
  short *psVar16;
  ulong extraout_x11;
  ulong uVar17;
  ulong extraout_x11_00;
  uint uVar18;
  ulong uVar19;
  long extraout_x14;
  long lVar20;
  long extraout_x15;
  ulong uVar21;
  ulong extraout_x15_00;
  int iVar22;
  undefined8 unaff_x19;
  short *psVar23;
  undefined1 *unaff_x20;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  code *unaff_x23;
  long lVar24;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar24 = (ulong)param_5 * 8;
    bVar4 = (&UNK_10dd74da0)[lVar24];
    uVar9 = (uint)bVar4 * 4;
    unaff_x21 = (ulong)uVar9;
    bVar5 = (&UNK_10dd74da1)[lVar24];
    uVar10 = (uint)bVar5 << 2;
    lVar20 = (ulong)bVar5 << 2;
    bVar11 = uVar10 == (uint)bVar4 * 8;
    bVar12 = uVar9 == (uint)bVar5 * 8;
    unaff_x25 = (ulong)(bVar11 || bVar12);
    uVar14 = (uint)param_4;
    if ((int)param_7 == 0 && uVar14 == 0) {
      *param_3 = 0;
      puVar13 = param_1;
      unaff_x20 = param_1;
      for (uVar19 = 0; (int)uVar19 != (int)lVar20; uVar19 = (ulong)((int)uVar19 + 1)) {
        uVar21 = 0;
        while (unaff_x21 != uVar21) {
          func_0x000104c19534();
          uVar19 = extraout_x8;
          uVar21 = extraout_x11;
          lVar20 = extraout_x15;
        }
        unaff_x20 = unaff_x20 + param_2;
      }
    }
    else {
      *(uint *)((long)register0x00000008 + -0x4098) = param_6;
      *(uint *)((long)register0x00000008 + -0x4094) = uVar10;
      lVar20 = (param_7 & 0xffffffff) * 2;
      bVar5 = (&UNK_10dd74da2)[lVar24];
      bVar6 = (&UNK_10dd6b60c)[lVar20];
      bVar7 = (&UNK_10dd74da3)[lVar24];
      bVar8 = (&UNK_10dd6b60d)[lVar20];
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      uVar19 = (ulong)uVar10;
      uVar2 = uVar9;
      if (0x1f < uVar9) {
        uVar2 = 0x20;
      }
      *(ulong *)((long)register0x00000008 + -0x4090) = param_2;
      *(uint *)((long)register0x00000008 + -0x409c) = (uint)(1 << (ulong)(param_6 & 0x1f)) >> 1;
      if ((ulong)bVar8 == 2) {
        if (bVar6 == 2) {
LAB_104c191c0:
          uVar18 = (uint)(byte)(&PTR_DAT_1107eae30)[param_5][param_4 & 0xffffffff];
        }
        else {
          uVar18 = uVar10 - 1;
          if (uVar14 <= uVar10 - 1) {
            uVar18 = uVar14;
          }
        }
      }
      else {
        if (bVar6 != 2) goto LAB_104c191c0;
        uVar18 = uVar14 >> (ulong)(bVar5 + 2 & 0x1f);
      }
      *(undefined **)((long)register0x00000008 + -0x4080) =
           (&PTR_DAT_1107eacf8)[(ulong)bVar5 * 4 + (ulong)bVar6];
      puVar15 = (&PTR_DAT_1107eacf8)[(ulong)bVar7 * 4 + (ulong)bVar8];
      *(ulong *)((long)register0x00000008 + -0x40b8) = uVar19;
      *(undefined **)((long)register0x00000008 + -0x40b0) = puVar15;
      *(uint *)((long)register0x00000008 + -0x40cc) = uVar18;
      *(ulong *)((long)register0x00000008 + -0x4078) = (ulong)(uVar18 + 1);
      unaff_x26 = uVar19 * 2;
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x4070);
      *(ulong *)((long)register0x00000008 + -0x40c8) = (ulong)bVar4;
      *(ulong *)((long)register0x00000008 + -0x40c0) = (ulong)uVar2;
      *(ulong *)((long)register0x00000008 + -0x4088) = (ulong)bVar4 << 4;
      unaff_x27 = 0xb5;
      unaff_x28 = (ulong)uVar2 << 2;
      *(short **)((long)register0x00000008 + -0x40a8) = param_3;
      psVar23 = param_3;
      for (lVar24 = 0; lVar24 != *(long *)((long)register0x00000008 + -0x4078); lVar24 = lVar24 + 1)
      {
        lVar20 = 0;
        psVar16 = psVar23;
        if (bVar11 || bVar12) {
          for (; unaff_x28 != lVar20; lVar20 = lVar20 + 4) {
            *(int *)(unaff_x24 + lVar20) = *psVar16 * 0xb5 + 0x80 >> 8;
            psVar16 = psVar16 + uVar19;
          }
        }
        else {
          for (; unaff_x28 != lVar20; lVar20 = lVar20 + 4) {
            *(int *)(unaff_x24 + lVar20) = (int)*psVar16;
            psVar16 = psVar16 + uVar19;
          }
        }
        param_3 = (short *)0xffff8000;
        param_4 = 0x7fff;
        (**(code **)((long)register0x00000008 + -0x4080))(unaff_x24,1);
        unaff_x24 = unaff_x24 + *(long *)((long)register0x00000008 + -0x4088);
        psVar23 = psVar23 + 1;
      }
      iVar22 = (int)*(undefined8 *)((long)register0x00000008 + -0x40b8);
      if ((int)*(undefined8 *)((long)register0x00000008 + -0x4078) < iVar22) {
        _bzero(unaff_x24,
               (long)(int)*(undefined8 *)((long)register0x00000008 + -0x40c8) *
               (long)(int)(iVar22 + ~*(uint *)((long)register0x00000008 + -0x40cc)) * 0x10);
      }
      param_2 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x40c0) * iVar22 * 2)
      ;
      puVar13 = *(undefined1 **)((long)register0x00000008 + -0x40a8);
      _bzero();
      iVar3 = *(int *)((long)register0x00000008 + -0x409c);
      uVar10 = *(uint *)((long)register0x00000008 + -0x4098);
      unaff_x23 = *(code **)((long)register0x00000008 + -0x40b0);
      for (lVar24 = 0; (ulong)(iVar22 * uVar9) << 2 != lVar24; lVar24 = lVar24 + 4) {
        iVar1 = *(int *)((long)register0x00000008 + lVar24 + -0x4070) + iVar3 >> (uVar10 & 0x1f);
        if (iVar1 < -0x7fff) {
          iVar1 = -0x8000;
        }
        if (0x7ffe < iVar1) {
          iVar1 = 0x7fff;
        }
        *(int *)((long)register0x00000008 + lVar24 + -0x4070) = iVar1;
      }
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x4070);
      for (uVar19 = unaff_x21; uVar19 != 0; uVar19 = uVar19 - 1) {
        param_3 = (short *)0xffff8000;
        param_4 = 0x7fff;
        puVar13 = unaff_x22;
        param_2 = unaff_x21;
        (*unaff_x23)();
        unaff_x22 = unaff_x22 + 4;
      }
      lVar24 = *(long *)((long)register0x00000008 + -0x4090);
      uVar21 = (ulong)*(uint *)((long)register0x00000008 + -0x4094);
      for (uVar19 = 0; unaff_x19 = 0, unaff_x20 = param_1, (int)uVar19 != (int)uVar21;
          uVar19 = (ulong)((int)uVar19 + 1)) {
        uVar17 = 0;
        while (unaff_x21 != uVar17) {
          func_0x000104c19534();
          uVar19 = extraout_x8_00;
          uVar17 = extraout_x11_00;
          lVar24 = extraout_x14;
          uVar21 = extraout_x15_00;
        }
        param_1 = param_1 + lVar24;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return;
    }
    unaff_x30 = 0x104c193e8;
    ___stack_chk_fail();
    param_6 = 1;
    param_7 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40d0);
    param_1 = puVar13;
  } while( true );
}



/* Entry: 104c193e8; end: 104c1954b;  */

void FUN_104c193e8(undefined1 *param_1,ulong param_2,short *param_3,ulong param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong extraout_x8;
  undefined *puVar16;
  ulong extraout_x8_00;
  short *psVar17;
  ulong extraout_x11;
  ulong uVar18;
  ulong extraout_x11_00;
  uint uVar19;
  long extraout_x14;
  long lVar20;
  long extraout_x15;
  ulong uVar21;
  ulong extraout_x15_00;
  int iVar22;
  short *psVar23;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  long lVar24;
  code *unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar19 = 1;
    uVar15 = 0;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar24 = (ulong)param_5 * 8;
    bVar4 = (&UNK_10dd74da0)[lVar24];
    uVar9 = (uint)bVar4 * 4;
    unaff_x21 = (ulong)uVar9;
    bVar5 = (&UNK_10dd74da1)[lVar24];
    uVar10 = (uint)bVar5 << 2;
    lVar20 = (ulong)bVar5 << 2;
    bVar11 = uVar10 == (uint)bVar4 * 8;
    bVar12 = uVar9 == (uint)bVar5 * 8;
    unaff_x25 = (ulong)(bVar11 || bVar12);
    uVar14 = (uint)param_4;
    if ((int)uVar15 == 0 && uVar14 == 0) {
      *param_3 = 0;
      puVar13 = param_1;
      unaff_x20 = param_1;
      for (uVar15 = 0; (int)uVar15 != (int)lVar20; uVar15 = (ulong)((int)uVar15 + 1)) {
        uVar21 = 0;
        while (unaff_x21 != uVar21) {
          func_0x000104c19534();
          uVar15 = extraout_x8;
          uVar21 = extraout_x11;
          lVar20 = extraout_x15;
        }
        unaff_x20 = unaff_x20 + param_2;
      }
    }
    else {
      *(uint *)((long)register0x00000008 + -0x4098) = uVar19;
      *(uint *)((long)register0x00000008 + -0x4094) = uVar10;
      lVar20 = (uVar15 & 0xffffffff) * 2;
      bVar5 = (&UNK_10dd74da2)[lVar24];
      bVar6 = (&UNK_10dd6b60c)[lVar20];
      bVar7 = (&UNK_10dd74da3)[lVar24];
      bVar8 = (&UNK_10dd6b60d)[lVar20];
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      uVar15 = (ulong)uVar10;
      uVar2 = uVar9;
      if (0x1f < uVar9) {
        uVar2 = 0x20;
      }
      *(ulong *)((long)register0x00000008 + -0x4090) = param_2;
      *(uint *)((long)register0x00000008 + -0x409c) = (uint)(1 << (ulong)(uVar19 & 0x1f)) >> 1;
      if ((ulong)bVar8 == 2) {
        if (bVar6 == 2) {
LAB_104c191c0:
          uVar19 = (uint)(byte)(&PTR_DAT_1107eae30)[param_5][param_4 & 0xffffffff];
        }
        else {
          uVar19 = uVar10 - 1;
          if (uVar14 <= uVar10 - 1) {
            uVar19 = uVar14;
          }
        }
      }
      else {
        if (bVar6 != 2) goto LAB_104c191c0;
        uVar19 = uVar14 >> (ulong)(bVar5 + 2 & 0x1f);
      }
      *(undefined **)((long)register0x00000008 + -0x4080) =
           (&PTR_DAT_1107eacf8)[(ulong)bVar5 * 4 + (ulong)bVar6];
      puVar16 = (&PTR_DAT_1107eacf8)[(ulong)bVar7 * 4 + (ulong)bVar8];
      *(ulong *)((long)register0x00000008 + -0x40b8) = uVar15;
      *(undefined **)((long)register0x00000008 + -0x40b0) = puVar16;
      *(uint *)((long)register0x00000008 + -0x40cc) = uVar19;
      *(ulong *)((long)register0x00000008 + -0x4078) = (ulong)(uVar19 + 1);
      unaff_x26 = uVar15 * 2;
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x4070);
      *(ulong *)((long)register0x00000008 + -0x40c8) = (ulong)bVar4;
      *(ulong *)((long)register0x00000008 + -0x40c0) = (ulong)uVar2;
      *(ulong *)((long)register0x00000008 + -0x4088) = (ulong)bVar4 << 4;
      unaff_x27 = 0xb5;
      unaff_x28 = (ulong)uVar2 << 2;
      *(short **)((long)register0x00000008 + -0x40a8) = param_3;
      psVar23 = param_3;
      for (lVar24 = 0; lVar24 != *(long *)((long)register0x00000008 + -0x4078); lVar24 = lVar24 + 1)
      {
        lVar20 = 0;
        psVar17 = psVar23;
        if (bVar11 || bVar12) {
          for (; unaff_x28 != lVar20; lVar20 = lVar20 + 4) {
            *(int *)(unaff_x24 + lVar20) = *psVar17 * 0xb5 + 0x80 >> 8;
            psVar17 = psVar17 + uVar15;
          }
        }
        else {
          for (; unaff_x28 != lVar20; lVar20 = lVar20 + 4) {
            *(int *)(unaff_x24 + lVar20) = (int)*psVar17;
            psVar17 = psVar17 + uVar15;
          }
        }
        param_3 = (short *)0xffff8000;
        param_4 = 0x7fff;
        (**(code **)((long)register0x00000008 + -0x4080))(unaff_x24,1);
        unaff_x24 = unaff_x24 + *(long *)((long)register0x00000008 + -0x4088);
        psVar23 = psVar23 + 1;
      }
      iVar22 = (int)*(undefined8 *)((long)register0x00000008 + -0x40b8);
      if ((int)*(undefined8 *)((long)register0x00000008 + -0x4078) < iVar22) {
        _bzero(unaff_x24,
               (long)(int)*(undefined8 *)((long)register0x00000008 + -0x40c8) *
               (long)(int)(iVar22 + ~*(uint *)((long)register0x00000008 + -0x40cc)) * 0x10);
      }
      param_2 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x40c0) * iVar22 * 2)
      ;
      puVar13 = *(undefined1 **)((long)register0x00000008 + -0x40a8);
      _bzero();
      iVar3 = *(int *)((long)register0x00000008 + -0x409c);
      uVar10 = *(uint *)((long)register0x00000008 + -0x4098);
      unaff_x23 = *(code **)((long)register0x00000008 + -0x40b0);
      for (lVar24 = 0; (ulong)(iVar22 * uVar9) << 2 != lVar24; lVar24 = lVar24 + 4) {
        iVar1 = *(int *)((long)register0x00000008 + lVar24 + -0x4070) + iVar3 >> (uVar10 & 0x1f);
        if (iVar1 < -0x7fff) {
          iVar1 = -0x8000;
        }
        if (0x7ffe < iVar1) {
          iVar1 = 0x7fff;
        }
        *(int *)((long)register0x00000008 + lVar24 + -0x4070) = iVar1;
      }
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x4070);
      for (uVar15 = unaff_x21; uVar15 != 0; uVar15 = uVar15 - 1) {
        param_3 = (short *)0xffff8000;
        param_4 = 0x7fff;
        puVar13 = unaff_x22;
        param_2 = unaff_x21;
        (*unaff_x23)();
        unaff_x22 = unaff_x22 + 4;
      }
      lVar24 = *(long *)((long)register0x00000008 + -0x4090);
      uVar21 = (ulong)*(uint *)((long)register0x00000008 + -0x4094);
      for (uVar15 = 0; unaff_x19 = 0, unaff_x20 = param_1, (int)uVar15 != (int)uVar21;
          uVar15 = (ulong)((int)uVar15 + 1)) {
        uVar18 = 0;
        while (unaff_x21 != uVar18) {
          func_0x000104c19534();
          uVar15 = extraout_x8_00;
          uVar18 = extraout_x11_00;
          lVar24 = extraout_x14;
          uVar21 = extraout_x15_00;
        }
        param_1 = param_1 + lVar24;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return;
    }
    unaff_x30 = FUN_104c193e8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40d0);
    param_1 = puVar13;
  } while( true );
}



/* Entry: 104c1954c; end: 104c1a6a7;  */

void FUN_104c1954c(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  uint extraout_w13;
  uint extraout_w13_00;
  uint uVar13;
  uint uVar14;
  
  uVar13 = *(uint *)(*(long *)(param_1 + 0xcb8) + 0x18);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0xec);
  uVar14 = *(uint *)(*(long *)(param_1 + 0x18) + 0xf0);
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = 8;
  }
  iVar2 = param_3;
  if (uVar13 < 2) {
    iVar2 = 0;
  }
  lVar12 = *(long *)(param_1 + 8);
  bVar6 = *(byte *)(lVar12 + 0x188);
  uVar8 = (4 << (ulong)(bVar6 & 0x1f)) * iVar2;
  uVar4 = *(uint *)(param_1 + 0x14d8);
  if ((*(char *)(lVar12 + 0x19e) != '\0') || ((uVar4 & 1) != 0)) {
    iVar5 = *(int *)(param_1 + 0x874);
    iVar7 = *(int *)(param_1 + 0xd78) << 2;
    uVar1 = bVar6 + 6;
    iVar2 = param_3 + 1 << (ulong)(uVar1 & 0x1f);
    if (iVar5 + -1 <= iVar2) {
      iVar2 = iVar5 + -1;
    }
    iVar9 = (param_3 << (ulong)(uVar1 & 0x1f)) - uVar11;
    if (((uVar4 & 1) != 0) || (uVar3 == uVar14)) {
      func_0x000104c198b8(param_1,*(long *)(param_1 + 0x1480) +
                                  *(long *)(param_1 + 0x970) * (long)(int)uVar8,
                          *(long *)(param_1 + 0x970),
                          *param_2 - *(long *)(param_1 + 0x860) * (ulong)uVar11,
                          *(long *)(param_1 + 0x860),0,bVar6,iVar9,iVar2,iVar7,iVar5,0x100000000);
      lVar12 = *(long *)(param_1 + 8);
    }
    if (1 < uVar13 && uVar3 != uVar14) {
      lVar10 = *(long *)(param_1 + 0x860);
      func_0x000104c198b8(param_1,*(long *)(param_1 + 0x1468) + lVar10 * (param_3 << 2),lVar10,
                          *param_2 - lVar10 * (ulong)uVar11,lVar10,0,*(undefined1 *)(lVar12 + 0x188)
                          ,iVar9,iVar2,iVar7,iVar5,0);
      lVar12 = *(long *)(param_1 + 8);
    }
  }
  if (((*(char *)(lVar12 + 0x19e) != '\0') || ((uVar4 & 6) != 0)) &&
     (*(int *)(param_1 + 0x878) != 0)) {
    if ((*(char *)(lVar12 + 0x19e) != '\0') || ((uVar4 >> 1 & 1) != 0)) {
      if (((uVar4 >> 1 & 1) != 0) || (uVar3 == uVar14)) {
        func_0x000104c1a738();
        func_0x000104c1a6a8();
        func_0x000104c1a6dc();
        func_0x000104c198b8();
        func_0x000104c1a724();
        lVar12 = extraout_x8;
        uVar13 = extraout_w13;
      }
      if (1 < uVar13 && uVar3 != uVar14) {
        func_0x000104c1a6a8();
        func_0x000104c1a6dc();
        func_0x000104c198b8();
        func_0x000104c1a724();
        lVar12 = extraout_x8_00;
        uVar13 = extraout_w13_00;
      }
    }
    if ((*(char *)(lVar12 + 0x19e) != '\0') || ((uVar4 >> 2 & 1) != 0)) {
      if (((uVar4 >> 2 & 1) != 0) || (uVar3 == uVar14)) {
        func_0x000104c1a738();
        func_0x000104c1a6a8();
        func_0x000104c1a6dc();
        func_0x000104c198b8();
        uVar13 = uVar14;
        uVar14 = uVar8;
      }
      if (1 < uVar13 && uVar3 != uVar14) {
        func_0x000104c1a6a8();
        func_0x000104c198b8();
      }
    }
  }
  return;
}



/* Entry: 104c1a6a8; end: 104c1a75f;  */

void FUN_104c1a6a8(void)

{
  return;
}



/* Entry: 104c1a760; end: 104c1b567;  */

void FUN_104c1a760(long param_1,long param_2,long param_3,undefined1 *param_4,uint param_5,
                  uint param_6,int param_7,int param_8,ulong param_9,uint param_10,int param_11,
                  ushort *param_12,ushort *param_13,undefined8 *param_14)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  long lVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  uint uVar21;
  ushort *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 unaff_x30;
  undefined8 *in_stack_00000060;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  
  lVar17 = (param_9 & 0xffffffff) * 4;
  bVar4 = (&UNK_10dd74d48)[lVar17];
  uVar11 = param_7 - param_5;
  if ((uint)bVar4 <= param_7 - param_5) {
    uVar11 = (uint)bVar4;
  }
  uVar12 = (ulong)uVar11;
  bVar5 = (&UNK_10dd74d49)[lVar17];
  uVar29 = param_8 - param_6;
  if ((uint)bVar5 <= param_8 - param_6) {
    uVar29 = (uint)bVar5;
  }
  uVar32 = (ulong)uVar29;
  uVar33 = (ulong)(param_5 & 0x1f);
  uVar2 = param_6 & 0x1f;
  if ((uVar11 != 0) && (uVar29 != 0)) {
    puVar19 = (undefined1 *)(param_3 * (int)param_6 * 4 + (long)(int)param_5 * 4 + param_2 + 1);
    for (uVar21 = 0; uVar20 = uVar12, puVar24 = puVar19, uVar21 != uVar29; uVar21 = uVar21 + 1) {
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        puVar24[-1] = *param_4;
        *puVar24 = param_4[0x10];
        puVar24 = puVar24 + 4;
      }
      puVar19 = puVar19 + param_3 * 4;
    }
    uVar20 = 0;
    lVar17 = (param_9 >> 0x20) * 8;
    bVar6 = (&UNK_10dd74da3)[lVar17];
    uVar21 = (uint)(byte)(&UNK_10dd74da2)[lVar17];
    if (1 < uVar21) {
      uVar21 = 2;
    }
    uVar30 = (ulong)uVar21;
    uVar31 = 1 << (ulong)uVar2;
    uVar18 = uVar31;
    for (; uVar32 != uVar20; uVar20 = uVar20 + 1) {
      bVar9 = (uVar18 & 0xffff0000) != 0;
      uVar26 = (ulong)bVar9;
      uVar23 = 0x10;
      if (!bVar9) {
        uVar23 = 0;
      }
      uVar28 = uVar21;
      if (*(byte *)((long)param_13 + uVar20) <= uVar21) {
        uVar28 = (uint)*(byte *)((long)param_13 + uVar20);
      }
      lVar1 = param_1 + uVar33 * 0xc + (ulong)uVar28 * 4;
      *(ushort *)(lVar1 + uVar26 * 2) =
           *(ushort *)(lVar1 + uVar26 * 2) | (ushort)(uVar18 >> (ulong)uVar23);
      uVar18 = uVar18 << 1;
    }
    uVar20 = 0;
    uVar18 = (uint)bVar6;
    if (1 < uVar18) {
      uVar18 = 2;
    }
    uVar26 = (ulong)uVar18;
    uVar23 = 1 << uVar33;
    uVar28 = uVar23;
    for (; uVar12 != uVar20; uVar20 = uVar20 + 1) {
      bVar9 = (uVar28 & 0xffff0000) != 0;
      uVar27 = (ulong)bVar9;
      uVar25 = 0x10;
      if (!bVar9) {
        uVar25 = 0;
      }
      uVar13 = uVar18;
      if (*(byte *)((long)param_12 + uVar20) <= uVar18) {
        uVar13 = (uint)*(byte *)((long)param_12 + uVar20);
      }
      lVar1 = param_1 + 0x180 + (ulong)uVar2 * 0xc + (ulong)uVar13 * 4;
      *(ushort *)(lVar1 + uVar27 * 2) =
           *(ushort *)(lVar1 + uVar27 * 2) | (ushort)(uVar28 >> (ulong)uVar25);
      uVar28 = uVar28 << 1;
    }
    uVar20 = (ulong)(byte)(&UNK_10dd74da0)[lVar17];
    uVar31 = (uVar31 << (uVar32 & 0x3f)) - uVar31;
    puVar22 = (ushort *)((uVar20 + uVar33) * 0xc + uVar30 * 4 + param_1 + 2);
    for (uVar33 = uVar20; uVar33 < uVar12; uVar33 = uVar33 + uVar20) {
      if ((uVar31 & 0xffff) != 0) {
        puVar22[-1] = puVar22[-1] | (ushort)uVar31;
      }
      if (0xffff < uVar31) {
        *puVar22 = *puVar22 | (ushort)(uVar31 >> 0x10);
      }
      puVar22 = puVar22 + uVar20 * 6;
    }
    uVar33 = (ulong)(byte)(&UNK_10dd74da1)[lVar17];
    uVar23 = (uVar23 << (uVar12 & 0x3f)) - uVar23;
    puVar22 = (ushort *)((uVar26 & 0x3f) * 4 + (uVar33 + uVar2) * 0xc + param_1 + 0x182);
    for (uVar12 = uVar33; uVar12 < uVar32; uVar12 = uVar12 + uVar33) {
      if ((uVar23 & 0xffff) != 0) {
        puVar22[-1] = puVar22[-1] | (ushort)uVar23;
      }
      if (0xffff < uVar23) {
        *puVar22 = *puVar22 | (ushort)(uVar23 >> 0x10);
      }
      puVar22 = puVar22 + uVar33 * 6;
    }
    switch(uVar11) {
    case 1:
      *(char *)param_12 = (char)uVar18;
      break;
    case 2:
      *param_12 = (ushort)uVar18 | (ushort)(uVar18 << 8);
      break;
    case 3:
    case 5:
    case 6:
    case 7:
LAB_104c1aa74:
      _memset();
      break;
    case 4:
      *(uint *)param_12 = uVar18 * 0x1010101;
      break;
    case 8:
      *(ulong *)param_12 = uVar26 * 0x101010101010101;
      break;
    default:
      if (uVar11 == 0x10) {
        *(ulong *)param_12 = uVar26 * 0x101010101010101;
        *(ulong *)(param_12 + 4) = uVar26 * 0x101010101010101;
      }
      else {
        if (uVar11 != 0x20) goto LAB_104c1aa74;
        lVar17 = uVar26 * 0x101010101010101;
        *(long *)(param_12 + 4) = lVar17;
        *(long *)param_12 = lVar17;
        *(long *)(param_12 + 0xc) = lVar17;
        *(long *)(param_12 + 8) = lVar17;
      }
    }
    switch(uVar29) {
    case 1:
      *(char *)param_13 = (char)uVar21;
      break;
    case 2:
      *param_13 = (ushort)uVar21 | (ushort)(uVar21 << 8);
      break;
    case 3:
    case 5:
    case 6:
    case 7:
LAB_104c1ab1c:
      _memset(param_13,uVar30,uVar32);
      break;
    case 4:
      *(uint *)param_13 = uVar21 * 0x1010101;
      break;
    case 8:
      *(ulong *)param_13 = uVar30 * 0x101010101010101;
      break;
    default:
      if (uVar29 == 0x10) {
        *(ulong *)param_13 = uVar30 * 0x101010101010101;
        *(ulong *)(param_13 + 4) = uVar30 * 0x101010101010101;
      }
      else {
        if (uVar29 != 0x20) goto LAB_104c1ab1c;
        lVar17 = uVar30 * 0x101010101010101;
        *(long *)(param_13 + 4) = lVar17;
        *(long *)param_13 = lVar17;
        *(long *)(param_13 + 0xc) = lVar17;
        *(long *)(param_13 + 8) = lVar17;
      }
    }
  }
  uVar11 = (uint)bVar4;
  uVar29 = (uint)bVar5;
  uVar12 = (ulong)param_10;
  if (param_14 == (undefined8 *)0x0) {
    return;
  }
  bVar9 = param_11 != 3;
  if (bVar9) {
    param_7 = param_7 + 1;
  }
  if (bVar9) {
    uVar11 = uVar11 + 1;
  }
  uVar21 = (param_7 >> bVar9) - ((int)param_5 >> bVar9);
  if ((int)(uVar11 >> (ulong)bVar9) <= (int)uVar21) {
    uVar21 = uVar11 >> (ulong)bVar9;
  }
  uVar32 = (ulong)uVar21;
  bVar10 = param_11 == 1;
  if (bVar10) {
    param_8 = param_8 + 1;
  }
  if (bVar10) {
    uVar29 = uVar29 + 1;
  }
  uVar11 = (param_8 >> bVar10) - ((int)param_6 >> bVar10);
  if ((int)(uVar29 >> (ulong)bVar10) <= (int)uVar11) {
    uVar11 = uVar29 >> (ulong)bVar10;
  }
  uVar33 = (ulong)uVar11;
  if (uVar21 == 0) {
    return;
  }
  if (uVar11 == 0) {
    return;
  }
  puVar19 = (undefined1 *)
            (param_3 * ((int)param_6 >> bVar10) * 4 + (long)((int)param_5 >> bVar9) * 4 + param_2 +
            3);
  for (uVar29 = 0; uVar20 = uVar32, puVar24 = puVar19, uVar29 != uVar11; uVar29 = uVar29 + 1) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      puVar24[-1] = param_4[0x20];
      *puVar24 = param_4[0x30];
      puVar24 = puVar24 + 4;
    }
    puVar19 = puVar19 + param_3 * 4;
  }
  uVar30 = (ulong)((param_5 & 0x1f) >> (ulong)bVar9);
  uVar20 = (ulong)(uVar2 >> (ulong)bVar10);
  param_1 = param_1 + 0x300;
  iVar14 = 0;
  func_0x000104c1bacc(unaff_x30);
  lVar17 = (uVar12 & 0xffffffff) * 8;
  uVar21 = 0x10 >> (ulong)(in_stack_0000006c & 0x1f);
  cVar7 = (&UNK_10dd74da2)[lVar17];
  uVar11 = 1 << (ulong)(uVar21 & 0x1f);
  uVar29 = 1 << (ulong)((uint)uVar20 & 0x1f);
  cVar8 = (&UNK_10dd74da3)[lVar17];
  uVar26 = uVar33 & 0xffffffff;
  uVar2 = uVar29;
  for (uVar12 = 0; uVar26 != uVar12; uVar12 = uVar12 + 1) {
    uVar31 = (uint)(uVar11 <= uVar2);
    bVar4 = cVar7 != '\0';
    if (*(byte *)((long)in_stack_00000060 + uVar12) <= (cVar7 != '\0')) {
      bVar4 = *(byte *)((long)in_stack_00000060 + uVar12);
    }
    lVar1 = param_1 + (uVar30 & 0xffffffff) * 8 + (ulong)bVar4 * 4;
    *(ushort *)(lVar1 + (ulong)(uVar11 <= uVar2) * 2) =
         *(ushort *)(lVar1 + (ulong)uVar31 * 2) |
         (ushort)(uVar2 >> (ulong)(uVar31 << (ulong)(4 - in_stack_0000006c & 0x1f) & 0x1f));
    uVar2 = uVar2 << 1;
  }
  uVar23 = 0x10 >> (ulong)(in_stack_00000068 & 0x1f);
  uVar2 = 1 << (ulong)(uVar23 & 0x1f);
  uVar31 = 1 << (ulong)((uint)uVar30 & 0x1f);
  uVar18 = uVar31;
  for (uVar12 = 0; (uVar32 & 0xffffffff) != uVar12; uVar12 = uVar12 + 1) {
    uVar28 = (uint)(uVar2 <= uVar18);
    bVar4 = cVar8 != '\0';
    if (*(byte *)((long)param_14 + uVar12) <= (cVar8 != '\0')) {
      bVar4 = *(byte *)((long)param_14 + uVar12);
    }
    lVar1 = param_1 + 0x100 + (uVar20 & 0xffffffff) * 8 + (ulong)bVar4 * 4;
    *(ushort *)(lVar1 + (ulong)(uVar2 <= uVar18) * 2) =
         *(ushort *)(lVar1 + (ulong)uVar28 * 2) |
         (ushort)(uVar18 >> (ulong)(uVar28 << (ulong)(4 - in_stack_00000068 & 0x1f) & 0x1f));
    uVar18 = uVar18 << 1;
  }
  if (iVar14 == 0) {
    uVar27 = (ulong)(byte)(&UNK_10dd74da0)[lVar17];
    uVar29 = (uVar29 << (uVar33 & 0x3f)) - uVar29;
    uVar11 = uVar11 - 1 & uVar29;
    uVar29 = uVar29 >> (ulong)(uVar21 & 0x1f);
    puVar22 = (ushort *)
              (((ulong)(cVar7 != '\0') << 2 | (uVar27 + (uVar30 & 0xffffffff)) * 8) + param_1 + 2);
    for (uVar12 = uVar27; uVar12 < (uVar32 & 0xffffffff); uVar12 = uVar12 + uVar27) {
      if (uVar11 != 0) {
        puVar22[-1] = puVar22[-1] | (ushort)uVar11;
      }
      if (uVar29 != 0) {
        *puVar22 = *puVar22 | (ushort)uVar29;
      }
      puVar22 = puVar22 + uVar27 * 4;
    }
    uVar31 = (uVar31 << (uVar32 & 0x3f)) - uVar31;
    uVar12 = (ulong)(byte)(&UNK_10dd74da1)[lVar17];
    uVar11 = uVar2 - 1 & uVar31;
    uVar31 = uVar31 >> (ulong)(uVar23 & 0x1f);
    lVar17 = 0x106;
    if (cVar8 == '\0') {
      lVar17 = 0x102;
    }
    param_1 = param_1 + (uVar12 + (uVar20 & 0xffffffff)) * 8;
    uVar30 = (ulong)(cVar8 != '\0') << 2 | 0x100;
    for (uVar20 = uVar12; uVar20 < uVar26; uVar20 = uVar20 + uVar12) {
      if (uVar11 != 0) {
        *(ushort *)(param_1 + uVar30) = *(ushort *)(param_1 + uVar30) | (ushort)uVar11;
      }
      if (uVar31 != 0) {
        *(ushort *)(param_1 + lVar17) = *(ushort *)(param_1 + lVar17) | (ushort)uVar31;
      }
      param_1 = param_1 + uVar12 * 8;
    }
  }
  iVar14 = (int)uVar32;
  switch(iVar14) {
  case 1:
    *(bool *)param_14 = cVar8 != '\0';
    break;
  case 2:
    uVar15 = 0x101;
    if (cVar8 == '\0') {
      uVar15 = 0;
    }
    *(undefined2 *)param_14 = uVar15;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
LAB_104c1af10:
    _memset(param_14,cVar8 != '\0');
    break;
  case 4:
    uVar16 = 0x1010101;
    if (cVar8 == '\0') {
      uVar16 = 0;
    }
    *(undefined4 *)param_14 = uVar16;
    break;
  case 8:
    uVar3 = 0x101010101010101;
    if (cVar8 == '\0') {
      uVar3 = 0;
    }
    *param_14 = uVar3;
    break;
  default:
    if (iVar14 == 0x10) {
      uVar3 = 0x101010101010101;
      if (cVar8 == '\0') {
        uVar3 = 0;
      }
      *param_14 = uVar3;
      param_14[1] = uVar3;
    }
    else {
      if (iVar14 != 0x20) goto LAB_104c1af10;
      uVar3 = 0x101010101010101;
      if (cVar8 == '\0') {
        uVar3 = 0;
      }
      param_14[1] = uVar3;
      *param_14 = uVar3;
      param_14[3] = uVar3;
      param_14[2] = uVar3;
    }
  }
  iVar14 = (int)uVar33;
  switch(iVar14) {
  case 1:
    *(bool *)in_stack_00000060 = cVar7 != '\0';
    break;
  case 2:
    uVar15 = 0x101;
    if (cVar7 == '\0') {
      uVar15 = 0;
    }
    *(undefined2 *)in_stack_00000060 = uVar15;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
LAB_104c1afcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)(in_stack_00000060,cVar7 != '\0',uVar26);
    return;
  case 4:
    uVar16 = 0x1010101;
    if (cVar7 == '\0') {
      uVar16 = 0;
    }
    *(undefined4 *)in_stack_00000060 = uVar16;
    break;
  case 8:
    uVar3 = 0x101010101010101;
    if (cVar7 == '\0') {
      uVar3 = 0;
    }
    *in_stack_00000060 = uVar3;
    break;
  default:
    if (iVar14 == 0x10) {
      uVar3 = 0x101010101010101;
      if (cVar7 == '\0') {
        uVar3 = 0;
      }
      *in_stack_00000060 = uVar3;
      in_stack_00000060[1] = uVar3;
    }
    else {
      if (iVar14 != 0x20) goto LAB_104c1afcc;
      uVar3 = 0x101010101010101;
      if (cVar7 == '\0') {
        uVar3 = 0;
      }
      in_stack_00000060[1] = uVar3;
      *in_stack_00000060 = uVar3;
      in_stack_00000060[3] = uVar3;
      in_stack_00000060[2] = uVar3;
    }
  }
  return;
}



/* Entry: 104c1b568; end: 104c1b5db;  */

void FUN_104c1b568(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  
  uVar2 = 9 - param_2;
  cVar4 = '\x04';
  for (lVar3 = 0; lVar3 != 0x40; lVar3 = lVar3 + 1) {
    uVar1 = (uint)lVar3 >> (ulong)(param_2 + 3U >> 2 & 0x1f);
    if ((int)uVar2 <= (int)uVar1) {
      uVar1 = uVar2;
    }
    if (param_2 < 1) {
      uVar1 = (uint)lVar3;
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    ((char *)(param_1 + lVar3))[0x40] = (char)uVar1;
    *(char *)(param_1 + lVar3) = (char)uVar1 + cVar4;
    cVar4 = cVar4 + '\x02';
  }
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  *(long *)(param_1 + 0x80) = (long)((ulong)(param_2 + 3U) << 0x20) >> 0x22;
  *(long *)(param_1 + 0x88) = (long)(int)uVar1;
  return;
}



/* Entry: 104c1b5dc; end: 104c1b72f;  */

void FUN_104c1b5dc(long param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  func_0x000104c1bacc();
  uVar8 = 8;
  if (*(char *)(param_2 + 0x2d2) == '\0') {
    uVar8 = 1;
  }
  uVar9 = (ulong)uVar8;
  if ((*(char *)(param_2 + 0x33e) == '\0') && (*(char *)(param_2 + 0x33f) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1,uVar8 << 6);
    return;
  }
  lVar3 = 0;
  if (*(char *)(param_2 + 0x342) != '\0') {
    lVar3 = param_2 + 0x344;
  }
  pcVar1 = (char *)(param_2 + 0x2db);
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    cVar5 = *(char *)(param_2 + 0x2d2);
    if (cVar5 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = pcVar1[-3];
    }
    FUN_104c1b730(param_1,*(undefined1 *)(param_2 + 0x33e),(long)*param_3,cVar6,lVar3);
    pcVar2 = param_3;
    if (*(char *)(param_2 + 0x33c) != '\0') {
      pcVar2 = param_3 + 1;
    }
    if (cVar5 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = pcVar1[-2];
    }
    FUN_104c1b730(param_1 + 0x10,*(undefined1 *)(param_2 + 0x33f),(long)*pcVar2,cVar6,lVar3);
    lVar4 = 0;
    if (*(char *)(param_2 + 0x33c) != '\0') {
      lVar4 = 2;
    }
    if (cVar5 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = pcVar1[-1];
    }
    func_0x000104c1b7ec(param_1 + 0x20,*(undefined1 *)(param_2 + 0x340),(long)param_3[lVar4],cVar6,
                        lVar3);
    lVar4 = 0;
    if (*(char *)(param_2 + 0x33c) != '\0') {
      lVar4 = 3;
    }
    if (cVar5 == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = (long)*pcVar1;
    }
    func_0x000104c1b7ec(param_1 + 0x30,*(undefined1 *)(param_2 + 0x341),(long)param_3[lVar4],lVar7,
                        lVar3);
    param_1 = param_1 + 0x40;
    pcVar1 = pcVar1 + 10;
  }
  return;
}



/* Entry: 104c1b730; end: 104c1b7fb;  */

void FUN_104c1b730(long *param_1,int param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3 + param_2 & (param_3 + param_2 >> 0x1f ^ 0xffffffffU);
  if (0x3e < (int)uVar2) {
    uVar2 = 0x3f;
  }
  uVar2 = uVar2 + param_4;
  uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (0x3e < (int)uVar3) {
    uVar3 = 0x3f;
  }
  if (param_5 != 0) {
    uVar1 = ((int)*(char *)(param_5 + 2) << (0x1f < (int)uVar2)) + uVar3;
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (0x3e < (int)uVar1) {
      uVar1 = 0x3f;
    }
    *(char *)((long)param_1 + 1) = (char)uVar1;
    *(char *)param_1 = (char)uVar1;
    for (lVar4 = 1; param_1 = (long *)((long)param_1 + 2), lVar4 != 8; lVar4 = lVar4 + 1) {
      for (lVar5 = 0; lVar5 != 2; lVar5 = lVar5 + 1) {
        uVar1 = ((int)((char *)(param_5 + 2))[lVar4] + (int)*(char *)(param_5 + lVar5) <<
                (ulong)(0x1f < (int)uVar2)) + uVar3;
        uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        if (0x3e < (int)uVar1) {
          uVar1 = 0x3f;
        }
        *(char *)((long)param_1 + lVar5) = (char)uVar1;
      }
    }
    return;
  }
  *param_1 = (ulong)uVar3 * 0x101010101010101;
  param_1[1] = (ulong)uVar3 * 0x101010101010101;
  return;
}



/* Entry: 104c1b7fc; end: 104c1ba73;  */

/* WARNING: Switch with 1 destination removed at 0x000104c1b958 */

void FUN_104c1b7fc(long *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int iVar9;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  byte extraout_w10;
  byte extraout_w10_00;
  byte bVar10;
  byte extraout_w10_01;
  byte extraout_w10_02;
  byte extraout_w10_03;
  byte extraout_w10_04;
  byte extraout_w10_05;
  byte extraout_w10_06;
  ulong uVar11;
  int extraout_w11;
  uint extraout_w11_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong uVar12;
  ulong extraout_x11_01;
  long extraout_x11_02;
  long lVar13;
  long extraout_x11_03;
  ulong extraout_x11_04;
  int extraout_w12;
  uint extraout_w12_00;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  ulong extraout_x12_01;
  long extraout_x12_02;
  long lVar14;
  long extraout_x12_03;
  ulong extraout_x12_04;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long lVar15;
  long extraout_x13_04;
  long extraout_x13_05;
  long extraout_x13_06;
  long *extraout_x15;
  long *extraout_x15_00;
  long *extraout_x15_01;
  long *extraout_x15_02;
  
  func_0x000104c1bacc();
  param_3 = param_3 & 0xffffffff;
  while( true ) {
    lVar14 = (param_2 & 0xffffffff) * 8;
    if ((1 < param_3) || ((int)param_2 == 0)) break;
    if ((*(ushort *)(param_6 + param_3 * 2) >> (ulong)((int)param_5 + (int)param_4 * 4 & 0x1f) & 1)
        == 0) break;
    param_2 = (ulong)(byte)(&UNK_10dd74da6)[lVar14];
    bVar10 = (&UNK_10dd74da0)[lVar14];
    bVar1 = (&UNK_10dd74da1)[lVar14];
    uVar2 = (int)param_4 << 1;
    uVar7 = (int)param_5 << 1;
    lVar14 = param_3 + 1;
    func_0x000104c1ba9c(param_1,param_2,lVar14);
    if (bVar1 <= bVar10) {
      FUN_104c1b7fc((undefined1 *)((long)param_1 + (ulong)(bVar10 >> 1)),param_2,lVar14,uVar2,
                    uVar7 | 1,param_6);
    }
    if (bVar1 < bVar10) {
      return;
    }
    param_4 = (ulong)(uVar2 | 1);
    func_0x000104c1ba9c(param_1 + (ulong)(bVar1 >> 1) * 4,param_2,lVar14);
    if (bVar10 < bVar1) {
      return;
    }
    param_1 = (long *)((long)(param_1 + (ulong)(bVar1 >> 1) * 4) + (ulong)(bVar10 >> 1));
    param_5 = (ulong)(uVar7 | 1);
    param_3 = param_3 + 1;
  }
  uVar2 = (uint)(byte)(&UNK_10dd74da2)[lVar14];
  if (1 < (byte)(&UNK_10dd74da2)[lVar14]) {
    uVar2 = 2;
  }
  uVar7 = (uint)(byte)(&UNK_10dd74da3)[lVar14];
  if (1 < uVar7) {
    uVar7 = 2;
  }
  bVar10 = (&UNK_10dd74da0)[lVar14];
  switch(bVar10) {
  case 1:
    func_0x000104c1baac();
    uVar3 = extraout_x8;
    uVar4 = extraout_x11;
    uVar5 = extraout_x12;
    plVar6 = param_1;
    iVar9 = extraout_w9;
    bVar10 = extraout_w10;
    lVar14 = extraout_x13;
    while (uVar8 = (uint)uVar3, lVar14 != 0) {
      *(char *)plVar6 = (char)uVar5;
      *(char *)(plVar6 + 0x100) = (char)uVar4;
      func_0x000104c1ba8c();
      uVar3 = extraout_x8_00;
      uVar4 = extraout_x11_00;
      uVar5 = extraout_x12_00;
      plVar6 = extraout_x15;
      iVar9 = extraout_w9_00;
      bVar10 = extraout_w10_00;
      lVar14 = extraout_x13_00;
    }
    break;
  case 2:
    func_0x000104c1baac();
    uVar11 = (ulong)(extraout_w12_00 | extraout_w12_00 << 8);
    uVar12 = (ulong)(extraout_w11_00 | extraout_w11_00 << 8);
    plVar6 = param_1;
    iVar9 = extraout_w9_05;
    bVar10 = extraout_w10_05;
    uVar8 = extraout_w8_01;
    lVar14 = extraout_x13_05;
    while (lVar14 != 0) {
      *(short *)plVar6 = (short)uVar11;
      *(short *)(plVar6 + 0x100) = (short)uVar12;
      func_0x000104c1ba8c();
      uVar11 = extraout_x12_04;
      uVar12 = extraout_x11_04;
      plVar6 = extraout_x15_02;
      iVar9 = extraout_w9_06;
      bVar10 = extraout_w10_06;
      uVar8 = extraout_w8_02;
      lVar14 = extraout_x13_06;
    }
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto FUN_104c1ba74;
  case 4:
    func_0x000104c1baac();
    uVar11 = (ulong)(uint)(extraout_w12 * 0x1010101);
    uVar12 = (ulong)(uint)(extraout_w11 * 0x1010101);
    plVar6 = param_1;
    iVar9 = extraout_w9_01;
    bVar10 = extraout_w10_01;
    uVar8 = extraout_w8;
    lVar14 = extraout_x13_01;
    while (lVar14 != 0) {
      *(int *)plVar6 = (int)uVar11;
      *(int *)(plVar6 + 0x100) = (int)uVar12;
      func_0x000104c1ba8c();
      uVar11 = extraout_x12_01;
      uVar12 = extraout_x11_01;
      plVar6 = extraout_x15_00;
      iVar9 = extraout_w9_02;
      bVar10 = extraout_w10_02;
      uVar8 = extraout_w8_00;
      lVar14 = extraout_x13_02;
    }
    break;
  case 8:
    func_0x000104c1baac();
    lVar14 = extraout_x12_02 * 0x101010101010101;
    lVar13 = extraout_x11_02 * 0x101010101010101;
    uVar3 = extraout_x8_02;
    plVar6 = param_1;
    iVar9 = extraout_w9_03;
    bVar10 = extraout_w10_03;
    lVar15 = extraout_x13_03;
    while (uVar8 = (uint)uVar3, lVar15 != 0) {
      *plVar6 = lVar14;
      plVar6[0x100] = lVar13;
      func_0x000104c1ba8c();
      lVar14 = extraout_x12_03;
      lVar13 = extraout_x11_03;
      uVar3 = extraout_x8_03;
      plVar6 = extraout_x15_01;
      iVar9 = extraout_w9_04;
      bVar10 = extraout_w10_04;
      lVar15 = extraout_x13_04;
    }
    break;
  default:
    if (bVar10 != 0x10) {
      return;
    }
    bVar10 = (&UNK_10dd74da1)[lVar14];
    uVar8 = 0xf;
    iVar9 = 0x10;
    plVar6 = param_1;
    for (uVar11 = (ulong)bVar10; uVar11 != 0; uVar11 = uVar11 - 1) {
      *plVar6 = (ulong)uVar2 * 0x101010101010101;
      plVar6[1] = (ulong)uVar2 * 0x101010101010101;
      plVar6[0x100] = (ulong)uVar7 * 0x101010101010101;
      plVar6[0x101] = (ulong)uVar7 * 0x101010101010101;
      *(undefined1 *)(plVar6 + 0x80) = 0x10;
      plVar6 = plVar6 + 4;
    }
  }
  if (uVar8 < 8) {
                    /* WARNING (jumptable): Second-stage recovery error */
    *(byte *)(param_1 + 0x180) = bVar10;
  }
  else if (iVar9 == 0x10) {
    func_0x000104c1bab8();
    param_1[0x181] = extraout_x8_01;
  }
FUN_104c1ba74:
  return;
}



/* Entry: 104c1ba74; end: 104c1bae3;  */

void FUN_104c1ba74(void)

{
  return;
}



/* Entry: 104c1bae4; end: 104c1bb13;  */

undefined8 FUN_104c1bae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_18;
  
  puVar1 = &uStack_18;
  _posix_memalign(puVar1,param_2,param_1);
  if ((int)puVar1 != 0) {
    uStack_18 = 0;
  }
  return uStack_18;
}



/* Entry: 104c1bb14; end: 104c1bb8f;  */

void FUN_104c1bb14(long param_1,long *param_2)

{
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if (*param_2 != 0) {
      if (param_2[1] < 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0xf670) = 0;
    }
    if (*(long *)(param_1 + 0xa0) == 0) {
      FUN_104c06ee0((long *)(param_1 + 0xa0),param_2);
      FUN_104c1bb90();
      if ((int)param_1 == 0) {
        FUN_104c06fa4(param_2);
      }
    }
  }
  return;
}



/* Entry: 104c1bb90; end: 104c1bc27;  */

undefined4 FUN_104c1bb90(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 unaff_w21;
  
  lVar4 = param_1;
  func_0x000104c1c364();
  if ((int)lVar4 == 0) {
    do {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_104c1bbac;
      lVar4 = param_1;
      FUN_104c1ef0c(param_1,param_1 + 0xa0);
      if (lVar4 < 0) {
LAB_104c1bbe8:
        FUN_104c06fa4(param_1 + 0xa0);
      }
      else {
        lVar5 = *(long *)(param_1 + 0xa8) - lVar4;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + lVar4;
        *(long *)(param_1 + 0xa8) = lVar5;
        if (lVar5 == 0) goto LAB_104c1bbe8;
      }
      lVar5 = param_1;
      func_0x000104c1c364();
      bVar2 = (int)lVar5 != 0;
      uVar6 = (uint)((ulong)lVar4 >> 0x3f);
      if (bVar2) {
        uVar6 = 3;
      }
      uVar1 = (int)lVar4;
      if (bVar2 || -1 < lVar4) {
        uVar1 = unaff_w21;
      }
      unaff_w21 = uVar1;
    } while (uVar6 == 0);
    uVar3 = 0;
    if (uVar6 != 3) {
      uVar3 = uVar1;
    }
  }
  else {
LAB_104c1bbac:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 104c1bc28; end: 104c1becf;  */

long * FUN_104c1bc28(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    return (long *)0xffffffea;
  }
  lVar9 = param_1[0x1ece];
  *(undefined4 *)(param_1 + 0x1ece) = 1;
  plVar11 = param_1;
  FUN_104c1bb90();
  if ((int)plVar11 < 0) {
    return plVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x1ed6);
  if (uVar12 != 0) {
    *(undefined4 *)(param_1 + 0x1ed6) = 0;
    return (long *)(ulong)uVar12;
  }
  plVar11 = param_1;
  FUN_104c1bed0(param_1,(int)param_1[1] == 1);
  if ((int)plVar11 == 0) {
    if (*(uint *)(param_1 + 1) < 2) {
      return (long *)0xffffffdd;
    }
    if ((int)lVar9 == 0) {
      return (long *)0xffffffdd;
    }
    bVar4 = false;
    uVar12 = 0;
    plVar11 = param_1 + 0x7e;
    plVar1 = param_1 + 0x7f;
    do {
      uVar2 = *(uint *)(param_1 + 0x6a);
      lVar9 = *param_1 + (ulong)uVar2 * 0x1640;
      _pthread_mutex_lock(param_1 + 0x70);
      while (0 < *(int *)(lVar9 + 0xc34)) {
        _pthread_cond_wait(lVar9 + 0x1520,*(undefined8 *)(lVar9 + 0x1550));
      }
      lVar10 = param_1[0x69] + (ulong)uVar2 * 0x128;
      if ((*(long *)(lVar10 + 0x10) == 0) && (*(int *)(lVar9 + 0x15ac) == 0)) {
        if (bVar4) {
          func_0x000104c1c35c();
          break;
        }
        bVar4 = false;
        uVar8 = *(uint *)(param_1 + 1);
      }
      else {
        lVar5 = param_1[0x7e];
        if ((int)lVar5 + 1U < *(uint *)(param_1 + 1)) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)*plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        else {
          *(int *)plVar11 = 0;
        }
        do {
          if ((int)*plVar1 != (int)lVar5) {
            ClearExclusiveLocal();
            break;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar2 = *(uint *)((long)param_1 + 0x3f4);
        uVar8 = *(uint *)(param_1 + 1);
        if (uVar2 != 0 && uVar2 < uVar8) {
          *(uint *)((long)param_1 + 0x3f4) = uVar2 - 1;
        }
        bVar4 = true;
      }
      iVar6 = 0;
      if ((int)param_1[0x6a] + 1U != uVar8) {
        iVar6 = (int)param_1[0x6a] + 1;
      }
      *(int *)(param_1 + 0x6a) = iVar6;
      func_0x000104c1c35c();
      uVar2 = *(uint *)(lVar9 + 0x15a4);
      if (uVar2 != 0) {
        *(undefined4 *)(lVar9 + 0x15a4) = 0;
        FUN_104c06f20(param_1 + 0x1ed0,lVar10 + 0x48);
        func_0x000104c21ed8(lVar10);
        return (long *)(ulong)uVar2;
      }
      if (*(long *)(lVar10 + 0x10) != 0) {
        if (((*(int *)(lVar10 + 0x110) != 0) || (*(int *)((long)param_1 + 0xf664) != 0)) &&
           (*(int *)(*(long *)(lVar10 + 0x120) + 4) != -2)) {
          func_0x000104c21df0(param_1 + 0x1d,lVar10);
          *(uint *)(param_1 + 0x1ecf) = *(uint *)(param_1 + 0x1ecf) | *(uint *)(lVar10 + 0x118) & 3;
        }
        func_0x000104c21ed8(lVar10);
        plVar7 = param_1;
        func_0x000104c1c364();
        if ((int)plVar7 != 0) goto FUN_104c1bf74;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 1));
    plVar11 = param_1;
    FUN_104c1bed0(param_1,1);
    if ((int)plVar11 == 0) {
      return (long *)0xffffffdd;
    }
  }
FUN_104c1bf74:
  if (*(int *)((long)param_1 + 0xf654) == 0) {
    lVar9 = 0xe8;
    if ((int)param_1[0x1ecb] != 0) {
      lVar9 = 0x210;
    }
  }
  else {
    lVar9 = 0xe8;
  }
  lVar9 = (long)param_1 + lVar9;
  if ((int)param_1[0x1ec9] == 0) {
LAB_104c1c008:
    _memcpy(param_2,lVar9,0x110);
    _bzero(lVar9,0x110);
  }
  else {
    iVar6 = (int)*(undefined8 *)(lVar9 + 8);
    FUN_104c1c0a8();
    if (iVar6 == 0) goto LAB_104c1c008;
    plVar11 = param_1;
    FUN_104c21ca0(param_1,param_2,*(undefined4 *)(lVar9 + 0x38),lVar9);
    if ((int)plVar11 < 0) {
      func_0x000104c21e4c(param_2);
      goto LAB_104c1c028;
    }
    if (*(uint *)(param_1 + 3) < 2) {
      if (*(int *)(param_2 + 0x44) != 8) {
        _abort();
        if (((*(int *)((long)plVar11 + 4) == 0) && ((int)plVar11[5] == 0)) &&
           (*(int *)((long)plVar11 + 0x2c) == 0)) {
          if ((int)plVar11[0x1b] == 0) {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(int *)((long)plVar11 + 0x24) != 0);
        }
        return (long *)0x1;
      }
      FUN_104c131e8(param_1 + 0x19d3,param_2,lVar9);
    }
    else {
      FUN_104c2b3c8(param_1,param_2,lVar9);
    }
  }
  plVar11 = (long *)0x0;
LAB_104c1c028:
  func_0x000104c21ed8(lVar9);
  if (((*(int *)((long)param_1 + 0xf654) == 0) && ((int)param_1[0x1ecb] != 0)) &&
     (param_1[0x1f] != 0)) {
    func_0x000104c21e18(lVar9,param_1 + 0x1d);
  }
  return plVar11;
}



/* Entry: 104c1bed0; end: 104c1bf73;  */

bool FUN_104c1bed0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xf6b0) != 0) {
    return true;
  }
  if ((*(int *)(param_1 + 0xf654) == 0) && (*(uint *)(param_1 + 0xf658) != 0)) {
    if (*(long *)(param_1 + 0xf8) != 0) {
      if (*(long *)(param_1 + 0x220) != 0) {
        if (*(uint *)(param_1 + 0xf658) == (uint)*(byte *)(*(long *)(param_1 + 0x218) + 0xfa)) {
          return true;
        }
        if ((*(byte *)(param_1 + 0x200) >> 2 & 1) != 0) {
          return true;
        }
        func_0x000104c21ed8(param_1 + 0x210);
      }
      func_0x000104c21e18(param_1 + 0x210,param_1 + 0xe8);
      return false;
    }
    if ((param_2 != 0) && (*(long *)(param_1 + 0x220) != 0)) {
      return true;
    }
  }
  return *(long *)(param_1 + 0xf8) != 0;
}



/* Entry: 104c1bf74; end: 104c1c0a7;  */

ulong FUN_104c1bf74(ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xf654) == 0) {
    lVar2 = 0xe8;
    if (*(int *)(param_1 + 0xf658) != 0) {
      lVar2 = 0x210;
    }
  }
  else {
    lVar2 = 0xe8;
  }
  lVar2 = param_1 + lVar2;
  if (*(int *)(param_1 + 0xf648) == 0) {
LAB_104c1c008:
    _memcpy(param_2,lVar2,0x110);
    _bzero(lVar2,0x110);
  }
  else {
    iVar1 = (int)*(undefined8 *)(lVar2 + 8);
    FUN_104c1c0a8();
    if (iVar1 == 0) goto LAB_104c1c008;
    uVar3 = param_1;
    FUN_104c21ca0(param_1,param_2,*(undefined4 *)(lVar2 + 0x38),lVar2);
    if ((int)uVar3 < 0) {
      func_0x000104c21e4c(param_2);
      goto LAB_104c1c028;
    }
    if (*(uint *)(param_1 + 0x18) < 2) {
      if (*(int *)(param_2 + 0x44) != 8) {
        _abort();
        if (((*(int *)(uVar3 + 4) == 0) && (*(int *)(uVar3 + 0x28) == 0)) &&
           (*(int *)(uVar3 + 0x2c) == 0)) {
          if (*(int *)(uVar3 + 0xd8) == 0) {
            return 0;
          }
          return (ulong)(*(int *)(uVar3 + 0x24) != 0);
        }
        return 1;
      }
      FUN_104c131e8(param_1 + 0xce98,param_2,lVar2);
    }
    else {
      FUN_104c2b3c8(param_1,param_2,lVar2);
    }
  }
  uVar3 = 0;
LAB_104c1c028:
  func_0x000104c21ed8(lVar2);
  if (((*(int *)(param_1 + 0xf654) == 0) && (*(int *)(param_1 + 0xf658) != 0)) &&
     (*(long *)(param_1 + 0xf8) != 0)) {
    func_0x000104c21e18(lVar2,param_1 + 0xe8);
  }
  return uVar3;
}



/* Entry: 104c1c0a8; end: 104c1c0e7;  */

bool FUN_104c1c0a8(long param_1)

{
  if (((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0x28) == 0)) &&
     (*(int *)(param_1 + 0x2c) == 0)) {
    if (*(int *)(param_1 + 0xd8) != 0) {
      return *(int *)(param_1 + 0x24) != 0;
    }
    return false;
  }
  return true;
}



/* Entry: 104c1c0e8; end: 104c1c343;  */

void FUN_104c1c0e8(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  
  FUN_104c06fa4(param_1 + 0x14);
  if (param_1[0x1e] != 0) {
    func_0x000104c21ed8(param_1 + 0x1d);
  }
  if (param_1[0x43] != 0) {
    func_0x000104c21ed8(param_1 + 0x42);
  }
  *(undefined4 *)(param_1 + 0x1ece) = 0;
  *(undefined4 *)(param_1 + 0x1ed6) = 0;
  plVar5 = param_1 + 0x1862;
  plVar8 = param_1 + 0x19bb;
  lVar9 = 8;
  do {
    if (plVar5[1] != 0) {
      func_0x000104c21ed8(plVar5);
    }
    FUN_104c28f7c(plVar5 + 0x25);
    FUN_104c28f7c(plVar5 + 0x26);
    FUN_104c06e18(plVar8);
    plVar5 = plVar5 + 0x2b;
    plVar8 = plVar8 + 3;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  param_1[0xc] = 0;
  param_1[9] = 0;
  FUN_104c28f7c(param_1 + 8);
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_104c28f7c(param_1 + 0xf);
  FUN_104c28f7c(param_1 + 0xd);
  FUN_104c28f7c(param_1 + 0x11);
  FUN_104c06f74(param_1 + 0x1ed0);
  if (((int)param_1[1] != 1) || ((int)param_1[3] != 1)) {
    *(undefined4 *)param_1[0x68] = 1;
    if (1 < *(uint *)(param_1 + 3)) {
      _pthread_mutex_lock(param_1 + 0x70);
      for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 3); uVar6 = uVar6 + 1) {
        lVar9 = param_1[2] + uVar6 * 0x3f2c0;
        while (*(int *)(lVar9 + 0x3f298) == 0) {
          _pthread_cond_wait(lVar9 + 0x3f210,param_1 + 0x70);
        }
      }
      lVar9 = 0x15b8;
      for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 1); uVar6 = uVar6 + 1) {
        puVar1 = (undefined8 *)(*param_1 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        puVar1[2] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        lVar9 = lVar9 + 0x1640;
      }
      *(undefined4 *)(param_1 + 0x7e) = 0;
      *(uint *)((long)param_1 + 0x3f4) = *(uint *)(param_1 + 1);
      *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x3fc) = 0;
      func_0x000104c1c35c();
    }
    uVar3 = *(uint *)(param_1 + 1);
    if (1 < uVar3) {
      uVar4 = *(uint *)(param_1 + 0x6a);
      for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
        uVar2 = 0;
        if (uVar4 != uVar3) {
          uVar2 = uVar4;
        }
        lVar9 = *param_1 + (ulong)uVar2 * 0x1640;
        func_0x000104c0948c(lVar9,0xffffffff);
        *(undefined4 *)(lVar9 + 0xc34) = 0;
        *(undefined4 *)(lVar9 + 0x15a4) = 0;
        if (*(long *)(param_1[0x69] + (ulong)uVar2 * 0x128 + 8) != 0) {
          func_0x000104c21ed8();
        }
        uVar4 = uVar2 + 1;
        uVar3 = *(uint *)(param_1 + 1);
      }
      *(undefined4 *)(param_1 + 0x6a) = 0;
    }
    *(undefined4 *)param_1[0x68] = 0;
  }
  return;
}



/* Entry: 104c1c344; end: 104c1c36b;  */

void FUN_104c1c344(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0x50;
  _malloc();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    _pthread_mutex_init(lVar1,0);
    if ((int)lVar2 == 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 1;
    }
    else {
      _free(lVar1);
      lVar1 = 0;
    }
  }
  *(long *)(unaff_x20 + param_1) = lVar1;
  return;
}



/* Entry: 104c1c36c; end: 104c1cea3;  */

void FUN_104c1c36c(undefined8 ***param_1,undefined8 *param_2,undefined1 **param_3,long param_4,
                  undefined1 **param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined8 ****ppppuVar12;
  uint uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar15;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined1 *puVar16;
  undefined8 uVar17;
  long extraout_x13;
  long extraout_x13_00;
  long lVar18;
  long extraout_x13_01;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  undefined8 ****ppppuVar24;
  undefined8 in_stack_00000050;
  undefined8 ****appppuStack_10398 [6];
  undefined1 **ppuStack_10368;
  undefined8 ***pppuStack_10360;
  code *pcStack_10358;
  undefined8 ****ppppuStack_10340;
  undefined8 uStack_10338;
  undefined1 *puStack_10330;
  undefined8 ****ppppuStack_10328;
  undefined8 ****ppppuStack_10320;
  uint uStack_10314;
  long lStack_10310;
  undefined8 ****ppppuStack_10308;
  undefined8 *puStack_10300;
  undefined8 ****ppppuStack_102f8;
  undefined1 *puStack_dcd0;
  undefined1 *puStack_dcc8;
  undefined1 *puStack_dcc0;
  undefined1 *puStack_dcb8;
  undefined1 auStack_dcb0 [800];
  undefined1 auStack_d990 [832];
  undefined1 auStack_d650 [1600];
  undefined1 auStack_d010 [1664];
  undefined1 *puStack_c990;
  undefined1 *puStack_c988;
  undefined1 *puStack_c980;
  undefined1 **ppuStack_c978;
  undefined1 **ppuStack_c970;
  undefined1 **ppuStack_c968;
  undefined1 auStack_c960 [800];
  undefined1 auStack_c640 [800];
  undefined1 auStack_c320 [832];
  undefined1 *apuStack_bfe0 [200];
  undefined1 *apuStack_b9a0 [200];
  undefined1 *apuStack_b360 [208];
  undefined8 uStack_ace0;
  undefined8 uStack_acd8;
  undefined8 uStack_acd0;
  undefined8 uStack_acc8;
  undefined8 uStack_acc0;
  undefined8 uStack_acb8;
  undefined8 uStack_acb0;
  undefined8 uStack_aca8;
  undefined8 uStack_aca0;
  undefined8 uStack_ac98;
  undefined8 ****ppppuStack_ac90;
  undefined8 ****ppppuStack_ac88;
  undefined8 ****ppppuStack_ac80;
  undefined8 ****ppppuStack_ac78;
  undefined8 ****ppppuStack_ac70;
  undefined8 ****ppppuStack_ac68;
  undefined8 ****ppppuStack_ac60;
  undefined8 ****ppppuStack_ac58;
  undefined8 ****ppppuStack_ac50;
  undefined8 ****ppppuStack_ac48;
  undefined8 uStack_7d00;
  undefined8 *puStack_7ce8;
  undefined8 ***pppuStack_7ce0;
  undefined8 ****ppppuStack_7cd8;
  undefined8 ***pppuStack_7cd0;
  undefined1 *puStack_7cc8;
  undefined1 *puStack_7cc0;
  undefined1 *puStack_7cb8;
  undefined1 *puStack_7cb0;
  undefined1 *puStack_7ca8;
  undefined8 **appuStack_7ca0 [100];
  undefined1 auStack_7980 [800];
  undefined1 auStack_7660 [832];
  undefined1 auStack_7320 [1600];
  undefined1 auStack_6ce0 [1600];
  undefined1 auStack_66a0 [1664];
  undefined8 *puStack_6020;
  undefined8 *puStack_6018;
  undefined8 *puStack_6010;
  undefined8 ****ppppuStack_6008;
  undefined8 ****ppppuStack_6000;
  undefined8 ****ppppuStack_5ff8;
  undefined8 auStack_5ff0 [100];
  undefined8 auStack_5cd0 [100];
  undefined8 auStack_59b0 [104];
  undefined8 ***apppuStack_5670 [200];
  undefined8 ***apppuStack_5030 [200];
  undefined8 ***apppuStack_49f0 [208];
  undefined8 uStack_4370;
  undefined8 *puStack_4360;
  undefined8 ****ppppuStack_4358;
  undefined1 **ppuStack_4350;
  long lStack_4348;
  undefined8 *puStack_4340;
  undefined8 ***pppuStack_4338;
  undefined8 **ppuStack_4330;
  undefined1 *puStack_4328;
  undefined1 *puStack_4320;
  undefined1 *puStack_4318;
  undefined8 *apuStack_4310 [100];
  undefined1 auStack_3ff0 [832];
  undefined1 auStack_3cb0 [1600];
  undefined1 auStack_3670 [1664];
  undefined8 *puStack_2ff0;
  undefined8 *puStack_2fe8;
  undefined8 *puStack_2fe0;
  undefined8 *puStack_2fd8;
  undefined8 *puStack_2fd0;
  undefined8 *puStack_2fc8;
  undefined8 *puStack_2fc0;
  undefined8 *puStack_2fb8;
  undefined8 *puStack_2fb0;
  undefined8 *puStack_2fa8;
  undefined8 ****ppppuStack_2fa0;
  undefined8 ****ppppuStack_2f98;
  undefined8 ****ppppuStack_2f90;
  undefined8 ****ppppuStack_2f88;
  undefined8 ****ppppuStack_2f80;
  undefined8 ****ppppuStack_2f78;
  undefined8 ****ppppuStack_2f70;
  undefined8 ****ppppuStack_2f68;
  undefined8 ****ppppuStack_2f60;
  undefined8 ****ppppuStack_2f58;
  undefined8 uStack_10;
  
  func_0x000104c1d478();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar3 = param_1;
  ppuVar11 = param_5;
  uVar17 = param_8;
  lStack_4348 = param_4;
  puStack_4340 = param_2;
  func_0x000104c1d400();
  lVar15 = extraout_x8;
  pppuStack_4338 = pppuVar3;
  while (lVar18 = lStack_4348, lVar15 != 0x28) {
    func_0x000104c1d384();
    lVar15 = extraout_x8_00;
  }
  puStack_4320 = auStack_3cb0;
  ppuStack_4330 = apuStack_4310;
  puStack_4318 = auStack_3670;
  puStack_4328 = auStack_3ff0;
  ppppuStack_2f78 = ppppuStack_2fa0;
  ppppuStack_2f70 = ppppuStack_2fa0;
  pppuVar3 = param_1;
  if (((uint)param_8 >> 2 & 1) == 0) {
    ppppuStack_2f68 = ppppuStack_2fa0;
    ppppuStack_2f60 = ppppuStack_2fa0;
    ppppuStack_2f58 = ppppuStack_2fa0;
    puStack_2fc8 = puStack_2ff0;
    puStack_2fc0 = puStack_2ff0;
    puStack_2fb8 = puStack_2ff0;
    puStack_2fb0 = puStack_2ff0;
    puStack_2fa8 = puStack_2ff0;
    ppuVar10 = param_3;
    func_0x000104c1d2f8();
    ppppuVar4 = ppppuStack_2fa0;
    puVar7 = puStack_2ff0;
    if (1 < (int)param_6) {
      param_1 = (undefined8 ***)((long)param_1 + (long)puStack_4340);
      ppppuStack_2f58 = ppppuStack_2f98;
      puStack_2fa8 = puStack_2fe8;
      ppuVar10 = (undefined1 **)((long)param_3 + 4);
      pppuVar3 = param_1;
      func_0x000104c1d2f8();
      func_0x000104c1d244();
      func_0x000104c1d39c();
      uVar1 = param_6 == 2;
      ppppuVar4 = ppppuStack_2f98;
      puVar7 = puStack_2fe8;
      if (!(bool)uVar1) {
        param_1 = (undefined8 ***)((long)param_1 + (long)puStack_4340);
        ppppuStack_2f60 = ppppuStack_2f90;
        ppppuStack_2f58 = ppppuStack_2f88;
        puStack_2fb0 = puStack_2fe0;
        puStack_2fa8 = puStack_2fd8;
        ppuVar10 = param_3 + 1;
        pppuVar3 = param_1;
        func_0x000104c1d2f8();
        puVar7 = puStack_4340;
        uVar1 = param_6 == 4;
        ppppuVar4 = ppppuStack_2f90;
        puVar8 = puStack_2fe0;
        if (param_6 < 4) {
LAB_104c1c4bc:
          ppppuStack_2f58 = ppppuStack_2f60;
          puStack_2fa8 = puStack_2fb0;
          func_0x000104c1d244();
          func_0x000104c1d368();
          func_0x000104c1d43c();
          puVar7 = puVar8;
          goto LAB_104c1c598;
        }
        func_0x000104c1d2f8(ppppuStack_2f88,puStack_2fd8,(long)param_3 + 0xc,
                            (long)param_1 + (long)puStack_4340);
        func_0x000104c1d244();
        ppppuVar4 = &pppuStack_4338;
        ppuVar10 = &puStack_4320;
        pppuVar3 = &ppuStack_4330;
        func_0x000104c1d43c();
        param_6 = param_6 - 4;
        uVar1 = param_6 == 0;
        ppuVar11 = param_5;
        if (!(bool)uVar1) {
          param_3 = param_3 + 2;
          goto LAB_104c1c5cc;
        }
      }
      goto LAB_104c1c6b0;
    }
LAB_104c1c580:
    uVar1 = param_6 == 2;
    ppppuStack_2f58 = ppppuStack_2f60;
    puStack_2fa8 = puStack_2fb0;
    func_0x000104c1d244();
    func_0x000104c1d39c();
LAB_104c1c598:
    func_0x000104c1d3c8();
    ppppuVar20 = (undefined8 ****)0x1;
  }
  else {
    ppppuStack_2f68 = ppppuStack_2f98;
    ppppuStack_2f60 = ppppuStack_2f90;
    ppppuStack_4358 = ppppuStack_2f88;
    ppppuStack_2f58 = ppppuStack_2f88;
    puStack_2fc8 = puStack_2ff0;
    puStack_2fc0 = puStack_2ff0;
    puStack_2fb8 = puStack_2fe8;
    puStack_2fb0 = puStack_2fe0;
    puStack_4360 = puStack_2fd8;
    puStack_2fa8 = puStack_2fd8;
    ppuStack_4350 = param_3;
    func_0x000104c1d2f8(ppppuStack_2fa0,puStack_2ff0,0,lStack_4348);
    param_3 = ppuStack_4350;
    func_0x000104c1d2f8(ppppuStack_2f98,puStack_2fe8,0,lVar18 + (long)puStack_4340);
    ppuVar10 = param_3;
    func_0x000104c1d2f8();
    ppppuVar4 = ppppuStack_2f90;
    puVar7 = puStack_2fe0;
    if ((int)param_6 < 2) goto LAB_104c1c580;
    ppuVar10 = (undefined1 **)((long)param_3 + 4);
    pppuVar3 = (undefined8 ***)((long)param_1 + (long)puStack_4340);
    ppppuVar4 = ppppuStack_4358;
    puVar7 = puStack_4360;
    func_0x000104c1d2f8();
    func_0x000104c1d244();
    func_0x000104c1d39c();
    param_6 = param_6 - 2;
    uVar1 = 1;
    if (param_6 == 0) {
LAB_104c1c6b0:
      func_0x000104c1d3c8();
    }
    else {
      param_3 = param_3 + 1;
LAB_104c1c5cc:
      ppppuStack_2f60 = ppppuStack_2f80;
      puStack_2fb0 = puStack_2fd0;
      lVar21 = lStack_4348 + (long)puStack_4340 * 6;
      lVar18 = (long)puStack_4340 * 3;
      lVar15 = (long)puStack_4340 * 2;
      do {
        ppppuVar4 = ppppuStack_2f60;
        puVar8 = puStack_2fb0;
        ppuVar10 = param_3;
        pppuVar3 = (undefined8 ***)((long)param_1 + lVar15);
        func_0x000104c1d2f8();
        uVar1 = param_6 == 2;
        if (param_6 < 2) goto LAB_104c1c4bc;
        ppuVar10 = (undefined1 **)((long)param_3 + 4);
        ppppuVar4 = ppppuStack_2f58;
        puVar7 = puStack_2fa8;
        pppuVar3 = (undefined8 ***)((long)param_1 + lVar18);
        func_0x000104c1d2f8();
        func_0x000104c1d244();
        func_0x000104c1d368();
        func_0x000104c1d43c();
        func_0x000104c1d464();
      } while (!(bool)uVar1);
      if (((uint)param_8 >> 3 & 1) == 0) goto LAB_104c1c6b0;
      func_0x000104c1d2f8(ppppuStack_2f60,puStack_2fb0,0,lVar21);
      pppuVar3 = (undefined8 ***)(lVar21 + (long)puStack_4340);
      ppuVar10 = (undefined1 **)0x0;
      ppppuVar4 = ppppuStack_2f58;
      puVar7 = puStack_2fa8;
      func_0x000104c1d2f8();
    }
    ppppuVar20 = (undefined8 ****)0x2;
  }
  func_0x000104c1d244();
  func_0x000104c1d368();
  FUN_104c1cf84();
  func_0x000104c1d334(uStack_10);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c1d478(0x104c1c6f0);
  apuStack_4310[0] = &stack0x00000050;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppuVar5 = ppppuVar4;
  puVar9 = puVar7;
  ppppuVar24 = ppppuVar20;
  uVar14 = uVar17;
  func_0x000104c1d3f0();
  ppppuStack_6008 = apppuStack_5670;
  ppppuVar19 = apppuStack_5030;
  puStack_6020 = auStack_5ff0;
  puVar8 = auStack_5cd0;
  puStack_6010 = auStack_59b0;
  puStack_7cb8 = auStack_7320;
  puStack_7cb0 = auStack_6ce0;
  pppuStack_7cd0 = appuStack_7ca0;
  puStack_7cc8 = auStack_7980;
  puStack_7ca8 = auStack_66a0;
  puStack_7cc0 = auStack_7660;
  iVar22 = (int)ppppuVar20;
  pppuStack_7ce0 = pppuVar3;
  ppppuStack_7cd8 = ppppuVar5;
  uStack_4370 = extraout_x8_01;
  if (((uint)uVar14 >> 2 & 1) == 0) {
    puStack_7ce8 = puStack_6010;
    puStack_6018 = puStack_6020;
    puStack_6010 = puStack_6020;
    ppppuStack_6000 = ppppuStack_6008;
    ppppuStack_5ff8 = ppppuStack_6008;
    func_0x000104c1d450();
    ppppuVar20 = ppppuVar4;
    func_0x000104c1d3bc();
    func_0x000104c1d28c();
    func_0x000104c1d35c();
    uVar13 = (uint)uVar14;
    if (iVar22 < 2) goto LAB_104c1c858;
    puStack_6010 = puVar8;
    ppppuStack_5ff8 = ppppuVar19;
    func_0x000104c1d268();
    ppuVar11 = (undefined1 **)((long)ppuVar10 + 4);
    ppppuVar12 = (undefined8 ****)((long)ppppuVar4 + (long)puVar7);
    func_0x000104c1d3b4();
    func_0x000104c1d35c();
    uVar13 = (uint)uVar14;
    uVar1 = true;
    ppppuVar19 = ppppuVar5;
    puVar8 = puVar9;
    if (iVar22 == 2) {
LAB_104c1c8d8:
      ppppuStack_5ff8 = ppppuStack_6000;
      puStack_6010 = puStack_6018;
      func_0x000104c1d28c();
      func_0x000104c1d2dc();
      ppppuVar24 = ppppuVar12;
      goto LAB_104c1c8f0;
    }
    puStack_6010 = puStack_7ce8;
    ppppuStack_5ff8 = apppuStack_49f0;
LAB_104c1c894:
    ppppuVar24 = (undefined8 ****)((long)pppuStack_7ce0 + (long)puVar7 * 7);
    ppuVar10 = ppuVar10 + 1;
    uVar23 = iVar22 - 1;
    ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + (long)puVar7 * 2);
    do {
      func_0x000104c1d268();
      ppuVar11 = ppuVar10;
      ppppuVar12 = ppppuVar4;
      func_0x000104c1d3b4();
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 4);
      func_0x000104c1d2dc();
      uVar13 = (uint)uVar14;
      uVar23 = uVar23 - 1;
      ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + (long)puVar7);
      uVar1 = uVar23 == 1;
    } while (1 < uVar23);
    if (((uint)uVar17 >> 3 & 1) == 0) goto LAB_104c1c8d8;
    func_0x000104c1d268();
    func_0x000104c1d3b4();
    func_0x000104c1d2dc();
    func_0x000104c1d268();
    ppuVar11 = (undefined1 **)0x0;
    func_0x000104c1d3b4();
  }
  else {
    puStack_6018 = puVar8;
    ppppuStack_6000 = ppppuVar19;
    ppppuStack_5ff8 = apppuStack_49f0;
    func_0x000104c1d450();
    func_0x000104c1d3bc();
    ppppuVar20 = (undefined8 ****)((long)pppuVar3 + (long)puVar7);
    func_0x000104c1d3bc(ppppuVar19,puVar8,0);
    func_0x000104c1d268();
    ppuVar11 = ppuVar10;
    ppppuVar24 = ppppuVar4;
    func_0x000104c1d3b4();
    func_0x000104c1d35c();
    uVar13 = (uint)uVar14;
    ppppuVar5 = ppppuVar19;
    puVar9 = puVar8;
    if (1 < iVar22) {
      func_0x000104c1d268();
      ppuVar11 = (undefined1 **)((long)ppuVar10 + 4);
      ppppuVar12 = (undefined8 ****)((long)ppppuVar4 + (long)puVar7);
      func_0x000104c1d3b4();
      func_0x000104c1d35c();
      uVar13 = (uint)uVar14;
      uVar1 = iVar22 == 2;
      if (!(bool)uVar1) goto LAB_104c1c894;
      goto LAB_104c1c8d8;
    }
LAB_104c1c858:
    puVar8 = puVar9;
    ppppuVar19 = ppppuVar5;
    uVar1 = iVar22 == 2;
    ppppuStack_5ff8 = ppppuStack_6000;
    puStack_6010 = puStack_6018;
    func_0x000104c1d28c();
    func_0x000104c1d35c();
LAB_104c1c8f0:
    ppppuStack_5ff8 = ppppuStack_6000;
    puStack_6010 = puStack_6018;
    func_0x000104c1d28c();
  }
  func_0x000104c1d2dc();
  func_0x000104c1d334(uStack_4370);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c1d478(0x104c1c950);
  appuStack_7ca0[0] = apuStack_4310;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppuVar4 = ppppuVar19;
  ppppuStack_10308 = ppppuVar20;
  puStack_10300 = puVar8;
  func_0x000104c1d400();
  lVar15 = extraout_x8_02;
  lVar18 = extraout_x13;
  ppppuStack_102f8 = ppppuVar4;
  while (lVar15 != 0x28) {
    func_0x000104c1d384();
    lVar15 = extraout_x8_03;
    lVar18 = extraout_x13_00;
  }
  lVar15 = 0;
  puStack_dcc0 = auStack_d650;
  puStack_dcd0 = auStack_dcb0;
  puStack_dcb8 = auStack_d010;
  puStack_dcc8 = auStack_d990;
  while (ppppuVar4 = ppppuStack_10308, lVar15 != 0x20) {
    func_0x000104c1d384();
    lVar15 = extraout_x8_04;
    lVar18 = extraout_x13_01;
  }
  ppuStack_c978 = apuStack_bfe0;
  puStack_c990 = auStack_c960;
  ppuVar10 = apuStack_b360;
  ppppuStack_ac68 = ppppuStack_ac90;
  ppppuStack_ac60 = ppppuStack_ac90;
  uVar23 = (uint)ppppuVar24;
  if ((uVar13 >> 2 & 1) == 0) {
    ppppuStack_ac58 = ppppuStack_ac90;
    ppppuStack_ac50 = ppppuStack_ac90;
    ppppuStack_ac48 = ppppuStack_ac90;
    uStack_acb8 = uStack_ace0;
    uStack_acb0 = uStack_ace0;
    uStack_aca8 = uStack_ace0;
    uStack_aca0 = uStack_ace0;
    uStack_ac98 = uStack_ace0;
    puStack_c988 = puStack_c990;
    puStack_c980 = puStack_c990;
    ppuStack_c970 = ppuStack_c978;
    ppuStack_c968 = ppuStack_c978;
    func_0x000104c1d31c(apuStack_bfe0,auStack_c960,ppppuStack_ac90,uStack_ace0,lVar18,ppppuVar19);
    func_0x000104c1d1fc();
    func_0x000104c1d328();
    if ((int)uVar23 < 2) {
LAB_104c1cc88:
      uVar1 = uVar23 == 2;
      ppppuStack_ac48 = ppppuStack_ac50;
      uStack_ac98 = uStack_aca0;
      func_0x000104c1d348();
      func_0x000104c1d220();
      ppuVar6 = &puStack_dcc0;
      FUN_104c1cf7c(ppuVar6,&puStack_dcd0);
      func_0x000104c1d1fc();
      func_0x000104c1d328();
LAB_104c1ccbc:
      ppppuStack_ac50 = ppppuStack_ac58;
      ppppuStack_ac48 = ppppuStack_ac58;
      uStack_aca0 = uStack_aca8;
      uStack_ac98 = uStack_aca8;
      func_0x000104c1d348();
      func_0x000104c1d220();
      func_0x000104c1d1fc();
      func_0x000104c1d328();
      goto LAB_104c1ce6c;
    }
    ppppuVar19 = (undefined8 ****)((long)ppppuVar19 + (long)puStack_10300);
    ppppuStack_ac48 = ppppuStack_ac88;
    uStack_ac98 = uStack_acd8;
    puStack_c980 = auStack_c640;
    ppuStack_c968 = apuStack_b9a0;
    func_0x000104c1d31c(apuStack_b9a0,auStack_c640,ppppuStack_ac88,uStack_acd8,lVar18 + 4,ppppuVar19
                       );
    func_0x000104c1d220();
    ppuVar6 = &puStack_dcc0;
    FUN_104c1cf7c(ppuVar6,&puStack_dcd0);
    func_0x000104c1d1fc();
    func_0x000104c1d328();
    uVar1 = uVar23 == 2;
    if (!(bool)uVar1) {
      ppppuStack_ac50 = ppppuStack_ac80;
      ppppuStack_ac48 = ppppuStack_ac78;
      uStack_aca0 = uStack_acd0;
      uStack_ac98 = uStack_acc8;
      puStack_c980 = auStack_c320;
      ppuStack_c968 = ppuVar10;
      func_0x000104c1d31c(ppuVar10,auStack_c320,ppppuStack_ac80,uStack_acd0,lVar18 + 8,
                          (long)ppppuVar19 + (long)puStack_10300);
      func_0x000104c1d1fc();
      func_0x000104c1d328();
      uVar1 = uVar23 == 4;
      ppuVar6 = ppuVar10;
      ppppuVar19 = ppppuStack_ac78;
      if (uVar23 < 4) {
LAB_104c1cb6c:
        ppppuStack_ac48 = ppppuStack_ac50;
        uStack_ac98 = uStack_aca0;
        func_0x000104c1d348();
        func_0x000104c1d220();
        func_0x000104c1d1fc();
        func_0x000104c1d2b0();
        func_0x000104c1d3a8();
        goto LAB_104c1ccbc;
      }
      func_0x000104c1d3e4();
      func_0x000104c1d31c();
      func_0x000104c1d220();
      func_0x000104c1d1fc();
      func_0x000104c1d2b0();
      func_0x000104c1d3a8();
      uVar1 = uVar23 - 4 == 0;
      ppppuVar19 = (undefined8 ****)(ulong)(uVar23 - 4);
      ppuVar6 = ppuVar10;
      if (!(bool)uVar1) goto LAB_104c1cd30;
    }
    goto LAB_104c1ce38;
  }
  ppppuStack_10328 = ppppuStack_ac88;
  ppppuStack_ac58 = ppppuStack_ac88;
  ppppuStack_ac50 = ppppuStack_ac80;
  ppppuStack_10340 = ppppuStack_ac78;
  ppppuStack_ac48 = ppppuStack_ac78;
  uStack_acb8 = uStack_ace0;
  uStack_acb0 = uStack_ace0;
  uStack_aca8 = uStack_acd8;
  uStack_aca0 = uStack_acd0;
  uStack_10338 = uStack_acc8;
  uStack_ac98 = uStack_acc8;
  puStack_10330 = auStack_c320;
  ppppuStack_10320 = ppppuVar19;
  uStack_10314 = uVar23;
  lStack_10310 = lVar18;
  puStack_c988 = auStack_c640;
  puStack_c980 = auStack_c320;
  ppuStack_c970 = apuStack_b9a0;
  ppuStack_c968 = ppuVar10;
  func_0x000104c1d430(apuStack_bfe0,auStack_c960,ppppuStack_ac90,uStack_ace0,0,ppppuStack_10308);
  uVar23 = uStack_10314;
  func_0x000104c1d430(apuStack_b9a0,auStack_c640,ppppuStack_10328,uStack_acd8,0,
                      (long)ppppuVar4 + (long)puStack_10300);
  func_0x000104c1d31c(ppuVar10,puStack_10330,ppppuStack_ac80,uStack_acd0,lStack_10310,
                      ppppuStack_10320);
  func_0x000104c1d1fc();
  func_0x000104c1d328();
  ppppuVar19 = ppppuStack_ac80;
  if ((int)uVar23 < 2) goto LAB_104c1cc88;
  func_0x000104c1d3e4();
  func_0x000104c1d31c();
  func_0x000104c1d220();
  ppuVar6 = &puStack_dcc0;
  FUN_104c1cf7c(ppuVar6,&puStack_dcd0);
  func_0x000104c1d1fc();
  func_0x000104c1d328();
  ppppuVar19 = (undefined8 ****)(ulong)(uVar23 - 2);
  uVar1 = 1;
  ppuVar10 = ppuVar6;
  if (uVar23 - 2 == 0) {
LAB_104c1ce38:
    ppppuStack_ac50 = ppppuStack_ac58;
    ppppuStack_ac48 = ppppuStack_ac58;
    uStack_aca0 = uStack_aca8;
    uStack_ac98 = uStack_aca8;
    func_0x000104c1d348();
    func_0x000104c1d1fc();
    func_0x000104c1d328();
    func_0x000104c1d348();
  }
  else {
LAB_104c1cd30:
    ppppuStack_ac50 = ppppuStack_ac70;
    uStack_aca0 = uStack_acc0;
    ppuVar6 = ppuVar10;
    do {
      func_0x000104c1d3e4();
      func_0x000104c1d31c();
      func_0x000104c1d1fc();
      func_0x000104c1d328();
      uVar1 = (uint)ppppuVar19 == 2;
      if ((uint)ppppuVar19 < 2) goto LAB_104c1cb6c;
      func_0x000104c1d3e4();
      func_0x000104c1d31c();
      func_0x000104c1d220();
      func_0x000104c1d1fc();
      func_0x000104c1d2b0();
      func_0x000104c1d3a8();
      func_0x000104c1d464();
    } while (!(bool)uVar1);
    if ((uVar13 >> 3 & 1) == 0) goto LAB_104c1ce38;
    func_0x000104c1d3e4();
    func_0x000104c1d31c();
    func_0x000104c1d1fc();
    func_0x000104c1d328();
    func_0x000104c1d3e4();
    func_0x000104c1d31c();
  }
  func_0x000104c1d220();
  func_0x000104c1d1fc();
LAB_104c1ce6c:
  func_0x000104c1d2b0();
  puVar7 = puStack_10300;
  FUN_104c1d104();
  func_0x000104c1d334(uStack_7d00);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_10358 = FUN_104c1cea4;
  ppuVar10 = ppuVar6;
  puVar8 = puVar7;
  appppuStack_10398[5] = ppppuVar19;
  ppuStack_10368 = ppuVar11;
  pppuStack_10360 = appuStack_7ca0;
  func_0x000104c1d3f0();
  appppuStack_10398[4] = (undefined8 ****)extraout_x8_05;
  func_0x000100d9a534();
  for (lVar15 = 0; lVar15 != 0x10; lVar15 = lVar15 + 8) {
    *(undefined8 *)((long)appppuStack_10398 + lVar15 + 0x10) =
         *(undefined8 *)((long)ppuVar6 + lVar15);
    *(undefined8 *)((long)appppuStack_10398 + lVar15) = *(undefined8 *)((long)puVar7 + lVar15);
  }
  puVar9 = puVar7 + 2;
  ppuVar11 = ppuVar6 + 2;
  lVar15 = 3;
  do {
    ppuVar11[-2] = *ppuVar11;
    puVar9[-2] = *puVar9;
    puVar9 = puVar9 + 1;
    ppuVar11 = ppuVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  for (lVar15 = 0; bVar2 = lVar15 == 0x10, !bVar2; lVar15 = lVar15 + 8) {
    *(undefined8 *)((long)ppuVar6 + lVar15 + 0x18) =
         *(undefined8 *)((long)appppuStack_10398 + lVar15 + 0x10);
    *(undefined8 *)((long)puVar7 + lVar15 + 0x18) =
         *(undefined8 *)((long)appppuStack_10398 + lVar15);
  }
  func_0x000104c1d334(appppuStack_10398[4]);
  if (!bVar2) {
    ___stack_chk_fail();
    puVar16 = *ppuVar10;
    uVar17 = *puVar8;
    lVar15 = 1;
    ppuVar11 = ppuVar10;
    puVar7 = puVar8;
    do {
      *ppuVar11 = ppuVar11[1];
      *puVar7 = puVar7[1];
      lVar15 = lVar15 + -1;
      ppuVar11 = ppuVar11 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar15 != 0);
    ppuVar10[1] = puVar16;
    puVar8[1] = uVar17;
    return;
  }
  return;
}



/* Entry: 104c1cea4; end: 104c1cf7b;  */

void FUN_104c1cea4(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 auStack_48 [5];
  
  puVar2 = param_1;
  puVar3 = param_2;
  func_0x000104c1d3f0();
  auStack_48[4] = extraout_x8;
  func_0x000100d9a534();
  for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 8) {
    *(undefined8 *)((long)auStack_48 + lVar4 + 0x10) = *(undefined8 *)((long)param_1 + lVar4);
    *(undefined8 *)((long)auStack_48 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
  }
  puVar5 = param_2 + 2;
  puVar7 = param_1 + 2;
  lVar4 = 3;
  do {
    puVar7[-2] = *puVar7;
    puVar5[-2] = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  for (lVar4 = 0; bVar1 = lVar4 == 0x10, !bVar1; lVar4 = lVar4 + 8) {
    *(undefined8 *)((long)param_1 + lVar4 + 0x18) = *(undefined8 *)((long)auStack_48 + lVar4 + 0x10)
    ;
    *(undefined8 *)((long)param_2 + lVar4 + 0x18) = *(undefined8 *)((long)auStack_48 + lVar4);
  }
  func_0x000104c1d334(auStack_48[4]);
  if (!bVar1) {
    ___stack_chk_fail();
    uVar6 = *puVar2;
    uVar8 = *puVar3;
    lVar4 = 1;
    puVar5 = puVar2;
    puVar7 = puVar3;
    do {
      *puVar5 = puVar5[1];
      *puVar7 = puVar7[1];
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
    puVar2[1] = uVar6;
    puVar3[1] = uVar8;
    return;
  }
  return;
}



/* Entry: 104c1cf7c; end: 104c1cf83;  */

void FUN_104c1cf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 1;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[1] = uVar3;
  param_2[1] = uVar4;
  return;
}



/* Entry: 104c1cf84; end: 104c1cfbb;  */

void FUN_104c1cf84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long *unaff_x22;
  
  func_0x000104c1d418();
  func_0x000100d98aa4();
  *unaff_x22 = *unaff_x22 + unaff_x21 * 2;
  func_0x000104c1d444();
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 1;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[1] = uVar3;
  param_2[1] = uVar4;
  return;
}



/* Entry: 104c1cfbc; end: 104c1d003;  */

void FUN_104c1cfbc(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar5 = (ulong)(param_3 - 1);
  puVar1 = param_1;
  puVar2 = param_2;
  for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[uVar5] = uVar3;
  param_2[uVar5] = uVar4;
  return;
}



/* Entry: 104c1d004; end: 104c1d07b;  */

void FUN_104c1d004(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000100d982d0(param_1[2],param_2[2],param_5,param_6,param_7,param_9);
  func_0x000100d9a3d0(param_1,param_2,param_3,param_4,param_7,param_8,0xff);
  func_0x000104c1d444();
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 2;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[2] = uVar3;
  param_2[2] = uVar4;
  return;
}



/* Entry: 104c1d07c; end: 104c1d083;  */

void FUN_104c1d07c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 2;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[2] = uVar3;
  param_2[2] = uVar4;
  return;
}



/* Entry: 104c1d084; end: 104c1d0b3;  */

void FUN_104c1d084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000100d9a3d0();
  func_0x000104c1d444();
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 2;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[2] = uVar3;
  param_2[2] = uVar4;
  return;
}



/* Entry: 104c1d0b4; end: 104c1d0fb;  */

void FUN_104c1d0b4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long *unaff_x22;
  
  func_0x000104c1d418();
  func_0x000100d987e4();
  *unaff_x22 = *unaff_x22 + unaff_x21;
  func_0x000104c1d444();
  uVar3 = *param_1;
  uVar4 = *param_3;
  lVar5 = 2;
  puVar1 = param_1;
  puVar2 = param_3;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[2] = uVar3;
  param_3[2] = uVar4;
  return;
}



/* Entry: 104c1d0fc; end: 104c1d103;  */

void FUN_104c1d0fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  lVar5 = 3;
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar5 != 0);
  param_1[3] = uVar3;
  param_2[3] = uVar4;
  return;
}



/* Entry: 104c1d104; end: 104c1d1fb;  */

void FUN_104c1d104(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_c10 [104];
  undefined8 uStack_ba8;
  undefined8 uStack_b88;
  undefined1 auStack_610 [1536];
  undefined8 uStack_10;
  
  func_0x000104c1d478();
  plVar4 = param_1;
  uVar7 = param_7;
  uVar6 = param_8;
  func_0x000104c1d3f0();
  uStack_10 = extraout_x8;
  func_0x000100d98950(auStack_610,*plVar4,param_2,param_3,param_4,uVar7,uVar6);
  func_0x000100d985b8(auStack_c10,*param_1,param_2,param_5,param_6,param_7,param_8);
  func_0x000100d98c38(*param_1,param_2,*param_1,param_2,auStack_610,auStack_c10,param_7,param_8);
  *param_1 = *param_1 + param_2 * (param_8 & 0xffffffff);
  FUN_104c1cf7c(param_3,param_4);
  func_0x000104c1d444();
  FUN_104c1d0fc();
  func_0x000104c1d334(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar3 = (undefined8 *)&stack0x00002db8;
    puVar5 = (undefined8 *)&stack0x00002da0;
    func_0x000100d9a3d0(puVar3,puVar5,uStack_b88,uStack_ba8,param_6,*(undefined4 *)(param_4 + 4),
                        0xff);
    func_0x000104c1d444();
    uVar7 = *puVar3;
    uVar8 = *puVar5;
    lVar9 = 2;
    puVar1 = puVar3;
    puVar2 = puVar5;
    do {
      *puVar1 = puVar1[1];
      *puVar2 = puVar2[1];
      lVar9 = lVar9 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (lVar9 != 0);
    puVar3[2] = uVar7;
    puVar5[2] = uVar8;
    return;
  }
  return;
}



/* Entry: 104c1d1fc; end: 104c1d48f;  */

void FUN_104c1d1fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000098;
  
  puVar3 = (undefined8 *)&stack0x000039d8;
  puVar4 = (undefined8 *)&stack0x000039c0;
  func_0x000100d9a3d0(puVar3,puVar4,in_stack_00000098,in_stack_00000078);
  func_0x000104c1d444();
  uVar5 = *puVar3;
  uVar6 = *puVar4;
  lVar7 = 2;
  puVar1 = puVar3;
  puVar2 = puVar4;
  do {
    *puVar1 = puVar1[1];
    *puVar2 = puVar2[1];
    lVar7 = lVar7 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar7 != 0);
  puVar3[2] = uVar5;
  puVar4[2] = uVar6;
  return;
}



/* Entry: 104c1d490; end: 104c1db43;  */

/* WARNING: Possible PIC construction at 0x000104c1d520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c1d5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c1d7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c1d7ec) */

void FUN_104c1d490(long param_1,long *param_2,ulong param_3,ulong param_4,int param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined1 *puVar28;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  int iVar29;
  int iVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined4 *puVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  byte *extraout_x12;
  uint uVar37;
  long unaff_x19;
  ulong uVar38;
  long *unaff_x20;
  ulong uVar39;
  ulong unaff_x21;
  ulong uVar40;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar41;
  ulong unaff_x24;
  undefined1 *puVar42;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar16 = &stack0xfffffffffffffff0;
  iVar15 = (int)param_3;
  uVar25 = 0;
  if (iVar15 != 0) {
    uVar25 = 8;
  }
  uVar31 = *(uint *)(param_1 + 0x14d8);
  uVar24 = iVar15 + 1;
  uVar26 = *(uint *)(param_1 + 0xd88);
  lVar12 = param_1;
  if ((uVar31 & 1) == 0) {
    if ((uVar31 & 6) == 0) {
      return;
    }
    iVar30 = *(int *)(param_1 + 0x988);
    iVar17 = *(int *)(param_1 + 0x980);
    if (iVar30 != 3) {
      iVar17 = iVar17 + 1;
    }
    bVar11 = iVar30 == 1;
    iVar29 = *(int *)(param_1 + 0x984);
    if (bVar11) {
      iVar29 = iVar29 + 1;
    }
    uVar2 = iVar29 >> (uint)bVar11;
    iVar29 = 5;
    if (!bVar11) {
      iVar29 = 6;
    }
    uVar23 = iVar29 + (uint)*(byte *)(*(long *)(param_1 + 8) + 0x188);
    uVar37 = 8 >> (ulong)(uint)bVar11;
    if ((int)uVar26 <= (int)uVar24) {
      uVar37 = 0;
    }
    uVar37 = (uVar24 << (ulong)(uVar23 & 0x1f)) - uVar37;
    if ((int)uVar2 <= (int)uVar37) {
      uVar37 = uVar2;
    }
    if ((uVar31 >> 1 & 1) == 0) {
      if ((uVar31 >> 2 & 1) == 0) {
        return;
      }
      func_0x000104c1db5c(param_2[2]);
      iVar29 = (int)param_3;
      uVar21 = 2;
      lVar12 = param_1;
      plVar13 = param_2;
    }
    else {
      plVar13 = param_2;
      func_0x000104c1db5c(param_2[1]);
      iVar29 = (int)param_3;
      uVar21 = 1;
      unaff_x30 = 0x104c1d5ac;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x21 = (ulong)((iVar15 << (ulong)(uVar23 & 0x1f)) - (uVar25 >> bVar11));
      unaff_x22 = (ulong)uVar2;
      unaff_x23 = (ulong)(uint)(iVar17 >> (iVar30 != 3));
      unaff_x24 = (ulong)uVar37;
      unaff_x25 = (ulong)uVar31;
      unaff_x26 = (ulong)(uVar25 >> bVar11);
      unaff_x27 = (ulong)uVar26;
      unaff_x29 = puVar16;
    }
  }
  else {
    param_5 = *(int *)(param_1 + 0x984);
    param_4 = (ulong)*(uint *)(param_1 + 0x980);
    uVar2 = *(byte *)(*(long *)(param_1 + 8) + 0x188) + 6;
    param_6 = -8;
    if ((int)uVar26 <= (int)uVar24) {
      param_6 = 0;
    }
    param_6 = (uVar24 << (ulong)(uVar2 & 0x1f)) + param_6;
    if (param_5 <= param_6) {
      param_6 = param_5;
    }
    iVar29 = (iVar15 << (ulong)(uVar2 & 0x1f)) - uVar25;
    uVar21 = 0;
    unaff_x30 = 0x104c1d524;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    plVar13 = (long *)(*param_2 - *(long *)(param_1 + 0x970) * (ulong)uVar25);
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x21 = param_3;
    unaff_x24 = (ulong)uVar24;
    unaff_x25 = (ulong)uVar31;
    unaff_x26 = (ulong)uVar25;
    unaff_x27 = (ulong)uVar26;
    unaff_x29 = puVar16;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar18 = 0;
  uVar38 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar11 = uVar21 != 0;
  lVar27 = *(long *)(lVar12 + 0x18);
  if (bVar11) {
    lVar27 = lVar27 + 1;
  }
  uVar25 = 0;
  if (*(int *)(lVar12 + 0x988) == 1) {
    uVar25 = (uint)bVar11;
  }
  iVar15 = 1 << (ulong)(*(byte *)(lVar27 + 0x370) & 0x1f);
  plVar14 = (long *)0x8;
  uVar24 = 0;
  if (iVar29 != 0) {
    uVar24 = 8 >> (ulong)uVar25;
  }
  uVar31 = 6;
  uVar26 = uVar31;
  if (iVar29 < 1) {
    uVar26 = 2;
  }
  uVar2 = uVar24 + iVar29 & -iVar15;
  iVar17 = iVar15;
  if ((int)(uVar2 + (iVar15 >> 1)) <= param_5) {
    iVar17 = 0;
  }
  iVar30 = 0;
  if ((uVar24 + iVar29 & -iVar15) != 0) {
    iVar30 = uVar2 - iVar17;
  }
  lVar27 = *(long *)(lVar12 + (ulong)(uint)bVar11 * 8 + 0x970);
  uVar24 = iVar15 + (iVar15 >> 1);
  if (!bVar11 || *(int *)(lVar12 + 0x988) == 3) {
    uVar31 = 7;
  }
  uVar2 = ((iVar30 << (ulong)uVar25) >> 7) * *(int *)(lVar12 + 0xd94);
  uVar25 = (uint)(iVar30 << (ulong)uVar25) >> 5 & 2;
  lVar32 = *(long *)(lVar12 + 0x1150);
  uVar19 = 0x6c;
  uVar39 = (ulong)uVar21;
  uVar40 = 0x24;
  *(uint *)((long)register0x00000008 + -0x4d8) = uVar21;
  *(int *)((long)register0x00000008 + -0x4d4) = param_6;
  pcVar3 = (char *)(lVar32 + (long)(int)uVar2 * 0x6c + (ulong)uVar21 * 0x24 +
                   ((ulong)uVar25 | (ulong)(uVar25 >> 1) << 4));
  *(char **)((long)register0x00000008 + -0x4c0) = pcVar3;
  uVar33 = (ulong)(*pcVar3 != '\0');
  puVar22 = (undefined1 *)(long)iVar15;
  *(int *)((long)register0x00000008 + -0x4dc) = iVar29;
  *(int *)((long)register0x00000008 + -0x4c8) = param_6 - iVar29;
  puVar16 = (undefined1 *)(ulong)(uVar26 | 1);
  *(undefined1 **)((long)register0x00000008 + -0x4d0) = puVar22 + -4;
  puVar20 = (undefined1 *)((long)register0x00000008 + -0x4c0);
  uVar41 = 0x220;
  puVar42 = (undefined1 *)((long)register0x00000008 + -0x4b0);
  *(ulong *)((long)register0x00000008 + -0x4f0) = uVar39;
  *(long *)((long)register0x00000008 + -0x4e8) = lVar12;
  *(uint *)((long)register0x00000008 + -0x4f8) = uVar26 | 1;
  *(uint *)((long)register0x00000008 + -0x4f4) = uVar31 - 1;
  puVar28 = (undefined1 *)(ulong)uVar26;
  while( true ) {
    iVar17 = (int)uVar18;
    iVar30 = (int)uVar33;
    if ((int)param_4 < (int)(uVar24 + iVar17)) break;
    uVar26 = iVar17 + iVar15;
    uVar18 = (ulong)uVar26;
    uVar33 = (ulong)(uVar26 >> (ulong)(uVar31 - 1 & 0x1f) & 1 | uVar25);
    pcVar3 = (char *)(*(long *)(lVar12 + 0x1150) +
                      (long)(int)(((int)uVar26 >> uVar31) + uVar2) * 0x6c + uVar39 * 0x24 +
                     (uVar33 | uVar33 << 3));
    lVar32 = 8;
    if (uVar38 != 0) {
      lVar32 = 0;
    }
    *(char **)(puVar20 + lVar32) = pcVar3;
    cVar4 = *pcVar3;
    uVar33 = (ulong)(cVar4 != '\0');
    if (cVar4 != '\0') {
      lVar32 = *(long *)((long)register0x00000008 + -0x4d0);
      puVar34 = (undefined4 *)(puVar42 + uVar38 * 0x220);
      iVar29 = *(int *)((long)register0x00000008 + -0x4c8);
      while (0 < iVar29) {
        *puVar34 = *(undefined4 *)((long)plVar13 + lVar32);
        lVar32 = lVar32 + lVar27;
        puVar34 = puVar34 + 1;
        iVar29 = iVar29 + -1;
      }
    }
    unaff_x27 = uVar18;
    if (iVar30 != 0) {
      lVar32 = 0x220;
      if (uVar38 != 0) {
        lVar32 = 0;
      }
      uVar35 = *(undefined8 *)(puVar20 + uVar38 * 8);
      *(uint *)((long)register0x00000008 + -0x508) = (uint)puVar28;
      *(undefined8 *)((long)register0x00000008 + -0x510) = uVar35;
      puVar16 = puVar42 + lVar32;
      uVar19 = (ulong)*(uint *)((long)register0x00000008 + -0x4dc);
      uVar26 = *(uint *)((long)register0x00000008 + -0x4d8);
      uVar23 = *(uint *)((long)register0x00000008 + -0x4d4);
      *(uint *)((long)register0x00000008 + -0x4c4) = (uint)(cVar4 != '\0');
      uVar35 = 0x104c1d7ec;
      plVar14 = plVar13;
      uVar18 = (ulong)uVar24;
      uVar39 = (ulong)uVar31;
      uVar40 = param_4;
      uVar41 = (ulong)uVar2;
      puVar42 = puVar22;
      unaff_x25 = uVar38;
      goto SUB_104c1d8a0;
    }
    plVar13 = (long *)((long)plVar13 + (long)puVar22);
    uVar38 = uVar38 ^ 1;
    puVar28 = puVar16;
    unaff_x25 = uVar33;
  }
  if (iVar30 != 0) {
    iVar15 = (int)param_4 - iVar17;
    lVar32 = 0x220;
    if (uVar38 != 0) {
      lVar32 = 0;
    }
    uVar35 = *(undefined8 *)((long)register0x00000008 + uVar38 * 8 + -0x4c0);
    *(uint *)((long)register0x00000008 + -0x508) = (uint)puVar28 & 0xfffffffd;
    *(undefined8 *)((long)register0x00000008 + -0x510) = uVar35;
    puVar16 = (undefined1 *)((long)register0x00000008 + lVar32 + -0x4b0);
    uVar19 = (ulong)*(uint *)((long)register0x00000008 + -0x4dc);
    puVar20 = (undefined1 *)(ulong)*(uint *)((long)register0x00000008 + -0x4d8);
    param_4 = (ulong)*(uint *)((long)register0x00000008 + -0x4d4);
    plVar14 = plVar13;
    func_0x000104c1d8a0();
  }
  uVar23 = (uint)param_4;
  uVar26 = (uint)puVar20;
  func_0x000104c1db7c(*(undefined8 *)((long)register0x00000008 + -0x70));
  if (extraout_x9 != extraout_x8) {
    uVar35 = 0x104c1d8a0;
    ___stack_chk_fail();
    uVar18 = uVar38;
SUB_104c1d8a0:
    iVar30 = (int)uVar19;
    *(long *)((long)register0x00000008 + -0x570) = lVar27;
    *(ulong *)((long)register0x00000008 + -0x568) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x560) = (ulong)uVar25;
    *(ulong *)((long)register0x00000008 + -0x558) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x550) = puVar42;
    *(ulong *)((long)register0x00000008 + -0x548) = uVar41;
    *(long **)((long)register0x00000008 + -0x540) = plVar13;
    *(ulong *)((long)register0x00000008 + -0x538) = uVar40;
    *(ulong *)((long)register0x00000008 + -0x530) = uVar39;
    *(ulong *)((long)register0x00000008 + -0x528) = uVar18;
    *(undefined1 **)((long)register0x00000008 + -0x520) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x518) = uVar35;
    *(int *)((long)register0x00000008 + -0x5a4) = iVar15;
    uVar24 = uVar23;
    func_0x000104c1db7c(*(undefined4 *)((long)register0x00000008 + -0x508));
    *(undefined8 *)((long)register0x00000008 + -0x578) = extraout_x9_00;
    lVar27 = *(long *)(lVar12 + 0xcd0);
    uVar25 = (uint)(uVar26 != 0 && *(int *)(lVar12 + 0x988) == 1);
    lVar32 = *(long *)(lVar12 + (ulong)(uVar26 != 0) * 8 + 0x970);
    iVar15 = 5;
    if (uVar25 == 0) {
      iVar15 = 6;
    }
    iVar29 = 0;
    if (iVar30 != 0) {
      iVar29 = 8 << (ulong)uVar25;
    }
    uVar37 = (uint)*(byte *)(*(long *)(lVar12 + 8) + 0x188);
    iVar15 = iVar29 + iVar30 >> (iVar15 + uVar37 & 0x1f);
    uVar2 = *(uint *)(*(long *)(lVar12 + 0xcb8) + 0x18);
    *(long *)((long)register0x00000008 + -0x5b0) = lVar12;
    uVar31 = 0x38;
    if (iVar30 != 0) {
      uVar31 = 0x40;
    }
    iVar29 = iVar15 * (4 << (ulong)(uVar37 & 0x1f)) + -4;
    if (uVar2 < 2) {
      iVar29 = 0;
    }
    lVar12 = *(long *)(lVar12 + (ulong)uVar26 * 8 + 0x1480) + lVar32 * iVar29 + (long)iVar17;
    uVar26 = uVar31 >> (ulong)uVar25;
    if ((int)(uVar24 - iVar30) <= (int)(uVar31 >> (ulong)uVar25)) {
      uVar26 = uVar24 - iVar30;
    }
    if (*extraout_x12 == 2) {
      bVar7 = extraout_x12[1];
      bVar8 = extraout_x12[2];
      *(short *)((long)register0x00000008 + -0x596) = (short)(char)bVar8;
      *(short *)((long)register0x00000008 + -0x59e) = (short)(char)bVar8;
      bVar9 = extraout_x12[3];
      *(short *)((long)register0x00000008 + -0x598) = (short)(char)bVar9;
      *(short *)((long)register0x00000008 + -0x59c) = (short)(char)bVar9;
      *(short *)((long)register0x00000008 + -0x59a) =
           ((short)(char)bVar8 + (short)(char)bVar7 + (short)(char)bVar9) * -2;
      bVar8 = extraout_x12[4];
      bVar9 = extraout_x12[5];
      *(short *)((long)register0x00000008 + -0x586) = (short)(char)bVar9;
      *(short *)((long)register0x00000008 + -0x58e) = (short)(char)bVar9;
      bVar10 = extraout_x12[6];
      *(short *)((long)register0x00000008 + -0x594) = (short)(char)bVar7;
      *(short *)((long)register0x00000008 + -0x5a0) = (short)(char)bVar7;
      *(short *)((long)register0x00000008 + -0x584) = (short)(char)bVar8;
      *(short *)((long)register0x00000008 + -0x590) = (short)(char)bVar8;
      *(short *)((long)register0x00000008 + -0x588) = (short)(char)bVar10;
      *(short *)((long)register0x00000008 + -0x58c) = (short)(char)bVar10;
      *(short *)((long)register0x00000008 + -0x58a) =
           ((short)(char)bVar9 + (short)(char)bVar8 + (short)(char)bVar10) * -2 + 0x80;
      puVar36 = (undefined8 *)(lVar27 + (ulong)(bVar8 == 0 && bVar7 == 0) * 8 + 0xd00);
    }
    else {
      lVar1 = (ulong)(*extraout_x12 - 3) * 4;
      uVar5 = *(ushort *)(&UNK_10dd74fd8 + lVar1);
      uVar6 = *(ushort *)(&UNK_10dd74fda + lVar1);
      *(uint *)((long)register0x00000008 + -0x5a0) = (uint)uVar5;
      *(uint *)((long)register0x00000008 + -0x59c) = (uint)uVar6;
      bVar7 = extraout_x12[7];
      *(short *)((long)register0x00000008 + -0x598) = (short)(char)bVar7;
      *(short *)((long)register0x00000008 + -0x596) =
           0x80 - ((short)(char)bVar7 + (short)(char)extraout_x12[8]);
      lVar1 = 0;
      if (uVar6 != 0) {
        lVar1 = 2;
      }
      puVar36 = (undefined8 *)(lVar27 + (lVar1 - (ulong)(uVar5 == 0)) * 8 + 0xd10);
    }
    *(undefined8 *)((long)register0x00000008 + -0x5b8) = *puVar36;
    *(int *)((long)register0x00000008 + -0x5bc) = iVar15 + 1;
    uVar18 = extraout_x8_00;
    while( true ) {
      uVar24 = (int)uVar19 + uVar26;
      uVar19 = (ulong)uVar24;
      if ((int)uVar23 < (int)uVar24) break;
      uVar31 = 0;
      if (*(int *)((long)register0x00000008 + -0x5bc) !=
          *(int *)(*(long *)((long)register0x00000008 + -0x5b0) + 0xd88) || uVar23 != uVar24) {
        uVar31 = 8;
      }
      uVar31 = uVar31 | (uint)uVar18 & 0xfffffff7;
      (**(code **)((long)register0x00000008 + -0x5b8))
                (plVar14,lVar32,puVar16,lVar12,*(undefined4 *)((long)register0x00000008 + -0x5a4),
                 uVar26,(undefined1 *)((long)register0x00000008 + -0x5a0),uVar31);
      uVar24 = uVar23 - uVar24;
      if (uVar24 == 0) break;
      lVar27 = (long)(int)uVar26;
      puVar16 = puVar16 + (long)(int)uVar26 * 4;
      uVar26 = 0x40U >> (ulong)uVar25;
      if ((int)uVar24 <= (int)(0x40U >> (ulong)uVar25)) {
        uVar26 = uVar24;
      }
      uVar18 = (ulong)(uVar31 | 4);
      plVar14 = (long *)((long)plVar14 + lVar32 * lVar27);
      lVar12 = lVar12 + lVar32 * 4;
    }
    func_0x000104c1db7c(*(undefined8 *)((long)register0x00000008 + -0x578));
    if (extraout_x9_01 == extraout_x8_01) {
      return;
    }
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 104c1db44; end: 104c1db8b;  */

void FUN_104c1db44(void)

{
  return;
}



/* Entry: 104c1db8c; end: 104c1ddcf;  */

void FUN_104c1db8c(void)

{
  FUN_104c1e20c();
  return;
}



/* Entry: 104c1ddd0; end: 104c1e04f;  */

void FUN_104c1ddd0(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6,
                  ulong param_7,ulong param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  ulong uVar9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  undefined1 *puVar10;
  int iVar11;
  long lVar12;
  short *psVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uStack_20260;
  undefined1 auStack_20258 [65800];
  undefined4 uStack_10130;
  undefined1 auStack_10128 [65800];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000104c1e6f4(param_10);
  iVar11 = ((int)param_8 + extraout_w8 * ((int)param_6 + -1) >> 10) + 2;
  uVar9 = (ulong)((uint)param_5 & ((int)(uint)param_5 >> 0x1f ^ 0xffffffffU));
  puVar10 = auStack_10128;
  do {
    iVar14 = 0;
    uVar15 = param_7;
    for (lVar12 = 0; uVar9 << 1 != lVar12; lVar12 = lVar12 + 2) {
      bVar5 = *(byte *)(param_3 + iVar14);
      param_5 = (ulong)bVar5;
      *(ushort *)(puVar10 + lVar12) =
           ((ushort)((byte *)(param_3 + iVar14))[1] - (ushort)bVar5) * (short)(uVar15 >> 6) +
           (ushort)bVar5 * 0x10;
      uVar8 = (int)uVar15 + extraout_w10;
      iVar14 = iVar14 + ((int)uVar8 >> 10);
      uVar15 = (ulong)(uVar8 & 0x3ff);
    }
    puVar10 = puVar10 + 0x100;
    param_3 = param_3 + param_4;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar10 = auStack_10128;
  do {
    psVar13 = (short *)(puVar10 + 0x100);
    for (uVar15 = 0; uVar9 != uVar15; uVar15 = uVar15 + 1) {
      iVar11 = ((int)*psVar13 - (int)psVar13[-0x80]) * ((int)param_8 >> 6) + psVar13[-0x80] * 0x10 +
               0x80;
      uVar8 = iVar11 >> 8 & (iVar11 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar8) {
        uVar8 = 0xff;
      }
      *(char *)(param_1 + uVar15) = (char)uVar8;
      psVar13 = psVar13 + 1;
    }
    uVar8 = (int)param_8 + extraout_w8;
    puVar10 = puVar10 + (long)(int)((int)uVar8 >> 3 & 0xffffff80) * 2;
    uVar8 = uVar8 & 0x3ff;
    param_8 = (ulong)uVar8;
    param_1 = param_1 + param_2;
    uVar7 = (int)param_6 - 1;
    param_6 = (ulong)uVar7;
  } while (uVar7 != 0);
  func_0x000104c1e6f4(extraout_x9);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000104c1e6f4(uStack_10130);
  iVar11 = ((int)param_7 + extraout_w8_00 * ((int)param_5 + -1) >> 10) + 2;
  uVar9 = (ulong)((uint)param_4 & ((int)(uint)param_4 >> 0x1f ^ 0xffffffffU));
  puVar10 = auStack_20258;
  do {
    iVar14 = 0;
    uVar15 = param_6;
    for (lVar12 = 0; uVar9 << 1 != lVar12; lVar12 = lVar12 + 2) {
      bVar5 = *(byte *)(param_2 + iVar14);
      *(ushort *)(puVar10 + lVar12) =
           ((ushort)((byte *)(param_2 + iVar14))[1] - (ushort)bVar5) * (short)(uVar15 >> 6) +
           (ushort)bVar5 * 0x10;
      uVar7 = (int)uVar15 + uVar8;
      iVar14 = iVar14 + ((int)uVar7 >> 10);
      uVar15 = (ulong)(uVar7 & 0x3ff);
    }
    puVar10 = puVar10 + 0x100;
    param_2 = param_2 + param_3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar10 = auStack_20258;
  do {
    psVar13 = (short *)(puVar10 + 0x100);
    for (lVar12 = 0; uVar9 * 2 - lVar12 != 0; lVar12 = lVar12 + 2) {
      *(short *)(param_1 + lVar12) =
           (short)(((int)*psVar13 - (int)psVar13[-0x80]) * ((uint)(param_7 >> 6) & 0x3ffffff) +
                   psVar13[-0x80] * 0x10 + 8 >> 4);
      psVar13 = psVar13 + 1;
    }
    uVar7 = (int)param_7 + extraout_w8_00;
    puVar10 = puVar10 + (long)(int)((int)uVar7 >> 3 & 0xffffff80) * 2;
    uVar7 = uVar7 & 0x3ff;
    param_7 = (ulong)uVar7;
    param_1 = param_1 + (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1);
    uVar6 = (int)param_5 - 1;
    param_5 = (ulong)uVar6;
  } while (uVar6 != 0);
  func_0x000104c1e6f4(extraout_x9_01);
  if (extraout_x9_02 == extraout_x8_00) {
    return;
  }
  ___stack_chk_fail();
  iVar11 = uVar7 - 1;
  do {
    iVar14 = -1;
    uVar7 = uStack_20260;
    for (uVar9 = 0; (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != uVar9; uVar9 = uVar9 + 1) {
      lVar12 = (long)((int)uVar7 >> 8) * 8;
      uVar15 = NEON_smin(CONCAT44(iVar14 + -2,iVar14 + -3),CONCAT44(iVar11,iVar11),4);
      uVar15 = CONCAT44(-(uint)(1 < iVar14),-(uint)(2 < iVar14)) & uVar15;
      iVar3 = iVar14 + -1;
      if (iVar11 <= iVar14 + -1) {
        iVar3 = iVar11;
      }
      iVar2 = iVar14;
      if (iVar11 <= iVar14) {
        iVar2 = iVar11;
      }
      if (iVar14 < 1) {
        iVar3 = 0;
      }
      iVar4 = 0;
      if (-1 < iVar14) {
        iVar4 = iVar2;
      }
      uVar16 = NEON_smin(CONCAT44(iVar14 + 2,iVar14 + 1),CONCAT44(iVar11,iVar11),4);
      uVar16 = CONCAT44(-(uint)(-3 < iVar14),-(uint)(-2 < iVar14)) & uVar16;
      uVar17 = NEON_smin(CONCAT44(iVar14 + 4,iVar14 + 3),CONCAT44(iVar11,iVar11),4);
      uVar17 = CONCAT44(-(uint)(-5 < iVar14),-(uint)(-4 < iVar14)) & uVar17;
      iVar3 = 0x40 - ((uint)*(byte *)(param_3 + (int)uVar15) * (int)(char)(&UNK_10dd75a18)[lVar12] +
                      (uint)*(byte *)(param_3 + (int)(uVar15 >> 0x20)) *
                      (int)(char)(&UNK_10dd75a19)[lVar12] +
                      (uint)*(byte *)(param_3 + iVar3) * (int)(char)(&UNK_10dd75a1a)[lVar12] +
                      (uint)*(byte *)(param_3 + iVar4) * (int)(char)(&UNK_10dd75a1b)[lVar12] +
                      (uint)*(byte *)(param_3 + (int)uVar16) * (int)(char)(&UNK_10dd75a1c)[lVar12] +
                      (uint)*(byte *)(param_3 + (int)(uVar16 >> 0x20)) *
                      (int)(char)(&UNK_10dd75a1d)[lVar12] +
                      (uint)*(byte *)(param_3 + (int)uVar17) * (int)(char)(&UNK_10dd75a1e)[lVar12] +
                     (uint)*(byte *)(param_3 + (int)(uVar17 >> 0x20)) *
                     (int)(char)(&UNK_10dd75a1f)[lVar12]);
      uVar1 = iVar3 >> 7 & (iVar3 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar1) {
        uVar1 = 0xff;
      }
      *(char *)(param_1 + uVar9) = (char)uVar1;
      iVar14 = iVar14 + ((int)(uVar7 + uVar8) >> 0xe);
      uVar7 = uVar7 + uVar8 & 0x3fff;
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    uVar7 = (int)param_6 - 1;
    param_6 = (ulong)uVar7;
  } while (uVar7 != 0);
  return;
}



/* Entry: 104c1e050; end: 104c1e20b;  */

void FUN_104c1e050(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                  int param_7,int param_8,uint param_9)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  param_7 = param_7 + -1;
  do {
    iVar7 = -1;
    uVar8 = param_9;
    for (uVar6 = 0; (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
      lVar1 = (long)((int)uVar8 >> 8) * 8;
      uVar9 = NEON_smin(CONCAT44(iVar7 + -2,iVar7 + -3),CONCAT44(param_7,param_7),4);
      uVar9 = CONCAT44(-(uint)(1 < iVar7),-(uint)(2 < iVar7)) & uVar9;
      iVar4 = iVar7 + -1;
      if (param_7 <= iVar7 + -1) {
        iVar4 = param_7;
      }
      iVar3 = iVar7;
      if (param_7 <= iVar7) {
        iVar3 = param_7;
      }
      if (iVar7 < 1) {
        iVar4 = 0;
      }
      iVar5 = 0;
      if (-1 < iVar7) {
        iVar5 = iVar3;
      }
      uVar10 = NEON_smin(CONCAT44(iVar7 + 2,iVar7 + 1),CONCAT44(param_7,param_7),4);
      uVar10 = CONCAT44(-(uint)(-3 < iVar7),-(uint)(-2 < iVar7)) & uVar10;
      uVar11 = NEON_smin(CONCAT44(iVar7 + 4,iVar7 + 3),CONCAT44(param_7,param_7),4);
      uVar11 = CONCAT44(-(uint)(-5 < iVar7),-(uint)(-4 < iVar7)) & uVar11;
      iVar4 = 0x40 - ((uint)*(byte *)(param_3 + (int)uVar9) * (int)(char)(&UNK_10dd75a18)[lVar1] +
                      (uint)*(byte *)(param_3 + (int)(uVar9 >> 0x20)) *
                      (int)(char)(&UNK_10dd75a19)[lVar1] +
                      (uint)*(byte *)(param_3 + iVar4) * (int)(char)(&UNK_10dd75a1a)[lVar1] +
                      (uint)*(byte *)(param_3 + iVar5) * (int)(char)(&UNK_10dd75a1b)[lVar1] +
                      (uint)*(byte *)(param_3 + (int)uVar10) * (int)(char)(&UNK_10dd75a1c)[lVar1] +
                      (uint)*(byte *)(param_3 + (int)(uVar10 >> 0x20)) *
                      (int)(char)(&UNK_10dd75a1d)[lVar1] +
                      (uint)*(byte *)(param_3 + (int)uVar11) * (int)(char)(&UNK_10dd75a1e)[lVar1] +
                     (uint)*(byte *)(param_3 + (int)(uVar11 >> 0x20)) *
                     (int)(char)(&UNK_10dd75a1f)[lVar1]);
      uVar2 = iVar4 >> 7 & (iVar4 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar2) {
        uVar2 = 0xff;
      }
      *(char *)(param_1 + uVar6) = (char)uVar2;
      iVar7 = iVar7 + ((int)(uVar8 + param_8) >> 0xe);
      uVar8 = uVar8 + param_8 & 0x3fff;
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    param_6 = param_6 + -1;
  } while (param_6 != 0);
  return;
}



/* Entry: 104c1e20c; end: 104c1e6e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104c1e20c(long param_1,ulong param_2,char *param_3,short *param_4,short *param_5,
                  undefined *param_6,undefined *param_7,ulong param_8)

{
  char *pcVar1;
  short *psVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint3 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int extraout_w8;
  int extraout_w8_00;
  undefined4 extraout_w8_01;
  long extraout_x8;
  long extraout_x8_00;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  char *pcVar10;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  undefined4 extraout_w10;
  int extraout_w11;
  uint extraout_w11_00;
  int iVar11;
  undefined1 *puVar12;
  uint extraout_w13;
  char *pcVar13;
  ulong unaff_x19;
  long lVar14;
  int iVar15;
  char *unaff_x20;
  ulong uVar16;
  uint uVar17;
  undefined *unaff_x21;
  char *pcVar18;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  long lVar19;
  char *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(ulong *)((long)register0x00000008 + -0x10778) = param_2;
    func_0x000104c1e6f4(*(undefined4 *)((long)register0x00000008 + 4));
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x9;
    uVar9 = (uint)param_6;
    iVar11 = ((int)((int)param_8 + extraout_w8 * (uVar9 - 1)) >> 10) + 8;
    pcVar13 = param_3 + (long)param_4 * -3;
    uVar8 = (uint)param_5;
    pcVar10 = (char *)(ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x10770);
    param_3 = &UNK_10dd75140 + (ulong)(extraout_w13 & 3) * 0x78;
    do {
      uVar16 = 0;
      pcVar18 = pcVar13 + -3;
      unaff_x22 = param_7;
      for (lVar14 = 0; (long)pcVar10 << 1 != lVar14; lVar14 = lVar14 + 2) {
        uVar17 = (uint)unaff_x22;
        iVar15 = (int)uVar16;
        if (uVar17 < 0x40) {
          uVar4 = (uint)(byte)pcVar13[iVar15] << 4;
        }
        else {
          lVar19 = (-(ulong)((uint)((int)uVar17 >> 6) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar17 >> 6) << 3) - 8;
          unaff_x24 = &UNK_10dd75140 + lVar19 + (ulong)((extraout_w13 & 1) + 3) * 0x78;
          pcVar1 = param_3 + lVar19;
          if ((int)uVar8 < 5) {
            pcVar1 = unaff_x24;
          }
          uVar20 = *(undefined8 *)pcVar1;
          uVar21 = *(undefined8 *)(pcVar18 + iVar15);
          uVar6 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
          uVar4 = (int)(short)uVar6 * (int)(short)(char)uVar20 +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x20) *
                  (int)(short)(char)((ulong)uVar20 >> 0x20) +
                  (int)(short)(ushort)(byte)(uVar6 >> 0x10) * (int)(short)(char)((ulong)uVar20 >> 8)
                  + (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x28) *
                    (int)(short)(char)((ulong)uVar20 >> 0x28) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x10) *
                  (int)(short)(char)((ulong)uVar20 >> 0x10) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x30) *
                  (int)(short)(char)((ulong)uVar20 >> 0x30) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x18) *
                  (int)(short)(char)((ulong)uVar20 >> 0x18) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x38) *
                  (int)(short)(char)((ulong)uVar20 >> 0x38) + 2 >> 2;
        }
        unaff_x23 = (undefined8 *)(ulong)uVar4;
        *(short *)(puVar12 + lVar14) = (short)uVar4;
        uVar16 = (ulong)(uint)(iVar15 + ((int)(uVar17 + extraout_w11) >> 10));
        unaff_x22 = (undefined *)(ulong)(uVar17 + extraout_w11 & 0x3ff);
      }
      puVar12 = puVar12 + 0x100;
      pcVar13 = pcVar13 + (long)param_4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x10470);
    for (uVar8 = 0; uVar8 != (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      param_3 = (char *)0x0;
      lVar19 = ((long)(param_8 << 0x20) >> 0x26) + -1;
      param_7 = &UNK_10dd75140 + (ulong)(extraout_w13 >> 2) * 0x78;
      psVar2 = (short *)(&UNK_10dd75140 + lVar19 * 8 + (ulong)((extraout_w13 >> 2 & 1) + 3) * 0x78);
      if (4 < (int)uVar9) {
        psVar2 = (short *)(param_7 + lVar19 * 8);
      }
      param_4 = (short *)0x0;
      if (0x3f < (uint)param_8) {
        param_4 = psVar2;
      }
      param_5 = (short *)(puVar12 + -0x300);
      for (; pcVar10 != param_3; param_3 = param_3 + 1) {
        if (param_4 == (short *)0x0) {
          uVar17 = param_5[0x180] + 8 >> 4;
        }
        else {
          lVar14 = (long)*param_5;
          uVar17 = (int)param_5[0x80] * (int)*(char *)((long)param_4 + 1);
          uVar16 = (ulong)uVar17;
          pcVar18 = (char *)(long)(char)param_4[1];
          unaff_x22 = (undefined *)(long)param_5[0x100];
          unaff_x23 = (undefined8 *)(long)*(char *)((long)param_4 + 3);
          unaff_x24 = (char *)(long)param_5[0x180];
          unaff_x25 = (long)(char)param_4[2];
          unaff_x26 = (long)param_5[0x200];
          unaff_x27 = (long)*(char *)((long)param_4 + 5);
          unaff_x28 = (long)param_5[0x280];
          param_2 = (ulong)param_5[0x380];
          uVar17 = (int)(uVar17 + (int)*param_5 * (int)(char)*param_4 +
                         (int)param_5[0x100] * (int)(char)param_4[1] +
                         (int)param_5[0x180] * (int)*(char *)((long)param_4 + 3) +
                         (int)param_5[0x200] * (int)(char)param_4[2] +
                         (int)param_5[0x280] * (int)*(char *)((long)param_4 + 5) +
                         (int)param_5[0x300] * (int)(char)param_4[3] +
                         (int)param_5[0x380] * (int)*(char *)((long)param_4 + 7) + 0x200) >> 10;
        }
        param_7 = (undefined *)(ulong)uVar17;
        uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar17) {
          uVar17 = 0xff;
        }
        param_3[param_1] = (char)uVar17;
        param_5 = param_5 + 1;
      }
      uVar17 = (uint)param_8 + extraout_w8;
      puVar12 = puVar12 + (long)(int)((int)uVar17 >> 3 & 0xffffff80) * 2;
      param_8 = (ulong)(uVar17 & 0x3ff);
      param_1 = param_1 + *(long *)((long)register0x00000008 + -0x10778);
    }
    func_0x000104c1e6f4(*(undefined8 *)((long)register0x00000008 + -0x70));
    if (extraout_x9_00 == extraout_x8) break;
    ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x107e0) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x107d8) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x107d0) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x107c8) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x107c0) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x107b8) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x107b0) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x107a8) = pcVar18;
    *(ulong *)((long)register0x00000008 + -0x107a0) = uVar16;
    *(long *)((long)register0x00000008 + -0x10798) = lVar14;
    *(undefined1 **)((long)register0x00000008 + -0x10790) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x10788) = 0x104c1e48c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10790);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x20ef0);
    func_0x000104c1e6f4(*(undefined4 *)((long)register0x00000008 + -0x10780));
    *(undefined8 *)((long)register0x00000008 + -0x107f0) = extraout_x9_01;
    uVar9 = (uint)param_5;
    iVar11 = ((int)((int)param_7 + extraout_w8_00 * (uVar9 - 1)) >> 10) + 8;
    pcVar13 = (char *)(param_2 + (long)param_3 * -3);
    uVar8 = (uint)param_4;
    uVar16 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    do {
      unaff_x19 = 0;
      unaff_x20 = pcVar13 + -3;
      unaff_x21 = param_6;
      for (param_2 = 0; uVar16 << 1 != param_2; param_2 = param_2 + 2) {
        uVar17 = (uint)unaff_x21;
        iVar15 = (int)unaff_x19;
        if (uVar17 < 0x40) {
          uVar4 = (uint)(byte)pcVar13[iVar15] << 4;
        }
        else {
          lVar14 = (-(ulong)((uint)((int)uVar17 >> 6) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar17 >> 6) << 3) - 8;
          unaff_x23 = (undefined8 *)
                      (&UNK_10dd75140 + lVar14 + (ulong)((extraout_w11_00 & 1) + 3) * 0x78);
          puVar3 = (undefined8 *)(&UNK_10dd75140 + lVar14 + (ulong)(extraout_w11_00 & 3) * 0x78);
          if ((int)uVar8 < 5) {
            puVar3 = unaff_x23;
          }
          uVar20 = *puVar3;
          uVar21 = *(undefined8 *)(unaff_x20 + iVar15);
          uVar6 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
          uVar4 = (int)(short)uVar6 * (int)(short)(char)uVar20 +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x20) *
                  (int)(short)(char)((ulong)uVar20 >> 0x20) +
                  (int)(short)(ushort)(byte)(uVar6 >> 0x10) * (int)(short)(char)((ulong)uVar20 >> 8)
                  + (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x28) *
                    (int)(short)(char)((ulong)uVar20 >> 0x28) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x10) *
                  (int)(short)(char)((ulong)uVar20 >> 0x10) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x30) *
                  (int)(short)(char)((ulong)uVar20 >> 0x30) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x18) *
                  (int)(short)(char)((ulong)uVar20 >> 0x18) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x38) *
                  (int)(short)(char)((ulong)uVar20 >> 0x38) + 2 >> 2;
        }
        unaff_x22 = (undefined *)(ulong)uVar4;
        *(short *)(puVar12 + param_2) = (short)uVar4;
        uVar17 = uVar17 + (int)param_8;
        unaff_x19 = (ulong)(uint)(iVar15 + ((int)uVar17 >> 10));
        unaff_x21 = (undefined *)(ulong)(uVar17 & 0x3ff);
      }
      puVar12 = puVar12 + 0x100;
      pcVar13 = pcVar13 + (long)param_3;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x20bf0);
    uVar7 = (ulong)param_4 & 0xffffffff;
    uVar5 = (ulong)param_4 >> 0x1f;
    for (uVar8 = 0; uVar8 != (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      param_2 = 0;
      lVar14 = (((long)param_7 << 0x20) >> 0x26) + -1;
      param_6 = &UNK_10dd75140 + (ulong)(extraout_w11_00 >> 2) * 0x78;
      pcVar13 = &UNK_10dd75140 + lVar14 * 8 + (ulong)((extraout_w11_00 >> 2 & 1) + 3) * 0x78;
      if (4 < (int)uVar9) {
        pcVar13 = param_6 + lVar14 * 8;
      }
      param_3 = (char *)0x0;
      if (0x3f < (uint)param_7) {
        param_3 = pcVar13;
      }
      param_4 = (short *)(puVar12 + -0x300);
      for (; uVar16 != param_2; param_2 = param_2 + 1) {
        if (param_3 == (char *)0x0) {
          param_6 = (undefined *)(ulong)(ushort)param_4[0x180];
        }
        else {
          param_8 = (ulong)*param_4;
          unaff_x19 = (ulong)(uint)((int)param_4[0x80] * (int)param_3[1]);
          unaff_x20 = (char *)(long)param_3[2];
          unaff_x21 = (undefined *)(long)param_4[0x100];
          unaff_x22 = (undefined *)(long)param_3[3];
          unaff_x23 = (undefined8 *)(long)param_4[0x180];
          unaff_x24 = (char *)(long)param_3[4];
          unaff_x25 = (long)param_4[0x200];
          unaff_x26 = (long)param_3[5];
          unaff_x27 = (long)param_4[0x280];
          unaff_x28 = (long)param_3[6];
          param_6 = (undefined *)
                    (ulong)((int)param_4[0x80] * (int)param_3[1] + (int)*param_4 * (int)*param_3 +
                            (int)param_4[0x100] * (int)param_3[2] +
                            (int)param_4[0x180] * (int)param_3[3] +
                            (int)param_4[0x200] * (int)param_3[4] +
                            (int)param_4[0x280] * (int)param_3[5] +
                            (int)param_4[0x300] * (int)param_3[6] +
                            (int)param_4[0x380] * (int)param_3[7] + 0x20U >> 6);
        }
        *(short *)(param_1 + param_2 * 2) = (short)param_6;
        param_4 = param_4 + 1;
      }
      uVar17 = (uint)param_7 + extraout_w8_00;
      puVar12 = puVar12 + (long)(int)((int)uVar17 >> 3 & 0xffffff80) * 2;
      param_7 = (undefined *)(ulong)(uVar17 & 0x3ff);
      param_1 = param_1 + (-(uVar5 & 1) & 0xfffffffe00000000 | uVar7 << 1);
    }
    func_0x000104c1e6f4(*(undefined8 *)((long)register0x00000008 + -0x107f0));
    if (extraout_x9_02 == extraout_x8_00) {
      return;
    }
    unaff_x30 = 0x104c1e6e8;
    ___stack_chk_fail();
    *(undefined4 *)((long)register0x00000008 + -0x20eec) = extraout_w9;
    *(undefined4 *)((long)register0x00000008 + -0x20ee8) = extraout_w10;
    *(undefined4 *)((long)register0x00000008 + -0x20ef0) = extraout_w8_01;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20ef0);
  }
  return;
}



/* Entry: 104c1e6e8; end: 104c1e72b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104c1e6e8(undefined8 param_1,long param_2,ulong param_3,char *param_4,short *param_5,
                  short *param_6,undefined *param_7,undefined *param_8,ulong param_9)

{
  char *pcVar1;
  short *psVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint3 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  char *pcVar10;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x9_03;
  undefined8 in_x9;
  undefined8 extraout_x10;
  undefined8 in_x10;
  int extraout_w11;
  uint extraout_w11_00;
  int iVar11;
  undefined4 *puVar12;
  uint extraout_w13;
  char *pcVar13;
  long lVar14;
  ulong unaff_x19;
  int iVar15;
  ulong uVar16;
  char *unaff_x20;
  uint uVar17;
  char *pcVar18;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar19;
  undefined8 *unaff_x23;
  char *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined4 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  
  while( true ) {
    *(int *)((long)register0x00000008 + 4) = (int)in_x9;
    *(int *)((long)register0x00000008 + 8) = (int)in_x10;
    *(int *)register0x00000008 = (int)param_1;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined4 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(ulong *)((long)register0x00000008 + -0x10778) = param_3;
    func_0x000104c1e6f4(*(undefined4 *)((long)register0x00000008 + 4));
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x9;
    uVar9 = (uint)param_7;
    iVar11 = ((int)((int)param_9 + extraout_w8 * (uVar9 - 1)) >> 10) + 8;
    pcVar13 = param_4 + (long)param_5 * -3;
    uVar8 = (uint)param_6;
    pcVar10 = (char *)(ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    puVar12 = (undefined4 *)((long)register0x00000008 + -0x10770);
    param_4 = &UNK_10dd75140 + (ulong)(extraout_w13 & 3) * 0x78;
    do {
      uVar16 = 0;
      pcVar18 = pcVar13 + -3;
      unaff_x22 = param_8;
      for (lVar14 = 0; (long)pcVar10 << 1 != lVar14; lVar14 = lVar14 + 2) {
        uVar17 = (uint)unaff_x22;
        iVar15 = (int)uVar16;
        if (uVar17 < 0x40) {
          uVar4 = (uint)(byte)pcVar13[iVar15] << 4;
        }
        else {
          lVar19 = (-(ulong)((uint)((int)uVar17 >> 6) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar17 >> 6) << 3) - 8;
          unaff_x24 = &UNK_10dd75140 + lVar19 + (ulong)((extraout_w13 & 1) + 3) * 0x78;
          pcVar1 = param_4 + lVar19;
          if ((int)uVar8 < 5) {
            pcVar1 = unaff_x24;
          }
          uVar20 = *(undefined8 *)pcVar1;
          uVar21 = *(undefined8 *)(pcVar18 + iVar15);
          uVar6 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
          uVar4 = (int)(short)uVar6 * (int)(short)(char)uVar20 +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x20) *
                  (int)(short)(char)((ulong)uVar20 >> 0x20) +
                  (int)(short)(ushort)(byte)(uVar6 >> 0x10) * (int)(short)(char)((ulong)uVar20 >> 8)
                  + (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x28) *
                    (int)(short)(char)((ulong)uVar20 >> 0x28) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x10) *
                  (int)(short)(char)((ulong)uVar20 >> 0x10) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x30) *
                  (int)(short)(char)((ulong)uVar20 >> 0x30) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x18) *
                  (int)(short)(char)((ulong)uVar20 >> 0x18) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x38) *
                  (int)(short)(char)((ulong)uVar20 >> 0x38) + 2 >> 2;
        }
        unaff_x23 = (undefined8 *)(ulong)uVar4;
        *(short *)((long)puVar12 + lVar14) = (short)uVar4;
        uVar16 = (ulong)(uint)(iVar15 + ((int)(uVar17 + extraout_w11) >> 10));
        unaff_x22 = (undefined *)(ulong)(uVar17 + extraout_w11 & 0x3ff);
      }
      puVar12 = puVar12 + 0x40;
      pcVar13 = pcVar13 + (long)param_5;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar12 = (undefined4 *)((long)register0x00000008 + -0x10470);
    for (uVar8 = 0; uVar8 != (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      param_4 = (char *)0x0;
      lVar19 = ((long)(param_9 << 0x20) >> 0x26) + -1;
      param_8 = &UNK_10dd75140 + (ulong)(extraout_w13 >> 2) * 0x78;
      psVar2 = (short *)(&UNK_10dd75140 + lVar19 * 8 + (ulong)((extraout_w13 >> 2 & 1) + 3) * 0x78);
      if (4 < (int)uVar9) {
        psVar2 = (short *)(param_8 + lVar19 * 8);
      }
      param_5 = (short *)0x0;
      if (0x3f < (uint)param_9) {
        param_5 = psVar2;
      }
      param_6 = (short *)(puVar12 + -0xc0);
      for (; pcVar10 != param_4; param_4 = param_4 + 1) {
        if (param_5 == (short *)0x0) {
          uVar17 = param_6[0x180] + 8 >> 4;
        }
        else {
          lVar14 = (long)*param_6;
          uVar17 = (int)param_6[0x80] * (int)*(char *)((long)param_5 + 1);
          uVar16 = (ulong)uVar17;
          pcVar18 = (char *)(long)(char)param_5[1];
          unaff_x22 = (undefined *)(long)param_6[0x100];
          unaff_x23 = (undefined8 *)(long)*(char *)((long)param_5 + 3);
          unaff_x24 = (char *)(long)param_6[0x180];
          unaff_x25 = (long)(char)param_5[2];
          unaff_x26 = (long)param_6[0x200];
          unaff_x27 = (long)*(char *)((long)param_5 + 5);
          unaff_x28 = (long)param_6[0x280];
          param_3 = (ulong)param_6[0x380];
          uVar17 = (int)(uVar17 + (int)*param_6 * (int)(char)*param_5 +
                         (int)param_6[0x100] * (int)(char)param_5[1] +
                         (int)param_6[0x180] * (int)*(char *)((long)param_5 + 3) +
                         (int)param_6[0x200] * (int)(char)param_5[2] +
                         (int)param_6[0x280] * (int)*(char *)((long)param_5 + 5) +
                         (int)param_6[0x300] * (int)(char)param_5[3] +
                         (int)param_6[0x380] * (int)*(char *)((long)param_5 + 7) + 0x200) >> 10;
        }
        param_8 = (undefined *)(ulong)uVar17;
        uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar17) {
          uVar17 = 0xff;
        }
        param_4[param_2] = (char)uVar17;
        param_6 = param_6 + 1;
      }
      uVar17 = (uint)param_9 + extraout_w8;
      puVar12 = (undefined4 *)((long)puVar12 + (long)(int)((int)uVar17 >> 3 & 0xffffff80) * 2);
      param_9 = (ulong)(uVar17 & 0x3ff);
      param_2 = param_2 + *(long *)((long)register0x00000008 + -0x10778);
    }
    func_0x000104c1e6f4(*(undefined8 *)((long)register0x00000008 + -0x70));
    if (extraout_x9_00 == extraout_x8) break;
    ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x107e0) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x107d8) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x107d0) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x107c8) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x107c0) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x107b8) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x107b0) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x107a8) = pcVar18;
    *(ulong *)((long)register0x00000008 + -0x107a0) = uVar16;
    *(long *)((long)register0x00000008 + -0x10798) = lVar14;
    *(undefined4 **)((long)register0x00000008 + -0x10790) =
         (undefined4 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x10788) = 0x104c1e48c;
    unaff_x29 = (undefined4 *)((long)register0x00000008 + -0x10790);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar12 = (undefined4 *)((long)register0x00000008 + -0x20ef0);
    func_0x000104c1e6f4(*(undefined4 *)((long)register0x00000008 + -0x10780));
    *(undefined8 *)((long)register0x00000008 + -0x107f0) = extraout_x9_01;
    uVar9 = (uint)param_6;
    iVar11 = ((int)((int)param_8 + extraout_w8_00 * (uVar9 - 1)) >> 10) + 8;
    pcVar13 = (char *)(param_3 + (long)param_4 * -3);
    uVar8 = (uint)param_5;
    uVar16 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    do {
      unaff_x19 = 0;
      unaff_x20 = pcVar13 + -3;
      unaff_x21 = param_7;
      for (param_3 = 0; uVar16 << 1 != param_3; param_3 = param_3 + 2) {
        uVar17 = (uint)unaff_x21;
        iVar15 = (int)unaff_x19;
        if (uVar17 < 0x40) {
          uVar4 = (uint)(byte)pcVar13[iVar15] << 4;
        }
        else {
          lVar14 = (-(ulong)((uint)((int)uVar17 >> 6) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar17 >> 6) << 3) - 8;
          unaff_x23 = (undefined8 *)
                      (&UNK_10dd75140 + lVar14 + (ulong)((extraout_w11_00 & 1) + 3) * 0x78);
          puVar3 = (undefined8 *)(&UNK_10dd75140 + lVar14 + (ulong)(extraout_w11_00 & 3) * 0x78);
          if ((int)uVar8 < 5) {
            puVar3 = unaff_x23;
          }
          uVar20 = *puVar3;
          uVar21 = *(undefined8 *)(unaff_x20 + iVar15);
          uVar6 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
          uVar4 = (int)(short)uVar6 * (int)(short)(char)uVar20 +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x20) *
                  (int)(short)(char)((ulong)uVar20 >> 0x20) +
                  (int)(short)(ushort)(byte)(uVar6 >> 0x10) * (int)(short)(char)((ulong)uVar20 >> 8)
                  + (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x28) *
                    (int)(short)(char)((ulong)uVar20 >> 0x28) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x10) *
                  (int)(short)(char)((ulong)uVar20 >> 0x10) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x30) *
                  (int)(short)(char)((ulong)uVar20 >> 0x30) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x18) *
                  (int)(short)(char)((ulong)uVar20 >> 0x18) +
                  (int)(short)(ushort)(byte)((ulong)uVar21 >> 0x38) *
                  (int)(short)(char)((ulong)uVar20 >> 0x38) + 2 >> 2;
        }
        unaff_x22 = (undefined *)(ulong)uVar4;
        *(short *)((long)puVar12 + param_3) = (short)uVar4;
        uVar17 = uVar17 + (int)param_9;
        unaff_x19 = (ulong)(uint)(iVar15 + ((int)uVar17 >> 10));
        unaff_x21 = (undefined *)(ulong)(uVar17 & 0x3ff);
      }
      puVar12 = (undefined4 *)((long)puVar12 + 0x100);
      pcVar13 = pcVar13 + (long)param_4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar12 = (undefined4 *)((long)register0x00000008 + -0x20bf0);
    uVar7 = (ulong)param_5 & 0xffffffff;
    uVar5 = (ulong)param_5 >> 0x1f;
    for (uVar8 = 0; uVar8 != (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      param_3 = 0;
      lVar14 = (((long)param_8 << 0x20) >> 0x26) + -1;
      param_7 = &UNK_10dd75140 + (ulong)(extraout_w11_00 >> 2) * 0x78;
      pcVar13 = &UNK_10dd75140 + lVar14 * 8 + (ulong)((extraout_w11_00 >> 2 & 1) + 3) * 0x78;
      if (4 < (int)uVar9) {
        pcVar13 = param_7 + lVar14 * 8;
      }
      param_4 = (char *)0x0;
      if (0x3f < (uint)param_8) {
        param_4 = pcVar13;
      }
      param_5 = (short *)(puVar12 + -0xc0);
      for (; uVar16 != param_3; param_3 = param_3 + 1) {
        if (param_4 == (char *)0x0) {
          param_7 = (undefined *)(ulong)(ushort)param_5[0x180];
        }
        else {
          param_9 = (ulong)*param_5;
          unaff_x19 = (ulong)(uint)((int)param_5[0x80] * (int)param_4[1]);
          unaff_x20 = (char *)(long)param_4[2];
          unaff_x21 = (undefined *)(long)param_5[0x100];
          unaff_x22 = (undefined *)(long)param_4[3];
          unaff_x23 = (undefined8 *)(long)param_5[0x180];
          unaff_x24 = (char *)(long)param_4[4];
          unaff_x25 = (long)param_5[0x200];
          unaff_x26 = (long)param_4[5];
          unaff_x27 = (long)param_5[0x280];
          unaff_x28 = (long)param_4[6];
          param_7 = (undefined *)
                    (ulong)((int)param_5[0x80] * (int)param_4[1] + (int)*param_5 * (int)*param_4 +
                            (int)param_5[0x100] * (int)param_4[2] +
                            (int)param_5[0x180] * (int)param_4[3] +
                            (int)param_5[0x200] * (int)param_4[4] +
                            (int)param_5[0x280] * (int)param_4[5] +
                            (int)param_5[0x300] * (int)param_4[6] +
                            (int)param_5[0x380] * (int)param_4[7] + 0x20U >> 6);
        }
        *(short *)(param_2 + param_3 * 2) = (short)param_7;
        param_5 = param_5 + 1;
      }
      uVar17 = (uint)param_8 + extraout_w8_00;
      puVar12 = (undefined4 *)((long)puVar12 + (long)(int)((int)uVar17 >> 3 & 0xffffff80) * 2);
      param_8 = (undefined *)(ulong)(uVar17 & 0x3ff);
      param_2 = param_2 + (-(uVar5 & 1) & 0xfffffffe00000000 | uVar7 << 1);
    }
    func_0x000104c1e6f4(*(undefined8 *)((long)register0x00000008 + -0x107f0));
    if (extraout_x9_02 == extraout_x8_00) {
      return;
    }
    unaff_x30 = FUN_104c1e6e8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20ef0);
    param_1 = extraout_x8_01;
    in_x9 = extraout_x9_03;
    in_x10 = extraout_x10;
  }
  return;
}



/* Entry: 104c1e72c; end: 104c1e857;  */

void FUN_104c1e72c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x19;
  
  func_0x000104c1e878();
  iVar1 = *(int *)(unaff_x19 + 0x48) + -1;
  *(int *)(unaff_x19 + 0x48) = iVar1;
  if (*(int *)(unaff_x19 + 0x4c) == 0) {
    param_2[1] = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 **)(unaff_x19 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)();
    return;
  }
  func_0x000104c1e858();
  _free(*param_2);
  if (iVar1 != 0) {
    return;
  }
  _pthread_mutex_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 104c1e858; end: 104c1e87f;  */

void FUN_104c1e858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)();
  return;
}



/* Entry: 104c1e880; end: 104c1e933;  */

/* WARNING: Possible PIC construction at 0x000104c1e8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c1e900) */

uint FUN_104c1e880(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  func_0x000100daf8ec();
  if ((int)param_1 == 0) {
    iVar3 = 0;
  }
  else {
    func_0x000104c1e9d8();
    if ((int)param_1 != 0) {
      func_0x000104c1e9d8();
      param_4 = param_4 + (int)param_1 + 1;
    }
    iVar3 = 1 << (ulong)(param_4 & 0x1f);
  }
  uVar2 = 0;
  for (; param_4 != 0; param_4 = param_4 - 1) {
    func_0x000104c1e9d8();
    uVar2 = (uint)param_1 | uVar2 << 1;
  }
  if (param_3 < param_2 * 2) {
    param_2 = (param_3 + -1) - param_2;
  }
  uVar2 = uVar2 + iVar3;
  uVar1 = -(uVar2 + 1 >> 1);
  if ((uVar2 & 1) == 0) {
    uVar1 = uVar2 >> 1;
  }
  if (uVar2 <= (uint)(param_2 * 2)) {
    uVar2 = param_2 + uVar1;
  }
  return uVar2;
}



/* Entry: 104c1e934; end: 104c1e9df;  */

uint FUN_104c1e934(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = -(param_2 + 1 >> 1);
  if ((param_2 & 1) == 0) {
    uVar1 = param_2 >> 1;
  }
  if (param_2 <= (uint)(param_1 * 2)) {
    param_2 = param_1 + uVar1;
  }
  return param_2;
}



/* Entry: 104c1e9e0; end: 104c1ef0b;  */

undefined4 FUN_104c1e9e0(long *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  
  plVar5 = param_1;
  _bzero(param_1,0x328);
  func_0x000104c21520();
  *(char *)param_1 = (char)plVar5;
  if (2 < ((uint)plVar5 & 0xff)) {
    return 0xffffffea;
  }
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x164) = (char)plVar5;
  func_0x000104c21518();
  cVar2 = (char)plVar5;
  *(char *)((long)param_1 + 0x165) = cVar2;
  if ((int)plVar5 == 0) {
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x166) = (char)plVar5;
    if ((int)plVar5 != 0) {
      func_0x000104c215ac();
      *(int *)(param_1 + 0x2d) = (int)plVar5;
      func_0x000104c215ac();
      *(int *)((long)param_1 + 0x16c) = (int)plVar5;
      if (param_3 != 0) {
        if ((int)param_1[0x2d] == 0) {
          return 0xffffffea;
        }
        if ((int)plVar5 == 0) {
          return 0xffffffea;
        }
      }
      func_0x000104c21518();
      *(char *)(param_1 + 0x2e) = (char)plVar5;
      if ((int)plVar5 != 0) {
        plVar5 = param_2;
        func_0x000104c13b4c();
        if ((int)plVar5 == -1) {
          return 0xffffffea;
        }
        *(int *)((long)param_1 + 0x174) = (int)plVar5 + 1;
      }
      func_0x000104c21518();
      *(char *)(param_1 + 0x2f) = (char)plVar5;
      if ((int)plVar5 != 0) {
        func_0x000104c21548();
        *(char *)((long)param_1 + 0x179) = (char)plVar5 + '\x01';
        func_0x000104c215ac();
        *(int *)((long)param_1 + 0x17c) = (int)plVar5;
        if ((param_3 != 0) && ((int)plVar5 == 0)) {
          return 0xffffffea;
        }
        func_0x000104c21548();
        *(char *)(param_1 + 0x30) = (char)plVar5 + '\x01';
        func_0x000104c21548();
        *(char *)((long)param_1 + 0x181) = (char)plVar5 + '\x01';
      }
    }
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x182) = (char)plVar5;
    func_0x000104c21548();
    uVar4 = (int)plVar5 + 1;
    uVar8 = (ulong)uVar4;
    *(char *)((long)param_1 + 0x22) = (char)uVar4;
    plVar10 = param_1 + 0x36;
    pbVar11 = (byte *)((long)param_1 + 0x2c);
    for (uVar9 = 0; iVar3 = (int)plVar5, uVar9 < (uVar8 & 0xff); uVar9 = uVar9 + 1) {
      plVar5 = param_2;
      FUN_104c139b4(param_2,0xc);
      cVar2 = (char)plVar5;
      *(short *)(pbVar11 + -4) = (short)plVar5;
      if (((ulong)plVar5 & 0xffff) != 0) {
        if (((ulong)plVar5 & 0xff) == 0) {
          return 0xffffffea;
        }
        if (((ulong)plVar5 & 0xf00) == 0) {
          return 0xffffffea;
        }
      }
      func_0x000104c21520();
      pbVar11[-8] = cVar2 + 2;
      plVar5 = param_2;
      func_0x000104c2152c();
      pbVar11[-7] = (byte)plVar5;
      if (3 < pbVar11[-8]) {
        func_0x000104c21518();
        pbVar11[-2] = (byte)plVar5;
      }
      if ((char)param_1[0x2f] != '\0') {
        func_0x000104c21518();
        pbVar11[-1] = (byte)plVar5;
        if ((int)plVar5 != 0) {
          func_0x000104c21604();
          *(int *)(plVar10 + -1) = (int)plVar5;
          func_0x000104c21604();
          *(int *)((long)plVar10 + -4) = (int)plVar5;
          func_0x000104c21518();
          *(char *)plVar10 = (char)plVar5;
        }
      }
      if (*(char *)((long)param_1 + 0x182) == '\0') {
        plVar5 = (long *)(ulong)*pbVar11;
        if (*pbVar11 == 0) goto LAB_104c1ec6c;
LAB_104c1ec58:
        func_0x000104c21554();
        bVar6 = (char)plVar5 + 1;
      }
      else {
        func_0x000104c21518();
        *pbVar11 = (byte)plVar5;
        if ((int)plVar5 != 0) goto LAB_104c1ec58;
LAB_104c1ec6c:
        bVar6 = 10;
      }
      pbVar11[-6] = bVar6;
      uVar8 = (ulong)*(byte *)((long)param_1 + 0x22);
      plVar10 = (long *)((long)plVar10 + 0xc);
      pbVar11 = pbVar11 + 10;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x164) == '\0') {
      return 0xffffffea;
    }
    *(char *)((long)param_1 + 0x22) = '\x01';
    func_0x000104c21520();
    *(char *)((long)param_1 + 0x24) = cVar2;
    plVar5 = param_2;
    func_0x000104c2152c();
    iVar3 = (int)plVar5;
    *(char *)((long)param_1 + 0x25) = (char)plVar5;
    *(char *)((long)param_1 + 0x26) = '\n';
  }
  func_0x000104c21554();
  *(char *)((long)param_1 + 0x183) = (char)iVar3 + '\x01';
  func_0x000104c21554();
  *(char *)((long)param_1 + 0x184) = (char)iVar3 + '\x01';
  func_0x000104c21604();
  *(int *)((long)param_1 + 4) = iVar3 + 1;
  func_0x000104c21604();
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(char *)((long)param_1 + 0x165) == '\0') {
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x185) = (char)iVar3;
    if (iVar3 != 0) {
      func_0x000104c21554();
      *(char *)((long)param_1 + 0x186) = (char)iVar3 + '\x02';
      func_0x000104c21520();
      *(char *)((long)param_1 + 0x187) = (char)iVar3 + *(char *)((long)param_1 + 0x186) + '\x01';
    }
  }
  func_0x000104c21518();
  *(char *)(param_1 + 0x31) = (char)iVar3;
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x189) = (char)iVar3;
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x18a) = (char)iVar3;
  if (*(char *)((long)param_1 + 0x165) == '\0') {
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x18b) = (char)iVar3;
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x18c) = (char)iVar3;
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x18d) = (char)iVar3;
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x18e) = (char)iVar3;
    func_0x000104c21518();
    *(char *)((long)param_1 + 399) = (char)iVar3;
    if (iVar3 != 0) {
      func_0x000104c21518();
      *(char *)(param_1 + 0x32) = (char)iVar3;
      func_0x000104c21518();
      *(char *)((long)param_1 + 0x191) = (char)iVar3;
    }
    func_0x000104c21518();
    if (iVar3 == 0) {
      func_0x000104c21518();
      *(int *)((long)param_1 + 0x194) = iVar3;
      if (iVar3 != 0) goto LAB_104c1ece4;
LAB_104c1ecec:
      iVar3 = 2;
    }
    else {
      pcVar1 = (char *)((long)param_1 + 0x194);
      pcVar1[0] = '\x02';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
LAB_104c1ece4:
      func_0x000104c21518();
      if (iVar3 != 0) goto LAB_104c1ecec;
      func_0x000104c21518();
    }
    *(int *)(param_1 + 0x33) = iVar3;
    if (*(char *)((long)param_1 + 399) != '\0') {
      func_0x000104c21520();
      *(char *)((long)param_1 + 0x19c) = (char)iVar3 + '\x01';
    }
  }
  else {
    pcVar1 = (char *)((long)param_1 + 0x194);
    pcVar1[0] = '\x02';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\x02';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
  }
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x19d) = (char)iVar3;
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x19e) = (char)iVar3;
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x19f) = (char)iVar3;
  func_0x000104c21518();
  *(char *)(param_1 + 4) = (char)iVar3;
  cVar2 = (char)*param_1;
  if ((cVar2 == '\x02') && (iVar3 != 0)) {
    func_0x000104c21518();
    *(char *)(param_1 + 4) = (char)param_1[4] + (char)iVar3;
    cVar2 = (char)*param_1;
  }
  if (cVar2 != '\x01') {
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x1a2) = (char)iVar3;
  }
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x1a3) = (char)iVar3;
  if (iVar3 == 0) {
    param_1[2] = 0x200000002;
    plVar5 = (long *)0x2;
  }
  else {
    plVar5 = param_2;
    func_0x000104c21534();
    *(int *)(param_1 + 2) = (int)plVar5;
    plVar5 = param_2;
    func_0x000104c21534();
    *(int *)((long)param_1 + 0x14) = (int)plVar5;
    plVar5 = param_2;
    func_0x000104c21534();
  }
  uVar4 = (uint)plVar5;
  *(uint *)(param_1 + 3) = uVar4;
  if (*(char *)((long)param_1 + 0x1a2) == '\0') {
    if ((((int)param_1[2] == 1) && (*(int *)((long)param_1 + 0x14) == 0xd)) && (uVar4 == 0)) {
      pcVar1 = (char *)((long)param_1 + 0xc);
      pcVar1[0] = '\x03';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(char *)((long)param_1 + 0x21) = '\x01';
      uVar7 = 0;
      if ((char)*param_1 != '\x01') {
        if ((char)*param_1 != '\x02') {
          return 0xffffffea;
        }
        if ((char)param_1[4] != '\x02') {
          return 0xffffffea;
        }
      }
      goto LAB_104c1eec0;
    }
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x21) = (char)uVar4;
    cVar2 = (char)*param_1;
    if (cVar2 == '\x02') {
      if ((char)param_1[4] == '\x02') {
        func_0x000104c21518();
        *(char *)(param_1 + 0x34) = (char)uVar4;
        if (uVar4 != 0) {
          func_0x000104c21518();
          *(char *)((long)param_1 + 0x1a1) = (char)uVar4;
          if ((char)param_1[0x34] != '\0') goto LAB_104c1ee8c;
        }
LAB_104c1ee78:
        uVar7 = 3;
      }
      else {
        *(char *)(param_1 + 0x34) = '\x01';
        uVar4 = (uint)*(byte *)((long)param_1 + 0x1a1);
LAB_104c1ee8c:
        uVar7 = 1;
        if (uVar4 == 0) {
          uVar7 = 2;
        }
      }
      *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    }
    else {
      if (cVar2 == '\x01') goto LAB_104c1ee78;
      if (cVar2 == '\0') {
        pcVar1 = (char *)((long)param_1 + 0xc);
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        *(undefined2 *)(param_1 + 0x34) = 0x101;
      }
    }
    if ((*(byte *)((long)param_1 + 0x1a1) & *(byte *)(param_1 + 0x34)) == 0) {
      uVar7 = 0;
    }
    else {
      plVar5 = param_2;
      func_0x000104c2152c();
      uVar7 = SUB84(plVar5,0);
    }
  }
  else {
    func_0x000104c21518();
    uVar7 = 0;
    *(char *)((long)param_1 + 0x21) = (char)plVar5;
    pcVar1 = (char *)((long)param_1 + 0xc);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(undefined2 *)(param_1 + 0x34) = 0x101;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
LAB_104c1eec0:
  cVar2 = (char)uVar7;
  if (((param_3 != 0) && ((int)param_1[3] == 0)) && (*(int *)((long)param_1 + 0xc) != 3)) {
    return 0xffffffea;
  }
  if (*(char *)((long)param_1 + 0x1a2) == '\0') {
    func_0x000104c21518();
    *(char *)((long)param_1 + 0x1a4) = cVar2;
  }
  func_0x000104c21518();
  *(char *)((long)param_1 + 0x1a5) = cVar2;
  plVar5 = param_2;
  func_0x000104c13954();
  if (*(int *)((long)param_2 + 0xc) == 0) {
    if (param_3 == 0) {
      return 0;
    }
    if (((int)plVar5 != 0) && (*param_2 == 0)) {
      uVar8 = param_2[4] - param_2[2];
      uVar9 = uVar8;
      do {
        if ((long)uVar9 < 1) {
          if (uVar8 < 0x8000000000000000) {
            return 0;
          }
          return 0xffffffea;
        }
        pcVar1 = (char *)(param_2[2] + -1 + uVar9);
        uVar9 = uVar9 - 1;
      } while (*pcVar1 == '\0');
    }
  }
  return 0xffffffea;
}



/* Entry: 104c1ef0c; end: 104c2128f;  */

long * FUN_104c1ef0c(long *param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  char cVar16;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  undefined4 uVar17;
  int extraout_w8_04;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar21;
  undefined8 uVar22;
  int iVar23;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x11_01;
  long lVar24;
  undefined8 *puVar25;
  byte bVar26;
  uint uVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar28;
  long extraout_x13;
  long extraout_x13_00;
  long lVar29;
  long *plVar30;
  char *unaff_x20;
  char *pcVar31;
  char *pcVar32;
  long *plVar33;
  uint *puVar34;
  int iVar35;
  int *piVar36;
  long lVar37;
  undefined1 *puVar38;
  ulong uVar39;
  ushort *puVar40;
  byte *pbVar41;
  uint uVar42;
  int iVar43;
  long lVar44;
  undefined *puVar45;
  undefined1 *puVar46;
  int *piStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *aplStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_c8 = (long *)*param_2;
  pcStack_b8 = (char *)((long)plStack_c8 + param_2[1]);
  lStack_d8 = 0;
  uStack_d0 = 0;
  plVar14 = param_1;
  pcVar15 = (char *)param_2;
  plStack_c0 = plStack_c8;
  func_0x000104c21510();
  if (((int)param_1[0x1ecc] != 0) && ((int)plVar14 != 0)) goto LAB_104c21104;
  func_0x000104c214f8();
  plVar33 = plVar14;
  func_0x000104c21510();
  plVar11 = plVar33;
  func_0x000104c21510();
  plVar12 = plVar11;
  func_0x000104c21510();
  if ((int)plVar33 == 0) {
    iVar10 = 0;
    uVar27 = 0;
  }
  else {
    func_0x000104c214e0();
    uVar27 = (uint)plVar12;
    func_0x000104c214bc();
    iVar10 = (int)plVar12;
    func_0x000104c214e0();
  }
  if ((int)plVar11 != 0) {
    plVar12 = &lStack_d8;
    FUN_104c13a8c();
    if ((ulong)((long)pcStack_b8 - (long)plStack_c8) < ((ulong)plVar12 & 0xffffffff))
    goto LAB_104c21104;
    pcStack_b8 = (char *)((long)plStack_c8 + ((ulong)plVar12 & 0xffffffff));
  }
  iVar9 = (int)pcVar15;
  if (uStack_d0._4_4_ != 0) goto LAB_104c21104;
  iVar35 = (int)plVar14;
  if ((((iVar35 - 3U < 0xfffffffe) && ((int)plVar33 != 0)) && (*(uint *)(param_1 + 0x1eca) != 0)) &&
     (((1 << (ulong)(iVar10 + 8U & 0x1f) | 1 << (ulong)(uVar27 & 0x1f)) &
      (*(uint *)(param_1 + 0x1eca) ^ 0xffffffff)) != 0)) goto LAB_104c211ec;
  switch(iVar35) {
  case 1:
    plVar14 = (long *)param_1[7];
    iVar9 = 0x328;
    FUN_104c28f20();
    aplStack_90[0] = plVar14;
    if (plVar14 == (long *)0x0) {
code_r0x000104c204cc:
      plVar14 = (long *)0xfffffffffffffff4;
      goto LAB_104c211f4;
    }
    lVar37 = *plVar14;
    pcVar15 = (char *)&lStack_d8;
    lVar18 = lVar37;
    FUN_104c1e9e0(lVar37,pcVar15,(int)param_1[0x1ecc]);
    if ((int)lVar18 < 0) {
      func_0x000104c215b8();
      FUN_104c28f7c(aplStack_90);
      goto LAB_104c21104;
    }
    lVar18 = (long)*(int *)((long)param_1 + 0xf64c) * 10 + 4;
    if ((int)(uint)*(byte *)(lVar37 + 0x22) <= *(int *)((long)param_1 + 0xf64c)) {
      lVar18 = 4;
    }
    uVar2 = *(ushort *)(lVar37 + lVar18 + 0x24);
    *(uint *)(param_1 + 0x1eca) = (uint)uVar2;
    uVar27 = 0;
    if (0xff < uVar2) {
      uVar27 = (uint)LZCOUNT((uint)(uVar2 >> 8)) ^ 0x1f;
    }
    *(uint *)(param_1 + 0x1ecb) = uVar27;
    plVar12 = (long *)param_1[9];
    if (plVar12 == (long *)0x0) {
      param_1[0xc] = 0;
code_r0x000104c1f7b4:
      uVar27 = 1;
code_r0x000104c1f7b8:
      *(uint *)((long)param_1 + 0xf674) = *(uint *)((long)param_1 + 0xf674) | uVar27;
    }
    else {
      lVar18 = lVar37;
      pcVar15 = (char *)plVar12;
      _memcmp(lVar37,plVar12,0x1a8);
      if ((int)lVar18 != 0) {
        param_1[0xc] = 0;
        param_1[0x10] = 0;
        param_1[0xe] = 0;
        FUN_104c28f7c(param_1 + 0xf);
        FUN_104c28f7c(param_1 + 0xd);
        plVar12 = param_1 + 0x1862;
        plVar33 = param_1 + 0x19bb;
        lVar18 = 8;
        do {
          if (plVar12[1] != 0) {
            func_0x000104c21ed8(plVar12);
          }
          FUN_104c28f7c(plVar12 + 0x25);
          FUN_104c28f7c(plVar12 + 0x26);
          FUN_104c06e18(plVar33);
          plVar12 = plVar12 + 0x2b;
          plVar33 = plVar33 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        unaff_x20 = (char *)0x0;
        goto code_r0x000104c1f7b4;
      }
      lVar18 = lVar37 + 0x1a8;
      pcVar15 = (char *)(plVar12 + 0x35);
      _memcmp(lVar18,pcVar15,0x180);
      if ((int)lVar18 != 0) {
        uVar27 = 2;
        goto code_r0x000104c1f7b8;
      }
    }
    FUN_104c28f7c(param_1 + 8);
    param_1[8] = (long)plVar14;
    param_1[9] = lVar37;
    break;
  case 2:
    *(uint *)((long)param_1 + 0xf674) = *(uint *)((long)param_1 + 0xf674) | 4;
    break;
  case 3:
  case 6:
code_r0x000104c1f040:
    if (param_1[9] == 0) goto LAB_104c21104;
    plVar12 = (long *)param_1[0xb];
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)param_1[10];
      iVar9 = 0x480;
      FUN_104c28f20();
      param_1[0xb] = (long)plVar12;
      if (plVar12 == (long *)0x0) goto code_r0x000104c204cc;
    }
    plVar12 = (long *)*plVar12;
    param_1[0xc] = (long)plVar12;
    pcVar15 = (char *)0x480;
    _bzero();
    iVar9 = (int)plVar12;
    plVar14 = (long *)param_1[0xc];
    *(char *)((long)plVar14 + 0xf9) = (char)uVar27;
    *(char *)((long)plVar14 + 0xfa) = (char)iVar10;
    lVar18 = param_1[9];
    if (*(char *)(lVar18 + 0x165) == '\0') {
      func_0x000104c21510();
      iVar9 = (int)plVar12;
      *(char *)((long)plVar14 + 0xfb) = (char)plVar12;
      if (iVar9 == 0) {
        if (*(char *)(lVar18 + 0x165) != '\0') goto code_r0x000104c1f09c;
        func_0x000104c214bc();
        cVar16 = *(char *)(lVar18 + 0x165);
        *(int *)(plVar14 + 0x1d) = iVar9;
        if (cVar16 != '\0') goto code_r0x000104c1f0a8;
        func_0x000104c21510();
        *(char *)(plVar14 + 0x21) = (char)iVar9;
        if (iVar9 != 0) goto code_r0x000104c1f0b4;
        func_0x000104c21510();
        uVar8 = (undefined1)iVar9;
        *(undefined1 *)((long)plVar14 + 0x109) = uVar8;
        iVar10 = (int)plVar14[0x1d];
        goto code_r0x000104c1f0e4;
      }
      func_0x000104c214e0();
      *(char *)((long)plVar14 + 0xfc) = (char)plVar12;
      if ((*(char *)(lVar18 + 0x178) != '\0') && (*(char *)(lVar18 + 0x170) == '\0')) {
        pcVar15 = (char *)(ulong)*(byte *)(lVar18 + 0x181);
        func_0x000104c21560();
        *(int *)((long)plVar14 + 0x104) = (int)plVar12;
      }
      if (*(char *)(lVar18 + 0x185) != '\0') {
        pcVar15 = (char *)(ulong)*(byte *)(lVar18 + 0x187);
        func_0x000104c21560();
        *(int *)(plVar14 + 0x20) = (int)plVar12;
        if ((param_1[(ulong)*(byte *)((long)plVar14 + 0xfc) * 0x2b + 0x1863] != 0) &&
           (*(int *)(param_1[(ulong)*(byte *)((long)plVar14 + 0xfc) * 0x2b + 0x1863] + 0x100) ==
            (int)plVar12)) goto code_r0x000104c20acc;
        goto code_r0x000104c210f0;
      }
code_r0x000104c20acc:
      unaff_x20 = (char *)0x0;
      for (lVar18 = 0; lVar18 < *(int *)((long)param_1 + 0x2c); lVar18 = lVar18 + 1) {
        func_0x000104c21678();
        unaff_x20 = unaff_x20 + 0x50;
      }
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      if ((iVar35 == 6) || (func_0x000104c21568(), -1 < (int)plVar12)) {
        uVar27 = *(uint *)((long)param_1 + 0xf65c);
        if ((uVar27 != 0) &&
           (lVar18 = (long)*(int *)(param_1[0xc] + 0xf4) * (long)*(int *)(param_1[0xc] + 0xf0),
           lVar18 - (ulong)uVar27 != 0 && (long)(ulong)uVar27 <= lVar18)) {
          iVar9 = 0xf245485;
          func_0x000104c215b8();
          param_1[0xc] = 0;
          plVar14 = (long *)0xffffffffffffffde;
          goto LAB_104c211f4;
        }
        if (iVar35 == 6) {
          lVar18 = param_1[0xc];
          if (*(char *)(lVar18 + 0xfb) != '\0') {
            param_1[0xc] = 0;
            goto LAB_104c21104;
          }
          unaff_x20 = (char *)0x0;
          uStack_d0 = uStack_d0 & 0xffffffff00000000;
          lStack_d8 = 0;
          goto code_r0x000104c20b4c;
        }
        break;
      }
    }
    else {
      *(undefined1 *)((long)plVar14 + 0xfb) = 0;
code_r0x000104c1f09c:
      *(undefined4 *)(plVar14 + 0x1d) = 0;
code_r0x000104c1f0a8:
      *(undefined1 *)(plVar14 + 0x21) = 1;
code_r0x000104c1f0b4:
      if ((*(char *)(lVar18 + 0x178) != '\0') && (*(char *)(lVar18 + 0x170) == '\0')) {
        func_0x000104c21560();
        *(int *)((long)plVar14 + 0x104) = iVar9;
      }
      uVar8 = (undefined1)iVar9;
      iVar10 = (int)plVar14[0x1d];
      *(bool *)((long)plVar14 + 0x109) = iVar10 != 0;
code_r0x000104c1f0e4:
      plVar12 = plVar14 + 0x21;
      if ((iVar10 == 3) ||
         (((iVar10 == 0 && ((char)*plVar12 != '\0')) || (*(char *)(lVar18 + 0x165) != '\0')))) {
        uVar8 = 1;
      }
      else {
        func_0x000104c21510();
      }
      *(undefined1 *)((long)plVar14 + 0x10a) = uVar8;
      func_0x000104c21510();
      *(undefined1 *)((long)plVar14 + 0x10b) = uVar8;
      uVar27 = *(uint *)(lVar18 + 0x194);
      if (uVar27 == 2) {
        func_0x000104c21510();
      }
      *(char *)((long)plVar14 + 0x10c) = (char)uVar27;
      if ((uVar27 & 0xff) == 0) {
        uVar39 = 0;
      }
      else {
        uVar39 = (ulong)*(uint *)(lVar18 + 0x198);
        if (*(uint *)(lVar18 + 0x198) == 2) {
          func_0x000104c21510();
        }
      }
      uVar8 = (undefined1)uVar39;
      if ((*(uint *)(plVar14 + 0x1d) & 1) == 0) {
        uVar8 = 1;
      }
      *(undefined1 *)((long)plVar14 + 0x10d) = uVar8;
      if (*(char *)(lVar18 + 0x185) != '\0') {
        func_0x000104c21560();
        *(int *)(plVar14 + 0x20) = (int)uVar39;
      }
      if (*(char *)(lVar18 + 0x165) == '\0') {
        func_0x000104c216b4();
        if (extraout_w8 == 3) {
          uVar39 = 1;
        }
        else {
          func_0x000104c21510();
        }
      }
      else {
        uVar39 = 0;
      }
      *(char *)((long)plVar14 + 0x10e) = (char)uVar39;
      if (*(char *)(lVar18 + 399) == '\0') {
        uVar39 = 0;
      }
      else {
        func_0x000104c21560();
      }
      *(char *)(plVar14 + 0x1f) = (char)uVar39;
      if ((*(char *)((long)plVar14 + 0x10a) == '\0') &&
         (func_0x000104c2166c(), (extraout_x8 & 1) != 0)) {
        func_0x000104c214e0();
      }
      else {
        uVar39 = 7;
      }
      *(char *)((long)plVar14 + 0x10f) = (char)uVar39;
      if (*(char *)(lVar18 + 0x178) != '\0') {
        func_0x000104c21510();
        *(char *)(plVar14 + 0x22) = (char)uVar39;
        if ((int)uVar39 != 0) {
          lVar37 = param_1[9];
          puVar40 = (ushort *)(lVar18 + 0x28);
          for (uVar19 = 0; uVar19 < *(byte *)(lVar37 + 0x22); uVar19 = uVar19 + 1) {
            if ((*(char *)((long)puVar40 + 3) != '\0') &&
               ((uVar2 = *puVar40, uVar2 == 0 ||
                (((uVar2 >> (ulong)(*(byte *)((long)plVar14 + 0xf9) & 0x1f) & 1) != 0 &&
                 ((0x100 << (ulong)(*(byte *)((long)plVar14 + 0xfa) & 0x1f) & (uint)uVar2) != 0)))))
               ) {
              func_0x000104c21560();
              *(int *)((long)plVar14 + uVar19 * 4 + 0x114) = (int)uVar39;
            }
            puVar40 = puVar40 + 5;
          }
        }
      }
      func_0x000104c216b4();
      uVar27 = (uint)uVar39;
      if ((extraout_x8_00 & 1) == 0) {
        if (((int)extraout_x8_00 == 0) && ((char)*plVar12 != '\0')) {
          *(undefined1 *)((long)plVar14 + 0x194) = 0xff;
        }
        else {
          func_0x000104c214c8();
          *(char *)((long)plVar14 + 0x194) = (char)uVar27;
          if ((((uVar27 ^ 0xffffffff) & 0xff) != 0) &&
             ((*(char *)((long)plVar14 + 0x10a) != '\0' && (*(char *)(lVar18 + 399) != '\0')))) {
            iVar10 = 8;
            do {
              func_0x000104c21560();
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        if ((((int)param_1[0x1ecc] == 0) || (func_0x000104c216b4(), extraout_w8_00 != 2)) ||
           (*(char *)((long)plVar14 + 0x194) != -1)) {
          plVar33 = param_1;
          FUN_104c21314(param_1,&lStack_d8,0);
          iVar10 = (int)plVar33;
          if (-1 < iVar10) {
            uVar8 = 0;
            if (*(char *)((long)plVar14 + 0x10c) != '\0') {
              if (*(char *)((long)plVar14 + 0x1a1) == '\0') {
                func_0x000104c21510();
                uVar8 = (undefined1)iVar10;
              }
              else {
                uVar8 = 0;
              }
            }
            iVar10 = 0;
            *(undefined1 *)((long)plVar14 + 0x1a3) = uVar8;
            goto code_r0x000104c1fa20;
          }
        }
      }
      else {
        *(undefined1 *)((long)plVar14 + 0x1a3) = 0;
        if ((int)extraout_x8_00 == 3) {
          uVar39 = 0xff;
        }
        else {
          func_0x000104c214c8();
        }
        *(char *)((long)plVar14 + 0x194) = (char)uVar39;
        cVar16 = *(char *)(lVar18 + 399);
        if (*(char *)((long)plVar14 + 0x10a) == '\0') {
code_r0x000104c1f584:
          if (cVar16 == '\0') goto code_r0x000104c1f634;
          func_0x000104c21510();
          *(char *)((long)plVar14 + 0x1a4) = (char)uVar39;
          if ((int)uVar39 != 0) {
            plVar33 = param_1 + 0x1863;
            func_0x000104c214e0();
            pcVar15 = (char *)((long)plVar14 + 0x1a5);
            *(char *)((long)plVar14 + 0x1a5) = (char)uVar39;
            *(undefined2 *)((long)plVar14 + 0x1a6) = 0xffff;
            func_0x000104c214e0();
            *(char *)(plVar14 + 0x35) = (char)uVar39;
            *(undefined1 *)((long)plVar14 + 0x1ab) = 0xff;
            *(undefined2 *)((long)plVar14 + 0x1a9) = 0xffff;
            bVar26 = *(byte *)(lVar18 + 0x19c);
            uVar27 = 1 << (ulong)(bVar26 - 1 & 0x1f);
            for (lVar37 = 0; lVar37 != 0x20; lVar37 = lVar37 + 4) {
              if (*plVar33 == 0) goto code_r0x000104c210f0;
              if (bVar26 == 0) {
                iVar10 = 0;
              }
              else {
                uVar42 = (uint)*(byte *)(*plVar33 + 0xf8) - (uint)*(byte *)(plVar14 + 0x1f);
                iVar10 = (uVar42 & uVar27 - 1) - (uVar42 & uVar27);
              }
              *(uint *)((long)aplStack_90 + lVar37) = iVar10 + uVar27;
              plVar33 = plVar33 + 0x2b;
            }
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            *(undefined4 *)((long)&uStack_b0 + (long)*pcVar15 * 4) = 1;
            *(undefined4 *)((long)&uStack_b0 + (long)(char)uVar39 * 4) = 1;
            iVar10 = -1;
            for (lVar37 = 0; lVar37 != 8; lVar37 = lVar37 + 1) {
              iVar9 = *(int *)((long)aplStack_90 + lVar37 * 4);
              if ((*(int *)((long)&uStack_b0 + lVar37 * 4) == 0 && (int)uVar27 <= iVar9) &&
                  iVar10 <= iVar9) {
                *(char *)((long)plVar14 + 0x1ab) = (char)lVar37;
                iVar10 = iVar9;
              }
            }
            if (iVar10 != -1) {
              func_0x000104c21614();
            }
            func_0x000104c21654();
            uVar19 = extraout_x11;
            for (lVar37 = extraout_x9; lVar37 != 8; lVar37 = lVar37 + 1) {
              uVar27 = *(uint *)(extraout_x12 + lVar37 * 4);
              if ((*(int *)(extraout_x13 + lVar37 * 4) == 0 && extraout_w8_01 <= (int)uVar27) &&
                  (int)uVar27 < (int)uVar19) {
                *(char *)((long)plVar14 + 0x1a9) = (char)lVar37;
                uVar19 = (ulong)uVar27;
              }
            }
            if ((int)uVar19 != 0x7fffffff) {
              func_0x000104c21614();
            }
            func_0x000104c21654();
            uVar19 = extraout_x11_00;
            for (lVar37 = extraout_x9_00; lVar37 != 8; lVar37 = lVar37 + 1) {
              uVar27 = *(uint *)(extraout_x12_00 + lVar37 * 4);
              if ((*(int *)(extraout_x13_00 + lVar37 * 4) == 0 && extraout_w8_02 <= (int)uVar27) &&
                  (int)uVar27 < (int)uVar19) {
                *(char *)((long)plVar14 + 0x1aa) = (char)lVar37;
                uVar19 = (ulong)uVar27;
              }
            }
            iVar10 = extraout_w8_02;
            if ((int)uVar19 != 0x7fffffff) {
              func_0x000104c21614();
              iVar10 = extraout_w8_03;
            }
            for (lVar37 = 1; lVar37 != 7; lVar37 = lVar37 + 1) {
              lVar44 = (long)pcVar15[lVar37];
              if (pcVar15[lVar37] < '\0') {
                iVar9 = -1;
                for (lVar29 = 0; lVar29 != 8; lVar29 = lVar29 + 1) {
                  iVar23 = *(int *)((long)aplStack_90 + lVar29 * 4);
                  if ((*(int *)((long)&uStack_b0 + lVar29 * 4) == 0 && iVar23 < iVar10) &&
                      iVar9 <= iVar23) {
                    pcVar15[lVar37] = (char)lVar29;
                    lVar44 = lVar29;
                    iVar9 = iVar23;
                  }
                }
                if (iVar9 != -1) {
                  *(undefined4 *)((long)&uStack_b0 + (long)(char)lVar44 * 4) = 1;
                }
              }
            }
            uVar17 = 0xffffffff;
            iVar10 = 0x7fffffff;
            for (lVar37 = 0; lVar37 != 8; lVar37 = lVar37 + 1) {
              iVar9 = *(int *)((long)aplStack_90 + lVar37 * 4);
              uVar6 = (int)lVar37;
              if (iVar10 <= iVar9) {
                iVar9 = iVar10;
                uVar6 = uVar17;
              }
              uVar17 = uVar6;
              iVar10 = iVar9;
            }
            for (lVar37 = 0; lVar37 != 7; lVar37 = lVar37 + 1) {
              if (pcVar15[lVar37] < '\0') {
                pcVar15[lVar37] = (char)uVar17;
              }
            }
          }
        }
        else {
          if (cVar16 != '\0') {
            iVar10 = 8;
            do {
              func_0x000104c21560();
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            cVar16 = *(char *)(lVar18 + 399);
            goto code_r0x000104c1f584;
          }
code_r0x000104c1f634:
          *(undefined1 *)((long)plVar14 + 0x1a4) = 0;
        }
        for (lVar37 = 0; lVar37 != 7; lVar37 = lVar37 + 1) {
          if (*(char *)((long)plVar14 + 0x1a4) == '\0') {
            func_0x000104c214e0();
            *(char *)((long)plVar14 + lVar37 + 0x1a5) = (char)uVar39;
          }
          if (*(char *)(lVar18 + 0x185) != '\0') {
            func_0x000104c21560();
            if ((param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5) * 0x2b + 0x1863] == 0)
               || (iVar10 = 1 << (ulong)(*(byte *)(lVar18 + 0x187) & 0x1f),
                  *(uint *)(param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5) * 0x2b +
                                    0x1863] + 0x100) !=
                  ((int)plVar14[0x20] + iVar10 + ~(uint)uVar39 & iVar10 - 1U)))
            goto code_r0x000104c210f0;
          }
        }
        if (*(char *)((long)plVar14 + 0x10a) == '\0') {
          bVar7 = *(char *)((long)plVar14 + 0x10e) != '\0';
        }
        else {
          bVar7 = false;
        }
        plVar33 = param_1;
        FUN_104c21314(param_1,&lStack_d8,bVar7);
        iVar10 = (int)plVar33;
        if (-1 < iVar10) {
          if (*(char *)((long)plVar14 + 0x10d) == '\0') {
            func_0x000104c21510();
          }
          else {
            iVar10 = 0;
          }
          *(char *)((long)plVar14 + 0x1ac) = (char)iVar10;
          func_0x000104c21510();
          if (iVar10 == 0) {
            func_0x000104c214bc();
          }
          else {
            iVar10 = 4;
          }
          *(int *)(plVar14 + 0x36) = iVar10;
          func_0x000104c21510();
          *(char *)((long)plVar14 + 0x1b4) = (char)iVar10;
          if ((((*(char *)((long)plVar14 + 0x10a) == '\0') && (*(char *)(lVar18 + 0x191) != '\0'))
              && (*(char *)(lVar18 + 399) != '\0')) &&
             (func_0x000104c2166c(), (extraout_x8_01 & 1) != 0)) {
            func_0x000104c21510();
          }
          else {
            iVar10 = 0;
          }
code_r0x000104c1fa20:
          *(char *)((long)plVar14 + 0x1b5) = (char)iVar10;
          if ((*(char *)(lVar18 + 0x165) == '\0') && (*(char *)((long)plVar14 + 0x10b) == '\0')) {
            func_0x000104c21510();
            bVar7 = iVar10 == 0;
          }
          else {
            bVar7 = false;
          }
          *(bool *)((long)plVar14 + 0x1b6) = bVar7;
          func_0x000104c21510();
          *(char *)(plVar14 + 0x37) = (char)iVar10;
          bVar26 = *(byte *)(lVar18 + 0x188);
          iVar23 = (0x40 << (ulong)(bVar26 & 0x1f)) + -1;
          uVar27 = bVar26 + 6;
          iVar9 = iVar23 + *(int *)((long)plVar14 + 0xec) >> (uVar27 & 0x1f);
          iVar23 = iVar23 + *(int *)((long)plVar14 + 0xf4) >> (uVar27 & 0x1f);
          uVar42 = 0x40 >> (ulong)(bVar26 & 0x1f);
          uVar19 = (ulong)uVar42;
          plVar33 = (long *)(ulong)(0x900000 >> (ulong)(uVar27 * 2 & 0x1f));
          func_0x000104c214a0(uVar19,iVar9);
          *(char *)((long)plVar14 + 0x1ba) = (char)uVar19;
          uVar39 = uVar19;
          func_0x000104c2160c();
          uVar8 = (undefined1)uVar39;
          *(undefined1 *)((long)plVar14 + 0x1bb) = uVar8;
          func_0x000104c2160c();
          *(undefined1 *)((long)plVar14 + 0x1bf) = uVar8;
          pcVar15 = (char *)(ulong)(uint)(iVar9 * iVar23);
          func_0x000104c214a0();
          uVar27 = (uint)plVar33;
          if ((int)(uint)plVar33 <= (int)((uint)uVar19 & 0xff)) {
            uVar27 = (uint)uVar19 & 0xff;
          }
          if (iVar10 == 0) {
            iVar10 = 0;
            iVar43 = 0;
            for (bVar26 = 0; *(byte *)((long)plVar14 + 0x1bd) = bVar26,
                bVar26 < 0x40 && iVar10 < iVar9; bVar26 = bVar26 + 1) {
              uVar3 = iVar9 - iVar10;
              if ((int)uVar42 <= iVar9 - iVar10) {
                uVar3 = uVar42;
              }
              if (uVar3 < 2) {
                iVar20 = 1;
              }
              else {
                plVar33 = &lStack_d8;
                func_0x000104c13af4();
                iVar20 = (int)plVar33 + 1;
                bVar26 = *(byte *)((long)plVar14 + 0x1bd);
              }
              *(short *)((long)plVar14 + (ulong)bVar26 * 2 + 0x1c2) = (short)iVar10;
              iVar10 = iVar20 + iVar10;
              if (iVar43 <= iVar20) {
                iVar43 = iVar20;
              }
            }
            func_0x000104c2160c();
            bVar26 = 0;
            iVar10 = 0;
            *(char *)((long)plVar14 + 0x1bc) = (char)plVar33;
            uVar42 = 0;
            if (uVar27 != 0) {
              uVar42 = uVar27 + 1;
            }
            uVar27 = 0;
            if (iVar43 != 0) {
              uVar27 = (iVar9 * iVar23 >> (uVar42 & 0x1f)) / iVar43;
            }
            if ((int)uVar27 < 2) {
              uVar27 = 1;
            }
            while( true ) {
              *(byte *)((long)plVar14 + 0x1c1) = bVar26;
              pcVar15 = (char *)(ulong)(uint)bVar26;
              if (0x3f < bVar26 || iVar23 <= iVar10) break;
              uVar42 = iVar23 - iVar10;
              if ((int)uVar27 <= iVar23 - iVar10) {
                uVar42 = uVar27;
              }
              if (uVar42 < 2) {
                iVar43 = 1;
              }
              else {
                plVar33 = &lStack_d8;
                func_0x000104c13af4();
                iVar43 = (int)plVar33 + 1;
                bVar26 = *(byte *)((long)plVar14 + 0x1c1);
              }
              *(short *)((long)plVar14 + (ulong)bVar26 * 2 + 0x244) = (short)iVar10;
              iVar10 = iVar43 + iVar10;
              bVar26 = bVar26 + 1;
            }
            func_0x000104c2160c();
            *(char *)(plVar14 + 0x38) = (char)plVar33;
          }
          else {
            while( true ) {
              uVar42 = (uint)uVar19;
              *(char *)((long)plVar14 + 0x1bc) = (char)uVar19;
              if (((uint)uVar39 & 0xff) <= (uVar42 & 0xff)) break;
              func_0x000104c21510();
              uVar42 = (uint)*(byte *)((long)plVar14 + 0x1bc);
              if ((int)plVar33 == 0) break;
              uVar19 = (ulong)(*(byte *)((long)plVar14 + 0x1bc) + 1);
              uVar39 = (ulong)*(byte *)((long)plVar14 + 0x1bb);
            }
            bVar26 = 0;
            for (iVar10 = 0; iVar10 < iVar9; iVar10 = iVar10 + (iVar9 + -1 >> (uVar42 & 0x1f)) + 1)
            {
              *(short *)((long)plVar14 + (ulong)bVar26 * 2 + 0x1c2) = (short)iVar10;
              bVar26 = bVar26 + 1;
            }
            *(byte *)((long)plVar14 + 0x1bd) = bVar26;
            uVar27 = uVar27 - (uVar42 & 0xff);
            uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
            *(char *)((long)plVar14 + 0x1be) = (char)uVar27;
            while( true ) {
              plVar33 = (long *)(ulong)uVar27;
              *(char *)(plVar14 + 0x38) = (char)uVar27;
              if ((uint)*(byte *)((long)plVar14 + 0x1bf) <= (uVar27 & 0xff)) break;
              func_0x000104c21510();
              plVar33 = (long *)(ulong)*(byte *)(plVar14 + 0x38);
              if (uVar27 == 0) break;
              uVar27 = *(byte *)(plVar14 + 0x38) + 1;
            }
            bVar26 = 0;
            for (iVar10 = 0; iVar10 < iVar23;
                iVar10 = iVar10 + (iVar23 + -1 >> ((uint)plVar33 & 0x1f)) + 1) {
              *(short *)((long)plVar14 + (ulong)bVar26 * 2 + 0x244) = (short)iVar10;
              bVar26 = bVar26 + 1;
            }
            *(byte *)((long)plVar14 + 0x1c1) = bVar26;
          }
          *(short *)((long)plVar14 + (ulong)*(byte *)((long)plVar14 + 0x1bd) * 2 + 0x1c2) =
               (short)iVar9;
          *(short *)((long)plVar14 + (ulong)bVar26 * 2 + 0x244) = (short)iVar23;
          if (*(byte *)((long)plVar14 + 0x1bc) == 0 && ((ulong)plVar33 & 0xff) == 0) {
            *(undefined1 *)((long)plVar14 + 0x1b9) = 0;
            *(undefined2 *)((long)plVar14 + 0x2c6) = 0;
          }
          else {
            pcVar15 = (char *)(ulong)((uint)*(byte *)((long)plVar14 + 0x1bc) +
                                     ((uint)plVar33 & 0xff));
            func_0x000104c21560();
            *(short *)((long)plVar14 + 0x2c6) = (short)plVar33;
            if ((uint)*(byte *)((long)plVar14 + 0x1c1) * (uint)*(byte *)((long)plVar14 + 0x1bd) <=
                ((uint)plVar33 & 0xffff)) goto code_r0x000104c210f0;
            func_0x000104c214bc();
            *(char *)((long)plVar14 + 0x1b9) = (char)plVar33 + '\x01';
          }
          func_0x000104c214c8();
          *(char *)(plVar14 + 0x59) = (char)plVar33;
          func_0x000104c21510();
          if ((int)plVar33 != 0) {
            func_0x000104c214d4();
          }
          *(char *)((long)plVar14 + 0x2c9) = (char)plVar33;
          if (*(char *)(lVar18 + 0x1a2) == '\0') {
            if (*(char *)(lVar18 + 0x1a4) == '\0') {
              bVar7 = true;
            }
            else {
              func_0x000104c21510();
              bVar7 = (int)plVar33 == 0;
            }
            func_0x000104c21510();
            if ((int)plVar33 != 0) {
              func_0x000104c214d4();
            }
            *(char *)((long)plVar14 + 0x2ca) = (char)plVar33;
            func_0x000104c21510();
            if ((int)plVar33 != 0) {
              func_0x000104c214d4();
            }
            *(char *)((long)plVar14 + 0x2cb) = (char)plVar33;
            if (bVar7) {
              *(undefined1 *)((long)plVar14 + 0x2cc) = *(undefined1 *)((long)plVar14 + 0x2ca);
            }
            else {
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
              }
              *(char *)((long)plVar14 + 0x2cc) = (char)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
              }
            }
            *(char *)((long)plVar14 + 0x2cd) = (char)plVar33;
          }
          func_0x000104c21510();
          *(char *)((long)plVar14 + 0x2ce) = (char)plVar33;
          if ((int)plVar33 != 0) {
            func_0x000104c214f8();
            *(char *)((long)plVar14 + 0x2cf) = (char)plVar33;
            func_0x000104c214f8();
            *(char *)(plVar14 + 0x5a) = (char)plVar33;
            if (*(char *)(lVar18 + 0x1a4) != '\0') {
              func_0x000104c214f8();
            }
            *(char *)((long)plVar14 + 0x2d1) = (char)plVar33;
          }
          func_0x000104c21510();
          *(char *)((long)plVar14 + 0x2d2) = (char)plVar33;
          if ((int)plVar33 == 0) {
            *(undefined2 *)((long)plVar14 + 0x326) = 0;
            *(undefined8 *)((long)plVar14 + 0x30e) = 0;
            *(undefined8 *)((long)plVar14 + 0x306) = 0;
            *(undefined8 *)((long)plVar14 + 0x31e) = 0;
            *(undefined8 *)((long)plVar14 + 0x316) = 0;
            *(undefined8 *)((long)plVar14 + 0x2ee) = 0;
            *(undefined8 *)((long)plVar14 + 0x2e6) = 0;
            *(undefined8 *)((long)plVar14 + 0x2fe) = 0;
            *(undefined8 *)((long)plVar14 + 0x2f6) = 0;
            *(undefined8 *)((long)plVar14 + 0x2de) = 0;
            *(undefined8 *)((long)plVar14 + 0x2d6) = 0;
            for (lVar37 = 0; lVar37 != 0x50; lVar37 = lVar37 + 10) {
              *(undefined1 *)((long)plVar14 + lVar37 + 0x2dc) = 0xff;
            }
          }
          else {
            if (*(char *)((long)plVar14 + 0x10f) == '\a') {
              *(undefined2 *)((long)plVar14 + 0x2d3) = 1;
              *(undefined1 *)((long)plVar14 + 0x2d5) = 1;
            }
            else {
              func_0x000104c21510();
              *(char *)((long)plVar14 + 0x2d3) = (char)plVar33;
              if ((int)plVar33 != 0) {
                func_0x000104c21510();
              }
              *(char *)((long)plVar14 + 0x2d4) = (char)plVar33;
              func_0x000104c21510();
              *(char *)((long)plVar14 + 0x2d5) = (char)plVar33;
              if ((int)plVar33 == 0) {
                func_0x000104c215c8(*(undefined1 *)((long)plVar14 + 0x10f));
                if (extraout_x8_02 == 0) goto code_r0x000104c210f0;
                plVar33 = (long *)((long)plVar14 + 0x2d6);
                pcVar15 = (char *)(extraout_x8_02 + 0x2d6);
                _memcpy(plVar33,pcVar15,0x52);
                goto code_r0x000104c1ff54;
              }
            }
            *(undefined2 *)((long)plVar14 + 0x326) = 0xff00;
            puVar38 = (undefined1 *)((long)plVar14 + 0x2de);
            for (lVar37 = 0; lVar37 != 8; lVar37 = lVar37 + 1) {
              func_0x000104c21510();
              uVar8 = (undefined1)lVar37;
              if ((int)plVar33 != 0) {
                plVar33 = &lStack_d8;
                pcVar15 = (char *)0x9;
                FUN_104c13a54();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
              }
              *(short *)(puVar38 + -8) = (short)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
              }
              puVar38[-6] = (char)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
              }
              puVar38[-5] = (char)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
              }
              puVar38[-4] = (char)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 != 0) {
                func_0x000104c214d4();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
              }
              puVar38[-3] = (char)plVar33;
              func_0x000104c21510();
              if ((int)plVar33 == 0) {
                plVar33 = (long *)0xff;
              }
              else {
                func_0x000104c214e0();
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
                *(undefined1 *)((long)plVar14 + 0x326) = 1;
              }
              puVar38[-2] = (char)plVar33;
              func_0x000104c21510();
              puVar38[-1] = (char)plVar33;
              if ((int)plVar33 != 0) {
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
                *(undefined1 *)((long)plVar14 + 0x326) = 1;
              }
              func_0x000104c21510();
              *puVar38 = (char)plVar33;
              if ((int)plVar33 != 0) {
                *(undefined1 *)((long)plVar14 + 0x327) = uVar8;
                *(undefined1 *)((long)plVar14 + 0x326) = 1;
              }
              puVar38 = puVar38 + 10;
            }
          }
code_r0x000104c1ff54:
          if ((char)plVar14[0x59] == '\0') {
            *(undefined1 *)(plVar14 + 0x67) = 0;
code_r0x000104c1ffa8:
            *(undefined1 *)((long)plVar14 + 0x339) = 0;
code_r0x000104c1ffac:
            *(undefined1 *)((long)plVar14 + 0x33a) = 0;
code_r0x000104c1ffb0:
            plVar33 = (long *)0x0;
            *(undefined1 *)((long)plVar14 + 0x33b) = 0;
          }
          else {
            func_0x000104c21510();
            *(char *)(plVar14 + 0x67) = (char)plVar33;
            if ((int)plVar33 == 0) goto code_r0x000104c1ffa8;
            func_0x000104c214bc();
            *(char *)((long)plVar14 + 0x339) = (char)plVar33;
            if (((char)plVar14[0x67] == '\0') || (*(char *)((long)plVar14 + 0x1a3) != '\0'))
            goto code_r0x000104c1ffac;
            func_0x000104c21510();
            *(char *)((long)plVar14 + 0x33a) = (char)plVar33;
            if ((int)plVar33 == 0) goto code_r0x000104c1ffb0;
            func_0x000104c214bc();
            *(char *)((long)plVar14 + 0x33b) = (char)plVar33;
            if (*(char *)((long)plVar14 + 0x33a) == '\0') {
              plVar33 = (long *)0x0;
            }
            else {
              func_0x000104c21510();
            }
          }
          *(char *)((long)plVar14 + 0x33c) = (char)plVar33;
          if ((((*(char *)((long)plVar14 + 0x2c9) == '\0') &&
               (*(char *)((long)plVar14 + 0x2ca) == '\0')) &&
              (*(char *)((long)plVar14 + 0x2cb) == '\0')) &&
             (*(char *)((long)plVar14 + 0x2cc) == '\0')) {
            bVar7 = *(char *)((long)plVar14 + 0x2cd) == '\0';
          }
          else {
            bVar7 = false;
          }
          bVar26 = 1;
          *(undefined1 *)((long)plVar14 + 0x33d) = 1;
          plVar11 = plVar14 + 0x66;
          for (lVar37 = 0x2d6; lVar37 != 0x326; lVar37 = lVar37 + 10) {
            uVar27 = (uint)*(byte *)(plVar14 + 0x59);
            if ((*(char *)((long)plVar14 + 0x2d2) != '\0') &&
               (uVar27 = (int)*(short *)((long)plVar14 + lVar37) + (uint)*(byte *)(plVar14 + 0x59),
               uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU), 0xfe < (int)uVar27)) {
              uVar27 = 0xff;
            }
            *(char *)plVar11 = (char)uVar27;
            bVar26 = uVar27 == 0 & bVar7;
            *(byte *)(plVar11 + -1) = bVar26;
            bVar26 = bVar26 & *(byte *)((long)plVar14 + 0x33d);
            *(byte *)((long)plVar14 + 0x33d) = bVar26;
            plVar11 = (long *)((long)plVar11 + 1);
          }
          if ((bVar26 == 0) && (*(char *)((long)plVar14 + 0x1a3) == '\0')) {
            func_0x000104c214ec();
            *(char *)((long)plVar14 + 0x33e) = (char)plVar33;
            func_0x000104c214ec();
            *(char *)((long)plVar14 + 0x33f) = (char)plVar33;
            if ((*(char *)(lVar18 + 0x1a2) == '\0') &&
               ((*(char *)((long)plVar14 + 0x33e) != '\0' || (((ulong)plVar33 & 0xff) != 0)))) {
              func_0x000104c214ec();
              *(char *)(plVar14 + 0x68) = (char)plVar33;
              func_0x000104c214ec();
              *(char *)((long)plVar14 + 0x341) = (char)plVar33;
            }
            func_0x000104c214e0();
            *(char *)((long)plVar14 + 0x34e) = (char)plVar33;
            if (*(char *)((long)plVar14 + 0x10f) == '\a') {
              func_0x000104c2163c();
            }
            else {
              func_0x000104c215c8();
              if (extraout_x8_04 == 0) goto code_r0x000104c210f0;
              uVar22 = *(undefined8 *)(extraout_x8_04 + 0x344);
              *(undefined2 *)((long)plVar14 + 0x34c) = *(undefined2 *)(extraout_x8_04 + 0x34c);
              *(undefined8 *)((long)plVar14 + 0x344) = uVar22;
            }
            func_0x000104c21510();
            *(char *)((long)plVar14 + 0x342) = (char)plVar33;
            if ((int)plVar33 != 0) {
              func_0x000104c21510();
              *(char *)((long)plVar14 + 0x343) = (char)plVar33;
              if ((int)plVar33 != 0) {
                for (lVar37 = 0; lVar37 != 8; lVar37 = lVar37 + 1) {
                  func_0x000104c21510();
                  if ((int)plVar33 != 0) {
                    func_0x000104c214d4();
                    *(char *)((long)plVar14 + lVar37 + 0x346) = (char)plVar33;
                  }
                }
                for (lVar37 = 0; lVar37 != 2; lVar37 = lVar37 + 1) {
                  func_0x000104c21510();
                  if ((int)plVar33 != 0) {
                    func_0x000104c214d4();
                    *(char *)((long)plVar14 + lVar37 + 0x344) = (char)plVar33;
                  }
                }
              }
            }
          }
          else {
            *(undefined1 *)((long)plVar14 + 0x34e) = 0;
            *(undefined4 *)((long)plVar14 + 0x33e) = 0;
            *(undefined2 *)((long)plVar14 + 0x342) = 0x101;
            func_0x000104c2163c();
          }
          if (((*(char *)((long)plVar14 + 0x33d) == '\0') && (*(char *)(lVar18 + 0x19e) != '\0')) &&
             (*(char *)((long)plVar14 + 0x1a3) == '\0')) {
            func_0x000104c214bc();
            *(char *)((long)plVar14 + 0x34f) = (char)plVar33 + '\x03';
            func_0x000104c214bc();
            uVar27 = (uint)plVar33 & 0xff;
            *(char *)(plVar14 + 0x6a) = (char)plVar33;
            puVar38 = (undefined1 *)((long)plVar14 + 0x359);
            for (lVar37 = 0; lVar37 < 1 << (ulong)(uVar27 & 0x1f); lVar37 = lVar37 + 1) {
              func_0x000104c214ec();
              puVar38[-8] = (char)plVar33;
              if (*(char *)(lVar18 + 0x1a2) == '\0') {
                func_0x000104c214ec();
                *puVar38 = (char)plVar33;
              }
              uVar27 = (uint)*(byte *)(plVar14 + 0x6a);
              puVar38 = puVar38 + 1;
            }
            if (*(char *)((long)plVar14 + 0x33d) == '\0') goto code_r0x000104c20094;
code_r0x000104c2008c:
            if (*(char *)((long)plVar14 + 0x1a1) != '\0') goto code_r0x000104c20094;
code_r0x000104c200a4:
            *(undefined4 *)((long)plVar14 + 0x364) = 0;
            plVar14[0x6d] = 0;
          }
          else {
            *(undefined2 *)(plVar14 + 0x6a) = 0;
            *(undefined1 *)((long)plVar14 + 0x359) = 0;
            if (*(char *)((long)plVar14 + 0x33d) != '\0') goto code_r0x000104c2008c;
code_r0x000104c20094:
            if ((*(char *)(lVar18 + 0x19f) == '\0') || (*(char *)((long)plVar14 + 0x1a3) != '\0'))
            goto code_r0x000104c200a4;
            func_0x000104c214bc();
            iVar10 = (int)plVar33;
            *(int *)((long)plVar14 + 0x364) = iVar10;
            if (*(char *)(lVar18 + 0x1a2) == '\0') {
              func_0x000104c214bc();
              *(int *)(plVar14 + 0x6d) = iVar10;
              func_0x000104c214bc();
              plVar33 = (long *)(ulong)*(uint *)((long)plVar14 + 0x364);
            }
            else {
              iVar10 = 0;
              *(undefined4 *)(plVar14 + 0x6d) = 0;
            }
            *(int *)((long)plVar14 + 0x36c) = iVar10;
            if (((int)plVar33 == 0) && ((int)plVar14[0x6d] == 0 && iVar10 == 0)) {
              *(undefined1 *)(plVar14 + 0x6e) = 8;
            }
            else {
              *(char *)(plVar14 + 0x6e) = *(char *)(lVar18 + 0x188) + '\x06';
              func_0x000104c21510();
              cVar16 = (char)plVar14[0x6e];
              if ((int)plVar33 != 0) {
                cVar16 = cVar16 + '\x01';
                *(char *)(plVar14 + 0x6e) = cVar16;
                if (*(char *)(lVar18 + 0x188) == '\0') {
                  func_0x000104c21510();
                  cVar16 = (char)plVar14[0x6e] + (char)plVar33;
                  *(char *)(plVar14 + 0x6e) = cVar16;
                }
              }
              *(char *)((long)plVar14 + 0x371) = cVar16;
              if (((((int)plVar14[0x6d] != 0) || (*(int *)((long)plVar14 + 0x36c) != 0)) &&
                  (*(char *)(lVar18 + 0x1a0) == '\x01')) && (*(char *)(lVar18 + 0x1a1) == '\x01')) {
                func_0x000104c21510();
                *(char *)((long)plVar14 + 0x371) = *(char *)((long)plVar14 + 0x371) - (char)plVar33;
              }
            }
          }
          if (*(char *)((long)plVar14 + 0x33d) == '\0') {
            func_0x000104c21510();
            uVar17 = 1;
            if ((int)plVar33 != 0) {
              uVar17 = 2;
            }
          }
          else {
            uVar17 = 0;
          }
          *(undefined4 *)((long)plVar14 + 0x374) = uVar17;
          if ((*(byte *)(plVar14 + 0x1d) & 1) == 0) {
            plVar33 = (long *)0x0;
            *(undefined2 *)(plVar14 + 0x6f) = 0;
          }
          else {
            func_0x000104c21510();
            *(char *)(plVar14 + 0x6f) = (char)plVar33;
            *(undefined1 *)((long)plVar14 + 0x379) = 0;
            if ((int)plVar33 != 0) {
              func_0x000104c2166c();
              if (((extraout_x8_03 & 1) != 0) && (*(char *)(lVar18 + 399) != '\0')) {
                lVar37 = 0;
                plVar11 = (long *)0xffffffff;
                lVar44 = extraout_x11_01;
                lVar29 = extraout_x12_01;
                plVar30 = (long *)0xffffffff;
                while( true ) {
                  iVar9 = (int)lVar29;
                  iVar23 = (int)plVar30;
                  iVar10 = (int)plVar11;
                  if (lVar37 == 7) break;
                  if (param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5) * 0x2b + 0x1863]
                      == 0) goto code_r0x000104c210f0;
                  bVar26 = *(byte *)(lVar18 + 0x19c);
                  pcVar15 = (char *)(ulong)bVar26;
                  plVar33 = plVar30;
                  plVar21 = plVar11;
                  lVar24 = lVar44;
                  lVar28 = lVar29;
                  if (bVar26 == 0) {
code_r0x000104c20204:
                    plVar33 = plVar30;
                    plVar21 = plVar11;
                    lVar24 = lVar44;
                    lVar28 = lVar29;
                  }
                  else {
                    bVar1 = *(byte *)(param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5) *
                                              0x2b + 0x1863] + 0xf8);
                    plVar13 = (long *)(ulong)bVar1;
                    uVar27 = 1 << (ulong)(bVar26 - 1 & 0x1f);
                    pcVar15 = (char *)(ulong)uVar27;
                    uVar3 = (uint)bVar1 - (uint)*(byte *)(plVar14 + 0x1f);
                    uVar42 = uVar27 - 1;
                    iVar9 = (uVar42 & uVar3) - (uVar27 & uVar3);
                    if (iVar9 < 1) {
                      if ((-1 < iVar9) ||
                         ((plVar21 = plVar13, lVar24 = lVar37, iVar10 != -1 &&
                          (uVar3 = (uint)bVar1 - iVar10, uVar27 = uVar27 & uVar3,
                          pcVar15 = (char *)(ulong)uVar27, (int)(uVar42 & uVar3) <= (int)uVar27))))
                      goto code_r0x000104c20204;
                    }
                    else {
                      plVar33 = plVar13;
                      lVar28 = lVar37;
                      if ((iVar23 != -1) &&
                         (uVar27 = uVar27 & iVar23 - (uint)bVar1, pcVar15 = (char *)(ulong)uVar27,
                         (int)(uVar42 & iVar23 - (uint)bVar1) <= (int)uVar27))
                      goto code_r0x000104c20204;
                    }
                  }
                  lVar37 = lVar37 + 1;
                  plVar11 = plVar21;
                  lVar44 = lVar24;
                  lVar29 = lVar28;
                  plVar30 = plVar33;
                }
                if (iVar10 != -1 && iVar23 != -1) {
code_r0x000104c20660:
                  iVar23 = (int)lVar44;
                  iVar10 = iVar23;
                  if (iVar9 <= iVar23) {
                    iVar10 = iVar9;
                  }
                  *(char *)((long)plVar14 + 0x37b) = (char)iVar10;
                  if (iVar23 <= iVar9) {
                    iVar23 = iVar9;
                  }
                  *(char *)((long)plVar14 + 0x37c) = (char)iVar23;
                  *(undefined1 *)((long)plVar14 + 0x379) = 1;
                  func_0x000104c21510();
                  goto code_r0x000104c20688;
                }
                if (iVar10 != -1) {
                  uVar27 = 0xffffffff;
                  for (lVar37 = 0; iVar9 = (int)lVar29, lVar37 != 7; lVar37 = lVar37 + 1) {
                    if (param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5) * 0x2b + 0x1863
                               ] == 0) goto code_r0x000104c210f0;
                    bVar26 = *(byte *)(lVar18 + 0x19c);
                    plVar33 = (long *)(ulong)bVar26;
                    if (bVar26 != 0) {
                      bVar1 = *(byte *)(param_1[(long)(int)*(char *)((long)plVar14 + lVar37 + 0x1a5)
                                                * 0x2b + 0x1863] + 0xf8);
                      uVar3 = 1 << (ulong)(bVar26 - 1 & 0x1f);
                      plVar33 = (long *)(ulong)uVar3;
                      uVar4 = (uint)bVar1 - iVar10;
                      uVar42 = uVar3 - 1;
                      pcVar15 = (char *)(ulong)uVar42;
                      if ((int)(uVar42 & uVar4) < (int)(uVar3 & uVar4)) {
                        if (uVar27 != 0xffffffff) {
                          uVar4 = bVar1 - uVar27;
                          uVar42 = uVar42 & uVar4;
                          pcVar15 = (char *)(ulong)uVar42;
                          uVar3 = uVar3 & uVar4;
                          plVar33 = (long *)(ulong)uVar3;
                          if ((int)uVar42 <= (int)uVar3) goto code_r0x000104c20394;
                        }
                        lVar29 = lVar37;
                        uVar27 = (uint)bVar1;
                      }
                    }
code_r0x000104c20394:
                  }
                  if (uVar27 != 0xffffffff) goto code_r0x000104c20660;
                }
              }
              plVar33 = (long *)0x0;
            }
          }
code_r0x000104c20688:
          *(char *)((long)plVar14 + 0x37a) = (char)plVar33;
          if (((*(char *)((long)plVar14 + 0x10a) == '\0') &&
              (func_0x000104c2166c(), (extraout_x8_05 & 1) != 0)) &&
             (*(char *)(lVar18 + 0x18d) != '\0')) {
            func_0x000104c21510();
          }
          else {
            plVar33 = (long *)0x0;
          }
          *(char *)((long)plVar14 + 0x37d) = (char)plVar33;
          func_0x000104c21510();
          *(char *)((long)plVar14 + 0x37e) = (char)plVar33;
          puVar34 = (uint *)(plVar14 + 0x70);
          for (lVar37 = 0x380; lVar37 != 0x47c; lVar37 = lVar37 + 0x24) {
            puVar25 = (undefined8 *)((long)plVar14 + lVar37);
            puVar25[1] = 0x1000000000000;
            *puVar25 = 0;
            puVar25[3] = 0x10000;
            puVar25[2] = 0;
            *(undefined4 *)(puVar25 + 4) = 0;
          }
          func_0x000104c2166c();
          if ((extraout_x8_06 & 1) != 0) {
            for (lVar37 = 0x380; lVar37 != 0x47c; lVar37 = lVar37 + 0x24) {
              func_0x000104c21510();
              if ((int)plVar33 == 0) {
                *puVar34 = 0;
              }
              else {
                func_0x000104c21510();
                if ((int)plVar33 == 0) {
                  func_0x000104c21510();
                  uVar27 = 3;
                  if ((int)plVar33 != 0) {
                    uVar27 = 1;
                  }
                }
                else {
                  uVar27 = 2;
                }
                *puVar34 = uVar27;
                puVar45 = &UNK_10dd74fb4;
                if ((ulong)*(byte *)((long)plVar14 + 0x10f) != 7) {
                  if (param_1[(long)(int)*(char *)((long)plVar14 +
                                                  (ulong)*(byte *)((long)plVar14 + 0x10f) + 0x1a5) *
                              0x2b + 0x1863] == 0) goto code_r0x000104c210f0;
                  puVar45 = (undefined *)
                            (param_1[(long)(int)*(char *)((long)plVar14 +
                                                         (ulong)*(byte *)((long)plVar14 + 0x10f) +
                                                         0x1a5) * 0x2b + 0x1863] + lVar37);
                }
                if (uVar27 < 2) {
                  uVar27 = 0xd;
                  if (*(char *)((long)plVar14 + 0x1ac) == '\0') {
                    uVar27 = 0xe;
                  }
                  uVar42 = puVar34[4];
code_r0x000104c208ac:
                  puVar34[5] = -uVar42;
                  uVar42 = puVar34[3];
                }
                else {
                  func_0x000104c2153c();
                  puVar34[3] = (int)plVar33 * 2 + 0x10000;
                  pcVar15 = (char *)(ulong)(uint)(*(int *)(puVar45 + 0x10) >> 1);
                  func_0x000104c2153c();
                  uVar42 = (int)plVar33 << 1;
                  puVar34[4] = uVar42;
                  if (*puVar34 != 3) {
                    uVar27 = 10;
                    goto code_r0x000104c208ac;
                  }
                  func_0x000104c2153c();
                  puVar34[5] = (int)plVar33 << 1;
                  pcVar15 = (char *)(ulong)(uint)(*(int *)(puVar45 + 0x18) + -0x10000 >> 1);
                  func_0x000104c2153c();
                  uVar42 = (int)plVar33 * 2 + 0x10000;
                  uVar27 = 10;
                }
                puVar34[6] = uVar42;
                func_0x000104c215e4(*(undefined4 *)(puVar45 + 4));
                puVar34[1] = (int)plVar33 << (ulong)uVar27;
                func_0x000104c215e4(*(undefined4 *)(puVar45 + 8));
                puVar34[2] = (int)plVar33 << (ulong)uVar27;
              }
              puVar34 = puVar34 + 9;
            }
          }
          if ((*(char *)(lVar18 + 0x1a5) == '\0') ||
             (((char)*plVar12 == '\0' && (*(char *)((long)plVar14 + 0x109) == '\0')))) {
            *(undefined1 *)(plVar14 + 0x1c) = 0;
          }
          else {
            func_0x000104c21510();
            *(char *)(plVar14 + 0x1c) = (char)plVar33;
            if ((int)plVar33 != 0) {
              func_0x000104c21504();
              plVar12 = plVar33;
              func_0x000104c216b4();
              if (extraout_w8_04 == 1) {
                func_0x000104c21510();
                iVar10 = (int)plVar12;
                *(char *)((long)plVar14 + 0xe1) = (char)plVar12;
                if (iVar10 == 0) {
                  func_0x000104c214e0();
                  lVar18 = 0x1a5;
                  do {
                    if (lVar18 == 0x1ac) goto code_r0x000104c210f0;
                    pcVar15 = (char *)((long)plVar14 + lVar18);
                    lVar18 = lVar18 + 1;
                  } while (iVar10 != *pcVar15);
                  pcVar15 = (char *)param_1[(long)iVar10 * 0x2b + 0x1863];
                  if ((long *)pcVar15 != (long *)0x0) {
                    plVar12 = plVar14;
                    _memcpy(plVar14,pcVar15,0xe0);
                    *(int *)plVar14 = (int)plVar33;
                    goto code_r0x000104c20acc;
                  }
                  goto code_r0x000104c210f0;
                }
              }
              else {
                *(undefined1 *)((long)plVar14 + 0xe1) = 1;
              }
              *(int *)plVar14 = (int)plVar33;
              func_0x000104c214f8();
              *(int *)((long)plVar14 + 4) = (int)plVar12;
              if (0xe < (int)plVar12) goto code_r0x000104c210f0;
              puVar38 = (undefined1 *)((long)plVar14 + 9);
              for (lVar37 = 0; uVar27 = (uint)plVar12, lVar37 < (int)uVar27; lVar37 = lVar37 + 1) {
                func_0x000104c214c8();
                uVar8 = (undefined1)uVar27;
                puVar38[-1] = uVar8;
                if ((lVar37 != 0) && ((uVar27 & 0xff) <= (uint)(byte)puVar38[-3]))
                goto code_r0x000104c210f0;
                func_0x000104c214c8();
                *puVar38 = uVar8;
                plVar12 = (long *)(ulong)*(uint *)((long)plVar14 + 4);
                puVar38 = puVar38 + 2;
              }
              if (*(char *)(lVar18 + 0x1a2) == '\0') {
                func_0x000104c21510();
                cVar16 = *(char *)(lVar18 + 0x1a2);
                *(int *)((long)plVar14 + 0x24) = (int)plVar12;
                if (((cVar16 != '\0') || ((int)plVar12 != 0)) ||
                   ((*(char *)(lVar18 + 0x1a1) == '\x01' &&
                    ((*(char *)(lVar18 + 0x1a0) == '\x01' && (*(int *)((long)plVar14 + 4) == 0))))))
                goto code_r0x000104c20968;
                puVar38 = (undefined1 *)((long)plVar14 + 0x31);
                for (lVar37 = 0; lVar37 != 2; lVar37 = lVar37 + 1) {
                  func_0x000104c214f8();
                  *(int *)((long)plVar14 + lVar37 * 4 + 0x28) = (int)plVar12;
                  if (10 < (int)plVar12) goto code_r0x000104c210f0;
                  puVar46 = puVar38;
                  for (lVar44 = 0; uVar27 = (uint)plVar12, lVar44 < (int)uVar27; lVar44 = lVar44 + 1
                      ) {
                    func_0x000104c214c8();
                    uVar8 = (undefined1)uVar27;
                    puVar46[-1] = uVar8;
                    if ((lVar44 != 0) && ((uVar27 & 0xff) <= (uint)(byte)puVar46[-3]))
                    goto code_r0x000104c210f0;
                    func_0x000104c214c8();
                    *puVar46 = uVar8;
                    plVar12 = (long *)(ulong)*(uint *)((long)plVar14 + lVar37 * 4 + 0x28);
                    puVar46 = puVar46 + 2;
                  }
                  puVar38 = puVar38 + 0x14;
                }
              }
              else {
                *(undefined4 *)((long)plVar14 + 0x24) = 0;
code_r0x000104c20968:
                plVar14[5] = 0;
              }
              piStack_e0 = (int *)((long)plVar14 + 0x24);
              if (((*(char *)(lVar18 + 0x1a0) != '\x01') || (*(char *)(lVar18 + 0x1a1) != '\x01'))
                 || (((int)plVar14[5] != 0) != (*(int *)((long)plVar14 + 0x2c) == 0))) {
                func_0x000104c214bc();
                *(int *)(plVar14 + 0xb) = (int)plVar12 + 8;
                func_0x000104c214bc();
                iVar10 = (int)plVar12;
                *(int *)((long)plVar14 + 0x5c) = iVar10;
                uVar27 = (iVar10 + iVar10 * iVar10) * 2;
                if (*(int *)((long)plVar14 + 4) != 0) {
                  pbVar41 = (byte *)(plVar14 + 0xc);
                  for (uVar39 = (ulong)(uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)); uVar39 != 0;
                      uVar39 = uVar39 - 1) {
                    func_0x000104c214c8();
                    *pbVar41 = (byte)plVar12 ^ 0x80;
                    pbVar41 = pbVar41 + 1;
                  }
                }
                pbVar41 = (byte *)(plVar14 + 0xf);
                for (lVar18 = 0; lVar18 != 2; lVar18 = lVar18 + 1) {
                  if ((*(int *)((long)plVar14 + lVar18 * 4 + 0x28) != 0) || (*piStack_e0 != 0)) {
                    uVar42 = uVar27;
                    if (*(int *)((long)plVar14 + 4) != 0) {
                      uVar42 = uVar27 + 1;
                    }
                    pbVar5 = pbVar41;
                    for (uVar39 = (ulong)(uVar42 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)); uVar39 != 0
                        ; uVar39 = uVar39 - 1) {
                      func_0x000104c214c8();
                      *pbVar5 = (byte)plVar12 ^ 0x80;
                      pbVar5 = pbVar5 + 1;
                    }
                    if (*(int *)((long)plVar14 + 4) == 0) {
                      *(byte *)((long)(plVar14 + 0xf) + (long)(int)uVar42 + lVar18 * 0x1c) = 0;
                    }
                  }
                  pbVar41 = pbVar41 + 0x1c;
                }
                lVar18 = 2;
                func_0x000104c214bc();
                plVar14[0x16] = (ulong)((int)plVar12 + 6);
                func_0x000104c214bc();
                *(int *)(plVar14 + 0x17) = (int)plVar12;
                piVar36 = (int *)((long)plVar14 + 0xcc);
                do {
                  iVar10 = (int)plVar12;
                  if (piVar36[-0x29] != 0) {
                    func_0x000104c214c8();
                    piVar36[-4] = iVar10 + -0x80;
                    func_0x000104c214c8();
                    piVar36[-2] = iVar10 + -0x80;
                    plVar12 = &lStack_d8;
                    pcVar15 = (char *)0x9;
                    FUN_104c139b4();
                    *piVar36 = (int)plVar12 + -0x100;
                  }
                  lVar18 = lVar18 + -1;
                  piVar36 = piVar36 + 1;
                } while (lVar18 != 0);
                func_0x000104c21510();
                *(int *)((long)plVar14 + 0xd4) = (int)plVar12;
                func_0x000104c21510();
                *(int *)(plVar14 + 0x1b) = (int)plVar12;
                goto code_r0x000104c20acc;
              }
              goto code_r0x000104c210f0;
            }
          }
          pcVar15 = (char *)0xe0;
          _bzero();
          plVar12 = plVar14;
          goto code_r0x000104c20acc;
        }
      }
code_r0x000104c210f0:
      func_0x000104c215b8();
    }
    param_1[0xc] = 0;
    goto LAB_104c21104;
  case 4:
    lVar18 = param_1[0xc];
    if (lVar18 == 0) goto LAB_104c21104;
    unaff_x20 = (char *)(ulong)*(uint *)((long)param_1 + 0x2c);
code_r0x000104c20b4c:
    iVar10 = (int)unaff_x20;
    if (iVar10 < (int)param_1[5]) {
code_r0x000104c20bac:
      iVar10 = (int)plVar12;
      uVar27 = (uint)*(byte *)(lVar18 + 0x1c1) * (uint)*(byte *)(lVar18 + 0x1bd);
      iVar9 = (int)unaff_x20;
      if ((uVar27 < 2) || (func_0x000104c21510(), iVar10 == 0)) {
        lVar37 = param_1[4];
        lVar18 = lVar37 + (long)iVar9 * 0x50;
        *(undefined4 *)(lVar18 + 0x48) = 0;
        *(uint *)(lVar18 + 0x4c) = uVar27 - 1;
      }
      else {
        func_0x000104c21690();
        lVar37 = param_1[4];
        lVar18 = lVar37 + (long)iVar9 * 0x50;
        *(int *)(lVar18 + 0x48) = iVar10;
        func_0x000104c21690();
        *(int *)(lVar18 + 0x4c) = iVar10;
      }
      uVar39 = uStack_d0 >> 0x20;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      lStack_d8 = 0;
      if ((int)uVar39 == 0) {
        pcVar15 = (char *)param_2;
        FUN_104c06ee0(lVar37 + (long)iVar9 * 0x50);
        iVar9 = *(int *)((long)param_1 + 0x2c);
        puVar25 = (undefined8 *)(param_1[4] + (long)iVar9 * 0x50);
        *puVar25 = plStack_c8;
        puVar25[1] = (long)pcStack_b8 - (long)plStack_c8;
        iVar10 = *(int *)((long)puVar25 + 0x4c);
        if ((*(int *)(puVar25 + 9) <= iVar10) && (*(int *)(puVar25 + 9) == (int)param_1[6])) {
          *(int *)((long)param_1 + 0x2c) = iVar9 + 1;
          *(int *)(param_1 + 6) = iVar10 + 1;
          break;
        }
        for (lVar18 = 0; lVar18 <= iVar9; lVar18 = lVar18 + 1) {
          func_0x000104c21678();
          iVar9 = *(int *)((long)param_1 + 0x2c);
        }
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 6) = 0;
      }
    }
    else if (iVar10 < 0x1999999) {
      plVar12 = (long *)param_1[4];
      _realloc(plVar12,(long)(iVar10 + 1) * 0x50);
      if (plVar12 != (long *)0x0) {
        param_1[4] = (long)plVar12;
        iVar10 = *(int *)((long)param_1 + 0x2c);
        unaff_x20 = (char *)(long)iVar10;
        plVar14 = plVar12 + (long)iVar10 * 10;
        plVar14[1] = 0;
        *plVar14 = 0;
        plVar14[3] = 0;
        plVar14[2] = 0;
        plVar14[5] = 0;
        plVar14[4] = 0;
        plVar14[7] = 0;
        plVar14[6] = 0;
        plVar14[9] = 0;
        plVar14[8] = 0;
        *(int *)(param_1 + 5) = iVar10 + 1;
        lVar18 = param_1[0xc];
        goto code_r0x000104c20bac;
      }
    }
    goto LAB_104c21104;
  case 5:
    iVar10 = (int)&lStack_d8;
    FUN_104c13a8c();
    if (uStack_d0._4_4_ != 0) goto LAB_104c21104;
    switch(iVar10) {
    case 1:
      plVar14 = (long *)0x4;
      FUN_104c28eb0();
      iVar9 = (int)pcVar15;
      aplStack_90[0] = plVar14;
      if (plVar14 == (long *)0x0) {
code_r0x000104c202b0:
        iVar10 = 1;
      }
      else {
        unaff_x20 = (char *)*plVar14;
        plVar12 = plVar14;
        func_0x000104c21504();
        iVar10 = (int)plVar12;
        *(short *)unaff_x20 = (short)plVar12;
        func_0x000104c21504();
        *(short *)(unaff_x20 + 2) = (short)iVar10;
        func_0x000104c21568();
        iVar9 = (int)pcVar15;
        if (-1 < iVar10) {
          FUN_104c28f7c(param_1 + 0xd);
          param_1[0xd] = (long)plVar14;
          param_1[0xe] = (long)unaff_x20;
          break;
        }
code_r0x000104c204b8:
        FUN_104c28f7c(aplStack_90);
        iVar10 = 2;
      }
      if (iVar10 != 2) goto code_r0x000104c204cc;
      goto LAB_104c21104;
    case 2:
      plVar14 = (long *)0x18;
      FUN_104c28eb0();
      iVar9 = (int)pcVar15;
      aplStack_90[0] = plVar14;
      if (plVar14 == (long *)0x0) goto code_r0x000104c202b0;
      lVar18 = 0;
      unaff_x20 = (char *)*plVar14;
      plVar12 = plVar14;
      while( true ) {
        func_0x000104c21504();
        iVar10 = (int)plVar12;
        if (lVar18 == 0xc) break;
        *(short *)(unaff_x20 + lVar18) = (short)plVar12;
        func_0x000104c21504();
        *(short *)(unaff_x20 + lVar18 + 2) = (short)plVar12;
        lVar18 = lVar18 + 4;
      }
      *(short *)(unaff_x20 + 0xc) = (short)plVar12;
      func_0x000104c21504();
      *(short *)(unaff_x20 + 0xe) = (short)iVar10;
      func_0x000104c21684();
      *(int *)(unaff_x20 + 0x10) = iVar10;
      func_0x000104c21684();
      *(int *)(unaff_x20 + 0x14) = iVar10;
      func_0x000104c21568();
      iVar9 = (int)pcVar15;
      if (iVar10 < 0) goto code_r0x000104c204b8;
      FUN_104c28f7c(param_1 + 0xf);
      param_1[0xf] = (long)plVar14;
      param_1[0x10] = (long)unaff_x20;
      break;
    case 3:
    case 5:
      break;
    case 4:
      pcVar31 = pcStack_b8 + -(long)plStack_c8;
      pcVar15 = pcVar31;
      do {
        pcVar32 = pcVar15;
        unaff_x20 = (char *)((ulong)pcVar31 & (long)pcVar31 >> 0x3f);
        if ((long)pcVar32 < 1) break;
        pcVar15 = pcVar32 + -1;
        unaff_x20 = pcVar32;
      } while (((char *)((long)plStack_c8 + -1))[(long)pcVar32] == '\0');
      func_0x000104c214c8();
      if (iVar10 == 0xff) {
        iVar9 = iVar10;
        func_0x000104c214c8();
        uVar8 = (undefined1)iVar9;
        lVar18 = -3;
      }
      else {
        uVar8 = 0;
        lVar18 = -2;
      }
      pcVar15 = unaff_x20 + lVar18;
      if (((long)pcVar15 < 1) || (*(char *)((long)plStack_c8 + (long)pcVar15) != -0x80)) {
        pcVar15 = "Malformed ITU-T T.35 metadata message format\n";
        goto LAB_104c21284;
      }
      if ((int)param_1[0x13] < 0x5555555) {
        lVar18 = param_1[0x12];
        _realloc(lVar18,(long)(int)param_1[0x13] * 0x18 + 0x18);
        if (lVar18 != 0) {
          param_1[0x12] = lVar18;
          lVar37 = param_1[0x13];
          puVar25 = (undefined8 *)(lVar18 + (long)(int)lVar37 * 0x18);
          puVar25[1] = 0;
          puVar25[2] = 0;
          *puVar25 = 0;
          if ((int)lVar37 == 0) {
            plVar14 = (long *)0x38;
            _malloc();
            if (plVar14 == (long *)0x0) goto LAB_104c21104;
            iVar9 = 0;
            plVar14[2] = 0;
            plVar14[3] = lVar18;
            plVar14[4] = 1;
            plVar14[5] = (long)FUN_104c218c0;
            plVar14[6] = (long)plVar14;
            param_1[0x11] = (long)(plVar14 + 2);
          }
          else {
            lVar18 = param_1[0x12];
            plVar14 = *(long **)(param_1[0x11] + 0x20);
            *(long *)(param_1[0x11] + 8) = lVar18;
            iVar9 = (int)param_1[0x13];
          }
          uVar27 = iVar9 + 1;
          unaff_x20 = (char *)(ulong)uVar27;
          *plVar14 = lVar18;
          plVar14[1] = (long)(int)uVar27;
          puVar38 = (undefined1 *)(lVar18 + (long)iVar9 * 0x18);
          pcVar31 = pcVar15;
          _malloc();
          *(char **)(puVar38 + 0x10) = pcVar31;
          if (pcVar31 != (char *)0x0) {
            *puVar38 = (char)iVar10;
            puVar38[1] = uVar8;
            *(char **)(puVar38 + 8) = pcVar15;
            pcVar15 = (char *)plStack_c8;
            _memcpy();
            *(uint *)(param_1 + 0x13) = uVar27;
            break;
          }
        }
      }
      goto LAB_104c21104;
    default:
      pcVar15 = "Unknown Metadata OBU type %d\n";
LAB_104c21284:
      func_0x000104c215b8();
    }
    break;
  case 7:
    if (param_1[0xc] == 0) goto code_r0x000104c1f040;
    break;
  default:
    pcVar15 = "Unknown OBU type %d of size %td\n";
    goto LAB_104c21284;
  case 0xf:
    break;
  }
  iVar9 = (int)pcVar15;
  if ((param_1[9] != 0) && (lVar18 = param_1[0xc], lVar18 != 0)) {
    if (*(char *)(lVar18 + 0xfb) != '\0') {
      if (param_1[(ulong)*(byte *)(lVar18 + 0xfc) * 0x2b + 0x1863] != 0) {
        iVar10 = *(int *)(param_1[(ulong)*(byte *)(lVar18 + 0xfc) * 0x2b + 0x1863] + 0xe8);
        if (iVar10 == 3) {
LAB_104c20cb8:
          if (1 < *(uint *)((long)param_1 + 0xf66c)) goto LAB_104c21174;
        }
        else if (iVar10 == 2) {
          if (2 < *(uint *)((long)param_1 + 0xf66c)) goto LAB_104c21174;
        }
        else if (iVar10 == 1) goto LAB_104c20cb8;
        plVar14 = param_1 + (ulong)*(byte *)(lVar18 + 0xfc) * 0x2b + 0x1862;
        if ((plVar14[2] != 0) &&
           (((int)param_1[0x1ecc] == 0 || (*(int *)((long)plVar14 + 0x114) != 0)))) {
          if ((int)param_1[1] == 1) {
            func_0x000104c21df0(param_1 + 0x1d);
            func_0x000104c21624();
            FUN_104c21914(param_1 + 0x1d);
            FUN_104c28f7c(unaff_x20);
            unaff_x20[8] = '\0';
            unaff_x20[9] = '\0';
            unaff_x20[10] = '\0';
            unaff_x20[0xb] = '\0';
            unaff_x20[0xc] = '\0';
            unaff_x20[0xd] = '\0';
            unaff_x20[0xe] = '\0';
            unaff_x20[0xf] = '\0';
            unaff_x20[0x10] = '\0';
            unaff_x20[0x11] = '\0';
            unaff_x20[0x12] = '\0';
            unaff_x20[0x13] = '\0';
            uVar39 = (ulong)*(byte *)(*(long *)(unaff_x20 + -0x28) + 0xfc);
            *(uint *)(param_1 + 0x1ecf) =
                 *(uint *)(param_1 + 0x1ecf) | *(uint *)(param_1 + uVar39 * 0x2b + 0x1885) & 3;
          }
          else {
            _pthread_mutex_lock(param_1 + 0x70);
            uVar27 = *(uint *)(param_1 + 0x6a);
            iVar10 = 0;
            if (uVar27 + 1 != (int)param_1[1]) {
              iVar10 = uVar27 + 1;
            }
            *(int *)(param_1 + 0x6a) = iVar10;
            lVar18 = *param_1 + (ulong)uVar27 * 0x1640;
            while (0 < *(int *)(lVar18 + 0xc34)) {
              _pthread_cond_wait(lVar18 + 0x1520,*(undefined8 *)(lVar18 + 0x1550));
            }
            lVar37 = param_1[0x69] + (ulong)uVar27 * 0x128;
            if ((*(long *)(lVar37 + 0x10) != 0) || (*(int *)(lVar18 + 0x15ac) != 0)) {
              plVar14 = param_1 + 0x7e;
              lVar44 = *plVar14;
              if ((int)lVar44 + 1U < *(uint *)(param_1 + 1)) {
                do {
                  cVar16 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar7) {
                    *(int *)plVar14 = (int)*plVar14 + 1;
                    cVar16 = ExclusiveMonitorsStatus();
                  }
                } while (cVar16 != '\0');
              }
              else {
                *(int *)plVar14 = 0;
              }
              plVar14 = param_1 + 0x7f;
              do {
                if ((int)*plVar14 != (int)lVar44) {
                  ClearExclusiveLocal();
                  break;
                }
                cVar16 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar7) {
                  *(int *)plVar14 = -1;
                  cVar16 = ExclusiveMonitorsStatus();
                }
              } while (cVar16 != '\0');
              uVar27 = *(uint *)((long)param_1 + 0x3f4);
              if ((uVar27 != 0) && (uVar27 < *(uint *)(param_1 + 1))) {
                *(uint *)((long)param_1 + 0x3f4) = uVar27 - 1;
              }
            }
            if (*(int *)(lVar18 + 0x15a4) == 0) {
              if (*(long *)(lVar37 + 0x10) != 0) {
                if (((*(int *)(lVar37 + 0x110) != 0) || (*(int *)((long)param_1 + 0xf664) != 0)) &&
                   (*(int *)(*(long *)(lVar37 + 0x120) + 4) != -2)) {
                  func_0x000104c21df0(param_1 + 0x1d,lVar37);
                  *(uint *)(param_1 + 0x1ecf) =
                       *(uint *)(param_1 + 0x1ecf) | *(uint *)(lVar37 + 0x118) & 3;
                }
                goto LAB_104c20ea0;
              }
            }
            else {
              *(int *)(param_1 + 0x1ed6) = *(int *)(lVar18 + 0x15a4);
              *(undefined4 *)(lVar18 + 0x15a4) = 0;
              FUN_104c06f20(param_1 + 0x1ed0,lVar37 + 0x48);
LAB_104c20ea0:
              func_0x000104c21ed8(lVar37);
            }
            plVar14 = param_1 + (ulong)*(byte *)(param_1[0xc] + 0xfc) * 0x2b + 0x1862;
            func_0x000104c21df0(lVar37);
            *(undefined4 *)(lVar37 + 0x110) = 1;
            func_0x000104c21624();
            FUN_104c21914(lVar37);
            FUN_104c28f7c(lVar18);
            *(undefined8 *)(lVar18 + 8) = 0;
            *(undefined4 *)(lVar18 + 0x10) = 0;
            _pthread_mutex_unlock(param_1 + 0x70);
            uVar39 = (ulong)*(byte *)(param_1[0xc] + 0xfc);
          }
          iVar9 = (int)plVar14;
          if (*(int *)(param_1[uVar39 * 0x2b + 0x1863] + 0xe8) == 0) {
            plVar12 = param_1 + uVar39 * 0x2b + 0x1862;
            *(undefined4 *)((long)plVar12 + 0x114) = 0;
            plVar33 = param_1 + uVar39 * 3 + 0x19bb;
            for (uVar19 = 0; iVar9 = (int)plVar14, uVar19 != 8; uVar19 = uVar19 + 1) {
              if (uVar19 != uVar39) {
                plVar11 = param_1 + uVar19 * 0x2b + 0x1862;
                if (plVar11[1] != 0) {
                  func_0x000104c21ed8(plVar11);
                }
                plVar14 = plVar12;
                func_0x000104c21df0(plVar11);
                plVar30 = param_1 + uVar19 * 3 + 0x19bb;
                FUN_104c06e18(plVar30);
                lVar37 = plVar33[1];
                lVar18 = *plVar33;
                plVar30[2] = plVar33[2];
                plVar30[1] = lVar37;
                *plVar30 = lVar18;
                if (*plVar33 != 0) {
                  do {
                    func_0x000104c21574();
                  } while (extraout_w10 != 0);
                }
                FUN_104c28f7c(plVar11 + 0x25);
                lVar18 = plVar12[0x25];
                plVar11[0x25] = lVar18;
                if (lVar18 != 0) {
                  do {
                    func_0x000104c21574();
                  } while (extraout_w10_00 != 0);
                }
                FUN_104c28f7c(plVar11 + 0x26);
              }
            }
          }
          param_1[0xc] = 0;
          goto LAB_104c211ec;
        }
      }
LAB_104c21104:
      FUN_104c06f20(param_1 + 0x1ed0,param_2 + 3);
      iVar9 = 0xf245530;
      if (uStack_d0._4_4_ != 0) {
        iVar9 = 0xf245515;
      }
      func_0x000104c215b8();
      plVar14 = (long *)0xffffffffffffffea;
      goto LAB_104c211f4;
    }
    if ((int)param_1[6] == (uint)*(byte *)(lVar18 + 0x1c1) * (uint)*(byte *)(lVar18 + 0x1bd)) {
      iVar10 = *(int *)(lVar18 + 0xe8);
      if (iVar10 == 3) {
LAB_104c20cfc:
        uVar27 = *(uint *)((long)param_1 + 0xf66c);
        if (uVar27 < 2) {
LAB_104c2114c:
          if ((uVar27 != 1) || (*(char *)(lVar18 + 0x194) != '\0')) goto LAB_104c21158;
        }
LAB_104c21174:
        for (lVar18 = 0; iVar9 = (int)pcVar15, lVar18 != 8; lVar18 = lVar18 + 1) {
          if ((*(byte *)(param_1[0xc] + 0x194) >> (ulong)((uint)lVar18 & 0x1f) & 1) != 0) {
            plVar14 = param_1 + lVar18 * 0x2b + 0x1862;
            func_0x000104c21ed8(plVar14);
            lVar37 = param_1[0xb];
            lVar29 = param_1[0xc];
            lVar44 = param_1[8];
            *plVar14 = param_1[9];
            plVar14[1] = lVar29;
            plVar14[0x17] = lVar37;
            plVar14[0x18] = lVar44;
            do {
              func_0x000104c21574();
            } while (extraout_w10_01 != 0);
            do {
              func_0x000104c21574();
            } while (extraout_w10_02 != 0);
          }
        }
        FUN_104c28f7c(param_1 + 0xb);
      }
      else {
        if (iVar10 == 2) {
          uVar27 = *(uint *)((long)param_1 + 0xf66c);
          if (2 < uVar27) goto LAB_104c21174;
          goto LAB_104c2114c;
        }
        if (iVar10 == 1) goto LAB_104c20cfc;
LAB_104c21158:
        if (*(int *)((long)param_1 + 0x2c) == 0) goto LAB_104c21104;
        plVar14 = param_1;
        func_0x000104c09628();
        if ((int)plVar14 < 0) {
          plVar14 = (long *)(long)(int)plVar14;
          goto LAB_104c211f4;
        }
      }
      param_1[0xc] = 0;
      *(undefined4 *)(param_1 + 6) = 0;
    }
  }
LAB_104c211ec:
  plVar14 = (long *)(pcStack_b8 + -(long)plStack_c0);
LAB_104c211f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar14;
  }
  ___stack_chk_fail();
  plVar12 = plVar14;
  func_0x000104c13954();
  if (*(int *)((long)plVar14 + 0xc) == 0) {
    if (iVar9 == 0) {
      return (long *)0x0;
    }
    if (((int)plVar12 != 0) && (*plVar14 == 0)) {
      uVar19 = plVar14[4] - plVar14[2];
      uVar39 = uVar19;
      do {
        if ((long)uVar39 < 1) {
          uVar27 = 0;
          if (0x7fffffffffffffff < uVar19) {
            uVar27 = 0xffffffea;
          }
          return (long *)(ulong)uVar27;
        }
        pcVar15 = (char *)(plVar14[2] + -1 + uVar39);
        uVar39 = uVar39 - 1;
      } while (*pcVar15 == '\0');
    }
  }
  return (long *)0xffffffea;
}



/* Entry: 104c21290; end: 104c21313;  */

undefined4 FUN_104c21290(long *param_1,int param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar2 = param_1;
  func_0x000104c13954();
  if (*(int *)((long)param_1 + 0xc) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (((int)plVar2 != 0) && (*param_1 == 0)) {
      uVar3 = param_1[4] - param_1[2];
      uVar4 = uVar3;
      do {
        if ((long)uVar4 < 1) {
          if (uVar3 < 0x8000000000000000) {
            return 0;
          }
          return 0xffffffea;
        }
        pcVar1 = (char *)(param_1[2] + -1 + uVar4);
        uVar4 = uVar4 - 1;
      } while (*pcVar1 == '\0');
    }
  }
  return 0xffffffea;
}



/* Entry: 104c21314; end: 104c2149f;  */

void FUN_104c21314(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  undefined8 uVar3;
  int extraout_w8;
  int iVar4;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w9_00;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x60);
  lVar5 = param_1;
  if (param_3 != 0) {
    lVar8 = 0x1a5;
    while( true ) {
      iVar2 = (int)lVar8;
      in_OV = SBORROW4(iVar2,0x1ac);
      in_NG = iVar2 + -0x1ac < 0;
      if (iVar2 == 0x1ac) break;
      func_0x000104c215c0();
      iVar2 = (int)lVar5;
      if (iVar2 != 0) {
        lVar5 = *(long *)(param_1 + (long)(int)*(char *)(*(long *)(param_1 + 0x60) + lVar8) * 0x158
                         + 0xc318);
        if (lVar5 == 0) {
          return;
        }
        iVar4 = *(int *)(lVar5 + 0xf0);
        *(int *)(lVar6 + 0xf0) = iVar4;
        *(undefined4 *)(lVar6 + 0xf4) = *(undefined4 *)(lVar5 + 0xf4);
        *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(lVar5 + 0x198);
        if (*(char *)(lVar7 + 0x19d) == '\0') {
          *(undefined1 *)(lVar6 + 0x1a1) = 0;
        }
        else {
          func_0x000104c215c0();
          *(char *)(lVar6 + 0x1a1) = (char)iVar2;
          if (iVar2 != 0) {
            func_0x000104c2169c();
            func_0x000104c21584();
            iVar2 = extraout_w10;
            if (in_NG == in_OV) {
              iVar2 = extraout_w9;
            }
            iVar4 = extraout_w8;
            if (extraout_w8 <= iVar2) {
              iVar4 = iVar2;
            }
            goto LAB_104c21490;
          }
          iVar4 = *(int *)(lVar6 + 0xf0);
        }
        *(undefined1 *)(lVar6 + 0x1a0) = 8;
LAB_104c21490:
        *(int *)(lVar6 + 0xec) = iVar4;
        return;
      }
      lVar8 = lVar8 + 1;
    }
  }
  iVar2 = (int)lVar5;
  if (*(char *)(lVar6 + 0x10e) == '\0') {
    *(undefined4 *)(lVar6 + 0xf0) = *(undefined4 *)(lVar7 + 4);
    iVar4 = *(int *)(lVar7 + 8);
  }
  else {
    uVar3 = param_2;
    FUN_104c139b4(param_2,*(undefined1 *)(lVar7 + 0x183));
    *(int *)(lVar6 + 0xf0) = (int)uVar3 + 1;
    FUN_104c139b4(param_2,*(undefined1 *)(lVar7 + 0x184));
    iVar2 = (int)param_2;
    iVar4 = iVar2 + 1;
  }
  *(int *)(lVar6 + 0xf4) = iVar4;
  if (*(char *)(lVar7 + 0x19d) == '\0') {
    *(undefined1 *)(lVar6 + 0x1a1) = 0;
  }
  else {
    func_0x000104c215c0();
    *(char *)(lVar6 + 0x1a1) = (char)iVar2;
    if (iVar2 != 0) {
      func_0x000104c2169c();
      func_0x000104c21584();
      iVar4 = extraout_w10_00;
      if (in_NG == in_OV) {
        iVar4 = extraout_w9_00;
      }
      iVar1 = extraout_w8_00;
      if (extraout_w8_00 <= iVar4) {
        iVar1 = iVar4;
      }
      goto LAB_104c21434;
    }
  }
  *(undefined1 *)(lVar6 + 0x1a0) = 8;
  iVar1 = *(int *)(lVar6 + 0xf0);
LAB_104c21434:
  *(int *)(lVar6 + 0xec) = iVar1;
  func_0x000104c215c0();
  *(char *)(lVar6 + 0x1a2) = (char)iVar2;
  if (iVar2 == 0) {
    *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(lVar6 + 0xf0);
  }
  else {
    func_0x000104c216a8();
    *(int *)(lVar6 + 0x198) = iVar2 + 1;
    func_0x000104c216a8();
    *(int *)(lVar6 + 0x19c) = iVar2 + 1;
  }
  return;
}



/* Entry: 104c214a0; end: 104c216bf;  */

void FUN_104c214a0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1 << (ulong)(uVar1 & 0x1f) < param_2);
  return;
}



/* Entry: 104c216c0; end: 104c217c3;  */

void FUN_104c216c0(long param_1,long param_2,ulong param_3,uint param_4,uint param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  
  uVar2 = param_5 >> 1;
  uVar7 = param_3 >> 1 & 0x7fffffff;
  pcVar9 = (char *)(param_2 + 1);
  uVar6 = (uint)uVar7;
  for (uVar8 = 0; uVar8 != param_6; uVar8 = uVar8 + 1) {
    pcVar5 = pcVar9;
    for (uVar4 = 0; uVar2 != uVar4; uVar4 = uVar4 + 1) {
      *(char *)(param_1 + uVar4) = pcVar5[-1] | *pcVar5 << 4;
      pcVar5 = pcVar5 + 2;
    }
    if (uVar2 < uVar6) {
      _memset(param_1 + (ulong)uVar2,(uint)*(byte *)(param_2 + (ulong)param_5 + -1) * 0x11,
              uVar6 - (param_5 >> 1));
    }
    param_2 = param_2 + (param_3 & 0xffffffff);
    param_1 = param_1 + uVar7;
    pcVar9 = pcVar9 + (param_3 & 0xffffffff);
  }
  iVar3 = param_4 - param_6;
  if (param_6 <= param_4 && iVar3 != 0) {
    lVar1 = param_1 + (int)-uVar6;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      _memcpy(param_1,lVar1,uVar7);
      param_1 = param_1 + uVar7;
    }
  }
  return;
}



/* Entry: 104c217c4; end: 104c218af;  */

undefined8 FUN_104c217c4(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  iVar4 = *(int *)(param_1 + 0x40);
  uVar5 = (*(int *)(param_1 + 0x38) + 0x7fU & 0xffffff80) << (8 < *(int *)(param_1 + 0x44));
  uVar7 = (ulong)(int)uVar5;
  uVar8 = (long)uVar7 >> (iVar4 != 3);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = uVar8;
  }
  uVar2 = uVar1 | 0x40;
  if ((uVar1 & 0x3c0) != 0) {
    uVar2 = uVar8;
  }
  uVar8 = (long)*(int *)(param_1 + 0x3c) + 0x7fU & 0xffffffffffffff80;
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar7 | 0x40;
  if ((uVar5 & 0x380) != 0) {
    uVar2 = uVar7;
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  *(ulong *)(param_1 + 0x30) = uVar1;
  lVar10 = uVar2 * uVar8;
  lVar9 = uVar1 * (long)((int)uVar8 >> (iVar4 == 1));
  func_0x000104c1e798(param_2,lVar10 + lVar9 * 2 | 0x30);
  if (param_2 == (long *)0x0) {
    uVar6 = 0xfffffff4;
  }
  else {
    uVar6 = 0;
    *(long **)(param_1 + 0x108) = param_2;
    lVar10 = *param_2 + lVar10;
    lVar3 = 0;
    if (iVar4 != 0) {
      lVar3 = lVar10;
    }
    *(long *)(param_1 + 0x10) = *param_2;
    *(long *)(param_1 + 0x18) = lVar3;
    lVar3 = 0;
    if (iVar4 != 0) {
      lVar3 = lVar10 + lVar9;
    }
    *(long *)(param_1 + 0x20) = lVar3;
  }
  return uVar6;
}



/* Entry: 104c218b0; end: 104c218bf;  */

void FUN_104c218b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  
  puVar2 = *(undefined8 **)(param_1 + 0x108);
  func_0x000104c1e878(param_2);
  iVar1 = *(int *)(unaff_x19 + 0x48) + -1;
  *(int *)(unaff_x19 + 0x48) = iVar1;
  if (*(int *)(unaff_x19 + 0x4c) == 0) {
    puVar2[1] = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 **)(unaff_x19 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)();
    return;
  }
  func_0x000104c1e858();
  _free(*puVar2);
  if (iVar1 != 0) {
    return;
  }
  _pthread_mutex_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 104c218c0; end: 104c21913;  */

void FUN_104c218c0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = 0x10;
  while( true ) {
    if ((ulong)param_2[1] <= uVar1) break;
    _free(*(undefined8 *)(*param_2 + lVar2));
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 0x18;
  }
  _free();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 104c21914; end: 104c219cf;  */

void FUN_104c21914(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  
  FUN_104c06f20(param_1 + 0x48,param_9);
  FUN_104c28f7c(param_1 + 200);
  *(long *)(param_1 + 200) = param_3;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  if (param_3 != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10 != 0);
  }
  FUN_104c28f7c(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = param_5;
  *(undefined8 *)(param_1 + 0x80) = param_4;
  if (param_5 != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_00 != 0);
  }
  FUN_104c28f7c(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = param_7;
  *(undefined8 *)(param_1 + 0x88) = param_6;
  *(undefined8 *)(param_1 + 0x90) = param_8;
  if (param_7 != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 104c219d0; end: 104c21ae7;  */

long FUN_104c219d0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  
  lVar2 = param_2[3];
  lVar6 = param_1 + 0xf630;
  plVar1 = param_2 + 0x14d;
  lVar5 = param_1;
  plVar8 = plVar1;
  FUN_104c21ae8(param_1,param_2 + 0x129,*(undefined4 *)(lVar2 + 0xf0),*(undefined4 *)(lVar2 + 0xf4),
                param_2[1],*param_2,lVar2,param_2[2],param_3);
  if ((int)lVar5 == 0) {
    FUN_104c21914(param_2 + 0x129,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),
                  *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
                  (long)*(int *)(param_1 + 0x98),param_2[0x185] + 0x18,lVar6,plVar8);
    FUN_104c28f7c((undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    lVar6 = param_2[3];
    bVar4 = *(byte *)(lVar6 + 0x108);
    if ((bVar4 == 0) && (*(int *)(param_1 + 0xf664) == 0)) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
      if (*(uint *)(param_1 + 0xf658) != (uint)*(byte *)(lVar6 + 0xfa)) {
        uVar7 = 3;
      }
    }
    uVar3 = *(uint *)(param_1 + 0xf674);
    *(uint *)(param_2 + 0x14c) = uVar3;
    *(uint *)(param_1 + 0xf674) = uVar3 & uVar7;
    *(uint *)(param_2 + 0x14b) = (uint)bVar4;
    *(uint *)((long)param_2 + 0xa5c) = (uint)*(byte *)(lVar6 + 0x109);
    if (1 < *(uint *)(param_1 + 8)) {
      *(undefined4 *)*plVar1 = 0;
      *(undefined4 *)(*plVar1 + 4) = 0;
    }
  }
  return lVar5;
}



/* Entry: 104c21ae8; end: 104c21c9f;  */

long * FUN_104c21ae8(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,long param_5,
                    long param_6,long param_7,long param_8,undefined4 param_9,undefined4 param_10,
                    undefined8 *param_11,long *param_12)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (param_2[2] == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    plVar2 = *(long **)(param_1 + 0xf6d0);
    uVar3 = 0x158;
    if (uVar1 < 2) {
      uVar3 = 0x150;
    }
    func_0x000104c1e798(plVar2,uVar3);
    if (plVar2 == (long *)0x0) {
      plVar5 = (long *)0xfffffff4;
    }
    else {
      puVar4 = (undefined8 *)*plVar2;
      *(undefined4 *)(param_2 + 7) = param_3;
      *(undefined4 *)((long)param_2 + 0x3c) = param_4;
      *param_2 = param_5;
      param_2[1] = param_7;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_5 + 0xc);
      *(undefined4 *)((long)param_2 + 0x44) = param_9;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[0xc] = 0;
      param_2[0xb] = 0;
      param_2[0xe] = 0;
      param_2[0xd] = 0;
      param_2[9] = -0x8000000000000000;
      param_2[0xb] = -1;
      plVar5 = param_2;
      (*(code *)param_11[1])(param_2,*param_11);
      if ((int)plVar5 < 0) {
        func_0x000104c1e72c(*(undefined8 *)(param_1 + 0xf6d0),plVar2);
      }
      else {
        uVar6 = param_11[1];
        uVar3 = *param_11;
        puVar4[2] = param_11[2];
        puVar4[1] = uVar6;
        *puVar4 = uVar3;
        func_0x000104c21f54(puVar4 + 3,param_2);
        uVar3 = *(undefined8 *)(param_1 + 0xf6d0);
        puVar4[0x25] = 0;
        puVar4[0x26] = plVar2;
        puVar4[0x27] = 1;
        puVar4[0x28] = 0x104c21efc;
        puVar4[0x29] = uVar3;
        param_2[0x20] = (long)(puVar4 + 0x25);
        param_2[0x18] = param_6;
        if (param_6 != 0) {
          do {
            func_0x000104c21f68();
          } while (extraout_w10 != 0);
        }
        param_2[0x17] = param_8;
        if (param_8 != 0) {
          do {
            func_0x000104c21f68();
          } while (extraout_w10_00 != 0);
        }
        plVar5 = (long *)0x0;
        if ((param_12 != (long *)0x0) && (1 < uVar1)) {
          plVar5 = (long *)0x0;
          *param_12 = (long)(puVar4 + 0x2a);
        }
      }
    }
  }
  else {
    func_0x00010bdb0160(param_1,"Picture already allocated!\n");
    plVar5 = (long *)0xffffffff;
  }
  return plVar5;
}



/* Entry: 104c21ca0; end: 104c21d23;  */

undefined8 FUN_104c21ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = **(undefined8 **)(*(long *)(param_4 + 0x100) + 8);
  uVar2 = 0;
  FUN_104c21ae8();
  if ((int)param_1 == 0) {
    FUN_104c21914(param_2,*(undefined8 *)(param_4 + 0x78),*(undefined8 *)(param_4 + 200),
                  *(undefined8 *)(param_4 + 0x80),*(undefined8 *)(param_4 + 0xd0),
                  *(undefined8 *)(param_4 + 0x88),*(undefined8 *)(param_4 + 0xd8),
                  *(undefined8 *)(param_4 + 0x90),param_4 + 0x48,uVar1,uVar2);
  }
  return param_1;
}



/* Entry: 104c21d24; end: 104c21def;  */

void FUN_104c21d24(undefined8 param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  
  if (*(long *)(param_2 + 0x100) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_00 != 0);
  }
  if (*(long *)(param_2 + 0xc0) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_01 != 0);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_02 != 0);
  }
  if (*(long *)(param_2 + 200) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_03 != 0);
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_04 != 0);
  }
  if (*(long *)(param_2 + 0xd8) != 0) {
    do {
      func_0x000104c21f68();
    } while (extraout_w10_05 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)();
  return;
}



/* Entry: 104c21df0; end: 104c21f37;  */

void FUN_104c21df0(void)

{
  FUN_104c21d24();
  FUN_104c21f38();
  return;
}



/* Entry: 104c21f38; end: 104c2201b;  */

void FUN_104c21f38(void)

{
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x110) = *(undefined8 *)(unaff_x19 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x120) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined4 *)(unaff_x20 + 0x118) = *(undefined4 *)(unaff_x19 + 0x118);
  return;
}



/* Entry: 104c2201c; end: 104c255c3;  */

void FUN_104c2201c(long param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  long lVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar21;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong uVar25;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  undefined8 extraout_x9_07;
  undefined8 extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  undefined8 extraout_x9_15;
  undefined8 extraout_x9_16;
  undefined8 uVar26;
  undefined8 extraout_x9_17;
  uint extraout_w10;
  int iVar27;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  long extraout_x10;
  long extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  uint extraout_w11_05;
  uint extraout_w11_06;
  uint extraout_w11_07;
  uint extraout_w11_08;
  uint extraout_w11_09;
  long extraout_x11;
  ulong extraout_x11_00;
  long extraout_x11_01;
  uint uVar28;
  uint uVar29;
  uint extraout_w12;
  uint uVar30;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  uint extraout_w12_03;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x12_01;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong extraout_x13;
  long extraout_x13_00;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  uint uStack_14c;
  uint uStack_144;
  uint uStack_98;
  uint uStack_7c;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined1 uStack_6d;
  ushort uStack_6c;
  undefined2 uStack_6a;
  
  lVar20 = *(long *)(param_1 + 8);
  iVar27 = *(int *)(lVar20 + 0x878);
  bVar15 = iVar27 != 3;
  uVar28 = (uint)(byte)(&UNK_10dd74d48)[(ulong)param_2 * 4];
  uVar29 = (uint)(byte)(&UNK_10dd74d48)[(ulong)param_2 * 4];
  if (bVar15) {
    uVar29 = uVar29 + 1;
  }
  bVar16 = iVar27 == 1;
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar21 = (ulong)uVar9;
  uVar36 = *(uint *)(param_1 + 0x1c);
  uVar25 = (ulong)uVar36;
  uVar33 = uVar21 & 0x1f;
  uVar37 = uVar25 & 0x1f;
  uVar34 = uVar33 >> (ulong)bVar15;
  uVar35 = uVar37 >> (ulong)bVar16;
  uVar31 = (uint)(byte)(&UNK_10dd74d49)[(ulong)param_2 * 4];
  if (bVar16) {
    uVar31 = uVar31 + 1;
  }
  uVar32 = (uint)(byte)(&UNK_10dd74d49)[(ulong)param_2 * 4];
  if ((iVar27 == 0) || (uVar28 <= bVar15 && (uVar9 & 1) == 0)) {
    uStack_14c = 0;
  }
  else {
    uStack_14c = 1;
    if (uVar32 <= bVar16) {
      uStack_14c = uVar36 & 1;
    }
  }
  uVar40 = (uint)bVar16;
  uVar43 = (uint)bVar15;
  if (*(char *)(param_3 + 6) == '\0') {
    lVar42 = *(long *)(param_1 + 0x10);
    uVar9 = *(int *)(lVar20 + 0xd78) - uVar9;
    if ((int)uVar9 <= (int)uVar28) {
      uVar28 = uVar9;
    }
    uVar36 = *(int *)(lVar20 + 0xd7c) - uVar36;
    if ((int)uVar36 <= (int)uVar32) {
      uVar32 = uVar36;
    }
    uVar31 = (uint)bVar15;
    uVar29 = (int)(uVar28 + uVar31) >> uVar31;
    uVar40 = (int)(uVar32 + uVar40) >> uVar40;
    lVar1 = (ulong)*(byte *)(param_3 + 7) * 8;
    lVar8 = 0x1a;
    if (*(char *)(param_3 + 3) != '\0') {
      lVar8 = 10;
    }
    lVar8 = (ulong)*(byte *)(param_3 + lVar8) * 8;
    uStack_6c = (ushort)*(byte *)(param_3 + 0x1d);
    uStack_6a = *(undefined2 *)(param_3 + 0x1e);
    iVar27 = (int)uVar37;
    lVar3 = param_1 + 0x40;
    uVar9 = 0;
    while (uVar36 = uVar9, (int)uVar36 < (int)uVar32) {
      uVar9 = uVar36 + 0x10;
      uVar5 = uVar32;
      if ((int)uVar9 <= (int)uVar32) {
        uVar5 = uVar9;
      }
      uStack_144 = 0;
      uVar41 = (uint)bVar16;
      uVar6 = uVar40;
      if ((int)(uVar9 >> (ulong)uVar41) <= (int)uVar40) {
        uVar6 = uVar9 >> (ulong)uVar41;
      }
      uVar2 = uStack_144;
      while (uStack_144 = uVar2, (int)uStack_144 < (int)uVar28) {
        uVar2 = uStack_144 + 0x10;
        uVar7 = uVar28;
        if ((int)uVar2 <= (int)uVar28) {
          uVar7 = uVar2;
        }
        iVar22 = (int)uVar25 + uVar36;
        *(int *)(param_1 + 0x1c) = iVar22;
        uStack_98 = (uint)(uVar36 != 0);
        for (uVar30 = uVar36; (int)uVar30 < (int)uVar5; uVar30 = uVar30 + bVar10) {
          iVar19 = (int)uVar21 + uStack_144;
          *(int *)(param_1 + 0x18) = iVar19;
          uVar38 = (uint)(uStack_144 != 0);
          for (uVar44 = uStack_144; (int)uVar44 < (int)uVar7; uVar44 = bVar10 + uVar44) {
            if (*(char *)(param_3 + 3) == '\0') {
              func_0x000104c22b40(param_1,param_2,param_3,*(undefined1 *)(param_3 + 0x1a),0,
                                  &uStack_6c,uVar38,uStack_98,0);
              bVar10 = (&UNK_10dd74da0)[lVar8];
            }
            else {
              uStack_6d = 0x40;
              func_0x000104c28c8c(&uStack_74);
              func_0x000104c28d24();
              func_0x000104c28e20(uStack_74);
              uVar18 = uStack_6d;
              bVar10 = (&UNK_10dd74da0)[lVar8];
              uVar24 = (uint)bVar10;
              if (7 < bVar10) {
                uVar24 = 8;
              }
              bVar11 = (&UNK_10dd74da1)[lVar8];
              uVar23 = (uint)bVar11;
              if (7 < uVar23) {
                uVar23 = 8;
              }
              *(ulong *)(lVar42 + 0x3570) =
                   *(long *)(lVar42 + 0x3570) + (ulong)(uVar24 * uVar23 * 0x10) * 2;
              uVar23 = *(int *)(lVar20 + 0xd7c) - *(int *)(param_1 + 0x1c);
              uVar24 = (uint)bVar11;
              bVar13 = uVar23 <= uVar24;
              bVar17 = uVar24 == uVar23;
              if ((int)uVar23 <= (int)uVar24) {
                uVar24 = uVar23;
              }
              func_0x000104c289ec(uVar24);
              if (!bVar13 || bVar17) {
                    /* WARNING: Could not recover jumptable at 0x000104c22374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_10dd73142)[extraout_x9] * 4 + 0x104c22378))();
                return;
              }
              if (extraout_w8 == 0x10) {
                func_0x000104c28db4();
                *(undefined8 *)(lVar3 + (ulong)(uVar30 + iVar27)) = extraout_x8;
                *(undefined8 *)(lVar3 + (ulong)(iVar27 + 8) + (ulong)uVar30) = extraout_x8;
              }
              else {
                _memset(lVar3 + (ulong)(uVar30 + iVar27),uVar18,(long)extraout_w8);
              }
              uVar23 = *(int *)(lVar20 + 0xd78) - *(int *)(param_1 + 0x18);
              uVar24 = (uint)bVar10;
              bVar13 = uVar23 <= uVar24;
              bVar17 = uVar24 == uVar23;
              if ((int)uVar23 <= (int)uVar24) {
                uVar24 = uVar23;
              }
              func_0x000104c289ec(uVar24);
              if (!bVar13 || bVar17) {
                    /* WARNING: Could not recover jumptable at 0x000104c22454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_10dd7314a)[extraout_x9_00] * 4 + 0x104c22458))();
                return;
              }
              if (extraout_w8_00 == 0x10) {
                func_0x000104c28db4();
                func_0x000104c28c44();
                *(undefined8 *)(extraout_x9_01 + 0x20) = extraout_x8_00;
                *(undefined8 *)
                 (*(long *)(param_1 + 0x290) + (ulong)((uint)uVar33 + 8) + (ulong)uVar44 + 0x20) =
                     extraout_x8_00;
              }
              else {
                func_0x000104c28c44();
                _memset(extraout_x9_02 + 0x20,uVar18,(long)extraout_w8_01);
              }
            }
            iVar19 = *(int *)(param_1 + 0x18) + (uint)bVar10;
            *(int *)(param_1 + 0x18) = iVar19;
            uVar38 = uVar38 + 1;
          }
          uVar21 = (ulong)(iVar19 - uVar44);
          bVar10 = (&UNK_10dd74da1)[lVar8];
          iVar22 = *(int *)(param_1 + 0x1c) + (uint)bVar10;
          *(uint *)(param_1 + 0x18) = iVar19 - uVar44;
          *(int *)(param_1 + 0x1c) = iVar22;
          uStack_98 = uStack_98 + 1;
        }
        uVar25 = (ulong)(iVar22 - uVar30);
        *(uint *)(param_1 + 0x1c) = iVar22 - uVar30;
        if (uStack_14c != 0) {
          uVar7 = uVar29;
          if ((int)(uVar2 >> (ulong)uVar31) <= (int)uVar29) {
            uVar7 = uVar2 >> (ulong)uVar31;
          }
          lVar39 = 0;
          while (lVar39 != 2) {
            iVar22 = (int)uVar25 + uVar36;
            lVar4 = param_1 + 0x60 + lVar39 * 0x20;
            uVar30 = uVar36 >> (ulong)uVar41;
            while( true ) {
              *(int *)(param_1 + 0x1c) = iVar22;
              if ((int)uVar6 <= (int)uVar30) break;
              iVar22 = (int)uVar21 + uStack_144;
              uVar21 = (ulong)(uVar30 + (int)uVar35);
              uVar38 = uStack_144 >> (ulong)uVar31;
              while( true ) {
                *(int *)(param_1 + 0x18) = iVar22;
                iVar19 = uVar38 << (ulong)bVar15;
                uVar44 = (uint)bVar16;
                if ((int)uVar7 <= (int)uVar38) break;
                uStack_75 = 0x40;
                if (*(char *)(param_3 + 3) == '\0') {
                  uStack_7c = (uint)*(byte *)(param_1 + 0x2480 +
                                             (long)(int)(((uint)uVar33 |
                                                         ((uVar30 << (ulong)uVar41) + iVar27) * 0x20
                                                         ) + iVar19));
                }
                func_0x000104c28c8c(&uStack_7c);
                func_0x000104c23098();
                func_0x000104c28e20(uStack_7c);
                uVar18 = uStack_75;
                bVar10 = (&UNK_10dd74da0)[lVar1];
                bVar11 = (&UNK_10dd74da1)[lVar1];
                *(ulong *)(lVar42 + 0x3570) =
                     *(long *)(lVar42 + 0x3570) + (ulong)bVar10 * (ulong)bVar11 * 0x20;
                uVar44 = (int)((*(int *)(lVar20 + 0xd7c) + uVar44) - *(int *)(param_1 + 0x1c)) >>
                         uVar44;
                bVar13 = uVar44 <= bVar11;
                bVar17 = bVar11 == uVar44;
                uVar24 = (uint)bVar11;
                if ((int)uVar44 <= (int)(uint)bVar11) {
                  uVar24 = uVar44;
                }
                func_0x000104c289ec(uVar24);
                if (!bVar13 || bVar17) {
                    /* WARNING: Could not recover jumptable at 0x000104c226a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((ulong)(byte)(&UNK_10dd73132)[extraout_x9_03] * 4 + 0x104c226a4))();
                  return;
                }
                if (extraout_w8_02 == 0x10) {
                  func_0x000104c28dc0();
                  *(undefined8 *)(lVar4 + uVar21) = extraout_x8_01;
                  *(undefined8 *)(lVar4 + (ulong)((int)uVar35 + 8 + uVar30)) = extraout_x8_01;
                }
                else {
                  _memset(lVar4 + uVar21,uVar18,(long)extraout_w8_02);
                }
                uVar44 = (int)((*(int *)(lVar20 + 0xd78) + uVar43) - *(int *)(param_1 + 0x18)) >>
                         uVar43;
                bVar13 = uVar44 <= bVar10;
                uVar23 = (uint)bVar10;
                bVar17 = uVar23 == uVar44;
                uVar24 = uVar23;
                if ((int)uVar44 <= (int)(uint)bVar10) {
                  uVar24 = uVar44;
                }
                func_0x000104c289ec(uVar24);
                if (!bVar13 || bVar17) {
                    /* WARNING: Could not recover jumptable at 0x000104c2273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((ulong)(byte)(&UNK_10dd7313a)[extraout_x9_04] * 4 + 0x104c22740))();
                  return;
                }
                if (extraout_w8_03 == 0x10) {
                  func_0x000104c28dc0();
                  func_0x000104c289c4();
                  *(undefined8 *)(extraout_x9_05 + 0x40) = extraout_x8_02;
                  *(undefined8 *)
                   (*(long *)(param_1 + 0x290) + lVar39 * 0x20 + (ulong)((int)uVar34 + 8 + uVar38) +
                   0x40) = extraout_x8_02;
                }
                else {
                  func_0x000104c289c4();
                  _memset(extraout_x9_06 + 0x40,uVar18,(long)extraout_w8_04);
                }
                uVar38 = uVar38 + uVar23;
                iVar22 = *(int *)(param_1 + 0x18) + (uVar23 << (ulong)uVar43);
              }
              uVar38 = iVar22 - iVar19;
              uVar21 = (ulong)uVar38;
              *(uint *)(param_1 + 0x18) = uVar38;
              uVar30 = uVar30 + (byte)(&UNK_10dd74da1)[lVar1];
              iVar22 = ((uint)(byte)(&UNK_10dd74da1)[lVar1] << (ulong)uVar44) +
                       *(int *)(param_1 + 0x1c);
            }
            uVar30 = iVar22 - (uVar30 << (ulong)uVar41);
            uVar25 = (ulong)uVar30;
            *(uint *)(param_1 + 0x1c) = uVar30;
            lVar39 = lVar39 + 1;
          }
        }
      }
    }
  }
  else {
    switch(uVar32) {
    case 1:
      func_0x000104c28ce0();
      func_0x000104c28cd4();
      uVar28 = extraout_w12;
      uVar29 = extraout_w10;
      uVar31 = extraout_w11;
      break;
    case 2:
      func_0x000104c28ce0();
      func_0x000104c28cc8();
      uVar28 = extraout_w12_00;
      uVar29 = extraout_w10_00;
      uVar31 = extraout_w11_00;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      func_0x000104c28ce0();
      func_0x000104c28cb0();
      uVar28 = extraout_w12_02;
      uVar29 = extraout_w10_02;
      uVar31 = extraout_w11_02;
      break;
    case 8:
      func_0x000104c28ce0();
      func_0x000104c28a74();
      uVar28 = extraout_w12_01;
      uVar29 = extraout_w10_01;
      uVar31 = extraout_w11_01;
      break;
    default:
      if (uVar32 == 0x10) {
        func_0x000104c28ce0();
        *(undefined8 *)(extraout_x8_03 + 0x48) = 0x4040404040404040;
        *(undefined8 *)(extraout_x8_03 + 0x40) = 0x4040404040404040;
        uVar28 = extraout_w12_03;
        uVar29 = extraout_w10_03;
        uVar31 = extraout_w11_03;
      }
      else if (uVar32 == 0x20) {
        puVar12 = (undefined8 *)(param_1 + 0x40 + uVar37);
        puVar12[1] = 0x4040404040404040;
        *puVar12 = 0x4040404040404040;
        lVar20 = param_1 + 0x40 + uVar37;
        *(undefined8 *)(lVar20 + 0x18) = 0x4040404040404040;
        *(undefined8 *)(lVar20 + 0x10) = 0x4040404040404040;
      }
    }
    switch(uVar28) {
    case 1:
      func_0x000104c28a54();
      *(undefined1 *)(extraout_x8_04 + 0x20) = 0x40;
      uVar29 = extraout_w10_04;
      uVar31 = extraout_w11_04;
      break;
    case 2:
      func_0x000104c28a54();
      *(undefined2 *)(extraout_x8_05 + 0x20) = 0x4040;
      uVar29 = extraout_w10_06;
      uVar31 = extraout_w11_06;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      func_0x000104c28a54();
      *(undefined4 *)(extraout_x8_06 + 0x20) = 0x40404040;
      uVar29 = extraout_w10_08;
      uVar31 = extraout_w11_08;
      break;
    case 8:
      func_0x000104c28a54();
      func_0x000104c28b38();
      uVar29 = extraout_w10_07;
      uVar31 = extraout_w11_07;
      break;
    default:
      if (uVar28 == 0x10) {
        func_0x000104c28b38(*(long *)(param_1 + 0x290) + uVar33);
        *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x12_00 & 0xffffffff) + 0x28) =
             extraout_x9_08;
        uVar29 = extraout_w10_09;
        uVar31 = extraout_w11_09;
      }
      else if (uVar28 == 0x20) {
        func_0x000104c28b38(*(long *)(param_1 + 0x290) + uVar33);
        *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x12 & 0xffffffff) + 0x28) =
             extraout_x9_07;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x12 & 0xffffffff) + 0x30) =
             extraout_x9_07;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x12 & 0xffffffff) + 0x38) =
             extraout_x9_07;
        uVar29 = extraout_w10_05;
        uVar31 = extraout_w11_05;
      }
    }
    if (uStack_14c != 0) {
      uVar29 = uVar29 >> (ulong)uVar43;
      uVar31 = uVar31 >> (ulong)uVar40;
      uVar28 = uVar31 - 1;
      uVar14 = 6 < uVar28;
      uVar18 = uVar28 == 7;
      switch(uVar28) {
      case 0:
        func_0x000104c28c2c(uVar29);
        *(undefined1 *)(extraout_x9_09 + 0x60) = 0x40;
        *(undefined1 *)(extraout_x9_09 + 0x80) = 0x40;
        break;
      case 1:
        func_0x000104c28c2c(uVar29);
        *(undefined2 *)(extraout_x9_10 + 0x60) = 0x4040;
        *(undefined2 *)(extraout_x9_10 + 0x80) = 0x4040;
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        break;
      case 3:
        func_0x000104c28c2c(uVar29);
        *(undefined4 *)(extraout_x9_11 + 0x60) = 0x40404040;
        *(undefined4 *)(extraout_x9_11 + 0x80) = 0x40404040;
        break;
      case 7:
        func_0x000104c28c2c(uVar29);
        *(undefined8 *)(extraout_x9_12 + 0x60) = 0x4040404040404040;
        *(undefined8 *)(extraout_x9_12 + 0x80) = 0x4040404040404040;
        break;
      default:
        uVar14 = 0xf < uVar31;
        uVar18 = uVar31 == 0x10;
        if ((bool)uVar18) {
          uVar45 = 0x40;
          uVar46 = 0x40;
          uVar47 = 0x40;
          uVar48 = 0x40;
          uVar49 = 0x40;
          uVar50 = 0x40;
          uVar51 = 0x40;
          uVar52 = 0x40;
          uVar53 = 0x40;
          uVar54 = 0x40;
          uVar55 = 0x40;
          uVar56 = 0x40;
          uVar57 = 0x40;
          uVar58 = 0x40;
          uVar59 = 0x40;
          uVar60 = 0x40;
          func_0x000104c28c2c(uVar29);
          *(ulong *)(extraout_x9_13 + 0x68) =
               CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar56,
                                                  CONCAT12(uVar55,CONCAT11(uVar54,uVar53)))))));
          *(ulong *)(extraout_x9_13 + 0x60) =
               CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,
                                                  CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))))));
          *(ulong *)(extraout_x9_13 + 0x88) =
               CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar56,
                                                  CONCAT12(uVar55,CONCAT11(uVar54,uVar53)))))));
          *(ulong *)(extraout_x9_13 + 0x80) =
               CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,
                                                  CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))))));
        }
        else {
          uVar14 = 0x1f < uVar31;
          uVar18 = uVar31 == 0x20;
          if ((bool)uVar18) {
            puVar12 = (undefined8 *)(param_1 + 0x60 + uVar35);
            puVar12[1] = 0x4040404040404040;
            *puVar12 = 0x4040404040404040;
            lVar20 = (uVar35 & 0xffffffff) + 0x10;
            puVar12 = (undefined8 *)(param_1 + 0x60 + lVar20);
            puVar12[1] = 0x4040404040404040;
            *puVar12 = 0x4040404040404040;
            puVar12 = (undefined8 *)(param_1 + 0x80 + uVar35);
            puVar12[1] = 0x4040404040404040;
            *puVar12 = 0x4040404040404040;
            puVar12 = (undefined8 *)(param_1 + 0x80 + lVar20);
            puVar12[1] = 0x4040404040404040;
            *puVar12 = 0x4040404040404040;
          }
        }
      }
      func_0x000104c289ec();
      if (!(bool)uVar14 || (bool)uVar18) {
                    /* WARNING: Could not recover jumptable at 0x000104c22a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dd7312a)[extraout_x9_14] * 4 + 0x104c22a38))();
        return;
      }
      if (extraout_w8_05 == 0x10) {
        func_0x000104c28a74(*(long *)(param_1 + 0x290) + uVar34);
        func_0x000104c28ba4(*(long *)(param_1 + 0x290) + (extraout_x11_00 & 0xffffffff) + 8);
        lVar20 = extraout_x8_10 + extraout_x11_01;
        uVar26 = extraout_x9_16;
      }
      else {
        if (extraout_w8_05 != 0x20) {
          return;
        }
        func_0x000104c28a74(*(long *)(param_1 + 0x290) + uVar34);
        func_0x000104c28ba4(*(long *)(param_1 + 0x290) + (extraout_x13 & 0xffffffff) + 8);
        func_0x000104c28ba4(extraout_x8_07 + extraout_x10 + 0x10);
        func_0x000104c28ba4(extraout_x8_08 + extraout_x10_00 + 0x18);
        *(undefined8 *)(extraout_x8_09 + extraout_x13_00 + 0x60) = extraout_x9_15;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x60) = extraout_x9_15;
        lVar20 = *(long *)(param_1 + 0x290) + extraout_x12_01;
        uVar26 = extraout_x9_15;
      }
      *(undefined8 *)(lVar20 + 0x60) = uVar26;
      func_0x000104c28e68();
      *(undefined8 *)(extraout_x8_11 + 0x60) = extraout_x9_17;
    }
  }
  return;
}



/* Entry: 104c255c4; end: 104c255f3;  */

undefined4 FUN_104c255c4(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + (ulong)param_2 + 0xe0) != '\0') {
    uVar1 = 0x200;
    if ((*(byte *)(param_1 + (ulong)param_2) & 0xfd) != 9 &&
        *(byte *)(param_1 + (ulong)param_2) != 10) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 104c255f4; end: 104c27a6f;  */

ulong FUN_104c255f4(ulong param_1,uint param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int extraout_w8;
  int extraout_w8_00;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  code *extraout_x8;
  code *extraout_x8_00;
  ushort *puVar26;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  undefined1 extraout_w9;
  undefined2 extraout_w9_00;
  uint uVar27;
  int iVar28;
  undefined4 extraout_w9_01;
  code *extraout_x9;
  code *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 extraout_x9_04;
  undefined8 extraout_x9_05;
  undefined8 extraout_x9_06;
  undefined8 extraout_x9_07;
  undefined8 uVar29;
  undefined8 extraout_x9_08;
  uint uVar30;
  uint extraout_w10;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  uint extraout_w11;
  uint uVar34;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  ulong uVar35;
  long extraout_x11;
  ulong extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  uint extraout_w12;
  uint uVar36;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  uint extraout_w12_03;
  uint extraout_w12_04;
  uint extraout_w12_05;
  uint extraout_w12_06;
  uint extraout_w12_07;
  uint extraout_w12_08;
  uint extraout_w12_09;
  uint extraout_w12_10;
  uint extraout_w12_11;
  uint extraout_w12_12;
  uint extraout_w12_13;
  uint extraout_w12_14;
  uint uVar37;
  long extraout_x12;
  long extraout_x12_00;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  uint extraout_w13_03;
  uint extraout_w13_04;
  uint extraout_w13_05;
  uint extraout_w13_06;
  uint extraout_w13_07;
  uint extraout_w13_08;
  uint extraout_w13_09;
  uint uVar38;
  long lVar39;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  ulong extraout_x13_03;
  long extraout_x13_04;
  uint uVar40;
  uint extraout_w14;
  uint uVar41;
  ulong uVar42;
  ulong extraout_x14;
  ulong extraout_x14_00;
  uint uVar43;
  long lVar44;
  ulong uVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  ulong uVar49;
  long *plVar50;
  uint uVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
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
  uint uStack_188;
  uint uStack_174;
  long lStack_f8;
  long lStack_a8;
  byte bStack_71;
  ushort uStack_70;
  undefined2 uStack_6e;
  uint auStack_6c [3];
  
  lVar39 = *(long *)(param_1 + 8);
  uVar30 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1c);
  lVar19 = (long)(int)uVar30;
  uVar31 = (ulong)uVar30 & 0x1f;
  lVar20 = (long)(int)uVar4;
  uVar32 = (ulong)uVar4 & 0x1f;
  iVar5 = *(int *)(lVar39 + 0x878);
  bVar14 = iVar5 == 1;
  uVar57 = (ulong)bVar14;
  bVar15 = iVar5 != 3;
  uVar42 = (ulong)bVar15;
  pbVar1 = &UNK_10dd74d48 + (ulong)param_2 * 4;
  bVar6 = *pbVar1;
  uVar52 = (ulong)bVar6;
  bVar7 = (&UNK_10dd74d49)[(ulong)param_2 * 4];
  uVar49 = (ulong)bVar7;
  uVar11 = *(int *)(lVar39 + 0xd78) - uVar30;
  uVar51 = (uint)bVar6;
  uVar2 = uVar51;
  if ((int)uVar11 <= (int)(uint)bVar6) {
    uVar2 = uVar11;
  }
  uVar47 = *(int *)(lVar39 + 0xd7c) - uVar4;
  uVar27 = (uint)bVar7;
  uVar11 = uVar27;
  if ((int)uVar47 <= (int)(uint)bVar7) {
    uVar11 = uVar47;
  }
  uVar47 = (uint)bVar7;
  if ((iVar5 == 0) || ((uVar51 < bVar15 || (uint)bVar6 == (uint)bVar15) && (uVar30 & 1) == 0)) {
    uStack_188 = 0;
  }
  else if (uVar27 < bVar14 || uVar47 == bVar14) {
    uStack_188 = uVar4 & 1;
  }
  else {
    uStack_188 = 1;
  }
  lVar21 = *(long *)(param_1 + 0x10);
  lVar22 = *(long *)(lVar39 + 0xcd0);
  uVar23 = uVar31 >> uVar42;
  uVar24 = uVar32 >> uVar57;
  iVar46 = 0;
  if (iVar5 != 0) {
    iVar46 = 3 - iVar5;
  }
  uVar56 = (uint)bVar14;
  uVar38 = uVar47 + uVar56 >> (ulong)uVar56;
  uVar34 = (uint)bVar15;
  uVar37 = bVar6 + uVar34 >> (ulong)uVar34;
  lVar18 = *(long *)(lVar39 + 0x860);
  lVar44 = *(long *)(lVar39 + 0x848) + (lVar19 + lVar18 * lVar20) * 4;
  lVar25 = (*(long *)(lVar39 + 0x868) * (long)((int)uVar4 >> uVar56) + (long)((int)uVar30 >> uVar34)
           ) * 4;
  if ((*(byte *)(*(long *)(lVar39 + 0x18) + 0xe8) & 1) == 0) {
    lVar17 = 0;
    func_0x000104c26eb4(param_1,lVar44,0,lVar18,uVar52,uVar49,lVar19,lVar20,0);
    if (uStack_188 != 0) {
      for (lVar19 = 0; lVar19 != 2; lVar19 = lVar19 + 1) {
        func_0x000104c28b78(param_1,*(long *)(lVar39 + 0x850 + lVar19 * 8) + lVar25);
      }
    }
  }
  else {
    lStack_f8 = (long)iVar46;
    uVar30 = (uint)bVar7 << 2;
    if (*(char *)(param_3 + 0x14) == '\0') {
      cVar10 = *(char *)(param_3 + 0x18);
      lVar33 = lVar39 + 0x20 + (long)(int)cVar10 * 0x128;
      bVar8 = *(byte *)(param_3 + 0x1b);
      if (uVar27 <= uVar51) {
        uVar51 = uVar47;
      }
      if (uVar51 < 2) {
LAB_104c25a28:
        lVar17 = 0;
        func_0x000104c26eb4(param_1,lVar44,0,lVar18,uVar52,uVar49,lVar19,lVar20,0);
        if (*(char *)(param_3 + 0x16) == '\x01') {
          lVar17 = *(long *)(lVar39 + 0x860);
          func_0x000104c28cec(param_1,lVar44,lVar17,pbVar1,0);
        }
      }
      else {
        if ((*(char *)(param_3 + 0x15) == '\x02') && (*(char *)(lVar39 + cVar10 + 0xbf0) != '\0')) {
          lVar19 = param_1 + 0x3f1c0;
          if (*(char *)(param_3 + 0x16) != '\x02') {
            lVar19 = *(long *)(lVar39 + 0x18) + (long)(int)cVar10 * 0x24 + 0x380;
          }
        }
        else {
          if ((*(char *)(param_3 + 0x16) != '\x02') || (*(uint *)(param_1 + 0x3f1c0) < 2))
          goto LAB_104c25a28;
          lVar19 = param_1 + 0x3f1c0;
        }
        lVar17 = 0;
        func_0x000104c27380(param_1,lVar44,0,lVar18,pbVar1,0,lVar33,lVar19);
      }
      if (*(char *)(param_3 + 0x1c) != '\0') {
        auStack_6c[0] = 0;
        uVar45 = (ulong)*(uint *)(param_1 + 0x18);
        func_0x000104c28d18(uVar45,*(int *)(lVar21 + 0x3528) < (int)*(uint *)(param_1 + 0x18),
                            *(int *)(param_1 + 0x1c),
                            *(int *)(lVar21 + 0x3530) < *(int *)(param_1 + 0x1c),
                            *(undefined4 *)(lVar21 + 0x352c),*(undefined4 *)(lVar21 + 0x3534));
        lVar19 = uVar52 << 2;
        func_0x000104c28b60(*(undefined8 *)(lVar22 + (uVar45 & 0xffffffff) * 8 + 0x40),
                            param_1 + 0x4480,lVar19,param_1 + 0x54a0,lVar19,(ulong)bVar7 << 2);
        if (*(char *)(param_3 + 0x1c) == '\x01') {
          puVar26 = (ushort *)
                    ((ulong)(param_2 - 7) * 0x48 + (ulong)*(byte *)(param_3 + 0x12) * 2 +
                    0x113848740);
        }
        else {
          puVar26 = (ushort *)
                    ((ulong)(param_2 - 7) * 0x48 + 0x113848700 +
                    (ulong)*(byte *)(param_3 + 0x10) * 2);
        }
        lVar17 = param_1 + 0x4480;
        (**(code **)(lVar22 + 0x270))
                  (lVar44,*(undefined8 *)(lVar39 + 0x860),lVar17,lVar19,(ulong)bVar7 << 2,
                   (ulong)*puVar26 * 8 + 0x113848700);
      }
      if (uStack_188 != 0) {
        uVar51 = (uint)bVar7;
        if ((bool)bVar6 == bVar15 || uVar51 == uVar56) {
          lVar19 = param_1 + ((ulong)*(uint *)(param_1 + 0x1c) & 0x1f) * 8;
          if (bVar6 == 1) {
            bVar16 = *(char *)(*(long *)(lVar19 + 0x2c8) + (long)*(int *)(param_1 + 0x18) * 0xc + -4
                              ) != '\0';
          }
          else {
            bVar16 = true;
          }
          if (uVar51 == bVar14) {
            lVar19 = *(long *)(lVar19 + 0x2c0);
            if (*(char *)(lVar19 + (long)*(int *)(param_1 + 0x18) * 0xc + 8) < '\x01') {
              bVar16 = false;
            }
            if ((bVar6 == 1) &&
               (*(char *)(lVar19 + (long)*(int *)(param_1 + 0x18) * 0xc + -4) == '\0'))
            goto LAB_104c25f10;
          }
          if (bVar16) {
            if (bVar6 == 1 && uVar51 == bVar14) {
              for (lVar19 = 0; lVar19 != 2; lVar19 = lVar19 + 1) {
                lVar20 = lVar39;
                if (*(int *)(param_1 + 0x3f204) == 2) {
                  func_0x000104c28e74(*(undefined8 *)(lVar39 + 0x10f8));
                  lVar20 = extraout_x11_02;
                }
                lVar17 = 0;
                func_0x000104c26eb4(param_1,*(long *)(lVar39 + 0x850 + lVar19 * 8) + lVar25,0,
                                    *(undefined8 *)(lVar20 + 0x868),1,uVar57);
              }
              lVar20 = *(long *)(lVar39 + 0x868) << 1;
              lVar19 = 2;
            }
            else {
              lVar20 = 0;
              lVar19 = 0;
            }
            if (bVar6 == 1) {
              lVar19 = 2;
              for (lVar21 = 0; lVar21 != 2; lVar21 = lVar21 + 1) {
                lVar22 = lVar39;
                if (*(int *)(param_1 + 0x3f204) == 2) {
                  func_0x000104c28e74(*(undefined8 *)(lVar39 + 0x10f8));
                  lVar22 = extraout_x12_00;
                }
                lVar17 = 0;
                func_0x000104c26eb4(param_1,*(long *)(lVar39 + 0x850 + lVar21 * 8) + lVar25 + lVar20
                                    ,0,*(undefined8 *)(lVar22 + 0x868),1,uVar49);
              }
            }
            if ((bool)bVar7 == bVar14) {
              lVar20 = 0;
              while (lVar20 != 2) {
                lVar21 = lVar20 * 8;
                lVar20 = lVar20 + 1;
                lVar17 = 0;
                func_0x000104c26eb4(param_1,*(long *)(lVar39 + 0x850 + lVar21) + lVar25 + lVar19,0,
                                    *(undefined8 *)(lVar39 + 0x868),uVar52,uVar57,
                                    (long)*(int *)(param_1 + 0x18),
                                    (long)*(int *)(param_1 + 0x1c) + -1,(int)lVar20);
              }
              lVar20 = *(long *)(lVar39 + 0x868) << 1;
            }
            lVar21 = 0;
            while (lVar21 != 2) {
              lVar17 = 0;
              func_0x000104c26eb4(param_1,*(long *)(lVar39 + 0x850 + lVar21 * 8) +
                                          lVar25 + lVar19 + lVar20,0,*(undefined8 *)(lVar39 + 0x868)
                                  ,uVar52,uVar49,*(undefined4 *)(param_1 + 0x18),
                                  *(undefined4 *)(param_1 + 0x1c),(int)(lVar21 + 1));
              lVar21 = lVar21 + 1;
            }
            goto LAB_104c2627c;
          }
        }
LAB_104c25f10:
        uVar51 = uVar37;
        if (uVar38 <= uVar37) {
          uVar51 = uVar38;
        }
        if ((uVar51 < 2) ||
           (((*(char *)(param_3 + 0x15) != '\x02' ||
             (*(char *)(lVar39 + *(char *)(param_3 + 0x18) + 0xbf0) == '\0')) &&
            ((*(char *)(param_3 + 0x16) != '\x02' || (*(uint *)(param_1 + 0x3f1c0) < 2)))))) {
          lVar19 = 0;
          while (lVar20 = lVar19, lVar20 != 2) {
            lVar19 = lVar20 + 1;
            func_0x000104c28b78(param_1,*(long *)(lVar39 + 0x850 + lVar20 * 8) + lVar25);
            if (*(char *)(param_3 + 0x16) == '\x01') {
              lVar17 = *(long *)(lVar39 + 0x868);
              func_0x000104c28cec(param_1,*(long *)(lVar39 + 0x850 + lVar20 * 8) + lVar25,lVar17,
                                  pbVar1,lVar19);
            }
          }
        }
        else {
          lVar19 = 0;
          while (lVar19 != 2) {
            lVar20 = param_1 + 0x3f1c0;
            if (*(char *)(param_3 + 0x16) != '\x02') {
              lVar20 = *(long *)(lVar39 + 0x18) + (long)(int)*(char *)(param_3 + 0x18) * 0x24 +
                       0x380;
            }
            lVar18 = lVar19 * 8;
            lVar19 = lVar19 + 1;
            lVar17 = 0;
            func_0x000104c27380(param_1,*(long *)(lVar39 + 0x850 + lVar18) + lVar25,0,
                                *(undefined8 *)(lVar39 + 0x868),pbVar1,lVar19,lVar33,lVar20);
          }
        }
        if (*(char *)(param_3 + 0x1c) != '\0') {
          if (*(char *)(param_3 + 0x1c) == '\x01') {
            puVar26 = (ushort *)
                      ((long)iVar46 * 0x318 + (ulong)(param_2 - 7) * 0x48 +
                       (ulong)*(byte *)(param_3 + 0x12) * 2 + 0x113848740);
          }
          else {
            puVar26 = (ushort *)
                      ((long)iVar46 * 0x318 + 0x113848700 + (ulong)(param_2 - 7) * 0x48 +
                      (ulong)*(byte *)(param_3 + 0x10) * 2);
          }
          uVar9 = *puVar26;
          iVar46 = uVar37 << 2;
          lVar19 = 2;
          plVar50 = (long *)(lVar39 + 0x850);
          do {
            auStack_6c[0] = 0;
            lVar20 = *plVar50;
            uVar51 = *(int *)(param_1 + 0x18) >> bVar15;
            uVar52 = (ulong)uVar51;
            iVar48 = *(int *)(param_1 + 0x1c) >> bVar14;
            func_0x000104c28d18(uVar52,*(int *)(lVar21 + 0x3528) >> bVar15 < (int)uVar51,iVar48,
                                *(int *)(lVar21 + 0x3530) >> bVar14 < iVar48,
                                *(int *)(lVar21 + 0x352c) >> bVar15,
                                *(int *)(lVar21 + 0x3534) >> bVar14);
            func_0x000104c28b60(*(undefined8 *)(lVar22 + 0x40 + (uVar52 & 0xffffffff) * 8),
                                param_1 + 0x4480,iVar46,param_1 + 0x54a0,iVar46,uVar38 << 2);
            lVar17 = param_1 + 0x4480;
            (**(code **)(lVar22 + 0x270))
                      (lVar20 + lVar25,*(undefined8 *)(lVar39 + 0x868),lVar17,iVar46,uVar38 << 2,
                       (ulong)uVar9 * 8 + 0x113848700);
            lVar19 = lVar19 + -1;
            plVar50 = plVar50 + 1;
          } while (lVar19 != 0);
        }
      }
LAB_104c2627c:
      *(uint *)(param_1 + 0x3f200) = (uint)bVar8;
      goto LAB_104c26288;
    }
    lVar21 = param_1 + 0x2040;
    lVar18 = uVar52 << 2;
    lVar17 = param_3;
    lVar20 = lVar21;
    for (lVar19 = 0; lVar19 != 2; lVar19 = lVar19 + 1) {
      cVar10 = *(char *)(param_3 + 0x18 + lVar19);
      lVar17 = lVar20;
      if ((*(char *)(param_3 + 0x15) == '\x06') &&
         (*(char *)(lVar39 + 0xbf0 + (long)cVar10) != '\0')) {
        func_0x000104c27380(param_1,0,lVar20,lVar18,pbVar1,0,
                            lVar39 + 0x20 + (long)(int)cVar10 * 0x128,
                            *(long *)(lVar39 + 0x18) + (long)(int)cVar10 * 0x24 + 0x380);
      }
      else {
        func_0x000104c28da0(*(undefined4 *)(param_1 + 0x18));
        func_0x000104c28b24(param_1,0);
      }
      lVar20 = lVar20 + 0x8000;
    }
    switch(*(undefined1 *)(param_3 + 0x14)) {
    case 1:
      func_0x000104c28b44(*(undefined8 *)(lVar22 + 0x248));
      (*extraout_x8)();
      break;
    case 2:
      func_0x000104c28b44(*(undefined8 *)(lVar22 + 0x240));
      (*extraout_x8_00)();
      break;
    case 3:
      lVar17 = lVar21 + (ulong)*(byte *)(param_3 + 0x11) * 0x8000;
      (**(code **)(lVar22 + lStack_f8 * 8 + 600))
                (lVar44,*(undefined8 *)(lVar39 + 0x860),lVar17,
                 lVar21 + (ulong)(*(byte *)(param_3 + 0x11) == 0) * 0x8000,lVar18,uVar30);
      lStack_f8 = param_1 + 0x12040;
      break;
    case 4:
      lVar17 = lVar21 + (ulong)*(byte *)(param_3 + 0x11) * 0x8000;
      (**(code **)(lVar22 + 0x250))
                (lVar44,*(undefined8 *)(lVar39 + 0x860),lVar17,
                 lVar21 + (ulong)((ulong)*(byte *)(param_3 + 0x11) == 0) * 0x8000,lVar18,uVar30,
                 (ulong)*(ushort *)
                         ((ulong)(param_2 - 7) * 0x48 + 0x113848700 +
                         (ulong)*(byte *)(param_3 + 0x10) * 2) * 8 + 0x113848700);
      if (uStack_188 == 0) goto LAB_104c26288;
      lStack_f8 = (ulong)*(ushort *)
                          ((long)iVar46 * 0x318 + 0x113848700 + (ulong)(param_2 - 7) * 0x48 +
                           (ulong)*(byte *)(param_3 + 0x11) * 0x20 +
                          (ulong)*(byte *)(param_3 + 0x10) * 2) * 8 + 0x113848700;
      goto code_r0x000104c25bd0;
    }
    if (uStack_188 != 0) {
code_r0x000104c25bd0:
      lVar19 = 0;
      uVar51 = uVar37;
      if ((int)uVar38 <= (int)uVar37) {
        uVar51 = uVar38;
      }
      uVar4 = (uint)lVar18 >> (ulong)bVar15;
      while (lVar19 != 2) {
        lVar19 = lVar19 + 1;
        lVar18 = lVar21;
        for (lVar20 = 0; lVar20 != 2; lVar20 = lVar20 + 1) {
          cVar10 = *(char *)(param_3 + 0x18 + lVar20);
          lVar17 = lVar18;
          if ((*(char *)(param_3 + 0x15) == '\x06' && 1 < uVar51) &&
             (*(char *)(lVar39 + 0xbf0 + (long)cVar10) != '\0')) {
            func_0x000104c27380(param_1,0,lVar18,uVar4,pbVar1,lVar19,
                                lVar39 + 0x20 + (long)(int)cVar10 * 0x128,
                                *(long *)(lVar39 + 0x18) + (long)(int)cVar10 * 0x24 + 0x380);
          }
          else {
            func_0x000104c28da0(*(undefined4 *)(param_1 + 0x18));
            func_0x000104c28b24();
          }
          lVar18 = lVar18 + 0x8000;
        }
        bVar8 = *(byte *)(param_3 + 0x14);
        if (bVar8 - 3 < 2) {
          lVar17 = lVar21 + (ulong)*(byte *)(param_3 + 0x11) * 0x8000;
          (**(code **)(lVar22 + 0x250))
                    (*(long *)(lVar39 + 0x848 + lVar19 * 8) + lVar25,*(undefined8 *)(lVar39 + 0x868)
                     ,lVar17,lVar21 + (ulong)((ulong)*(byte *)(param_3 + 0x11) == 0) * 0x8000,uVar4,
                     uVar30 >> (ulong)bVar14,lStack_f8);
        }
        else if (bVar8 == 1) {
          func_0x000104c28ad0();
          (*extraout_x9_00)();
        }
        else if (bVar8 == 2) {
          func_0x000104c28ad0();
          (*extraout_x9)();
        }
      }
    }
  }
LAB_104c26288:
  uVar51 = (uint)bVar6;
  if (*(char *)(param_3 + 6) == '\0') {
    uVar30 = (int)(uVar2 + bVar15) >> (uint)bVar15;
    uVar4 = (int)(uVar11 + bVar14) >> (uint)bVar14;
    lVar19 = (ulong)*(byte *)(param_3 + 7) * 8;
    lVar20 = (ulong)*(byte *)(param_3 + 0x1a) * 8;
    uStack_70 = (ushort)*(byte *)(param_3 + 0x1d);
    uStack_6e = *(undefined2 *)(param_3 + 0x1e);
    uVar45 = 0;
    lVar21 = lVar39;
    uVar52 = uVar42;
    uVar57 = param_1;
    do {
      uVar35 = uVar45;
      if (uVar49 <= uVar35) {
        return 0;
      }
      uStack_174 = 0;
      uVar27 = (uint)(uVar35 + 0x10);
      uVar47 = uVar11;
      if ((int)uVar27 <= (int)uVar11) {
        uVar47 = uVar27;
      }
      uVar56 = (uint)bVar14;
      uVar34 = (uint)uVar35;
      uVar38 = uStack_174;
      uVar37 = uVar4;
      if ((int)(uVar27 >> (ulong)uVar56) <= (int)uVar4) {
        uVar37 = uVar27 >> (ulong)uVar56;
      }
      while (uStack_174 = uVar38, uVar45 = uVar35 + 0x10, uStack_174 < uVar51) {
        lVar22 = *(long *)(lVar21 + 0x860);
        lVar44 = lVar44 + lVar22 * uVar35 * 4;
        iVar46 = *(int *)(uVar57 + 0x1c) + uVar34;
        *(int *)(uVar57 + 0x1c) = iVar46;
        uVar38 = uStack_174 + 0x10;
        uVar45 = uVar35;
        uVar36 = (uint)(uVar35 != 0);
        uVar27 = uVar2;
        if ((int)uVar38 <= (int)uVar2) {
          uVar27 = uVar38;
        }
        while (iVar48 = (int)uVar45, iVar48 < (int)uVar47) {
          iVar28 = *(int *)(uVar57 + 0x18) + uStack_174;
          *(int *)(uVar57 + 0x18) = iVar28;
          uVar40 = (uint)(uStack_174 != 0);
          for (uVar53 = uStack_174; (int)uVar53 < (int)uVar27; uVar53 = uVar53 + bVar6) {
            lVar17 = param_3;
            func_0x000104c22b40(uVar57,param_2,param_3,*(undefined1 *)(param_3 + 0x1a),0,&uStack_70,
                                uVar40,uVar36,lVar44 + (ulong)(uVar53 << 2));
            bVar6 = (&UNK_10dd74da0)[lVar20];
            iVar28 = *(int *)(uVar57 + 0x18) + (uint)bVar6;
            *(int *)(uVar57 + 0x18) = iVar28;
            uVar40 = uVar40 + 1;
            lVar21 = lVar39;
          }
          lVar22 = *(long *)(lVar21 + 0x860);
          bVar6 = (&UNK_10dd74da1)[lVar20];
          lVar44 = lVar44 + lVar22 * (ulong)bVar6 * 4;
          iVar46 = *(int *)(uVar57 + 0x1c) + (uint)bVar6;
          *(uint *)(uVar57 + 0x18) = iVar28 - uVar53;
          *(int *)(uVar57 + 0x1c) = iVar46;
          uVar52 = uVar42;
          uVar36 = uVar36 + 1;
          uVar45 = (ulong)(iVar48 + (uint)bVar6);
        }
        lVar44 = lVar44 + lVar22 * (uVar45 & 0xffffffff) * -4;
        iVar46 = iVar46 - iVar48;
        *(int *)(uVar57 + 0x1c) = iVar46;
        if (uStack_188 != 0) {
          lVar22 = 0;
          uVar40 = (uint)uVar52;
          uVar36 = uVar38 >> (ulong)(uVar40 & 0x1f);
          uVar27 = uVar30;
          if ((int)uVar36 <= (int)uVar30) {
            uVar27 = uVar36;
          }
          while (lVar22 != 2) {
            lVar18 = lVar22 + 1;
            lStack_a8 = *(long *)(lVar39 + 0x848 + lVar18 * 8) + lVar25 +
                        ((long)(*(long *)(lVar21 + 0x868) * uVar35 * 4) >> (ulong)(iVar5 == 1));
            iVar46 = iVar46 + uVar34;
            *(int *)(uVar57 + 0x1c) = iVar46;
            lVar33 = param_1 + 0x60 + lVar22 * 0x20;
            for (uVar36 = uVar34 >> (ulong)uVar56; (int)uVar36 < (int)uVar37;
                uVar36 = uVar36 + bVar6) {
              iVar48 = *(int *)(uVar57 + 0x18) + uStack_174;
              *(int *)(uVar57 + 0x18) = iVar48;
              uVar45 = (ulong)(uVar36 + (int)uVar24);
              uVar53 = uStack_174 >> (ulong)(uVar40 & 0x1f);
              while( true ) {
                iVar28 = uVar53 << (ulong)((uint)uVar52 & 0x1f);
                uVar59 = uVar27 <= uVar53;
                uVar58 = uVar53 == uVar27;
                if ((int)uVar27 <= (int)uVar53) break;
                if (*(uint *)(param_1 + 0x3f204) == 0) {
                  auStack_6c[0] =
                       (uint)*(byte *)(param_1 + 0x2480 +
                                      (long)(int)(((uint)uVar31 |
                                                  ((uVar36 << (ulong)uVar56) + (int)uVar32) * 0x20)
                                                 + iVar28));
                  uVar54 = (ulong)(uVar53 + (int)uVar23);
                  func_0x000104c23098(uVar57,*(long *)(uVar57 + 0x290) + lVar22 * 0x20 + uVar54 +
                                             0x40,lVar33 + uVar45,*(undefined1 *)(param_3 + 7),
                                      param_2,param_3,0,lVar18,param_1 + 0x400,auStack_6c,&bStack_71
                                     );
                  uVar52 = uVar57;
                  func_0x000104c28c14((&UNK_10dd74da1)[lVar19]);
                  uVar55 = (ulong)bStack_71;
                  func_0x000104c289ec();
                  if (!(bool)uVar59 || (bool)uVar58) {
                    /* WARNING: Could not recover jumptable at 0x000104c266f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)(byte)(&UNK_10dd73202)[extraout_x9_01] * 4 + 0x104c266f8))();
                    return uVar52;
                  }
                  if (extraout_w8 == 0x10) {
                    func_0x000104c28dcc();
                    *(undefined8 *)(lVar33 + uVar45) = extraout_x8_03;
                    *(undefined8 *)(lVar33 + (ulong)((int)uVar24 + 8 + uVar36)) = extraout_x8_03;
                    lVar21 = extraout_x13_01;
                    uVar41 = extraout_w14;
                  }
                  else {
                    uVar52 = lVar33 + uVar45;
                    _memset(uVar52,uVar55,(long)extraout_w8);
                    uVar41 = (uint)bVar15;
                    lVar21 = lVar39;
                  }
                  bVar6 = (&UNK_10dd74da0)[lVar19];
                  uVar41 = (int)((*(int *)(lVar21 + 0xd78) + uVar41) - *(int *)(param_1 + 0x18)) >>
                           (uVar41 & 0x1f);
                  uVar43 = (uint)bVar6;
                  bVar13 = uVar41 <= uVar43;
                  bVar16 = bVar6 == uVar41;
                  uVar3 = (uint)bVar6;
                  if ((int)uVar41 <= (int)uVar43) {
                    uVar3 = uVar41;
                  }
                  func_0x000104c289ec(uVar3);
                  if (!bVar13 || bVar16) {
                    /* WARNING: Could not recover jumptable at 0x000104c2679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)(byte)(&UNK_10dd7320a)[extraout_x9_02] * 4 + 0x104c267a0))();
                    return uVar52;
                  }
                  if (extraout_w8_00 == 0x10) {
                    func_0x000104c28dcc();
                    func_0x000104c288f8();
                    *(undefined8 *)(extraout_x9_03 + 0x40) = extraout_x8_04;
                    *(undefined8 *)
                     (*(long *)(uVar55 + 0x290) + lVar22 * 0x20 + (ulong)((int)uVar23 + 8 + uVar53)
                     + 0x40) = extraout_x8_04;
                    lVar21 = extraout_x13_02;
                    uVar52 = extraout_x14_00;
                  }
                  else {
                    _memset(*(long *)(param_1 + 0x290) + lVar22 * 0x20 + uVar54 + 0x40,uVar55,
                            (long)extraout_w8_00);
                    lVar21 = lVar39;
                    uVar52 = uVar42;
                    uVar55 = param_1;
                  }
                  iVar46 = (int)uVar57;
                  lVar17 = param_1 + 0x400;
                  uVar57 = uVar55;
                }
                else {
                  func_0x000104c289ac(*(uint *)(param_1 + 0x3f204) & 1);
                  bVar6 = (&UNK_10dd74da0)[lVar19];
                  uVar43 = (uint)bVar6;
                  *(ulong *)(extraout_x8_01 + 0x10) =
                       lVar17 + (ulong)(byte)(&UNK_10dd74da1)[lVar19] * (ulong)bVar6 * 0x20;
                  iVar46 = (int)extraout_w10 >> 5;
                  auStack_6c[0] = extraout_w10 & 0x1f;
                  lVar21 = extraout_x13;
                  uVar52 = extraout_x14;
                }
                if (-1 < iVar46) {
                  uVar43 = (uint)bVar6;
                  func_0x000104c28bb0(*(undefined1 *)(param_3 + 7));
                  (*extraout_x8_02)(lStack_a8 + (ulong)(uVar53 << 2),
                                    *(undefined8 *)(extraout_x13_00 + 0x868));
                  lVar21 = lVar39;
                  uVar52 = uVar42;
                }
                iVar48 = *(int *)(uVar57 + 0x18) + (uVar43 << (ulong)((uint)uVar52 & 0x1f));
                *(int *)(uVar57 + 0x18) = iVar48;
                uVar53 = uVar53 + uVar43;
              }
              bVar6 = (&UNK_10dd74da1)[lVar19];
              lStack_a8 = lStack_a8 + *(long *)(lVar21 + 0x868) * (ulong)bVar6 * 4;
              iVar46 = *(int *)(uVar57 + 0x1c) + ((uint)bVar6 << (ulong)bVar14);
              *(int *)(uVar57 + 0x18) = iVar48 - iVar28;
              *(int *)(uVar57 + 0x1c) = iVar46;
            }
            iVar46 = iVar46 - (uVar36 << (ulong)uVar56);
            *(int *)(uVar57 + 0x1c) = iVar46;
            lVar22 = lVar18;
          }
        }
      }
    } while( true );
  }
  switch(bVar7) {
  case 1:
    func_0x000104c28c68();
    func_0x000104c28cd4();
    uVar51 = extraout_w11;
    uVar38 = extraout_w13;
    uVar37 = extraout_w12;
    break;
  case 2:
    func_0x000104c28c68();
    func_0x000104c28cc8();
    uVar51 = extraout_w11_00;
    uVar38 = extraout_w13_00;
    uVar37 = extraout_w12_00;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    func_0x000104c28c68();
    func_0x000104c28cb0();
    uVar51 = extraout_w11_02;
    uVar38 = extraout_w13_02;
    uVar37 = extraout_w12_02;
    break;
  case 8:
    func_0x000104c28c68();
    func_0x000104c28a74();
    uVar51 = extraout_w11_01;
    uVar38 = extraout_w13_01;
    uVar37 = extraout_w12_01;
    break;
  default:
    if (bVar7 == 0x10) {
      func_0x000104c28c68();
      *(undefined8 *)(extraout_x8_05 + 0x48) = 0x4040404040404040;
      *(undefined8 *)(extraout_x8_05 + 0x40) = 0x4040404040404040;
      uVar51 = extraout_w11_03;
      uVar38 = extraout_w13_03;
      uVar37 = extraout_w12_03;
    }
    else if (bVar7 == 0x20) {
      puVar12 = (undefined8 *)(param_1 + 0x40 + uVar32);
      puVar12[1] = 0x4040404040404040;
      *puVar12 = 0x4040404040404040;
      lVar19 = param_1 + 0x40 + uVar32;
      *(undefined8 *)(lVar19 + 0x18) = 0x4040404040404040;
      *(undefined8 *)(lVar19 + 0x10) = 0x4040404040404040;
    }
  }
  switch(uVar51) {
  case 1:
    func_0x000104c28a14();
    *(undefined1 *)(extraout_x8_06 + 0x20) = 0x40;
    uVar38 = extraout_w13_04;
    uVar37 = extraout_w12_04;
    break;
  case 2:
    func_0x000104c28a14();
    *(undefined2 *)(extraout_x8_07 + 0x20) = 0x4040;
    uVar38 = extraout_w13_06;
    uVar37 = extraout_w12_06;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    func_0x000104c28a14();
    *(undefined4 *)(extraout_x8_08 + 0x20) = 0x40404040;
    uVar38 = extraout_w13_08;
    uVar37 = extraout_w12_08;
    break;
  case 8:
    func_0x000104c28a14();
    func_0x000104c28b38();
    uVar38 = extraout_w13_07;
    uVar37 = extraout_w12_07;
    break;
  default:
    if (uVar51 == 0x10) {
      func_0x000104c28b38(*(long *)(param_1 + 0x290) + uVar31);
      *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10_00 & 0xffffffff) + 0x28) =
           extraout_x9_05;
      uVar38 = extraout_w13_09;
      uVar37 = extraout_w12_09;
    }
    else if (uVar51 == 0x20) {
      func_0x000104c28b38(*(long *)(param_1 + 0x290) + uVar31);
      *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10 & 0xffffffff) + 0x28) =
           extraout_x9_04;
      *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10 & 0xffffffff) + 0x30) =
           extraout_x9_04;
      *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10 & 0xffffffff) + 0x38) =
           extraout_x9_04;
      uVar38 = extraout_w13_05;
      uVar37 = extraout_w12_05;
    }
  }
  if (uStack_188 == 0) {
    return 0;
  }
  switch(uVar38) {
  case 1:
    func_0x000104c28c38();
    *(undefined1 *)(extraout_x8_09 + 0x60) = 0x40;
    *(undefined1 *)(extraout_x8_09 + 0x80) = 0x40;
    uVar37 = extraout_w12_10;
    break;
  case 2:
    func_0x000104c28c38();
    *(undefined2 *)(extraout_x8_10 + 0x60) = 0x4040;
    *(undefined2 *)(extraout_x8_10 + 0x80) = 0x4040;
    uVar37 = extraout_w12_11;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    func_0x000104c28c38();
    *(undefined4 *)(extraout_x8_11 + 0x60) = 0x40404040;
    *(undefined4 *)(extraout_x8_11 + 0x80) = 0x40404040;
    uVar37 = extraout_w12_12;
    break;
  case 8:
    func_0x000104c28c38();
    *(undefined8 *)(extraout_x8_12 + 0x60) = 0x4040404040404040;
    *(undefined8 *)(extraout_x8_12 + 0x80) = 0x4040404040404040;
    uVar37 = extraout_w12_13;
    break;
  default:
    if (uVar38 == 0x10) {
      uVar58 = 0x40;
      uVar59 = 0x40;
      uVar60 = 0x40;
      uVar61 = 0x40;
      uVar62 = 0x40;
      uVar63 = 0x40;
      uVar64 = 0x40;
      uVar65 = 0x40;
      uVar66 = 0x40;
      uVar67 = 0x40;
      uVar68 = 0x40;
      uVar69 = 0x40;
      uVar70 = 0x40;
      uVar71 = 0x40;
      uVar72 = 0x40;
      uVar73 = 0x40;
      func_0x000104c28c38();
      *(ulong *)(extraout_x8_13 + 0x68) =
           CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,CONCAT13(uVar69,CONCAT12(
                                                  uVar68,CONCAT11(uVar67,uVar66)))))));
      *(ulong *)(extraout_x8_13 + 0x60) =
           CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,CONCAT13(uVar61,CONCAT12(
                                                  uVar60,CONCAT11(uVar59,uVar58)))))));
      *(ulong *)(extraout_x8_13 + 0x88) =
           CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,CONCAT13(uVar69,CONCAT12(
                                                  uVar68,CONCAT11(uVar67,uVar66)))))));
      *(ulong *)(extraout_x8_13 + 0x80) =
           CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,CONCAT13(uVar61,CONCAT12(
                                                  uVar60,CONCAT11(uVar59,uVar58)))))));
      uVar37 = extraout_w12_14;
    }
    else if (uVar38 == 0x20) {
      puVar12 = (undefined8 *)(param_1 + 0x60 + uVar24);
      puVar12[1] = 0x4040404040404040;
      *puVar12 = 0x4040404040404040;
      lVar19 = (uVar24 & 0xffffffff) + 0x10;
      puVar12 = (undefined8 *)(param_1 + 0x60 + lVar19);
      puVar12[1] = 0x4040404040404040;
      *puVar12 = 0x4040404040404040;
      puVar12 = (undefined8 *)(param_1 + 0x80 + uVar24);
      puVar12[1] = 0x4040404040404040;
      *puVar12 = 0x4040404040404040;
      puVar12 = (undefined8 *)(param_1 + 0x80 + lVar19);
      puVar12[1] = 0x4040404040404040;
      *puVar12 = 0x4040404040404040;
    }
  }
  switch(uVar37) {
  case 1:
    func_0x000104c28a24();
    func_0x000104c28cd4();
    func_0x000104c28d6c();
    *(undefined1 *)(extraout_x8_14 + 0x60) = extraout_w9;
    break;
  case 2:
    func_0x000104c28a24();
    func_0x000104c28cc8();
    func_0x000104c28d6c();
    *(undefined2 *)(extraout_x8_18 + 0x60) = extraout_w9_00;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    func_0x000104c28a24();
    func_0x000104c28cb0();
    func_0x000104c28d6c();
    *(undefined4 *)(extraout_x8_19 + 0x60) = extraout_w9_01;
    break;
  case 8:
    func_0x000104c28a24();
    func_0x000104c28a74();
    goto code_r0x000104c26ba8;
  default:
    if (uVar37 == 0x10) {
      func_0x000104c28a74(*(long *)(param_1 + 0x290) + uVar23);
      func_0x000104c28b98(*(long *)(param_1 + 0x290) + (extraout_x11_00 & 0xffffffff) + 8);
      lVar19 = extraout_x8_20 + extraout_x11_01;
      uVar29 = extraout_x9_07;
    }
    else {
      if (uVar37 != 0x20) {
        return 0;
      }
      func_0x000104c28a74(*(long *)(param_1 + 0x290) + uVar23);
      func_0x000104c28b98(*(long *)(param_1 + 0x290) + (extraout_x13_03 & 0xffffffff) + 8);
      func_0x000104c28b98(extraout_x8_15 + extraout_x10_01 + 0x10);
      func_0x000104c28b98(extraout_x8_16 + extraout_x10_02 + 0x18);
      *(undefined8 *)(extraout_x8_17 + extraout_x13_04 + 0x60) = extraout_x9_06;
      *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x60) = extraout_x9_06;
      lVar19 = *(long *)(param_1 + 0x290) + extraout_x12;
      uVar29 = extraout_x9_06;
    }
    *(undefined8 *)(lVar19 + 0x60) = uVar29;
code_r0x000104c26ba8:
    func_0x000104c28d6c();
    *(undefined8 *)(extraout_x8_21 + 0x60) = extraout_x9_08;
  }
  return 0;
}



/* Entry: 104c27a70; end: 104c27aff;  */

void FUN_104c27a70(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  uint extraout_w8;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  long lVar14;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int unaff_w19;
  long *unaff_x20;
  long *plVar20;
  undefined1 ****ppppuVar21;
  code *pcVar22;
  undefined4 uStack_190;
  int iStack_18c;
  long alStack_188 [7];
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  long alStack_30 [3];
  undefined8 uStack_18;
  
  plVar20 = alStack_30;
  func_0x000104c288bc();
  func_0x000104c28e40();
  if (((extraout_x8 & 1) != 0) &&
     ((*(char *)(param_1[3] + 0x33e) != '\0' || (*(char *)(param_1[3] + 0x33f) != '\0')))) {
    func_0x000104c28964((int)param_2 * (int)param_1[0x1b2]);
    in_ZR = *(char *)(param_1[1] + 0x188) == '\0';
    func_0x000104c19b4c();
    param_2 = plVar20;
  }
  func_0x000104c28890(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar20 = alStack_70;
  plVar11 = alStack_70;
  pcStack_38 = FUN_104c27b00;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x000104c28dd8();
  func_0x000104c288bc();
  uStack_58 = extraout_x8_00;
  func_0x000104c28964((int)param_2 * (int)param_1[0x1b2]);
  lVar14 = param_1[1];
  uVar6 = *(char *)(lVar14 + 0x188) == '\0';
  if (((*(byte *)(param_1[0x197] + 0xf668) & 1) != 0) &&
     ((*(char *)(unaff_x20[3] + 0x33e) != '\0' || (*(char *)(unaff_x20[3] + 0x33f) != '\0')))) {
    param_1 = unaff_x20;
    func_0x000104c1a2f0();
    lVar14 = unaff_x20[1];
    param_2 = plVar20;
  }
  if ((*(char *)(lVar14 + 0x19e) != '\0') || ((int)unaff_x20[0x29b] != 0)) {
    param_1 = unaff_x20;
    func_0x000104c1954c();
    param_2 = plVar11;
  }
  func_0x000104c28890(uStack_58);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_104c27bc8;
  ppuStack_80 = &puStack_40;
  func_0x000104c288bc();
  iVar12 = (int)param_2;
  lVar14 = param_1[1];
  uStack_b8 = extraout_x8_01;
  if ((*(byte *)(*(long *)(lVar14 + 0xcb8) + 0xf668) >> 1 & 1) != 0) {
    func_0x000104c28dd8();
    iVar2 = *(int *)(lVar14 + 0xd90);
    iVar10 = iVar2 * iVar12;
    bVar7 = *(int *)(lVar14 + 0x878) == 1;
    lVar17 = (long)(iVar10 * 4);
    lStack_d0 = *(long *)(lVar14 + 0x14a8) + *(long *)(lVar14 + 0x860) * lVar17;
    lStack_c0 = *(long *)(lVar14 + 0x868) * lVar17 >> bVar7;
    lStack_c8 = *(long *)(lVar14 + 0x14b0) + lStack_c0;
    lStack_c0 = *(long *)(lVar14 + 0x14b8) + lStack_c0;
    if (iVar12 != 0) {
      lStack_e8 = lStack_d0 + *(long *)(lVar14 + 0x860) * -8;
      lStack_d8 = (*(long *)(lVar14 + 0x868) << 3) >> bVar7;
      lStack_e0 = lStack_c8 - lStack_d8;
      lStack_d8 = lStack_c0 - lStack_d8;
      FUN_104c058cc();
    }
    iVar12 = -2;
    if (*(int *)(lVar14 + 0xd88) <= unaff_w19 + 1) {
      iVar12 = 0;
    }
    uVar6 = iVar10 + iVar2 + iVar12 == *(int *)(lVar14 + 0xd7c);
    param_2 = &lStack_d0;
    FUN_104c058cc();
    param_1 = unaff_x20;
  }
  func_0x000104c28890(uStack_b8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104c27d2c;
  ppppuVar21 = &pppuStack_100;
  plVar20 = (long *)0x0;
  plVar8 = param_1;
  pppuStack_100 = &ppuStack_80;
  func_0x000104c288bc();
  alStack_188[6] = extraout_x8_02;
  iStack_18c = (int)plVar8[0x1b2];
  iVar12 = (int)plVar8[0x10f];
  iVar10 = (int)param_2;
  iVar2 = iVar10 * iStack_18c;
  lVar17 = (long)(iVar2 * 4);
  lVar18 = plVar8[0x10d] * lVar17 >> (iVar12 == 1);
  lVar14 = plVar8[0x12f] * lVar17 >> (iVar12 == 1);
  plVar11 = (long *)0x8;
  if (iVar12 != 0) {
    plVar11 = (long *)0x18;
  }
  uVar19 = 0;
  if (iVar10 != 0) {
    uVar19 = 8;
  }
  alStack_188[3] = plVar8[0x295] + plVar8[0x10c] * lVar17;
  alStack_188[4] = plVar8[0x296] + lVar18;
  alStack_188[5] = plVar8[0x297] + lVar18;
  alStack_188[0] = plVar8[0x298] + plVar8[0x12e] * lVar17;
  alStack_188[1] = plVar8[0x299] + lVar14;
  alStack_188[2] = plVar8[0x29a] + lVar14;
  plVar9 = plVar8;
  for (; uVar6 = plVar11 == plVar20, !(bool)uVar6; plVar20 = plVar20 + 1) {
    if (plVar20 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint)((int)param_1[0x10f] == 1);
    }
    uVar15 = (ulong)(plVar20 != (long *)0x0);
    iVar12 = -2;
    if ((int)param_1[0x1b1] <= iVar10 + 1) {
      iVar12 = 0;
    }
    if (plVar20 == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)((int)param_1[0x10f] != 3);
    }
    param_2 = (long *)plVar8[uVar15 + 0x12e];
    uVar3 = uVar19 >> uVar13;
    plVar9 = (long *)(*(long *)((long)alStack_188 + (long)plVar20) - (long)param_2 * (ulong)uVar3);
    iVar12 = (iVar12 + iStack_18c) * 4 >> uVar13;
    iVar1 = (int)((uVar13 | iVar2 * -4) + *(int *)((long)param_1 + 0x874)) >> uVar13;
    if (iVar12 <= iVar1) {
      iVar1 = iVar12;
    }
    uStack_190 = *(undefined4 *)((long)plVar8 + uVar15 * 4 + 0xcb0);
    (**(code **)(param_1[0x19a] + 0x2a0))
              (plVar9,param_2,
               *(long *)((long)(alStack_188 + 3) + (long)plVar20) -
               plVar8[uVar15 + 0x10c] * (ulong)uVar3,plVar8[uVar15 + 0x10c],
               (int)((int)param_1[0x130] + uVar16) >> uVar16,iVar1 + uVar3,
               (int)(uVar16 | (int)param_1[0x1af] << 2) >> uVar16,
               *(undefined4 *)((long)plVar8 + uVar15 * 4 + 0xca8));
  }
  func_0x000104c28890(alStack_188[6]);
  if (!(bool)uVar6) {
    pcVar22 = FUN_104c27efc;
    ___stack_chk_fail();
    puVar4 = &uStack_190;
    while( true ) {
      iVar12 = (int)param_2;
      *(undefined1 *****)((long)puVar4 + -0x10) = ppppuVar21;
      *(code **)((long)puVar4 + -8) = pcVar22;
      func_0x000104c288bc();
      func_0x000104c28e40();
      if ((extraout_w8 >> 2 & 1) != 0) {
        uVar6 = (int)plVar9[0x10f] == 1;
        lVar14 = (long)(iVar12 * (int)plVar9[0x1b2] * 4);
        lVar18 = plVar9[0x299];
        lVar17 = plVar9[0x12f] * lVar14 >> uVar6;
        *(long *)((long)puVar4 + -0x30) = plVar9[0x298] + plVar9[0x12e] * lVar14;
        *(long *)((long)puVar4 + -0x28) = lVar18 + lVar17;
        *(long *)((long)puVar4 + -0x20) = plVar9[0x29a] + lVar17;
        FUN_104c1d490();
      }
      func_0x000104c28890(*(undefined8 *)((long)puVar4 + -0x18));
      if ((bool)uVar6) break;
      ___stack_chk_fail();
      puVar5 = (undefined8 *)((long)puVar4 + -0x50);
      *(long **)((long)puVar4 + -0x50) = plVar20;
      *(long **)((long)puVar4 + -0x48) = param_1;
      *(undefined1 **)((long)puVar4 + -0x40) = (undefined1 *)((long)puVar4 + -0x10);
      *(code **)((long)puVar4 + -0x38) = FUN_104c27f88;
      func_0x000104c28dd8();
      FUN_104c27a70();
      FUN_104c27b00(plVar20,param_1);
      if (*(char *)(plVar20[1] + 0x19e) != '\0') {
        FUN_104c27bc8(*(undefined8 *)(plVar20[0x197] + 0x10),param_1);
      }
      uVar6 = *(int *)(plVar20[3] + 0xec) == *(int *)(plVar20[3] + 0xf0);
      if (!(bool)uVar6) {
        FUN_104c27d2c(plVar20,param_1);
      }
      if ((int)plVar20[0x29b] == 0) {
        return;
      }
      ppppuVar21 = *(undefined1 *****)((long)puVar4 + -0x40);
      pcVar22 = *(code **)((long)puVar4 + -0x38);
      plVar11 = (long *)((long)puVar4 + -0x48);
      puVar4 = (undefined4 *)((long)puVar4 + -0x30);
      plVar9 = plVar20;
      param_2 = param_1;
      param_1 = (long *)*plVar11;
      plVar20 = (long *)*puVar5;
    }
    return;
  }
  return;
}



/* Entry: 104c27b00; end: 104c27bc7;  */

void FUN_104c27b00(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar14;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int unaff_w19;
  long *unaff_x20;
  long *plVar20;
  undefined1 ***pppuVar21;
  code *pcVar22;
  undefined4 uStack_160;
  int iStack_15c;
  long alStack_158 [7];
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar20 = alStack_40;
  plVar11 = alStack_40;
  func_0x000104c28dd8();
  func_0x000104c288bc();
  uStack_28 = extraout_x8;
  func_0x000104c28964((int)param_2 * (int)param_1[0x1b2]);
  lVar14 = param_1[1];
  uVar6 = *(char *)(lVar14 + 0x188) == '\0';
  if (((*(byte *)(param_1[0x197] + 0xf668) & 1) != 0) &&
     ((*(char *)(unaff_x20[3] + 0x33e) != '\0' || (*(char *)(unaff_x20[3] + 0x33f) != '\0')))) {
    param_1 = unaff_x20;
    func_0x000104c1a2f0();
    lVar14 = unaff_x20[1];
    param_2 = plVar20;
  }
  if ((*(char *)(lVar14 + 0x19e) != '\0') || ((int)unaff_x20[0x29b] != 0)) {
    param_1 = unaff_x20;
    func_0x000104c1954c();
    param_2 = plVar11;
  }
  func_0x000104c28890(uStack_28);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104c27bc8;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000104c288bc();
  iVar12 = (int)param_2;
  lVar14 = param_1[1];
  uStack_88 = extraout_x8_00;
  if ((*(byte *)(*(long *)(lVar14 + 0xcb8) + 0xf668) >> 1 & 1) != 0) {
    func_0x000104c28dd8();
    iVar2 = *(int *)(lVar14 + 0xd90);
    iVar10 = iVar2 * iVar12;
    bVar7 = *(int *)(lVar14 + 0x878) == 1;
    lVar17 = (long)(iVar10 * 4);
    lStack_a0 = *(long *)(lVar14 + 0x14a8) + *(long *)(lVar14 + 0x860) * lVar17;
    lStack_90 = *(long *)(lVar14 + 0x868) * lVar17 >> bVar7;
    lStack_98 = *(long *)(lVar14 + 0x14b0) + lStack_90;
    lStack_90 = *(long *)(lVar14 + 0x14b8) + lStack_90;
    if (iVar12 != 0) {
      lStack_b8 = lStack_a0 + *(long *)(lVar14 + 0x860) * -8;
      lStack_a8 = (*(long *)(lVar14 + 0x868) << 3) >> bVar7;
      lStack_b0 = lStack_98 - lStack_a8;
      lStack_a8 = lStack_90 - lStack_a8;
      FUN_104c058cc();
    }
    iVar12 = -2;
    if (*(int *)(lVar14 + 0xd88) <= unaff_w19 + 1) {
      iVar12 = 0;
    }
    uVar6 = iVar10 + iVar2 + iVar12 == *(int *)(lVar14 + 0xd7c);
    param_2 = &lStack_a0;
    FUN_104c058cc();
    param_1 = unaff_x20;
  }
  func_0x000104c28890(uStack_88);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104c27d2c;
  pppuVar21 = &ppuStack_d0;
  plVar20 = (long *)0x0;
  plVar8 = param_1;
  ppuStack_d0 = &puStack_50;
  func_0x000104c288bc();
  alStack_158[6] = extraout_x8_01;
  iStack_15c = (int)plVar8[0x1b2];
  iVar12 = (int)plVar8[0x10f];
  iVar10 = (int)param_2;
  iVar2 = iVar10 * iStack_15c;
  lVar17 = (long)(iVar2 * 4);
  lVar18 = plVar8[0x10d] * lVar17 >> (iVar12 == 1);
  lVar14 = plVar8[0x12f] * lVar17 >> (iVar12 == 1);
  plVar11 = (long *)0x8;
  if (iVar12 != 0) {
    plVar11 = (long *)0x18;
  }
  uVar19 = 0;
  if (iVar10 != 0) {
    uVar19 = 8;
  }
  alStack_158[3] = plVar8[0x295] + plVar8[0x10c] * lVar17;
  alStack_158[4] = plVar8[0x296] + lVar18;
  alStack_158[5] = plVar8[0x297] + lVar18;
  alStack_158[0] = plVar8[0x298] + plVar8[0x12e] * lVar17;
  alStack_158[1] = plVar8[0x299] + lVar14;
  alStack_158[2] = plVar8[0x29a] + lVar14;
  plVar9 = plVar8;
  for (; uVar6 = plVar11 == plVar20, !(bool)uVar6; plVar20 = plVar20 + 1) {
    if (plVar20 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint)((int)param_1[0x10f] == 1);
    }
    uVar15 = (ulong)(plVar20 != (long *)0x0);
    iVar12 = -2;
    if ((int)param_1[0x1b1] <= iVar10 + 1) {
      iVar12 = 0;
    }
    if (plVar20 == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)((int)param_1[0x10f] != 3);
    }
    param_2 = (long *)plVar8[uVar15 + 0x12e];
    uVar3 = uVar19 >> uVar13;
    plVar9 = (long *)(*(long *)((long)alStack_158 + (long)plVar20) - (long)param_2 * (ulong)uVar3);
    iVar12 = (iVar12 + iStack_15c) * 4 >> uVar13;
    iVar1 = (int)((uVar13 | iVar2 * -4) + *(int *)((long)param_1 + 0x874)) >> uVar13;
    if (iVar12 <= iVar1) {
      iVar1 = iVar12;
    }
    uStack_160 = *(undefined4 *)((long)plVar8 + uVar15 * 4 + 0xcb0);
    (**(code **)(param_1[0x19a] + 0x2a0))
              (plVar9,param_2,
               *(long *)((long)(alStack_158 + 3) + (long)plVar20) -
               plVar8[uVar15 + 0x10c] * (ulong)uVar3,plVar8[uVar15 + 0x10c],
               (int)((int)param_1[0x130] + uVar16) >> uVar16,iVar1 + uVar3,
               (int)(uVar16 | (int)param_1[0x1af] << 2) >> uVar16,
               *(undefined4 *)((long)plVar8 + uVar15 * 4 + 0xca8));
  }
  func_0x000104c28890(alStack_158[6]);
  if ((bool)uVar6) {
    return;
  }
  pcVar22 = FUN_104c27efc;
  ___stack_chk_fail();
  puVar4 = &uStack_160;
  while( true ) {
    iVar12 = (int)param_2;
    *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar21;
    *(code **)((long)puVar4 + -8) = pcVar22;
    func_0x000104c288bc();
    func_0x000104c28e40();
    if ((extraout_w8 >> 2 & 1) != 0) {
      uVar6 = (int)plVar9[0x10f] == 1;
      lVar14 = (long)(iVar12 * (int)plVar9[0x1b2] * 4);
      lVar18 = plVar9[0x299];
      lVar17 = plVar9[0x12f] * lVar14 >> uVar6;
      *(long *)((long)puVar4 + -0x30) = plVar9[0x298] + plVar9[0x12e] * lVar14;
      *(long *)((long)puVar4 + -0x28) = lVar18 + lVar17;
      *(long *)((long)puVar4 + -0x20) = plVar9[0x29a] + lVar17;
      FUN_104c1d490();
    }
    func_0x000104c28890(*(undefined8 *)((long)puVar4 + -0x18));
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar5 = (undefined8 *)((long)puVar4 + -0x50);
    *(long **)((long)puVar4 + -0x50) = plVar20;
    *(long **)((long)puVar4 + -0x48) = param_1;
    *(undefined1 **)((long)puVar4 + -0x40) = (undefined1 *)((long)puVar4 + -0x10);
    *(code **)((long)puVar4 + -0x38) = FUN_104c27f88;
    func_0x000104c28dd8();
    FUN_104c27a70();
    FUN_104c27b00(plVar20,param_1);
    if (*(char *)(plVar20[1] + 0x19e) != '\0') {
      FUN_104c27bc8(*(undefined8 *)(plVar20[0x197] + 0x10),param_1);
    }
    uVar6 = *(int *)(plVar20[3] + 0xec) == *(int *)(plVar20[3] + 0xf0);
    if (!(bool)uVar6) {
      FUN_104c27d2c(plVar20,param_1);
    }
    if ((int)plVar20[0x29b] == 0) break;
    pppuVar21 = *(undefined1 ****)((long)puVar4 + -0x40);
    pcVar22 = *(code **)((long)puVar4 + -0x38);
    plVar11 = (long *)((long)puVar4 + -0x48);
    puVar4 = (undefined4 *)((long)puVar4 + -0x30);
    plVar9 = plVar20;
    param_2 = param_1;
    param_1 = (long *)*plVar11;
    plVar20 = (long *)*puVar5;
  }
  return;
}



/* Entry: 104c27bc8; end: 104c27d2b;  */

void FUN_104c27bc8(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int unaff_w19;
  long *unaff_x20;
  long *plVar19;
  long lVar20;
  undefined1 **ppuVar21;
  code *pcVar22;
  undefined4 uStack_120;
  int iStack_11c;
  long alStack_118 [7];
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000104c288bc();
  iVar12 = (int)param_2;
  lVar20 = param_1[1];
  uStack_48 = extraout_x8;
  if ((*(byte *)(*(long *)(lVar20 + 0xcb8) + 0xf668) >> 1 & 1) != 0) {
    func_0x000104c28dd8();
    iVar3 = *(int *)(lVar20 + 0xd90);
    iVar11 = iVar3 * iVar12;
    bVar7 = *(int *)(lVar20 + 0x878) == 1;
    lVar16 = (long)(iVar11 * 4);
    lStack_60 = *(long *)(lVar20 + 0x14a8) + *(long *)(lVar20 + 0x860) * lVar16;
    lStack_50 = *(long *)(lVar20 + 0x868) * lVar16 >> bVar7;
    lStack_58 = *(long *)(lVar20 + 0x14b0) + lStack_50;
    lStack_50 = *(long *)(lVar20 + 0x14b8) + lStack_50;
    if (iVar12 != 0) {
      lStack_78 = lStack_60 + *(long *)(lVar20 + 0x860) * -8;
      lStack_68 = (*(long *)(lVar20 + 0x868) << 3) >> bVar7;
      lStack_70 = lStack_58 - lStack_68;
      lStack_68 = lStack_50 - lStack_68;
      FUN_104c058cc();
    }
    iVar12 = -2;
    if (*(int *)(lVar20 + 0xd88) <= unaff_w19 + 1) {
      iVar12 = 0;
    }
    in_ZR = iVar11 + iVar3 + iVar12 == *(int *)(lVar20 + 0xd7c);
    param_2 = &lStack_60;
    FUN_104c058cc();
    param_1 = unaff_x20;
  }
  func_0x000104c28890(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_88 = FUN_104c27d2c;
    ppuVar21 = &puStack_90;
    plVar19 = (long *)0x0;
    plVar9 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x000104c288bc();
    alStack_118[6] = extraout_x8_00;
    iStack_11c = (int)plVar9[0x1b2];
    iVar12 = (int)plVar9[0x10f];
    iVar11 = (int)param_2;
    iVar3 = iVar11 * iStack_11c;
    lVar16 = (long)(iVar3 * 4);
    lVar17 = plVar9[0x10d] * lVar16 >> (iVar12 == 1);
    lVar20 = plVar9[0x12f] * lVar16 >> (iVar12 == 1);
    plVar2 = (long *)0x8;
    if (iVar12 != 0) {
      plVar2 = (long *)0x18;
    }
    uVar18 = 0;
    if (iVar11 != 0) {
      uVar18 = 8;
    }
    alStack_118[3] = plVar9[0x295] + plVar9[0x10c] * lVar16;
    alStack_118[4] = plVar9[0x296] + lVar17;
    alStack_118[5] = plVar9[0x297] + lVar17;
    alStack_118[0] = plVar9[0x298] + plVar9[0x12e] * lVar16;
    alStack_118[1] = plVar9[0x299] + lVar20;
    alStack_118[2] = plVar9[0x29a] + lVar20;
    plVar10 = plVar9;
    for (; uVar8 = plVar2 == plVar19, !(bool)uVar8; plVar19 = plVar19 + 1) {
      if (plVar19 == (long *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)((int)param_1[0x10f] == 1);
      }
      uVar14 = (ulong)(plVar19 != (long *)0x0);
      iVar12 = -2;
      if ((int)param_1[0x1b1] <= iVar11 + 1) {
        iVar12 = 0;
      }
      if (plVar19 == (long *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)((int)param_1[0x10f] != 3);
      }
      param_2 = (long *)plVar9[uVar14 + 0x12e];
      uVar4 = uVar18 >> uVar13;
      plVar10 = (long *)(*(long *)((long)alStack_118 + (long)plVar19) - (long)param_2 * (ulong)uVar4
                        );
      iVar12 = (iVar12 + iStack_11c) * 4 >> uVar13;
      iVar1 = (int)((uVar13 | iVar3 * -4) + *(int *)((long)param_1 + 0x874)) >> uVar13;
      if (iVar12 <= iVar1) {
        iVar1 = iVar12;
      }
      uStack_120 = *(undefined4 *)((long)plVar9 + uVar14 * 4 + 0xcb0);
      (**(code **)(param_1[0x19a] + 0x2a0))
                (plVar10,param_2,
                 *(long *)((long)(alStack_118 + 3) + (long)plVar19) -
                 plVar9[uVar14 + 0x10c] * (ulong)uVar4,plVar9[uVar14 + 0x10c],
                 (int)((int)param_1[0x130] + uVar15) >> uVar15,iVar1 + uVar4,
                 (int)(uVar15 | (int)param_1[0x1af] << 2) >> uVar15,
                 *(undefined4 *)((long)plVar9 + uVar14 * 4 + 0xca8));
    }
    func_0x000104c28890(alStack_118[6]);
    if ((bool)uVar8) {
      return;
    }
    pcVar22 = FUN_104c27efc;
    ___stack_chk_fail();
    puVar5 = &uStack_120;
    while( true ) {
      iVar12 = (int)param_2;
      *(undefined1 ***)((long)puVar5 + -0x10) = ppuVar21;
      *(code **)((long)puVar5 + -8) = pcVar22;
      func_0x000104c288bc();
      func_0x000104c28e40();
      if ((extraout_w8 >> 2 & 1) != 0) {
        uVar8 = (int)plVar10[0x10f] == 1;
        lVar20 = (long)(iVar12 * (int)plVar10[0x1b2] * 4);
        lVar17 = plVar10[0x299];
        lVar16 = plVar10[0x12f] * lVar20 >> uVar8;
        *(long *)((long)puVar5 + -0x30) = plVar10[0x298] + plVar10[0x12e] * lVar20;
        *(long *)((long)puVar5 + -0x28) = lVar17 + lVar16;
        *(long *)((long)puVar5 + -0x20) = plVar10[0x29a] + lVar16;
        FUN_104c1d490();
      }
      func_0x000104c28890(*(undefined8 *)((long)puVar5 + -0x18));
      if ((bool)uVar8) break;
      ___stack_chk_fail();
      puVar6 = (undefined8 *)((long)puVar5 + -0x50);
      *(long **)((long)puVar5 + -0x50) = plVar19;
      *(long **)((long)puVar5 + -0x48) = param_1;
      *(undefined1 **)((long)puVar5 + -0x40) = (undefined1 *)((long)puVar5 + -0x10);
      *(code **)((long)puVar5 + -0x38) = FUN_104c27f88;
      func_0x000104c28dd8();
      FUN_104c27a70();
      FUN_104c27b00(plVar19,param_1);
      if (*(char *)(plVar19[1] + 0x19e) != '\0') {
        FUN_104c27bc8(*(undefined8 *)(plVar19[0x197] + 0x10),param_1);
      }
      uVar8 = *(int *)(plVar19[3] + 0xec) == *(int *)(plVar19[3] + 0xf0);
      if (!(bool)uVar8) {
        FUN_104c27d2c(plVar19,param_1);
      }
      if ((int)plVar19[0x29b] == 0) {
        return;
      }
      ppuVar21 = *(undefined1 ***)((long)puVar5 + -0x40);
      pcVar22 = *(code **)((long)puVar5 + -0x38);
      plVar2 = (long *)((long)puVar5 + -0x48);
      puVar5 = (undefined4 *)((long)puVar5 + -0x30);
      plVar10 = plVar19;
      param_2 = param_1;
      param_1 = (long *)*plVar2;
      plVar19 = (long *)*puVar6;
    }
    return;
  }
  return;
}



/* Entry: 104c27d2c; end: 104c27efb;  */

void FUN_104c27d2c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  undefined1 *puVar22;
  code *pcVar23;
  undefined4 uStack_a0;
  int iStack_9c;
  long alStack_98 [7];
  
  puVar22 = &stack0xfffffffffffffff0;
  lVar21 = 0;
  lVar8 = param_1;
  func_0x000104c288bc();
  alStack_98[6] = extraout_x8;
  iStack_9c = *(int *)(lVar8 + 0xd90);
  iVar15 = *(int *)(lVar8 + 0x878);
  iVar9 = (int)param_2;
  iVar4 = iVar9 * iStack_9c;
  lVar18 = (long)(iVar4 * 4);
  lVar11 = lVar8 + 0x860;
  lVar19 = *(long *)(lVar8 + 0x868) * lVar18 >> (iVar15 == 1);
  lVar12 = lVar8 + 0x970;
  lVar13 = *(long *)(lVar8 + 0x978) * lVar18 >> (iVar15 == 1);
  lVar17 = 8;
  if (iVar15 != 0) {
    lVar17 = 0x18;
  }
  uVar20 = 0;
  if (iVar9 != 0) {
    uVar20 = 8;
  }
  alStack_98[3] = *(long *)(lVar8 + 0x14a8) + *(long *)(lVar8 + 0x860) * lVar18;
  alStack_98[4] = *(long *)(lVar8 + 0x14b0) + lVar19;
  alStack_98[5] = *(long *)(lVar8 + 0x14b8) + lVar19;
  lVar19 = lVar8 + 0xca8;
  alStack_98[0] = *(long *)(lVar8 + 0x14c0) + *(long *)(lVar8 + 0x970) * lVar18;
  alStack_98[1] = *(long *)(lVar8 + 0x14c8) + lVar13;
  alStack_98[2] = *(long *)(lVar8 + 0x14d0) + lVar13;
  lVar13 = lVar8 + 0xcb0;
  for (; uVar7 = lVar17 == lVar21, !(bool)uVar7; lVar21 = lVar21 + 8) {
    if (lVar21 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)(*(int *)(param_1 + 0x878) == 1);
    }
    uVar14 = (ulong)(lVar21 != 0);
    iVar15 = -2;
    if (*(int *)(param_1 + 0xd88) <= iVar9 + 1) {
      iVar15 = 0;
    }
    if (lVar21 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)(*(int *)(param_1 + 0x878) != 3);
    }
    param_2 = *(long *)(lVar12 + uVar14 * 8);
    uVar3 = uVar20 >> uVar10;
    lVar8 = *(long *)((long)alStack_98 + lVar21) - param_2 * (ulong)uVar3;
    lVar18 = *(long *)(lVar11 + uVar14 * 8);
    iVar15 = (iVar15 + iStack_9c) * 4 >> uVar10;
    iVar1 = (int)((uVar10 | iVar4 * -4) + *(int *)(param_1 + 0x874)) >> uVar10;
    if (iVar15 <= iVar1) {
      iVar1 = iVar15;
    }
    uStack_a0 = *(undefined4 *)(lVar13 + uVar14 * 4);
    (**(code **)(*(long *)(param_1 + 0xcd0) + 0x2a0))
              (lVar8,param_2,*(long *)((long)alStack_98 + lVar21 + 0x18) - lVar18 * (ulong)uVar3,
               lVar18,(int)(*(int *)(param_1 + 0x980) + uVar16) >> uVar16,iVar1 + uVar3,
               (int)(uVar16 | *(int *)(param_1 + 0xd78) << 2) >> uVar16,
               *(undefined4 *)(lVar19 + uVar14 * 4));
  }
  func_0x000104c28890(alStack_98[6]);
  if ((bool)uVar7) {
    return;
  }
  pcVar23 = FUN_104c27efc;
  ___stack_chk_fail();
  puVar5 = &uStack_a0;
  while( true ) {
    iVar15 = (int)param_2;
    *(undefined1 **)((long)puVar5 + -0x10) = puVar22;
    *(code **)((long)puVar5 + -8) = pcVar23;
    func_0x000104c288bc();
    func_0x000104c28e40();
    if ((extraout_w8 >> 2 & 1) != 0) {
      uVar7 = *(int *)(lVar8 + 0x878) == 1;
      lVar11 = (long)(iVar15 * *(int *)(lVar8 + 0xd90) * 4);
      lVar17 = *(long *)(lVar8 + 0x14c8);
      lVar12 = *(long *)(lVar8 + 0x978) * lVar11 >> uVar7;
      *(long *)((long)puVar5 + -0x30) =
           *(long *)(lVar8 + 0x14c0) + *(long *)(lVar8 + 0x970) * lVar11;
      *(long *)((long)puVar5 + -0x28) = lVar17 + lVar12;
      *(long *)((long)puVar5 + -0x20) = *(long *)(lVar8 + 0x14d0) + lVar12;
      FUN_104c1d490();
    }
    func_0x000104c28890(*(undefined8 *)((long)puVar5 + -0x18));
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    plVar6 = (long *)((long)puVar5 + -0x50);
    *(long *)((long)puVar5 + -0x50) = lVar21;
    *(long *)((long)puVar5 + -0x48) = param_1;
    *(undefined1 **)((long)puVar5 + -0x40) = (undefined1 *)((long)puVar5 + -0x10);
    *(code **)((long)puVar5 + -0x38) = FUN_104c27f88;
    func_0x000104c28dd8();
    FUN_104c27a70();
    FUN_104c27b00(lVar21,param_1);
    if (*(char *)(*(long *)(lVar21 + 8) + 0x19e) != '\0') {
      FUN_104c27bc8(*(undefined8 *)(*(long *)(lVar21 + 0xcb8) + 0x10),param_1);
    }
    uVar7 = *(int *)(*(long *)(lVar21 + 0x18) + 0xec) == *(int *)(*(long *)(lVar21 + 0x18) + 0xf0);
    if (!(bool)uVar7) {
      FUN_104c27d2c(lVar21,param_1);
    }
    if (*(int *)(lVar21 + 0x14d8) == 0) break;
    puVar22 = *(undefined1 **)((long)puVar5 + -0x40);
    pcVar23 = *(code **)((long)puVar5 + -0x38);
    plVar2 = (long *)((long)puVar5 + -0x48);
    puVar5 = (undefined4 *)((long)puVar5 + -0x30);
    lVar8 = lVar21;
    param_2 = param_1;
    param_1 = *plVar2;
    lVar21 = *plVar6;
  }
  return;
}



/* Entry: 104c27efc; end: 104c27f87;  */

void FUN_104c27efc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 in_ZR;
  int iVar3;
  uint extraout_w8;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    iVar3 = (int)param_2;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104c288bc();
    func_0x000104c28e40();
    if ((extraout_w8 >> 2 & 1) != 0) {
      in_ZR = *(int *)(param_1 + 0x878) == 1;
      lVar4 = (long)(iVar3 * *(int *)(param_1 + 0xd90) * 4);
      lVar6 = *(long *)(param_1 + 0x14c8);
      lVar5 = *(long *)(param_1 + 0x978) * lVar4 >> in_ZR;
      *(long *)((long)register0x00000008 + -0x30) =
           *(long *)(param_1 + 0x14c0) + *(long *)(param_1 + 0x970) * lVar4;
      *(long *)((long)register0x00000008 + -0x28) = lVar6 + lVar5;
      *(long *)((long)register0x00000008 + -0x20) = *(long *)(param_1 + 0x14d0) + lVar5;
      FUN_104c1d490();
    }
    func_0x000104c28890(*(undefined8 *)((long)register0x00000008 + -0x18));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plVar2 = (long *)((long)register0x00000008 + -0x50);
    *(long *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_104c27f88;
    func_0x000104c28dd8();
    FUN_104c27a70();
    FUN_104c27b00(unaff_x20,unaff_x19);
    if (*(char *)(*(long *)(unaff_x20 + 8) + 0x19e) != '\0') {
      FUN_104c27bc8(*(undefined8 *)(*(long *)(unaff_x20 + 0xcb8) + 0x10),unaff_x19);
    }
    in_ZR = *(int *)(*(long *)(unaff_x20 + 0x18) + 0xec) ==
            *(int *)(*(long *)(unaff_x20 + 0x18) + 0xf0);
    if (!(bool)in_ZR) {
      FUN_104c27d2c(unaff_x20,unaff_x19);
    }
    if (*(int *)(unaff_x20 + 0x14d8) == 0) break;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar1 = (undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = unaff_x20;
    param_2 = unaff_x19;
    unaff_x19 = *puVar1;
    unaff_x20 = *plVar2;
  }
  return;
}



/* Entry: 104c27f88; end: 104c28007;  */

void FUN_104c27f88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint extraout_w8;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104c28dd8();
    FUN_104c27a70();
    FUN_104c27b00(unaff_x20,unaff_x19);
    if (*(char *)(*(long *)(unaff_x20 + 8) + 0x19e) != '\0') {
      FUN_104c27bc8(*(undefined8 *)(*(long *)(unaff_x20 + 0xcb8) + 0x10),unaff_x19);
    }
    uVar3 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0xec) ==
            *(int *)(*(long *)(unaff_x20 + 0x18) + 0xf0);
    if (!(bool)uVar3) {
      FUN_104c27d2c(unaff_x20,unaff_x19);
    }
    if (*(int *)(unaff_x20 + 0x14d8) == 0) break;
    lVar1 = *(long *)((long)register0x00000008 + -0x20);
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000104c288bc();
    iVar4 = (int)unaff_x19;
    func_0x000104c28e40();
    if ((extraout_w8 >> 2 & 1) != 0) {
      uVar3 = *(int *)(unaff_x20 + 0x878) == 1;
      lVar5 = (long)(iVar4 * *(int *)(unaff_x20 + 0xd90) * 4);
      lVar7 = *(long *)(unaff_x20 + 0x14c8);
      lVar6 = *(long *)(unaff_x20 + 0x978) * lVar5 >> uVar3;
      *(long *)((long)register0x00000008 + -0x30) =
           *(long *)(unaff_x20 + 0x14c0) + *(long *)(unaff_x20 + 0x970) * lVar5;
      *(long *)((long)register0x00000008 + -0x28) = lVar7 + lVar6;
      *(long *)((long)register0x00000008 + -0x20) = *(long *)(unaff_x20 + 0x14d0) + lVar6;
      FUN_104c1d490();
    }
    func_0x000104c28890(*(undefined8 *)((long)register0x00000008 + -0x18));
    if ((bool)uVar3) {
      return;
    }
    unaff_x30 = FUN_104c27f88;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = uVar2;
    unaff_x20 = lVar1;
  }
  return;
}



/* Entry: 104c28008; end: 104c2811b;  */

void FUN_104c28008(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar9 = (long)*(int *)(lVar1 + 0xd80) *
          (long)(*(int *)(param_1 + 0x1c) >> (*(uint *)(lVar1 + 0xd8c) & 0x1f)) * 0x80;
  iVar6 = *(int *)(lVar2 + 0x3528);
  iVar11 = (int)((long)iVar6 << 2);
  _memcpy(*(long *)(lVar1 + 0xd50) + lVar9 + iVar11,
          *(long *)(lVar1 + 0x848) + (long)iVar6 * 4 +
          *(long *)(lVar1 + 0x860) *
          (long)((*(int *)(lVar1 + 0xd90) + *(int *)(param_1 + 0x1c)) * 4 + -1),
          (long)((*(int *)(lVar2 + 0x352c) - iVar6) * 4));
  iVar3 = *(int *)(lVar1 + 0x878);
  if (iVar3 != 0) {
    iVar11 = iVar11 >> (iVar3 != 3);
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(lVar1 + 0xd90);
    lVar7 = *(long *)(lVar1 + 0x868);
    lVar10 = 2;
    plVar8 = (long *)(lVar1 + 0x850);
    do {
      _memcpy(plVar8[0xa1] + lVar9 + iVar11,
              *plVar8 + lVar7 * (((iVar5 + iVar4) * 4 >> (iVar3 == 1)) + -1) + (long)iVar11,
              (long)((*(int *)(lVar2 + 0x352c) - iVar6) * 4 >> (iVar3 != 3)));
      lVar10 = lVar10 + -1;
      plVar8 = plVar8 + 1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 104c2811c; end: 104c2824b;  */

void FUN_104c2811c(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x3f204) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x5588);
  }
  else {
    func_0x000104c28934();
    puVar2 = extraout_x8;
  }
  puVar1 = (undefined8 *)(param_1 + (long)param_2 * 0x18 + 0x1400);
  for (uVar3 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 3;
  }
  puVar1 = (undefined8 *)(param_1 + (long)param_3 * 0x18 + 0x1700);
  for (uVar3 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 3;
  }
  return;
}



/* Entry: 104c2824c; end: 104c2864b;  */

ulong FUN_104c2824c(long param_1,long param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined8 extraout_x8;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong unaff_x30;
  byte abStack_80 [7];
  byte abStack_79 [17];
  undefined8 uStack_68;
  
  lVar17 = param_1;
  iVar9 = param_3;
  func_0x000104c288bc();
  lVar7 = *(long *)(lVar17 + 8);
  lVar2 = *(long *)(lVar17 + 0x10);
  lVar19 = (long)iVar9;
  iVar12 = (int)lVar2 + 0x3500;
  uStack_68 = extraout_x8;
  func_0x000104c28d0c(lVar2 + (long)iVar9 * 0x70 + (long)param_4 * 0x10);
  *(char *)(param_2 + param_3 + 0xb) = (char)(iVar12 + 2U);
  lVar17 = param_1 + 0x270;
  if (param_3 != 0) {
    lVar17 = param_1 + 0x2020;
  }
  uVar15 = (uint)*(byte *)(lVar17 + (int)param_6);
  if ((param_6 & 0xf) == 0) {
    uVar13 = 0;
  }
  else if (param_3 == 0) {
    uVar13 = (uint)*(byte *)(*(long *)(param_1 + 0x290) + (long)param_5 + 0x250);
  }
  else {
    uVar13 = (uint)*(byte *)(param_1 + param_5 + 0x2000);
  }
  iVar9 = 0;
  uVar1 = iVar12 + 2U & 0xff;
  uVar18 = (ulong)uVar1;
  pbVar8 = (byte *)(param_1 + (long)(int)param_6 * 0x18 + lVar19 * 8 + 0x1700);
  pbVar11 = (byte *)(param_1 + (long)param_5 * 0x18 + lVar19 * 8 + 0x1400);
  iVar12 = uVar13 + 1;
  while (iVar16 = -uVar15, iVar16 != 0) {
    while( true ) {
      if (uVar13 == 0) goto LAB_104c283c8;
      bVar3 = *pbVar8;
      bVar4 = *pbVar11;
      if (bVar4 <= bVar3) break;
      if ((iVar9 == 0) || (abStack_79[iVar9] != bVar3)) {
        abStack_79[(long)iVar9 + 1] = bVar3;
        iVar9 = iVar9 + 1;
      }
      pbVar8 = pbVar8 + 1;
      iVar16 = iVar16 + 1;
      if (iVar16 == 0) goto LAB_104c283c8;
    }
    if (bVar4 == bVar3) {
      pbVar8 = pbVar8 + 1;
    }
    if ((iVar9 == 0) || (abStack_79[iVar9] != bVar4)) {
      abStack_79[(long)iVar9 + 1] = bVar4;
      iVar9 = iVar9 + 1;
    }
    pbVar11 = pbVar11 + 1;
    uVar13 = uVar13 - 1;
    iVar12 = iVar12 + -1;
    uVar15 = -iVar16 - (uint)(bVar4 == bVar3);
  }
LAB_104c283c8:
  if (iVar16 == 0) {
    if (uVar13 != 0) {
      lVar17 = 0;
      do {
        if ((iVar9 == 0) || (abStack_79[iVar9] != pbVar11[lVar17])) {
          abStack_79[(long)iVar9 + 1] = pbVar11[lVar17];
          iVar9 = iVar9 + 1;
        }
        lVar17 = lVar17 + 1;
        iVar12 = iVar12 + -1;
      } while (1 < iVar12);
    }
  }
  else {
    iVar16 = 1 - iVar16;
    do {
      if ((iVar9 == 0) || (abStack_79[iVar9] != *pbVar8)) {
        abStack_79[(long)iVar9 + 1] = *pbVar8;
        iVar9 = iVar9 + 1;
      }
      pbVar8 = pbVar8 + 1;
      iVar16 = iVar16 + -1;
    } while (1 < iVar16);
  }
  uVar15 = 0;
  for (lVar17 = 0; lVar17 < iVar9 && (int)uVar15 < (int)uVar1; lVar17 = lVar17 + 1) {
    iVar12 = (int)lVar2 + 0x3500;
    func_0x000100daf8ec();
    if (iVar12 != 0) {
      abStack_80[(int)uVar15] = abStack_79[lVar17 + 1];
      uVar15 = uVar15 + 1;
    }
  }
  if (*(int *)(param_1 + 0x3f204) == 0) {
    pbVar11 = (byte *)(param_1 + lVar19 * 8 + 0x5588);
  }
  else {
    pbVar11 = (byte *)(*(long *)(lVar7 + 0x1108) +
                       (*(ulong *)(lVar7 + 0xd68) >> 1) *
                       (long)(int)((*(uint *)(param_1 + 0x18) & 1) +
                                  ((int)*(uint *)(param_1 + 0x1c) >> 1)) * 0x18 +
                       (long)(int)((*(uint *)(param_1 + 0x1c) & 1) +
                                  ((int)*(uint *)(param_1 + 0x18) >> 1)) * 0x18 + lVar19 * 8);
  }
  uVar5 = uVar15 == uVar1;
  if ((int)uVar15 < (int)uVar1) {
    lVar17 = lVar2 + 0x3500;
    FUN_104c2864c(lVar17,8);
    uVar13 = uVar15 + 1;
    pbVar11[(int)uVar15] = (byte)lVar17;
    uVar5 = uVar13 == uVar1;
    if ((int)uVar13 < (int)uVar1) {
      lVar7 = lVar2 + 0x3500;
      FUN_104c2864c(lVar7,2);
      bVar6 = param_3 == 0;
      uVar14 = (uint)lVar17 & 0xff;
      param_3 = (int)lVar7 + 5;
      uVar10 = 0xfd;
      if (!bVar6) {
        uVar10 = 0xfe;
      }
      uVar21 = (ulong)(int)uVar13;
      iVar12 = uVar15 + 2;
LAB_104c28544:
      lVar17 = lVar2 + 0x3500;
      FUN_104c2864c(lVar17,param_3);
      uVar20 = (uint)bVar6;
      uVar13 = uVar14 + uVar20 + (int)lVar17;
      if (0xfe < (int)uVar13) {
        uVar13 = 0xff;
      }
      uVar14 = uVar13 & 0xff;
      pbVar11[uVar21] = (byte)uVar13;
      if (uVar14 <= uVar10) goto code_r0x000104c28578;
      for (uVar21 = (ulong)iVar12; uVar5 = uVar21 == uVar18, (long)uVar21 < (long)uVar18;
          uVar21 = uVar21 + 1) {
        pbVar11[uVar21] = 0xff;
      }
    }
LAB_104c285a4:
    uVar13 = 0;
    pbVar8 = pbVar11;
    uVar14 = uVar15;
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      uVar5 = uVar13 == uVar15;
      if ((int)uVar13 < (int)uVar15) {
        bVar4 = abStack_80[(int)uVar13];
        uVar5 = uVar14 == uVar1;
        if ((int)uVar14 < (int)uVar1) {
          bVar3 = pbVar11[(int)uVar14];
          uVar5 = bVar4 == bVar3;
          if (bVar3 <= bVar4 && !(bool)uVar5) goto LAB_104c285e8;
        }
        uVar13 = uVar13 + 1;
        bVar3 = bVar4;
      }
      else {
        bVar3 = pbVar11[(int)uVar14];
LAB_104c285e8:
        uVar14 = uVar14 + 1;
      }
      *pbVar8 = bVar3;
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    _memcpy(pbVar11,abStack_80,uVar15);
  }
  func_0x000104c28890(uStack_68);
  if ((bool)uVar5) {
    func_0x000104c28be0(unaff_x30);
    return unaff_x30;
  }
  ___stack_chk_fail();
  func_0x000104c28dd8();
  uVar18 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pbVar8 = pbVar11;
    func_0x000100daf8ec(pbVar11);
    uVar18 = (ulong)((uint)pbVar8 | (int)uVar18 << 1);
  }
  return uVar18;
code_r0x000104c28578:
  uVar21 = uVar21 + 1;
  iVar9 = 0x20 - (int)LZCOUNT((uVar14 ^ 0xff) - uVar20);
  if (iVar9 <= param_3) {
    param_3 = iVar9;
  }
  iVar12 = iVar12 + 1;
  uVar5 = uVar21 == uVar18;
  if ((long)uVar18 <= (long)uVar21) goto LAB_104c285a4;
  goto LAB_104c28544;
}



/* Entry: 104c2864c; end: 104c28687;  */

uint FUN_104c2864c(void)

{
  uint uVar1;
  int unaff_w19;
  uint unaff_w20;
  uint uVar2;
  
  func_0x000104c28dd8();
  uVar2 = 0;
  for (; unaff_w19 != 0; unaff_w19 = unaff_w19 + -1) {
    uVar1 = unaff_w20;
    func_0x000100daf8ec();
    uVar2 = uVar1 | uVar2 << 1;
  }
  return uVar2;
}



/* Entry: 104c28688; end: 104c2878b;  */

void FUN_104c28688(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  FUN_104c2824c(param_1,param_2,1,param_3,param_4,param_5);
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x3f204) == 0) {
    puVar9 = (undefined1 *)(param_1 + 0x5598);
  }
  else {
    func_0x000104c28934();
    puVar9 = (undefined1 *)(extraout_x8 + 0x10);
  }
  lVar4 = lVar8 + 0x3500;
  func_0x000100daf8ec();
  if ((int)lVar4 == 0) {
    for (uVar10 = 0; uVar10 < *(byte *)(param_2 + 0xc); uVar10 = uVar10 + 1) {
      func_0x000104c28d38();
      puVar9[uVar10] = (char)lVar4;
    }
  }
  else {
    uVar5 = lVar8 + 0x3500;
    FUN_104c2864c(uVar5,2);
    uVar7 = uVar5;
    func_0x000104c28d38();
    *puVar9 = (char)uVar7;
    for (uVar10 = 1; uVar10 < *(byte *)(param_2 + 0xc); uVar10 = uVar10 + 1) {
      lVar4 = lVar8 + 0x3500;
      FUN_104c2864c(lVar4,(int)uVar5 + 4);
      iVar2 = (int)lVar4;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar3 = (int)lVar8 + 0x3500;
        func_0x000100daf8ec();
        iVar6 = -iVar2;
        if (iVar3 == 0) {
          iVar6 = iVar2;
        }
      }
      uVar1 = iVar6 + (int)uVar7;
      uVar7 = (ulong)uVar1;
      puVar9[uVar10] = (char)uVar1;
    }
  }
  return;
}



/* Entry: 104c2878c; end: 104c2882f;  */

int FUN_104c2878c(long param_1,int param_2,int *param_3,long param_4,uint param_5,uint param_6,
                 long param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (uint)*(byte *)(param_1 + param_7) + (uint)*(byte *)(param_1 + 1);
  if (param_2 == 0) {
    iVar1 = iVar1 + (uint)((byte *)(param_1 + param_7))[1];
    *param_3 = iVar1;
    uVar3 = iVar1 + (uint)*(byte *)(param_1 + 2) + (uint)*(byte *)(param_1 + param_7 * 2);
    if (3 < param_6) {
      param_6 = 4;
    }
    if (3 < param_5) {
      param_5 = 4;
    }
    uVar4 = (uint)*(byte *)(param_4 + (ulong)param_6 * 5 + (ulong)param_5);
  }
  else {
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 2);
    *param_3 = iVar1;
    uVar3 = iVar1 + (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 4);
    if (1 < param_6) {
      param_6 = 2;
    }
    uVar4 = param_6 * 5 + 0x1a;
  }
  uVar2 = 4;
  if (uVar3 < 0x201) {
    uVar2 = uVar3 + 0x40 >> 7;
  }
  return uVar2 + uVar4;
}



/* Entry: 104c28830; end: 104c2888f;  */

int FUN_104c28830(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  do {
    uVar4 = param_1;
    func_0x000100daf8ec();
    uVar1 = uVar5 + 1;
    if ((int)uVar4 != 0) break;
    bVar3 = uVar5 < 0x20;
    uVar5 = uVar1;
  } while (bVar3);
  iVar6 = 1;
  iVar2 = -uVar1;
  while (iVar2 = iVar2 + 1, iVar2 != 0) {
    uVar4 = param_1;
    func_0x000100daf8ec(param_1);
    iVar6 = (int)uVar4 + iVar6 * 2;
  }
  return iVar6 + -1;
}



/* Entry: 104c28890; end: 104c28ab3;  */

void FUN_104c28890(void)

{
  return;
}



/* Entry: 104c28ab4; end: 104c28acf;  */

void FUN_104c28ab4(void)

{
  FUN_104c2878c();
  return;
}



/* Entry: 104c28ad0; end: 104c28eaf;  */

long FUN_104c28ad0(long param_1)

{
  long in_stack_000000a0;
  
  return param_1 + in_stack_000000a0;
}



/* Entry: 104c28eb0; end: 104c28f1b;  */

long * FUN_104c28eb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_28;
  
  uVar3 = param_1 + 7U & 0xfffffffffffffff8;
  plVar1 = &lStack_28;
  _posix_memalign(plVar1,0x40,uVar3 + 0x28);
  plVar2 = (long *)0x0;
  if (((int)plVar1 == 0) && (lStack_28 != 0)) {
    plVar2 = (long *)(lStack_28 + uVar3);
    *plVar2 = lStack_28;
    plVar2[1] = lStack_28;
    plVar2[2] = 1;
    plVar2[3] = (long)FUN_104c28f1c;
    plVar2[4] = lStack_28;
  }
  return plVar2;
}



/* Entry: 104c28f1c; end: 104c28f1f;  */

void FUN_104c28f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}


