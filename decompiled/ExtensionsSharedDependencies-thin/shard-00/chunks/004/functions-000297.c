/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005cf82c; end: 005cfae7;  */

void FUN_005cf82c(long param_1,ulong *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar9 = *(long *)(param_1 + 0xd0);
  lVar6 = *(long *)(param_1 + 0xd8);
  if ((((*(uint *)(param_1 + 0xe0) >> 2 & 1) == 0) || ((ulong)*(byte *)((long)param_3 + 0x17) == 0))
     || ((~(-1L << ((ulong)*(byte *)((long)param_3 + 0x17) & 0x3f)) << 1 &
         (*param_2 ^ 0xffffffffffffffff)) == 0)) {
    if (((*(uint *)(param_1 + 0xe0) >> 1 & 1) == 0) && (uVar15 = param_2[-1], uVar15 != 0)) {
      uVar4 = (ulong)*(uint *)(uVar15 + 4) - 0xc;
      if (uVar4 != 0) {
        if ((ulong)(lVar9 - *(long *)(param_1 + 200)) < uVar4) {
          FUN_005cfc78(param_1,uVar4);
          lVar5 = *(long *)(param_1 + 0xd0);
        }
        else {
          lVar5 = (lVar9 - (ulong)*(uint *)(uVar15 + 4)) + 0xc;
          *(long *)(param_1 + 0xd0) = lVar5;
        }
        _memcpy(lVar5,uVar15 + 0xc,uVar4);
      }
    }
    if ((*(char *)((long)param_3 + 0x14) != '\0') &&
       (piVar12 = (int *)param_2[-1], piVar12 != (int *)0x0)) {
      uVar7 = *piVar12 - piVar12[2];
      if (0x17 < uVar7) {
        lVar13 = ((ulong)uVar7 / 0x18) * 0x18;
        lVar5 = (long)piVar12 + (ulong)(uint)piVar12[2] + 8;
        do {
          if (*(char *)((long)param_3 + 0x14) == '\x02') {
            FUN_005cfaf8(param_1);
          }
          else {
            lVar11 = *(long *)(lVar5 + -8);
            if ((*(byte *)(lVar11 + 0xb) & 3) == 0) {
              FUN_005d05e4(param_1,lVar5,lVar11 + 0x18);
            }
            else if ((*(byte *)(lVar11 + 0xb) & 3) == 2) {
              FUN_005d0818(param_1,lVar5 + (ulong)*(ushort *)(lVar11 + 4),lVar11 + 0x18);
            }
            else {
              FUN_005cfdd8(param_1,lVar5,lVar11 + 0x18);
            }
          }
          lVar5 = lVar5 + 0x18;
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != 0);
      }
    }
    uVar15 = (ulong)*(ushort *)((long)param_3 + 0x12);
    if (uVar15 != 0) {
      lVar5 = uVar15 * -0xc;
      piVar12 = (int *)(param_3[1] + uVar15 * 0xc);
      do {
        piVar14 = piVar12 + -3;
        uVar3 = *(ushort *)((long)piVar12 + -6);
        if (uVar3 == 0) {
          pbVar1 = (byte *)((long)param_2 + (ulong)*(ushort *)(piVar12 + -2));
          bVar2 = *(byte *)((long)piVar12 + -1) >> 5;
          if (bVar2 < 3) {
            if (bVar2 == 0) {
              bVar2 = *pbVar1;
              goto joined_r0x005cf9c0;
            }
            if (bVar2 == 1) {
              if (*(int *)pbVar1 != 0) goto LAB_005cf9d0;
              goto LAB_005cf930;
            }
            lVar13 = *(long *)(pbVar1 + 8);
          }
          else {
            lVar13 = *(long *)pbVar1;
          }
          if (lVar13 != 0) goto LAB_005cf9d0;
        }
        else if ((short)uVar3 < 1) {
          if (*(int *)((long)param_2 + ((ulong)uVar3 ^ 0xffff)) == *piVar14) goto LAB_005cf9d0;
        }
        else {
          bVar2 = *(byte *)((long)param_2 + (ulong)(uVar3 >> 3)) >> (ulong)(uVar3 & 7) & 1;
joined_r0x005cf9c0:
          if (bVar2 != 0) {
LAB_005cf9d0:
            uVar10 = *param_3;
            if ((*(byte *)((long)piVar12 + -1) & 3) == 0) {
              FUN_005d05e4(param_1,param_2,uVar10,piVar14);
            }
            else if ((*(byte *)((long)piVar12 + -1) & 3) == 2) {
              FUN_005d0818(param_1,(long)param_2 + (ulong)*(ushort *)(piVar12 + -2),uVar10,piVar14);
            }
            else {
              FUN_005cfdd8(param_1,param_2,uVar10,piVar14);
            }
          }
        }
LAB_005cf930:
        lVar5 = lVar5 + 0xc;
        piVar12 = piVar14;
      } while (lVar5 != 0);
    }
    *param_4 = (lVar9 + *(long *)(param_1 + 0xd8)) - (lVar6 + *(long *)(param_1 + 0xd0));
    return;
  }
  lVar6 = param_1;
  FUN_005cfae8();
  pcStack_58 = FUN_005cfae8;
  plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
  puStack_60 = &stack0xfffffffffffffff0;
  __longjmp();
  pcStack_68 = FUN_005cfaf8;
  lVar9 = *(long *)(lVar6 + 0xd0);
  lStack_80 = param_1;
  plStack_78 = param_4;
  if (lVar9 == *(long *)(lVar6 + 200)) {
    puStack_70 = (undefined1 *)&puStack_60;
    FUN_005cfd38(lVar6,0xc);
  }
  else {
    *(long *)(lVar6 + 0xd0) = lVar9 + -1;
    *(undefined1 *)(lVar9 + -1) = 0xc;
    puStack_70 = (undefined1 *)&puStack_60;
  }
  FUN_005cf82c(lVar6,plVar8[1],*(undefined8 *)(*plVar8 + 0x18),&uStack_88);
  if ((uStack_88 < 0x80) && (lVar9 = *(long *)(lVar6 + 0xd0), lVar9 != *(long *)(lVar6 + 200))) {
    *(long *)(lVar6 + 0xd0) = lVar9 + -1;
    *(char *)(lVar9 + -1) = (char)uStack_88;
    lVar9 = *(long *)(lVar6 + 0xd0);
    if (lVar9 == *(long *)(lVar6 + 200)) goto LAB_005cfb80;
LAB_005cfbb4:
    *(long *)(lVar6 + 0xd0) = lVar9 + -1;
    *(undefined1 *)(lVar9 + -1) = 0x1a;
    uVar7 = *(uint *)*plVar8;
    if (uVar7 < 0x80) goto LAB_005cfbd4;
LAB_005cfc28:
    FUN_005cfd38(lVar6);
    lVar9 = *(long *)(lVar6 + 0xd0);
    if (lVar9 == *(long *)(lVar6 + 200)) {
LAB_005cfbf8:
      FUN_005cfd38(lVar6,0x10);
      lVar9 = *(long *)(lVar6 + 0xd0);
      if (lVar9 == *(long *)(lVar6 + 200)) goto LAB_005cfc10;
      goto LAB_005cfc58;
    }
  }
  else {
    FUN_005cfd38(lVar6);
    lVar9 = *(long *)(lVar6 + 0xd0);
    if (lVar9 != *(long *)(lVar6 + 200)) goto LAB_005cfbb4;
LAB_005cfb80:
    FUN_005cfd38(lVar6,0x1a);
    uVar7 = *(uint *)*plVar8;
    if (0x7f < uVar7) goto LAB_005cfc28;
LAB_005cfbd4:
    lVar9 = *(long *)(lVar6 + 0xd0);
    if (lVar9 == *(long *)(lVar6 + 200)) goto LAB_005cfc28;
    *(long *)(lVar6 + 0xd0) = lVar9 + -1;
    *(char *)(lVar9 + -1) = (char)uVar7;
    lVar9 = *(long *)(lVar6 + 0xd0);
    if (lVar9 == *(long *)(lVar6 + 200)) goto LAB_005cfbf8;
  }
  *(long *)(lVar6 + 0xd0) = lVar9 + -1;
  *(undefined1 *)(lVar9 + -1) = 0x10;
  lVar9 = *(long *)(lVar6 + 0xd0);
  if (lVar9 == *(long *)(lVar6 + 200)) {
LAB_005cfc10:
    if ((ulong)(*(long *)(lVar6 + 0xd0) - *(long *)(lVar6 + 200)) < 10) {
      FUN_005cfc78(lVar6,10);
      lVar9 = *(long *)(lVar6 + 0xd0);
    }
    else {
      lVar9 = *(long *)(lVar6 + 0xd0) + -10;
      *(long *)(lVar6 + 0xd0) = lVar9;
    }
    lVar5 = 0xb;
    FUN_005cfda8(0xb,lVar9);
    lVar9 = (*(long *)(lVar6 + 0xd0) - lVar5) + 10;
    _memmove(lVar9,*(long *)(lVar6 + 0xd0),lVar5);
    *(long *)(lVar6 + 0xd0) = lVar9;
    return;
  }
LAB_005cfc58:
  *(long *)(lVar6 + 0xd0) = lVar9 + -1;
  *(undefined1 *)(lVar9 + -1) = 0xb;
  return;
}



/* Entry: 005cfae8; end: 005cfaf7;  */

void FUN_005cfae8(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_38;
  
  plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
  __longjmp();
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 == *(long *)(param_1 + 200)) {
    FUN_005cfd38(param_1,0xc);
  }
  else {
    *(long *)(param_1 + 0xd0) = lVar4 + -1;
    *(undefined1 *)(lVar4 + -1) = 0xc;
  }
  FUN_005cf82c(param_1,plVar3[1],*(undefined8 *)(*plVar3 + 0x18),&uStack_38);
  if ((uStack_38 < 0x80) && (lVar4 = *(long *)(param_1 + 0xd0), lVar4 != *(long *)(param_1 + 200)))
  {
    *(long *)(param_1 + 0xd0) = lVar4 + -1;
    *(char *)(lVar4 + -1) = (char)uStack_38;
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 != *(long *)(param_1 + 200)) goto LAB_005cfbb4;
LAB_005cfb80:
    FUN_005cfd38(param_1,0x1a);
    uVar2 = *(uint *)*plVar3;
    if (uVar2 < 0x80) goto LAB_005cfbd4;
LAB_005cfc28:
    FUN_005cfd38(param_1);
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == *(long *)(param_1 + 200)) {
LAB_005cfbf8:
      FUN_005cfd38(param_1,0x10);
      lVar4 = *(long *)(param_1 + 0xd0);
      if (lVar4 == *(long *)(param_1 + 200)) goto code_r0x005cfd38;
      goto LAB_005cfc58;
    }
  }
  else {
    FUN_005cfd38(param_1);
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == *(long *)(param_1 + 200)) goto LAB_005cfb80;
LAB_005cfbb4:
    *(long *)(param_1 + 0xd0) = lVar4 + -1;
    *(undefined1 *)(lVar4 + -1) = 0x1a;
    uVar2 = *(uint *)*plVar3;
    if (0x7f < uVar2) goto LAB_005cfc28;
LAB_005cfbd4:
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == *(long *)(param_1 + 200)) goto LAB_005cfc28;
    *(long *)(param_1 + 0xd0) = lVar4 + -1;
    *(char *)(lVar4 + -1) = (char)uVar2;
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == *(long *)(param_1 + 200)) goto LAB_005cfbf8;
  }
  *(long *)(param_1 + 0xd0) = lVar4 + -1;
  *(undefined1 *)(lVar4 + -1) = 0x10;
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 == *(long *)(param_1 + 200)) {
code_r0x005cfd38:
    if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
      FUN_005cfc78(param_1,10);
      lVar4 = *(long *)(param_1 + 0xd0);
    }
    else {
      lVar4 = *(long *)(param_1 + 0xd0) + -10;
      *(long *)(param_1 + 0xd0) = lVar4;
    }
    lVar1 = 0xb;
    FUN_005cfda8(0xb,lVar4);
    lVar4 = (*(long *)(param_1 + 0xd0) - lVar1) + 10;
    _memmove(lVar4,*(long *)(param_1 + 0xd0),lVar1);
    *(long *)(param_1 + 0xd0) = lVar4;
    return;
  }
LAB_005cfc58:
  *(long *)(param_1 + 0xd0) = lVar4 + -1;
  *(undefined1 *)(lVar4 + -1) = 0xb;
  return;
}



/* Entry: 005cfaf8; end: 005cfc77;  */

void FUN_005cfaf8(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == *(long *)(param_1 + 200)) {
    FUN_005cfd38(param_1,0xc);
  }
  else {
    *(long *)(param_1 + 0xd0) = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = 0xc;
  }
  FUN_005cf82c(param_1,param_2[1],*(undefined8 *)(*param_2 + 0x18),&uStack_28);
  if ((uStack_28 < 0x80) && (lVar3 = *(long *)(param_1 + 0xd0), lVar3 != *(long *)(param_1 + 200)))
  {
    *(long *)(param_1 + 0xd0) = lVar3 + -1;
    *(char *)(lVar3 + -1) = (char)uStack_28;
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 != *(long *)(param_1 + 200)) goto LAB_005cfbb4;
LAB_005cfb80:
    FUN_005cfd38(param_1,0x1a);
    uVar2 = *(uint *)*param_2;
    if (uVar2 < 0x80) goto LAB_005cfbd4;
LAB_005cfc28:
    FUN_005cfd38(param_1);
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == *(long *)(param_1 + 200)) {
LAB_005cfbf8:
      FUN_005cfd38(param_1,0x10);
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 == *(long *)(param_1 + 200)) goto code_r0x005cfd38;
      goto LAB_005cfc58;
    }
  }
  else {
    FUN_005cfd38(param_1);
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == *(long *)(param_1 + 200)) goto LAB_005cfb80;
LAB_005cfbb4:
    *(long *)(param_1 + 0xd0) = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = 0x1a;
    uVar2 = *(uint *)*param_2;
    if (0x7f < uVar2) goto LAB_005cfc28;
LAB_005cfbd4:
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == *(long *)(param_1 + 200)) goto LAB_005cfc28;
    *(long *)(param_1 + 0xd0) = lVar3 + -1;
    *(char *)(lVar3 + -1) = (char)uVar2;
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == *(long *)(param_1 + 200)) goto LAB_005cfbf8;
  }
  *(long *)(param_1 + 0xd0) = lVar3 + -1;
  *(undefined1 *)(lVar3 + -1) = 0x10;
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == *(long *)(param_1 + 200)) {
code_r0x005cfd38:
    if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
      FUN_005cfc78(param_1,10);
      lVar3 = *(long *)(param_1 + 0xd0);
    }
    else {
      lVar3 = *(long *)(param_1 + 0xd0) + -10;
      *(long *)(param_1 + 0xd0) = lVar3;
    }
    lVar1 = 0xb;
    FUN_005cfda8(0xb,lVar3);
    lVar3 = (*(long *)(param_1 + 0xd0) - lVar1) + 10;
    _memmove(lVar3,*(long *)(param_1 + 0xd0),lVar1);
    *(long *)(param_1 + 0xd0) = lVar3;
    return;
  }
LAB_005cfc58:
  *(long *)(param_1 + 0xd0) = lVar3 + -1;
  *(undefined1 *)(lVar3 + -1) = 0xb;
  return;
}



/* Entry: 005cfc78; end: 005cfd37;  */

void FUN_005cfc78(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0xd8);
  lVar6 = *(long *)(param_1 + 200);
  uVar1 = 0x80;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 << 1;
  } while (uVar5 < (ulong)((param_2 + lVar4) - *(long *)(param_1 + 0xd0)));
  lVar7 = lVar4 - lVar6;
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  lVar3 = lVar6;
  (*(code *)*puVar2)(puVar2,lVar6,lVar7,uVar5);
  if (puVar2 != (undefined8 *)0x0) {
    if (lVar4 != lVar6) {
      _memmove((long)puVar2 + (uVar5 - lVar7),*(undefined8 *)(param_1 + 200),lVar7);
    }
    lVar4 = *(long *)(param_1 + 0xd8);
    *(ulong *)(param_1 + 0xd8) = (long)puVar2 + uVar5;
    *(undefined8 **)(param_1 + 200) = puVar2;
    *(ulong *)(param_1 + 0xd0) =
         ((long)puVar2 + uVar5 + (*(long *)(param_1 + 0xd0) - lVar4)) - param_2;
    return;
  }
  FUN_005cfae8();
  if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
    FUN_005cfc78(param_1,10);
    lVar4 = *(long *)(param_1 + 0xd0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xd0) + -10;
    *(long *)(param_1 + 0xd0) = lVar4;
  }
  FUN_005cfda8(lVar3,lVar4);
  lVar4 = (*(long *)(param_1 + 0xd0) - lVar3) + 10;
  _memmove(lVar4,*(long *)(param_1 + 0xd0),lVar3);
  *(long *)(param_1 + 0xd0) = lVar4;
  return;
}



/* Entry: 005cfd38; end: 005cfda7;  */

void FUN_005cfd38(long param_1,long param_2)

{
  long lVar1;
  
  if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
    FUN_005cfc78(param_1,10);
    lVar1 = *(long *)(param_1 + 0xd0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0xd0) + -10;
    *(long *)(param_1 + 0xd0) = lVar1;
  }
  FUN_005cfda8(param_2,lVar1);
  lVar1 = (*(long *)(param_1 + 0xd0) - param_2) + 10;
  _memmove(lVar1,*(long *)(param_1 + 0xd0),param_2);
  *(long *)(param_1 + 0xd0) = lVar1;
  return;
}



/* Entry: 005cfda8; end: 005cfdd7;  */

long FUN_005cfda8(ulong param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = 0;
  do {
    bVar3 = 0;
    if (0x7f < param_1) {
      bVar3 = 0x80;
    }
    *(byte *)(param_2 + lVar2) = bVar3 | (byte)param_1 & 0x7f;
    lVar2 = lVar2 + 1;
    bVar1 = 0x7f < param_1;
    param_1 = param_1 >> 7;
  } while (bVar1);
  return lVar2;
}



/* Entry: 005cfdd8; end: 005d05e3;  */

void FUN_005cfdd8(long param_1,long param_2,long param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auStack_100 [8];
  uint *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_58;
  
  puVar8 = *(ulong **)(param_2 + (ulong)*(ushort *)(param_4 + 1));
  if (puVar8 == (ulong *)0x0) {
    return;
  }
  uVar14 = puVar8[1];
  if (uVar14 == 0) {
    return;
  }
  bVar2 = *(byte *)((long)param_4 + 0xb);
  lVar4 = *(long *)(param_1 + 0xd0);
  lVar9 = *(long *)(param_1 + 0xd8);
  switch(*(undefined1 *)((long)param_4 + 10)) {
  case 1:
  case 6:
  case 0x10:
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3 | 1;
    }
    else {
      uVar12 = 0;
    }
    uVar10 = *puVar8;
    uVar7 = 8;
    goto code_r0x005cfff0;
  case 2:
  case 7:
  case 0xf:
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3 | 5;
    }
    else {
      uVar12 = 0;
    }
    uVar10 = *puVar8;
    uVar7 = 4;
code_r0x005cfff0:
    FUN_005d0ba8(param_1,uVar10,uVar14,uVar7,uVar12);
    break;
  case 3:
  case 4:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    lVar17 = uVar14 << 3;
    do {
      uVar14 = *(ulong *)(((uVar10 & 0xfffffffffffffff8) - 8) + lVar17);
      if ((uVar14 < 0x80) &&
         (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
        *(long *)(param_1 + 0xd0) = lVar11 + -1;
        *(char *)(lVar11 + -1) = (char)uVar14;
      }
      else {
        FUN_005cfd38(param_1);
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar11 + -1;
          *(char *)(lVar11 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
    break;
  case 5:
  case 0xe:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    lVar17 = uVar14 << 2;
    do {
      uVar1 = *(uint *)(((uVar10 & 0xfffffffffffffff8) - 4) + lVar17);
      if ((uVar1 < 0x80) && (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))
         ) {
        *(long *)(param_1 + 0xd0) = lVar11 + -1;
        *(char *)(lVar11 + -1) = (char)uVar1;
      }
      else {
        FUN_005cfd38(param_1);
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar11 + -1;
          *(char *)(lVar11 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      lVar17 = lVar17 + -4;
    } while (lVar17 != 0);
    break;
  case 8:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    do {
      uVar3 = *(undefined1 *)(((uVar10 & 0xfffffffffffffff8) - 1) + uVar14);
      lVar17 = *(long *)(param_1 + 0xd0);
      if (lVar17 == *(long *)(param_1 + 200)) {
        FUN_005cfd38(param_1);
      }
      else {
        *(long *)(param_1 + 0xd0) = lVar17 + -1;
        *(undefined1 *)(lVar17 + -1) = uVar3;
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar17 = *(long *)(param_1 + 0xd0), lVar17 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar17 + -1;
          *(char *)(lVar17 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    break;
  case 9:
  case 0xc:
    puVar8 = (ulong *)(uVar14 * 0x10 + (*puVar8 & 0xfffffffffffffff8) + -8);
    lVar4 = uVar14 * -0x10;
    do {
      while( true ) {
        uVar14 = *puVar8;
        lVar9 = *(long *)(param_1 + 0xd0);
        if (uVar14 != 0) break;
        uVar3 = 0;
        if (lVar9 == *(long *)(param_1 + 200)) goto code_r0x005cff4c;
code_r0x005cff24:
        *(long *)(param_1 + 0xd0) = lVar9 + -1;
        *(undefined1 *)(lVar9 + -1) = uVar3;
        bVar2 = (byte)(*param_4 << 3);
        if ((uint)(*param_4 << 3) < 0x80) goto code_r0x005cff6c;
code_r0x005cfe84:
        FUN_005cfd38(param_1);
        puVar8 = puVar8 + -2;
        lVar4 = lVar4 + 0x10;
        if (lVar4 == 0) {
          return;
        }
      }
      uVar10 = puVar8[-1];
      if ((ulong)(lVar9 - *(long *)(param_1 + 200)) < uVar14) {
        FUN_005cfc78(param_1,uVar14);
        _memcpy(*(undefined8 *)(param_1 + 0xd0),uVar10,uVar14);
        uVar14 = *puVar8;
      }
      else {
        *(ulong *)(param_1 + 0xd0) = lVar9 - uVar14;
        _memcpy(lVar9 - uVar14,uVar10,uVar14);
        uVar14 = *puVar8;
      }
      if (uVar14 < 0x80) {
        uVar3 = (undefined1)uVar14;
        lVar9 = *(long *)(param_1 + 0xd0);
        if (lVar9 != *(long *)(param_1 + 200)) goto code_r0x005cff24;
      }
code_r0x005cff4c:
      FUN_005cfd38(param_1);
      bVar2 = (byte)(*param_4 << 3);
      if (0x7f < (uint)(*param_4 << 3)) goto code_r0x005cfe84;
code_r0x005cff6c:
      lVar9 = *(long *)(param_1 + 0xd0);
      if (lVar9 == *(long *)(param_1 + 200)) goto code_r0x005cfe84;
      *(long *)(param_1 + 0xd0) = lVar9 + -1;
      *(byte *)(lVar9 + -1) = bVar2 | 2;
      puVar8 = puVar8 + -2;
      lVar4 = lVar4 + 0x10;
      if (lVar4 == 0) {
        return;
      }
    } while( true );
  case 10:
    uVar10 = *puVar8;
    uVar7 = *(undefined8 *)(param_3 + (ulong)*(ushort *)(param_4 + 2) * 8);
    iVar16 = *(int *)(param_1 + 0xe4) + -1;
    *(int *)(param_1 + 0xe4) = iVar16;
    if (iVar16 == 0) {
code_r0x005d05dc:
      FUN_005cfae8();
      pcVar15 = *(char **)(param_2 + (ulong)*(ushort *)(param_4 + 1));
      if (pcVar15 != (char *)0x0) {
        lVar4 = *(long *)(param_3 + (ulong)*(ushort *)(param_4 + 2) * 8);
        if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
          if ((byte)pcVar15[0x18] != 0) {
            lVar9 = 1;
            uVar14 = (ulong)(1 << (ulong)((byte)pcVar15[0x18] & 0x1f));
            plVar13 = *(long **)(pcVar15 + 0x20);
            do {
              if (uVar14 + lVar9 == 1) {
                return;
              }
              lVar17 = *plVar13;
              lVar9 = lVar9 + -1;
              plVar13 = plVar13 + 3;
            } while (lVar17 == 0);
            uVar10 = -lVar9;
            if (uVar10 < uVar14) {
              while( true ) {
                puVar5 = *(uint **)(*(long *)(pcVar15 + 0x20) + uVar10 * 0x18);
                if (puVar5 == (uint *)0x0) break;
                puVar6 = puVar5 + 1;
                puVar18 = *(undefined8 **)(*(long *)(pcVar15 + 0x20) + uVar10 * 0x18 + 8);
                if ((long)*pcVar15 == 0) {
                  lVar9 = (long)pcVar15[1];
                  puStack_f8 = puVar6;
                  uStack_f0 = (ulong)*puVar5;
                  if (lVar9 == 0) goto LAB_005d06d8;
LAB_005d06b4:
                  uStack_d8 = puVar18;
                  ___memcpy_chk(&uStack_e8,&uStack_d8,lVar9,0x10);
                }
                else {
                  ___memcpy_chk(&puStack_f8,puVar6,(long)*pcVar15,0x20);
                  lVar9 = (long)pcVar15[1];
                  if (lVar9 != 0) goto LAB_005d06b4;
LAB_005d06d8:
                  uStack_e0 = puVar18[1];
                  uStack_e8 = *puVar18;
                  uStack_d8 = puVar18;
                }
                FUN_005d0e78(param_1,*param_4,lVar4,auStack_100);
                if ((byte)pcVar15[0x18] == 0) {
                  return;
                }
                lVar9 = uVar10 * 0x18;
                do {
                  lVar9 = lVar9 + 0x18;
                  uVar10 = uVar10 + 1;
                  if ((ulong)(long)(1 << (ulong)((byte)pcVar15[0x18] & 0x1f)) <= uVar10) {
                    return;
                  }
                } while (*(long *)(*(long *)(pcVar15 + 0x20) + lVar9) == 0);
              }
            }
          }
        }
        else {
          FUN_005d1460(param_1 + 0xe8,*(undefined1 *)(*(long *)(lVar4 + 8) + 10),pcVar15,&uStack_d8)
          ;
          if (iStack_d0 != uStack_d8._4_4_) {
            lVar9 = (long)uStack_d8._4_4_ << 3;
            iVar16 = iStack_d0 - uStack_d8._4_4_;
            do {
              puVar18 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar9);
              puVar5 = (uint *)*puVar18 + 1;
              if ((long)*pcVar15 == 0) {
                uStack_f0 = (ulong)*(uint *)*puVar18;
                puStack_c8 = (undefined8 *)puVar18[1];
                lVar17 = (long)pcVar15[1];
                puStack_f8 = puVar5;
                if (lVar17 != 0) goto LAB_005d078c;
LAB_005d080c:
                uStack_e0 = puStack_c8[1];
                uStack_e8 = *puStack_c8;
              }
              else {
                ___memcpy_chk(&puStack_f8,puVar5,(long)*pcVar15,0x20);
                puStack_c8 = (undefined8 *)puVar18[1];
                lVar17 = (long)pcVar15[1];
                if (lVar17 == 0) goto LAB_005d080c;
LAB_005d078c:
                ___memcpy_chk(&uStack_e8,&puStack_c8,lVar17,0x10);
              }
              FUN_005d0e78(param_1,*param_4,lVar4,auStack_100);
              lVar9 = lVar9 + 8;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_d8;
        }
      }
      return;
    }
    lVar4 = uVar14 << 3;
    do {
      while( true ) {
        iVar16 = *param_4;
        if (((uint)(iVar16 << 3) < 0x80) &&
           (lVar9 = *(long *)(param_1 + 0xd0), lVar9 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar9 + -1;
          *(byte *)(lVar9 + -1) = (byte)(iVar16 << 3) | 4;
        }
        else {
          FUN_005cfd38(param_1);
        }
        FUN_005cf82c(param_1,*(undefined8 *)(((uVar10 & 0xfffffffffffffff8) - 8) + lVar4),uVar7,
                     &uStack_58);
        iVar16 = *param_4;
        if ((0x7f < (uint)(iVar16 << 3)) ||
           (lVar9 = *(long *)(param_1 + 0xd0), lVar9 == *(long *)(param_1 + 200))) break;
        *(long *)(param_1 + 0xd0) = lVar9 + -1;
        *(byte *)(lVar9 + -1) = (byte)(iVar16 << 3) | 3;
        lVar4 = lVar4 + -8;
        if (lVar4 == 0) goto code_r0x005d0388;
      }
      FUN_005cfd38(param_1);
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    goto code_r0x005d0388;
  case 0xb:
    uVar10 = *puVar8;
    uVar7 = *(undefined8 *)(param_3 + (ulong)*(ushort *)(param_4 + 2) * 8);
    iVar16 = *(int *)(param_1 + 0xe4) + -1;
    *(int *)(param_1 + 0xe4) = iVar16;
    if (iVar16 == 0) goto code_r0x005d05dc;
    lVar4 = uVar14 << 3;
    do {
      while( true ) {
        FUN_005cf82c(param_1,*(undefined8 *)(((uVar10 & 0xfffffffffffffff8) - 8) + lVar4),uVar7,
                     &uStack_58);
        if ((uStack_58 < 0x80) &&
           (lVar9 = *(long *)(param_1 + 0xd0), lVar9 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar9 + -1;
          *(char *)(lVar9 + -1) = (char)uStack_58;
          iVar16 = *param_4;
          bVar2 = (byte)(iVar16 << 3);
        }
        else {
          FUN_005cfd38(param_1);
          iVar16 = *param_4;
          bVar2 = (byte)(iVar16 << 3);
        }
        if ((uint)(iVar16 << 3) < 0x80) break;
code_r0x005d00e4:
        FUN_005cfd38(param_1);
        lVar4 = lVar4 + -8;
        if (lVar4 == 0) goto code_r0x005d0388;
      }
      lVar9 = *(long *)(param_1 + 0xd0);
      if (lVar9 == *(long *)(param_1 + 200)) goto code_r0x005d00e4;
      *(long *)(param_1 + 0xd0) = lVar9 + -1;
      *(byte *)(lVar9 + -1) = bVar2 | 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
code_r0x005d0388:
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    return;
  case 0xd:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    lVar17 = uVar14 << 2;
    do {
      uVar1 = *(uint *)(((uVar10 & 0xfffffffffffffff8) - 4) + lVar17);
      if ((uVar1 < 0x80) && (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))
         ) {
        *(long *)(param_1 + 0xd0) = lVar11 + -1;
        *(char *)(lVar11 + -1) = (char)uVar1;
      }
      else {
        FUN_005cfd38(param_1);
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar11 + -1;
          *(char *)(lVar11 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      lVar17 = lVar17 + -4;
    } while (lVar17 != 0);
    break;
  case 0x11:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    lVar17 = uVar14 << 2;
    do {
      iVar16 = *(int *)(((uVar10 & 0xfffffffffffffff8) - 4) + lVar17);
      uVar1 = iVar16 << 1 ^ iVar16 >> 0x1f;
      if ((uVar1 < 0x80) && (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))
         ) {
        *(long *)(param_1 + 0xd0) = lVar11 + -1;
        *(char *)(lVar11 + -1) = (char)uVar1;
      }
      else {
        FUN_005cfd38(param_1);
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar11 + -1;
          *(char *)(lVar11 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      lVar17 = lVar17 + -4;
    } while (lVar17 != 0);
    break;
  case 0x12:
    uVar10 = *puVar8;
    if ((bVar2 >> 2 & 1) == 0) {
      uVar12 = *param_4 << 3;
    }
    else {
      uVar12 = 0;
    }
    lVar17 = uVar14 << 3;
    do {
      lVar11 = *(long *)(((uVar10 & 0xfffffffffffffff8) - 8) + lVar17);
      uVar14 = lVar11 << 1 ^ lVar11 >> 0x3f;
      if ((uVar14 < 0x80) &&
         (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
        *(long *)(param_1 + 0xd0) = lVar11 + -1;
        *(char *)(lVar11 + -1) = (char)uVar14;
      }
      else {
        FUN_005cfd38(param_1);
      }
      if (uVar12 != 0) {
        if ((uVar12 < 0x80) &&
           (lVar11 = *(long *)(param_1 + 0xd0), lVar11 != *(long *)(param_1 + 200))) {
          *(long *)(param_1 + 0xd0) = lVar11 + -1;
          *(char *)(lVar11 + -1) = (char)uVar12;
        }
        else {
          FUN_005cfd38(param_1,uVar12);
        }
      }
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0xd0);
    uVar14 = (*(long *)(param_1 + 0xd8) - lVar17) + (lVar4 - lVar9);
    if ((uVar14 < 0x80) && (lVar17 != *(long *)(param_1 + 200))) {
      *(long *)(param_1 + 0xd0) = lVar17 + -1;
      *(char *)(lVar17 + -1) = (char)uVar14;
      iVar16 = *param_4;
    }
    else {
      FUN_005cfd38(param_1);
      iVar16 = *param_4;
    }
    uVar12 = iVar16 << 3 | 2;
    uVar14 = (ulong)uVar12;
    if ((0x7f < (uint)(iVar16 << 3)) ||
       (lVar4 = *(long *)(param_1 + 0xd0), lVar4 == *(long *)(param_1 + 200))) {
      if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
        FUN_005cfc78(param_1,10);
        lVar4 = *(long *)(param_1 + 0xd0);
      }
      else {
        lVar4 = *(long *)(param_1 + 0xd0) + -10;
        *(long *)(param_1 + 0xd0) = lVar4;
      }
      FUN_005cfda8(uVar14,lVar4);
      lVar4 = (*(long *)(param_1 + 0xd0) - uVar14) + 10;
      _memmove(lVar4,*(long *)(param_1 + 0xd0),uVar14);
      *(long *)(param_1 + 0xd0) = lVar4;
      return;
    }
    *(long *)(param_1 + 0xd0) = lVar4 + -1;
    *(char *)(lVar4 + -1) = (char)uVar12;
  }
  return;
}



/* Entry: 005d05e4; end: 005d0817;  */

void FUN_005d05e4(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_a0 [8];
  uint *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  
  pcVar7 = *(char **)(param_2 + (ulong)*(ushort *)(param_4 + 1));
  if (pcVar7 != (char *)0x0) {
    lVar8 = *(long *)(param_3 + (ulong)*(ushort *)(param_4 + 2) * 8);
    if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
      if ((byte)pcVar7[0x18] != 0) {
        lVar3 = 1;
        uVar4 = (ulong)(1 << (ulong)((byte)pcVar7[0x18] & 0x1f));
        plVar5 = *(long **)(pcVar7 + 0x20);
        do {
          if (uVar4 + lVar3 == 1) {
            return;
          }
          lVar6 = *plVar5;
          lVar3 = lVar3 + -1;
          plVar5 = plVar5 + 3;
        } while (lVar6 == 0);
        uVar9 = -lVar3;
        if (uVar9 < uVar4) {
          while( true ) {
            puVar1 = *(uint **)(*(long *)(pcVar7 + 0x20) + uVar9 * 0x18);
            if (puVar1 == (uint *)0x0) break;
            puVar2 = puVar1 + 1;
            puVar11 = *(undefined8 **)(*(long *)(pcVar7 + 0x20) + uVar9 * 0x18 + 8);
            if ((long)*pcVar7 == 0) {
              lVar3 = (long)pcVar7[1];
              puStack_98 = puVar2;
              uStack_90 = (ulong)*puVar1;
              if (lVar3 == 0) goto LAB_005d06d8;
LAB_005d06b4:
              uStack_78 = puVar11;
              ___memcpy_chk(&uStack_88,&uStack_78,lVar3,0x10);
            }
            else {
              ___memcpy_chk(&puStack_98,puVar2,(long)*pcVar7,0x20);
              lVar3 = (long)pcVar7[1];
              if (lVar3 != 0) goto LAB_005d06b4;
LAB_005d06d8:
              uStack_80 = puVar11[1];
              uStack_88 = *puVar11;
              uStack_78 = puVar11;
            }
            FUN_005d0e78(param_1,*param_4,lVar8,auStack_a0);
            if ((byte)pcVar7[0x18] == 0) {
              return;
            }
            lVar3 = uVar9 * 0x18;
            do {
              lVar3 = lVar3 + 0x18;
              uVar9 = uVar9 + 1;
              if ((ulong)(long)(1 << (ulong)((byte)pcVar7[0x18] & 0x1f)) <= uVar9) {
                return;
              }
            } while (*(long *)(*(long *)(pcVar7 + 0x20) + lVar3) == 0);
          }
        }
      }
    }
    else {
      FUN_005d1460(param_1 + 0xe8,*(undefined1 *)(*(long *)(lVar8 + 8) + 10),pcVar7,&uStack_78);
      if (iStack_70 != uStack_78._4_4_) {
        lVar3 = (long)uStack_78._4_4_ << 3;
        iVar10 = iStack_70 - uStack_78._4_4_;
        do {
          puVar11 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar3);
          puVar1 = (uint *)*puVar11 + 1;
          if ((long)*pcVar7 == 0) {
            uStack_90 = (ulong)*(uint *)*puVar11;
            puStack_68 = (undefined8 *)puVar11[1];
            lVar6 = (long)pcVar7[1];
            puStack_98 = puVar1;
            if (lVar6 != 0) goto LAB_005d078c;
LAB_005d080c:
            uStack_80 = puStack_68[1];
            uStack_88 = *puStack_68;
          }
          else {
            ___memcpy_chk(&puStack_98,puVar1,(long)*pcVar7,0x20);
            puStack_68 = (undefined8 *)puVar11[1];
            lVar6 = (long)pcVar7[1];
            if (lVar6 == 0) goto LAB_005d080c;
LAB_005d078c:
            ___memcpy_chk(&uStack_88,&puStack_68,lVar6,0x10);
          }
          FUN_005d0e78(param_1,*param_4,lVar8,auStack_a0);
          lVar3 = lVar3 + 8;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_78;
    }
  }
  return;
}



/* Entry: 005d0818; end: 005d0ba7;  */

void FUN_005d0818(void)

{
  long in_x3;
  
                    /* WARNING: Could not emulate address calculation at 0x005d0848 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00817eea)[*(byte *)(in_x3 + 10) - 1] * 4 + 0x5d0854))();
  return;
}



/* Entry: 005d0ba8; end: 005d0e77;  */

void FUN_005d0ba8(long param_1,ulong param_2,long param_3,ulong param_4,uint param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uStack_58;
  
  param_2 = param_2 & 0xfffffffffffffff8;
  if (param_5 == 0) {
    param_4 = param_4 * param_3;
    if (param_4 != 0) {
      if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < param_4) {
        FUN_005cfc78(param_1,param_4);
        lVar4 = *(long *)(param_1 + 0xd0);
      }
      else {
        lVar4 = *(long *)(param_1 + 0xd0) - param_4;
        *(long *)(param_1 + 0xd0) = lVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)(lVar4,param_2,param_4);
      return;
    }
  }
  else if (param_4 == 4) {
    if (param_5 < 0x80) {
      lVar4 = 0;
      do {
        while( true ) {
          uVar1 = *(undefined4 *)(param_2 + (param_3 + -1) * 4 + lVar4);
          if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 4) break;
          puVar3 = (undefined4 *)(*(long *)(param_1 + 0xd0) + -4);
          *(undefined4 **)(param_1 + 0xd0) = puVar3;
          *puVar3 = uVar1;
          lVar2 = *(long *)(param_1 + 0xd0);
          if (lVar2 != *(long *)(param_1 + 200)) goto LAB_005d0c68;
LAB_005d0c00:
          FUN_005cfd38(param_1,param_5);
          lVar4 = lVar4 + -4;
          if (-lVar4 == param_3 * 4) {
            return;
          }
        }
        FUN_005cfc78(param_1,4);
        **(undefined4 **)(param_1 + 0xd0) = uVar1;
        lVar2 = *(long *)(param_1 + 0xd0);
        if (lVar2 == *(long *)(param_1 + 200)) goto LAB_005d0c00;
LAB_005d0c68:
        *(long *)(param_1 + 0xd0) = lVar2 + -1;
        *(char *)(lVar2 + -1) = (char)param_5;
        lVar4 = lVar4 + -4;
      } while (-lVar4 != param_3 * 4);
    }
    else {
      lVar4 = 0;
      do {
        uVar1 = *(undefined4 *)(param_2 + (param_3 + -1) * 4 + lVar4);
        if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 4) {
          FUN_005cfc78(param_1,4);
          puVar3 = *(undefined4 **)(param_1 + 0xd0);
        }
        else {
          puVar3 = (undefined4 *)(*(long *)(param_1 + 0xd0) + -4);
          *(undefined4 **)(param_1 + 0xd0) = puVar3;
        }
        *puVar3 = uVar1;
        FUN_005cfd38(param_1,param_5);
        lVar4 = lVar4 + -4;
      } while (-lVar4 != param_3 * 4);
    }
  }
  else if (param_5 < 0x80) {
    lVar4 = 0;
    do {
      while( true ) {
        uStack_58 = *(undefined8 *)(param_2 + param_4 * (param_3 + -1) + lVar4);
        if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < param_4) break;
        lVar2 = *(long *)(param_1 + 0xd0) + -param_4;
        *(long *)(param_1 + 0xd0) = lVar2;
        _memcpy(lVar2,&uStack_58,param_4);
        lVar2 = *(long *)(param_1 + 0xd0);
        if (lVar2 != *(long *)(param_1 + 200)) goto LAB_005d0d4c;
LAB_005d0cd0:
        FUN_005cfd38(param_1,param_5);
        lVar4 = lVar4 - param_4;
        if (-lVar4 == param_4 * param_3) {
          return;
        }
      }
      FUN_005cfc78(param_1,param_4);
      _memcpy(*(undefined8 *)(param_1 + 0xd0),&uStack_58,param_4);
      lVar2 = *(long *)(param_1 + 0xd0);
      if (lVar2 == *(long *)(param_1 + 200)) goto LAB_005d0cd0;
LAB_005d0d4c:
      *(long *)(param_1 + 0xd0) = lVar2 + -1;
      *(char *)(lVar2 + -1) = (char)param_5;
      lVar4 = lVar4 - param_4;
    } while (-lVar4 != param_4 * param_3);
  }
  else {
    lVar4 = 0;
    do {
      uStack_58 = *(undefined8 *)(param_2 + param_4 * (param_3 + -1) + lVar4);
      if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < param_4) {
        FUN_005cfc78(param_1,param_4);
        lVar2 = *(long *)(param_1 + 0xd0);
      }
      else {
        lVar2 = *(long *)(param_1 + 0xd0) + -param_4;
        *(long *)(param_1 + 0xd0) = lVar2;
      }
      _memcpy(lVar2,&uStack_58,param_4);
      FUN_005cfd38(param_1,param_5);
      lVar4 = lVar4 - param_4;
    } while (-lVar4 != param_4 * param_3);
  }
  return;
}



/* Entry: 005d0e78; end: 005d0f6b;  */

void FUN_005d0e78(long param_1,int param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xd0);
  lVar2 = *(long *)(param_1 + 0xd8);
  lVar3 = param_3[1];
  FUN_005d0818(param_1,param_4 + 0x18,*param_3,lVar3 + 0xc);
  FUN_005d0818(param_1,param_4 + 8,*param_3,lVar3);
  lVar3 = *(long *)(param_1 + 0xd0);
  uVar4 = (*(long *)(param_1 + 0xd8) - lVar3) + (lVar5 - lVar2);
  if ((uVar4 < 0x80) && (lVar3 != *(long *)(param_1 + 200))) {
    *(long *)(param_1 + 0xd0) = lVar3 + -1;
    *(char *)(lVar3 + -1) = (char)uVar4;
  }
  else {
    FUN_005cfd38(param_1);
  }
  uVar1 = param_2 << 3 | 2;
  uVar4 = (ulong)uVar1;
  if (((uint)(param_2 << 3) < 0x80) &&
     (lVar5 = *(long *)(param_1 + 0xd0), lVar5 != *(long *)(param_1 + 200))) {
    *(long *)(param_1 + 0xd0) = lVar5 + -1;
    *(char *)(lVar5 + -1) = (char)uVar1;
    return;
  }
  if ((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) < 10) {
    FUN_005cfc78(param_1,10);
    lVar5 = *(long *)(param_1 + 0xd0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0xd0) + -10;
    *(long *)(param_1 + 0xd0) = lVar5;
  }
  FUN_005cfda8(uVar4,lVar5);
  lVar5 = (*(long *)(param_1 + 0xd0) - uVar4) + 10;
  _memmove(lVar5,*(long *)(param_1 + 0xd0),uVar4);
  *(long *)(param_1 + 0xd0) = lVar5;
  return;
}



/* Entry: 005d0f6c; end: 005d0fdf;  */

long FUN_005d0f6c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(*(ushort *)(param_1 + 0x10) + 0x17) & 0x1fff0;
  lVar1 = *(long *)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x10) - lVar1) < uVar2) {
    FUN_005d1df0(param_2,uVar2);
    lVar1 = param_2;
  }
  else {
    *(ulong *)(param_2 + 8) = lVar1 + uVar2;
  }
  if (lVar1 != 0) {
    _bzero();
    return lVar1 + 8;
  }
  return 0;
}



/* Entry: 005d0fe0; end: 005d11c7;  */

undefined8 FUN_005d0fe0(long param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar7 = *(uint **)(param_1 + -8);
  iVar8 = (int)param_2;
  if (puVar7 == (uint *)0x0) {
    uVar1 = 1 << (ulong)(-(int)LZCOUNT(iVar8 + 0xb) & 0x1f);
    if ((int)uVar1 < 0x81) {
      uVar1 = 0x80;
    }
    uVar4 = 0x80;
    if (1 < iVar8 + 0xc) {
      uVar4 = uVar1;
    }
    uVar9 = (ulong)(uVar4 + 0xf & 0xfffffff0);
    puVar7 = *(uint **)(param_3 + 2);
    if ((ulong)(*(long *)(param_3 + 4) - (long)puVar7) < uVar9) {
      FUN_005d1df0();
      puVar7 = param_3;
    }
    else {
      *(ulong *)(param_3 + 2) = (long)puVar7 + uVar9;
    }
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    *puVar7 = uVar4;
    puVar7[1] = 0xc;
    puVar7[2] = uVar4;
    goto LAB_005d1128;
  }
  uVar1 = puVar7[2];
  if (param_2 <= uVar1 - puVar7[1]) {
    return 1;
  }
  uVar3 = *puVar7;
  iVar5 = uVar3 + iVar8 + -1;
  uVar4 = 1 << (ulong)(-(int)LZCOUNT(iVar5) & 0x1f);
  if (iVar5 == 0 || (int)(uVar3 + iVar8) < 1) {
    uVar4 = 1;
  }
  uVar9 = (ulong)uVar3 + 0xf & 0x1fffffff0;
  uVar10 = (long)(int)uVar4 + 0xfU & 0xfffffffffffffff0;
  if (uVar9 < uVar10) {
    puVar2 = *(uint **)(param_3 + 2);
    if ((ulong)(*(long *)(param_3 + 4) - (long)puVar2) < uVar10) {
      FUN_005d1df0(param_3,uVar10);
      if (uVar9 == 0 || param_3 == (uint *)0x0) goto LAB_005d1074;
    }
    else {
      *(ulong *)(param_3 + 2) = (long)puVar2 + uVar10;
      param_3 = puVar2;
      if (uVar9 == 0 || puVar2 == (uint *)0x0) {
LAB_005d1074:
        puVar7 = param_3;
        if (param_3 == (uint *)0x0) {
          return 0;
        }
        goto joined_r0x005d1104;
      }
    }
    _memcpy(param_3,puVar7,uVar9);
    puVar7 = param_3;
  }
  else if ((long)puVar7 + uVar9 == *(long *)(param_3 + 2)) {
    *(ulong *)(param_3 + 2) = (long)puVar7 + uVar10;
  }
joined_r0x005d1104:
  lVar6 = (long)(int)uVar4 - (ulong)(uVar3 - uVar1);
  if (uVar3 != uVar1) {
    _memmove((long)puVar7 + lVar6,(long)puVar7 + (ulong)puVar7[2]);
  }
  puVar7[2] = (uint)lVar6;
  *puVar7 = uVar4;
LAB_005d1128:
  *(uint **)(param_1 + -8) = puVar7;
  return 1;
}



/* Entry: 005d11c8; end: 005d126b;  */

long * FUN_005d11c8(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + -8);
  if (piVar5 != (int *)0x0) {
    uVar1 = *piVar5 - piVar5[2];
    if (0x17 < uVar1) {
      uVar3 = (ulong)uVar1 / 0x18;
      plVar2 = (long *)((long)piVar5 + (ulong)(uint)piVar5[2]);
      do {
        if (*plVar2 == param_2) {
          return plVar2;
        }
        plVar2 = plVar2 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  lVar4 = param_1;
  FUN_005d0fe0(param_1,0x18);
  if ((int)lVar4 != 0) {
    lVar4 = *(long *)(param_1 + -8);
    uVar1 = *(int *)(lVar4 + 8) - 0x18;
    *(uint *)(lVar4 + 8) = uVar1;
    plVar2 = (long *)(lVar4 + (ulong)uVar1);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = param_2;
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 005d126c; end: 005d145f;  */

undefined8 FUN_005d126c(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar6 = (ulong *)*param_1;
  if (puVar6 == (ulong *)0x0) {
    uVar2 = (4L << (param_3 & 0x3f)) + 0x2fU & 0xfffffffffffffff0;
    puVar6 = (ulong *)param_4[1];
    if (param_4[2] - (long)puVar6 < uVar2) {
      FUN_005d1df0(param_4,uVar2);
      if (param_4 == (ulong *)0x0) {
        return 0;
      }
    }
    else {
      param_4[1] = (long)puVar6 + uVar2;
      param_4 = puVar6;
      if (puVar6 == (ulong *)0x0) {
        return 0;
      }
    }
    uVar8 = 0;
    uVar1 = (ulong)(param_4 + 4) | param_3 & 0xffffffff;
    *param_4 = uVar1;
    param_4[2] = 4;
    param_4[1] = 0;
    *param_1 = param_4;
    uVar2 = 1;
    puVar6 = param_4;
    goto LAB_005d13b8;
  }
  uVar8 = puVar6[1];
  uVar4 = puVar6[2];
  uVar1 = *puVar6;
  uVar2 = uVar8 + 1;
  if (uVar2 <= uVar4) goto LAB_005d13b8;
  uVar9 = uVar4;
  if (uVar4 < 5) {
    uVar9 = 4;
  }
  do {
    uVar5 = uVar9;
    uVar9 = uVar5 << 1;
  } while (uVar5 < uVar2);
  uVar9 = uVar1 & 7;
  puVar3 = (ulong *)(uVar1 & 0xfffffffffffffff8);
  uVar1 = (uVar4 << uVar9) + 0xf & 0xfffffffffffffff0;
  uVar4 = (uVar5 << uVar9) + 0xf & 0xfffffffffffffff0;
  if (uVar1 < uVar4) {
    puVar7 = (ulong *)param_4[1];
    if (param_4[2] - (long)puVar7 < uVar4) {
      FUN_005d1df0(param_4,uVar4);
      puVar7 = param_4;
      if (uVar1 != 0) goto LAB_005d136c;
      goto LAB_005d13a8;
    }
    param_4[1] = (long)puVar7 + uVar4;
    param_4 = puVar7;
    if (uVar1 == 0) goto LAB_005d13a8;
LAB_005d136c:
    puVar7 = param_4;
    if (param_4 == (ulong *)0x0) goto LAB_005d13a8;
    _memcpy(param_4,puVar3);
  }
  else {
    puVar7 = puVar3;
    if ((long)puVar3 + uVar1 == param_4[1]) {
      param_4[1] = (long)puVar3 + uVar4;
    }
LAB_005d13a8:
    if (puVar7 == (ulong *)0x0) {
      return 0;
    }
  }
  uVar1 = uVar9 | (ulong)puVar7;
  *puVar6 = uVar1;
  puVar6[2] = uVar5;
LAB_005d13b8:
  puVar6[1] = uVar2;
  _memcpy((uVar1 & 0xfffffffffffffff8) + (uVar8 << (param_3 & 0x3f)),param_2,
          (long)(1 << (ulong)((uint)param_3 & 0x1f)));
  return 1;
}



/* Entry: 005d1460; end: 005d156b;  */

void FUN_005d1460(long *param_1,int param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_3 + 8);
  iVar5 = (int)param_1[1];
  iVar2 = *(int *)((long)param_1 + 0xc);
  *param_4 = iVar5;
  param_4[1] = iVar5;
  iVar11 = (int)uVar12;
  iVar6 = iVar5 + iVar11;
  param_4[2] = iVar6;
  lVar4 = *param_1;
  if (iVar2 < iVar6) {
    uVar3 = 1 << (ulong)(-(int)LZCOUNT(iVar6 + -1) & 0x1f);
    if (iVar6 + -1 == 0 || iVar6 < 1) {
      uVar3 = 1;
    }
    *(uint *)((long)param_1 + 0xc) = uVar3;
    _realloc(lVar4,-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return;
    }
    iVar6 = param_4[2];
    iVar5 = *param_4;
  }
  *(int *)(param_1 + 1) = iVar6;
  lVar1 = 0;
  if (*(byte *)(param_3 + 0x18) != 0) {
    lVar1 = (long)(1 << (ulong)(*(byte *)(param_3 + 0x18) & 0x1f));
  }
  if (0 < lVar1) {
    plVar7 = *(long **)(param_3 + 0x20);
    plVar8 = plVar7 + lVar1 * 3;
    puVar10 = (ulong *)(lVar4 + (long)iVar5 * 8);
    do {
      puVar9 = puVar10;
      if (*plVar7 != 0) {
        puVar9 = puVar10 + 1;
        *puVar10 = (ulong)plVar7;
      }
      plVar7 = plVar7 + 3;
      puVar10 = puVar9;
    } while (plVar7 < plVar8);
  }
  _qsort(*param_1 + (long)iVar5 * 8,(long)iVar11,8,(&PTR_FUN_00a06b20)[param_2 - 3]);
  return;
}



/* Entry: 005d156c; end: 005d1633;  */

uint FUN_005d156c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(long *)(*(long *)*param_2 + 4) < *(long *)(*(long *)*param_1 + 4));
  if (*(long *)(*(long *)*param_1 + 4) < *(long *)(*(long *)*param_2 + 4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 005d1634; end: 005d168f;  */

uint FUN_005d1634(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)*param_1 + 1;
  uVar1 = **(uint **)*param_1;
  uVar2 = **(uint **)*param_2;
  uVar4 = uVar1;
  if (uVar2 <= uVar1) {
    uVar4 = uVar2;
  }
  _memcmp(puVar3,*(uint **)*param_2 + 1,uVar4);
  if ((int)puVar3 != 0) {
    return -(int)puVar3;
  }
  uVar4 = (uint)(uVar2 < uVar1);
  if (uVar1 < uVar2) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 005d1690; end: 005d187f;  */

uint FUN_005d1690(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  param_3 = param_3 ^ 0x243f6a8885a308d3;
  uVar15 = param_2;
  uVar17 = param_3;
  if (0x40 < param_2) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1[1] ^ uVar17;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *param_1 ^ 0x13198a2e03707344;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_1[3] ^ uVar17;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1[2] ^ 0xa4093822299f31d0;
      uVar17 = (param_1[1] ^ uVar17) * (*param_1 ^ 0x13198a2e03707344) ^
               (param_1[3] ^ uVar17) * (param_1[2] ^ 0xa4093822299f31d0) ^
               SUB168(auVar2 * auVar9,8) ^ SUB168(auVar1 * auVar8,8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1[5] ^ param_3;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[4] ^ 0x82efa98ec4e6c89;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1[7] ^ param_3;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_1[6] ^ 0x452821e638d01377;
      param_3 = (param_1[5] ^ param_3) * (param_1[4] ^ 0x82efa98ec4e6c89) ^
                (param_1[7] ^ param_3) * (param_1[6] ^ 0x452821e638d01377) ^
                SUB168(auVar4 * auVar11,8) ^ SUB168(auVar3 * auVar10,8);
      param_1 = param_1 + 8;
      uVar15 = uVar15 - 0x40;
    } while (0x40 < uVar15);
    param_3 = param_3 ^ uVar17;
  }
  for (; 0x10 < uVar15; uVar15 = uVar15 - 0x10) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1[1] ^ param_3;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *param_1 ^ 0x13198a2e03707344;
    param_3 = SUB168(auVar5 * auVar12,8) ^ (param_1[1] ^ param_3) * (*param_1 ^ 0x13198a2e03707344);
    param_1 = param_1 + 2;
  }
  if (uVar15 < 9) {
    if (uVar15 < 4) {
      if (uVar15 == 0) {
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar16 = (ulong)(byte)*param_1 << 0x10 |
                 (ulong)*(byte *)((long)param_1 + (uVar15 >> 1)) << 8 |
                 (ulong)*(byte *)((long)param_1 + (uVar15 - 1));
      }
    }
    else {
      uVar16 = (ulong)(uint)*param_1;
      uVar17 = (ulong)*(uint *)((long)param_1 + (uVar15 - 4));
    }
  }
  else {
    uVar16 = *param_1;
    uVar17 = *(ulong *)((long)param_1 + (uVar15 - 8));
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar17 ^ param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar16 ^ 0x13198a2e03707344;
  uVar15 = SUB168(auVar6 * auVar13,8) ^ (uVar17 ^ param_3) * (uVar16 ^ 0x13198a2e03707344);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2 ^ 0x13198a2e03707344;
  return SUB164(auVar7 * auVar14,8) ^ (int)uVar15 * (int)(param_2 ^ 0x13198a2e03707344);
}



/* Entry: 005d1880; end: 005d1beb;  */

void FUN_005d1880(ulong *param_1,undefined8 param_2,long param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined4 *puStack_58;
  
  if (*param_1 == (ulong)*(uint *)((long)param_1 + 0xc)) {
    uVar7 = (uint)(byte)param_1[2];
    uVar8 = uVar7 + 1;
    uStack_70 = 0;
    uStack_60 = (undefined1)uVar8;
    if ((uVar8 & 0xff) == 0) {
      uStack_68 = 0;
      puStack_58 = (undefined4 *)0x0;
    }
    else {
      iVar2 = 1 << (ulong)(uVar8 & 0x1f);
      uStack_68 = CONCAT44((int)((double)(ulong)(long)iVar2 * 0.85),iVar2 + -1);
      uVar9 = ((long)iVar2 + (long)iVar2 * 2) * 8 + 0xfU & 0xfffffffffffffff0;
      puStack_58 = *(undefined4 **)(param_5 + 2);
      if ((ulong)(*(long *)(param_5 + 4) - (long)puStack_58) < uVar9) {
        puVar6 = param_5;
        FUN_005d1df0(param_5,uVar9);
        puStack_58 = puVar6;
      }
      else {
        *(ulong *)(param_5 + 2) = (long)puStack_58 + uVar9;
      }
      if (puStack_58 == (undefined4 *)0x0) {
        return;
      }
      _bzero();
      uVar7 = (uint)(byte)param_1[2];
    }
    if (uVar7 != 0) {
      lVar13 = 1;
      uVar9 = (ulong)(1 << (ulong)(uVar7 & 0x1f));
      puVar3 = (undefined8 *)param_1[3];
      do {
        puVar10 = puVar3;
        if (uVar9 + lVar13 == 1) goto LAB_005d1a08;
        puVar6 = (undefined4 *)*puVar10;
        lVar13 = lVar13 + -1;
        puVar3 = puVar10 + 3;
      } while (puVar6 == (undefined4 *)0x0);
      uVar17 = -lVar13;
      if (uVar17 < uVar9) {
        FUN_005d1880(&uStack_70,puVar6 + 1,*puVar6,puVar10[1],param_5);
        uVar8 = (uint)(byte)param_1[2];
        if ((byte)param_1[2] != 0) {
          do {
            lVar13 = uVar17 * 0x18;
            do {
              uVar17 = uVar17 + 1;
              if ((ulong)(long)(1 << (ulong)(uVar8 & 0x1f)) <= uVar17) goto LAB_005d1a08;
              lVar1 = lVar13 + 0x18;
              puVar6 = *(undefined4 **)(param_1[3] + lVar13 + 0x18);
              lVar13 = lVar1;
            } while (puVar6 == (undefined4 *)0x0);
            FUN_005d1880(&uStack_70,puVar6 + 1,*puVar6,*(undefined8 *)(param_1[3] + lVar1 + 8),
                         param_5);
            uVar8 = (uint)(byte)param_1[2];
          } while (uVar8 != 0);
        }
      }
    }
LAB_005d1a08:
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = (ulong)puStack_58;
    param_1[2] = CONCAT71(uStack_5f,uStack_60);
  }
  uVar9 = param_3 + 0x14U & 0xfffffffffffffff0;
  puVar6 = *(undefined4 **)(param_5 + 2);
  if ((ulong)(*(long *)(param_5 + 4) - (long)puVar6) < uVar9) {
    FUN_005d1df0();
    puVar6 = param_5;
  }
  else {
    *(ulong *)(param_5 + 2) = (long)puVar6 + uVar9;
  }
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
  *puVar6 = (int)param_3;
  if (param_3 != 0) {
    _memcpy(puVar6 + 1,param_2,param_3);
  }
  *(undefined1 *)((long)puVar6 + param_3 + 4) = 0;
  FUN_005d1690(param_2,param_3,0);
  *param_1 = *param_1 + 1;
  puVar16 = (ulong *)param_1[3];
  uVar9 = param_1[1];
  uVar8 = (uint)uVar9 & (uint)param_2;
  puVar15 = puVar16 + (ulong)uVar8 * 3;
  puVar4 = (undefined4 *)*puVar15;
  if (puVar4 != (undefined4 *)0x0) {
    lVar13 = 0;
    if ((byte)param_1[2] != 0) {
      lVar13 = (long)(1 << (ulong)((byte)param_1[2] & 0x1f));
    }
    puVar14 = puVar16 + (ulong)uVar8 * 3;
    do {
      puVar14 = puVar14 + 3;
      if (puVar16 + lVar13 * 3 <= puVar14) {
        puVar14 = puVar16;
        if (0 < lVar13) goto LAB_005d1af0;
        puVar14 = (ulong *)0x0;
        puVar5 = puVar4 + 1;
        FUN_005d1690(puVar5,*puVar4,0);
        uVar7 = (uint)puVar5;
        goto joined_r0x005d1b1c;
      }
    } while (*puVar14 != 0);
    puVar5 = puVar4 + 1;
    FUN_005d1690(puVar5,*puVar4,0);
    uVar7 = (uint)puVar5;
    goto joined_r0x005d1b1c;
  }
  goto LAB_005d1b84;
  while (puVar14 = puVar14 + 3, puVar14 < puVar16 + lVar13 * 3) {
LAB_005d1af0:
    if (*puVar14 == 0) goto LAB_005d1b08;
  }
  puVar14 = (ulong *)0x0;
LAB_005d1b08:
  puVar5 = puVar4 + 1;
  FUN_005d1690(puVar5,*puVar4,0);
  uVar7 = (uint)puVar5;
joined_r0x005d1b1c:
  uVar7 = uVar7 & (uint)uVar9;
  if (uVar7 == uVar8) {
    puVar14[2] = puVar16[(ulong)uVar8 * 3 + 2];
    puVar16[(ulong)uVar8 * 3 + 2] = (ulong)puVar14;
    goto LAB_005d1b90;
  }
  uVar17 = puVar15[1];
  uVar9 = *puVar15;
  puVar14[2] = puVar15[2];
  puVar14[1] = uVar17;
  *puVar14 = uVar9;
  puVar12 = puVar16 + (ulong)uVar7 * 3;
  do {
    puVar11 = puVar12;
    puVar12 = (ulong *)puVar11[2];
  } while (puVar12 != puVar15);
  puVar11[2] = (ulong)puVar14;
LAB_005d1b84:
  puVar16[(ulong)uVar8 * 3 + 2] = 0;
  puVar14 = puVar15;
LAB_005d1b90:
  *puVar14 = (ulong)puVar6;
  puVar14[1] = param_4;
  return;
}



/* Entry: 005d1bec; end: 005d1c47;  */

void FUN_005d1bec(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x10);
  if (uVar1 != 0) {
    uVar2 = param_1[1];
    lVar3 = uVar2 * 0x18;
    while( true ) {
      lVar3 = lVar3 + 0x18;
      uVar2 = uVar2 + 1;
      if ((ulong)(long)(1 << (ulong)(uVar1 & 0x1f)) <= uVar2) break;
      if (*(long *)(*(long *)(*param_1 + 0x18) + lVar3) != 0) {
        param_1[1] = uVar2;
        return;
      }
    }
  }
  param_1[1] = -2;
  return;
}



/* Entry: 005d1c48; end: 005d1dc7;  */

undefined8 FUN_005d1c48(long *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = param_2;
  FUN_005d1690(param_2,param_3,0);
  lVar6 = param_1[3];
  uVar1 = *(uint *)(param_1 + 1) & (uint)uVar7;
  puVar4 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x18);
  puVar2 = (uint *)*puVar4;
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  puVar3 = puVar2 + 1;
  if ((param_3 == *puVar2) &&
     ((*puVar2 == 0 || (_memcmp(puVar3,param_2,param_3), (int)puVar3 == 0)))) {
    *param_1 = *param_1 + -1;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 0x18 + 8);
    }
    puVar5 = *(undefined8 **)(lVar6 + (ulong)uVar1 * 0x18 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
      *puVar4 = 0;
    }
    else {
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      puVar4[2] = puVar5[2];
      puVar4[1] = uVar8;
      *puVar4 = uVar7;
      *puVar5 = 0;
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x18 + 0x10);
    puVar4 = (undefined8 *)*puVar5;
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    while( true ) {
      puVar2 = (uint *)*puVar4 + 1;
      uVar1 = *(uint *)*puVar4;
      if ((param_3 == uVar1) &&
         ((uVar1 == 0 || (_memcmp(puVar2,param_2,param_3), (int)puVar2 == 0)))) break;
      puVar5 = puVar4 + 2;
      puVar4 = (undefined8 *)*puVar5;
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
    }
    *param_1 = *param_1 + -1;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = puVar4[1];
    }
    *puVar4 = 0;
    *puVar5 = puVar4[2];
  }
  return 1;
}



/* Entry: 005d1dc8; end: 005d1def;  */

undefined8 FUN_005d1dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077ae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_0099a640)(param_2,param_4);
    return param_2;
  }
  _free(param_2);
  return 0;
}



/* Entry: 005d1df0; end: 005d20a3;  */

undefined8 * FUN_005d1df0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  while( true ) {
    lVar4 = *(long *)(param_1 + 0x30);
    plVar6 = (long *)(param_1 + 0x30);
    lVar7 = param_1;
    if (*(long *)(param_1 + 0x30) != param_1) {
      do {
        lVar7 = lVar4;
        lVar4 = *(long *)(lVar7 + 0x30);
        *plVar6 = lVar4;
        plVar6 = (long *)(lVar7 + 0x30);
      } while (lVar4 != lVar7);
    }
    uVar5 = (ulong)(uint)(*(int *)(param_1 + 0x28) << 1);
    if (uVar5 <= param_2) {
      uVar5 = param_2;
    }
    lVar4 = uVar5 + 0x10;
    puVar3 = *(undefined8 **)(lVar7 + 0x20);
    (*(code *)*puVar3)(puVar3,0,0,lVar4);
    if (puVar3 == (undefined8 *)0x0) break;
    lVar2 = *(long *)(lVar7 + 0x40);
    *puVar3 = *(undefined8 *)(lVar7 + 0x38);
    *(int *)(puVar3 + 1) = (int)lVar4;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *(undefined8 **)(lVar7 + 0x38) = puVar3;
    *(int *)(param_1 + 0x28) = (int)lVar4;
    if (lVar2 == 0) {
      *(undefined8 **)(lVar7 + 0x40) = puVar3;
    }
    puVar1 = puVar3 + 2;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(long *)(param_1 + 0x10) = (long)puVar3 + lVar4;
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 1 | (ulong)((long)puVar3 + 0xc);
    param_2 = param_2 + 0xf & 0xfffffffffffffff0;
    if (param_2 <= uVar5) {
      *(ulong *)(param_1 + 8) = (long)puVar1 + param_2;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 005d20a4; end: 005d2197;  */

undefined8 * FUN_005d20a4(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = param_2 - (uVar4 - param_1);
    if ((uVar4 - param_1 <= param_2) && (0x47 < uVar5)) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      lVar2 = uVar4 + uVar5;
      puVar3 = (undefined8 *)(lVar2 + -0x48);
      *puVar3 = 0x5d1efc;
      if (uVar5 < 0x81) {
        uVar5 = 0x80;
      }
      *(int *)(lVar2 + -0x20) = (int)uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = 1;
      *(ulong *)(lVar2 + -0x40) = uVar4;
      *(undefined8 **)(lVar2 + -0x38) = puVar3;
      *(undefined8 **)(lVar2 + -0x18) = puVar3;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -0x30) = 1;
      *(undefined8 **)(lVar2 + -0x28) = param_3;
      return puVar3;
    }
  }
  if (param_3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3 = param_3;
  (*(code *)*param_3)(param_3,0,0,0x158);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1 = puVar3 + 0x22;
  *puVar3 = 0;
  puVar3[1] = 0x110;
  puVar3[0x28] = puVar1;
  puVar3[0x29] = puVar3;
  puVar3[0x27] = 0x100000110;
  puVar3[0x2a] = puVar3;
  puVar3[0x22] = 0x5d1efc;
  puVar3[0x23] = puVar3 + 2;
  puVar3[0x24] = puVar1;
  puVar3[0x25] = (long)puVar3 + 0xc;
  puVar3[0x26] = param_3;
  return puVar1;
}



/* Entry: 005d2198; end: 005d2257;  */

void FUN_005d2198(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(param_1 + 0x30);
  plVar4 = (long *)(param_1 + 0x30);
  if (lVar3 != param_1) {
    do {
      param_1 = lVar3;
      lVar3 = *(long *)(param_1 + 0x30);
      *plVar4 = lVar3;
      plVar4 = (long *)(param_1 + 0x30);
    } while (lVar3 != param_1);
  }
  iVar2 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    plVar4 = (long *)*(long *)(param_1 + 0x38);
    while (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      if (*(uint *)((long)plVar4 + 0xc) != 0) {
        uVar1 = *(uint *)(plVar4 + 1);
        puVar5 = (undefined8 *)((long)plVar4 + (ulong)uVar1) +
                 (ulong)*(uint *)((long)plVar4 + 0xc) * -2;
        do {
          puVar6 = puVar5 + 2;
          (*(code *)*puVar5)(puVar5[1]);
          puVar5 = puVar6;
        } while (puVar6 < (undefined8 *)((long)plVar4 + (ulong)uVar1));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),plVar4,0,0);
      plVar4 = (long *)lVar3;
    }
  }
  return;
}



/* Entry: 005d2258; end: 005d232f;  */

void FUN_005d2258(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(ulong *)(param_2 + 0x18) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x10) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(ulong *)(param_2 + 0x28) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x20) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[5];
  uVar1 = param_1[4];
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(ulong *)(param_2 + 0x38) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x30) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[7];
  uVar1 = param_1[6];
  *(ulong *)(param_2 + 0x48) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x40) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[9];
  uVar1 = param_1[8];
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(ulong *)(param_2 + 0x58) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x50) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0xb];
  uVar1 = param_1[10];
  *(ulong *)(param_2 + 0x68) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x60) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xc];
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(ulong *)(param_2 + 0x78) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x70) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0xf];
  uVar1 = param_1[0xe];
  *(ulong *)(param_2 + 0x88) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0x80) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x10];
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  *(ulong *)(param_2 + 0x98) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0x90) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x13];
  uVar1 = param_1[0x12];
  *(ulong *)(param_2 + 0xa8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xa0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x15];
  uVar1 = param_1[0x14];
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar6 = *(undefined8 *)(param_2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  *(ulong *)(param_2 + 0xb8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0xb0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x17];
  uVar1 = param_1[0x16];
  *(ulong *)(param_2 + 200) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xc0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = param_1[0x19];
  uVar1 = param_1[0x18];
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  *(ulong *)(param_2 + 0xd8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar4)))))
                        ));
  *(ulong *)(param_2 + 0xd0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar3 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar3 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar3 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar3 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar3)))))
                        ));
  uVar2 = param_1[0x1b];
  uVar1 = param_1[0x1a];
  *(ulong *)(param_2 + 0xe8) =
       CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar2 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar2 ^ (byte)uVar6)))))
                        ));
  *(ulong *)(param_2 + 0xe0) =
       CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar1 ^ (byte)uVar5)))))
                        ));
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar4 = param_1[0x1d];
  uVar3 = param_1[0x1c];
  *(ulong *)(param_2 + 0xf8) =
       CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38),
                CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30),
                         CONCAT15((byte)((ulong)uVar4 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                           (byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar4 >> 0x18) ^
                                                    (byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar4 >> 0x10) ^
                                                             (byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                                      (byte)((ulong)uVar2 >> 8),
                                                                      (byte)uVar4 ^ (byte)uVar2)))))
                        ));
  *(ulong *)(param_2 + 0xf0) =
       CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38),
                CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30),
                         CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar1 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                           (byte)((ulong)uVar1 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                    (byte)((ulong)uVar1 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                             (byte)((ulong)uVar1 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar3 >> 8) ^
                                                                      (byte)((ulong)uVar1 >> 8),
                                                                      (byte)uVar3 ^ (byte)uVar1)))))
                        ));
  return;
}



/* Entry: 005d2330; end: 005d257b;  */

void FUN_005d2330(long param_1,undefined8 *param_2)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
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
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
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
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
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
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar108 [16];
  undefined8 uVar109;
  undefined8 uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  byte bVar115;
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
  byte bVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  undefined8 uVar181;
  undefined8 uVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  undefined8 uVar213;
  undefined8 uVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  byte bVar300;
  byte bVar301;
  byte bVar302;
  byte bVar303;
  byte bVar304;
  byte bVar305;
  byte bVar306;
  byte bVar307;
  byte bVar308;
  byte bVar309;
  byte bVar310;
  byte bVar311;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  byte bVar315;
  byte bVar316;
  byte bVar317;
  byte bVar318;
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  byte bVar322;
  byte bVar323;
  byte bVar324;
  byte bVar325;
  byte bVar326;
  byte bVar327;
  byte bVar328;
  byte bVar329;
  byte bVar330;
  byte bVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  byte bVar335;
  byte bVar336;
  byte bVar337;
  undefined8 uStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  
  lVar31 = 0;
  uVar20 = param_2[1];
  bVar199 = (byte)((ulong)uVar20 >> 8);
  bVar201 = (byte)((ulong)uVar20 >> 0x10);
  bVar203 = (byte)((ulong)uVar20 >> 0x18);
  bVar205 = (byte)((ulong)uVar20 >> 0x20);
  bVar207 = (byte)((ulong)uVar20 >> 0x28);
  bVar209 = (byte)((ulong)uVar20 >> 0x30);
  bVar211 = (byte)((ulong)uVar20 >> 0x38);
  uVar19 = *param_2;
  bVar184 = (byte)((ulong)uVar19 >> 8);
  bVar186 = (byte)((ulong)uVar19 >> 0x10);
  bVar188 = (byte)((ulong)uVar19 >> 0x18);
  bVar190 = (byte)((ulong)uVar19 >> 0x20);
  bVar192 = (byte)((ulong)uVar19 >> 0x28);
  bVar194 = (byte)((ulong)uVar19 >> 0x30);
  bVar196 = (byte)((ulong)uVar19 >> 0x38);
  uStack_50 = param_2[2];
  uVar6 = param_2[5];
  bVar78 = (byte)uVar6;
  bVar79 = (byte)((ulong)uVar6 >> 8);
  bVar80 = (byte)((ulong)uVar6 >> 0x10);
  bVar81 = (byte)((ulong)uVar6 >> 0x18);
  bVar82 = (byte)((ulong)uVar6 >> 0x20);
  bVar83 = (byte)((ulong)uVar6 >> 0x28);
  bVar84 = (byte)((ulong)uVar6 >> 0x30);
  bVar85 = (byte)((ulong)uVar6 >> 0x38);
  uVar6 = param_2[4];
  bVar70 = (byte)uVar6;
  bVar71 = (byte)((ulong)uVar6 >> 8);
  bVar72 = (byte)((ulong)uVar6 >> 0x10);
  bVar73 = (byte)((ulong)uVar6 >> 0x18);
  bVar74 = (byte)((ulong)uVar6 >> 0x20);
  bVar75 = (byte)((ulong)uVar6 >> 0x28);
  bVar76 = (byte)((ulong)uVar6 >> 0x30);
  bVar77 = (byte)((ulong)uVar6 >> 0x38);
  uStack_60 = param_2[6];
  bStack_58 = (byte)param_2[7];
  uStack_57 = (undefined7)((ulong)param_2[7] >> 8);
  bStack_48 = (byte)param_2[3];
  uStack_47 = (undefined7)((ulong)param_2[3] >> 8);
  auVar321 = *(undefined1 (*) [16])(param_2 + 8);
  uVar30 = param_2[0xb];
  uVar29 = param_2[10];
  uVar110 = param_2[0xd];
  uVar109 = param_2[0xc];
  auVar112 = *(undefined1 (*) [16])(param_2 + 0xe);
  uVar182 = param_2[0x11];
  uVar181 = param_2[0x10];
  uVar17 = param_2[0x13];
  uVar16 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  uVar14 = param_2[0x17];
  uVar13 = param_2[0x16];
  uVar214 = param_2[0x19];
  uVar213 = param_2[0x18];
  uVar23 = param_2[0x1b];
  uVar22 = param_2[0x1a];
  auVar132 = *(undefined1 (*) [16])(param_2 + 0x1c);
  uVar26 = param_2[0x1f];
  uVar25 = param_2[0x1e];
  bVar32 = (byte)uVar6;
  bVar34 = (byte)((ulong)uVar6 >> 8);
  bVar36 = (byte)((ulong)uVar6 >> 0x10);
  bVar38 = (byte)((ulong)uVar6 >> 0x18);
  bVar40 = (byte)((ulong)uVar6 >> 0x20);
  bVar42 = (byte)((ulong)uVar6 >> 0x28);
  bVar44 = (byte)((ulong)uVar6 >> 0x30);
  bVar46 = (byte)((ulong)uVar6 >> 0x38);
  bVar48 = (byte)uVar7;
  bVar50 = (byte)((ulong)uVar7 >> 8);
  bVar52 = (byte)((ulong)uVar7 >> 0x10);
  bVar55 = (byte)((ulong)uVar7 >> 0x18);
  bVar58 = (byte)((ulong)uVar7 >> 0x20);
  bVar61 = (byte)((ulong)uVar7 >> 0x28);
  bVar64 = (byte)((ulong)uVar7 >> 0x30);
  bVar67 = (byte)((ulong)uVar7 >> 0x38);
  bVar33 = (byte)uVar13;
  bVar35 = (byte)((ulong)uVar13 >> 8);
  bVar37 = (byte)((ulong)uVar13 >> 0x10);
  bVar39 = (byte)((ulong)uVar13 >> 0x18);
  bVar41 = (byte)((ulong)uVar13 >> 0x20);
  bVar43 = (byte)((ulong)uVar13 >> 0x28);
  bVar45 = (byte)((ulong)uVar13 >> 0x30);
  bVar47 = (byte)((ulong)uVar13 >> 0x38);
  bVar49 = (byte)uVar14;
  bVar51 = (byte)((ulong)uVar14 >> 8);
  bVar54 = (byte)((ulong)uVar14 >> 0x10);
  bVar57 = (byte)((ulong)uVar14 >> 0x18);
  bVar60 = (byte)((ulong)uVar14 >> 0x20);
  bVar63 = (byte)((ulong)uVar14 >> 0x28);
  bVar66 = (byte)((ulong)uVar14 >> 0x30);
  bVar69 = (byte)((ulong)uVar14 >> 0x38);
  bVar165 = (byte)uVar16;
  bVar166 = (byte)((ulong)uVar16 >> 8);
  bVar167 = (byte)((ulong)uVar16 >> 0x10);
  bVar168 = (byte)((ulong)uVar16 >> 0x18);
  bVar169 = (byte)((ulong)uVar16 >> 0x20);
  bVar170 = (byte)((ulong)uVar16 >> 0x28);
  bVar171 = (byte)((ulong)uVar16 >> 0x30);
  bVar172 = (byte)((ulong)uVar16 >> 0x38);
  bVar173 = (byte)uVar17;
  bVar174 = (byte)((ulong)uVar17 >> 8);
  bVar175 = (byte)((ulong)uVar17 >> 0x10);
  bVar176 = (byte)((ulong)uVar17 >> 0x18);
  bVar177 = (byte)((ulong)uVar17 >> 0x20);
  bVar178 = (byte)((ulong)uVar17 >> 0x28);
  bVar179 = (byte)((ulong)uVar17 >> 0x30);
  bVar180 = (byte)((ulong)uVar17 >> 0x38);
  bVar183 = (byte)uVar19;
  bVar185 = bVar184;
  bVar187 = bVar186;
  bVar189 = bVar188;
  bVar191 = bVar190;
  bVar193 = bVar192;
  bVar195 = bVar194;
  bVar197 = bVar196;
  bVar198 = (byte)uVar20;
  bVar200 = bVar199;
  bVar202 = bVar201;
  bVar204 = bVar203;
  bVar206 = bVar205;
  bVar208 = bVar207;
  bVar210 = bVar209;
  bVar212 = bVar211;
  bVar215 = (byte)uVar22;
  bVar216 = (byte)((ulong)uVar22 >> 8);
  bVar217 = (byte)((ulong)uVar22 >> 0x10);
  bVar218 = (byte)((ulong)uVar22 >> 0x18);
  bVar219 = (byte)((ulong)uVar22 >> 0x20);
  bVar220 = (byte)((ulong)uVar22 >> 0x28);
  bVar221 = (byte)((ulong)uVar22 >> 0x30);
  bVar222 = (byte)((ulong)uVar22 >> 0x38);
  bVar223 = (byte)uVar23;
  bVar224 = (byte)((ulong)uVar23 >> 8);
  bVar225 = (byte)((ulong)uVar23 >> 0x10);
  bVar226 = (byte)((ulong)uVar23 >> 0x18);
  bVar227 = (byte)((ulong)uVar23 >> 0x20);
  bVar228 = (byte)((ulong)uVar23 >> 0x28);
  bVar229 = (byte)((ulong)uVar23 >> 0x30);
  bVar230 = (byte)((ulong)uVar23 >> 0x38);
  bVar231 = (byte)uVar25;
  bVar232 = (byte)((ulong)uVar25 >> 8);
  bVar233 = (byte)((ulong)uVar25 >> 0x10);
  bVar234 = (byte)((ulong)uVar25 >> 0x18);
  bVar235 = (byte)((ulong)uVar25 >> 0x20);
  bVar236 = (byte)((ulong)uVar25 >> 0x28);
  bVar237 = (byte)((ulong)uVar25 >> 0x30);
  bVar238 = (byte)((ulong)uVar25 >> 0x38);
  bVar239 = (byte)uVar26;
  bVar240 = (byte)((ulong)uVar26 >> 8);
  bVar241 = (byte)((ulong)uVar26 >> 0x10);
  bVar242 = (byte)((ulong)uVar26 >> 0x18);
  bVar243 = (byte)((ulong)uVar26 >> 0x20);
  bVar244 = (byte)((ulong)uVar26 >> 0x28);
  bVar245 = (byte)((ulong)uVar26 >> 0x30);
  bVar246 = (byte)((ulong)uVar26 >> 0x38);
  bVar250 = (byte)uVar29;
  bVar251 = (byte)((ulong)uVar29 >> 8);
  bVar252 = (byte)((ulong)uVar29 >> 0x10);
  bVar253 = (byte)((ulong)uVar29 >> 0x18);
  bVar254 = (byte)((ulong)uVar29 >> 0x20);
  bVar255 = (byte)((ulong)uVar29 >> 0x28);
  bVar256 = (byte)((ulong)uVar29 >> 0x30);
  bVar257 = (byte)((ulong)uVar29 >> 0x38);
  bVar258 = (byte)uVar30;
  bVar259 = (byte)((ulong)uVar30 >> 8);
  bVar260 = (byte)((ulong)uVar30 >> 0x10);
  bVar261 = (byte)((ulong)uVar30 >> 0x18);
  bVar262 = (byte)((ulong)uVar30 >> 0x20);
  bVar263 = (byte)((ulong)uVar30 >> 0x28);
  bVar264 = (byte)((ulong)uVar30 >> 0x30);
  bVar265 = (byte)((ulong)uVar30 >> 0x38);
  while( true ) {
    auVar319[9] = bVar200;
    auVar319[8] = bVar198;
    auVar319[10] = bVar202;
    auVar319[0xb] = bVar204;
    auVar319[0xc] = bVar206;
    auVar319[0xd] = bVar208;
    auVar319[0xe] = bVar210;
    auVar319[0xf] = bVar212;
    auVar319[1] = bVar185;
    auVar319[0] = bVar183;
    auVar319[2] = bVar187;
    auVar319[3] = bVar189;
    auVar319[4] = bVar191;
    auVar319[5] = bVar193;
    auVar319[6] = bVar195;
    auVar319[7] = bVar197;
    auVar247 = NEON_aese(auVar319,ZEXT216(0));
    auVar248 = NEON_aesmc(auVar247,auVar247);
    auVar282[9] = bVar79;
    auVar282[8] = bVar78;
    auVar282[10] = bVar80;
    auVar282[0xb] = bVar81;
    auVar282[0xc] = bVar82;
    auVar282[0xd] = bVar83;
    auVar282[0xe] = bVar84;
    auVar282[0xf] = bVar85;
    auVar282[1] = bVar71;
    auVar282[0] = bVar70;
    auVar282[2] = bVar72;
    auVar282[3] = bVar73;
    auVar282[4] = bVar74;
    auVar282[5] = bVar75;
    auVar282[6] = bVar76;
    auVar282[7] = bVar77;
    auVar247 = NEON_aese(auVar282,ZEXT216(0));
    auVar283 = NEON_aesmc(auVar247,auVar247);
    auVar247 = NEON_aese(auVar321,ZEXT216(0));
    auVar319 = NEON_aesmc(auVar247,auVar247);
    auVar131._8_8_ = uVar110;
    auVar131._0_8_ = uVar109;
    auVar247 = NEON_aese(auVar131,ZEXT216(0));
    auVar111 = NEON_aesmc(auVar247,auVar247);
    auVar285._8_8_ = uVar182;
    auVar285._0_8_ = uVar181;
    auVar247 = NEON_aese(auVar285,ZEXT216(0));
    auVar286 = NEON_aesmc(auVar247,auVar247);
    auVar114[9] = bVar50;
    auVar114[8] = bVar48;
    auVar114[10] = bVar52;
    auVar114[0xb] = bVar55;
    auVar114[0xc] = bVar58;
    auVar114[0xd] = bVar61;
    auVar114[0xe] = bVar64;
    auVar114[0xf] = bVar67;
    auVar114[1] = bVar34;
    auVar114[0] = bVar32;
    auVar114[2] = bVar36;
    auVar114[3] = bVar38;
    auVar114[4] = bVar40;
    auVar114[5] = bVar42;
    auVar114[6] = bVar44;
    auVar114[7] = bVar46;
    auVar247 = NEON_aese(auVar114,ZEXT216(0));
    auVar247 = NEON_aesmc(auVar247,auVar247);
    auVar249._8_8_ = uVar214;
    auVar249._0_8_ = uVar213;
    auVar113 = NEON_aese(auVar249,ZEXT216(0));
    auVar114 = NEON_aesmc(auVar113,auVar113);
    auVar113 = NEON_aese(auVar132,ZEXT216(0));
    auVar131 = NEON_aesmc(auVar113,auVar113);
    pVar1 = (unkbyte9 *)(param_1 + lVar31);
    uVar6 = *(undefined8 *)((long)pVar1 + 8);
    uVar16 = *(undefined8 *)((long)pVar1 + 0x18);
    uVar17 = *(undefined8 *)((long)pVar1 + 0x28);
    uVar7 = *(undefined8 *)((long)pVar1 + 0x38);
    uVar13 = *(undefined8 *)((long)pVar1 + 0x48);
    uVar14 = *(undefined8 *)((long)pVar1 + 0x58);
    auVar113[9] = (char)((ulong)uVar6 >> 8);
    auVar113._0_9_ = *pVar1;
    auVar113[10] = (char)((ulong)uVar6 >> 0x10);
    auVar113[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar113[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar113[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar113[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar113[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar113 = NEON_aese(auVar248,auVar113);
    auVar249 = NEON_aesmc(auVar113,auVar113);
    bVar53 = (byte)((uint7)uStack_57 >> 8);
    bVar56 = (byte)((uint7)uStack_57 >> 0x10);
    bVar59 = (byte)((uint7)uStack_57 >> 0x18);
    bVar62 = (byte)((uint7)uStack_57 >> 0x20);
    bVar65 = (byte)((uint7)uStack_57 >> 0x28);
    bVar68 = (byte)((uint7)uStack_57 >> 0x30);
    bVar96 = (byte)((uint7)uStack_47 >> 8);
    bVar98 = (byte)((uint7)uStack_47 >> 0x10);
    bVar100 = (byte)((uint7)uStack_47 >> 0x18);
    bVar102 = (byte)((uint7)uStack_47 >> 0x20);
    bVar104 = (byte)((uint7)uStack_47 >> 0x28);
    bVar106 = (byte)((uint7)uStack_47 >> 0x30);
    bVar266 = auVar249[0] ^ (byte)uStack_50;
    bVar267 = auVar249[1] ^ (byte)((ulong)uStack_50 >> 8);
    bVar268 = auVar249[2] ^ (byte)((ulong)uStack_50 >> 0x10);
    bVar269 = auVar249[3] ^ (byte)((ulong)uStack_50 >> 0x18);
    bVar270 = auVar249[4] ^ (byte)((ulong)uStack_50 >> 0x20);
    bVar271 = auVar249[5] ^ (byte)((ulong)uStack_50 >> 0x28);
    bVar272 = auVar249[6] ^ (byte)((ulong)uStack_50 >> 0x30);
    bVar273 = auVar249[7] ^ (byte)((ulong)uStack_50 >> 0x38);
    bVar274 = auVar249[8] ^ bStack_48;
    bVar275 = auVar249[9] ^ (byte)uStack_47;
    bVar276 = auVar249[10] ^ bVar96;
    bVar277 = auVar249[0xb] ^ bVar98;
    bVar278 = auVar249[0xc] ^ bVar100;
    bVar279 = auVar249[0xd] ^ bVar102;
    bVar280 = auVar249[0xe] ^ bVar104;
    bVar281 = auVar249[0xf] ^ bVar106;
    auVar284[9] = (char)((ulong)uVar16 >> 8);
    auVar284._0_9_ = pVar1[1];
    auVar284[10] = (char)((ulong)uVar16 >> 0x10);
    auVar284[0xb] = (char)((ulong)uVar16 >> 0x18);
    auVar284[0xc] = (char)((ulong)uVar16 >> 0x20);
    auVar284[0xd] = (char)((ulong)uVar16 >> 0x28);
    auVar284[0xe] = (char)((ulong)uVar16 >> 0x30);
    auVar284[0xf] = (char)((ulong)uVar16 >> 0x38);
    auVar113 = NEON_aese(auVar283,auVar284);
    auVar284 = NEON_aesmc(auVar113,auVar113);
    bVar322 = auVar284[0] ^ (byte)uStack_60;
    bVar323 = auVar284[1] ^ (byte)((ulong)uStack_60 >> 8);
    bVar324 = auVar284[2] ^ (byte)((ulong)uStack_60 >> 0x10);
    bVar325 = auVar284[3] ^ (byte)((ulong)uStack_60 >> 0x18);
    bVar326 = auVar284[4] ^ (byte)((ulong)uStack_60 >> 0x20);
    bVar327 = auVar284[5] ^ (byte)((ulong)uStack_60 >> 0x28);
    bVar328 = auVar284[6] ^ (byte)((ulong)uStack_60 >> 0x30);
    bVar329 = auVar284[7] ^ (byte)((ulong)uStack_60 >> 0x38);
    bVar330 = auVar284[8] ^ bStack_58;
    bVar331 = auVar284[9] ^ (byte)uStack_57;
    bVar332 = auVar284[10] ^ bVar53;
    bVar333 = auVar284[0xb] ^ bVar56;
    bVar334 = auVar284[0xc] ^ bVar59;
    bVar335 = auVar284[0xd] ^ bVar62;
    bVar336 = auVar284[0xe] ^ bVar65;
    bVar337 = auVar284[0xf] ^ bVar68;
    auVar320[9] = (char)((ulong)uVar17 >> 8);
    auVar320._0_9_ = pVar1[2];
    auVar320[10] = (char)((ulong)uVar17 >> 0x10);
    auVar320[0xb] = (char)((ulong)uVar17 >> 0x18);
    auVar320[0xc] = (char)((ulong)uVar17 >> 0x20);
    auVar320[0xd] = (char)((ulong)uVar17 >> 0x28);
    auVar320[0xe] = (char)((ulong)uVar17 >> 0x30);
    auVar320[0xf] = (char)((ulong)uVar17 >> 0x38);
    auVar113 = NEON_aese(auVar319,auVar320);
    auVar320 = NEON_aesmc(auVar113,auVar113);
    bVar287 = auVar320[0] ^ bVar250;
    bVar288 = auVar320[1] ^ bVar251;
    bVar289 = auVar320[2] ^ bVar252;
    bVar290 = auVar320[3] ^ bVar253;
    bVar291 = auVar320[4] ^ bVar254;
    bVar292 = auVar320[5] ^ bVar255;
    bVar293 = auVar320[6] ^ bVar256;
    bVar294 = auVar320[7] ^ bVar257;
    bVar295 = auVar320[8] ^ bVar258;
    bVar296 = auVar320[9] ^ bVar259;
    bVar297 = auVar320[10] ^ bVar260;
    bVar298 = auVar320[0xb] ^ bVar261;
    bVar299 = auVar320[0xc] ^ bVar262;
    bVar300 = auVar320[0xd] ^ bVar263;
    bVar301 = auVar320[0xe] ^ bVar264;
    bVar302 = auVar320[0xf] ^ bVar265;
    auVar248[9] = (char)((ulong)uVar7 >> 8);
    auVar248._0_9_ = pVar1[3];
    auVar248[10] = (char)((ulong)uVar7 >> 0x10);
    auVar248[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar248[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar248[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar248[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar248[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar113 = NEON_aese(auVar111,auVar248);
    auVar248 = NEON_aesmc(auVar113,auVar113);
    bVar303 = auVar248[0] ^ auVar112[0];
    bVar304 = auVar248[1] ^ auVar112[1];
    bVar305 = auVar248[2] ^ auVar112[2];
    bVar306 = auVar248[3] ^ auVar112[3];
    bVar307 = auVar248[4] ^ auVar112[4];
    bVar308 = auVar248[5] ^ auVar112[5];
    bVar309 = auVar248[6] ^ auVar112[6];
    bVar310 = auVar248[7] ^ auVar112[7];
    bVar311 = auVar248[8] ^ auVar112[8];
    bVar312 = auVar248[9] ^ auVar112[9];
    bVar313 = auVar248[10] ^ auVar112[10];
    bVar314 = auVar248[0xb] ^ auVar112[0xb];
    bVar315 = auVar248[0xc] ^ auVar112[0xc];
    bVar316 = auVar248[0xd] ^ auVar112[0xd];
    bVar317 = auVar248[0xe] ^ auVar112[0xe];
    bVar318 = auVar248[0xf] ^ auVar112[0xf];
    uVar7 = *(undefined8 *)((long)pVar1 + 0x68);
    uVar6 = *(undefined8 *)((long)pVar1 + 0x78);
    auVar283[9] = (char)((ulong)uVar13 >> 8);
    auVar283._0_9_ = pVar1[4];
    auVar283[10] = (char)((ulong)uVar13 >> 0x10);
    auVar283[0xb] = (char)((ulong)uVar13 >> 0x18);
    auVar283[0xc] = (char)((ulong)uVar13 >> 0x20);
    auVar283[0xd] = (char)((ulong)uVar13 >> 0x28);
    auVar283[0xe] = (char)((ulong)uVar13 >> 0x30);
    auVar283[0xf] = (char)((ulong)uVar13 >> 0x38);
    auVar113 = NEON_aese(auVar286,auVar283);
    auVar283 = NEON_aesmc(auVar113,auVar113);
    bVar115 = auVar283[0] ^ bVar165;
    bVar116 = auVar283[1] ^ bVar166;
    bVar117 = auVar283[2] ^ bVar167;
    bVar118 = auVar283[3] ^ bVar168;
    bVar119 = auVar283[4] ^ bVar169;
    bVar120 = auVar283[5] ^ bVar170;
    bVar121 = auVar283[6] ^ bVar171;
    bVar122 = auVar283[7] ^ bVar172;
    bVar123 = auVar283[8] ^ bVar173;
    bVar124 = auVar283[9] ^ bVar174;
    bVar125 = auVar283[10] ^ bVar175;
    bVar126 = auVar283[0xb] ^ bVar176;
    bVar127 = auVar283[0xc] ^ bVar177;
    bVar128 = auVar283[0xd] ^ bVar178;
    bVar129 = auVar283[0xe] ^ bVar179;
    bVar130 = auVar283[0xf] ^ bVar180;
    auVar286[9] = (char)((ulong)uVar14 >> 8);
    auVar286._0_9_ = pVar1[5];
    auVar286[10] = (char)((ulong)uVar14 >> 0x10);
    auVar286[0xb] = (char)((ulong)uVar14 >> 0x18);
    auVar286[0xc] = (char)((ulong)uVar14 >> 0x20);
    auVar286[0xd] = (char)((ulong)uVar14 >> 0x28);
    auVar286[0xe] = (char)((ulong)uVar14 >> 0x30);
    auVar286[0xf] = (char)((ulong)uVar14 >> 0x38);
    auVar247 = NEON_aese(auVar247,auVar286);
    auVar113 = NEON_aesmc(auVar247,auVar247);
    bVar133 = auVar113[0] ^ bVar33;
    bVar134 = auVar113[1] ^ bVar35;
    bVar135 = auVar113[2] ^ bVar37;
    bVar136 = auVar113[3] ^ bVar39;
    bVar137 = auVar113[4] ^ bVar41;
    bVar138 = auVar113[5] ^ bVar43;
    bVar139 = auVar113[6] ^ bVar45;
    bVar140 = auVar113[7] ^ bVar47;
    bVar141 = auVar113[8] ^ bVar49;
    bVar142 = auVar113[9] ^ bVar51;
    bVar143 = auVar113[10] ^ bVar54;
    bVar144 = auVar113[0xb] ^ bVar57;
    bVar145 = auVar113[0xc] ^ bVar60;
    bVar146 = auVar113[0xd] ^ bVar63;
    bVar147 = auVar113[0xe] ^ bVar66;
    bVar148 = auVar113[0xf] ^ bVar69;
    auVar111[9] = (char)((ulong)uVar7 >> 8);
    auVar111._0_9_ = pVar1[6];
    auVar111[10] = (char)((ulong)uVar7 >> 0x10);
    auVar111[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar111[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar111[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar111[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar111[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar247 = NEON_aese(auVar114,auVar111);
    auVar111 = NEON_aesmc(auVar247,auVar247);
    bVar86 = auVar111[0] ^ bVar215;
    bVar87 = auVar111[1] ^ bVar216;
    bVar88 = auVar111[2] ^ bVar217;
    bVar89 = auVar111[3] ^ bVar218;
    bVar90 = auVar111[4] ^ bVar219;
    bVar91 = auVar111[5] ^ bVar220;
    bVar92 = auVar111[6] ^ bVar221;
    bVar93 = auVar111[7] ^ bVar222;
    bVar94 = auVar111[8] ^ bVar223;
    bVar95 = auVar111[9] ^ bVar224;
    bVar97 = auVar111[10] ^ bVar225;
    bVar99 = auVar111[0xb] ^ bVar226;
    bVar101 = auVar111[0xc] ^ bVar227;
    bVar103 = auVar111[0xd] ^ bVar228;
    bVar105 = auVar111[0xe] ^ bVar229;
    bVar107 = auVar111[0xf] ^ bVar230;
    auVar247[9] = (char)((ulong)uVar6 >> 8);
    auVar247._0_9_ = pVar1[7];
    auVar247[10] = (char)((ulong)uVar6 >> 0x10);
    auVar247[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar247[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar247[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar247[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar247[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar247 = NEON_aese(auVar131,auVar247);
    auVar247 = NEON_aesmc(auVar247,auVar247);
    bVar149 = auVar247[0] ^ bVar231;
    bVar150 = auVar247[1] ^ bVar232;
    bVar151 = auVar247[2] ^ bVar233;
    bVar152 = auVar247[3] ^ bVar234;
    bVar153 = auVar247[4] ^ bVar235;
    bVar154 = auVar247[5] ^ bVar236;
    bVar155 = auVar247[6] ^ bVar237;
    bVar156 = auVar247[7] ^ bVar238;
    bVar157 = auVar247[8] ^ bVar239;
    bVar158 = auVar247[9] ^ bVar240;
    bVar159 = auVar247[10] ^ bVar241;
    bVar160 = auVar247[0xb] ^ bVar242;
    bVar161 = auVar247[0xc] ^ bVar243;
    bVar162 = auVar247[0xd] ^ bVar244;
    bVar163 = auVar247[0xe] ^ bVar245;
    bVar164 = auVar247[0xf] ^ bVar246;
    if (lVar31 == 0x800) break;
    auVar112 = NEON_aese(auVar248,auVar112);
    auVar248 = NEON_aesmc(auVar112,auVar112);
    auVar11[1] = bVar35;
    auVar11[0] = bVar33;
    auVar11[2] = bVar37;
    auVar11[3] = bVar39;
    auVar11[4] = bVar41;
    auVar11[5] = bVar43;
    auVar11[6] = bVar45;
    auVar11[7] = bVar47;
    auVar11[8] = bVar49;
    auVar11[9] = bVar51;
    auVar11[10] = bVar54;
    auVar11[0xb] = bVar57;
    auVar11[0xc] = bVar60;
    auVar11[0xd] = bVar63;
    auVar11[0xe] = bVar66;
    auVar11[0xf] = bVar69;
    auVar112 = NEON_aese(auVar113,auVar11);
    uVar6 = *(undefined8 *)((long)pVar1 + 0x88);
    uVar13 = *(undefined8 *)((long)pVar1 + 0x98);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar27[1] = bVar251;
    auVar27[0] = bVar250;
    auVar27[2] = bVar252;
    auVar27[3] = bVar253;
    auVar27[4] = bVar254;
    auVar27[5] = bVar255;
    auVar27[6] = bVar256;
    auVar27[7] = bVar257;
    auVar27[8] = bVar258;
    auVar27[9] = bVar259;
    auVar27[10] = bVar260;
    auVar27[0xb] = bVar261;
    auVar27[0xc] = bVar262;
    auVar27[0xd] = bVar263;
    auVar27[0xe] = bVar264;
    auVar27[0xf] = bVar265;
    auVar286 = NEON_aese(auVar320,auVar27);
    auVar2[9] = (char)((ulong)uVar6 >> 8);
    auVar2._0_9_ = pVar1[8];
    auVar2[10] = (char)((ulong)uVar6 >> 0x10);
    auVar2[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar2[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar2[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar2[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar2[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar113 = NEON_aese(auVar248,auVar2);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xa8);
    uVar14 = *(undefined8 *)((long)pVar1 + 0xb8);
    auVar3[9] = (char)((ulong)uVar6 >> 8);
    auVar3._0_9_ = pVar1[10];
    auVar3[10] = (char)((ulong)uVar6 >> 0x10);
    auVar3[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar3[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar3[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar3[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar3[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar3);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar108._0_8_ =
         CONCAT17(auVar112[7] ^ (byte)((ulong)uVar181 >> 0x38),
                  CONCAT16(auVar112[6] ^ (byte)((ulong)uVar181 >> 0x30),
                           CONCAT15(auVar112[5] ^ (byte)((ulong)uVar181 >> 0x28),
                                    CONCAT14(auVar112[4] ^ (byte)((ulong)uVar181 >> 0x20),
                                             CONCAT13(auVar112[3] ^ (byte)((ulong)uVar181 >> 0x18),
                                                      CONCAT12(auVar112[2] ^
                                                               (byte)((ulong)uVar181 >> 0x10),
                                                               CONCAT11(auVar112[1] ^
                                                                        (byte)((ulong)uVar181 >> 8),
                                                                        auVar112[0] ^ (byte)uVar181)
                                                              ))))));
    auVar108[8] = auVar112[8] ^ (byte)uVar182;
    auVar108[9] = auVar112[9] ^ (byte)((ulong)uVar182 >> 8);
    auVar108[10] = auVar112[10] ^ (byte)((ulong)uVar182 >> 0x10);
    auVar108[0xb] = auVar112[0xb] ^ (byte)((ulong)uVar182 >> 0x18);
    auVar108[0xc] = auVar112[0xc] ^ (byte)((ulong)uVar182 >> 0x20);
    auVar108[0xd] = auVar112[0xd] ^ (byte)((ulong)uVar182 >> 0x28);
    auVar108[0xe] = auVar112[0xe] ^ (byte)((ulong)uVar182 >> 0x30);
    auVar108[0xf] = auVar112[0xf] ^ (byte)((ulong)uVar182 >> 0x38);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xf8);
    auVar112 = NEON_aesmc(auVar286,auVar286);
    auVar4[9] = (char)((ulong)uVar6 >> 8);
    auVar4._0_9_ = pVar1[0xf];
    auVar4[10] = (char)((ulong)uVar6 >> 0x10);
    auVar4[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar4[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar4[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar4[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar4[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar248 = NEON_aese(auVar112,auVar4);
    auVar24[1] = bVar232;
    auVar24[0] = bVar231;
    auVar24[2] = bVar233;
    auVar24[3] = bVar234;
    auVar24[4] = bVar235;
    auVar24[5] = bVar236;
    auVar24[6] = bVar237;
    auVar24[7] = bVar238;
    auVar24[8] = bVar239;
    auVar24[9] = bVar240;
    auVar24[10] = bVar241;
    auVar24[0xb] = bVar242;
    auVar24[0xc] = bVar243;
    auVar24[0xd] = bVar244;
    auVar24[0xe] = bVar245;
    auVar24[0xf] = bVar246;
    auVar112 = NEON_aese(auVar247,auVar24);
    auVar247 = NEON_aesmc(auVar112,auVar112);
    auVar112 = NEON_aesmc(auVar113,auVar113);
    auVar113 = NEON_aesmc(auVar248,auVar248);
    uVar181 = CONCAT17(auVar113[7] ^ (byte)((ulong)uVar213 >> 0x38),
                       CONCAT16(auVar113[6] ^ (byte)((ulong)uVar213 >> 0x30),
                                CONCAT15(auVar113[5] ^ (byte)((ulong)uVar213 >> 0x28),
                                         CONCAT14(auVar113[4] ^ (byte)((ulong)uVar213 >> 0x20),
                                                  CONCAT13(auVar113[3] ^
                                                           (byte)((ulong)uVar213 >> 0x18),
                                                           CONCAT12(auVar113[2] ^
                                                                    (byte)((ulong)uVar213 >> 0x10),
                                                                    CONCAT11(auVar113[1] ^
                                                                             (byte)((ulong)uVar213
                                                                                   >> 8),
                                                                             auVar113[0] ^
                                                                             (byte)uVar213)))))));
    uVar182 = CONCAT17(auVar113[0xf] ^ (byte)((ulong)uVar214 >> 0x38),
                       CONCAT16(auVar113[0xe] ^ (byte)((ulong)uVar214 >> 0x30),
                                CONCAT15(auVar113[0xd] ^ (byte)((ulong)uVar214 >> 0x28),
                                         CONCAT14(auVar113[0xc] ^ (byte)((ulong)uVar214 >> 0x20),
                                                  CONCAT13(auVar113[0xb] ^
                                                           (byte)((ulong)uVar214 >> 0x18),
                                                           CONCAT12(auVar113[10] ^
                                                                    (byte)((ulong)uVar214 >> 0x10),
                                                                    CONCAT11(auVar113[9] ^
                                                                             (byte)((ulong)uVar214
                                                                                   >> 8),
                                                                             auVar113[8] ^
                                                                             (byte)uVar214)))))));
    uVar213 = CONCAT17(auVar112[7] ^ bVar77,
                       CONCAT16(auVar112[6] ^ bVar76,
                                CONCAT15(auVar112[5] ^ bVar75,
                                         CONCAT14(auVar112[4] ^ bVar74,
                                                  CONCAT13(auVar112[3] ^ bVar73,
                                                           CONCAT12(auVar112[2] ^ bVar72,
                                                                    CONCAT11(auVar112[1] ^ bVar71,
                                                                             auVar112[0] ^ bVar70)))
                                                 ))));
    uVar214 = CONCAT17(auVar112[0xf] ^ bVar85,
                       CONCAT16(auVar112[0xe] ^ bVar84,
                                CONCAT15(auVar112[0xd] ^ bVar83,
                                         CONCAT14(auVar112[0xc] ^ bVar82,
                                                  CONCAT13(auVar112[0xb] ^ bVar81,
                                                           CONCAT12(auVar112[10] ^ bVar80,
                                                                    CONCAT11(auVar112[9] ^ bVar79,
                                                                             auVar112[8] ^ bVar78)))
                                                 ))));
    uVar6 = *(undefined8 *)((long)pVar1 + 200);
    uVar7 = *(undefined8 *)((long)pVar1 + 0xd8);
    auVar5[9] = (char)((ulong)uVar6 >> 8);
    auVar5._0_9_ = pVar1[0xc];
    auVar5[10] = (char)((ulong)uVar6 >> 0x10);
    auVar5[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar5[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar5[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar5[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar5[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar247,auVar5);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar33 = auVar112[0] ^ bVar183;
    bVar35 = auVar112[1] ^ bVar185;
    bVar37 = auVar112[2] ^ bVar187;
    bVar39 = auVar112[3] ^ bVar189;
    bVar41 = auVar112[4] ^ bVar191;
    bVar43 = auVar112[5] ^ bVar193;
    bVar45 = auVar112[6] ^ bVar195;
    bVar47 = auVar112[7] ^ bVar197;
    bVar49 = auVar112[8] ^ bVar198;
    bVar51 = auVar112[9] ^ bVar200;
    bVar54 = auVar112[10] ^ bVar202;
    bVar57 = auVar112[0xb] ^ bVar204;
    bVar60 = auVar112[0xc] ^ bVar206;
    bVar63 = auVar112[0xd] ^ bVar208;
    bVar66 = auVar112[0xe] ^ bVar210;
    bVar69 = auVar112[0xf] ^ bVar212;
    auVar18[8] = bStack_58;
    auVar18._0_8_ = uStack_60;
    auVar18[9] = (byte)uStack_57;
    auVar18[10] = bVar53;
    auVar18[0xb] = bVar56;
    auVar18[0xc] = bVar59;
    auVar18[0xd] = bVar62;
    auVar18[0xe] = bVar65;
    auVar18[0xf] = bVar68;
    auVar112 = NEON_aese(auVar284,auVar18);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar28[9] = (char)((ulong)uVar14 >> 8);
    auVar28._0_9_ = pVar1[0xb];
    auVar28[10] = (char)((ulong)uVar14 >> 0x10);
    auVar28[0xb] = (char)((ulong)uVar14 >> 0x18);
    auVar28[0xc] = (char)((ulong)uVar14 >> 0x20);
    auVar28[0xd] = (char)((ulong)uVar14 >> 0x28);
    auVar28[0xe] = (char)((ulong)uVar14 >> 0x30);
    auVar28[0xf] = (char)((ulong)uVar14 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar28);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar183 = auVar112[0] ^ (byte)uVar109;
    bVar185 = auVar112[1] ^ (byte)((ulong)uVar109 >> 8);
    bVar187 = auVar112[2] ^ (byte)((ulong)uVar109 >> 0x10);
    bVar189 = auVar112[3] ^ (byte)((ulong)uVar109 >> 0x18);
    bVar191 = auVar112[4] ^ (byte)((ulong)uVar109 >> 0x20);
    bVar193 = auVar112[5] ^ (byte)((ulong)uVar109 >> 0x28);
    bVar195 = auVar112[6] ^ (byte)((ulong)uVar109 >> 0x30);
    bVar197 = auVar112[7] ^ (byte)((ulong)uVar109 >> 0x38);
    bVar198 = auVar112[8] ^ (byte)uVar110;
    bVar200 = auVar112[9] ^ (byte)((ulong)uVar110 >> 8);
    bVar202 = auVar112[10] ^ (byte)((ulong)uVar110 >> 0x10);
    bVar204 = auVar112[0xb] ^ (byte)((ulong)uVar110 >> 0x18);
    bVar206 = auVar112[0xc] ^ (byte)((ulong)uVar110 >> 0x20);
    bVar208 = auVar112[0xd] ^ (byte)((ulong)uVar110 >> 0x28);
    bVar210 = auVar112[0xe] ^ (byte)((ulong)uVar110 >> 0x30);
    bVar212 = auVar112[0xf] ^ (byte)((ulong)uVar110 >> 0x38);
    auVar21[1] = bVar216;
    auVar21[0] = bVar215;
    auVar21[2] = bVar217;
    auVar21[3] = bVar218;
    auVar21[4] = bVar219;
    auVar21[5] = bVar220;
    auVar21[6] = bVar221;
    auVar21[7] = bVar222;
    auVar21[8] = bVar223;
    auVar21[9] = bVar224;
    auVar21[10] = bVar225;
    auVar21[0xb] = bVar226;
    auVar21[0xc] = bVar227;
    auVar21[0xd] = bVar228;
    auVar21[0xe] = bVar229;
    auVar21[0xf] = bVar230;
    auVar112 = NEON_aese(auVar111,auVar21);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar12[9] = (char)((ulong)uVar13 >> 8);
    auVar12._0_9_ = pVar1[9];
    auVar12[10] = (char)((ulong)uVar13 >> 0x10);
    auVar12[0xb] = (char)((ulong)uVar13 >> 0x18);
    auVar12[0xc] = (char)((ulong)uVar13 >> 0x20);
    auVar12[0xd] = (char)((ulong)uVar13 >> 0x28);
    auVar12[0xe] = (char)((ulong)uVar13 >> 0x30);
    auVar12[0xf] = (char)((ulong)uVar13 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar12);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    uVar109 = CONCAT17(auVar112[7] ^ auVar321[7],
                       CONCAT16(auVar112[6] ^ auVar321[6],
                                CONCAT15(auVar112[5] ^ auVar321[5],
                                         CONCAT14(auVar112[4] ^ auVar321[4],
                                                  CONCAT13(auVar112[3] ^ auVar321[3],
                                                           CONCAT12(auVar112[2] ^ auVar321[2],
                                                                    CONCAT11(auVar112[1] ^
                                                                             auVar321[1],
                                                                             auVar112[0] ^
                                                                             auVar321[0])))))));
    uVar110 = CONCAT17(auVar112[0xf] ^ auVar321[0xf],
                       CONCAT16(auVar112[0xe] ^ auVar321[0xe],
                                CONCAT15(auVar112[0xd] ^ auVar321[0xd],
                                         CONCAT14(auVar112[0xc] ^ auVar321[0xc],
                                                  CONCAT13(auVar112[0xb] ^ auVar321[0xb],
                                                           CONCAT12(auVar112[10] ^ auVar321[10],
                                                                    CONCAT11(auVar112[9] ^
                                                                             auVar321[9],
                                                                             auVar112[8] ^
                                                                             auVar321[8])))))));
    auVar15[1] = bVar166;
    auVar15[0] = bVar165;
    auVar15[2] = bVar167;
    auVar15[3] = bVar168;
    auVar15[4] = bVar169;
    auVar15[5] = bVar170;
    auVar15[6] = bVar171;
    auVar15[7] = bVar172;
    auVar15[8] = bVar173;
    auVar15[9] = bVar174;
    auVar15[10] = bVar175;
    auVar15[0xb] = bVar176;
    auVar15[0xc] = bVar177;
    auVar15[0xd] = bVar178;
    auVar15[0xe] = bVar179;
    auVar15[0xf] = bVar180;
    auVar112 = NEON_aese(auVar283,auVar15);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar10[9] = (char)((ulong)uVar7 >> 8);
    auVar10._0_9_ = pVar1[0xd];
    auVar10[10] = (char)((ulong)uVar7 >> 0x10);
    auVar10[0xb] = (char)((ulong)uVar7 >> 0x18);
    auVar10[0xc] = (char)((ulong)uVar7 >> 0x20);
    auVar10[0xd] = (char)((ulong)uVar7 >> 0x28);
    auVar10[0xe] = (char)((ulong)uVar7 >> 0x30);
    auVar10[0xf] = (char)((ulong)uVar7 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar10);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar321[0] = auVar112[0] ^ bVar32;
    auVar321[1] = auVar112[1] ^ bVar34;
    auVar321[2] = auVar112[2] ^ bVar36;
    auVar321[3] = auVar112[3] ^ bVar38;
    auVar321[4] = auVar112[4] ^ bVar40;
    auVar321[5] = auVar112[5] ^ bVar42;
    auVar321[6] = auVar112[6] ^ bVar44;
    auVar321[7] = auVar112[7] ^ bVar46;
    auVar321[8] = auVar112[8] ^ bVar48;
    auVar321[9] = auVar112[9] ^ bVar50;
    auVar321[10] = auVar112[10] ^ bVar52;
    auVar321[0xb] = auVar112[0xb] ^ bVar55;
    auVar321[0xc] = auVar112[0xc] ^ bVar58;
    auVar321[0xd] = auVar112[0xd] ^ bVar61;
    auVar321[0xe] = auVar112[0xe] ^ bVar64;
    auVar321[0xf] = auVar112[0xf] ^ bVar67;
    auVar8[8] = bStack_48;
    auVar8._0_8_ = uStack_50;
    auVar8[9] = (byte)uStack_47;
    auVar8[10] = bVar96;
    auVar8[0xb] = bVar98;
    auVar8[0xc] = bVar100;
    auVar8[0xd] = bVar102;
    auVar8[0xe] = bVar104;
    auVar8[0xf] = bVar106;
    auVar112 = NEON_aese(auVar249,auVar8);
    uVar6 = *(undefined8 *)((long)pVar1 + 0xe8);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    auVar9[9] = (char)((ulong)uVar6 >> 8);
    auVar9._0_9_ = pVar1[0xe];
    auVar9[10] = (char)((ulong)uVar6 >> 0x10);
    auVar9[0xb] = (char)((ulong)uVar6 >> 0x18);
    auVar9[0xc] = (char)((ulong)uVar6 >> 0x20);
    auVar9[0xd] = (char)((ulong)uVar6 >> 0x28);
    auVar9[0xe] = (char)((ulong)uVar6 >> 0x30);
    auVar9[0xf] = (char)((ulong)uVar6 >> 0x38);
    auVar112 = NEON_aese(auVar112,auVar9);
    auVar112 = NEON_aesmc(auVar112,auVar112);
    bVar70 = auVar112[0] ^ auVar132[0];
    bVar71 = auVar112[1] ^ auVar132[1];
    bVar72 = auVar112[2] ^ auVar132[2];
    bVar73 = auVar112[3] ^ auVar132[3];
    bVar74 = auVar112[4] ^ auVar132[4];
    bVar75 = auVar112[5] ^ auVar132[5];
    bVar76 = auVar112[6] ^ auVar132[6];
    bVar77 = auVar112[7] ^ auVar132[7];
    bVar78 = auVar112[8] ^ auVar132[8];
    bVar79 = auVar112[9] ^ auVar132[9];
    bVar80 = auVar112[10] ^ auVar132[10];
    bVar81 = auVar112[0xb] ^ auVar132[0xb];
    bVar82 = auVar112[0xc] ^ auVar132[0xc];
    bVar83 = auVar112[0xd] ^ auVar132[0xd];
    bVar84 = auVar112[0xe] ^ auVar132[0xe];
    bVar85 = auVar112[0xf] ^ auVar132[0xf];
    lVar31 = lVar31 + 0x100;
    uStack_57 = (undefined7)
                (CONCAT17(bVar148,CONCAT16(bVar147,CONCAT15(bVar146,CONCAT14(bVar145,CONCAT13(
                                                  bVar144,CONCAT12(bVar143,CONCAT11(bVar142,bVar141)
                                                                  )))))) >> 8);
    uStack_60 = CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(bVar137,CONCAT13(bVar136
                                                  ,CONCAT12(bVar135,CONCAT11(bVar134,bVar133)))))));
    uStack_47 = (undefined7)
                (CONCAT17(bVar107,CONCAT16(bVar105,CONCAT15(bVar103,CONCAT14(bVar101,CONCAT13(bVar99
                                                  ,CONCAT12(bVar97,CONCAT11(bVar95,bVar94))))))) >>
                8);
    uStack_50 = CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,CONCAT13(bVar89,
                                                  CONCAT12(bVar88,CONCAT11(bVar87,bVar86)))))));
    auVar112[1] = bVar323;
    auVar112[0] = bVar322;
    auVar112[2] = bVar324;
    auVar112[3] = bVar325;
    auVar112[4] = bVar326;
    auVar112[5] = bVar327;
    auVar112[6] = bVar328;
    auVar112[7] = bVar329;
    auVar112[8] = bVar330;
    auVar112[9] = bVar331;
    auVar112[10] = bVar332;
    auVar112[0xb] = bVar333;
    auVar112[0xc] = bVar334;
    auVar112[0xd] = bVar335;
    auVar112[0xe] = bVar336;
    auVar112[0xf] = bVar337;
    auVar132._8_8_ = auVar108._8_8_;
    auVar132._0_8_ = auVar108._0_8_;
    bVar32 = bVar33;
    bVar34 = bVar35;
    bVar36 = bVar37;
    bVar38 = bVar39;
    bVar40 = bVar41;
    bVar42 = bVar43;
    bVar44 = bVar45;
    bVar46 = bVar47;
    bVar48 = bVar49;
    bVar50 = bVar51;
    bVar52 = bVar54;
    bVar55 = bVar57;
    bVar58 = bVar60;
    bVar61 = bVar63;
    bVar64 = bVar66;
    bVar67 = bVar69;
    bVar33 = bVar115;
    bVar35 = bVar116;
    bVar37 = bVar117;
    bVar39 = bVar118;
    bVar41 = bVar119;
    bVar43 = bVar120;
    bVar45 = bVar121;
    bVar47 = bVar122;
    bVar49 = bVar123;
    bVar51 = bVar124;
    bVar54 = bVar125;
    bVar57 = bVar126;
    bVar60 = bVar127;
    bVar63 = bVar128;
    bVar66 = bVar129;
    bVar69 = bVar130;
    bVar165 = bVar303;
    bVar166 = bVar304;
    bVar167 = bVar305;
    bVar168 = bVar306;
    bVar169 = bVar307;
    bVar170 = bVar308;
    bVar171 = bVar309;
    bVar172 = bVar310;
    bVar173 = bVar311;
    bVar174 = bVar312;
    bVar175 = bVar313;
    bVar176 = bVar314;
    bVar177 = bVar315;
    bVar178 = bVar316;
    bVar179 = bVar317;
    bVar180 = bVar318;
    bVar215 = bVar287;
    bVar216 = bVar288;
    bVar217 = bVar289;
    bVar218 = bVar290;
    bVar219 = bVar291;
    bVar220 = bVar292;
    bVar221 = bVar293;
    bVar222 = bVar294;
    bVar223 = bVar295;
    bVar224 = bVar296;
    bVar225 = bVar297;
    bVar226 = bVar298;
    bVar227 = bVar299;
    bVar228 = bVar300;
    bVar229 = bVar301;
    bVar230 = bVar302;
    bVar231 = bVar266;
    bVar232 = bVar267;
    bVar233 = bVar268;
    bVar234 = bVar269;
    bVar235 = bVar270;
    bVar236 = bVar271;
    bVar237 = bVar272;
    bVar238 = bVar273;
    bVar239 = bVar274;
    bVar240 = bVar275;
    bVar241 = bVar276;
    bVar242 = bVar277;
    bVar243 = bVar278;
    bVar244 = bVar279;
    bVar245 = bVar280;
    bVar246 = bVar281;
    bVar250 = bVar149;
    bVar251 = bVar150;
    bVar252 = bVar151;
    bVar253 = bVar152;
    bVar254 = bVar153;
    bVar255 = bVar154;
    bVar256 = bVar155;
    bVar257 = bVar156;
    bVar258 = bVar157;
    bVar259 = bVar158;
    bVar260 = bVar159;
    bVar261 = bVar160;
    bVar262 = bVar161;
    bVar263 = bVar162;
    bVar264 = bVar163;
    bVar265 = bVar164;
    bStack_58 = bVar141;
    bStack_48 = bVar94;
  }
  param_2[5] = CONCAT17(bVar107,CONCAT16(bVar105,CONCAT15(bVar103,CONCAT14(bVar101,CONCAT13(bVar99,
                                                  CONCAT12(bVar97,CONCAT11(bVar95,bVar94)))))));
  param_2[4] = CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,CONCAT13(bVar89,
                                                  CONCAT12(bVar88,CONCAT11(bVar87,bVar86)))))));
  param_2[7] = auVar321._8_8_;
  param_2[6] = auVar321._0_8_;
  param_2[9] = CONCAT17(bVar148,CONCAT16(bVar147,CONCAT15(bVar146,CONCAT14(bVar145,CONCAT13(bVar144,
                                                  CONCAT12(bVar143,CONCAT11(bVar142,bVar141)))))));
  param_2[8] = CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(bVar137,CONCAT13(bVar136,
                                                  CONCAT12(bVar135,CONCAT11(bVar134,bVar133)))))));
  param_2[0xb] = uVar182;
  param_2[10] = uVar181;
  *(byte *)(param_2 + 0xc) = bVar322;
  *(byte *)((long)param_2 + 0x61) = bVar323;
  *(byte *)((long)param_2 + 0x62) = bVar324;
  *(byte *)((long)param_2 + 99) = bVar325;
  *(byte *)((long)param_2 + 100) = bVar326;
  *(byte *)((long)param_2 + 0x65) = bVar327;
  *(byte *)((long)param_2 + 0x66) = bVar328;
  *(byte *)((long)param_2 + 0x67) = bVar329;
  *(byte *)(param_2 + 0xd) = bVar330;
  *(byte *)((long)param_2 + 0x69) = bVar331;
  *(byte *)((long)param_2 + 0x6a) = bVar332;
  *(byte *)((long)param_2 + 0x6b) = bVar333;
  *(byte *)((long)param_2 + 0x6c) = bVar334;
  *(byte *)((long)param_2 + 0x6d) = bVar335;
  *(byte *)((long)param_2 + 0x6e) = bVar336;
  *(byte *)((long)param_2 + 0x6f) = bVar337;
  param_2[0xf] = uVar110;
  param_2[0xe] = uVar109;
  param_2[0x11] =
       CONCAT17(bVar164,CONCAT16(bVar163,CONCAT15(bVar162,CONCAT14(bVar161,CONCAT13(bVar160,CONCAT12
                                                  (bVar159,CONCAT11(bVar158,bVar157)))))));
  param_2[0x10] =
       CONCAT17(bVar156,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,CONCAT13(bVar152,CONCAT12
                                                  (bVar151,CONCAT11(bVar150,bVar149)))))));
  param_2[0x13] =
       CONCAT17(bVar212,CONCAT16(bVar210,CONCAT15(bVar208,CONCAT14(bVar206,CONCAT13(bVar204,CONCAT12
                                                  (bVar202,CONCAT11(bVar200,bVar198)))))));
  param_2[0x12] =
       CONCAT17(bVar197,CONCAT16(bVar195,CONCAT15(bVar193,CONCAT14(bVar191,CONCAT13(bVar189,CONCAT12
                                                  (bVar187,CONCAT11(bVar185,bVar183)))))));
  param_2[0x15] =
       CONCAT17(bVar130,CONCAT16(bVar129,CONCAT15(bVar128,CONCAT14(bVar127,CONCAT13(bVar126,CONCAT12
                                                  (bVar125,CONCAT11(bVar124,bVar123)))))));
  param_2[0x14] =
       CONCAT17(bVar122,CONCAT16(bVar121,CONCAT15(bVar120,CONCAT14(bVar119,CONCAT13(bVar118,CONCAT12
                                                  (bVar117,CONCAT11(bVar116,bVar115)))))));
  param_2[0x17] =
       CONCAT17(bVar67,CONCAT16(bVar64,CONCAT15(bVar61,CONCAT14(bVar58,CONCAT13(bVar55,CONCAT12(
                                                  bVar52,CONCAT11(bVar50,bVar48)))))));
  param_2[0x16] =
       CONCAT17(bVar46,CONCAT16(bVar44,CONCAT15(bVar42,CONCAT14(bVar40,CONCAT13(bVar38,CONCAT12(
                                                  bVar36,CONCAT11(bVar34,bVar32)))))));
  param_2[0x19] =
       CONCAT17(bVar281,CONCAT16(bVar280,CONCAT15(bVar279,CONCAT14(bVar278,CONCAT13(bVar277,CONCAT12
                                                  (bVar276,CONCAT11(bVar275,bVar274)))))));
  param_2[0x18] =
       CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(bVar269,CONCAT12
                                                  (bVar268,CONCAT11(bVar267,bVar266)))))));
  param_2[0x1b] = auVar132._8_8_;
  param_2[0x1a] = auVar132._0_8_;
  param_2[0x1d] =
       CONCAT17(bVar302,CONCAT16(bVar301,CONCAT15(bVar300,CONCAT14(bVar299,CONCAT13(bVar298,CONCAT12
                                                  (bVar297,CONCAT11(bVar296,bVar295)))))));
  param_2[0x1c] =
       CONCAT17(bVar294,CONCAT16(bVar293,CONCAT15(bVar292,CONCAT14(bVar291,CONCAT13(bVar290,CONCAT12
                                                  (bVar289,CONCAT11(bVar288,bVar287)))))));
  param_2[0x1f] = uVar214;
  param_2[0x1e] = uVar213;
  param_2[1] = CONCAT17(bVar318 ^ bVar211,
                        CONCAT16(bVar317 ^ bVar209,
                                 CONCAT15(bVar316 ^ bVar207,
                                          CONCAT14(bVar315 ^ bVar205,
                                                   CONCAT13(bVar314 ^ bVar203,
                                                            CONCAT12(bVar313 ^ bVar201,
                                                                     CONCAT11(bVar312 ^ bVar199,
                                                                              bVar311 ^ (byte)uVar20
                                                                             )))))));
  *param_2 = CONCAT17(bVar310 ^ bVar196,
                      CONCAT16(bVar309 ^ bVar194,
                               CONCAT15(bVar308 ^ bVar192,
                                        CONCAT14(bVar307 ^ bVar190,
                                                 CONCAT13(bVar306 ^ bVar188,
                                                          CONCAT12(bVar305 ^ bVar186,
                                                                   CONCAT11(bVar304 ^ bVar184,
                                                                            bVar303 ^ (byte)uVar19))
                                                         )))));
  param_2[3] = CONCAT17(bVar85,CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar82,CONCAT13(bVar81,
                                                  CONCAT12(bVar80,CONCAT11(bVar79,bVar78)))))));
  param_2[2] = CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar74,CONCAT13(bVar73,
                                                  CONCAT12(bVar72,CONCAT11(bVar71,bVar70)))))));
  return;
}



/* Entry: 005d257c; end: 005d25fb;  */

void FUN_005d257c(undefined8 *param_1)

{
  int iVar1;
  
  if ((bRam0000000000b6c050 & 1) == 0) {
    iVar1 = 0xb6c050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puRam0000000000b6c040 = &UNK_00817f10;
      uRam0000000000b6c048 = 1;
      ___cxa_guard_release(0xb6c050);
    }
  }
  *param_1 = puRam0000000000b6c040;
  return;
}



/* Entry: 005d25fc; end: 005d25ff;  */

void FUN_005d25fc(undefined8 *param_1)

{
  int iVar1;
  
  if ((bRam0000000000b6c050 & 1) == 0) {
    iVar1 = 0xb6c050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puRam0000000000b6c040 = &UNK_00817f10;
      uRam0000000000b6c048 = 1;
      ___cxa_guard_release(0xb6c050);
    }
  }
  *param_1 = puRam0000000000b6c040;
  return;
}



/* Entry: 005d2600; end: 005d278f;  */

void FUN_005d2600(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (iRam0000000000b62b40 != 0xdd) {
    FUN_0056f028(0xb62b40,1,FUN_005d27d8);
  }
  ppuVar6 = &PTR___tlv_bootstrap_00b2c4c8;
  (*(code *)PTR___tlv_bootstrap_00b2c4c8)();
  puVar7 = *ppuVar6;
  if (puVar7 == (undefined *)0x8) {
    do {
      uVar8 = uRam0000000000b62b48;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0xb62b48,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        uRam0000000000b62b48 = uRam0000000000b62b48 + 1;
      }
    } while (cVar4 != '\0');
    puVar7 = (undefined *)(uVar8 & 7);
    *ppuVar6 = puVar7;
  }
  lVar10 = *(long *)((long)puVar7 * 8 + 0xb62b80);
  puVar1 = (uint *)(lVar10 + 0x100);
  uVar3 = *(uint *)(lVar10 + 0x100);
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = *puVar1;
      if (uVar2 != uVar3) {
        ClearExclusiveLocal();
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar2 & 1) == 0) goto joined_r0x005d2730;
  }
  FUN_00777048();
joined_r0x005d2730:
  if (param_2 != 0) {
    uVar8 = *(ulong *)(lVar10 + 0x110);
    do {
      if (0x3f < uVar8) {
        *(undefined8 *)(lVar10 + 0x110) = 4;
        FUN_005d2330(*(undefined8 *)(lVar10 + 0x108),lVar10);
        uVar8 = *(ulong *)(lVar10 + 0x110);
      }
      uVar9 = uVar8 * -4 + 0x100;
      if (param_2 <= uVar9) {
        uVar9 = param_2;
      }
      _memcpy(param_1,lVar10 + uVar8 * 4,uVar9);
      param_1 = param_1 + uVar9;
      uVar8 = *(long *)(lVar10 + 0x110) + (uVar9 + 3 >> 2);
      *(ulong *)(lVar10 + 0x110) = uVar8;
      param_2 = param_2 - uVar9;
    } while (param_2 != 0);
  }
  uVar3 = *puVar1;
  do {
    uVar2 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (7 < uVar2) {
    FUN_007771d4();
  }
  return;
}



/* Entry: 005d2790; end: 005d27d7;  */

undefined8 * FUN_005d2790(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  uVar1 = *puVar5;
  do {
    uVar2 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar2) {
    FUN_007771d4();
  }
  return param_1;
}



/* Entry: 005d27d8; end: 005d2983;  */

char * FUN_005d27d8(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  qword *pqVar6;
  section *psVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  qword qVar14;
  qword qVar15;
  qword qVar16;
  qword qVar17;
  qword qVar18;
  qword qVar19;
  qword qVar20;
  qword qVar21;
  qword qVar22;
  qword qVar23;
  qword qVar24;
  qword qVar25;
  qword qVar26;
  qword qVar27;
  qword qVar28;
  qword qVar29;
  qword qVar30;
  qword qVar31;
  qword qVar32;
  qword qVar33;
  qword qVar34;
  qword qVar35;
  qword qVar36;
  qword qVar37;
  qword qVar38;
  qword qVar39;
  qword qVar40;
  qword qVar41;
  qword qVar42;
  qword qVar43;
  qword qVar44;
  qword qVar45;
  char acStack_8a8 [16];
  long lStack_898;
  qword *pqStack_890;
  undefined8 uStack_888;
  long lStack_880;
  char *pcStack_878;
  undefined1 *puStack_870;
  code *pcStack_868;
  qword aqStack_858 [257];
  
  aqStack_858[0x100] = *(qword *)PTR____stack_chk_guard_00999f88;
  pqVar6 = aqStack_858;
  FUN_005d2984(pqVar6,0x200);
  if ((int)pqVar6 == 0) {
    FUN_005d2ab4();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x5d2974);
    (*pcVar5)();
  }
  lVar12 = 0;
  do {
    psVar7 = &section_00000158;
    __Znam();
    if (((ulong)psVar7 & 0x3f) != 0) {
      psVar7 = (section *)(((ulong)psVar7 & 0xffffffffffffffc0) + 0x40);
    }
    psVar7[3].addr = 0;
    psVar7[3].sectname[8] = '\0';
    psVar7[3].sectname[9] = '\0';
    psVar7[3].sectname[10] = '\0';
    psVar7[3].sectname[0xb] = '\0';
    psVar7[3].sectname[0xc] = '\0';
    psVar7[3].sectname[0xd] = '\0';
    psVar7[3].sectname[0xe] = '\0';
    psVar7[3].sectname[0xf] = '\0';
    psVar7[3].sectname[0] = '\0';
    psVar7[3].sectname[1] = '\0';
    psVar7[3].sectname[2] = '\0';
    psVar7[3].sectname[3] = '\0';
    psVar7[3].sectname[4] = '\0';
    psVar7[3].sectname[5] = '\0';
    psVar7[3].sectname[6] = '\0';
    psVar7[3].sectname[7] = '\0';
    psVar7[3].segname[8] = '\0';
    psVar7[3].segname[9] = '\0';
    psVar7[3].segname[10] = '\0';
    psVar7[3].segname[0xb] = '\0';
    psVar7[3].segname[0xc] = '\0';
    psVar7[3].segname[0xd] = '\0';
    psVar7[3].segname[0xe] = '\0';
    psVar7[3].segname[0xf] = '\0';
    psVar7[3].segname[0] = '\0';
    psVar7[3].segname[1] = '\0';
    psVar7[3].segname[2] = '\0';
    psVar7[3].segname[3] = '\0';
    psVar7[3].segname[4] = '\0';
    psVar7[3].segname[5] = '\0';
    psVar7[3].segname[6] = '\0';
    psVar7[3].segname[7] = '\0';
    psVar7[2].reloff = 0;
    psVar7[2].nrelocs = 0;
    psVar7[2].offset = 0;
    psVar7[2].align = 0;
    psVar7[2].reserved2 = 0;
    psVar7[2].reserved3 = 0;
    psVar7[2].flags = 0;
    psVar7[2].reserved1 = 0;
    psVar7[2].segname[8] = '\0';
    psVar7[2].segname[9] = '\0';
    psVar7[2].segname[10] = '\0';
    psVar7[2].segname[0xb] = '\0';
    psVar7[2].segname[0xc] = '\0';
    psVar7[2].segname[0xd] = '\0';
    psVar7[2].segname[0xe] = '\0';
    psVar7[2].segname[0xf] = '\0';
    psVar7[2].segname[0] = '\0';
    psVar7[2].segname[1] = '\0';
    psVar7[2].segname[2] = '\0';
    psVar7[2].segname[3] = '\0';
    psVar7[2].segname[4] = '\0';
    psVar7[2].segname[5] = '\0';
    psVar7[2].segname[6] = '\0';
    psVar7[2].segname[7] = '\0';
    psVar7[2].size = 0;
    psVar7[2].addr = 0;
    psVar7[1].reserved2 = 0;
    psVar7[1].reserved3 = 0;
    psVar7[1].flags = 0;
    psVar7[1].reserved1 = 0;
    psVar7[2].sectname[8] = '\0';
    psVar7[2].sectname[9] = '\0';
    psVar7[2].sectname[10] = '\0';
    psVar7[2].sectname[0xb] = '\0';
    psVar7[2].sectname[0xc] = '\0';
    psVar7[2].sectname[0xd] = '\0';
    psVar7[2].sectname[0xe] = '\0';
    psVar7[2].sectname[0xf] = '\0';
    psVar7[2].sectname[0] = '\0';
    psVar7[2].sectname[1] = '\0';
    psVar7[2].sectname[2] = '\0';
    psVar7[2].sectname[3] = '\0';
    psVar7[2].sectname[4] = '\0';
    psVar7[2].sectname[5] = '\0';
    psVar7[2].sectname[6] = '\0';
    psVar7[2].sectname[7] = '\0';
    psVar7[1].size = 0;
    psVar7[1].addr = 0;
    psVar7[1].reloff = 0;
    psVar7[1].nrelocs = 0;
    psVar7[1].offset = 0;
    psVar7[1].align = 0;
    psVar7[1].sectname[8] = '\0';
    psVar7[1].sectname[9] = '\0';
    psVar7[1].sectname[10] = '\0';
    psVar7[1].sectname[0xb] = '\0';
    psVar7[1].sectname[0xc] = '\0';
    psVar7[1].sectname[0xd] = '\0';
    psVar7[1].sectname[0xe] = '\0';
    psVar7[1].sectname[0xf] = '\0';
    psVar7[1].sectname[0] = '\0';
    psVar7[1].sectname[1] = '\0';
    psVar7[1].sectname[2] = '\0';
    psVar7[1].sectname[3] = '\0';
    psVar7[1].sectname[4] = '\0';
    psVar7[1].sectname[5] = '\0';
    psVar7[1].sectname[6] = '\0';
    psVar7[1].sectname[7] = '\0';
    psVar7[1].segname[8] = '\0';
    psVar7[1].segname[9] = '\0';
    psVar7[1].segname[10] = '\0';
    psVar7[1].segname[0xb] = '\0';
    psVar7[1].segname[0xc] = '\0';
    psVar7[1].segname[0xd] = '\0';
    psVar7[1].segname[0xe] = '\0';
    psVar7[1].segname[0xf] = '\0';
    psVar7[1].segname[0] = '\0';
    psVar7[1].segname[1] = '\0';
    psVar7[1].segname[2] = '\0';
    psVar7[1].segname[3] = '\0';
    psVar7[1].segname[4] = '\0';
    psVar7[1].segname[5] = '\0';
    psVar7[1].segname[6] = '\0';
    psVar7[1].segname[7] = '\0';
    psVar7->reloff = 0;
    psVar7->nrelocs = 0;
    psVar7->offset = 0;
    psVar7->align = 0;
    psVar7->reserved2 = 0;
    psVar7->reserved3 = 0;
    psVar7->flags = 0;
    psVar7->reserved1 = 0;
    psVar7->segname[8] = '\0';
    psVar7->segname[9] = '\0';
    psVar7->segname[10] = '\0';
    psVar7->segname[0xb] = '\0';
    psVar7->segname[0xc] = '\0';
    psVar7->segname[0xd] = '\0';
    psVar7->segname[0xe] = '\0';
    psVar7->segname[0xf] = '\0';
    psVar7->segname[0] = '\0';
    psVar7->segname[1] = '\0';
    psVar7->segname[2] = '\0';
    psVar7->segname[3] = '\0';
    psVar7->segname[4] = '\0';
    psVar7->segname[5] = '\0';
    psVar7->segname[6] = '\0';
    psVar7->segname[7] = '\0';
    psVar7->size = 0;
    psVar7->addr = 0;
    psVar7->sectname[8] = '\0';
    psVar7->sectname[9] = '\0';
    psVar7->sectname[10] = '\0';
    psVar7->sectname[0xb] = '\0';
    psVar7->sectname[0xc] = '\0';
    psVar7->sectname[0xd] = '\0';
    psVar7->sectname[0xe] = '\0';
    psVar7->sectname[0xf] = '\0';
    psVar7->sectname[0] = '\0';
    psVar7->sectname[1] = '\0';
    psVar7->sectname[2] = '\0';
    psVar7->sectname[3] = '\0';
    psVar7->sectname[4] = '\0';
    psVar7->sectname[5] = '\0';
    psVar7->sectname[6] = '\0';
    psVar7->sectname[7] = '\0';
    psVar7[3].segname[0] = '\x02';
    psVar7[3].segname[1] = '\0';
    psVar7[3].segname[2] = '\0';
    psVar7[3].segname[3] = '\0';
    pcVar8 = psVar7[3].segname + 8;
    FUN_005d257c();
    pcVar13 = psVar7[3].segname;
    *(section **)(lVar12 * 8 + 0xb62b80) = psVar7;
    uVar2 = *(uint *)pcVar13;
    if ((uVar2 & 1) == 0) {
      do {
        uVar1 = *(uint *)pcVar13;
        if (uVar1 != uVar2) {
          ClearExclusiveLocal();
          break;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
        if (bVar4) {
          *(uint *)pcVar13 = uVar2 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar1 & 1) != 0) goto LAB_005d28b8;
    }
    else {
LAB_005d28b8:
      pcVar8 = pcVar13;
      FUN_00777048();
    }
    qVar15 = aqStack_858[lVar12 * 0x20 + 1];
    qVar14 = aqStack_858[lVar12 * 0x20];
    qVar17 = aqStack_858[lVar12 * 0x20 + 3];
    qVar16 = aqStack_858[lVar12 * 0x20 + 2];
    qVar19 = aqStack_858[lVar12 * 0x20 + 5];
    qVar18 = aqStack_858[lVar12 * 0x20 + 4];
    qVar21 = aqStack_858[lVar12 * 0x20 + 7];
    qVar20 = aqStack_858[lVar12 * 0x20 + 6];
    qVar23 = aqStack_858[lVar12 * 0x20 + 9];
    qVar22 = aqStack_858[lVar12 * 0x20 + 8];
    qVar25 = aqStack_858[lVar12 * 0x20 + 0xb];
    qVar24 = aqStack_858[lVar12 * 0x20 + 10];
    qVar27 = aqStack_858[lVar12 * 0x20 + 0xd];
    qVar26 = aqStack_858[lVar12 * 0x20 + 0xc];
    qVar29 = aqStack_858[lVar12 * 0x20 + 0xf];
    qVar28 = aqStack_858[lVar12 * 0x20 + 0xe];
    qVar31 = aqStack_858[lVar12 * 0x20 + 0x11];
    qVar30 = aqStack_858[lVar12 * 0x20 + 0x10];
    qVar33 = aqStack_858[lVar12 * 0x20 + 0x13];
    qVar32 = aqStack_858[lVar12 * 0x20 + 0x12];
    qVar35 = aqStack_858[lVar12 * 0x20 + 0x15];
    qVar34 = aqStack_858[lVar12 * 0x20 + 0x14];
    qVar37 = aqStack_858[lVar12 * 0x20 + 0x17];
    qVar36 = aqStack_858[lVar12 * 0x20 + 0x16];
    qVar39 = aqStack_858[lVar12 * 0x20 + 0x19];
    qVar38 = aqStack_858[lVar12 * 0x20 + 0x18];
    qVar41 = aqStack_858[lVar12 * 0x20 + 0x1b];
    qVar40 = aqStack_858[lVar12 * 0x20 + 0x1a];
    qVar43 = aqStack_858[lVar12 * 0x20 + 0x1d];
    qVar42 = aqStack_858[lVar12 * 0x20 + 0x1c];
    qVar45 = aqStack_858[lVar12 * 0x20 + 0x1f];
    qVar44 = aqStack_858[lVar12 * 0x20 + 0x1e];
    psVar7[2].reserved2 = (int)qVar43;
    psVar7[2].reserved3 = (int)(qVar43 >> 0x20);
    psVar7[2].flags = (int)qVar42;
    psVar7[2].reserved1 = (int)(qVar42 >> 0x20);
    *(qword *)(psVar7[3].sectname + 8) = qVar45;
    *(qword *)psVar7[3].sectname = qVar44;
    psVar7[2].size = qVar39;
    psVar7[2].addr = qVar38;
    psVar7[2].reloff = (int)qVar41;
    psVar7[2].nrelocs = (int)(qVar41 >> 0x20);
    psVar7[2].offset = (int)qVar40;
    psVar7[2].align = (int)(qVar40 >> 0x20);
    *(qword *)(psVar7[2].sectname + 8) = qVar35;
    *(qword *)psVar7[2].sectname = qVar34;
    *(qword *)(psVar7[2].segname + 8) = qVar37;
    *(qword *)psVar7[2].segname = qVar36;
    psVar7[1].reloff = (int)qVar31;
    psVar7[1].nrelocs = (int)(qVar31 >> 0x20);
    psVar7[1].offset = (int)qVar30;
    psVar7[1].align = (int)(qVar30 >> 0x20);
    psVar7[1].reserved2 = (int)qVar33;
    psVar7[1].reserved3 = (int)(qVar33 >> 0x20);
    psVar7[1].flags = (int)qVar32;
    psVar7[1].reserved1 = (int)(qVar32 >> 0x20);
    *(qword *)(psVar7[1].segname + 8) = qVar27;
    *(qword *)psVar7[1].segname = qVar26;
    psVar7[1].size = qVar29;
    psVar7[1].addr = qVar28;
    psVar7->reserved2 = (int)qVar23;
    psVar7->reserved3 = (int)(qVar23 >> 0x20);
    psVar7->flags = (int)qVar22;
    psVar7->reserved1 = (int)(qVar22 >> 0x20);
    *(qword *)(psVar7[1].sectname + 8) = qVar25;
    *(qword *)psVar7[1].sectname = qVar24;
    psVar7->size = qVar19;
    psVar7->addr = qVar18;
    psVar7->reloff = (int)qVar21;
    psVar7->nrelocs = (int)(qVar21 >> 0x20);
    psVar7->offset = (int)qVar20;
    psVar7->align = (int)(qVar20 >> 0x20);
    *(qword *)(psVar7->sectname + 8) = qVar15;
    *(qword *)psVar7->sectname = qVar14;
    *(qword *)(psVar7->segname + 8) = qVar17;
    *(qword *)psVar7->segname = qVar16;
    psVar7[3].addr = 0x40;
    uVar2 = *(uint *)psVar7[3].segname;
    do {
      uVar1 = *(uint *)pcVar13;
      uVar11 = (ulong)uVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
      if (bVar4) {
        *(uint *)pcVar13 = uVar2 & 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (7 < uVar1) {
      pcVar8 = pcVar13;
      FUN_007771d4();
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == aqStack_858[0x100]) {
    return pcVar8;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uStack_888 = 2;
  pcStack_868 = FUN_005d2984;
  lStack_898 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar9 = pcVar8;
  pqStack_890 = aqStack_858;
  lStack_880 = lVar12;
  pcStack_878 = pcVar13;
  puStack_870 = &stack0xfffffffffffffff0;
  if (pcVar8 != (char *)0x0) {
    if (uVar11 == 0) {
      pcVar13 = (char *)((long)&MACH_HEADER.magic + 1);
      goto LAB_005d2a5c;
    }
    builtin_strncpy(acStack_8a8,"/dev/urandom",0xd);
    pcVar9 = acStack_8a8;
    _open(pcVar9,0);
    if ((int)pcVar9 != -1) {
      lVar12 = uVar11 << 2;
      if (lVar12 == 0) {
        pcVar13 = (char *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        do {
          pcVar13 = pcVar9;
          _read(pcVar9,pcVar8,lVar12);
          pcVar10 = pcVar13;
          ___error();
          if ((long)pcVar13 < 1) {
            pcVar13 = (char *)(ulong)(pcVar13 == (char *)0xffffffffffffffff && *(int *)pcVar10 == 4)
            ;
          }
          else {
            pcVar8 = pcVar8 + (long)pcVar13;
            lVar12 = lVar12 - (long)pcVar13;
            pcVar13 = (char *)((long)&MACH_HEADER.magic + 1);
          }
        } while ((int)pcVar13 != 0 && lVar12 != 0);
      }
      _close(pcVar9);
      pcVar8 = pcVar9;
      goto LAB_005d2a5c;
    }
  }
  pcVar8 = pcVar9;
  pcVar13 = (char *)0x0;
LAB_005d2a5c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_898) {
    return pcVar13;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return pcVar8;
}



/* Entry: 005d2984; end: 005d2a8f;  */

int * FUN_005d2984(int *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      piVar3 = (int *)((long)&MACH_HEADER.magic + 1);
      goto LAB_005d2a5c;
    }
    _iStack_48 = 0x2f7665642f;
    uStack_43 = 0x617275;
    uStack_40 = 0x6d6f646e;
    piVar1 = &iStack_48;
    _open(piVar1,0);
    if ((int)piVar1 != -1) {
      param_2 = param_2 << 2;
      if (param_2 == 0) {
        piVar3 = (int *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        do {
          piVar3 = piVar1;
          _read(piVar1,param_1,param_2);
          piVar2 = piVar3;
          ___error();
          if ((long)piVar3 < 1) {
            piVar3 = (int *)(ulong)(piVar3 == (int *)0xffffffffffffffff && *piVar2 == 4);
          }
          else {
            param_1 = (int *)((long)param_1 + (long)piVar3);
            param_2 = param_2 - (long)piVar3;
            piVar3 = (int *)((long)&MACH_HEADER.magic + 1);
          }
        } while ((int)piVar3 != 0 && param_2 != 0);
      }
      _close(piVar1);
      param_1 = piVar1;
      goto LAB_005d2a5c;
    }
  }
  param_1 = piVar1;
  piVar3 = (int *)0x0;
LAB_005d2a5c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return piVar3;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return param_1;
}



/* Entry: 005d2a90; end: 005d2a93;  */

void FUN_005d2a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 005d2a94; end: 005d2aa7;  */

void FUN_005d2a94(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d2aa8; end: 005d2ab3;  */

undefined * FUN_005d2aa8(void)

{
  return &UNK_00818790;
}



/* Entry: 005d2ab4; end: 005d2ae3;  */

void FUN_005d2ab4(void)

{
  undefined8 uVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  dword *pdVar6;
  dword *pdVar7;
  dword *pdVar8;
  dword *pdVar9;
  undefined8 *extraout_x8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  pdVar2 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined ***)pdVar2 = &PTR_FUN_00a06bc8;
  ___cxa_throw();
  _objc_retain();
  pdVar3 = pdVar2;
  func_0x00784420(pdVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2c84(&uStack_90);
  pdVar4 = pdVar2;
  func_0x0077f5c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2e00();
  pdVar5 = pdVar2;
  func_0x0077f0c0();
  _objc_retainAutoreleasedReturnValue();
  pdVar6 = pdVar5;
  FUN_005d2e00();
  pdVar7 = pdVar2;
  func_0x0077f080();
  _objc_retainAutoreleasedReturnValue();
  pdVar8 = pdVar7;
  func_0x005d2e20();
  func_0x0077f520();
  _objc_retainAutoreleasedReturnValue();
  pdVar9 = pdVar2;
  func_0x005d2e20();
  uVar1 = uStack_80;
  extraout_x8[1] = uStack_88;
  *extraout_x8 = uStack_90;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  extraout_x8[2] = uVar1;
  extraout_x8[3] = (ulong)pdVar4 & 0xffffffffff;
  extraout_x8[4] = (ulong)pdVar6 & 0xffffffffff;
  extraout_x8[5] = (ulong)pdVar8 & 0xffffffffff;
  extraout_x8[6] = (ulong)pdVar9 & 0xffffffffff;
  _objc_release(pdVar2);
  _objc_release(pdVar7);
  _objc_release(pdVar5);
  func_0x005d334c();
  FUN_00470b00(&uStack_90);
  _objc_release(pdVar3);
  func_0x005d3330();
  return;
}



/* Entry: 005d2ae4; end: 005d2c83;  */

void FUN_005d2ae4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00784420(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2c84(&uStack_80);
  uVar3 = param_2;
  func_0x0077f5c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2e00();
  uVar4 = param_2;
  func_0x0077f0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_005d2e00();
  uVar6 = param_2;
  func_0x0077f080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x005d2e20();
  func_0x0077f520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x005d2e20();
  uVar1 = uStack_70;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar3 & 0xffffffffff;
  param_1[4] = uVar5 & 0xffffffffff;
  param_1[5] = uVar7 & 0xffffffffff;
  param_1[6] = uVar8 & 0xffffffffff;
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  func_0x005d334c();
  FUN_00470b00(&uStack_80);
  _objc_release(uVar2);
  func_0x005d3330();
  return;
}



/* Entry: 005d2c84; end: 005d2dff;  */

void FUN_005d2c84(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_150 [48];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00780e80(param_2);
  FUN_005d2f2c(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar1 = param_2;
  _objc_retain();
  func_0x005d3338();
  if (uVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(ulong *)(lStack_118 + uVar4 * 8);
        _objc_retain(uVar2);
        FUN_005d6754(auStack_150,uVar2);
        func_0x005d31a4(param_1,auStack_150);
        func_0x00470bb0(auStack_150);
        _objc_release();
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      func_0x005d3338();
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  lVar3 = 0;
  func_0x005d3330();
  func_0x005d3330();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x005d3330();
  FUN_00470b00(param_1);
  func_0x005d3330();
  __Unwind_Resume();
  if (lVar3 != 0) {
    FUN_005d32f8();
  }
  return;
}



/* Entry: 005d2e00; end: 005d2e3f;  */

ulong FUN_005d2e00(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_005d32f8();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 005d2e40; end: 005d2ef7;  */

void FUN_005d2e40(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,(param_1[1] - *param_1) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    lVar3 = lVar4;
    FUN_005d6848(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720(puVar2,param_2,lVar3);
    func_0x005d334c();
  }
  func_0x00780e20(puVar2);
  func_0x005d3330();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005d2ef8; end: 005d2f2b;  */

void FUN_005d2ef8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_004d2684(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d2f2c; end: 005d2faf;  */

void FUN_005d2f2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x30) < param_2) {
    if ((undefined8 *)0x555555555555555 < param_2) {
      FUN_00484ee8();
      func_0x005d3354();
      __Unwind_Resume();
      lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
      func_0x005d3088(param_1 + 2,*param_1,param_1[1],lVar1);
      param_2[1] = lVar1;
      lVar1 = *param_1;
      param_1[1] = lVar1;
      *param_1 = param_2[1];
      param_2[1] = lVar1;
      lVar1 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar1;
      lVar1 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar1;
      *param_2 = param_2[1];
      return;
    }
    FUN_005d303c(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    func_0x005d3368();
    func_0x005d3354();
  }
  return;
}



/* Entry: 005d2fb0; end: 005d303b;  */

void FUN_005d2fb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  func_0x005d3088(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 005d303c; end: 005d315f;  */

long * FUN_005d303c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_00484ef4();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 005d3160; end: 005d3167;  */

void FUN_005d3160(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x00470bb0();
  }
  return;
}



/* Entry: 005d3168; end: 005d320f;  */

void FUN_005d3168(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x00470bb0();
  }
  return;
}



/* Entry: 005d3210; end: 005d32f7;  */

long * FUN_005d3210(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x30 + 1;
  if (0x555555555555555 < uVar1) {
    FUN_00484ee8();
    func_0x005d3354();
    __Unwind_Resume(param_1);
    _objc_retain();
    func_0x00787200(param_1);
    func_0x005d3330();
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x30;
  uVar3 = uVar2 * 2;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar2) {
    uVar3 = 0x555555555555555;
  }
  FUN_005d303c(auStack_48,uVar3);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  puStack_38[2] = param_2[2];
  puStack_38[1] = uVar6;
  *puStack_38 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  puStack_38[5] = param_2[5];
  puStack_38[4] = uVar6;
  puStack_38[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  puStack_38 = puStack_38 + 6;
  func_0x005d3368();
  plVar4 = (long *)param_1[1];
  func_0x005d3354();
  return plVar4;
}



/* Entry: 005d32f8; end: 005d332f;  */

undefined8 FUN_005d32f8(undefined8 param_1)

{
  _objc_retain();
  func_0x00787200(param_1);
  FUN_005d3330();
  return param_1;
}



/* Entry: 005d3330; end: 005d337b;  */

void FUN_005d3330(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d337c; end: 005d33f3; -[SCNGrpcAuthContextCallback initWithCpp:] */

undefined1 * FUN_005d337c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_005d3668();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_00485e94(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d33f4; end: 005d34b7; -[SCNGrpcAuthContextCallback onComplete:] */

void FUN_005d33f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_68 [56];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_005d2ae4(auStack_68,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68);
  FUN_00470b00(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 005d34b8; end: 005d34e3;  */

void FUN_005d34b8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_005d357c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d34e4; end: 005d3537; -[SCNGrpcAuthContextCallback .cxx_destruct] */

void FUN_005d34e4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a06be0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_00485e94((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d3538; end: 005d357b; -[SCNGrpcAuthContextCallback .cxx_construct] */

undefined8 * FUN_005d3538(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_005d3668();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d357c; end: 005d35f3;  */

void FUN_005d357c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a06be0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_005d3668();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_005d35f4);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d3684();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d35f4; end: 005d3667;  */

void FUN_005d35f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac31b0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_005d3668();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_00485e94(&uStack_30);
  return;
}



/* Entry: 005d3668; end: 005d368f;  */

void FUN_005d3668(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 005d3690; end: 005d373f;  */

void FUN_005d3690(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_00a06c38;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_005d3740);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_005d39dc(&uStack_50);
  }
  FUN_005d3a08();
  return;
}



/* Entry: 005d3740; end: 005d383f;  */

void FUN_005d3740(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a06c78;
  pqVar4[3] = (qword)&PTR_DAT_00a06cf0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_00a06cc8;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d39dc(&uStack_50);
  return;
}



/* Entry: 005d3840; end: 005d3843;  */

void FUN_005d3840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06c78;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d3844; end: 005d3857;  */

void FUN_005d3844(void)

{
  FUN_005d39cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d3858; end: 005d3863;  */

long FUN_005d3858(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a06c38;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x005d3a1c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d3864; end: 005d38a3;  */

void FUN_005d3864(void)

{
  func_0x005d3a10();
  return;
}



/* Entry: 005d38a4; end: 005d393b;  */

void FUN_005d38a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_005d3a24(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d34b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00783cc0(uVar2);
  func_0x005d3a1c();
  func_0x005d3a08();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d393c; end: 005d39cb;  */

long FUN_005d393c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a06c38;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x005d3a1c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d39cc; end: 005d39db;  */

void FUN_005d39cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06c78;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d39dc; end: 005d3a07;  */

long FUN_005d39dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d3a08; end: 005d3a23;  */

void FUN_005d3a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d3a24; end: 005d3ac7;  */

void FUN_005d3a24(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  puVar2 = PTR_PTR_00ac31b8;
  _objc_alloc(PTR_PTR_00ac31b8);
  pbVar3 = param_1 + 0x20;
  bVar1 = *param_1;
  param_1 = param_1 + 8;
  FUN_0047c844(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(pbVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784c60(puVar2,param_2,bVar1 & 1,param_1,pbVar3);
  FUN_005d3ac8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005d3ac8; end: 005d3ad3;  */

void FUN_005d3ac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d3ad4; end: 005d3d3f;  */

void FUN_005d3ad4(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [56];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x0078bd60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0047e5f8();
  uVar3 = param_2;
  func_0x0077ea40();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047d184(auStack_98);
  uVar4 = param_2;
  func_0x0078b8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_005d3d40();
  uVar6 = param_2;
  func_0x00780340();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_b8);
  func_0x00783160(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_d8);
  uVar7 = param_2;
  func_0x0077f3c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    _objc_retain(uVar7);
    func_0x00787200(uVar7);
    func_0x005d3fc0();
    uVar7 = uVar7 & 0xffffffff | 0x100000000;
  }
  func_0x00780b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_f8);
  FUN_004654ac(param_1,uVar2,param_3 & 0xff,auStack_98,uVar5 & 0xffff,auStack_b8,auStack_d8,uVar7,
               auStack_f8);
  FUN_00457530(auStack_f8);
  func_0x005d3fb8();
  func_0x005d3fc0();
  FUN_00457530(auStack_d8);
  func_0x005d3fb0();
  FUN_00457530(auStack_b8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  FUN_00459de4(auStack_98);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x005d3fa8();
  return;
}



/* Entry: 005d3d40; end: 005d3d67;  */

uint FUN_005d3d40(long param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != 0;
  if (bVar1) {
    FUN_005d3f44();
  }
  return (uint)param_1 | (uint)bVar1 << 8;
}



/* Entry: 005d3d68; end: 005d3f0f;  */

void FUN_005d3d68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___SCNGrpcCallOptions_00ac3190;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcCallOptions_00ac3190);
  lVar2 = param_1;
  func_0x0047e61c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  FUN_0047d334(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x40;
  FUN_005d3f10(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x48;
  FUN_0047c88c(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x68;
  FUN_0047c88c(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,(long)*(int *)(param_1 + 0x88));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  param_1 = param_1 + 0x90;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  func_0x007866c0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,puVar7,param_1);
  func_0x005d3fb0();
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x005d3fb8();
  _objc_release(lVar3);
  func_0x005d3fa8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 005d3f10; end: 005d3f43;  */

void FUN_005d3f10(undefined1 *param_1)

{
  if (param_1[1] == '\x01') {
    FUN_005d3f7c(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d3f44; end: 005d3f7b;  */

undefined8 FUN_005d3f44(undefined8 param_1)

{
  _objc_retain();
  func_0x0077fbc0(param_1);
  FUN_005d3fa8();
  return param_1;
}



/* Entry: 005d3f7c; end: 005d3fa7;  */

void FUN_005d3f7c(undefined8 param_1,undefined8 param_2)

{
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d3fa8; end: 005d3fc7;  */

void FUN_005d3fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d3fc8; end: 005d403f; -[SCNGrpcCallOptionsBuilderCppProxy initWithCpp:] */

undefined1 * FUN_005d3fc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_005d4518();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x005d44f0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d4040; end: 005d40cf; -[SCNGrpcCallOptionsBuilderCppProxy build] */

void FUN_005d4040(long param_1)

{
  undefined1 auStack_d0 [176];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_d0);
  FUN_005d3d68(auStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d453c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d40d0; end: 005d41cb;  */

void FUN_005d40d0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac31c0;
    _objc_opt_class(PTR_PTR_00ac31c0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a06d60;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_005d4268);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_005d44c8(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_005d4518();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 005d41cc; end: 005d4227; -[SCNGrpcCallOptionsBuilderCppProxy .cxx_destruct] */

void FUN_005d41cc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a06e30;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x005d44f0((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d4228; end: 005d4267; -[SCNGrpcCallOptionsBuilderCppProxy .cxx_construct] */

undefined8 * FUN_005d4228(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_005d4518();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d4268; end: 005d435b;  */

void FUN_005d4268(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a06da0;
  pqVar1[3] = (qword)&PTR_DAT_00a06e18;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_005d4518();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a06df0;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d44c8(&uStack_50);
  return;
}



/* Entry: 005d435c; end: 005d435f;  */

void FUN_005d435c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06da0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d4360; end: 005d4373;  */

void FUN_005d4360(void)

{
  FUN_005d44b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d4374; end: 005d437f;  */

long FUN_005d4374(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a06d60;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d4380; end: 005d43bb;  */

void FUN_005d4380(void)

{
  func_0x005d4530();
  return;
}



/* Entry: 005d43bc; end: 005d4423;  */

void FUN_005d43bc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x0077fcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d3ad4(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d4424; end: 005d44b7;  */

long FUN_005d4424(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a06d60;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d44b8; end: 005d44c7;  */

void FUN_005d44b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06da0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d44c8; end: 005d4517;  */

long FUN_005d44c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d4518; end: 005d454f;  */

void FUN_005d4518(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 005d4550; end: 005d45c7; -[SCNGrpcClientStreamSendHandler initWithCpp:] */

undefined1 * FUN_005d4550(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_005d4980();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_005d4954(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d45c8; end: 005d46df; -[SCNGrpcClientStreamSendHandler send:callback:] */

void FUN_005d45c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_005d46e0(auStack_40,param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    FUN_005d6a6c(&uStack_50,param_4);
  }
  func_0x005d4990();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,&uStack_50);
  func_0x005c3df8(&uStack_50);
  FUN_0040ce68(auStack_40);
  func_0x005d4990();
  func_0x005d49b0();
  return;
}



/* Entry: 005d46e0; end: 005d474f;  */

void FUN_005d46e0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    FUN_00719f9c(param_1,param_2);
  }
  else {
    FUN_00719f40(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 005d4750; end: 005d47ab; -[SCNGrpcClientStreamSendHandler closeStream] */

void FUN_005d4750(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 005d47ac; end: 005d47d7;  */

void FUN_005d47ac(long *param_1)

{
  if (*param_1 != 0) {
    FUN_005d4870();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d47d8; end: 005d482b; -[SCNGrpcClientStreamSendHandler .cxx_destruct] */

void FUN_005d47d8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a06e40;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_005d4954((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}


