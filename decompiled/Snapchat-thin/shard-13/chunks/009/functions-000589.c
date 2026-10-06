/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae80770; end: 10ae808d3;  */

byte * FUN_10ae80770(byte *param_1,byte param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iStack_4c;
  undefined8 uStack_48;
  
  pbVar7 = param_1 + 1;
  bVar2 = *param_1;
  if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
    uStack_48 = 0;
    iStack_4c = 0;
    pbVar3 = pbVar7;
    FUN_10ae7f4f4(pbVar7,2,0,0x17,(long)&uStack_48 + 4);
    pbVar4 = (byte *)0x0;
    if ((pbVar3 != (byte *)0x0) && ((long)pbVar3 - (long)pbVar7 == 2)) {
      pbVar7 = pbVar3;
      if ((param_2 != 0) && (*pbVar3 == param_2)) {
        pbVar7 = pbVar3 + 1;
      }
      pbVar5 = pbVar7;
      FUN_10ae7f4f4(pbVar7,2,0,0x3b,&uStack_48);
      pbVar4 = pbVar3;
      iVar6 = 0;
      if ((pbVar5 != (byte *)0x0) && ((long)pbVar5 - (long)pbVar7 == 2)) {
        pbVar7 = pbVar5;
        if ((param_2 != 0) && (*pbVar5 == param_2)) {
          pbVar7 = pbVar5 + 1;
        }
        pbVar4 = pbVar7;
        FUN_10ae7f4f4(pbVar7,2,0,0x3b,&iStack_4c);
        iVar6 = iStack_4c;
        if ((long)pbVar4 - (long)pbVar7 != 2 || pbVar4 == (byte *)0x0) {
          pbVar4 = pbVar5;
        }
      }
      iVar6 = iVar6 + ((int)uStack_48 + uStack_48._4_4_ * 0x3c) * 0x3c;
      iVar1 = -iVar6;
      if (bVar2 != 0x2d) {
        iVar1 = iVar6;
      }
      *param_3 = iVar1;
    }
  }
  else if ((bVar2 & 0xdf) == 0x5a) {
    *param_3 = 0;
    pbVar4 = pbVar7;
  }
  else {
    pbVar4 = (byte *)0x0;
  }
  return pbVar4;
}



/* Entry: 10ae808d4; end: 10ae809a7;  */

char * FUN_10ae808d4(char *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1 != (char *)0x0) {
    puVar2 = &UNK_10e52c3c4;
    _memchr(&UNK_10e52c3c4,(long)*param_1,0xb);
    if (puVar2 == (undefined *)0x0) {
LAB_10ae80988:
      param_1 = (char *)0x0;
    }
    else {
      lVar5 = 0;
      uVar4 = 0;
      lVar3 = 0;
      do {
        iVar1 = (int)puVar2 + -0xe52c3c4;
        if (9 < iVar1) {
          if (lVar5 == 0) goto LAB_10ae80988;
          break;
        }
        if (uVar4 < 0xf) {
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 * 10 + (long)iVar1;
        }
        param_1 = param_1 + 1;
        puVar2 = &UNK_10e52c3c4;
        _memchr(&UNK_10e52c3c4,(long)*param_1,0xb);
        lVar5 = lVar5 + -1;
      } while (puVar2 != (undefined *)0x0);
      *param_2 = *(long *)(&UNK_10e52c290 + (0xf - uVar4) * 8) * lVar3;
    }
  }
  return param_1;
}



/* Entry: 10ae809a8; end: 10ae80a2f;  */

bool FUN_10ae809a8(long *param_1,long *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    if ((char)param_1[1] < (char)param_2[1]) {
      return true;
    }
    if ((char)param_1[1] == (char)param_2[1]) {
      if (*(char *)((long)param_1 + 9) < *(char *)((long)param_2 + 9)) {
        return true;
      }
      if (*(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9)) {
        if (*(char *)((long)param_1 + 10) < *(char *)((long)param_2 + 10)) {
          return true;
        }
        if (*(char *)((long)param_1 + 10) == *(char *)((long)param_2 + 10)) {
          if (*(char *)((long)param_1 + 0xb) < *(char *)((long)param_2 + 0xb)) {
            return true;
          }
          if (*(char *)((long)param_1 + 0xb) == *(char *)((long)param_2 + 0xb)) {
            return *(char *)((long)param_1 + 0xc) < *(char *)((long)param_2 + 0xc);
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10ae80a30; end: 10ae80dab;  */

void FUN_10ae80a30(long param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = (int)param_2;
  cVar2 = (char)param_2;
  uVar6 = (param_1 % 400 - (ulong)(cVar2 < 3)) + 0x960;
  lVar7 = ((uVar6 + (uVar6 >> 2)) - (ulong)(((uint)uVar6 >> 2 & 0x3fff) / 0x19)) +
          (ulong)(((uint)uVar6 >> 4 & 0xfff) / 0x19) +
          (long)*(int *)(&UNK_10e52c35c + (long)cVar2 * 4) + (long)((iVar3 << 0x10) >> 0x18);
  uVar6 = SUB168(SEXT816(lVar7) * SEXT816(0x4924924924924925),8);
  piVar4 = (int *)&UNK_10e52c404;
  do {
    piVar5 = piVar4 + 1;
    iVar1 = *piVar4;
    piVar4 = piVar5;
  } while (*(int *)(&UNK_10e52c340 + (lVar7 + ((uVar6 >> 1) - ((long)uVar6 >> 0x3f)) * -7) * 4) !=
           iVar1);
  lVar7 = 0;
  do {
    iVar1 = *piVar5;
    lVar7 = lVar7 + 0x100000000;
    piVar5 = piVar5 + 1;
  } while (iVar1 != param_3);
  FUN_10ae80dac(param_1,(int)cVar2,(param_2 << 0x30) >> 0x38,-(lVar7 >> 0x20),(iVar3 << 8) >> 0x18,
                iVar3 >> 0x18,(param_2 << 0x18) >> 0x38);
  return;
}



/* Entry: 10ae80dac; end: 10ae81173;  */

undefined1  [16]
FUN_10ae80dac(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,int param_6,
             undefined4 param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  lVar12 = param_1 % 400 + (param_4 / 0x23ab1) * 400;
  param_4 = param_4 % 0x23ab1;
  lVar13 = param_4 + 0x23ab1;
  lVar14 = lVar12 + -400;
  if (-1 < param_4) {
    lVar13 = param_4;
    lVar14 = lVar12;
  }
  uVar11 = lVar14 + (param_3 / 0x23ab1) * 400;
  uVar6 = lVar13 + param_3 % 0x23ab1;
  iVar3 = (int)param_2;
  if ((long)uVar6 < 1) {
    if ((long)uVar6 < -0x16c) {
      uVar11 = uVar11 - 400;
      uVar6 = uVar6 + 0x23ab1;
    }
    else {
      uVar7 = uVar11 - 1;
      if (2 < iVar3) {
        uVar7 = uVar11;
      }
      if ((uVar7 & 3) == 0) {
        lVar14 = uVar7 * -0x70a3d70a3d70a3d7;
        lVar13 = 0x16d;
        if ((lVar14 + 0x51eb851eb851eb0U >> 4 | lVar14 << 0x3c) < 0xa3d70a3d70a3d7 ||
            0x28f5c28f5c28f5c < (lVar14 + 0x51eb851eb851eb8U >> 2 | lVar14 << 0x3e)) {
          lVar13 = 0x16e;
        }
      }
      else {
        lVar13 = 0x16d;
      }
      uVar11 = uVar11 - 1;
      uVar6 = lVar13 + uVar6;
    }
  }
  else if (0x23ab1 < uVar6) {
    uVar11 = uVar11 + 400;
    uVar6 = uVar6 - 0x23ab1;
  }
  if (0x16d < uVar6) {
    uVar7 = uVar11;
    if (2 < iVar3) {
      uVar7 = uVar11 + 1;
    }
    iVar9 = (int)((long)uVar7 % 400);
    iVar10 = iVar9 + 400;
    if (-1 < (long)uVar7 % 400) {
      iVar10 = iVar9;
    }
    uVar7 = 0x8eac;
    if (300 < iVar10 || iVar10 == 0) {
      uVar7 = 0x8ead;
    }
    if (uVar7 < uVar6) {
      do {
        uVar6 = uVar6 - uVar7;
        uVar11 = uVar11 + 100;
        iVar9 = -300;
        if (iVar10 < 300) {
          iVar9 = 100;
        }
        iVar10 = iVar9 + iVar10;
        uVar7 = 0x8eac;
        if (300 < iVar10 || iVar10 == 0) {
          uVar7 = 0x8ead;
        }
      } while (uVar7 < uVar6);
    }
    while( true ) {
      uVar7 = 0x5b5;
      if (((iVar10 != 0) && (iVar10 < 0x12d)) && (uVar7 = 0x5b4, (iVar10 + -1) % 100 < 0x60)) {
        uVar7 = 0x5b5;
      }
      uVar1 = uVar11;
      uVar2 = uVar6;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) break;
      uVar11 = uVar11 + 4;
      iVar9 = -0x18c;
      if (iVar10 < 0x18c) {
        iVar9 = 4;
      }
      iVar10 = iVar9 + iVar10;
      uVar6 = uVar6 - uVar7;
    }
    do {
      uVar6 = uVar2;
      uVar11 = uVar1;
      uVar7 = (2 < iVar3) + uVar11;
      if ((uVar7 & 3) == 0) {
        lVar14 = uVar7 * -0x70a3d70a3d70a3d7;
        lVar13 = 0x16d;
        if ((lVar14 + 0x51eb851eb851eb0U >> 4 | lVar14 << 0x3c) < 0xa3d70a3d70a3d7 ||
            0x28f5c28f5c28f5c < (lVar14 + 0x51eb851eb851eb8U >> 2 | lVar14 << 0x3e)) {
          lVar13 = 0x16e;
        }
      }
      else {
        lVar13 = 0x16d;
      }
      uVar1 = uVar11 + 1;
      uVar2 = uVar6 - lVar13;
    } while (uVar6 - lVar13 != 0 && lVar13 <= (long)uVar6);
  }
  if (0x1c < (long)uVar6) {
    while( true ) {
      uVar8 = 1;
      if ((uVar11 & 3) == 0) {
        uVar5 = uVar8;
        if ((uVar11 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uVar11 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar5 = (uint)((uVar11 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                         uVar11 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        uVar4 = 0;
        if (((uint)param_2 & 0xff) == 2) {
          uVar4 = uVar5;
        }
      }
      else {
        uVar4 = 0;
      }
      uVar7 = uVar6 - ((long)*(int *)(&UNK_10e52c3d0 + (long)(char)param_2 * 4) + (ulong)uVar4);
      if (uVar7 == 0 ||
          (long)uVar6 <
          (long)((long)*(int *)(&UNK_10e52c3d0 + (long)(char)param_2 * 4) + (ulong)uVar4)) break;
      if ((char)((char)param_2 + '\x01') < '\r') {
        uVar8 = (uint)param_2 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
      }
      param_2 = (ulong)uVar8;
      uVar6 = uVar7;
    }
  }
  auVar15._8_8_ =
       CONCAT44(param_7,param_6 << 0x18) & 0xffffffffff | (param_5 & 0xff) << 0x10 |
       (uVar6 & 0xff) << 8 | param_2 & 0xff;
  auVar15._0_8_ = (param_1 - param_1 % 400) + uVar11;
  return auVar15;
}



/* Entry: 10ae81174; end: 10ae81263;  */

long FUN_10ae81174(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1 % 400;
  lVar4 = param_4 % 400;
  uVar3 = (lVar4 - param_4) + (param_1 / 400) * 400;
  FUN_10ae81264();
  FUN_10ae81264(lVar4,param_5,param_6);
  lVar2 = lVar2 - lVar4;
  if (((long)uVar3 < 1) || (-1 < lVar2)) {
    lVar4 = lVar2;
    uVar1 = uVar3;
    if (0 < lVar2) {
      lVar4 = lVar2 + -0x47562;
      uVar1 = uVar3 + 800;
    }
    if ((uVar3 & 0x8000000000000000) != 0) {
      lVar2 = lVar4;
      uVar3 = uVar1;
    }
  }
  else {
    lVar2 = lVar2 + 0x47562;
    uVar3 = uVar3 - 800;
  }
  return lVar2 + ((long)uVar3 / 400) * 0x23ab1;
}



/* Entry: 10ae81264; end: 10ae81333;  */

long FUN_10ae81264(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  
  param_1 = param_1 - (ulong)(param_2 < 3);
  lVar1 = param_1 + -399;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  param_1 = param_1 + (lVar1 / 400) * -400;
  sVar3 = -3;
  if (param_2 < 3) {
    sVar3 = 9;
  }
  lVar2 = param_1 + 3;
  if (-1 < param_1) {
    lVar2 = param_1;
  }
  lVar4 = SUB168(SEXT816(param_1) * SEXT816(0x5c28f5c28f5c28f5),8) - param_1;
  return (long)param_3 + (long)((int)(short)((sVar3 + (short)param_2) * 0x99 + 2) / 5) +
         (lVar1 / 400) * 0x23ab1 + (lVar2 >> 2) + param_1 * 0x16d + ((lVar4 >> 6) - (lVar4 >> 0x3f))
         + -0xafa6d;
}



/* Entry: 10ae81334; end: 10ae8138f;  */

void FUN_10ae81334(undefined8 param_1,long param_2,long param_3)

{
  func_0x00010ae80b44(param_1,(long)(char)param_2,(param_2 << 0x30) >> 0x38,
                      (param_2 << 0x28) >> 0x38,param_3 / 0x3c + ((param_2 << 0x20) >> 0x38),
                      param_3 % 0x3c + ((param_2 << 0x18) >> 0x38));
  return;
}



/* Entry: 10ae81390; end: 10ae8143f;  */

void FUN_10ae81390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 auStack_40 [2];
  long in_stack_ffffffffffffffd0;
  
  uVar1 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
            (param_2,0,5,&UNK_10f6d2963);
  if ((int)uVar1 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_40,param_2,5,0xffffffffffffffff,&stack0xffffffffffffffdf);
    uVar1 = 0x10;
    __Znwm();
    func_0x00010ae85ff4();
    *param_1 = uVar1;
    if (in_stack_ffffffffffffffd0 < 0) {
      __ZdlPv(auStack_40[0]);
    }
    return;
  }
  plVar2 = (long *)0xa8;
  __Znwm();
  *plVar2 = (long)&PTR_FUN_110c8b7c0;
  plVar2[2] = 0;
  plVar2[1] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  *param_1 = plVar2;
  plVar3 = plVar2;
  FUN_10ae832e0();
  if (((ulong)plVar3 & 1) != 0) {
    return;
  }
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010ae83c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



/* Entry: 10ae81440; end: 10ae814cb;  */

undefined8 FUN_10ae81440(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113839308 & 1) == 0) {
    iVar1 = 0x13839308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x20;
      __Znwm();
      FUN_10ae81bb0();
      uRam0000000113839300 = uVar2;
      ___cxa_guard_release(0x113839308);
    }
  }
  return uRam0000000113839300;
}



/* Entry: 10ae814cc; end: 10ae81b17;  */

bool FUN_10ae814cc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x28;
  long lStack_68;
  
  plVar3 = param_1;
  FUN_10ae81440();
  lStack_68 = 0;
  plVar4 = param_1;
  FUN_10ae7de24(param_1,&lStack_68);
  if (((int)plVar4 != 0) && (lStack_68 == 0)) {
    *param_2 = plVar3;
    return true;
  }
  FUN_10ae81b18();
  __ZNSt3__15mutex4lockEv();
  plVar12 = plRam00000001137edbd0;
  if (plRam00000001137edbd0 != (long *)0x0) {
    plVar5 = plRam00000001137edbd0;
    func_0x000107c31944(plRam00000001137edbd0,param_1);
    plVar18 = (long *)plVar12[1];
    if (plVar18 != (long *)0x0) {
      uVar19 = (long)plVar18 - 1;
      if (((ulong)plVar18 & uVar19) == 0) {
        unaff_x28 = (long *)(uVar19 & (ulong)plVar5);
      }
      else {
        unaff_x28 = plVar5;
        if (plVar18 <= plVar5) {
          uVar1 = 0;
          if (plVar18 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar18;
          }
          unaff_x28 = (long *)((long)plVar5 - uVar1 * (long)plVar18);
        }
      }
      plVar8 = *(long **)(*plVar12 + (long)unaff_x28 * 8);
      if (plVar8 != (long *)0x0) {
        for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          plVar9 = (long *)plVar8[1];
          if (plVar9 == plVar5) {
            plVar9 = plVar12;
            func_0x000104c4fbc4(plVar12,plVar8 + 2,param_1);
            if (((ulong)plVar9 & 1) != 0) {
              *param_2 = plVar8[5];
              plVar12 = (long *)plVar8[5];
              __ZNSt3__15mutex6unlockEv(plVar4);
              return plVar12 != plVar3;
            }
          }
          else {
            if (((ulong)plVar18 & uVar19) == 0) {
              plVar9 = (long *)((ulong)plVar9 & uVar19);
            }
            else if (plVar18 <= plVar9) {
              uVar1 = 0;
              if (plVar18 != (long *)0x0) {
                uVar1 = (ulong)plVar9 / (ulong)plVar18;
              }
              plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar18);
            }
            if (plVar9 != unaff_x28) break;
          }
        }
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(plVar4);
  plVar4 = (long *)0x20;
  __Znwm();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(plVar4,*param_1,param_1[1]);
  }
  else {
    lVar6 = *param_1;
    plVar4[1] = param_1[1];
    *plVar4 = lVar6;
    plVar4[2] = param_1[2];
  }
  plVar12 = plVar4;
  FUN_10ae81390(plVar4 + 3,plVar4);
  FUN_10ae81b18();
  __ZNSt3__15mutex4lockEv();
  if (plRam00000001137edbd0 == (long *)0x0) {
    plVar5 = (long *)0x28;
    __Znwm();
    plVar5[1] = 0;
    *plVar5 = 0;
    plVar5[3] = 0;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 4) = 0x3f800000;
    plRam00000001137edbd0 = plVar5;
  }
  plVar5 = plRam00000001137edbd0;
  plVar18 = plRam00000001137edbd0;
  func_0x000107c31944(plRam00000001137edbd0,param_1);
  plVar8 = (long *)plVar5[1];
  if (plVar8 != (long *)0x0) {
    uVar19 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar19) == 0) {
      unaff_x28 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x28 = plVar18;
      if (plVar8 <= plVar18) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar18 / (ulong)plVar8;
        }
        unaff_x28 = (long *)((long)plVar18 - uVar1 * (long)plVar8);
      }
    }
    puVar10 = *(undefined8 **)(*plVar5 + (long)unaff_x28 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar10; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        plVar11 = (long *)plVar9[1];
        if (plVar11 == plVar18) {
          plVar11 = plVar5;
          func_0x000104c4fbc4(plVar5,plVar9 + 2,param_1);
          if (((ulong)plVar11 & 1) != 0) goto LAB_10ae819cc;
        }
        else {
          if (((ulong)plVar8 & uVar19) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar19);
          }
          else if (plVar8 <= plVar11) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar11 / (ulong)plVar8;
            }
            plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar8);
          }
          if (plVar11 != unaff_x28) break;
        }
      }
    }
  }
  plVar9 = (long *)0x30;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = (long)plVar18;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(plVar9 + 2,*param_1,param_1[1]);
  }
  else {
    lVar6 = *param_1;
    plVar9[3] = param_1[1];
    plVar9[2] = lVar6;
    plVar9[4] = param_1[2];
  }
  plVar9[5] = 0;
  if ((plVar8 != (long *)0x0) && ((float)(plVar5[3] + 1) <= *(float *)(plVar5 + 4) * (float)plVar8))
  goto LAB_10ae81950;
  uVar19 = 1;
  if ((long *)0x2 < plVar8) {
    uVar19 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
  }
  plVar11 = (long *)(uVar19 | (long)plVar8 << 1);
  plVar8 = (long *)(long)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
  if (plVar11 <= plVar8) {
    plVar11 = plVar8;
  }
  if ((long)plVar11 - 1U == 0) {
    plVar11 = (long *)0x2;
  }
  else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar8 = (long *)plVar5[1];
  if (plVar8 < plVar11) {
LAB_10ae817d8:
    if ((ulong)plVar11 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae81aa4);
      (*pcVar2)();
    }
    lVar6 = (long)plVar11 << 3;
    __Znwm();
    lVar7 = *plVar5;
    *plVar5 = lVar6;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    plVar8 = (long *)0x0;
    plVar5[1] = (long)plVar11;
    do {
      *(undefined8 *)(*plVar5 + (long)plVar8 * 8) = 0;
      plVar8 = (long *)((long)plVar8 + 1);
    } while (plVar11 != plVar8);
    plVar13 = (long *)plVar5[2];
    plVar8 = plVar11;
    if (plVar13 != (long *)0x0) {
      plVar14 = (long *)plVar13[1];
      uVar19 = (long)plVar11 - 1;
      if (((ulong)plVar11 & uVar19) == 0) {
        plVar14 = (long *)((ulong)plVar14 & uVar19);
      }
      else if (plVar11 <= plVar14) {
        uVar1 = 0;
        if (plVar11 != (long *)0x0) {
          uVar1 = (ulong)plVar14 / (ulong)plVar11;
        }
        plVar14 = (long *)((long)plVar14 - uVar1 * (long)plVar11);
      }
      *(long **)(*plVar5 + (long)plVar14 * 8) = plVar5 + 2;
      plVar15 = (long *)*plVar13;
      while (plVar15 != (long *)0x0) {
        plVar17 = (long *)plVar15[1];
        if (((ulong)plVar11 & uVar19) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar19);
        }
        else if (plVar11 <= plVar17) {
          uVar1 = 0;
          if (plVar11 != (long *)0x0) {
            uVar1 = (ulong)plVar17 / (ulong)plVar11;
          }
          plVar17 = (long *)((long)plVar17 - uVar1 * (long)plVar11);
        }
        plVar16 = plVar15;
        if (plVar17 != plVar14) {
          lVar6 = *plVar5;
          if (*(long *)(lVar6 + (long)plVar17 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar17 * 8) = plVar13;
            plVar14 = plVar17;
          }
          else {
            *plVar13 = *plVar15;
            *plVar15 = **(undefined8 **)(lVar6 + (long)plVar17 * 8);
            **(long **)(lVar6 + (long)plVar17 * 8) = (long)plVar15;
            plVar16 = plVar13;
          }
        }
        plVar13 = plVar16;
        plVar15 = (long *)*plVar16;
      }
    }
  }
  else if (plVar11 < plVar8) {
    plVar13 = (long *)(long)((float)(ulong)plVar5[3] / *(float *)(plVar5 + 4));
    if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar13) {
      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
    }
    if (plVar11 <= plVar13) {
      plVar11 = plVar13;
    }
    if (plVar11 < plVar8) {
      if (plVar11 != (long *)0x0) goto LAB_10ae817d8;
      lVar6 = *plVar5;
      *plVar5 = 0;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar5[1] = 0;
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)plVar5[1];
    }
  }
  if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
    unaff_x28 = (long *)((long)plVar8 - 1U & (ulong)plVar18);
  }
  else {
    unaff_x28 = plVar18;
    if (plVar8 <= plVar18) {
      uVar19 = 0;
      if (plVar8 != (long *)0x0) {
        uVar19 = (ulong)plVar18 / (ulong)plVar8;
      }
      unaff_x28 = (long *)((long)plVar18 - uVar19 * (long)plVar8);
    }
  }
LAB_10ae81950:
  lVar6 = *plVar5;
  plVar18 = *(long **)(lVar6 + (long)unaff_x28 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar5 + 2;
    *plVar9 = *plVar18;
    *plVar18 = (long)plVar9;
    *(long **)(lVar6 + (long)unaff_x28 * 8) = plVar18;
    if (*plVar9 != 0) {
      plVar18 = *(long **)(*plVar9 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar18) {
        uVar19 = 0;
        if (plVar8 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar8;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar8);
      }
      *(long **)(*plVar5 + (long)plVar18 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar18;
    *plVar18 = (long)plVar9;
  }
  plVar5[3] = plVar5[3] + 1;
LAB_10ae819cc:
  plVar5 = (long *)plVar9[5];
  if (plVar5 == (long *)0x0) {
    lVar6 = plVar4[3];
    plVar5 = plVar3;
    if (lVar6 != 0) {
      plVar5 = plVar4;
    }
    plVar9[5] = (long)plVar5;
    if (lVar6 != 0) {
      plVar4 = (long *)0x0;
    }
  }
  *param_2 = plVar5;
  plVar5 = (long *)plVar9[5];
  __ZNSt3__15mutex6unlockEv(plVar12);
  if (plVar4 != (long *)0x0) {
    FUN_10ae81c00(plVar4);
  }
  return plVar5 != plVar3;
}



/* Entry: 10ae81b18; end: 10ae81baf;  */

undefined8 * FUN_10ae81b18(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001137edbe0 & 1) == 0) {
    iVar1 = 0x137edbe0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x40;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puRam00000001137edbd8 = puVar2;
      ___cxa_guard_release(0x1137edbe0);
    }
  }
  return puRam00000001137edbd8;
}



/* Entry: 10ae81bb0; end: 10ae81bff;  */

long FUN_10ae81bb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c31940(param_1,&UNK_10f6d2969);
  FUN_10ae83b10(lVar1 + 0x18);
  return param_1;
}



/* Entry: 10ae81c00; end: 10ae81c7b;  */

void FUN_10ae81c00(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae81c7c; end: 10ae82043;  */

bool FUN_10ae81c7c(long param_1,long param_2,uint param_3,long *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *unaff_x22;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uStack_1d8;
  byte bStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  ulong uStack_1a8;
  byte bStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  byte bStack_172;
  byte bStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  int iStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  int iStack_138;
  int iStack_134;
  short sStack_130;
  int iStack_12c;
  int iStack_128;
  short sStack_124;
  int iStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  int *piStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  undefined1 *puStack_d8;
  int *piStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  int *piStack_a8;
  int *piStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  long *plStack_70;
  int iStack_64;
  
  iStack_64 = (int)param_2;
  cVar4 = *(char *)(param_1 + 0x57);
  uVar24 = (ulong)cVar4;
  uVar26 = uVar24;
  if ((long)uVar24 < 0) {
    uVar26 = *(ulong *)(param_1 + 0x48);
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  piVar12 = *(int **)(param_1 + 0x20);
  piVar15 = *(int **)(param_1 + 0x28);
  lStack_88 = (long)piVar15 - (long)piVar12;
  uVar16 = (lStack_88 >> 4) * -0x5555555555555555;
  uStack_74 = param_3;
  plStack_70 = param_4;
  if (lStack_88 == 0) {
    uVar21 = 0;
  }
  else {
    uVar25 = 0;
    bVar3 = *(byte *)((long)param_4 + 0x17);
    unaff_x22 = (byte *)((long)piVar12 + 0x29);
    plStack_80 = (long *)*param_4;
    uVar10 = param_4[1];
    uVar22 = uVar26;
    piStack_a8 = piVar12;
    piStack_a0 = piVar15;
    lStack_98 = param_1;
    puStack_90 = param_5;
    do {
      puVar19 = puVar1;
      if (cVar4 < '\0') {
        puVar19 = (undefined8 *)*puVar1;
      }
      uVar18 = (ulong)*unaff_x22;
      uVar21 = (long)puVar19 + uVar18;
      _strlen();
      uVar26 = uVar22;
      if ((char)bVar3 < '\0') {
        if (uVar21 == uVar10) {
          plVar11 = plStack_80;
          if (uVar10 == 0xffffffffffffffff) {
            func_0x000109276104();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ae82024);
            (*pcVar7)();
          }
          goto LAB_10ae81d50;
        }
      }
      else {
        plVar11 = plStack_70;
        if (uVar21 == bVar3) {
LAB_10ae81d50:
          iVar9 = (int)plVar11;
          param_2 = (long)puVar19 + uVar18;
          _memcmp();
          uVar26 = uVar18;
          if (iVar9 != 0) {
            uVar26 = uVar22;
          }
        }
      }
      if (((*(int *)(unaff_x22 + -0x29) == iStack_64) && (unaff_x22[-1] == uStack_74)) &&
         (uVar26 == uVar18)) {
        if (0xff < uVar25) {
          return false;
        }
        goto LAB_10ae81ff4;
      }
      uVar25 = uVar25 + 1;
      unaff_x22 = unaff_x22 + 0x30;
      piVar12 = piStack_a8;
      param_5 = puStack_90;
      param_1 = lStack_98;
      piVar15 = piStack_a0;
      uVar22 = uVar26;
      uVar21 = uVar16;
    } while (uVar16 - uVar25 != 0);
  }
  uVar25 = 0;
  if (0xff < uVar21) {
    return false;
  }
  if (0xff < uVar26) {
    return false;
  }
  if (piVar15 < *(int **)(param_1 + 0x30)) {
    piVar15[2] = 0;
    piVar15[3] = 0;
    piVar15[0] = 0;
    piVar15[1] = 0;
    piVar15[6] = 0;
    piVar15[7] = 0;
    piVar15[4] = 0;
    piVar15[5] = 0;
    piVar15[10] = 0;
    piVar15[0xb] = 0;
    piVar15[8] = 0;
    piVar15[9] = 0;
    piVar15[2] = 0x7b2;
    piVar15[3] = 0;
    *(undefined2 *)(piVar15 + 4) = 0x101;
    piVar15[6] = 0x7b2;
    piVar15[7] = 0;
    *(undefined2 *)(piVar15 + 8) = 0x101;
    *(int **)(param_1 + 0x28) = piVar15 + 0xc;
    piVar17 = piVar15;
LAB_10ae81f98:
    *piVar17 = iStack_64;
    *(char *)(piVar17 + 10) = (char)uStack_74;
    uVar24 = (ulong)*(char *)(param_1 + 0x57);
    if ((long)uVar24 < 0) {
      uVar24 = *(ulong *)(param_1 + 0x48);
    }
    if (uVar26 == uVar24) {
      uVar24 = plStack_70[1];
      plVar11 = (long *)*plStack_70;
      if (-1 < (char)*(byte *)((long)plStack_70 + 0x17)) {
        uVar24 = (ulong)*(byte *)((long)plStack_70 + 0x17);
        plVar11 = plStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar1,plVar11,uVar24);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(puVar1,1,0);
    }
    *(char *)((long)piVar17 + 0x29) = (char)uVar26;
    puStack_90 = param_5;
    uVar25 = uVar21;
LAB_10ae81ff4:
    *puStack_90 = (char)uVar25;
    return true;
  }
  uVar16 = uVar16 + 1;
  if (uVar16 < 0x555555555555556) {
    lVar14 = (long)*(int **)(param_1 + 0x30) - (long)piVar12 >> 4;
    uVar24 = lVar14 * 0x5555555555555556;
    if (uVar24 < uVar16 || uVar24 - uVar16 == 0) {
      uVar24 = uVar16;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar24 = 0x555555555555555;
    }
    if (uVar24 == 0) {
      uVar24 = 0;
      lVar14 = 0;
    }
    else {
      FUN_10ae84bf0();
      lVar14 = param_2 * 0x30;
    }
    piVar17 = (int *)(uVar24 + lStack_88);
    plVar11 = (long *)(uVar24 + lVar14);
    if (lStack_88 == lVar14) {
      if (lStack_88 < 1) {
        uVar16 = 1;
        if (piVar15 != piVar12) {
          uVar16 = ((ulong)-lStack_88 >> 4) * -0x5555555555555556;
        }
        uVar25 = uVar16;
        FUN_10ae84bf0();
        piVar17 = (int *)(uVar25 + (uVar16 >> 2) * 0x30);
        plStack_80 = (long *)(uVar25 + param_2 * 0x30);
        plVar11 = plStack_80;
        if (uVar24 != 0) {
          __ZdlPv(uVar24);
          plVar11 = plStack_80;
        }
      }
      else {
        lVar14 = ((long)((long)piVar17 - uVar24) >> 4) * -0x5555555555555555 + 1;
        piVar17 = piVar17 + ((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1) * -0xc;
      }
    }
    plStack_80 = plVar11;
    lVar14 = (long)piVar12 + lStack_88;
    piVar17[2] = 0;
    piVar17[3] = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    piVar17[6] = 0;
    piVar17[7] = 0;
    piVar17[4] = 0;
    piVar17[5] = 0;
    piVar17[10] = 0;
    piVar17[0xb] = 0;
    piVar17[8] = 0;
    piVar17[9] = 0;
    piVar17[2] = 0x7b2;
    piVar17[3] = 0;
    *(undefined2 *)(piVar17 + 4) = 0x101;
    piVar17[6] = 0x7b2;
    piVar17[7] = 0;
    *(undefined2 *)(piVar17 + 8) = 0x101;
    _memcpy(piVar17 + 0xc,lVar14,*(long *)(param_1 + 0x28) - (long)piVar15);
    lVar23 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar14;
    lVar20 = (long)piVar17 - ((long)piVar15 - *(long *)(param_1 + 0x20));
    _memcpy(lVar20);
    lVar14 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar20;
    *(long *)(param_1 + 0x28) = (long)(piVar17 + 0xc) + (lVar23 - (long)piVar15);
    *(long **)(param_1 + 0x30) = plStack_80;
    if (lVar14 != 0) {
      __ZdlPv();
    }
    goto LAB_10ae81f98;
  }
  FUN_10ae84bdc();
  if (uVar24 != 0) {
    __ZdlPv(uVar24);
  }
  uVar16 = uVar25;
  __Unwind_Resume();
  func_0x000104bd46a0();
  pcStack_b8 = FUN_10ae82044;
  *(undefined1 *)(uVar16 + 0x88) = 0;
  if (*(char *)(uVar16 + 0x87) < '\0') {
    if (*(long *)(uVar16 + 0x78) == 0) {
      return true;
    }
  }
  else if (*(char *)(uVar16 + 0x87) == '\0') {
    return true;
  }
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uVar10 = uVar16 + 0x70;
  uStack_110 = uVar21;
  uStack_108 = uVar24;
  uStack_100 = uVar26;
  piStack_f8 = piVar15;
  puStack_f0 = puVar1;
  lStack_e8 = param_1;
  pbStack_e0 = unaff_x22;
  puStack_d8 = param_5;
  piStack_d0 = piVar12;
  uStack_c8 = uVar25;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10ae861dc(uVar10,&uStack_170);
  if (((uVar10 & 1) == 0) ||
     (uVar26 = uVar16, FUN_10ae81c7c(uVar16,iStack_158,0,&uStack_170,&bStack_171), (uVar26 & 1) == 0
     )) {
LAB_10ae8225c:
    bVar8 = false;
  }
  else {
    uVar26 = uStack_148;
    if (-1 < (long)uStack_140) {
      uVar26 = uStack_140 >> 0x38;
    }
    if (uVar26 == 0) {
      bVar3 = *(byte *)(*(long *)(uVar16 + 0x10) + -0x28);
      bStack_172 = bStack_171;
LAB_10ae82168:
      if ((uint)bVar3 != (uint)bStack_172) {
        piVar12 = (int *)(*(long *)(uVar16 + 0x20) + (ulong)(uint)bVar3 * 0x30);
        piVar15 = (int *)(*(long *)(uVar16 + 0x20) + (ulong)(uint)bStack_172 * 0x30);
        if ((*piVar12 == *piVar15) && ((char)piVar12[10] == (char)piVar15[10])) {
          bVar8 = *(char *)((long)piVar12 + 0x29) == *(char *)((long)piVar15 + 0x29);
          goto LAB_10ae82260;
        }
        goto LAB_10ae8225c;
      }
    }
    else {
      uVar26 = uVar16;
      FUN_10ae81c7c(uVar16,iStack_138,1,&uStack_150,&bStack_172);
      if ((uVar26 & 1) == 0) goto LAB_10ae8225c;
      if (((iStack_134 == 1) && (sStack_130 == 0)) &&
         ((iStack_12c == 0 &&
          (((iStack_128 == 0 && (sStack_124 == 0x16d)) &&
           ((iStack_158 - iStack_138) + iStack_120 == 0x15180)))))) {
        bVar3 = *(byte *)(*(long *)(uVar16 + 0x10) + -0x28);
        goto LAB_10ae82168;
      }
      plVar11 = (long *)(uVar16 + 8);
      FUN_10ae82594(plVar11,(*(long *)(uVar16 + 0x10) - *plVar11 >> 4) * -0x5555555555555555 + 0x324
                   );
      *(undefined1 *)(uVar16 + 0x88) = 1;
      lVar14 = *(long *)(*(long *)(uVar16 + 0x10) + -0x30);
      func_0x00010ae82644(&uStack_1a8,uVar16,lVar14,
                          *(long *)(uVar16 + 0x20) +
                          (ulong)*(byte *)(*(long *)(uVar16 + 0x10) + -0x28) * 0x30);
      *(ulong *)(uVar16 + 0x90) = uStack_1a8;
      if ((uStack_1a8 & 3) == 0) {
        if ((uStack_1a8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uStack_1a8 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar26 = (ulong)((uStack_1a8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                           uStack_1a8 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        else {
          uVar26 = 1;
        }
      }
      else {
        uVar26 = 0;
      }
      uVar24 = uStack_1a8;
      FUN_10ae81174(uStack_1a8,1,1,0x7b2,1,1);
      uVar13 = (int)uStack_1a8 +
               (SUB164(SEXT816((long)uStack_1a8) * ZEXT816(0xa3d70a3d70a3d70b),9) -
               (SUB164(SEXT816((long)uStack_1a8) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400
               + 0x95f;
      uVar13 = ((uVar13 + (uVar13 >> 2)) - (uVar13 >> 2 & 0x3fff) / 0x19) +
               (uVar13 >> 4 & 0xfff) / 0x19 + 1;
      uVar5 = (uVar13 & 0xffff) * 0x2493;
      uVar13 = uVar13 + ((uVar13 - (uVar5 >> 0x10) >> 1 & 0x7fff) + (uVar5 >> 0x10) >> 2) * -7;
      uStack_1a8 = 0;
      bStack_1a0 = bStack_172;
      uStack_198 = 0x7b2;
      uStack_1c0 = 0x101;
      uStack_18c = 0;
      uStack_188 = 0x7b2;
      lVar23 = uVar24 * 0x15180;
      iVar9 = 0;
      if ((uVar13 & 0xffff) != 0) {
        iVar9 = *(int *)(&UNK_10e52c558 + ((ulong)(uVar13 + 6) & 0xffff) * 4) + 1;
      }
      uStack_17c = 0;
      bStack_1d0 = bStack_171;
      uStack_1c8 = 0x7b2;
      uStack_1bc = 0;
      uStack_1b8 = 0x7b2;
      uStack_1ac = 0;
      uVar21 = *(ulong *)(uVar16 + 0x90);
      uVar24 = uVar21 + 0x191;
      uStack_1b0 = uStack_1c0;
      uStack_190 = uStack_1c0;
      uStack_180 = uStack_1c0;
      while( true ) {
        uVar25 = uVar26;
        FUN_10ae826e4(uVar26,iVar9,&iStack_134);
        uVar10 = uVar26;
        FUN_10ae826e4(uVar26,iVar9,&iStack_128);
        uStack_1a8 = (uVar25 + lVar23) - (long)iStack_158;
        uStack_1d8 = (uVar10 + lVar23) - (long)iStack_138;
        puVar2 = &uStack_1d8;
        puVar6 = &uStack_1a8;
        if ((long)uStack_1d8 <= (long)uStack_1a8) {
          puVar2 = &uStack_1a8;
          puVar6 = &uStack_1d8;
        }
        if (lVar14 < (long)*puVar2) {
          if (lVar14 < (long)*puVar6) {
            FUN_10ae827fc(plVar11);
          }
          FUN_10ae827fc(plVar11,puVar2);
          uVar21 = *(ulong *)(uVar16 + 0x90);
        }
        if (uVar21 == uVar24) break;
        lVar23 = lVar23 + *(int *)(&UNK_10e52c4b0 + uVar26 * 4);
        iVar9 = (*(int *)(&UNK_10e52c4b8 + uVar26 * 4) + iVar9) % 7;
        uVar21 = uVar21 + 1;
        uVar13 = 1;
        if ((uVar21 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uVar21 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar13 = (uint)((uVar21 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                          uVar21 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        uVar5 = 0;
        if ((int)uVar26 == 0 && (uVar21 & 3) == 0) {
          uVar5 = uVar13;
        }
        uVar26 = (ulong)uVar5;
        *(ulong *)(uVar16 + 0x90) = uVar21;
      }
    }
    bVar8 = true;
  }
LAB_10ae82260:
  if ((long)uStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  return bVar8;
}



/* Entry: 10ae82044; end: 10ae82593;  */

bool FUN_10ae82044(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_128;
  byte bStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  ulong uStack_f8;
  byte bStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  byte bStack_c2;
  byte bStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  int iStack_88;
  int iStack_84;
  short sStack_80;
  int iStack_7c;
  int iStack_78;
  short sStack_74;
  int iStack_70;
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (*(char *)(param_1 + 0x87) < '\0') {
    if (*(long *)(param_1 + 0x78) == 0) {
      return true;
    }
  }
  else if (*(char *)(param_1 + 0x87) == '\0') {
    return true;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar17 = param_1 + 0x70;
  FUN_10ae861dc(uVar17,&uStack_c0);
  if (((uVar17 & 1) == 0) ||
     (uVar17 = param_1, FUN_10ae81c7c(param_1,iStack_a8,0,&uStack_c0,&bStack_c1), (uVar17 & 1) == 0)
     ) {
LAB_10ae8225c:
    bVar6 = false;
  }
  else {
    uVar17 = uStack_98;
    if (-1 < (long)uStack_90) {
      uVar17 = uStack_90 >> 0x38;
    }
    if (uVar17 == 0) {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + -0x28);
      bStack_c2 = bStack_c1;
LAB_10ae82168:
      if ((uint)bVar3 != (uint)bStack_c2) {
        piVar11 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)bVar3 * 0x30);
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)bStack_c2 * 0x30);
        if ((*piVar11 == *piVar13) && ((char)piVar11[10] == (char)piVar13[10])) {
          bVar6 = *(char *)((long)piVar11 + 0x29) == *(char *)((long)piVar13 + 0x29);
          goto LAB_10ae82260;
        }
        goto LAB_10ae8225c;
      }
    }
    else {
      uVar17 = param_1;
      FUN_10ae81c7c(param_1,iStack_88,1,&uStack_a0,&bStack_c2);
      if ((uVar17 & 1) == 0) goto LAB_10ae8225c;
      if (((((iStack_84 == 1) && (sStack_80 == 0)) && (iStack_7c == 0)) &&
          ((iStack_78 == 0 && (sStack_74 == 0x16d)))) &&
         ((iStack_a8 - iStack_88) + iStack_70 == 0x15180)) {
        bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + -0x28);
        goto LAB_10ae82168;
      }
      plVar7 = (long *)(param_1 + 8);
      FUN_10ae82594(plVar7,(*(long *)(param_1 + 0x10) - *plVar7 >> 4) * -0x5555555555555555 + 0x324)
      ;
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar14 = *(long *)(*(long *)(param_1 + 0x10) + -0x30);
      func_0x00010ae82644(&uStack_f8,param_1,lVar14,
                          *(long *)(param_1 + 0x20) +
                          (ulong)*(byte *)(*(long *)(param_1 + 0x10) + -0x28) * 0x30);
      *(ulong *)(param_1 + 0x90) = uStack_f8;
      if ((uStack_f8 & 3) == 0) {
        if ((uStack_f8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uStack_f8 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar17 = (ulong)((uStack_f8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                           uStack_f8 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        else {
          uVar17 = 1;
        }
      }
      else {
        uVar17 = 0;
      }
      uVar8 = uStack_f8;
      FUN_10ae81174(uStack_f8,1,1,0x7b2,1,1);
      uVar12 = (int)uStack_f8 +
               (SUB164(SEXT816((long)uStack_f8) * ZEXT816(0xa3d70a3d70a3d70b),9) -
               (SUB164(SEXT816((long)uStack_f8) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400
               + 0x95f;
      uVar12 = ((uVar12 + (uVar12 >> 2)) - (uVar12 >> 2 & 0x3fff) / 0x19) +
               (uVar12 >> 4 & 0xfff) / 0x19 + 1;
      uVar4 = (uVar12 & 0xffff) * 0x2493;
      uVar12 = uVar12 + ((uVar12 - (uVar4 >> 0x10) >> 1 & 0x7fff) + (uVar4 >> 0x10) >> 2) * -7;
      uStack_f8 = 0;
      bStack_f0 = bStack_c2;
      uStack_e8 = 0x7b2;
      uStack_110 = 0x101;
      uStack_dc = 0;
      uStack_d8 = 0x7b2;
      lVar16 = uVar8 * 0x15180;
      iVar2 = 0;
      if ((uVar12 & 0xffff) != 0) {
        iVar2 = *(int *)(&UNK_10e52c558 + ((ulong)(uVar12 + 6) & 0xffff) * 4) + 1;
      }
      uStack_cc = 0;
      bStack_120 = bStack_c1;
      uStack_118 = 0x7b2;
      uStack_10c = 0;
      uStack_108 = 0x7b2;
      uStack_fc = 0;
      uVar15 = *(ulong *)(param_1 + 0x90);
      uVar8 = uVar15 + 0x191;
      uStack_100 = uStack_110;
      uStack_e0 = uStack_110;
      uStack_d0 = uStack_110;
      while( true ) {
        uVar9 = uVar17;
        FUN_10ae826e4(uVar17,iVar2,&iStack_84);
        uVar10 = uVar17;
        FUN_10ae826e4(uVar17,iVar2,&iStack_78);
        uStack_f8 = (uVar9 + lVar16) - (long)iStack_a8;
        uStack_128 = (uVar10 + lVar16) - (long)iStack_88;
        puVar1 = &uStack_128;
        puVar5 = &uStack_f8;
        if ((long)uStack_128 <= (long)uStack_f8) {
          puVar1 = &uStack_f8;
          puVar5 = &uStack_128;
        }
        if (lVar14 < (long)*puVar1) {
          if (lVar14 < (long)*puVar5) {
            FUN_10ae827fc(plVar7);
          }
          FUN_10ae827fc(plVar7,puVar1);
          uVar15 = *(ulong *)(param_1 + 0x90);
        }
        if (uVar15 == uVar8) break;
        lVar16 = lVar16 + *(int *)(&UNK_10e52c4b0 + uVar17 * 4);
        iVar2 = (*(int *)(&UNK_10e52c4b8 + uVar17 * 4) + iVar2) % 7;
        uVar15 = uVar15 + 1;
        uVar12 = 1;
        if ((uVar15 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uVar15 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar12 = (uint)((uVar15 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                          uVar15 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        uVar4 = 0;
        if ((int)uVar17 == 0 && (uVar15 & 3) == 0) {
          uVar4 = uVar12;
        }
        uVar17 = (ulong)uVar4;
        *(ulong *)(param_1 + 0x90) = uVar15;
      }
    }
    bVar6 = true;
  }
LAB_10ae82260:
  if ((long)uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  return bVar6;
}



/* Entry: 10ae82594; end: 10ae826e3;  */

void FUN_10ae82594(long *param_1,ulong param_2,long param_3,undefined4 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_10ae84c34();
      lVar2 = 0x7b2;
      uVar1 = 1;
      func_0x00010ae80b44(0x7b2,1,1,0,param_3 / 0x3c,param_3 % 0x3c);
      uVar1 = uVar1 & 0xffffffffff;
      FUN_10ae81334();
      *param_1 = lVar2;
      param_1[1] = uVar1 & 0xffffffffff;
      *(undefined4 *)(param_1 + 2) = *param_4;
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_4 + 10);
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (*(char *)(param_2 + 0x57) < '\0') {
        puVar3 = (undefined8 *)*puVar3;
      }
      param_1[3] = (long)puVar3 + (ulong)*(byte *)((long)param_4 + 0x29);
      return;
    }
    lVar4 = param_1[1];
    uVar1 = param_2;
    FUN_10ae84c48();
    lVar2 = param_2 + (lVar4 - lVar2);
    lVar5 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar5);
    lVar4 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar2;
    param_1[2] = param_2 + uVar1 * 0x30;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10ae826e4; end: 10ae827fb;  */

long FUN_10ae826e4(uint param_1,int param_2,int *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *param_3;
  if (iVar4 == 2) {
    cVar1 = *(char *)((long)param_3 + 5);
    lVar5 = (long)(char)param_3[1];
    if (cVar1 == '\x05') {
      lVar5 = lVar5 + 1;
    }
    sVar2 = *(short *)(&UNK_10e52c58c + lVar5 * 2 + (ulong)param_1 * 0x1c);
    sVar3 = (short)((long)sVar2 + (long)param_2) + (short)(((long)sVar2 + (long)param_2) / 7) * -7;
    if (cVar1 == '\x05') {
      iVar4 = (int)sVar2 + (int)(short)~((short)((sVar3 - *(char *)((long)param_3 + 6)) + 6) % 7);
    }
    else {
      iVar4 = (int)sVar2 + cVar1 * 7 +
              (int)((short)((*(char *)((long)param_3 + 6) - sVar3) + 7) % 7) + -7;
    }
  }
  else if (iVar4 == 1) {
    iVar4 = (int)(short)param_3[1];
  }
  else if (iVar4 == 0) {
    param_1 = param_1 ^ 1;
    if ((short)param_3[1] < 0x3c) {
      param_1 = 1;
    }
    iVar4 = (int)(short)param_3[1] - param_1;
  }
  else {
    iVar4 = 0;
  }
  return (long)param_3[2] + (long)iVar4 * 0x15180;
}



/* Entry: 10ae827fc; end: 10ae828ef;  */

long * FUN_10ae827fc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    uVar11 = param_2[2];
    uVar13 = param_2[5];
    uVar12 = param_2[4];
    puVar8[3] = param_2[3];
    puVar8[2] = uVar11;
    puVar8[5] = uVar13;
    puVar8[4] = uVar12;
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8 = puVar8 + 6;
    plVar2 = param_1;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar4 = (lVar7 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar4) {
      FUN_10ae84c34();
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar5 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    puVar3 = param_2;
    FUN_10ae84c48();
    puVar1 = (undefined8 *)(uVar6 + lVar7);
    uVar13 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar1[3] = param_2[3];
    puVar1[2] = uVar13;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[1] = uVar12;
    *puVar1 = uVar11;
    puVar8 = puVar1 + 6;
    lVar7 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar2 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = uVar6 + (long)puVar3 * 0x30;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar2;
}



/* Entry: 10ae828f0; end: 10ae8292f;  */

undefined8 * FUN_10ae828f0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ae82930; end: 10ae82abb;  */

undefined8 FUN_10ae82930(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_10ae82abc(param_1 + 0x20,1);
  puVar4 = (undefined8 *)(param_1 + 8);
  uVar3 = *puVar4;
  lVar6 = *(long *)(param_1 + 0x28);
  puVar5 = (undefined4 *)(lVar6 + -0x30);
  *puVar5 = (int)*param_2;
  *(undefined2 *)(lVar6 + -8) = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_10ae82594(puVar4,0xc);
  lVar7 = 0;
  do {
    uVar3 = *(undefined8 *)(&UNK_10e52c4c0 + lVar7);
    puVar1 = puVar4;
    FUN_10ae82c2c(puVar4,*(undefined8 *)(param_1 + 0x10));
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x00010ae82644(&uStack_80,param_1,uVar3,puVar5);
    puVar1[3] = uStack_78;
    puVar1[2] = uStack_80;
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    FUN_10ae81334(uVar3,uVar2,0xffffffffffffffff);
    puVar1[4] = uVar3;
    puVar1[5] = uVar2 & 0xffffffffff;
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x60);
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10ae7e228(&uStack_80,param_2);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x48) = uStack_78;
  *(undefined8 *)(param_1 + 0x40) = uStack_80;
  *(undefined8 *)(param_1 + 0x50) = uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(param_1 + 0x40,1,0);
  if (*(char *)(param_1 + 0x87) < '\0') {
    **(undefined1 **)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  func_0x00010ae82644(&uStack_80,param_1,0x7fffffffffffffff,puVar5);
  *(undefined8 *)(lVar6 + -0x20) = uStack_78;
  *(undefined8 *)(lVar6 + -0x28) = uStack_80;
  func_0x00010ae82644(&uStack_80,param_1,0x8000000000000000,puVar5);
  *(undefined8 *)(lVar6 + -0x10) = uStack_78;
  *(undefined8 *)(lVar6 + -0x18) = uStack_80;
  FUN_10ae82eb8(puVar4);
  return 1;
}



/* Entry: 10ae82abc; end: 10ae82c2b;  */

ulong * FUN_10ae82abc(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  
  uVar11 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar4 - uVar11;
  bVar1 = param_2 < (ulong *)((lVar12 >> 4) * -0x5555555555555555);
  uVar9 = (long)param_2 + (lVar12 >> 4) * 0x5555555555555555;
  if (bVar1 || uVar9 == 0) {
    if (bVar1) {
      param_1[1] = uVar11 + (long)param_2 * 0x30;
    }
  }
  else if ((ulong)(((long)(param_1[2] - (long)puVar4) >> 4) * -0x5555555555555555) < uVar9) {
    if ((ulong *)0x555555555555555 < param_2) {
      FUN_10ae84bdc();
      puVar2 = (ulong *)param_1[1];
      if (puVar2 < (ulong *)param_1[2]) {
        puVar13 = param_2;
        if (param_2 == puVar2) {
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[2] = 0x7b2;
          *(undefined2 *)(puVar2 + 3) = 0x101;
          puVar2[4] = 0x7b2;
          *(undefined2 *)(puVar2 + 5) = 0x101;
          param_1[1] = (ulong)(puVar2 + 6);
        }
        else {
          puVar8 = puVar2;
          if (puVar2 + -6 < puVar2) {
            puVar2[3] = puVar2[-3];
            puVar2[2] = puVar2[-4];
            puVar2[5] = puVar2[-1];
            puVar2[4] = puVar2[-2];
            puVar2[1] = puVar2[-5];
            *puVar2 = puVar2[-6];
            puVar8 = puVar2 + 6;
          }
          param_1[1] = (ulong)puVar8;
          if (puVar2 != param_2 + 6) {
            _memmove(param_2 + 6,param_2);
          }
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0x7b2;
          *(undefined2 *)(param_2 + 3) = 0x101;
          *(undefined4 *)((long)param_2 + 0x1a) = 0;
          *(undefined2 *)((long)param_2 + 0x1e) = 0;
          param_2[4] = 0x7b2;
          *(undefined2 *)(param_2 + 5) = 0x101;
          *(undefined4 *)((long)param_2 + 0x2a) = 0;
          *(undefined2 *)((long)param_2 + 0x2e) = 0;
        }
      }
      else {
        puVar8 = (ulong *)*param_1;
        uVar11 = ((long)puVar2 - (long)puVar8 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar11) {
          FUN_10ae84c34();
          if (lVar12 != 0) {
            __ZdlPv(lVar12);
          }
          __Unwind_Resume();
          uVar9 = *param_1;
          uVar3 = param_1[2] - uVar9;
          uVar11 = param_1[1] - uVar9;
          if (uVar11 < uVar3) {
            if (param_1[1] == uVar9) {
              puVar2 = (ulong *)0x0;
              uVar5 = 0;
              uVar10 = uVar9;
            }
            else {
              puVar2 = (ulong *)(((long)uVar11 >> 4) * -0x5555555555555555);
              FUN_10ae84c48();
              uVar3 = param_1[2] - *param_1;
              uVar10 = *param_1;
              uVar5 = uVar9;
            }
            if (uVar5 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
              uVar11 = (long)puVar2 + uVar11;
              puVar8 = puVar2 + uVar5 * 6;
              uVar9 = uVar11 - (param_1[1] - uVar10);
              _memcpy(uVar9);
              puVar2 = (ulong *)*param_1;
              *param_1 = uVar9;
              param_1[1] = uVar11;
              param_1[2] = (ulong)puVar8;
            }
            param_1 = (ulong *)0x0;
            if (puVar2 != (ulong *)0x0) goto code_r0x00010bdbd7ac;
          }
          return param_1;
        }
        lVar6 = (long)param_2 - (long)puVar8;
        lVar12 = (long)param_1[2] - (long)puVar8 >> 4;
        uVar9 = lVar12 * 0x5555555555555556;
        if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
          uVar9 = uVar11;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar9 = 0x555555555555555;
        }
        puVar2 = param_2;
        if (uVar9 == 0) {
          uVar9 = 0;
          lVar12 = 0;
        }
        else {
          FUN_10ae84c48();
          lVar12 = (long)puVar2 * 0x30;
        }
        puVar13 = (ulong *)(uVar9 + lVar6);
        uVar11 = uVar9 + lVar12;
        if (lVar6 == lVar12) {
          if (lVar6 < 1) {
            uVar3 = 1;
            if (param_2 != puVar8) {
              uVar3 = ((ulong)-lVar6 >> 4) * -0x5555555555555556;
            }
            uVar11 = uVar3;
            FUN_10ae84c48();
            puVar13 = (ulong *)(uVar11 + (uVar3 >> 2) * 0x30);
            uVar11 = uVar11 + (long)puVar2 * 0x30;
            if (uVar9 != 0) {
              __ZdlPv(uVar9);
            }
          }
          else {
            lVar12 = ((long)((long)puVar13 - uVar9) >> 4) * -0x5555555555555555 + 1;
            puVar13 = puVar13 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1) * -6;
          }
        }
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[2] = 0x7b2;
        *(undefined2 *)(puVar13 + 3) = 0x101;
        puVar13[4] = 0x7b2;
        *(undefined2 *)(puVar13 + 5) = 0x101;
        _memcpy(puVar13 + 6,param_2,param_1[1] - (long)param_2);
        uVar9 = param_1[1];
        param_1[1] = (ulong)param_2;
        uVar10 = (long)puVar13 - ((long)param_2 - *param_1);
        _memcpy(uVar10);
        uVar3 = *param_1;
        *param_1 = uVar10;
        param_1[1] = (long)(puVar13 + 6) + (uVar9 - (long)param_2);
        param_1[2] = uVar11;
        if (uVar3 != 0) {
          __ZdlPv();
        }
      }
      return puVar13;
    }
    lVar6 = (long)(param_1[2] - uVar11) >> 4;
    puVar8 = (ulong *)(lVar6 * 0x5555555555555556);
    if (puVar8 < param_2 || (long)puVar8 - (long)param_2 == 0) {
      puVar8 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      puVar8 = (ulong *)0x555555555555555;
    }
    FUN_10ae84bf0();
    puVar7 = (undefined8 *)((long)puVar8 + lVar12);
    puVar4 = puVar7;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0x7b2;
      *(undefined2 *)(puVar4 + 2) = 0x101;
      puVar4[3] = 0x7b2;
      *(undefined2 *)(puVar4 + 4) = 0x101;
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar7 + uVar9 * 6);
    uVar11 = (long)puVar7 - (param_1[1] - *param_1);
    _memcpy(uVar11);
    puVar2 = (ulong *)*param_1;
    *param_1 = uVar11;
    param_1[1] = (ulong)(puVar7 + uVar9 * 6);
    param_1[2] = (ulong)(puVar8 + (long)param_2 * 6);
    param_1 = (ulong *)0x0;
    if (puVar2 != (ulong *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return puVar2;
    }
  }
  else {
    puVar7 = puVar4 + uVar9 * 6;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0x7b2;
      *(undefined2 *)(puVar4 + 2) = 0x101;
      puVar4[3] = 0x7b2;
      *(undefined2 *)(puVar4 + 4) = 0x101;
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar7);
    param_1[1] = (ulong)puVar7;
  }
  return param_1;
}



/* Entry: 10ae82c2c; end: 10ae82eb7;  */

ulong * FUN_10ae82c2c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar2 = (ulong *)param_1[1];
  if (puVar2 < (ulong *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[2] = 0x7b2;
      *(undefined2 *)(puVar2 + 3) = 0x101;
      puVar2[4] = 0x7b2;
      *(undefined2 *)(puVar2 + 5) = 0x101;
      param_1[1] = (ulong)(puVar2 + 6);
    }
    else {
      puVar9 = puVar2;
      if (puVar2 + -6 < puVar2) {
        puVar2[3] = puVar2[-3];
        puVar2[2] = puVar2[-4];
        puVar2[5] = puVar2[-1];
        puVar2[4] = puVar2[-2];
        puVar2[1] = puVar2[-5];
        *puVar2 = puVar2[-6];
        puVar9 = puVar2 + 6;
      }
      param_1[1] = (ulong)puVar9;
      if (puVar2 != param_2 + 6) {
        _memmove(param_2 + 6,param_2);
      }
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0x7b2;
      *(undefined2 *)(param_2 + 3) = 0x101;
      *(undefined4 *)((long)param_2 + 0x1a) = 0;
      *(undefined2 *)((long)param_2 + 0x1e) = 0;
      param_2[4] = 0x7b2;
      *(undefined2 *)(param_2 + 5) = 0x101;
      *(undefined4 *)((long)param_2 + 0x2a) = 0;
      *(undefined2 *)((long)param_2 + 0x2e) = 0;
    }
  }
  else {
    puVar9 = (ulong *)*param_1;
    uVar3 = ((long)puVar2 - (long)puVar9 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar3) {
      FUN_10ae84c34();
      if (unaff_x21 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar6 = *param_1;
      uVar1 = param_1[2] - uVar6;
      uVar3 = param_1[1] - uVar6;
      if (uVar3 < uVar1) {
        if (param_1[1] == uVar6) {
          puVar2 = (ulong *)0x0;
          uVar4 = 0;
          uVar7 = uVar6;
        }
        else {
          puVar2 = (ulong *)(((long)uVar3 >> 4) * -0x5555555555555555);
          FUN_10ae84c48();
          uVar1 = param_1[2] - *param_1;
          uVar7 = *param_1;
          uVar4 = uVar6;
        }
        if (uVar4 < (ulong)(((long)uVar1 >> 4) * -0x5555555555555555)) {
          uVar3 = (long)puVar2 + uVar3;
          puVar9 = puVar2 + uVar4 * 6;
          uVar6 = uVar3 - (param_1[1] - uVar7);
          _memcpy(uVar6);
          puVar2 = (ulong *)*param_1;
          *param_1 = uVar6;
          param_1[1] = uVar3;
          param_1[2] = (ulong)puVar9;
        }
        param_1 = (ulong *)0x0;
        if (puVar2 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          return puVar2;
        }
      }
      return param_1;
    }
    lVar10 = (long)param_2 - (long)puVar9;
    lVar5 = (long)param_1[2] - (long)puVar9 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
      uVar6 = uVar3;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    puVar2 = param_2;
    if (uVar6 == 0) {
      uVar6 = 0;
      lVar5 = 0;
    }
    else {
      FUN_10ae84c48();
      lVar5 = (long)puVar2 * 0x30;
    }
    puVar8 = (ulong *)(uVar6 + lVar10);
    uVar3 = uVar6 + lVar5;
    if (lVar10 == lVar5) {
      if (lVar10 < 1) {
        uVar1 = 1;
        if (param_2 != puVar9) {
          uVar1 = ((ulong)-lVar10 >> 4) * -0x5555555555555556;
        }
        uVar3 = uVar1;
        FUN_10ae84c48();
        puVar8 = (ulong *)(uVar3 + (uVar1 >> 2) * 0x30);
        uVar3 = uVar3 + (long)puVar2 * 0x30;
        if (uVar6 != 0) {
          __ZdlPv(uVar6);
        }
      }
      else {
        lVar5 = ((long)((long)puVar8 - uVar6) >> 4) * -0x5555555555555555 + 1;
        puVar8 = puVar8 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1) * -6;
      }
    }
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[2] = 0x7b2;
    *(undefined2 *)(puVar8 + 3) = 0x101;
    puVar8[4] = 0x7b2;
    *(undefined2 *)(puVar8 + 5) = 0x101;
    _memcpy(puVar8 + 6,param_2,param_1[1] - (long)param_2);
    uVar6 = param_1[1];
    param_1[1] = (ulong)param_2;
    uVar7 = (long)puVar8 - ((long)param_2 - *param_1);
    _memcpy(uVar7);
    uVar1 = *param_1;
    *param_1 = uVar7;
    param_1[1] = (long)(puVar8 + 6) + (uVar6 - (long)param_2);
    param_1[2] = uVar3;
    if (uVar1 != 0) {
      __ZdlPv();
    }
  }
  return puVar8;
}



/* Entry: 10ae82eb8; end: 10ae82f8f;  */

void FUN_10ae82eb8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar5 = param_1[2] - uVar2;
  uVar6 = param_1[1] - uVar2;
  if (uVar6 < uVar5) {
    if (param_1[1] == uVar2) {
      uVar1 = 0;
      uVar4 = 0;
      uVar3 = uVar2;
    }
    else {
      uVar1 = ((long)uVar6 >> 4) * -0x5555555555555555;
      FUN_10ae84c48();
      uVar5 = param_1[2] - *param_1;
      uVar3 = *param_1;
      uVar4 = uVar2;
    }
    if (uVar4 < (ulong)(((long)uVar5 >> 4) * -0x5555555555555555)) {
      uVar6 = uVar1 + uVar6;
      uVar5 = uVar1 + uVar4 * 0x30;
      uVar2 = uVar6 - (param_1[1] - uVar3);
      _memcpy(uVar2);
      uVar1 = *param_1;
      *param_1 = uVar2;
      param_1[1] = uVar6;
      param_1[2] = uVar5;
    }
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10ae82f90; end: 10ae830bf;  */

undefined8 FUN_10ae82f90(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  lVar1 = 0;
  uVar3 = 0;
  do {
    iVar4 = (int)uVar3;
    uVar3 = (ulong)((uint)*(byte *)(param_2 + 0x20 + lVar1) | iVar4 << 8);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 != 4);
  if (-1 < iVar4 << 8) {
    lVar1 = 0;
    uVar2 = 0;
    *param_1 = uVar3;
    do {
      iVar4 = (int)uVar2;
      uVar2 = (ulong)((uint)*(byte *)(param_2 + 0x24 + lVar1) | iVar4 << 8);
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 != 4);
    if (-1 < iVar4 << 8) {
      lVar1 = 0;
      uVar3 = 0;
      param_1[1] = uVar2;
      do {
        iVar4 = (int)uVar3;
        uVar3 = (ulong)((uint)*(byte *)(param_2 + 0x28 + lVar1) | iVar4 << 8);
        lVar1 = lVar1 + 1;
      } while ((int)lVar1 != 4);
      if (-1 < iVar4 << 8) {
        lVar1 = 0;
        uVar2 = 0;
        param_1[2] = uVar3;
        do {
          iVar4 = (int)uVar2;
          uVar2 = (ulong)((uint)*(byte *)(param_2 + 0x1c + lVar1) | iVar4 << 8);
          lVar1 = lVar1 + 1;
        } while ((int)lVar1 != 4);
        if (-1 < iVar4 << 8) {
          lVar1 = 0;
          uVar3 = 0;
          param_1[3] = uVar2;
          do {
            iVar4 = (int)uVar3;
            uVar3 = (ulong)((uint)*(byte *)(param_2 + 0x18 + lVar1) | iVar4 << 8);
            lVar1 = lVar1 + 1;
          } while ((int)lVar1 != 4);
          if (-1 < iVar4 << 8) {
            lVar1 = 0;
            uVar2 = 0;
            param_1[4] = uVar3;
            do {
              iVar4 = (int)uVar2;
              uVar2 = (ulong)((uint)*(byte *)(param_2 + 0x14 + lVar1) | iVar4 << 8);
              lVar1 = lVar1 + 1;
            } while ((int)lVar1 != 4);
            if (-1 < iVar4 << 8) {
              param_1[5] = uVar2;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 10ae830c0; end: 10ae832df;  */

/* WARNING: Possible PIC construction at 0x00010ae83638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae8363c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83664) */
/* WARNING: Removing unreachable block (ram,0x00010ae8366c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83680) */
/* WARNING: Removing unreachable block (ram,0x00010ae83694) */
/* WARNING: Removing unreachable block (ram,0x00010ae836b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae836c4) */
/* WARNING: Removing unreachable block (ram,0x00010ae836d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae836e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae836f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae836fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae83a74) */
/* WARNING: Removing unreachable block (ram,0x00010ae83708) */
/* WARNING: Removing unreachable block (ram,0x00010ae83714) */
/* WARNING: Removing unreachable block (ram,0x00010ae83718) */
/* WARNING: Removing unreachable block (ram,0x00010ae83720) */
/* WARNING: Removing unreachable block (ram,0x00010ae83728) */
/* WARNING: Removing unreachable block (ram,0x00010ae8374c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83738) */
/* WARNING: Removing unreachable block (ram,0x00010ae83748) */
/* WARNING: Removing unreachable block (ram,0x00010ae83750) */
/* WARNING: Removing unreachable block (ram,0x00010ae83780) */
/* WARNING: Removing unreachable block (ram,0x00010ae83774) */
/* WARNING: Removing unreachable block (ram,0x00010ae8378c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83794) */
/* WARNING: Removing unreachable block (ram,0x00010ae837b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae837b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae837bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae837d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae837dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae837e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae83818) */
/* WARNING: Removing unreachable block (ram,0x00010ae83820) */
/* WARNING: Removing unreachable block (ram,0x00010ae83824) */
/* WARNING: Removing unreachable block (ram,0x00010ae83828) */
/* WARNING: Removing unreachable block (ram,0x00010ae83844) */
/* WARNING: Removing unreachable block (ram,0x00010ae8384c) */
/* WARNING: Removing unreachable block (ram,0x00010ae8385c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83868) */
/* WARNING: Removing unreachable block (ram,0x00010ae83878) */
/* WARNING: Removing unreachable block (ram,0x00010ae83888) */
/* WARNING: Removing unreachable block (ram,0x00010ae838a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae838b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae838c4) */
/* WARNING: Removing unreachable block (ram,0x00010ae838d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae838d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae838f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae838f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae83910) */
/* WARNING: Removing unreachable block (ram,0x00010ae8391c) */
/* WARNING: Removing unreachable block (ram,0x00010ae83928) */
/* WARNING: Removing unreachable block (ram,0x00010ae83944) */
/* WARNING: Removing unreachable block (ram,0x00010ae83950) */
/* WARNING: Removing unreachable block (ram,0x00010ae83970) */
/* WARNING: Removing unreachable block (ram,0x00010ae839c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae839e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae83a00) */
/* WARNING: Removing unreachable block (ram,0x00010ae83a04) */
/* WARNING: Removing unreachable block (ram,0x00010ae83a64) */
/* WARNING: Removing unreachable block (ram,0x00010ae83a0c) */
/* WARNING: Removing unreachable block (ram,0x00010ae837f0) */

long * FUN_10ae830c0(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x22;
  long *plVar17;
  byte *unaff_x23;
  byte *pbVar18;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar19;
  undefined8 uVar20;
  
  puVar19 = &stack0xfffffffffffffff0;
  lVar9 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  plVar16 = (long *)((long)puVar7 - lVar9);
  bVar4 = param_2 < (long *)(((long)plVar16 >> 4) * -0x5555555555555555);
  plVar15 = (long *)((long)param_2 + ((long)plVar16 >> 4) * 0x5555555555555555);
  if (bVar4 || plVar15 == (long *)0x0) {
    if (bVar4) {
      param_1[1] = lVar9 + (long)param_2 * 0x30;
    }
  }
  else {
    if ((long *)((param_1[2] - (long)puVar7 >> 4) * -0x5555555555555555) < plVar15) {
      if (param_2 < (long *)0x555555555555556) {
        lVar9 = param_1[2] - lVar9 >> 4;
        plVar12 = (long *)(lVar9 * 0x5555555555555556);
        if (plVar12 < param_2 || (long)plVar12 - (long)param_2 == 0) {
          plVar12 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          plVar12 = (long *)0x555555555555555;
        }
        FUN_10ae84c48();
        puVar10 = (undefined8 *)((long)plVar12 + (long)plVar16);
        puVar7 = puVar10;
        do {
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[2] = 0x7b2;
          *(undefined2 *)(puVar7 + 3) = 0x101;
          puVar7[4] = 0x7b2;
          *(undefined2 *)(puVar7 + 5) = 0x101;
          puVar7 = puVar7 + 6;
        } while (puVar7 != puVar10 + (long)plVar15 * 6);
        lVar9 = (long)puVar10 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        plVar5 = (long *)*param_1;
        *param_1 = lVar9;
        param_1[1] = (long)(puVar10 + (long)plVar15 * 6);
        param_1[2] = (long)(plVar12 + (long)param_2 * 6);
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
      }
      else {
        uVar20 = 0x10ae83230;
        plVar5 = param_1;
        FUN_10ae84c34();
        puVar3 = &stack0xffffffffffffffd0;
        while( true ) {
          plVar12 = plVar5;
          *(long *)(puVar3 + -0x30) = unaff_x22;
          *(long **)(puVar3 + -0x28) = plVar16;
          *(long **)(puVar3 + -0x20) = plVar15;
          *(long **)(puVar3 + -0x18) = param_1;
          *(undefined1 **)(puVar3 + -0x10) = puVar19;
          *(undefined8 *)(puVar3 + -8) = uVar20;
          lVar9 = *plVar12;
          if (param_2 <= (long *)((plVar12[2] - lVar9 >> 4) * -0x5555555555555555)) {
            return plVar12;
          }
          if (param_2 < (long *)0x555555555555556) break;
          FUN_10ae84bdc();
          *(undefined8 *)(puVar3 + -0x90) = unaff_x28;
          *(undefined8 *)(puVar3 + -0x88) = unaff_x27;
          *(ulong *)(puVar3 + -0x80) = unaff_x26;
          *(ulong *)(puVar3 + -0x78) = unaff_x25;
          *(long *)(puVar3 + -0x70) = unaff_x24;
          *(byte **)(puVar3 + -0x68) = unaff_x23;
          *(long *)(puVar3 + -0x60) = unaff_x22;
          *(long **)(puVar3 + -0x58) = plVar16;
          *(long **)(puVar3 + -0x50) = plVar15;
          *(long **)(puVar3 + -0x48) = param_1;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(code **)(puVar3 + -0x38) = FUN_10ae832e0;
          puVar19 = puVar3 + -0x40;
          *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(undefined8 *)(puVar3 + -0x138) = 0;
          plVar15 = param_2;
          FUN_10ae7de24(param_2,puVar3 + -0x138);
          if ((int)plVar15 != 0) {
            FUN_10ae82930(plVar12,puVar3 + -0x138);
            plVar17 = (long *)0x1;
            plVar5 = plVar12;
            plVar15 = param_2;
            goto LAB_10ae834d0;
          }
          plVar16 = (long *)(puVar3 + -0xf8);
          *(undefined ***)(puVar3 + -0xf8) = &PTR_FUN_110c8b828;
          *(long **)(puVar3 + -0xe0) = plVar16;
          (*(code *)PTR_FUN_113311b60)(puVar3 + -0x140,param_2,puVar3 + -0xf8);
          plVar5 = *(long **)(puVar3 + -0xe0);
          if (plVar5 == plVar16) {
            lVar9 = 0x20;
LAB_10ae83388:
            (**(code **)(*plVar5 + lVar9))();
          }
          else if (plVar5 != (long *)0x0) {
            lVar9 = 0x28;
            goto LAB_10ae83388;
          }
          plVar15 = *(long **)(puVar3 + -0x140);
          if (plVar15 == (long *)0x0) {
            plVar17 = (long *)0x0;
            goto LAB_10ae834d0;
          }
          plVar5 = plVar15;
          (**(code **)(*plVar15 + 0x10))(plVar15,puVar3 + -0xc4,0x2c);
          if ((plVar5 != (long *)0x2c) ||
             (plVar16 = (long *)0x66695a54, *(int *)(puVar3 + -0xc4) != 0x66695a54)) {
LAB_10ae834b8:
            plVar17 = (long *)0x0;
            plVar5 = *(long **)(puVar3 + -0x140);
            *(undefined8 *)(puVar3 + -0x140) = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
LAB_10ae834d0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar3 + -0x98)) {
              ___stack_chk_fail();
              if (*(long *)(puVar3 + -0x110) != 0) {
                *(long *)(puVar3 + -0x108) = *(long *)(puVar3 + -0x110);
                __ZdlPv();
              }
              plVar12 = *(long **)(puVar3 + -0x140);
              *(undefined8 *)(puVar3 + -0x140) = 0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 8))();
              }
              __Unwind_Resume(plVar5);
              *(long **)(puVar3 + -0x170) = plVar17;
              *(long **)(puVar3 + -0x168) = plVar16;
              *(long **)(puVar3 + -0x160) = plVar15;
              *(long **)(puVar3 + -0x158) = plVar5;
              *(undefined1 **)(puVar3 + -0x150) = puVar19;
              *(code **)(puVar3 + -0x148) = FUN_10ae83b10;
              plVar16 = (long *)0xa8;
              __Znwm();
              *plVar16 = (long)&PTR_FUN_110c8b7c0;
              plVar16[2] = 0;
              plVar16[1] = 0;
              plVar16[4] = 0;
              plVar16[3] = 0;
              plVar16[6] = 0;
              plVar16[5] = 0;
              plVar16[9] = 0;
              plVar16[8] = 0;
              plVar16[0xb] = 0;
              plVar16[10] = 0;
              plVar16[0xd] = 0;
              plVar16[0xc] = 0;
              plVar16[0xf] = 0;
              plVar16[0xe] = 0;
              plVar16[0x10] = 0;
              plVar16[0x13] = 0;
              plVar16[0x14] = 0;
              *extraout_x8 = plVar16;
              *(undefined8 *)(puVar3 + -0x178) = 0;
              FUN_10ae82930();
              return plVar16;
            }
            return plVar17;
          }
          puVar6 = puVar3 + -0xf8;
          FUN_10ae82f90(puVar6,puVar3 + -0xc4);
          if ((int)puVar6 == 0) goto LAB_10ae834b8;
          cVar2 = puVar3[-0xc0];
          if (cVar2 != '\0') {
            plVar5 = plVar15;
            (**(code **)(*plVar15 + 0x18))
                      (plVar15,*(long *)(puVar3 + -0xf8) * 5 + *(long *)(puVar3 + -0xf0) * 6 +
                               *(long *)(puVar3 + -0xe8) + *(long *)(puVar3 + -0xe0) * 8 +
                               *(long *)(puVar3 + -0xd8) + *(long *)(puVar3 + -0xd0));
            if (((((int)plVar5 == 0) &&
                 (plVar5 = plVar15, (**(code **)(*plVar15 + 0x10))(plVar15,puVar3 + -0xc4,0x2c),
                 plVar5 == (long *)0x2c)) && (*(int *)(puVar3 + -0xc4) == 0x66695a54)) &&
               (puVar3[-0xc0] != '\0')) {
              puVar6 = puVar3 + -0xf8;
              FUN_10ae82f90(puVar6,puVar3 + -0xc4);
              if ((int)puVar6 != 0) {
                unaff_x26 = 8;
                goto LAB_10ae83480;
              }
            }
            goto LAB_10ae834b8;
          }
          unaff_x26 = 4;
LAB_10ae83480:
          plVar16 = *(long **)(puVar3 + -0xf0);
          if ((((plVar16 == (long *)0x0) || (*(long *)(puVar3 + -0xe0) != 0)) ||
              ((plVar5 = *(long **)(puVar3 + -0xd8), plVar5 != (long *)0x0 && (plVar5 != plVar16))))
             || ((plVar17 = *(long **)(puVar3 + -0xd0), plVar17 != (long *)0x0 &&
                 (plVar17 != plVar16)))) goto LAB_10ae834b8;
          unaff_x24 = *(long *)(puVar3 + -0xf8);
          unaff_x22 = *(long *)(puVar3 + -0xe8);
          plVar17 = (long *)((long)plVar17 +
                            (long)plVar5 +
                            unaff_x22 + unaff_x24 * (unaff_x26 | 1) + (long)plVar16 * 6);
          func_0x0001092a38dc(puVar3 + -0x110,plVar17);
          plVar5 = plVar15;
          (**(code **)(*plVar15 + 0x10))(plVar15,*(undefined8 *)(puVar3 + -0x110),plVar17);
          if (plVar5 != plVar17) {
LAB_10ae83a4c:
            if (*(long *)(puVar3 + -0x110) != 0) {
              *(long *)(puVar3 + -0x108) = *(long *)(puVar3 + -0x110);
              __ZdlPv();
            }
            goto LAB_10ae834b8;
          }
          unaff_x23 = *(byte **)(puVar3 + -0x110);
          FUN_10ae82594(plVar12 + 1,unaff_x24 + 2);
          FUN_10ae830c0(plVar12 + 1,unaff_x24);
          if (unaff_x24 == 0) {
            unaff_x25 = 0;
          }
          else {
            lVar9 = 0;
            lVar11 = plVar12[1];
            do {
              lVar14 = 0;
              if (cVar2 == '\0') {
                uVar13 = 0;
                do {
                  uVar13 = (long)((int)uVar13 << 8) | (ulong)unaff_x23[lVar14];
                  lVar14 = lVar14 + 1;
                } while ((int)lVar14 != 4);
              }
              else {
                uVar13 = 0;
                do {
                  uVar13 = (ulong)unaff_x23[lVar14] | uVar13 << 8;
                  lVar14 = lVar14 + 1;
                } while ((int)lVar14 != 8);
              }
              *(ulong *)(lVar11 + lVar9 * 0x30) = uVar13;
              if ((lVar9 != 0) && ((long)uVar13 <= *(long *)(lVar11 + -0x30 + lVar9 * 0x30)))
              goto LAB_10ae83a4c;
              unaff_x23 = unaff_x23 + unaff_x26;
              lVar9 = lVar9 + 1;
            } while (lVar9 != unaff_x24);
            unaff_x25 = 0;
            pbVar8 = (byte *)(lVar11 + 8);
            lVar9 = unaff_x24;
            pbVar18 = unaff_x23;
            do {
              unaff_x23 = pbVar18 + 1;
              bVar1 = *pbVar18;
              *pbVar8 = bVar1;
              if (plVar16 <= (long *)(ulong)bVar1) goto LAB_10ae83a4c;
              unaff_x25 = (ulong)((uint)(bVar1 == 0) | (uint)unaff_x25);
              lVar9 = lVar9 + -1;
              pbVar8 = pbVar8 + 0x30;
              pbVar18 = unaff_x23;
            } while (lVar9 != 0);
          }
          param_2 = (long *)((long)plVar16 + 2);
          uVar20 = 0x10ae8363c;
          puVar3 = puVar3 + -0x140;
          plVar5 = plVar12 + 4;
          param_1 = plVar12;
        }
        lVar11 = plVar12[1];
        plVar16 = param_2;
        FUN_10ae84bf0();
        lVar9 = (long)param_2 + (lVar11 - lVar9);
        lVar11 = lVar9 - (plVar12[1] - *plVar12);
        _memcpy(lVar11);
        plVar5 = (long *)*plVar12;
        *plVar12 = lVar11;
        plVar12[1] = lVar9;
        plVar12[2] = (long)(param_2 + (long)plVar16 * 6);
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar5;
    }
    puVar10 = puVar7 + (long)plVar15 * 6;
    do {
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[2] = 0x7b2;
      *(undefined2 *)(puVar7 + 3) = 0x101;
      puVar7[4] = 0x7b2;
      *(undefined2 *)(puVar7 + 5) = 0x101;
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar10);
    param_1[1] = (long)puVar10;
  }
  return param_1;
}



/* Entry: 10ae832e0; end: 10ae83b0f;  */

undefined8 * FUN_10ae832e0(undefined ***param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined ***pppuVar5;
  char cVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *extraout_x8;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong uVar21;
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined ***pppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  int iStack_94;
  char cStack_90;
  long lStack_68;
  byte *pbVar20;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uVar7 = param_2;
  FUN_10ae7de24(param_2,&uStack_108);
  if ((int)uVar7 != 0) {
    FUN_10ae82930(param_1,&uStack_108);
    puVar18 = (undefined8 *)0x1;
    pppuVar8 = param_1;
    goto LAB_10ae834d0;
  }
  ppuStack_c8 = &PTR_FUN_110c8b828;
  pppuStack_b0 = &ppuStack_c8;
  (*(code *)PTR_FUN_113311b60)(&pppuStack_110,param_2,&ppuStack_c8);
  pppuVar8 = pppuStack_b0;
  if (pppuStack_b0 == &ppuStack_c8) {
    lVar12 = 0x20;
LAB_10ae83388:
    (**(code **)((long)*pppuStack_b0 + lVar12))();
  }
  else if (pppuStack_b0 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_10ae83388;
  }
  pppuVar5 = pppuStack_110;
  if (pppuStack_110 == (undefined ***)0x0) {
    puVar18 = (undefined8 *)0x0;
    goto LAB_10ae834d0;
  }
  pppuVar8 = pppuStack_110;
  (*(code *)(*pppuStack_110)[2])(pppuStack_110,&iStack_94,0x2c);
  if ((pppuVar8 == (undefined ***)0x2c) && (iStack_94 == 0x66695a54)) {
    pppuVar8 = &ppuStack_c8;
    FUN_10ae82f90(pppuVar8,&iStack_94);
    cVar6 = cStack_90;
    if ((int)pppuVar8 == 0) goto LAB_10ae834b4;
    if (cStack_90 != '\0') {
      pppuVar8 = pppuVar5;
      (*(code *)(*pppuVar5)[3])
                (pppuVar5,(long)ppuStack_c8 * 5 + uStack_c0 * 6 + uStack_b8 + (long)pppuStack_b0 * 8
                          + uStack_a8 + uStack_a0);
      if (((int)pppuVar8 == 0) &&
         (pppuVar8 = pppuVar5, (*(code *)(*pppuVar5)[2])(pppuVar5,&iStack_94,0x2c),
         pppuVar8 == (undefined ***)0x2c)) {
        puVar18 = (undefined8 *)0x0;
        if ((iStack_94 != 0x66695a54) || (cStack_90 == '\0')) goto LAB_10ae834b8;
        pppuVar8 = &ppuStack_c8;
        FUN_10ae82f90(pppuVar8,&iStack_94);
        if ((int)pppuVar8 != 0) {
          uVar21 = 8;
          goto LAB_10ae83480;
        }
      }
      goto LAB_10ae834b4;
    }
    uVar21 = 4;
LAB_10ae83480:
    ppuVar14 = ppuStack_c8;
    puVar18 = (undefined8 *)0x0;
    if ((uStack_c0 != 0) && (pppuStack_b0 == (undefined ***)0x0)) {
      if (((uStack_a8 != 0) && (uStack_a8 != uStack_c0)) ||
         ((uStack_a0 != 0 && (uStack_a0 != uStack_c0)))) goto LAB_10ae834b4;
      pppuVar8 = (undefined ***)
                 (uStack_a8 + uStack_c0 * 6 + uStack_a0 + (long)ppuStack_c8 * (uVar21 | 1) +
                 uStack_b8);
      func_0x0001092a38dc(&pbStack_e0,pppuVar8);
      pppuVar9 = pppuVar5;
      (*(code *)(*pppuVar5)[2])(pppuVar5,pbStack_e0,pppuVar8);
      pbVar19 = pbStack_e0;
      if (pppuVar9 == pppuVar8) {
        FUN_10ae82594(param_1 + 1,(long)ppuVar14 + 2);
        FUN_10ae830c0(param_1 + 1,ppuVar14);
        if (ppuVar14 == (undefined **)0x0) {
          bVar4 = 0;
        }
        else {
          ppuVar15 = (undefined **)0x0;
          ppuVar13 = param_1[1];
          do {
            lVar12 = 0;
            if (cVar6 == '\0') {
              puVar16 = (undefined *)0x0;
              do {
                puVar16 = (undefined *)((long)((int)puVar16 << 8) | (ulong)pbVar19[lVar12]);
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 != 4);
            }
            else {
              puVar16 = (undefined *)0x0;
              do {
                puVar16 = (undefined *)((ulong)pbVar19[lVar12] | (long)puVar16 << 8);
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 != 8);
            }
            ppuVar13[(long)ppuVar15 * 6] = puVar16;
            if ((ppuVar15 != (undefined **)0x0) &&
               ((long)puVar16 <= (long)ppuVar13[(long)ppuVar15 * 6 + -6])) goto LAB_10ae83a4c;
            pbVar19 = pbVar19 + uVar21;
            ppuVar15 = (undefined **)((long)ppuVar15 + 1);
          } while (ppuVar15 != ppuVar14);
          bVar4 = 0;
          ppuVar13 = ppuVar13 + 1;
          ppuVar15 = ppuVar14;
          pbVar20 = pbVar19;
          do {
            pbVar19 = pbVar20 + 1;
            bVar2 = *pbVar20;
            *(byte *)ppuVar13 = bVar2;
            if (uStack_c0 <= bVar2) goto LAB_10ae83a4c;
            bVar4 = bVar2 == 0 | bVar4;
            ppuVar15 = (undefined **)((long)ppuVar15 - 1);
            ppuVar13 = ppuVar13 + 6;
            pbVar20 = pbVar19;
          } while (ppuVar15 != (undefined **)0x0);
        }
        func_0x00010ae83230(param_1 + 4,uStack_c0 + 2);
        FUN_10ae82abc(param_1 + 4,uStack_c0);
        uVar21 = 0;
        ppuVar15 = param_1[4];
        do {
          lVar12 = 0;
          uVar11 = 0;
          do {
            uVar11 = (uint)pbVar19[lVar12] | uVar11 << 8;
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 != 4);
          ppuVar13 = ppuVar15 + uVar21 * 6;
          *(uint *)ppuVar13 = uVar11;
          if (uVar11 - 0x15180 < 0xfffd5d01) goto LAB_10ae83a4c;
          *(bool *)(ppuVar13 + 5) = pbVar19[4] != 0;
          bVar2 = pbVar19[5];
          *(byte *)((long)ppuVar13 + 0x29) = bVar2;
          if (uStack_b8 <= bVar2) goto LAB_10ae83a4c;
          pbVar19 = pbVar19 + 6;
          uVar21 = uVar21 + 1;
        } while (uVar21 != uStack_c0);
        *(undefined1 *)(param_1 + 7) = 0;
        if (!(bool)(ppuVar14 == (undefined **)0x0 | bVar4 ^ 1)) {
          if ((*(char *)(ppuVar15 + 5) == '\x01') &&
             (uVar21 = (ulong)*(byte *)(param_1[1] + 1), uVar21 != 0)) {
            ppuVar14 = ppuVar15 + uVar21 * 6 + 5;
            do {
              if (*(char *)ppuVar14 != '\x01') goto LAB_10ae83718;
              uVar21 = uVar21 - 1;
              ppuVar14 = ppuVar14 + -6;
            } while ((uVar21 & 0xff) != 0);
          }
          uVar21 = 0;
LAB_10ae83718:
          uVar1 = uVar21 & 0xff;
          while (uStack_c0 != uVar1) {
            if (*(char *)(ppuVar15 + (uVar21 & 0xff) * 6 + 5) != '\x01') {
              *(char *)(param_1 + 7) = (char)uVar21;
              break;
            }
            uVar11 = (int)uVar21 + 1;
            uVar21 = (ulong)uVar11;
            uVar1 = (ulong)(byte)uVar11;
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (param_1 + 8,uStack_b8 + 10);
        func_0x000107c2c4d8(param_1 + 8,pbVar19,uStack_b8);
        if (*(char *)((long)param_1 + 0x87) < '\0') {
          *(undefined1 *)param_1[0xe] = 0;
          param_1[0xf] = (undefined **)0x0;
        }
        else {
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)((long)param_1 + 0x87) = 0;
        }
        if (cStack_90 != '\0') {
          pppuVar8 = pppuVar5;
          (*(code *)(*pppuVar5)[2])(pppuVar5,&bStack_100,1);
          if (pppuVar8 != (undefined ***)0x1 || bStack_100 != 10) goto LAB_10ae83a4c;
          pppuVar8 = pppuVar5;
          (*(code *)(*pppuVar5)[2])(pppuVar5,&bStack_100,1);
          while( true ) {
            uVar11 = (uint)bStack_100;
            if (pppuVar8 != (undefined ***)0x1) {
              uVar11 = 0xffffffff;
            }
            if (uVar11 == 0xffffffff) goto LAB_10ae83a4c;
            if (uVar11 == 10) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1 + 0xe,(int)(char)uVar11);
            pppuVar8 = pppuVar5;
            (*(code *)(*pppuVar5)[2])(pppuVar5,&bStack_100,1);
          }
        }
        ppuVar14 = (undefined **)(long)*(char *)((long)param_1 + 0x6f);
        if ((long)ppuVar14 < 0) {
          ppuVar14 = param_1[0xc];
        }
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar5)[4])(&bStack_100,pppuVar5);
          if (*(char *)((long)param_1 + 0x6f) < '\0') {
            __ZdlPv(param_1[0xb]);
          }
          param_1[0xc] = ppuStack_f8;
          param_1[0xb] = (undefined **)CONCAT71(uStack_ff,bStack_100);
          param_1[0xd] = ppuStack_f0;
        }
        if ((undefined **)0x1 < ppuStack_c8) {
          ppuVar14 = param_1[1] + (long)ppuStack_c8 * 6 + -0xb;
          do {
            if ((uint)*(byte *)(ppuVar14 + 6) != (uint)*(byte *)ppuVar14) {
              ppuVar15 = param_1[4] + (ulong)(uint)*(byte *)(ppuVar14 + 6) * 6;
              ppuVar13 = param_1[4] + (ulong)(uint)*(byte *)ppuVar14 * 6;
              if (((*(int *)ppuVar15 != *(int *)ppuVar13) ||
                  (*(char *)(ppuVar15 + 5) != *(char *)(ppuVar13 + 5))) ||
                 (*(char *)((long)ppuVar15 + 0x29) != *(char *)((long)ppuVar13 + 0x29)))
              goto LAB_10ae838d8;
            }
            ppuStack_c8 = (undefined **)((long)ppuStack_c8 - 1);
            ppuVar14 = ppuVar14 + -6;
          } while ((undefined **)0x1 < ppuStack_c8);
          ppuStack_c8 = (undefined **)0x1;
        }
LAB_10ae838d8:
        FUN_10ae830c0(param_1 + 1);
        if ((param_1[1] == param_1[2]) || (-1 < (long)*param_1[1])) {
          pppuVar8 = param_1 + 1;
          FUN_10ae82c2c();
          *pppuVar8 = (undefined **)0xf800000000000000;
          *(undefined1 *)(pppuVar8 + 1) = *(undefined1 *)(param_1 + 7);
        }
        pppuVar8 = param_1;
        FUN_10ae82044();
        if ((int)pppuVar8 == 0) goto LAB_10ae83a4c;
        ppuVar14 = param_1[2];
        if ((long)ppuVar14[-6] < 0) {
          uVar3 = *(undefined1 *)(ppuVar14 + -5);
          pppuVar8 = param_1 + 1;
          FUN_10ae82c2c();
          *pppuVar8 = (undefined **)0x7fffffff;
          *(undefined1 *)(pppuVar8 + 1) = uVar3;
          ppuVar14 = param_1[2];
        }
        ppuVar15 = param_1[1];
        if (ppuVar14 != ppuVar15) {
          lVar17 = 0;
          lVar12 = 0;
          ppuVar14 = param_1[4] + (ulong)*(byte *)(param_1 + 7) * 6;
          do {
            puVar18 = (undefined8 *)((long)ppuVar15 + lVar17);
            func_0x00010ae82644(&bStack_100,param_1,*puVar18,ppuVar14);
            uVar7 = CONCAT71(uStack_ff,bStack_100);
            ppuVar14 = ppuStack_f8;
            FUN_10ae81334(uVar7,ppuStack_f8,0xffffffffffffffff);
            puVar18[4] = uVar7;
            puVar18[5] = (ulong)ppuVar14 & 0xffffffffff;
            ppuVar14 = param_1[4] + (ulong)*(byte *)(puVar18 + 1) * 6;
            func_0x00010ae82644(&bStack_100,param_1,*puVar18,ppuVar14);
            puVar18[3] = ppuStack_f8;
            puVar18[2] = CONCAT71(uStack_ff,bStack_100);
            if (lVar12 != 0) {
              lVar10 = (long)param_1[1] + lVar17 + -0x20;
              FUN_10ae809a8(lVar10,puVar18 + 2);
              if ((int)lVar10 == 0) goto LAB_10ae83a4c;
            }
            lVar12 = lVar12 + 1;
            ppuVar15 = param_1[1];
            lVar17 = lVar17 + 0x30;
          } while (lVar12 != ((long)param_1[2] - (long)ppuVar15 >> 4) * -0x5555555555555555);
        }
        ppuVar15 = param_1[5];
        for (ppuVar14 = param_1[4]; ppuVar14 != ppuVar15; ppuVar14 = ppuVar14 + 6) {
          func_0x00010ae82644(&bStack_100,param_1,0x7fffffffffffffff,ppuVar14);
          ppuVar14[2] = (undefined *)ppuStack_f8;
          ppuVar14[1] = (undefined *)CONCAT71(uStack_ff,bStack_100);
          func_0x00010ae82644(&bStack_100,param_1,0x8000000000000000,ppuVar14);
          ppuVar14[4] = (undefined *)ppuStack_f8;
          ppuVar14[3] = (undefined *)CONCAT71(uStack_ff,bStack_100);
        }
        FUN_10ae82eb8(param_1 + 1);
        puVar18 = (undefined8 *)0x1;
      }
      else {
LAB_10ae83a4c:
        puVar18 = (undefined8 *)0x0;
      }
      if (pbStack_e0 != (byte *)0x0) {
        pbStack_d8 = pbStack_e0;
        __ZdlPv();
      }
    }
  }
  else {
LAB_10ae834b4:
    puVar18 = (undefined8 *)0x0;
  }
LAB_10ae834b8:
  pppuVar8 = pppuStack_110;
  pppuStack_110 = (undefined ***)0x0;
  if (pppuVar8 != (undefined ***)0x0) {
    (*(code *)(*pppuVar8)[1])();
  }
LAB_10ae834d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar18;
  }
  ___stack_chk_fail();
  if (pbStack_e0 != (byte *)0x0) {
    pbStack_d8 = pbStack_e0;
    __ZdlPv();
  }
  pppuVar5 = pppuStack_110;
  pppuStack_110 = (undefined ***)0x0;
  if (pppuVar5 != (undefined ***)0x0) {
    (*(code *)(*pppuVar5)[1])();
  }
  __Unwind_Resume(pppuVar8);
  puVar18 = (undefined8 *)0xa8;
  __Znwm();
  *puVar18 = &PTR_FUN_110c8b7c0;
  puVar18[2] = 0;
  puVar18[1] = 0;
  puVar18[4] = 0;
  puVar18[3] = 0;
  puVar18[6] = 0;
  puVar18[5] = 0;
  puVar18[9] = 0;
  puVar18[8] = 0;
  puVar18[0xb] = 0;
  puVar18[10] = 0;
  puVar18[0xd] = 0;
  puVar18[0xc] = 0;
  puVar18[0xf] = 0;
  puVar18[0xe] = 0;
  puVar18[0x10] = 0;
  puVar18[0x13] = 0;
  puVar18[0x14] = 0;
  *extraout_x8 = puVar18;
  FUN_10ae82930();
  return puVar18;
}



/* Entry: 10ae83b10; end: 10ae83ba3;  */

void FUN_10ae83b10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *puVar1 = &PTR_FUN_110c8b7c0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *param_1 = puVar1;
  FUN_10ae82930();
  return;
}



/* Entry: 10ae83ba4; end: 10ae83c53;  */

void FUN_10ae83ba4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0xa8;
  __Znwm();
  *plVar1 = (long)&PTR_FUN_110c8b7c0;
  plVar1[2] = 0;
  plVar1[1] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[9] = 0;
  plVar1[8] = 0;
  plVar1[0xb] = 0;
  plVar1[10] = 0;
  plVar1[0xd] = 0;
  plVar1[0xc] = 0;
  plVar1[0xf] = 0;
  plVar1[0xe] = 0;
  plVar1[0x10] = 0;
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  *param_1 = plVar1;
  plVar2 = plVar1;
  FUN_10ae832e0();
  if (((ulong)plVar2 & 1) != 0) {
    return;
  }
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010ae83c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 10ae83c54; end: 10ae83ccf;  */

void FUN_10ae83c54(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)(param_4 + 1) * 0x30);
  lVar1 = param_4[2];
  uVar2 = param_4[3];
  FUN_10ae81334(lVar1,uVar2,param_3 - *param_4);
  *param_1 = lVar1;
  param_1[1] = uVar2 & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = *puVar4;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(puVar4 + 10);
  puVar3 = (undefined8 *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x57) < '\0') {
    puVar3 = (undefined8 *)*puVar3;
  }
  param_1[3] = (long)puVar3 + (ulong)*(byte *)((long)puVar4 + 0x29);
  return;
}



/* Entry: 10ae83cd0; end: 10ae83dbb;  */

void FUN_10ae83cd0(long param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *extraout_x8;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_78;
  long alStack_40 [4];
  
  alStack_40[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x18))(param_1);
  if (param_4 < 0x2b8d7bd2) {
    lVar2 = 0;
    alStack_40[0] = param_1 + 8;
    alStack_40[1] = param_1 + 0x10;
    alStack_40[2] = param_1 + 0x18;
    do {
      lVar9 = **(long **)((long)alStack_40 + lVar2);
      lVar1 = 0x7fffffffffffffff;
      if (lVar9 <= (long)(param_4 * 0x2f0605980 ^ 0x7fffffffffffffffU)) {
        lVar1 = lVar9 + param_4 * 0x2f0605980;
      }
      **(long **)((long)alStack_40 + lVar2) = lVar1;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x18);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0x7fffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0x7ff8000000000000;
    *(undefined8 *)(param_1 + 8) = 0x7ff8000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_40[3]) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar2 = SUB168(SEXT816(lVar2) * SEXT816(-0x431bde82d7b634db),8);
  lVar2 = ((lVar2 >> 0x12) - (lVar2 >> 0x3f)) + *param_3;
  plVar6 = (long *)param_2[1];
  if (lVar2 < *plVar6) {
    puVar4 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(param_2 + 7) * 0x30);
    lVar1 = 0x7b2;
    uVar3 = 1;
    func_0x00010ae80b44(0x7b2,1,1,0,lVar2 / 0x3c,lVar2 % 0x3c);
    uVar3 = uVar3 & 0xffffffffff;
    FUN_10ae81334();
    *extraout_x8 = lVar1;
    extraout_x8[1] = uVar3 & 0xffffffffff;
    *(undefined4 *)(extraout_x8 + 2) = *puVar4;
    *(undefined1 *)((long)extraout_x8 + 0x14) = *(undefined1 *)(puVar4 + 10);
    plVar6 = param_2 + 8;
    if (*(char *)((long)param_2 + 0x57) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    extraout_x8[3] = (long)plVar6 + (ulong)*(byte *)((long)puVar4 + 0x29);
    return;
  }
  lVar1 = param_2[2] - (long)plVar6;
  plVar5 = (long *)((long)plVar6 + lVar1 + -0x30);
  if (lVar2 < *plVar5) {
    uVar3 = (lVar1 >> 4) * -0x5555555555555555;
    uVar7 = param_2[0x13];
    if ((uVar7 != 0) && (uVar7 < uVar3)) {
      plVar5 = plVar6 + uVar7 * 6 + -6;
      if ((*plVar5 <= lVar2) && (lVar2 < plVar6[uVar7 * 6])) goto FUN_10ae83c54;
    }
    plVar5 = plVar6;
    if ((long *)param_2[2] != plVar6) {
      do {
        uVar8 = uVar3 >> 1;
        uVar7 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
        uVar3 = uVar8;
        if (plVar5[uVar8 * 6] <= lVar2) {
          uVar3 = uVar7;
          plVar5 = plVar5 + uVar8 * 6 + 6;
        }
      } while (uVar3 != 0);
    }
    param_2[0x13] = ((long)plVar5 - (long)plVar6 >> 4) * -0x5555555555555555;
    plVar5 = plVar5 + -6;
  }
  else if ((char)param_2[0x11] == '\x01') {
    lVar2 = (lVar2 - *plVar5) / 0x2f0605980 + 1;
    lStack_78 = *param_3 + lVar2 * -0x2f0605980;
    (**(code **)(*param_2 + 0x10))(extraout_x8,param_2,&lStack_78);
    lVar2 = *extraout_x8 + lVar2 * 400;
    uVar3 = (ulong)(char)extraout_x8[1];
    func_0x00010ae80b44(lVar2,uVar3,(long)*(char *)((long)extraout_x8 + 9),
                        (long)*(char *)((long)extraout_x8 + 10),
                        (long)*(char *)((long)extraout_x8 + 0xb),
                        (long)*(char *)((long)extraout_x8 + 0xc));
    *extraout_x8 = lVar2;
    extraout_x8[1] = uVar3 & 0xffffffffff;
    return;
  }
FUN_10ae83c54:
  puVar4 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(plVar5 + 1) * 0x30);
  lVar1 = plVar5[2];
  uVar3 = plVar5[3];
  FUN_10ae81334(lVar1,uVar3,lVar2 - *plVar5);
  *extraout_x8 = lVar1;
  extraout_x8[1] = uVar3 & 0xffffffffff;
  *(undefined4 *)(extraout_x8 + 2) = *puVar4;
  *(undefined1 *)((long)extraout_x8 + 0x14) = *(undefined1 *)(puVar4 + 10);
  plVar6 = param_2 + 8;
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    plVar6 = (long *)*plVar6;
  }
  extraout_x8[3] = (long)plVar6 + (ulong)*(byte *)((long)puVar4 + 0x29);
  return;
}



/* Entry: 10ae83dbc; end: 10ae83fb3;  */

void FUN_10ae83dbc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_38;
  
  lVar2 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar2 = SUB168(SEXT816(lVar2) * SEXT816(-0x431bde82d7b634db),8);
  lVar2 = ((lVar2 >> 0x12) - (lVar2 >> 0x3f)) + *param_3;
  plVar6 = (long *)param_2[1];
  if (lVar2 < *plVar6) {
    puVar4 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(param_2 + 7) * 0x30);
    lVar1 = 0x7b2;
    uVar3 = 1;
    func_0x00010ae80b44(0x7b2,1,1,0,lVar2 / 0x3c,lVar2 % 0x3c);
    uVar3 = uVar3 & 0xffffffffff;
    FUN_10ae81334();
    *param_1 = lVar1;
    param_1[1] = uVar3 & 0xffffffffff;
    *(undefined4 *)(param_1 + 2) = *puVar4;
    *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(puVar4 + 10);
    plVar6 = param_2 + 8;
    if (*(char *)((long)param_2 + 0x57) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    param_1[3] = (long)plVar6 + (ulong)*(byte *)((long)puVar4 + 0x29);
    return;
  }
  lVar1 = param_2[2] - (long)plVar6;
  plVar5 = (long *)((long)plVar6 + lVar1 + -0x30);
  if (lVar2 < *plVar5) {
    uVar3 = (lVar1 >> 4) * -0x5555555555555555;
    uVar7 = param_2[0x13];
    if ((uVar7 != 0) && (uVar7 < uVar3)) {
      plVar5 = plVar6 + uVar7 * 6 + -6;
      if ((*plVar5 <= lVar2) && (lVar2 < plVar6[uVar7 * 6])) goto LAB_10ae83f98;
    }
    plVar5 = plVar6;
    if ((long *)param_2[2] != plVar6) {
      do {
        uVar8 = uVar3 >> 1;
        uVar7 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
        uVar3 = uVar8;
        if (plVar5[uVar8 * 6] <= lVar2) {
          uVar3 = uVar7;
          plVar5 = plVar5 + uVar8 * 6 + 6;
        }
      } while (uVar3 != 0);
    }
    param_2[0x13] = ((long)plVar5 - (long)plVar6 >> 4) * -0x5555555555555555;
    plVar5 = plVar5 + -6;
  }
  else if ((char)param_2[0x11] == '\x01') {
    lVar2 = (lVar2 - *plVar5) / 0x2f0605980 + 1;
    lStack_38 = *param_3 + lVar2 * -0x2f0605980;
    (**(code **)(*param_2 + 0x10))(param_1,param_2,&lStack_38);
    lVar2 = *param_1 + lVar2 * 400;
    uVar3 = (ulong)(char)param_1[1];
    func_0x00010ae80b44(lVar2,uVar3,(long)*(char *)((long)param_1 + 9),
                        (long)*(char *)((long)param_1 + 10),(long)*(char *)((long)param_1 + 0xb),
                        (long)*(char *)((long)param_1 + 0xc));
    *param_1 = lVar2;
    param_1[1] = uVar3 & 0xffffffffff;
    return;
  }
LAB_10ae83f98:
  puVar4 = (undefined4 *)(param_2[4] + (ulong)*(byte *)(plVar5 + 1) * 0x30);
  lVar1 = plVar5[2];
  uVar3 = plVar5[3];
  FUN_10ae81334(lVar1,uVar3,lVar2 - *plVar5);
  *param_1 = lVar1;
  param_1[1] = uVar3 & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = *puVar4;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(puVar4 + 10);
  plVar6 = param_2 + 8;
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    plVar6 = (long *)*plVar6;
  }
  param_1[3] = (long)plVar6 + (ulong)*(byte *)((long)puVar4 + 0x29);
  return;
}



/* Entry: 10ae83fb4; end: 10ae84613;  */

void FUN_10ae83fb4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  plVar6 = *(long **)(param_2 + 8);
  plVar5 = *(long **)(param_2 + 0x10);
  plVar2 = param_3;
  FUN_10ae809a8(param_3,plVar6 + 2);
  if (((ulong)plVar2 & 1) == 0) {
    lVar13 = (long)plVar5 - (long)plVar6;
    plVar2 = param_3;
    FUN_10ae809a8(param_3,*(long *)(param_2 + 8) + lVar13 + -0x20);
    if ((int)plVar2 == 0) {
      plVar2 = (long *)((long)plVar6 + lVar13);
    }
    else {
      uVar14 = (lVar13 >> 4) * -0x5555555555555555;
      uVar15 = *(ulong *)(param_2 + 0xa0);
      if ((((uVar15 == 0) || (uVar14 <= uVar15)) ||
          (plVar2 = param_3, FUN_10ae809a8(param_3,*(long *)(param_2 + 8) + uVar15 * 0x30 + -0x20),
          ((ulong)plVar2 & 1) != 0)) ||
         (plVar2 = param_3, FUN_10ae809a8(param_3,*(long *)(param_2 + 8) + uVar15 * 0x30 + 0x10),
         ((ulong)plVar2 & 1) == 0)) {
        lStack_90 = 0;
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        lStack_78 = param_3[1];
        lStack_80 = *param_3;
        uStack_70 = 0x7b2;
        uStack_68 = 0x101;
        uStack_64 = 0;
        plVar2 = plVar6;
        if (plVar5 != plVar6) {
          do {
            uVar8 = uVar14 >> 1;
            plVar3 = &lStack_80;
            FUN_10ae809a8(plVar3,plVar2 + uVar8 * 6 + 2);
            uVar15 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
            uVar14 = uVar8;
            if ((int)plVar3 == 0) {
              uVar14 = uVar15;
              plVar2 = plVar2 + uVar8 * 6 + 6;
            }
          } while (uVar14 != 0);
        }
        *(long *)(param_2 + 0xa0) = ((long)plVar2 - (long)plVar6 >> 4) * -0x5555555555555555;
      }
      else {
        plVar2 = plVar6 + uVar15 * 6;
      }
    }
    if (plVar2 == plVar6) goto LAB_10ae84200;
    if (plVar2 == plVar5) {
      plVar6 = plVar2 + -2;
      FUN_10ae809a8(plVar6,param_3);
      if ((int)plVar6 != 0) {
        if (*(char *)(param_2 + 0x88) == '\x01') {
          lVar13 = *param_3;
          if ((long)*(ulong *)(param_2 + 0x90) < lVar13) {
            lVar10 = (long)(lVar13 + ~*(ulong *)(param_2 + 0x90)) / 400 + 1;
            lVar13 = lVar13 + lVar10 * -400;
            uVar14 = (ulong)(char)param_3[1];
            func_0x00010ae80b44(lVar13,uVar14,(long)*(char *)((long)param_3 + 9),
                                (long)*(char *)((long)param_3 + 10),
                                (long)*(char *)((long)param_3 + 0xb),
                                (long)*(char *)((long)param_3 + 0xc));
            uStack_88 = uVar14 & 0xffffffffff;
            lStack_90 = lVar13;
            FUN_10ae83cd0(param_1,param_2,&lStack_90,lVar10);
            return;
          }
        }
        lVar13 = *(long *)(param_2 + 0x20) + (ulong)*(byte *)(plVar2 + -5) * 0x30 + 8;
        FUN_10ae809a8(lVar13,param_3);
        if ((int)lVar13 != 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 6) = 0x7fffffffffffffff;
          dVar16 = -NAN;
          goto LAB_10ae84328;
        }
LAB_10ae84588:
        lVar4 = plVar2[-6];
        lVar13 = *param_3;
        lVar10 = param_3[1];
        lVar1 = plVar2[-3];
        func_0x00010ae84c8c(lVar13,lVar10,plVar2[-4],lVar1);
        iVar11 = ((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18);
        lVar10 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        lVar13 = lVar4 + lVar13 * 0x3c + lVar10 / 1000000;
        goto LAB_10ae845e4;
      }
LAB_10ae8447c:
      *param_1 = 2;
      lVar9 = plVar2[-6];
      lVar13 = plVar2[-2];
      lVar10 = plVar2[-1];
      lVar1 = param_3[1];
      func_0x00010ae84c8c(lVar13,lVar10,*param_3,lVar1);
      lVar4 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      *(long *)(param_1 + 2) =
           lVar4 / 1000000 + lVar9 +
           ~(lVar13 * 0x3c +
            (long)(((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18)));
      lVar10 = plVar2[-6];
      lVar13 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      *(long *)(param_1 + 4) = lVar13 / 1000000 + lVar10;
      lVar4 = plVar2[-6];
      lVar13 = *param_3;
      lVar10 = param_3[1];
      lVar1 = plVar2[-3];
      func_0x00010ae84c8c(lVar13,lVar10,plVar2[-4],lVar1);
      iVar11 = ((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18);
      lVar10 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lVar10 = lVar10 / 1000000;
      lVar4 = lVar4 + lVar13 * 0x3c;
      goto LAB_10ae842e8;
    }
    plVar6 = plVar2 + 4;
    FUN_10ae809a8(plVar6,param_3);
    if ((int)plVar6 == 0) {
      plVar6 = plVar2 + -2;
      FUN_10ae809a8(plVar6,param_3);
      if (((ulong)plVar6 & 1) != 0) goto LAB_10ae84588;
      goto LAB_10ae8447c;
    }
    *param_1 = 1;
    lVar9 = *plVar2;
    lVar13 = *param_3;
    lVar10 = param_3[1];
    lVar1 = plVar2[5];
    func_0x00010ae84c8c(lVar13,lVar10,plVar2[4],lVar1);
    lVar4 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)(param_1 + 2) =
         lVar9 + lVar13 * 0x3c + lVar4 / 1000000 +
         (long)(((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18)) + -1;
    lVar10 = *plVar2;
    lVar13 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)(param_1 + 4) = lVar13 / 1000000 + lVar10;
    lVar4 = *plVar2;
    lVar13 = plVar2[2];
    lVar10 = plVar2[3];
    lVar1 = param_3[1];
    func_0x00010ae84c8c(lVar13,lVar10,*param_3,lVar1);
    iVar11 = ((int)((ulong)lVar1 >> 8) >> 0x18) - ((int)((ulong)lVar10 >> 8) >> 0x18);
    lVar10 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar10 = SUB168(SEXT816(lVar10) * SEXT816(0x431bde82d7b634db),8);
  }
  else {
LAB_10ae84200:
    plVar5 = plVar6 + 4;
    FUN_10ae809a8(plVar5,param_3);
    if (((ulong)plVar5 & 1) == 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)(param_2 + 0x38) * 0x30);
      plVar6 = param_3;
      FUN_10ae809a8(param_3,piVar12 + 6);
      if ((int)plVar6 != 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 6) = 0x8000000000000000;
        dVar16 = 0.0;
LAB_10ae84328:
        *(double *)(param_1 + 4) = -dVar16;
        *(double *)(param_1 + 2) = -dVar16;
        return;
      }
      lVar13 = *param_3;
      lVar10 = param_3[1];
      iVar11 = *piVar12;
      uVar7 = 0x7b2;
      uVar14 = 1;
      func_0x00010ae80b44(0x7b2,1,1,0,(long)(iVar11 / 0x3c),(long)(iVar11 % 0x3c));
      func_0x00010ae84c8c(lVar13,lVar10,uVar7,uVar14 & 0xffffffffff);
      iVar11 = ((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)(uVar14 >> 8) >> 0x18);
      lVar10 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lVar13 = lVar10 / 1000000 + lVar13 * 0x3c;
LAB_10ae845e4:
      *param_1 = 0;
      lVar13 = lVar13 + iVar11;
      *(long *)(param_1 + 4) = lVar13;
      *(long *)(param_1 + 6) = lVar13;
      *(long *)(param_1 + 2) = lVar13;
      return;
    }
    *param_1 = 1;
    lVar9 = *plVar6;
    lVar13 = *param_3;
    lVar10 = param_3[1];
    lVar1 = plVar6[5];
    func_0x00010ae84c8c(lVar13,lVar10,plVar6[4],lVar1);
    lVar4 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)(param_1 + 2) =
         lVar9 + lVar13 * 0x3c + lVar4 / 1000000 +
         (long)(((int)((ulong)lVar10 >> 8) >> 0x18) - ((int)((ulong)lVar1 >> 8) >> 0x18)) + -1;
    lVar10 = *plVar6;
    lVar13 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)(param_1 + 4) = lVar13 / 1000000 + lVar10;
    lVar4 = *plVar6;
    lVar13 = plVar6[2];
    lVar10 = plVar6[3];
    lVar1 = param_3[1];
    func_0x00010ae84c8c(lVar13,lVar10,*param_3,lVar1);
    iVar11 = ((int)((ulong)lVar1 >> 8) >> 0x18) - ((int)((ulong)lVar10 >> 8) >> 0x18);
    lVar10 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar10 = SUB168(SEXT816(lVar10) * SEXT816(0x431bde82d7b634db),8);
  }
  lVar10 = (lVar10 >> 0x12) - (lVar10 >> 0x3f);
  lVar4 = lVar4 + lVar13 * -0x3c;
LAB_10ae842e8:
  *(long *)(param_1 + 6) = lVar4 + lVar10 + (long)iVar11;
  return;
}



/* Entry: 10ae84614; end: 10ae8463b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10ae84614(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x6f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    param_1[1] = *(undefined8 *)(param_2 + 0x60);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x68);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x58);
  uVar1 = *(ulong *)(param_2 + 0x60);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10ae8463c; end: 10ae847ab;  */

void FUN_10ae8463c(undefined8 param_1)

{
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  func_0x00010926db08(&ppuStack_140);
  func_0x0001092b4db8(&ppuStack_140,&UNK_10f6d296d,7);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  func_0x0001092b4db8(&ppuStack_140,&UNK_10f6d2975,8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  func_0x0001092b4db8(&ppuStack_140,&UNK_10f6d297e,7);
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x00010926dc5c(param_1,&ppuStack_138,&uStack_31);
  appuStack_d0[0] = &PTR_DAT_11088d708;
  ppuStack_140 = &PTR_DAT_11088d6e0;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_140,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10ae847ac; end: 10ae84ae3;  */

undefined8 FUN_10ae847ac(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar3 != plVar4) {
    lVar5 = 0x30;
    if (-0x800000000000000 < *plVar3) {
      lVar5 = 0;
    }
    plVar3 = (long *)((long)plVar3 + lVar5);
    lVar5 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    plVar10 = plVar3;
    if ((long)plVar4 - (long)plVar3 != 0) {
      lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x431bde82d7b634db),8);
      uVar7 = ((long)plVar4 - (long)plVar3 >> 4) * -0x5555555555555555;
      do {
        uVar9 = uVar7 >> 1;
        uVar1 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
        uVar7 = uVar9;
        if (plVar10[uVar9 * 6] <= ((lVar5 >> 0x12) - (lVar5 >> 0x3f)) + *param_2) {
          uVar7 = uVar1;
          plVar10 = plVar10 + uVar9 * 6 + 6;
        }
      } while (uVar7 != 0);
    }
    if (plVar10 != plVar4) {
      do {
        pbVar2 = (byte *)(param_1 + 0x38);
        if (plVar10 != plVar3) {
          pbVar2 = (byte *)(plVar10 + -5);
        }
        if ((uint)*pbVar2 != (uint)*(byte *)(plVar10 + 1)) {
          piVar6 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)*pbVar2 * 0x30);
          piVar8 = (int *)(*(long *)(param_1 + 0x20) + (ulong)(uint)*(byte *)(plVar10 + 1) * 0x30);
          if (((*piVar6 != *piVar8) || ((char)piVar6[10] != (char)piVar8[10])) ||
             (*(char *)((long)piVar6 + 0x29) != *(char *)((long)piVar8 + 0x29))) break;
        }
        plVar10 = plVar10 + 6;
      } while (plVar10 != plVar4);
    }
    if (plVar10 != plVar4) {
      lVar5 = plVar10[4];
      uVar7 = plVar10[5];
      FUN_10ae81334(lVar5,uVar7,1);
      *param_3 = lVar5;
      param_3[1] = uVar7 & 0xffffffffff;
      lVar5 = plVar10[2];
      param_3[3] = plVar10[3];
      param_3[2] = lVar5;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10ae84ae4; end: 10ae84bdb;  */

undefined8 * FUN_10ae84ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8b7c0;
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ae84bdc; end: 10ae84bef;  */

undefined1  [16] FUN_10ae84bdc(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x555555555555556) {
    lVar2 = (long)puVar1 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x555555555555556) {
    lVar2 = (long)puVar1 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = (ulong)(uint)(int)(char)param_2;
  FUN_10ae81174();
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = ((long)puVar1 * 0x18 + (long)(((param_2 << 8) >> 0x18) - ((param_4 << 8) >> 0x18)))
                 * 0x3c + (long)((param_2 >> 0x18) - (param_4 >> 0x18));
  return auVar6;
}



/* Entry: 10ae84bf0; end: 10ae84c33;  */

undefined1  [16] FUN_10ae84bf0(ulong param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 0x555555555555556) {
    lVar1 = param_1 * 0x30;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar2 < (undefined *)0x555555555555556) {
    lVar1 = (long)puVar2 * 0x30;
    __Znwm(lVar1);
    auVar5._8_8_ = puVar2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = (ulong)(uint)(int)(char)param_2;
  FUN_10ae81174();
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = ((long)puVar2 * 0x18 + (long)(((param_2 << 8) >> 0x18) - ((param_4 << 8) >> 0x18)))
                 * 0x3c + (long)((param_2 >> 0x18) - (param_4 >> 0x18));
  return auVar6;
}



/* Entry: 10ae84c34; end: 10ae84c47;  */

undefined1  [16] FUN_10ae84c34(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x555555555555556) {
    lVar2 = (long)puVar1 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  uVar3 = (ulong)(uint)(int)(char)param_2;
  FUN_10ae81174();
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = ((long)puVar1 * 0x18 + (long)(((param_2 << 8) >> 0x18) - ((param_4 << 8) >> 0x18)))
                 * 0x3c + (long)((param_2 >> 0x18) - (param_4 >> 0x18));
  return auVar5;
}



/* Entry: 10ae84c48; end: 10ae84cef;  */

undefined1  [16] FUN_10ae84c48(ulong param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 0x555555555555556) {
    lVar1 = param_1 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = (ulong)(uint)(int)(char)param_2;
  FUN_10ae81174();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = (param_1 * 0x18 + (long)(((param_2 << 8) >> 0x18) - ((param_4 << 8) >> 0x18))) *
                 0x3c + (long)((param_2 >> 0x18) - (param_4 >> 0x18));
  return auVar4;
}



/* Entry: 10ae84cf0; end: 10ae84cf7;  */

void FUN_10ae84cf0(void)

{
  return;
}



/* Entry: 10ae84cf8; end: 10ae84d1b;  */

void FUN_10ae84cf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c8b828;
  return;
}



/* Entry: 10ae84d1c; end: 10ae84d33;  */

void FUN_10ae84d1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c8b828;
  return;
}



/* Entry: 10ae84d34; end: 10ae8559b;  */

/* WARNING: Removing unreachable block (ram,0x00010ae8528c) */
/* WARNING: Removing unreachable block (ram,0x00010ae85450) */
/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10ae84d34(undefined ********param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined ********ppppppppuVar6;
  undefined1 *puVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  uint uVar20;
  long lVar21;
  undefined ********ppppppppuVar22;
  undefined *******pppppppuVar23;
  undefined ********appppppppuStack_340 [2];
  char cStack_329;
  undefined *******pppppppuStack_328;
  undefined7 uStack_320;
  undefined1 uStack_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined ********ppppppppuStack_310;
  undefined *******pppppppuStack_308;
  undefined7 uStack_300;
  byte bStack_2f9;
  undefined1 uStack_2f1;
  undefined ********ppppppppuStack_2f0;
  undefined8 uStack_2e8;
  long alStack_2e0 [3];
  byte abStack_2c8 [4];
  byte abStack_2c4 [92];
  long lStack_268;
  undefined **appuStack_148 [19];
  undefined ********appppppppuStack_b0 [4];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *******pppppppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_3;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
            (param_3,0,5,&UNK_10f51ac55);
  lVar21 = 5;
  if ((int)plVar14 != 0) {
    lVar21 = 0;
  }
  ppppppppuStack_2f0 = (undefined ********)0x0;
  uStack_2e8 = 0;
  alStack_2e0[0] = 0;
  if ((long)*(char *)((long)param_3 + 0x17) < 0) {
    if (lVar21 != param_3[1]) {
      plVar14 = (long *)*param_3;
      goto LAB_10ae84dc0;
    }
LAB_10ae84dcc:
    pcVar5 = "TZDIR";
    _getenv();
    pcVar19 = "/usr/share/zoneinfo";
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      pcVar19 = pcVar5;
    }
    pcVar5 = pcVar19;
    _strlen(pcVar19);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppppppuStack_2f0,pcVar19,pcVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&ppppppppuStack_2f0,0x2f);
  }
  else {
    plVar14 = param_3;
    if (lVar21 == *(char *)((long)param_3 + 0x17)) goto LAB_10ae84dcc;
LAB_10ae84dc0:
    if (*(char *)((long)plVar14 + lVar21) != '/') goto LAB_10ae84dcc;
  }
  ppppppppuVar8 = (undefined ********)&ppppppppuStack_2f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
            (&ppppppppuStack_2f0,param_3,lVar21,0xffffffffffffffff);
  ppppppppuVar9 = ppppppppuStack_2f0;
  if (-1 < alStack_2e0[0]) {
    ppppppppuVar9 = ppppppppuVar8;
  }
  ppuVar11 = (undefined **)&UNK_10f432965;
  _fopen();
  if (ppppppppuVar9 == (undefined ********)0x0) {
    ppppppppuVar6 = (undefined ********)0x0;
  }
  else {
    ppppppppuVar6 = (undefined ********)0x20;
    __Znwm();
    *ppppppppuVar6 = (undefined *******)&PTR_FUN_110c8b8a8;
    ppppppppuVar6[1] = (undefined *******)ppppppppuVar9;
    ppppppppuVar6[2] = (undefined *******)PTR__fclose_11034c270;
    ppppppppuVar6[3] = (undefined *******)0xffffffffffffffff;
  }
  *param_1 = (undefined *******)ppppppppuVar6;
  ppppppppuVar10 = ppppppppuVar6;
  if (alStack_2e0[0] < 0) {
    ppppppppuVar10 = ppppppppuStack_2f0;
    __ZdlPv();
  }
  if (ppppppppuVar6 != (undefined ********)0x0) goto LAB_10ae85468;
  *param_1 = (undefined *******)0x0;
  plVar14 = param_3;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
            (param_3,0,5,&UNK_10f51ac55);
  lVar21 = 0;
  lVar2 = 5;
  if ((int)plVar14 != 0) {
    lVar2 = 0;
  }
  appppppppuStack_b0[0] = (undefined ********)&UNK_10f6d29a0;
  appppppppuStack_b0[1] = (undefined ********)&UNK_10f6d29c3;
  do {
    ppppppppuVar6 = *(undefined *********)((long)appppppppuStack_b0 + lVar21);
    _fopen(ppppppppuVar6,&UNK_10f432965);
    if (ppppppppuVar6 != (undefined ********)0x0) {
      puVar7 = auStack_90;
      _fread(puVar7,1,0x18,ppppppppuVar6);
      if (puVar7 == (undefined1 *)0x18) {
        if (auStack_90._0_4_ == 0x61647a74 && auStack_90._4_2_ == 0x6174) {
          cVar3 = uStack_88._3_1_;
          lVar15 = 0xc;
          uVar13 = 0;
          do {
            uVar12 = uVar13;
            uVar13 = (uint)(byte)auStack_90[lVar15] | uVar12 << 8;
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 != 0x10);
          uVar20 = 0;
          lVar15 = 0x10;
          do {
            uVar20 = (uint)(byte)auStack_90[lVar15] | uVar20 << 8;
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 != 0x14);
          if ((((-1 < (int)(uVar12 << 8)) && (uVar12 = uVar20 - uVar13, (int)uVar13 <= (int)uVar20))
              && (ppppppppuVar8 = ppppppppuVar6, _fseek(ppppppppuVar6,uVar13,0),
                 (int)ppppppppuVar8 == 0)) &&
             (uVar17 = (ulong)(long)(int)uVar12 / 0x34,
             0x33 < uVar12 && uVar17 * 0x34 - (long)(int)uVar12 == 0)) {
            uVar18 = 0;
            do {
              ppppppppuVar8 = (undefined ********)&ppppppppuStack_2f0;
              _fread(ppppppppuVar8,1,0x34,ppppppppuVar6);
              if (ppppppppuVar8 != (undefined ********)0x34) break;
              uVar13 = 0;
              lVar15 = 0x28;
              do {
                uVar13 = (uint)*(byte *)((long)&ppppppppuStack_2f0 + lVar15) | uVar13 << 8;
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 != 0x2c);
              pppppppuVar23 = (undefined *******)0x0;
              lVar15 = 0x2c;
              do {
                iVar16 = (int)pppppppuVar23;
                pppppppuVar23 =
                     (undefined *******)
                     (ulong)((uint)*(byte *)((long)&ppppppppuStack_2f0 + lVar15) | iVar16 << 8);
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 != 0x30);
              if (((int)(uVar13 + uVar20) < 0) || (iVar16 << 8 < 0)) break;
              abStack_2c8[0] = 0;
              plVar14 = (long *)*param_3;
              if (-1 < *(char *)((long)param_3 + 0x17)) {
                plVar14 = param_3;
              }
              lVar15 = (long)plVar14 + lVar2;
              _strcmp(lVar15,&ppppppppuStack_2f0);
              if ((int)lVar15 == 0) {
                ppppppppuVar8 = ppppppppuVar6;
                _fseek(ppppppppuVar6,uVar13 + uVar20,0);
                if ((int)ppppppppuVar8 == 0) {
                  ppppppppuVar9 = (undefined ********)0x38;
                  __Znwm();
                  ppuVar11 = (undefined **)(auStack_90 + 6);
                  if (cVar3 != '\0') {
                    ppuVar11 = (undefined **)"";
                  }
                  ppppppppuVar10 = (undefined ********)&ppppppppuStack_310;
                  func_0x000107c31940();
                  ppppppppuVar9[2] = (undefined *******)PTR__fclose_11034c270;
                  ppppppppuVar9[3] = pppppppuVar23;
                  *ppppppppuVar9 = (undefined *******)&PTR_FUN_110c8b8f8;
                  ppppppppuVar9[1] = (undefined *******)ppppppppuVar6;
                  ppppppppuVar9[5] = pppppppuStack_308;
                  ppppppppuVar9[4] = (undefined *******)ppppppppuStack_310;
                  ppppppppuVar9[6] = (undefined *******)CONCAT17(bStack_2f9,uStack_300);
                  *param_1 = (undefined *******)ppppppppuVar9;
                  ppppppppuVar8 = param_1;
                  goto LAB_10ae85468;
                }
                break;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar17);
          }
        }
      }
      _fclose(ppppppppuVar6);
    }
    lVar21 = lVar21 + 8;
  } while (lVar21 != 0x10);
  *param_1 = (undefined *******)0x0;
  plVar14 = param_3;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
            (param_3,0,5,&UNK_10f51ac55);
  ppppppppuVar9 = (undefined ********)0x5;
  if ((int)plVar14 != 0) {
    ppppppppuVar9 = (undefined ********)0x0;
  }
  uStack_88 = &DAT_10f6d29fa;
  auStack_90 = (undefined1  [8])&DAT_10f6d29e5;
  puStack_80 = &DAT_10f6d2a0c;
  appppppppuStack_b0[3] = (undefined ********)0x10ef12930;
  if ((long)*(char *)((long)param_3 + 0x17) < 0) {
    if (ppppppppuVar9 == (undefined ********)param_3[1]) goto LAB_10ae851a0;
    plVar14 = (long *)*param_3;
LAB_10ae851b0:
    bVar4 = *(char *)((long)plVar14 + (long)ppppppppuVar9) != '/';
    ppppppppuVar8 = (undefined ********)(appppppppuStack_b0 + 3);
    if (bVar4) {
      ppppppppuVar8 = (undefined ********)auStack_90;
    }
    lVar21 = 8;
    if (bVar4) {
      lVar21 = 0x18;
    }
    ppppppppuVar22 = (undefined ********)((long)ppppppppuVar8 + lVar21);
  }
  else {
    plVar14 = param_3;
    if (ppppppppuVar9 != (undefined ********)(long)*(char *)((long)param_3 + 0x17))
    goto LAB_10ae851b0;
LAB_10ae851a0:
    ppppppppuVar8 = (undefined ********)auStack_90;
    ppppppppuVar22 = &pppppppuStack_78;
  }
  do {
    func_0x000107c31940(&ppppppppuStack_310,*ppppppppuVar8);
    ppppppppuVar6 = ppppppppuStack_310;
    ppppppppuVar10 = (undefined ********)pppppppuStack_308;
    if (((char)bStack_2f9 < '\0') &&
       (func_0x000107c3192c(appppppppuStack_b0,ppppppppuStack_310,pppppppuStack_308),
       ppppppppuVar6 = appppppppuStack_b0[0], ppppppppuVar10 = appppppppuStack_b0[1],
       (char)bStack_2f9 < '\0')) {
      if (pppppppuStack_308 != (undefined *******)0x0) goto LAB_10ae85240;
    }
    else {
      appppppppuStack_b0[1] = ppppppppuVar10;
      appppppppuStack_b0[0] = ppppppppuVar6;
      if (bStack_2f9 != 0) {
LAB_10ae85240:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (appppppppuStack_b0,&UNK_10f6d2a1a,0xf);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
              (appppppppuStack_b0,param_3,ppppppppuVar9,0xffffffffffffffff);
    ppppppppuVar6 = (undefined ********)appppppppuStack_b0;
    ppuVar11 = (undefined **)&UNK_10f432965;
    _fopen();
    if (ppppppppuVar6 != (undefined ********)0x0) {
      pppppppuStack_328 = (undefined *******)0x0;
      uStack_320 = 0;
      uStack_319 = 0;
      uStack_318 = 0;
      uStack_311 = 0;
      pppppppuVar23 = pppppppuStack_308;
      if (-1 < (char)bStack_2f9) {
        pppppppuVar23 = (undefined *******)(ulong)bStack_2f9;
      }
      if (pppppppuVar23 != (undefined *******)0x0) {
        func_0x000104c4f768(appppppppuStack_340,(undefined *)((long)pppppppuVar23 + 0xc),&uStack_2f1
                           );
        ppppppppuVar9 = appppppppuStack_340[0];
        if (-1 < cStack_329) {
          ppppppppuVar9 = (undefined ********)appppppppuStack_340;
        }
        ppppppppuVar8 = ppppppppuStack_310;
        if (-1 < (char)bStack_2f9) {
          ppppppppuVar8 = (undefined ********)&ppppppppuStack_310;
        }
        _memmove(ppppppppuVar9,ppppppppuVar8,pppppppuVar23);
        puVar1 = (undefined8 *)((long)ppppppppuVar9 + (long)pppppppuVar23);
        *(undefined4 *)(puVar1 + 1) = 0x7478742e;
        *puVar1 = 0x6e6f697369766572;
        *(undefined1 *)((long)puVar1 + 0xc) = 0;
        func_0x000107c28038(&ppppppppuStack_2f0,appppppppuStack_340,8);
        if (cStack_329 < '\0') {
          __ZdlPv(appppppppuStack_340[0]);
        }
        if (lStack_268 != 0) {
          __ZNKSt3__18ios_base6getlocEv
                    (appppppppuStack_340,(long)&ppppppppuStack_2f0 + (long)ppppppppuStack_2f0[-3]);
          ppppppppuVar8 = (undefined ********)appppppppuStack_340;
          __ZNKSt3__16locale9use_facetERNS0_2idE
                    (ppppppppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*ppppppppuVar8)[7])();
          __ZNSt3__16localeD1Ev(appppppppuStack_340);
          func_0x000109242d18(&ppppppppuStack_2f0,&pppppppuStack_328,ppppppppuVar8);
        }
        ppppppppuVar8 = (undefined ********)&ppppppppuStack_2f0;
        ppppppppuStack_2f0 = (undefined ********)&PTR_DAT_11087cf48;
        appuStack_148[0] = &PTR_DAT_11087cf70;
        func_0x000107c28018(alStack_2e0);
        ppuVar11 = &PTR_PTR_11087cf88;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppppppppuStack_2f0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_148);
      }
      ppppppppuVar10 = (undefined ********)0x38;
      __Znwm();
      ppppppppuVar10[5] = (undefined *******)CONCAT17(uStack_319,uStack_320);
      *(ulong *)((long)ppppppppuVar10 + 0x2f) = CONCAT71(uStack_318,uStack_319);
      ppppppppuVar10[2] = (undefined *******)PTR__fclose_11034c270;
      ppppppppuVar10[3] = (undefined *******)0xffffffffffffffff;
      *ppppppppuVar10 = (undefined *******)&PTR_FUN_110c8b960;
      ppppppppuVar10[1] = (undefined *******)ppppppppuVar6;
      ppppppppuVar10[4] = pppppppuStack_328;
      *(undefined1 *)((long)ppppppppuVar10 + 0x37) = uStack_311;
      *param_1 = (undefined *******)ppppppppuVar10;
      if ((char)bStack_2f9 < '\0') {
        __ZdlPv();
        ppppppppuVar10 = ppppppppuStack_310;
      }
      goto LAB_10ae85468;
    }
    ppppppppuVar10 = (undefined ********)0x0;
    if ((char)bStack_2f9 < '\0') {
      ppppppppuVar10 = ppppppppuStack_310;
      __ZdlPv();
    }
    ppppppppuVar8 = ppppppppuVar8 + 1;
  } while (ppppppppuVar8 != ppppppppuVar22);
  *param_1 = (undefined *******)0x0;
LAB_10ae85468:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppppuVar10;
  }
  ___stack_chk_fail();
  *ppppppppuVar8 = (undefined *******)0x0;
  _fclose(ppppppppuVar6);
  __ZdlPv(ppppppppuVar9);
  __Unwind_Resume(ppppppppuVar10);
  func_0x000107c31948(ppuVar11,&PTR_DAT_110c8b9a0);
  ppppppppuVar10 = ppppppppuVar10 + 1;
  if ((int)ppuVar11 == 0) {
    ppppppppuVar10 = (undefined ********)0x0;
  }
  return ppppppppuVar10;
}



/* Entry: 10ae8559c; end: 10ae855d7;  */

long FUN_10ae8559c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110c8b9a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ae855d8; end: 10ae855e3;  */

undefined ** FUN_10ae855d8(void)

{
  return &PTR_DAT_110c8b9a0;
}



/* Entry: 10ae855e4; end: 10ae85623;  */

undefined8 * FUN_10ae855e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
  return param_1;
}



/* Entry: 10ae85624; end: 10ae85663;  */

void FUN_10ae85624(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae85664; end: 10ae856ef;  */

void FUN_10ae85664(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (param_3 <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = param_3;
  }
  _fread(param_2,1,uVar1,*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) - param_2;
  return;
}



/* Entry: 10ae856f0; end: 10ae856fb;  */

void FUN_10ae856f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10ae856fc; end: 10ae85757;  */

undefined8 * FUN_10ae856fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c8b8f8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
  return param_1;
}



/* Entry: 10ae85758; end: 10ae857b3;  */

void FUN_10ae85758(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c8b8f8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae857b4; end: 10ae857db;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10ae857b4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x30);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ulong *)(param_2 + 0x28);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10ae857dc; end: 10ae85837;  */

undefined8 * FUN_10ae857dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c8b960;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
  return param_1;
}



/* Entry: 10ae85838; end: 10ae85893;  */

void FUN_10ae85838(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c8b960;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c8b8a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae85894; end: 10ae858bb;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10ae85894(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x30);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ulong *)(param_2 + 0x28);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10ae858bc; end: 10ae859fb;  */

void FUN_10ae858bc(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_70 [56];
  long lStack_38;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = (long)&UNK_10f6d2a37;
  lVar1 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar1 = SUB168(SEXT816(lVar1) * SEXT816(-0x431bde82d7b634db),8);
  lVar1 = ((lVar1 >> 0x12) - (lVar1 >> 0x3f)) + *param_3;
  plVar2 = &lStack_38;
  lStack_38 = lVar1;
  if (*(char *)(param_2 + 8) == '\x01') {
    _localtime_r();
  }
  else {
    _gmtime_r(plVar2,auStack_70);
  }
  if (plVar2 == (long *)0x0) {
    if (lVar1 < 0) {
      lVar1 = -0x8000000000000000;
      uVar4 = 0x101;
    }
    else {
      lVar1 = 0x7fffffffffffffff;
      uVar4 = 0xc;
      func_0x00010ae80b44(0x7fffffffffffffff,0xc,0x1f,0x17,0x3b,0x3b);
      uVar4 = uVar4 & 0xffffffffff;
    }
    *param_1 = lVar1;
    param_1[1] = uVar4;
  }
  else {
    lVar1 = (long)*(int *)((long)plVar2 + 0x14) + 0x76c;
    lVar3 = (long)(int)plVar2[2] + 1;
    func_0x00010ae80b44(lVar1,lVar3,(long)*(int *)((long)plVar2 + 0xc),(long)(int)plVar2[1],
                        (long)*(int *)((long)plVar2 + 4),(long)(int)*plVar2);
    *param_1 = lVar1;
    *(int *)(param_1 + 1) = (int)lVar3;
    *(char *)((long)param_1 + 0xc) = (char)((ulong)lVar3 >> 0x20);
    *(int *)(param_1 + 2) = (int)plVar2[5];
    if (*(char *)(param_2 + 8) == '\x01') {
      puVar5 = (undefined *)plVar2[6];
    }
    else {
      puVar5 = &DAT_10f3c625e;
    }
    param_1[3] = (long)puVar5;
    *(bool *)((long)param_1 + 0x14) = 0 < (int)plVar2[4];
  }
  return;
}



/* Entry: 10ae859fc; end: 10ae85ec7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ae859fc(undefined4 *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long unaff_x23;
  long lVar12;
  undefined1 auStack_108 [32];
  int iStack_e8;
  long lStack_e0;
  undefined1 auStack_d0 [32];
  int iStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long alStack_88 [2];
  undefined4 uStack_78;
  undefined1 uStack_74;
  long lStack_48;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if ((bRam00000001137edbe8 & 1) == 0) {
      iVar1 = 0x137edbe8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        lVar9 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar9 = SUB168(SEXT816(lVar9) * SEXT816(-0x431bde82d7b634db),8);
        uVar10 = (lVar9 >> 0x12) - (lVar9 >> 0x3f) ^ 0x8000000000000000;
        uVar7 = 0x7b2;
        uVar8 = 1;
        func_0x00010ae80b44(0x7b2,1,1,0,(long)uVar10 / 0x3c,(long)uVar10 % 0x3c);
        uRam00000001137edc00 = uVar8 & 0xffffffffff;
        uRam00000001137edbf8 = uVar7;
        ___cxa_guard_release(0x1137edbe8);
      }
    }
    if ((bRam00000001137edbf0 & 1) == 0) {
      iVar1 = 0x137edbf0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        lVar9 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar9 = SUB168(SEXT816(lVar9) * SEXT816(-0x431bde82d7b634db),8);
        lVar9 = ((lVar9 >> 0x12) - (lVar9 >> 0x3f)) + 0x7fffffffffffffff;
        uVar7 = 0x7b2;
        uVar8 = 1;
        func_0x00010ae80b44(0x7b2,1,1,0,lVar9 / 0x3c,lVar9 % 0x3c);
        uRam00000001137edc10 = uVar8 & 0xffffffffff;
        uRam00000001137edc08 = uVar7;
        ___cxa_guard_release(0x1137edbf0);
      }
    }
    puVar2 = param_3;
    FUN_10ae809a8(param_3,0x1137edbf8);
    if (((ulong)puVar2 & 1) == 0) {
      uVar8 = 0;
      FUN_10ae809a8(0x1137edc08,param_3);
      if ((uVar8 & 1) == 0) {
        uVar8 = *param_3;
        uVar10 = param_3[1];
        FUN_10ae81174(uVar8,(int)(char)uVar10,(long)(uVar10 << 0x30) >> 0x38,0x7b2,1,1);
        lVar9 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        lVar9 = lVar9 / 1000000 + (long)((int)(uVar10 >> 8) >> 0x18) +
                ((uVar8 * 0x18 + (long)(((int)uVar10 << 8) >> 0x18)) * 0x3c +
                (long)((int)uVar10 >> 0x18)) * 0x3c;
      }
      else {
        lVar9 = 0x7fffffffffffffff;
      }
    }
    else {
      lVar9 = -0x8000000000000000;
    }
    *param_1 = 0;
  }
  else {
    uVar8 = *param_3;
    if ((long)uVar8 < 0) {
      if (uVar8 < 0xffffffff8000076c) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
        *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
        lVar9 = -0x8000000000000000;
        goto LAB_10ae85c04;
      }
    }
    else if (0x8000076b < uVar8) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 4) = 0x7ff8000000000000;
      *(undefined8 *)(param_1 + 2) = 0x7ff8000000000000;
      lVar9 = 0x7fffffffffffffff;
      goto LAB_10ae85c04;
    }
    puVar2 = param_3;
    FUN_10ae85ec8(param_3,0,&lStack_90,auStack_d0);
    if (((int)puVar2 == 0) ||
       (puVar2 = param_3, FUN_10ae85ec8(param_3,1,&lStack_98,auStack_108), lVar9 = lStack_98,
       (int)puVar2 == 0)) {
      alStack_88[1] = 0x7b2;
      uStack_78 = 0x101;
      uStack_74 = 0;
      FUN_10ae809a8(param_3,alStack_88 + 1);
      *param_1 = 0;
      lVar9 = -0x8000000000000000;
      if ((int)param_3 == 0) {
        lVar9 = 0x7fffffffffffffff;
      }
    }
    else {
      if (iStack_b0 != iStack_e8) {
        lVar3 = lStack_90;
        lStack_48 = lStack_98;
        lVar6 = lStack_a8;
        if (lStack_90 < lStack_98) {
          lStack_98 = lStack_90;
          lStack_90 = lVar9;
          lVar3 = lVar9;
          lStack_48 = lStack_98;
          lVar6 = lStack_e0;
        }
        do {
          while( true ) {
            lVar12 = lVar3;
            if (lStack_48 + 1 == lVar3) goto LAB_10ae85d08;
            alStack_88[0] = lStack_48 + (lVar3 - lStack_48) / 2;
            plVar4 = alStack_88;
            _localtime_r(plVar4,alStack_88 + 1);
            if (plVar4 == (long *)0x0) goto joined_r0x00010ae85cac;
            lVar12 = unaff_x23;
            if (plVar4[5] == lVar6) break;
            lStack_48 = alStack_88[0];
            if (plVar4 == (long *)0x0) goto LAB_10ae85d08;
          }
          lVar3 = alStack_88[0];
        } while (plVar4 != (long *)0x0);
        goto LAB_10ae85d08;
      }
      lVar9 = lStack_90;
      if (iStack_b0 != 0) {
        lVar9 = lStack_98;
      }
      lVar3 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      *param_1 = 0;
      lVar9 = lVar3 / 1000000 + lVar9;
    }
  }
  *(long *)(param_1 + 2) = lVar9;
  *(long *)(param_1 + 4) = lVar9;
  goto LAB_10ae85c04;
  while( true ) {
    plVar4 = &lStack_48;
    _localtime_r(plVar4,alStack_88 + 1);
    if ((plVar4 != (long *)0x0) && (lVar12 = lStack_48, plVar4[5] == lVar6)) break;
joined_r0x00010ae85cac:
    lStack_48 = lStack_48 + 1;
    lVar12 = lVar3;
    if (lStack_48 == lVar3) break;
  }
LAB_10ae85d08:
  lVar5 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar3 = lStack_90;
  lVar6 = lStack_98;
  if (iStack_b0 == 0) {
    lVar3 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar9 = lStack_90;
    lVar3 = lVar3 / 1000000 + lVar6;
    lVar6 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    uVar11 = 2;
  }
  else {
    lVar6 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar9 = lStack_98;
    lVar3 = lVar6 / 1000000 + lVar3;
    lVar6 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    uVar11 = 1;
  }
  *param_1 = uVar11;
  lVar9 = lVar6 / 1000000 + lVar9;
  *(long *)(param_1 + 2) = lVar3;
  *(long *)(param_1 + 4) = lVar5 / 1000000 + lVar12;
LAB_10ae85c04:
  *(long *)(param_1 + 6) = lVar9;
  return;
}



/* Entry: 10ae85ec8; end: 10ae85fb3;  */

void FUN_10ae85ec8(int *param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_58 [56];
  
  iVar1 = *param_1;
  *(int *)(param_4 + 2) = (char)param_1[2] + -1;
  *(int *)((long)param_4 + 0x14) = iVar1 + -0x76c;
  uVar2 = *(undefined4 *)((long)param_1 + 9);
  auVar3._0_4_ = (int)(short)(char)uVar2;
  auVar3._4_4_ = (int)(short)(char)((uint)uVar2 >> 8);
  auVar3._8_4_ = (int)(short)(char)((uint)uVar2 >> 0x10);
  auVar3._12_4_ = (int)(short)(char)((uint)uVar2 >> 0x18);
  auVar3 = NEON_rev64(auVar3,4);
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  param_4[1] = auVar3._8_8_;
  *param_4 = auVar3._0_8_;
  *(undefined4 *)(param_4 + 4) = param_2;
  _mktime();
  *param_3 = (long)param_4;
  if (param_4 == (undefined8 *)0xffffffffffffffff) {
    _localtime_r(param_3,auStack_58);
  }
  return;
}



/* Entry: 10ae85fb4; end: 10ae86067;  */

undefined8 FUN_10ae85fb4(void)

{
  return 0;
}



/* Entry: 10ae86068; end: 10ae861db;  */

undefined8 FUN_10ae86068(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  char *pcStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_50 = (char *)0x0;
  pcStack_48 = (char *)0x0;
  uStack_40 = 0;
  _CFTimeZoneCopyDefault();
  lVar1 = param_1;
  _CFTimeZoneGetName();
  pcVar4 = ":localtime";
  if (lVar1 != 0) {
    lVar2 = lVar1;
    _CFStringGetLength(lVar1);
    _CFStringGetMaximumSizeForEncoding();
    func_0x0001080e0ff0(&pcStack_50,lVar2 + 1);
    _CFStringGetCString(lVar1,pcStack_50,lVar2 + 1,0x8000100);
    if ((int)lVar1 != 0) {
      pcVar4 = pcStack_50;
    }
  }
  _CFRelease(param_1);
  pcVar3 = "TZ";
  _getenv();
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
  }
  if (*pcVar4 == ':') {
    pcVar4 = pcVar4 + 1;
  }
  pcVar3 = pcVar4;
  _strcmp(pcVar4,&UNK_10f6d2a53);
  if ((int)pcVar3 == 0) {
    pcVar3 = "LOCALTIME";
    _getenv();
    pcVar4 = "/etc/localtime";
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
    }
  }
  func_0x000107c31940(auStack_68,pcVar4);
  uStack_38 = 0;
  FUN_10ae814cc(auStack_68,&uStack_38);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (pcStack_50 != (char *)0x0) {
    pcStack_48 = pcStack_50;
    __ZdlPv();
  }
  return uStack_38;
}



/* Entry: 10ae861dc; end: 10ae8629f;  */

void FUN_10ae861dc(char *param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  if (*pcVar1 != ':') {
    FUN_10ae862a0();
    FUN_10ae86378();
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (FUN_10ae862a0(), pcVar1 != (char *)0x0))
    {
      *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x18) + 0xe10;
      if (*pcVar1 != ',') {
        FUN_10ae86378();
      }
      func_0x00010ae86444();
      func_0x00010ae86444();
    }
  }
  return;
}



/* Entry: 10ae862a0; end: 10ae86377;  */

char * FUN_10ae862a0(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar3 = *param_1;
  pcVar4 = param_1;
  if (cVar3 != '\0') {
    if (cVar3 == '<') {
      lVar2 = -1;
      pcVar5 = param_1 + 1;
      do {
        pcVar4 = pcVar5 + 1;
        cVar3 = *pcVar5;
        if (cVar3 == '\0') {
          return (char *)0x0;
        }
        lVar2 = lVar2 + 1;
        pcVar5 = pcVar4;
      } while (cVar3 != '>');
      param_1 = param_1 + 1;
      goto LAB_10ae8635c;
    }
    do {
      puVar1 = &UNK_10f6d2a76;
      _memchr(&UNK_10f6d2a76,(int)cVar3,4);
      if ((puVar1 != (undefined *)0x0) ||
         (puVar1 = &UNK_10e52c916, _memchr(&UNK_10e52c916,(int)cVar3,0xb),
         puVar1 != (undefined *)0x0)) break;
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 != '\0');
  }
  lVar2 = (long)pcVar4 - (long)param_1;
  if (lVar2 < 3) {
    return (char *)0x0;
  }
LAB_10ae8635c:
  func_0x000107c2c4d8(param_2,param_1,lVar2);
  return pcVar4;
}



/* Entry: 10ae86378; end: 10ae865a7;  */

void FUN_10ae86378(char *param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iStack_2c;
  undefined8 uStack_28;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  if ((cVar1 == '-') || (iVar2 = param_4, cVar1 == '+')) {
    param_1 = param_1 + 1;
    iVar2 = -param_4;
    if (cVar1 != '-') {
      iVar2 = param_4;
    }
  }
  uStack_28 = 0;
  iStack_2c = 0;
  FUN_10ae865a8();
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == ':') {
    param_1 = param_1 + 1;
    FUN_10ae865a8(param_1,0,0x3b,&uStack_28);
    if (param_1 == (char *)0x0) {
      return;
    }
    if (*param_1 == ':') {
      param_1 = param_1 + 1;
      FUN_10ae865a8(param_1,0,0x3b,&iStack_2c);
      if (param_1 == (char *)0x0) {
        return;
      }
      goto LAB_10ae8641c;
    }
  }
  iStack_2c = 0;
LAB_10ae8641c:
  *param_5 = (iStack_2c + ((int)uStack_28 + uStack_28._4_4_ * 0x3c) * 0x3c) * iVar2;
  return;
}



/* Entry: 10ae865a8; end: 10ae86683;  */

void FUN_10ae865a8(char *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  
  puVar2 = &UNK_10e52c916;
  _memchr(&UNK_10e52c916,(long)*param_1,0xb);
  if (puVar2 != (undefined *)0x0) {
    iVar3 = 0;
    pcVar4 = param_1;
    do {
      uVar1 = (int)puVar2 + 0xf1ad36ea;
      if (9 < (int)uVar1) break;
      if (0xccccccc < iVar3) {
        return;
      }
      if ((int)(uVar1 ^ 0x7fffffff) < iVar3 * 10) {
        return;
      }
      iVar3 = uVar1 + iVar3 * 10;
      pcVar4 = pcVar4 + 1;
      puVar2 = &UNK_10e52c916;
      _memchr(&UNK_10e52c916,(long)*pcVar4,0xb);
    } while (puVar2 != (undefined *)0x0);
    if (((pcVar4 != param_1) && (param_2 <= iVar3)) && (iVar3 <= param_3)) {
      *param_4 = iVar3;
    }
  }
  return;
}



/* Entry: 10ae86684; end: 10ae866ab;  */

undefined1  [16] FUN_10ae86684(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104c501e4();
    __ZNSt3__16chrono12system_clock3nowEv();
    lVar2 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar2 = (long)plVar1 - lVar2;
    if (lVar2 < 0) {
      uVar4 = (ulong)(lVar2 * -1000) >> 9;
      lVar2 = lVar2 * -1000 + (uVar4 / 0x1dcd65) * -1000000000;
      lVar5 = -lVar2;
      uVar3 = (lVar5 >> 0x3d) - uVar4 / 0x1dcd65;
      uVar4 = 0;
      if (lVar2 != 0) {
        uVar4 = (ulong)((int)lVar5 * 4 + 4000000000);
      }
    }
    else {
      uVar3 = (ulong)(lVar2 * 1000) / 1000000000;
      uVar4 = ((ulong)(lVar2 * 1000) % 1000000000) * 4;
    }
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae8669c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10ae866ac; end: 10ae86757;  */

undefined1  [16] FUN_10ae866ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar1 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  param_1 = param_1 - lVar1;
  if (param_1 < 0) {
    uVar3 = (ulong)(param_1 * -1000) >> 9;
    lVar1 = param_1 * -1000 + (uVar3 / 0x1dcd65) * -1000000000;
    lVar4 = -lVar1;
    uVar2 = (lVar4 >> 0x3d) - uVar3 / 0x1dcd65;
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = (ulong)((int)lVar4 * 4 + 4000000000);
    }
  }
  else {
    uVar2 = (ulong)(param_1 * 1000) / 1000000000;
    uVar3 = ((ulong)(param_1 * 1000) % 1000000000) * 4;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10ae86758; end: 10ae8680b;  */

void FUN_10ae86758(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong uVar5;
  long lStack_50;
  uint uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_1 == 0) goto LAB_10ae86798;
LAB_10ae86780:
  if (lStack_50 < 1) {
    return;
  }
  if (lStack_50 != 0x7fffffffffffffff) goto LAB_10ae8679c;
  uVar5 = 0;
  do {
    lVar1 = lStack_50;
    lVar2 = lStack_50;
    uVar4 = uVar5;
    FUN_10ae86f58();
    lStack_40 = lVar2;
    uStack_38 = uVar4;
    do {
      plVar3 = &lStack_40;
      _nanosleep(plVar3,&lStack_40);
      if ((int)plVar3 == 0) break;
      ___error();
    } while ((int)*plVar3 == 4);
    unaff_x20 = uVar5 | unaff_x20 & 0xffffffff00000000;
    func_0x00010ae86c8c(&lStack_50,lVar1,unaff_x20);
    if (lStack_50 != 0) goto LAB_10ae86780;
LAB_10ae86798:
    if (uStack_48 == 0) {
      return;
    }
LAB_10ae8679c:
    uVar5 = (ulong)uStack_48;
  } while( true );
}



/* Entry: 10ae8680c; end: 10ae86baf;  */

ulong FUN_10ae8680c(byte param_1,ulong param_2,uint param_3,ulong param_4,uint param_5,
                   ulong *param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if ((param_3 != 0xffffffff) && (param_5 != 0xffffffff)) {
    if ((param_4 == 0) && (param_5 == 4)) {
      if (param_2 < 0x225c17d00) {
        uVar9 = 0;
        uVar13 = param_3 >> 2;
        param_3 = param_3 & 3;
        uVar7 = param_2 * 1000000000 + (ulong)uVar13;
        goto LAB_10ae86928;
      }
    }
    else if ((param_4 == 0) && (param_5 == 400)) {
      if (param_2 < 0xd6bf94d455) {
        uVar13 = param_3 / 400;
        uVar7 = param_2 * 10000000 + (ulong)param_3 / 400;
        iVar10 = 400;
LAB_10ae86924:
        uVar9 = 0;
        param_3 = param_3 - uVar13 * iVar10;
LAB_10ae86928:
        *param_6 = uVar9;
        *(uint *)(param_6 + 1) = param_3;
        return uVar7;
      }
    }
    else if ((param_4 == 0) && (param_5 == 4000)) {
      if (param_2 < 0x8637bd04b56) {
        uVar13 = param_3 / 4000;
        uVar7 = param_2 * 1000000 + (ulong)param_3 / 4000;
        iVar10 = 4000;
        goto LAB_10ae86924;
      }
    }
    else {
      if ((param_4 != 0) || (param_5 != 4000000)) {
        if ((0 < (long)param_4) && (param_5 == 0)) {
          if ((long)param_2 < 0) {
            uVar16 = -param_2 - (ulong)(param_3 != 0);
            uVar7 = 0;
            if (param_4 != 0) {
              uVar7 = uVar16 / param_4;
            }
            uVar16 = uVar16 - uVar7 * param_4;
            uVar9 = -uVar16;
            if (param_3 != 0) {
              uVar9 = ~uVar16;
            }
            uVar7 = -uVar7;
          }
          else if (param_4 == 1) {
            uVar9 = 0;
            uVar7 = param_2;
          }
          else {
            uVar7 = 0;
            if (param_4 != 0) {
              uVar7 = param_2 / param_4;
            }
            uVar9 = param_2 - uVar7 * param_4;
          }
          goto LAB_10ae86928;
        }
        goto LAB_10ae8698c;
      }
      if (param_2 < 0x20c49ba5a64af7) {
        uVar9 = 0;
        uVar7 = (ulong)param_3;
        param_3 = param_3 % 4000000;
        uVar7 = param_2 * 1000 + uVar7 / 4000000;
        goto LAB_10ae86928;
      }
    }
    param_4 = 0;
  }
LAB_10ae8698c:
  uVar16 = (long)(param_4 ^ param_2) >> 0x3f;
  uVar7 = (long)param_2 >> 0x3f;
  if ((param_3 == 0xffffffff) || (param_4 == 0 && param_5 == 0)) {
    *param_6 = uVar7 ^ 0x7fffffffffffffff;
    *(undefined4 *)(param_6 + 1) = 0xffffffff;
    return uVar16 ^ 0x7fffffffffffffff;
  }
  if (param_5 == 0xffffffff) {
    *param_6 = param_2;
    *(uint *)(param_6 + 1) = param_3;
    return 0;
  }
  uVar13 = 4000000000 - param_3;
  if (-1 < (long)param_2) {
    uVar13 = param_3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2 ^ uVar7;
  lVar14 = SUB168(auVar2 * ZEXT816(4000000000),8);
  uVar11 = (param_2 ^ uVar7) * 4000000000;
  uVar9 = uVar11 + uVar13;
  if (CARRY8(uVar11,(ulong)uVar13)) {
    lVar14 = lVar14 + 1;
  }
  uVar13 = 4000000000 - param_5;
  if (-1 < (long)param_4) {
    uVar13 = param_5;
  }
  uVar12 = param_4 ^ (long)param_4 >> 0x3f;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar12;
  lVar15 = SUB168(auVar3 * ZEXT816(4000000000),8);
  uVar12 = uVar12 * 4000000000;
  uVar11 = uVar12 + uVar13;
  if (CARRY8(uVar12,(ulong)uVar13)) {
    lVar15 = lVar15 + 1;
  }
  uVar12 = uVar9;
  lVar8 = lVar14;
  ___udivti3(uVar9,lVar14,uVar11,lVar15);
  uVar16 = uVar16 ^ 0x7fffffffffffffff;
  lVar6 = 0;
  if ((param_1 & (lVar8 != 0 || (long)uVar12 < 0)) == 0) {
    uVar16 = uVar12;
    lVar6 = lVar8;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar16;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  uVar12 = uVar9 - uVar16 * uVar11;
  uVar9 = lVar14 - (SUB168(auVar4 * auVar5,8) + uVar16 * lVar15 + lVar6 * uVar11 +
                   (ulong)(uVar9 < uVar16 * uVar11));
  if (uVar9 == 0) {
    uVar7 = uVar12 / 4000000000;
  }
  else {
    if (1999999999 < uVar9) {
      uVar7 = uVar7 ^ 0x7fffffffffffffff;
      iVar10 = -(uint)((uVar12 != 0 || uVar9 != 2000000000) || param_2 < 0x8000000000000000);
      goto LAB_10ae86b30;
    }
    uVar7 = uVar12;
    ___udivti3(uVar12,uVar9,4000000000,0);
  }
  iVar10 = (int)uVar12 + (int)uVar7 * 0x1194d800;
  uVar9 = ~uVar7;
  if (iVar10 == 0) {
    uVar9 = -uVar7;
  }
  iVar1 = 0;
  if (iVar10 != 0) {
    iVar1 = -0x1194d800 - iVar10;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar7 = uVar9;
    iVar10 = iVar1;
  }
LAB_10ae86b30:
  *param_6 = uVar7;
  *(int *)(param_6 + 1) = iVar10;
  if (((long)(param_4 ^ param_2) < 0) && (uVar16 != 0 || lVar6 != 0)) {
    uVar16 = -uVar16 | 0x8000000000000000;
  }
  else {
    uVar16 = uVar16 & 0x7fffffffffffffff;
  }
  return uVar16;
}



/* Entry: 10ae86bb0; end: 10ae86d0b;  */

undefined1  [16] FUN_10ae86bb0(ulong param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar4 = -1;
  uVar2 = 0x7fffffffffffffff;
  if (param_1 != 0x8000000000000000) {
    uVar2 = -param_1;
    iVar4 = 0;
  }
  if (param_2 != 0) {
    uVar2 = ~param_1;
    iVar4 = -0x1194d800 - param_2;
  }
  iVar1 = -1;
  uVar3 = (long)param_1 >> 0x3f ^ 0x8000000000000000;
  if (param_2 != -1) {
    iVar1 = iVar4;
    uVar3 = uVar2;
  }
  auVar5._8_4_ = iVar1;
  auVar5._0_8_ = uVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10ae86d0c; end: 10ae86f03;  */

ulong * FUN_10ae86d0c(ulong *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  
  uVar13 = *param_1;
  uVar12 = (uint)param_1[1];
  if (uVar12 == 0xffffffff) {
    uVar11 = (long)(uVar13 ^ param_2) >> 0x3f ^ 0x7fffffffffffffff;
    iVar10 = -1;
    goto LAB_10ae86ee8;
  }
  uVar1 = 4000000000 - uVar12;
  if (-1 < (long)uVar13) {
    uVar1 = uVar12;
  }
  uVar14 = uVar13 ^ (long)uVar13 >> 0x3f;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar14;
  uVar16 = SUB168(auVar2 * ZEXT816(4000000000),8);
  uVar14 = uVar14 * 4000000000;
  uVar11 = uVar14 + uVar1;
  if (CARRY8(uVar14,(ulong)uVar1)) {
    uVar16 = uVar16 + 1;
  }
  uVar15 = param_2 ^ (long)param_2 >> 0x3f;
  uVar14 = -((long)param_2 >> 0x3f);
  uVar9 = uVar15 + uVar14;
  uVar17 = (ulong)CARRY8(uVar15,uVar14);
  if (uVar16 == 0) {
    if ((uVar11 | uVar9) >> 0x20 == 0) {
      uVar11 = uVar11 * uVar9;
      goto LAB_10ae86e34;
    }
LAB_10ae86ddc:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar9;
    uVar16 = SUB168(auVar5 * auVar8,8) + uVar11 * uVar17 + uVar16 * uVar9;
    uVar9 = uVar11 * uVar9;
    iVar18 = (int)uVar9;
    if (uVar16 == 0) {
      uVar9 = uVar9 / 4000000000;
      iVar18 = iVar18 + (int)uVar9 * 0x1194d800;
    }
    else {
      if (1999999999 < uVar16) goto LAB_10ae86ebc;
      ___udivti3(uVar9,uVar16,4000000000,0);
      iVar18 = iVar18 + (int)uVar9 * 0x1194d800;
    }
  }
  else {
    if (uVar9 != 0 || uVar17 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar9;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar9;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      if (!CARRY8(SUB168(auVar4 * auVar7,8),uVar16 * uVar9 + uVar17 * uVar11) &&
          (SUB168(auVar3 * auVar6,8) == 0 && (uVar16 == 0 || !CARRY8(uVar15,uVar14))))
      goto LAB_10ae86ddc;
      uVar9 = 0xffffffffffffffff;
      uVar16 = 0xffffffffffffffff;
LAB_10ae86ebc:
      uVar12 = -((int)((uint)(uVar13 >> 0x20) ^ (uint)(param_2 >> 0x20)) >> 0x1f);
      uVar11 = 0x8000000000000000;
      if (uVar12 == 0) {
        uVar11 = 0x7fffffffffffffff;
      }
      iVar10 = 0;
      if ((uVar12 & (uVar9 == 0 && uVar16 == 2000000000)) == 0) {
        iVar10 = -1;
      }
      goto LAB_10ae86ee8;
    }
    uVar11 = 0;
LAB_10ae86e34:
    uVar9 = uVar11 / 4000000000;
    iVar18 = (int)uVar11 + (int)uVar9 * 0x1194d800;
  }
  uVar11 = uVar9;
  iVar10 = iVar18;
  if ((long)(uVar13 ^ param_2) < 0) {
    uVar11 = ~uVar9;
    iVar10 = -0x1194d800 - iVar18;
    if (iVar18 == 0) {
      uVar11 = -uVar9;
      iVar10 = 0;
    }
  }
LAB_10ae86ee8:
  *param_1 = uVar11;
  *(int *)(param_1 + 1) = iVar10;
  return param_1;
}



/* Entry: 10ae86f04; end: 10ae86f57;  */

long FUN_10ae86f04(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_1c [12];
  
  if (param_1 >> 0x21 == 0) {
    return (param_2 >> 2 & 0x3fffffff) + param_1 * 1000000000;
  }
  lVar1 = 1;
  FUN_10ae8680c(1,param_1,param_2 & 0xffffffff,0,4,auStack_1c);
  return lVar1;
}



/* Entry: 10ae86f58; end: 10ae86fc3;  */

undefined1  [16] FUN_10ae86f58(ulong param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = 999999999;
  uVar3 = 0x7fffffffffffffff;
  if (param_1 != 0) {
    uVar2 = ~(uint)((long)param_1 >> 0x3f) & 999999999;
    uVar3 = (long)param_1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar1 = param_1;
  uVar4 = param_2 + 3;
  if (3999999999 < param_2 + 3) {
    uVar1 = param_1 + 1;
    uVar4 = param_2 + 0x1194d803;
  }
  uVar5 = param_2;
  if ((param_1 & 0x8000000000000000) != 0) {
    param_1 = uVar1;
    uVar5 = uVar4;
  }
  if (param_2 != 0xffffffff) {
    uVar2 = uVar5 >> 2;
    uVar3 = param_1;
  }
  auVar6._8_4_ = uVar2;
  auVar6._0_8_ = uVar3;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 10ae86fc4; end: 10ae8715f;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_10ae86fc4(ulong *param_1,undefined *param_2,ulong param_3,long param_4,ulong param_5,
                     long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *extraout_x8;
  ulong *puVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar13;
  undefined8 unaff_x29;
  undefined *puVar14;
  undefined8 unaff_x30;
  
  do {
    lVar11 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x24 = param_5 & 0xffffffff;
    if ((lVar11 == 0x7fffffffffffffff) && (unaff_x24 == 0xffffffff)) {
      puVar9 = (ulong *)&DAT_10e52c974;
LAB_10ae8703c:
      puVar13 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar14 = *(undefined **)((long)register0x00000008 + -8);
      uVar1 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar4 = *(undefined8 *)((long)register0x00000008 + -0x38);
      puVar5 = (undefined1 *)register0x00000008;
      puVar12 = *(ulong **)((long)register0x00000008 + -0x18);
      puVar7 = *(ulong **)((long)register0x00000008 + -0x28);
      while( true ) {
        puVar10 = puVar9;
        puVar6 = param_1;
        *(undefined8 *)(puVar5 + -0x40) = uVar3;
        *(undefined8 *)(puVar5 + -0x38) = uVar4;
        *(undefined8 *)(puVar5 + -0x30) = uVar2;
        *(ulong **)(puVar5 + -0x28) = puVar7;
        *(undefined8 *)(puVar5 + -0x20) = uVar1;
        *(ulong **)(puVar5 + -0x18) = puVar12;
        *(undefined1 **)(puVar5 + -0x10) = puVar13;
        *(undefined **)(puVar5 + -8) = puVar14;
        puVar9 = puVar10;
        func_0x000107c613d0();
        if (puVar9 < (ulong *)0x7ffffffffffffff8) break;
        func_0x000104c4f6b8();
        *(undefined8 *)(puVar5 + -0x60) = uVar1;
        *(ulong **)(puVar5 + -0x58) = puVar6;
        *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x48) = &UNK_10002d57c;
        puVar13 = puVar5 + -0x50;
        if ((bRam00000001132dfb00 & 1) != 0) {
          return puVar9;
        }
        puVar9 = (ulong *)0x1132dfb00;
        func_0x000107c60e48();
        if ((int)puVar9 == 0) {
          return puVar9;
        }
        puVar14 = &UNK_10002d5bc;
        puVar5 = puVar5 + -0x60;
        param_1 = (ulong *)0x1132dfae8;
        puVar9 = (ulong *)&UNK_10f5738ce;
        puVar12 = puVar6;
        puVar7 = puVar10;
      }
      if (puVar9 < (ulong *)0x17) {
        *(char *)((long)puVar6 + 0x17) = (char)puVar9;
        puVar7 = puVar6;
        if (puVar9 == (ulong *)0x0) goto code_r0x00010002d55c;
      }
      else {
        puVar12 = (ulong *)0x19;
        if (((ulong)puVar9 | 7) != 0x17) {
          puVar12 = (ulong *)(((ulong)puVar9 | 7) + 1);
        }
        puVar7 = puVar12;
        func_0x000107c60e20();
        puVar6[1] = (ulong)puVar9;
        puVar6[2] = (ulong)puVar12 | 0x8000000000000000;
        *puVar6 = (ulong)puVar7;
      }
      func_0x000107c610b8(puVar7,puVar10,puVar9);
code_r0x00010002d55c:
      *(undefined1 *)((long)puVar7 + (long)puVar9) = 0;
      return puVar6;
    }
    if ((lVar11 == -0x8000000000000000) && (unaff_x24 == 0xffffffff)) {
      puVar9 = (ulong *)&DAT_10e52c984;
      goto LAB_10ae8703c;
    }
    lVar8 = 0;
    param_5 = param_3;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *(long *)((long)register0x00000008 + -0x60) = lVar8 / 1000000 + lVar11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x24 * 250000;
    if (param_3 < 0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    param_4 = lVar8;
    __Unwind_Resume();
    *(undefined **)((long)register0x00000008 + -0xb0) = param_2;
    *(ulong *)((long)register0x00000008 + -0xa8) = param_3;
    *(long *)((long)register0x00000008 + -0xa0) = param_6;
    *(long *)((long)register0x00000008 + -0x98) = lVar8;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10ae87160;
    param_6 = param_4;
    FUN_10ae86068();
    param_5 = param_5 & 0xffffffff;
    param_2 = &UNK_10e52c95b;
    param_3 = 0x18;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = extraout_x8;
    unaff_x23 = lVar11;
  } while( true );
  if (param_3 < 0x17) {
    *(char *)((long)register0x00000008 + -0x61) = (char)param_3;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x78);
    if (param_3 == 0) goto LAB_10ae870f4;
  }
  else {
    puVar13 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar13 = (undefined1 *)((param_3 | 7) + 1);
    }
    puVar5 = puVar13;
    __Znwm();
    *(ulong *)((long)register0x00000008 + -0x70) = param_3;
    *(ulong *)((long)register0x00000008 + -0x68) = (ulong)puVar13 | 0x8000000000000000;
    *(undefined1 **)((long)register0x00000008 + -0x78) = puVar5;
  }
  _memmove(puVar5,param_2,param_3);
LAB_10ae870f4:
  puVar5[param_3] = 0;
  *(long *)((long)register0x00000008 + -0x80) = param_6;
  puVar9 = (ulong *)((long)register0x00000008 + -0x78);
  FUN_10ae7e330(param_1,puVar9,(undefined1 *)((long)register0x00000008 + -0x60),
                (undefined1 *)((long)register0x00000008 + -0x58),
                (undefined1 *)((long)register0x00000008 + -0x80));
  if (*(char *)((long)register0x00000008 + -0x61) < '\0') {
    puVar9 = *(ulong **)((long)register0x00000008 + -0x78);
    __ZdlPv(puVar9);
  }
  return puVar9;
}



/* Entry: 10ae87160; end: 10ae871ab;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae870ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae87140) */
/* WARNING: Removing unreachable block (ram,0x00010ae87150) */
/* WARNING: Removing unreachable block (ram,0x00010ae87158) */
/* WARNING: Removing unreachable block (ram,0x00010ae870b8) */

ulong ***** FUN_10ae87160(ulong *****param_1,long param_2,ulong param_3)

{
  ulong *****pppppuVar1;
  ulong *****pppppuVar2;
  ulong *****pppppuVar3;
  long lVar4;
  ulong *****pppppuVar5;
  long lVar6;
  ulong *****pppppuVar7;
  ulong *****unaff_x19;
  undefined8 unaff_x20;
  ulong *****unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lStack_80;
  ulong ****ppppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar6 = param_2;
  FUN_10ae86068();
  param_3 = param_3 & 0xffffffff;
  if ((param_2 == 0x7fffffffffffffff) && (param_3 == 0xffffffff)) {
    pppppuVar5 = (ulong *****)&DAT_10e52c974;
  }
  else {
    if ((param_2 != -0x8000000000000000) || (param_3 != 0xffffffff)) {
      lVar4 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lStack_60 = lVar4 / 1000000 + param_2;
      lStack_58 = param_3 * 250000;
      pppppuVar5 = (ulong *****)0x20;
      __Znwm();
      uStack_70 = 0x18;
      lStack_68 = -0x7fffffffffffffe0;
      ppppuStack_78 = (ulong ****)pppppuVar5;
      _memmove(pppppuVar5,&UNK_10e52c95b,0x18);
      *(undefined1 *)(pppppuVar5 + 3) = 0;
      pppppuVar5 = &ppppuStack_78;
      lStack_80 = lVar6;
      FUN_10ae7e330(param_1,pppppuVar5,&lStack_60,&lStack_58,&lStack_80);
      if (lStack_68 < 0) {
        __ZdlPv(ppppuStack_78);
        pppppuVar5 = (ulong *****)ppppuStack_78;
      }
      return pppppuVar5;
    }
    pppppuVar5 = (ulong *****)&DAT_10e52c984;
  }
  while( true ) {
    pppppuVar7 = pppppuVar5;
    pppppuVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong ******)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong ******)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pppppuVar5 = pppppuVar7;
    func_0x000107c613d0();
    if (pppppuVar5 < (ulong *****)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong ******)((long)register0x00000008 + -0x58) = pppppuVar2;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pppppuVar5;
    }
    pppppuVar5 = (ulong *****)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pppppuVar5 == 0) {
      return pppppuVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong *****)0x1132dfae8;
    pppppuVar5 = (ulong *****)&UNK_10f5738ce;
    unaff_x19 = pppppuVar2;
    unaff_x21 = pppppuVar7;
  }
  if (pppppuVar5 < (ulong *****)0x17) {
    *(char *)((long)pppppuVar2 + 0x17) = (char)pppppuVar5;
    pppppuVar3 = pppppuVar2;
    if (pppppuVar5 == (ulong *****)0x0) goto code_r0x00010002d55c;
  }
  else {
    pppppuVar1 = (ulong *****)0x19;
    if (((ulong)pppppuVar5 | 7) != 0x17) {
      pppppuVar1 = (ulong *****)(((ulong)pppppuVar5 | 7) + 1);
    }
    pppppuVar3 = pppppuVar1;
    func_0x000107c60e20();
    pppppuVar2[1] = (ulong ****)pppppuVar5;
    pppppuVar2[2] = (ulong ****)((ulong)pppppuVar1 | 0x8000000000000000);
    *pppppuVar2 = (ulong ****)pppppuVar3;
  }
  func_0x000107c610b8(pppppuVar3,pppppuVar7,pppppuVar5);
code_r0x00010002d55c:
  *(undefined1 *)((long)pppppuVar3 + (long)pppppuVar5) = 0;
  return pppppuVar2;
}



/* Entry: 10ae871ac; end: 10ae874f7;  */

undefined8 *******
FUN_10ae871ac(undefined8 param_1,ulong param_2,char *param_3,ulong param_4,long *param_5,
             long param_6)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined8 ******ppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar6 = param_1;
  FUN_10ae81440();
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  for (; param_4 != 0; param_4 = param_4 - 1) {
    cVar1 = *param_3;
    lVar7 = (long)cVar1;
    if (cVar1 < 0) {
      ___maskrune(lVar7,0x4000);
      uVar5 = (uint)lVar7;
    }
    else {
      uVar5 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x4000;
    }
    if (uVar5 == 0) break;
    param_3 = param_3 + 1;
  }
  lVar7 = 0;
  do {
    uVar12 = *(ulong *)(&UNK_110c8ba30 + lVar7);
    if ((uVar12 == 0) ||
       ((uVar12 <= param_4 &&
        (pcVar8 = param_3, _memcmp(param_3,*(undefined8 *)((long)&PTR_DAT_110c8ba28 + lVar7),uVar12)
        , (int)pcVar8 == 0)))) {
      if (param_4 == uVar12) {
LAB_10ae872bc:
        *param_5 = *(long *)(&UNK_110c8ba38 + lVar7);
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(&UNK_110c8ba40 + lVar7);
        return (undefined8 *******)0x1;
      }
      pcVar8 = param_3 + uVar12;
      lVar13 = uVar12 - param_4;
      while( true ) {
        cVar1 = *pcVar8;
        lVar9 = (long)cVar1;
        if (cVar1 < 0) {
          ___maskrune(lVar9,0x4000);
          uVar5 = (uint)lVar9;
        }
        else {
          uVar5 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x4000;
        }
        if (uVar5 == 0) break;
        pcVar8 = pcVar8 + 1;
        bVar4 = lVar13 == -1;
        lVar13 = lVar13 + 1;
        if (bVar4) goto LAB_10ae872bc;
      }
    }
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0x40);
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  lStack_88 = 0;
  if (0x7ffffffffffffff7 < param_2) {
    func_0x000104c4f6b8();
    goto LAB_10ae874a4;
  }
  if (param_2 < 0x17) {
    uStack_90 = CONCAT17((char)param_2,(undefined7)uStack_90);
    pppppppuVar10 = &ppppppuStack_a0;
    if (param_2 != 0) goto LAB_10ae87354;
  }
  else {
    pppppppuVar11 = (undefined8 *******)0x19;
    if ((param_2 | 7) != 0x17) {
      pppppppuVar11 = (undefined8 *******)((param_2 | 7) + 1);
    }
    pppppppuVar10 = pppppppuVar11;
    __Znwm();
    uStack_90 = (ulong)pppppppuVar11 | 0x8000000000000000;
    ppppppuStack_a0 = pppppppuVar10;
    uStack_98 = param_2;
LAB_10ae87354:
    _memmove(pppppppuVar10,param_1,param_2);
  }
  *(undefined1 *)((long)pppppppuVar10 + param_2) = 0;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104c4f6b8();
LAB_10ae874a4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae874a8);
    (*pcVar3)();
  }
  if (param_4 < 0x17) {
    uStack_a8 = CONCAT17((char)param_4,(undefined7)uStack_a8);
    pppppppuVar10 = &ppppppuStack_b8;
    if (param_4 == 0) goto LAB_10ae873c0;
  }
  else {
    pppppppuVar11 = (undefined8 *******)0x19;
    if ((param_4 | 7) != 0x17) {
      pppppppuVar11 = (undefined8 *******)((param_4 | 7) + 1);
    }
    pppppppuVar10 = pppppppuVar11;
    __Znwm();
    uStack_a8 = (ulong)pppppppuVar11 | 0x8000000000000000;
    ppppppuStack_b8 = pppppppuVar10;
    uStack_b0 = param_4;
  }
  _memmove(pppppppuVar10,param_3,param_4);
LAB_10ae873c0:
  *(undefined1 *)((long)pppppppuVar10 + param_4) = 0;
  pppppppuVar11 = &ppppppuStack_a0;
  uStack_c0 = uVar6;
  FUN_10ae7f6a8(pppppppuVar11,&ppppppuStack_b8,&uStack_c0,&lStack_88,&lStack_80,&uStack_78);
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppppppuStack_b8);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(ppppppuStack_a0);
  }
  if ((int)pppppppuVar11 == 0) {
    if (param_6 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_6,&uStack_78);
    }
  }
  else {
    lVar7 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lVar7 = SUB168(SEXT816(lVar7) * SEXT816(-0x431bde82d7b634db),8);
    *param_5 = ((lVar7 >> 0x12) - (lVar7 >> 0x3f)) + lStack_88;
    *(int *)(param_5 + 1) =
         SUB164(SEXT816(lStack_80) * SEXT816(0x431bde82d7b634db),10) -
         (SUB164(SEXT816(lStack_80) * SEXT816(0x431bde82d7b634db),0xc) >> 0x1f);
  }
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  return pppppppuVar11;
}



/* Entry: 10ae874f8; end: 10ae87533;  */

undefined1  [16] FUN_10ae874f8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 999999999;
  uVar3 = 0x7fffffffffffffff;
  if (param_1 != 0) {
    uVar2 = ~(uint)((long)param_1 >> 0x3f) & 999999999;
    uVar3 = (long)param_1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar1 = (ulong)uVar2;
  if ((int)param_2 != -1) {
    uVar1 = param_2 >> 2 & 0x3fffffff;
    uVar3 = param_1;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 10ae87534; end: 10ae87713;  */

long FUN_10ae87534(uint *param_1,ulong param_2,undefined1 *param_3,long param_4,long param_5,
                  int param_6)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar4;
  
  if ((ulong)(param_4 * 3) < param_2 << 2) {
    return 0;
  }
  puVar1 = (uint *)((long)param_1 + param_2);
  puVar7 = param_3;
  if ((2 < param_2) && (3 < (long)param_2)) {
    puVar6 = param_1;
    do {
      param_1 = (uint *)((long)puVar6 + 3);
      uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)((uVar3 & 0xffff) >> 10));
      puVar7[1] = *(undefined1 *)(param_5 + ((ulong)((uVar3 & 0xffff) >> 4) & 0x3f));
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar4 >> 0xe) & 0x3f));
      puVar7[3] = *(undefined1 *)(param_5 + ((ulong)(uVar4 >> 8) & 0x3f));
      puVar7 = puVar7 + 4;
      puVar6 = param_1;
    } while (param_1 < (uint *)((long)puVar1 + -3));
  }
  puVar9 = param_3 + (param_4 - (long)puVar7);
  lVar10 = (long)puVar1 - (long)param_1;
  if (lVar10 < 2) {
    if (puVar1 == param_1) goto LAB_10ae876e0;
    if (lVar10 != 1) {
LAB_10ae876f0:
      FUN_10ae87b7c(3,&UNK_10f6d2b0b,0xc6,&UNK_10f6d2b17);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae87714);
      (*pcVar5)();
    }
    if (puVar9 < (undefined1 *)0x2) {
      return 0;
    }
    uVar3 = *param_1;
    *puVar7 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar3 >> 2));
    puVar7[1] = *(undefined1 *)(param_5 + ((ulong)(byte)uVar3 & 3) * 0x10);
    if (param_6 == 0) {
      puVar7 = puVar7 + 2;
      goto LAB_10ae876e0;
    }
    if (((ulong)puVar9 & 0xfffffffffffffffe) == 2) {
      return 0;
    }
    *(undefined2 *)(puVar7 + 2) = 0x3d3d;
  }
  else {
    if (lVar10 == 2) {
      if (puVar9 < (undefined1 *)0x3) {
        return 0;
      }
      uVar4 = (ushort)*param_1 & 0xff00ff;
      uVar3 = (uint)(ushort)((ushort)*param_1 >> 8) | uVar4 << 8;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)(uVar4 >> 2));
      puVar7[1] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 4) & 0x3f));
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar3 << 2) & 0x3c));
      if (param_6 == 0) {
        puVar7 = puVar7 + 3;
        goto LAB_10ae876e0;
      }
      if (puVar9 == (undefined1 *)0x3) {
        return 0;
      }
      uVar8 = 0x3d;
    }
    else {
      if (lVar10 != 3) goto LAB_10ae876f0;
      if (puVar9 < (undefined1 *)0x4) {
        return 0;
      }
      uVar4 = *param_1;
      uVar2 = *(ushort *)((long)param_1 + 1);
      uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
      *puVar7 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar4 >> 2));
      puVar7[1] = *(undefined1 *)
                   (param_5 +
                   (ulong)(((uint3)(CONCAT14((byte)uVar4,uVar3 << 0x10) >> 0x10) & 0x3f000) >> 0xc))
      ;
      puVar7[2] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 6) & 0x3f));
      uVar8 = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 8) & 0x3f));
    }
    puVar7[3] = uVar8;
  }
  puVar7 = puVar7 + 4;
LAB_10ae876e0:
  return (long)puVar7 - (long)param_3;
}



/* Entry: 10ae87714; end: 10ae877a3;  */

undefined8 FUN_10ae87714(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_2 < 0x80) {
    uVar3 = 1;
  }
  else if (param_2 < 0x800) {
    param_1[1] = (byte)param_2 & 0x3f | 0x80;
    param_2 = param_2 >> 6 | 0xffffffc0;
    uVar3 = 2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    if (param_2 >> 0x10 == 0) {
      param_1[2] = bVar1;
      param_1[1] = bVar2;
      param_2 = param_2 >> 0xc | 0xffffffe0;
      uVar3 = 3;
    }
    else {
      param_1[3] = bVar1;
      param_1[2] = bVar2;
      param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      param_2 = param_2 >> 0x12 | 0xfffffff0;
      uVar3 = 4;
    }
  }
  *param_1 = (char)param_2;
  return uVar3;
}



/* Entry: 10ae877a4; end: 10ae8785f;  */

void FUN_10ae877a4(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar3 = &uStack_30;
  ___error();
  uVar1 = *param_1;
  if (param_3 != 0) {
    if (param_3 == 1) {
      _sched_yield();
    }
    else {
      lRam00000001137edc18 = lRam00000001137edc18 * 0x5deece66d + 0xb;
      if (0x1f < param_3) {
        param_3 = 0x20;
      }
      uVar2 = 0x20000 << (ulong)(param_3 >> 3 & 0x1f);
      uStack_28 = (ulong)(uVar2 - 1 & (uint)lRam00000001137edc18 | uVar2);
      uStack_30 = 0;
      _nanosleep(&uStack_30,0);
      param_1 = (undefined4 *)puVar3;
    }
  }
  ___error();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ae87860; end: 10ae87863;  */

void FUN_10ae87860(void)

{
  return;
}



/* Entry: 10ae87864; end: 10ae8791f;  */

int FUN_10ae87864(int *param_1,uint param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = 0;
LAB_10ae87890:
  do {
    iVar1 = *param_1;
    pcVar5 = (char *)(param_3 + 8);
    uVar6 = (ulong)param_2;
    if (param_2 != 0) {
      do {
        if (iVar1 == *(int *)(pcVar5 + -8)) {
          iVar2 = *(int *)(pcVar5 + -4);
          if (iVar2 == iVar1) goto LAB_10ae878f0;
          goto LAB_10ae878dc;
        }
        uVar6 = uVar6 - 1;
        pcVar5 = pcVar5 + 0xc;
      } while (uVar6 != 0);
    }
    iVar7 = iVar7 + 1;
    FUN_10ae877a4(param_1,iVar1,iVar7,param_4);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_10ae878dc:
    if (*param_1 != iVar1) {
      ClearExclusiveLocal();
      goto LAB_10ae87890;
    }
  }
LAB_10ae878f0:
  if (*pcVar5 == '\x01') {
    return iVar1;
  }
  goto LAB_10ae87890;
}



/* Entry: 10ae87920; end: 10ae87adb;  */

void FUN_10ae87920(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = iRam0000000113839314;
  if (iRam0000000113839310 != 0xdd) {
    func_0x00010ae87978(0x113839310);
    iVar3 = iRam0000000113839314;
  }
  do {
    iVar2 = iVar3 + -1;
    if ((*param_1 & 1) == 0) {
      return;
    }
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}



/* Entry: 10ae87adc; end: 10ae87b13;  */

long * FUN_10ae87adc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}



/* Entry: 10ae87b14; end: 10ae87b7b;  */

void FUN_10ae87b14(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = param_1;
    ___error();
    uVar1 = *puVar2;
    puVar2 = (undefined4 *)0x2;
    _write(2,param_1,param_2);
    ___error();
    *puVar2 = uVar1;
  }
  return;
}



/* Entry: 10ae87b7c; end: 10ae87cb3;  */

void FUN_10ae87b7c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uStack_c0c;
  undefined1 *puStack_c08;
  undefined1 auStack_c00 [3000];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c08 = auStack_c00;
  uStack_c0c = 3000;
  FUN_10ae87cf8(&puStack_c08,&uStack_c0c,&UNK_10f6d2b3c);
  puVar5 = puStack_c08;
  uVar3 = uStack_c0c;
  if (-1 < (int)uStack_c0c) {
    _vsnprintf(puStack_c08,uStack_c0c,param_4);
    uVar4 = (uint)puStack_c08;
    uVar1 = 0;
    if (0x19 < uVar3) {
      uVar1 = uVar3 - 0x1a;
    }
    uVar2 = uVar4;
    if (uVar4 >= 0x80000000 || uVar4 > uVar3) {
      uVar2 = uVar1;
    }
    uStack_c0c = uVar3 - uVar2;
    puStack_c08 = puVar5 + uVar2;
    if (uVar4 < 0x80000000 && uVar4 <= uVar3) {
      puVar6 = &UNK_10f6d2b32;
      goto LAB_10ae87c54;
    }
  }
  puVar6 = &UNK_10f6d2b34;
LAB_10ae87c54:
  FUN_10ae87cf8(&puStack_c08,&uStack_c0c,puVar6);
  puVar5 = auStack_c00;
  _strlen(puVar5);
  FUN_10ae87b14(auStack_c00,puVar5);
  if (param_1 == 3) {
    _abort();
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ae87b7c();
  return;
}



/* Entry: 10ae87cb4; end: 10ae87cf7;  */

void FUN_10ae87cb4(void)

{
  FUN_10ae87b7c();
  return;
}



/* Entry: 10ae87cf8; end: 10ae87d5f;  */

void FUN_10ae87cf8(ulong *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (-1 < *param_2) {
    uVar2 = *param_1;
    _vsnprintf(uVar2,(long)*param_2,param_3,&stack0x00000000);
    iVar1 = (int)uVar2;
    if ((-1 < iVar1) && (iVar1 <= *param_2)) {
      *param_2 = *param_2 - iVar1;
      *param_1 = *param_1 + (uVar2 & 0xffffffff);
    }
  }
  return;
}



/* Entry: 10ae87d60; end: 10ae87daf;  */

void FUN_10ae87d60(void)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  
  pbVar1 = (byte *)0x10;
  ___cxa_allocate_exception();
  func_0x000109262e48();
  pbVar2 = pbVar1;
  ___cxa_throw(pbVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(pbVar1);
  __Unwind_Resume();
  lVar3 = (long)(char)pbVar2[0x17];
  pbVar1 = pbVar2;
  if (lVar3 < 0) {
    pbVar1 = *(byte **)pbVar2;
    lVar3 = *(long *)(pbVar2 + 8);
  }
  if (0 < lVar3) {
    do {
      bVar4 = 0x20;
      if (0x19 < *pbVar1 - 0x41) {
        bVar4 = 0;
      }
      *pbVar1 = bVar4 ^ *pbVar1;
      lVar3 = lVar3 + -1;
      pbVar1 = pbVar1 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10ae87db0; end: 10ae87e27;  */

void FUN_10ae87db0(byte *param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = (long)(char)param_1[0x17];
  pbVar1 = param_1;
  if (lVar2 < 0) {
    pbVar1 = *(byte **)param_1;
    lVar2 = *(long *)(param_1 + 8);
  }
  if (0 < lVar2) {
    do {
      bVar3 = 0x20;
      if (0x19 < *pbVar1 - 0x41) {
        bVar3 = 0;
      }
      *pbVar1 = bVar3 ^ *pbVar1;
      lVar2 = lVar2 + -1;
      pbVar1 = pbVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10ae87e28; end: 10ae88873;  */

undefined1  [16] FUN_10ae87e28(byte *param_1,byte *param_2,double *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte *pbVar15;
  ulong *puVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  byte *pbVar26;
  double dVar27;
  undefined1 auVar28 [16];
  ulong uStack_78;
  uint uStack_70;
  int iStack_68;
  long lStack_60;
  byte *pbStack_50;
  byte bStack_41;
  
  uVar25 = (uint)param_4;
  pbVar15 = param_1;
  if (param_1 == param_2) {
    bVar12 = false;
    if ((uVar25 >> 2 & 1) == 0) goto LAB_10ae87e7c;
LAB_10ae87f20:
    if ((uVar25 >> 2 & 1) != 0) {
      FUN_10ae8b2dc(&uStack_78,pbVar15,param_2,param_4);
      if (pbStack_50 == (byte *)0x0) {
        uVar17 = 0x16;
        goto LAB_10ae8831c;
      }
      puVar16 = &uStack_78;
      FUN_10ae88874(puVar16,bVar12,param_3);
      param_1 = pbStack_50;
      if (((ulong)puVar16 & 1) != 0) {
        uVar17 = 0;
        goto LAB_10ae8831c;
      }
      uVar22 = (ulong)uStack_70;
      FUN_10ae88980();
      if ((int)uVar22 == 99999) {
        dVar27 = -1.79769313486232e+308;
        if (bVar12 == false) {
          dVar27 = 1.79769313486232e+308;
        }
LAB_10ae881b0:
        uVar17 = 0x22;
      }
      else {
        if ((uStack_78 == 0) || ((int)uVar22 == -99999)) {
          dVar27 = -0.0;
          if (bVar12 == false) {
            dVar27 = 0.0;
          }
          goto LAB_10ae881b0;
        }
        dVar27 = -(double)uStack_78;
        if (bVar12 == false) {
          dVar27 = (double)uStack_78;
        }
        _ldexp(uVar22);
        uVar17 = 0;
      }
      *param_3 = dVar27;
      goto LAB_10ae8831c;
    }
LAB_10ae87f24:
    FUN_10ae8ad34(&uStack_78,pbVar15,param_2,param_4);
    if (pbStack_50 == (byte *)0x0) {
      uVar17 = 0x16;
      goto LAB_10ae8831c;
    }
    puVar16 = &uStack_78;
    FUN_10ae88874(puVar16,bVar12,param_3);
    param_1 = pbStack_50;
    if (((ulong)puVar16 & 1) != 0) {
LAB_10ae87f4c:
      uVar17 = 0;
      goto LAB_10ae8831c;
    }
    if (lStack_60 == 0) {
      if ((int)uStack_70 < -0x156) goto LAB_10ae882fc;
      if (0x134 < (int)uStack_70) goto LAB_10ae882d8;
      uVar23 = uStack_78 << (LZCOUNT(uStack_78) & 0x3fU);
      iVar2 = (int)(uStack_70 * 0x3526a) >> 0x10;
      uVar20 = *(ulong *)(&UNK_10e52cd38 + (ulong)(uStack_70 + 0x156) * 8);
      uVar22 = uVar20 * uVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      uVar19 = SUB168(auVar5 * auVar9,8);
      if ((~SUB164(auVar5 * auVar9,8) & 0x1ff) == 0 && CARRY8(uVar22,uVar23)) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulong *)(&UNK_10e52e190 + (ulong)(uStack_70 + 0x156) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar23;
        uVar24 = SUB168(auVar6 * auVar10,8);
        bVar14 = CARRY8(uVar24,uVar22);
        uVar22 = uVar24 + uVar22;
        if (bVar14) {
          uVar19 = uVar19 + 1;
        }
        if ((!CARRY8(*(ulong *)(&UNK_10e52e190 + (ulong)(uStack_70 + 0x156) * 8) * uVar23,uVar23))
           || ((uVar19 & 0x1ff) != 0x1ff || uVar22 != 0xffffffffffffffff)) goto LAB_10ae880e4;
LAB_10ae881f4:
        uVar22 = uVar20 * uStack_78;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar20;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uStack_78;
        uVar19 = SUB168(auVar7 * auVar11,8);
        iVar2 = iVar2 + -0x3f;
        iVar3 = 0x40 - (int)LZCOUNT(uVar22);
        if (uVar19 != 0) {
          iVar3 = 0x80 - (int)LZCOUNT(uVar19);
        }
        iVar18 = iVar3 + -0x35;
        uVar25 = iVar3 - 0x3f;
        uVar23 = uVar19 >> ((ulong)uVar25 & 0x3f);
        bVar14 = (uVar25 & 0x40) == 0;
        uVar20 = uVar23;
        if (bVar14) {
          uVar20 = (uVar19 << 1) << ((ulong)~uVar25 & 0x3f) | uVar22 >> ((ulong)uVar25 & 0x3f);
        }
        uVar24 = 0;
        if (bVar14) {
          uVar24 = uVar23;
        }
        bVar14 = uStack_70 < 0x1c;
        if (!bVar14) {
          iVar18 = 10;
          uVar22 = uVar20;
          uVar19 = uVar24;
          iVar2 = uVar25 + iVar2;
        }
        goto LAB_10ae88270;
      }
LAB_10ae880e4:
      uVar23 = uVar19 >> -((long)uVar19 >> 0x3f) + 9U;
      if ((uVar22 == 0 && (uVar19 & 0x1ff) == 0) && (uVar23 & 3) == 1) goto LAB_10ae881f4;
      lVar21 = (long)((iVar2 - (int)LZCOUNT(uStack_78)) + 0x43f) - (-((long)uVar19 >> 0x3f) ^ 1U);
      uVar23 = (uVar23 & 1) + uVar23;
      if ((uVar23 & 0x1c0000000000000) != 0) {
        lVar21 = lVar21 + 1;
      }
      if (lVar21 - 0x7ffU < 0xfffffffffffff802) goto LAB_10ae881f4;
      uVar22 = uVar23 >> 1 & 0xfffffffffffff | 0x10000000000000;
      uVar25 = (int)lVar21 - 0x433;
LAB_10ae88338:
      uVar19 = (ulong)uVar25;
      dVar27 = -(double)uVar22;
      if (bVar12 == false) {
        dVar27 = (double)uVar22;
      }
      goto LAB_10ae88348;
    }
    if ((int)uStack_70 < -0x156) {
LAB_10ae882fc:
      dVar27 = -0.0;
      if (bVar12 == false) {
        dVar27 = 0.0;
      }
    }
    else {
      if ((int)uStack_70 < 0x135) {
        bVar14 = false;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulong *)(&UNK_10e52cd38 + (ulong)(uStack_70 + 0x156) * 8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uStack_78;
        uVar19 = SUB168(auVar4 * auVar8,8);
        uStack_78 = *(ulong *)(&UNK_10e52cd38 + (ulong)(uStack_70 + 0x156) * 8) * uStack_78;
        iVar2 = 0x40 - (int)LZCOUNT(uStack_78);
        if (uVar19 != 0) {
          iVar2 = 0x80 - (int)LZCOUNT(uVar19);
        }
        uVar25 = iVar2 - 0x3a;
        uVar20 = uVar19 >> ((ulong)uVar25 & 0x3f);
        bVar13 = (uVar25 & 0x40) == 0;
        uVar22 = uVar20;
        if (bVar13) {
          uVar22 = (uVar19 << 1) << ((ulong)~uVar25 & 0x3f) | uStack_78 >> ((ulong)uVar25 & 0x3f);
        }
        uVar19 = 0;
        if (bVar13) {
          uVar19 = uVar20;
        }
        iVar18 = 5;
        iVar2 = uVar25 + ((int)(uStack_70 * 0x3526a) >> 0x10) + -0x3f;
LAB_10ae88270:
        if (iVar18 <= -0x432 - iVar2) {
          iVar18 = -0x432 - iVar2;
        }
        uVar1 = iVar18 + iVar2;
        FUN_10ae88a08(uVar22,uVar19,iVar18,bVar14,&bStack_41);
        if ((bStack_41 & 1) == 0) {
          uVar19 = uVar22;
          FUN_10ae88af4(uVar22,uVar1,&uStack_78);
          uVar22 = uVar22 + (uVar19 & 0xffffffff);
        }
        if (uVar22 == 0x20000000000000) {
          uVar1 = uVar1 + 1;
          uVar22 = 0x10000000000000;
        }
        uVar25 = 0xfffe7961;
        if (uVar22 != 0) {
          uVar25 = uVar1;
        }
        if ((int)uVar1 < 0x3cc) {
          if (uVar25 != 0xfffe7961) goto LAB_10ae88338;
          goto LAB_10ae882fc;
        }
      }
LAB_10ae882d8:
      dVar27 = -1.79769313486232e+308;
      if (bVar12 == false) {
        dVar27 = 1.79769313486232e+308;
      }
    }
    uVar17 = 0x22;
    param_1 = pbStack_50;
  }
  else {
    bVar12 = *param_1 == 0x2d;
    if (bVar12) {
      pbVar15 = param_1 + 1;
    }
    if ((uVar25 >> 2 & 1) != 0) goto LAB_10ae87f20;
LAB_10ae87e7c:
    if ((long)param_2 - (long)pbVar15 < 2) goto LAB_10ae87f20;
    if ((*pbVar15 != 0x30) || (pbVar26 = pbVar15 + 1, (*pbVar26 | 0x20) != 0x78))
    goto LAB_10ae87f24;
    FUN_10ae8b2dc(&uStack_78,pbVar15 + 2,param_2,param_4);
    if ((pbStack_50 == (byte *)0x0) || (iStack_68 != 0)) {
      if (uVar25 == 1) {
        uVar17 = 0x16;
        goto LAB_10ae8831c;
      }
      uVar17 = 0;
      dVar27 = -0.0;
      param_1 = pbVar26;
      if (bVar12 == false) {
        dVar27 = 0.0;
      }
    }
    else {
      puVar16 = &uStack_78;
      FUN_10ae88874(puVar16,bVar12,param_3);
      param_1 = pbStack_50;
      if (((ulong)puVar16 & 1) != 0) goto LAB_10ae87f4c;
      uVar19 = (ulong)uStack_70;
      FUN_10ae88980();
      if ((int)uVar19 == 99999) goto LAB_10ae882d8;
      if ((uStack_78 == 0) || ((int)uVar19 == -99999)) goto LAB_10ae882fc;
      dVar27 = -(double)uStack_78;
      if (bVar12 == false) {
        dVar27 = (double)uStack_78;
      }
LAB_10ae88348:
      _ldexp(uVar19);
      uVar17 = 0;
    }
  }
  *param_3 = dVar27;
LAB_10ae8831c:
  auVar28._8_8_ = uVar17;
  auVar28._0_8_ = param_1;
  return auVar28;
}



/* Entry: 10ae88874; end: 10ae8897f;  */

undefined1  [16] FUN_10ae88874(double param_1,long *param_2,long param_3,double *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = (int)param_3;
  if ((int)param_2[2] == 1) {
    param_1 = INFINITY;
    dVar6 = -INFINITY;
LAB_10ae8892c:
    if (iVar5 == 0) {
      dVar6 = param_1;
    }
  }
  else {
    if ((int)param_2[2] == 2) {
      param_3 = param_2[3];
      if (param_3 == 0) {
        auStack_b8[0] = 0;
      }
      else {
        lVar4 = param_2[4] - param_3;
        if (0x7e < lVar4) {
          lVar4 = 0x7f;
        }
        if (param_2[4] != param_3) {
          _memmove(auStack_b8,param_3,lVar4);
        }
        auStack_b8[lVar4] = 0;
      }
      _nan(auStack_b8);
      dVar6 = -param_1;
      goto LAB_10ae8892c;
    }
    if (*param_2 != 0) {
      lVar4 = 0;
      goto LAB_10ae88938;
    }
    dVar6 = -0.0;
    if (iVar5 == 0) {
      dVar6 = 0.0;
    }
  }
  *param_4 = dVar6;
  lVar4 = 1;
LAB_10ae88938:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  iVar5 = 0xb - (int)LZCOUNT(lVar4);
  iVar3 = -0x432 - (int)param_3;
  if (iVar5 <= iVar3) {
    iVar5 = iVar3;
  }
  iVar5 = iVar5 + (int)param_3;
  FUN_10ae88a08();
  if (lVar4 == 0x20000000000000) {
    iVar5 = iVar5 + 1;
    lVar4 = 0x10000000000000;
  }
  iVar3 = -99999;
  if (lVar4 != 0) {
    iVar3 = iVar5;
  }
  iVar1 = 99999;
  if (iVar5 < 0x3cc) {
    iVar1 = iVar3;
  }
  lVar2 = 0;
  if (iVar5 < 0x3cc) {
    lVar2 = lVar4;
  }
  auVar8._8_4_ = iVar1;
  auVar8._0_8_ = lVar2;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10ae88980; end: 10ae88a07;  */

undefined1  [16] FUN_10ae88980(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 uStack_21;
  
  iVar3 = 0xb - (int)LZCOUNT(param_1);
  if (iVar3 <= -0x432 - param_2) {
    iVar3 = -0x432 - param_2;
  }
  param_2 = iVar3 + param_2;
  FUN_10ae88a08(param_1,0,iVar3,1,&uStack_21);
  if (param_1 == 0x20000000000000) {
    param_2 = param_2 + 1;
    param_1 = 0x10000000000000;
  }
  iVar3 = -99999;
  if (param_1 != 0) {
    iVar3 = param_2;
  }
  iVar1 = 99999;
  if (param_2 < 0x3cc) {
    iVar1 = iVar3;
  }
  lVar2 = 0;
  if (param_2 < 0x3cc) {
    lVar2 = param_1;
  }
  auVar4._8_4_ = iVar1;
  auVar4._0_8_ = lVar2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 10ae88a08; end: 10ae88af3;  */

ulong FUN_10ae88a08(ulong param_1,ulong param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((int)param_3 < 1) {
    *param_5 = (char)param_4;
    uVar1 = 0;
    if ((-param_3 & 0x40) == 0) {
      uVar1 = param_1 << ((ulong)-param_3 & 0x3f);
    }
    return uVar1;
  }
  *param_5 = 1;
  if (0x7f < param_3) {
    return 0;
  }
  uVar7 = (ulong)param_3;
  uVar4 = -1L << (uVar7 & 0x3f);
  uVar6 = 1L << ((ulong)(param_3 - 1) & 0x3f);
  bVar3 = (param_3 - 1 & 0x40) == 0;
  uVar1 = uVar6;
  if (bVar3) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = uVar6;
  }
  bVar3 = (param_3 & 0x40) == 0;
  uVar6 = uVar4;
  if (bVar3) {
    uVar6 = uVar4 | 0x7fffffffffffffffU >> ((ulong)~param_3 & 0x3f);
  }
  uVar5 = 0;
  if (bVar3) {
    uVar5 = uVar4;
  }
  uVar6 = param_2 & (uVar6 ^ 0xffffffffffffffff);
  uVar5 = param_1 & (uVar5 ^ 0xffffffffffffffff);
  uVar4 = param_2 >> (uVar7 & 0x3f);
  if (bVar3) {
    uVar4 = (param_2 << 1) << ((ulong)~param_3 & 0x3f) | param_1 >> (uVar7 & 0x3f);
  }
  if (!CARRY8(uVar1,~uVar6) && !CARRY8(uVar1 + ~uVar6,(ulong)(uVar5 <= uVar2))) {
    return uVar4 + 1;
  }
  if (uVar6 == uVar1 && uVar5 == uVar2) {
    return ((ulong)((uint)uVar4 | param_4 ^ 0xffffffff) & 1) + uVar4;
  }
  if (((param_4 & 1) == 0) && (uVar6 == (uVar1 - 1) + (ulong)(uVar2 != 0) && uVar5 == uVar2 - 1)) {
    *param_5 = 0;
  }
  return uVar4;
}



/* Entry: 10ae88af4; end: 10ae88d5b;  */

uint FUN_10ae88af4(ulong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_314 [85];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar2 = &uStack_1c0;
  FUN_10ae8a69c(puVar2,param_3,0x300);
  uVar6 = param_1 << 1 | 1;
  iVar5 = param_2 + -1;
  iVar1 = (int)puVar2;
  if (iVar1 < 0) {
    FUN_10ae8aa74(auStack_314,-iVar1);
    FUN_10ae8a908(auStack_314,uVar6);
    if (iVar1 < param_2) {
      iVar5 = iVar5 - iVar1;
      puVar3 = auStack_314;
    }
    else {
      iVar5 = iVar1 - iVar5;
      puVar3 = (uint *)&uStack_1c0;
    }
    func_0x00010ae8a730(puVar3,iVar5);
    uVar9 = (uint)uStack_1c0;
    if ((int)(uint)uStack_1c0 <= (int)auStack_314[0]) {
      uVar9 = auStack_314[0];
    }
    uVar6 = (ulong)uVar9;
    do {
      iVar5 = (int)uVar6;
      if (iVar5 < 1) goto LAB_10ae88d18;
      if ((int)(uint)uStack_1c0 < iVar5) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)((long)&uStack_1c0 + uVar6 * 4);
      }
      if ((int)auStack_314[0] < iVar5) {
        uVar7 = 0;
      }
      else {
        uVar7 = auStack_314[uVar6];
      }
      if (uVar9 < uVar7) goto LAB_10ae88d20;
      uVar6 = uVar6 - 1;
    } while (uVar9 <= uVar7);
  }
  else {
    FUN_10ae8aa00(&uStack_1c0,puVar2);
    uVar4 = (param_1 & 0x7fffffffffffffff) >> 0x1f;
    auStack_314[0x45] = 0;
    auStack_314[0x46] = 0;
    auStack_314[0x43] = 0;
    auStack_314[0x44] = 0;
    auStack_314[0x49] = 0;
    auStack_314[0x4a] = 0;
    auStack_314[0x47] = 0;
    auStack_314[0x48] = 0;
    uVar9 = 1;
    if (uVar4 != 0) {
      uVar9 = 2;
    }
    auStack_314[0x4d] = 0;
    auStack_314[0x4e] = 0;
    auStack_314[0x4b] = 0;
    auStack_314[0x4c] = 0;
    auStack_314[0x51] = 0;
    auStack_314[0x52] = 0;
    auStack_314[0x4f] = 0;
    auStack_314[0x50] = 0;
    auStack_314[0x53] = 0;
    auStack_314[0x54] = 0;
    auStack_314[5] = 0;
    auStack_314[6] = 0;
    auStack_314[3] = 0;
    auStack_314[4] = 0;
    auStack_314[9] = 0;
    auStack_314[10] = 0;
    auStack_314[7] = 0;
    auStack_314[8] = 0;
    auStack_314[0xd] = 0;
    auStack_314[0xe] = 0;
    auStack_314[0xb] = 0;
    auStack_314[0xc] = 0;
    auStack_314[0x11] = 0;
    auStack_314[0x12] = 0;
    auStack_314[0xf] = 0;
    auStack_314[0x10] = 0;
    auStack_314[0x15] = 0;
    auStack_314[0x16] = 0;
    auStack_314[0x13] = 0;
    auStack_314[0x14] = 0;
    auStack_314[0x19] = 0;
    auStack_314[0x1a] = 0;
    auStack_314[0x17] = 0;
    auStack_314[0x18] = 0;
    auStack_314[0x1d] = 0;
    auStack_314[0x1e] = 0;
    auStack_314[0x1b] = 0;
    auStack_314[0x1c] = 0;
    auStack_314[0x21] = 0;
    auStack_314[0x22] = 0;
    auStack_314[0x1f] = 0;
    auStack_314[0x20] = 0;
    auStack_314[0x25] = 0;
    auStack_314[0x26] = 0;
    auStack_314[0x23] = 0;
    auStack_314[0x24] = 0;
    auStack_314[0x29] = 0;
    auStack_314[0x2a] = 0;
    auStack_314[0x27] = 0;
    auStack_314[0x28] = 0;
    auStack_314[0x2d] = 0;
    auStack_314[0x2e] = 0;
    auStack_314[0x2b] = 0;
    auStack_314[0x2c] = 0;
    auStack_314[0x31] = 0;
    auStack_314[0x32] = 0;
    auStack_314[0x2f] = 0;
    auStack_314[0x30] = 0;
    auStack_314[0x35] = 0;
    auStack_314[0x36] = 0;
    auStack_314[0x33] = 0;
    auStack_314[0x34] = 0;
    auStack_314[0x39] = 0;
    auStack_314[0x3a] = 0;
    auStack_314[0x37] = 0;
    auStack_314[0x38] = 0;
    auStack_314[0x3d] = 0;
    auStack_314[0x3e] = 0;
    auStack_314[0x3b] = 0;
    auStack_314[0x3c] = 0;
    auStack_314[0x41] = 0;
    auStack_314[0x42] = 0;
    auStack_314[0x3f] = 0;
    auStack_314[0x40] = 0;
    auStack_314[1] = (uint)uVar6;
    auStack_314[2] = (uint)uVar4;
    auStack_314[0] = uVar9;
    if (iVar1 < param_2) {
      func_0x00010ae8a730(auStack_314,iVar5 - iVar1);
      uVar9 = auStack_314[0];
    }
    else {
      func_0x00010ae8a730(&uStack_1c0,iVar1 - iVar5);
    }
    uVar7 = (uint)uStack_1c0;
    if ((int)(uint)uStack_1c0 <= (int)uVar9) {
      uVar7 = uVar9;
    }
    uVar6 = (ulong)uVar7;
    do {
      iVar5 = (int)uVar6;
      if (iVar5 < 1) goto LAB_10ae88d18;
      if ((int)(uint)uStack_1c0 < iVar5) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)((long)&uStack_1c0 + uVar6 * 4);
      }
      if ((int)uVar9 < iVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = auStack_314[uVar6];
      }
      if (uVar7 < uVar8) goto LAB_10ae88d20;
      uVar6 = uVar6 - 1;
    } while (uVar7 <= uVar8);
  }
  uVar9 = 1;
LAB_10ae88d24:
  uVar7 = 1;
  if (uVar9 == 0) {
    uVar7 = (uint)param_1 & 1;
  }
  uVar8 = 0;
  if ((uVar9 & 0x80000000) == 0) {
    uVar8 = uVar7;
  }
  return uVar8;
LAB_10ae88d18:
  uVar9 = 0;
  goto LAB_10ae88d24;
LAB_10ae88d20:
  uVar9 = 0xffffffff;
  goto LAB_10ae88d24;
}



/* Entry: 10ae88d5c; end: 10ae88e63;  */

undefined1  [16] FUN_10ae88d5c(float param_1,long *param_2,long param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = (int)param_3;
  if ((int)param_2[2] == 1) {
    param_1 = INFINITY;
    fVar6 = -INFINITY;
LAB_10ae88e14:
    if (iVar5 == 0) {
      fVar6 = param_1;
    }
  }
  else {
    if ((int)param_2[2] == 2) {
      param_3 = param_2[3];
      if (param_3 == 0) {
        auStack_b8[0] = 0;
      }
      else {
        lVar4 = param_2[4] - param_3;
        if (0x7e < lVar4) {
          lVar4 = 0x7f;
        }
        if (param_2[4] != param_3) {
          _memmove(auStack_b8,param_3,lVar4);
        }
        auStack_b8[lVar4] = 0;
      }
      _nanf(auStack_b8);
      fVar6 = -param_1;
      goto LAB_10ae88e14;
    }
    if (*param_2 != 0) {
      lVar4 = 0;
      goto LAB_10ae88e20;
    }
    fVar6 = -0.0;
    if (iVar5 == 0) {
      fVar6 = 0.0;
    }
  }
  *param_4 = fVar6;
  lVar4 = 1;
LAB_10ae88e20:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  iVar5 = 0x28 - (int)LZCOUNT(lVar4);
  iVar3 = -0x95 - (int)param_3;
  if (iVar5 <= iVar3) {
    iVar5 = iVar3;
  }
  iVar5 = iVar5 + (int)param_3;
  FUN_10ae88a08();
  if (lVar4 == 0x1000000) {
    iVar5 = iVar5 + 1;
    lVar4 = 0x800000;
  }
  iVar3 = -99999;
  if (lVar4 != 0) {
    iVar3 = iVar5;
  }
  iVar1 = 99999;
  if (iVar5 < 0x69) {
    iVar1 = iVar3;
  }
  lVar2 = 0;
  if (iVar5 < 0x69) {
    lVar2 = lVar4;
  }
  auVar8._8_4_ = iVar1;
  auVar8._0_8_ = lVar2;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10ae88e64; end: 10ae88eeb;  */

undefined1  [16] FUN_10ae88e64(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 uStack_21;
  
  iVar3 = 0x28 - (int)LZCOUNT(param_1);
  if (iVar3 <= -0x95 - param_2) {
    iVar3 = -0x95 - param_2;
  }
  param_2 = iVar3 + param_2;
  FUN_10ae88a08(param_1,0,iVar3,1,&uStack_21);
  if (param_1 == 0x1000000) {
    param_2 = param_2 + 1;
    param_1 = 0x800000;
  }
  iVar3 = -99999;
  if (param_1 != 0) {
    iVar3 = param_2;
  }
  iVar1 = 99999;
  if (param_2 < 0x69) {
    iVar1 = iVar3;
  }
  lVar2 = 0;
  if (param_2 < 0x69) {
    lVar2 = param_1;
  }
  auVar4._8_4_ = iVar1;
  auVar4._0_8_ = lVar2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 10ae88eec; end: 10ae897ef;  */

void FUN_10ae88eec(byte *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *extraout_x8;
  undefined8 *puVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  char cStack_c9;
  undefined *puStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  byte bStack_99;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar6 = param_3;
  puVar10 = param_2;
  func_0x000107c34fec();
  uVar17 = (uint)(char)param_3[0x17];
  pbVar22 = param_3;
  if ((char)param_3[0x17] < '\0') {
    pbVar22 = *(byte **)param_3;
  }
  pbVar1 = param_1 + (long)param_2;
  pbVar14 = param_1;
  pbVar21 = pbVar22;
  if ((0 < (long)param_2) && (pbVar19 = pbVar22, pbVar23 = param_1, pbVar22 == param_1)) {
    while (pbVar14 = pbVar23, pbVar21 = pbVar19, *pbVar23 != 0x5c) {
      pbVar14 = pbVar23 + 1;
      pbVar21 = pbVar19 + 1;
      if ((pbVar23 != pbVar19) || (pbVar19 = pbVar21, pbVar23 = pbVar14, pbVar1 <= pbVar14)) break;
    }
  }
  if (pbVar14 < pbVar1) {
    pbVar23 = pbVar1 + -1;
    pbVar19 = pbVar21;
LAB_10ae88fec:
    uVar4 = uStack_e0._7_1_;
    uVar3 = (undefined7)uStack_e0;
    puVar10 = (undefined8 *)0x7;
    uVar17 = (uint)*pbVar14;
    if (*pbVar14 == 0x5c) {
      pbVar6 = pbVar14 + 1;
      if (pbVar23 < pbVar6) {
        uStack_e0._0_7_ = uVar3;
        uStack_e0._7_1_ = uVar4;
        if (param_4 == (byte *)0x0) goto LAB_10ae894cc;
        puVar10 = (undefined8 *)&UNK_10f6d2b4c;
        uVar13 = 0x18;
LAB_10ae89354:
        uStack_e0._0_7_ = uVar3;
        uStack_e0._7_1_ = uVar4;
        func_0x000107c2c4d8(param_4,puVar10,uVar13);
        goto LAB_10ae894c8;
      }
      bVar2 = *pbVar6;
      uVar17 = (uint)bVar2;
      uStack_e0._7_1_ = (undefined1)((ulong)pbVar6 >> 0x38);
      uStack_e0._0_7_ = SUB87(pbVar6,0);
      pbVar18 = pbVar6;
      if (bVar2 < 0x58) {
        if (bVar2 < 0x30) {
          if (bVar2 == 0x22) {
            *pbVar19 = 0x22;
          }
          else {
            if (uVar17 != 0x27) goto LAB_10ae895fc;
            *pbVar19 = 0x27;
          }
        }
        else {
          uVar17 = uVar17 - 0x30;
          if (uVar17 < 8) {
            uVar9 = uVar17;
            if (pbVar6 < pbVar23) {
              pbVar18 = pbVar14 + 2;
              uVar9 = ((uint)*pbVar18 + uVar17 * 8) - 0x30;
              if ((*pbVar18 & 0xf8) != 0x30) {
                pbVar18 = pbVar14 + 1;
                uVar9 = uVar17;
              }
            }
            if (pbVar18 < pbVar23) {
              pbVar14 = pbVar18 + 1;
              if ((*pbVar14 & 0xf8) == 0x30) {
                uVar17 = ((uint)*pbVar14 + uVar9 * 8) - 0x30;
                if (uVar17 < 0x100) goto LAB_10ae8907c;
                uStack_e0._0_7_ = uVar3;
                uStack_e0._7_1_ = uVar4;
                if (param_4 == (byte *)0x0) goto LAB_10ae894c8;
                func_0x000104c54c8c(&uStack_e0,pbVar6,pbVar18 + (2 - (long)pbVar6));
                puVar10 = &uStack_e0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (puVar10,0,&UNK_10f6d2b65,10);
                puStack_b0 = (undefined *)*puVar10;
                uStack_a0 = (undefined7)puVar10[2];
                bStack_99 = (byte)((ulong)puVar10[2] >> 0x38);
                uStack_a8 = (undefined7)puVar10[1];
                uStack_a1 = (undefined1)((ulong)puVar10[1] >> 0x38);
                puVar10[1] = 0;
                puVar10[2] = 0;
                *puVar10 = 0;
                puVar10 = (undefined8 *)&UNK_10f6d2b70;
                ppuVar8 = &puStack_b0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppuVar8,&UNK_10f6d2b70,0xd);
LAB_10ae89468:
                puVar7 = *ppuVar8;
                uStack_80 = SUB87(ppuVar8[1],0);
                uStack_79 = (undefined1)((ulong)ppuVar8[1] >> 0x38);
                uStack_79 = (undefined1)*(undefined8 *)((long)ppuVar8 + 0xf);
                uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar8 + 0xf) >> 8);
                bVar2 = *(byte *)((long)ppuVar8 + 0x17);
                ppuVar8[1] = (undefined *)0x0;
                ppuVar8[2] = (undefined *)0x0;
                *ppuVar8 = (undefined *)0x0;
                if ((char)param_4[0x17] < '\0') {
                  __ZdlPv(*(undefined8 *)param_4);
                }
                *(undefined **)param_4 = puVar7;
                *(ulong *)(param_4 + 8) = CONCAT17(uStack_79,uStack_80);
                *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_78,uStack_79);
                param_4[0x17] = bVar2;
                if ((char)bStack_99 < '\0') {
                  __ZdlPv(puStack_b0);
                }
                if (-1 < cStack_c9) goto LAB_10ae894c8;
                puVar7 = (undefined *)CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
LAB_10ae894c4:
                __ZdlPv(puVar7);
                goto LAB_10ae894c8;
              }
            }
            pbVar21 = pbVar19 + 1;
            *pbVar19 = (byte)uVar9;
            uStack_e0._0_7_ = uVar3;
            uStack_e0._7_1_ = uVar4;
            goto LAB_10ae892f8;
          }
          if (bVar2 != 0x3f) {
            if (bVar2 == 0x55) {
              pbVar18 = pbVar14 + 9;
              if (pbVar1 <= pbVar18) {
                uStack_e0._0_7_ = uVar3;
                uStack_e0._7_1_ = uVar4;
                if (param_4 != (byte *)0x0) {
                  bStack_99 = 1;
                  puStack_b0._0_2_ = (ushort)*pbVar6;
                  ppuVar8 = &puStack_b0;
                  puVar10 = (undefined8 *)0x0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (ppuVar8,0,&UNK_10f6d2be8,0x26);
                  goto LAB_10ae893c0;
                }
                goto LAB_10ae894c8;
              }
              puVar10 = (undefined8 *)0x0;
              lVar12 = 2;
              do {
                bVar2 = pbVar14[lVar12];
                if (-1 < (char)(&UNK_10e52ca36)[bVar2]) {
                  uStack_e0._0_7_ = uVar3;
                  uStack_e0._7_1_ = uVar4;
                  if (param_4 == (byte *)0x0) goto LAB_10ae894c8;
                  func_0x000104c54c8c(&puStack_b0,pbVar6,lVar12 + -1);
                  ppuVar8 = &puStack_b0;
                  puVar10 = (undefined8 *)0x0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (ppuVar8,0,&UNK_10f6d2be8,0x26);
                  goto LAB_10ae893c0;
                }
                uVar9 = (uint)puVar10;
                if (0x10fff < uVar9) {
                  uStack_e0._0_7_ = uVar3;
                  uStack_e0._7_1_ = uVar4;
                  if (param_4 == (byte *)0x0) goto LAB_10ae894c8;
                  func_0x000104c54c8c(&uStack_e0,pbVar6);
                  puVar10 = &uStack_e0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (puVar10,0,&UNK_10f6d2b65,10);
                  puStack_b0 = (undefined *)*puVar10;
                  uStack_a0 = (undefined7)puVar10[2];
                  bStack_99 = (byte)((ulong)puVar10[2] >> 0x38);
                  uStack_a8 = (undefined7)puVar10[1];
                  uStack_a1 = (undefined1)((ulong)puVar10[1] >> 0x38);
                  puVar10[1] = 0;
                  puVar10[2] = 0;
                  *puVar10 = 0;
                  puVar10 = (undefined8 *)&UNK_10f6d2c0f;
                  ppuVar8 = &puStack_b0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppuVar8,&UNK_10f6d2c0f,0x21);
                  goto LAB_10ae89468;
                }
                uVar17 = bVar2 + 9;
                if (bVar2 < 0x3a) {
                  uVar17 = (uint)bVar2;
                }
                puVar10 = (undefined8 *)(ulong)(uVar17 & 0xf | uVar9 << 4);
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 != 10);
              uVar9 = uVar9 & 0x1ff80;
              if ((param_4 == (byte *)0x0) || (uVar9 != 0xd80)) goto LAB_10ae892a4;
              puStack_b0 = &UNK_10f6d2c4c;
              uStack_a8 = 0x2c;
              uStack_a1 = 0;
              uStack_d8 = 9;
              uStack_d1 = 0;
              puVar10 = &uStack_e0;
              func_0x000107c2ba40(&uStack_80,&puStack_b0);
LAB_10ae89728:
              if ((char)param_4[0x17] < '\0') {
                __ZdlPv(*(undefined8 *)param_4);
              }
              *(ulong *)(param_4 + 8) = CONCAT17(uStack_71,uStack_78);
              *(ulong *)param_4 = CONCAT17(uStack_79,uStack_80);
              *(undefined8 *)(param_4 + 0x10) = uStack_70;
              param_4 = (byte *)0x0;
            }
            else {
LAB_10ae895fc:
              uStack_e0._0_7_ = uVar3;
              uStack_e0._7_1_ = uVar4;
              if (param_4 != (byte *)0x0) {
                func_0x000107c31940(&puStack_b0,&UNK_10f6d2c31);
                puVar10 = (undefined8 *)(long)(char)*pbVar6;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (&puStack_b0);
                bVar2 = bStack_99;
                uVar5 = uStack_a0;
                uVar4 = uStack_a1;
                uVar3 = uStack_a8;
                puVar7 = puStack_b0;
                uStack_e0._0_7_ = uStack_a8;
                uStack_e0._7_1_ = uStack_a1;
                uStack_d8 = uStack_a0;
                uStack_a8 = 0;
                uStack_a1 = 0;
                uStack_a0 = 0;
                bStack_99 = 0;
                puStack_b0 = (undefined *)0x0;
                if ((char)param_4[0x17] < '\0') {
                  __ZdlPv(*(undefined8 *)param_4);
                  *(undefined **)param_4 = puVar7;
                  *(ulong *)(param_4 + 8) = CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
                  *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_d8,uStack_e0._7_1_);
                  param_4[0x17] = bVar2;
                  puVar7 = puStack_b0;
joined_r0x00010ae89770:
                  puStack_b0 = puVar7;
                  if ((char)bStack_99 < '\0') goto LAB_10ae894c4;
                }
                else {
                  *(undefined **)param_4 = puVar7;
                  *(ulong *)(param_4 + 8) = CONCAT17(uVar4,uVar3);
                  *(ulong *)(param_4 + 0xf) = CONCAT71(uVar5,uVar4);
                  param_4[0x17] = bVar2;
                }
              }
LAB_10ae894c8:
              param_4 = (byte *)0x0;
            }
            goto LAB_10ae894cc;
          }
          *pbVar19 = 0x3f;
        }
      }
      else if (bVar2 < 0x6e) {
        if (bVar2 < 0x61) {
          if (bVar2 == 0x58) {
LAB_10ae891a8:
            if (pbVar23 <= pbVar6) {
              uStack_e0._0_7_ = uVar3;
              uStack_e0._7_1_ = uVar4;
              if (param_4 != (byte *)0x0) {
                puVar10 = (undefined8 *)&UNK_10f6d2b7e;
                uVar13 = 0x19;
                goto LAB_10ae89354;
              }
              goto LAB_10ae894cc;
            }
            if ((char)(&UNK_10e52ca36)[pbVar14[2]] < '\0') {
              uVar17 = 0;
              pbVar21 = param_1 + (long)param_2 + (-2 - (long)pbVar14);
              pbVar20 = pbVar6;
              do {
                bVar2 = pbVar20[1];
                pbVar18 = pbVar20;
                if (-1 < (char)(&UNK_10e52ca36)[bVar2]) break;
                uVar9 = bVar2 + 9;
                if (bVar2 < 0x3a) {
                  uVar9 = (uint)bVar2;
                }
                uVar17 = uVar9 & 0xf | uVar17 << 4;
                pbVar21 = pbVar21 + -1;
                pbVar20 = pbVar20 + 1;
                pbVar18 = pbVar14 + (long)param_1 + (long)param_2 + ~(ulong)pbVar14;
              } while (pbVar21 != (byte *)0x0);
              if (0xff < uVar17) {
                uStack_e0._0_7_ = uVar3;
                uStack_e0._7_1_ = uVar4;
                if (param_4 != (byte *)0x0) {
                  func_0x000104c54c8c(&uStack_e0,pbVar6,pbVar18 + (1 - (long)pbVar6));
                  puVar10 = &uStack_e0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (puVar10,0,&UNK_10f6d2b65,10);
                  puStack_b0 = (undefined *)*puVar10;
                  uStack_a0 = (undefined7)puVar10[2];
                  bStack_99 = (byte)((ulong)puVar10[2] >> 0x38);
                  uStack_a8 = (undefined7)puVar10[1];
                  uStack_a1 = (undefined1)((ulong)puVar10[1] >> 0x38);
                  puVar10[1] = 0;
                  puVar10[2] = 0;
                  *puVar10 = 0;
                  puVar10 = (undefined8 *)&UNK_10f6d2b70;
                  ppuVar8 = &puStack_b0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppuVar8,&UNK_10f6d2b70,0xd);
                  goto LAB_10ae89468;
                }
                goto LAB_10ae894c8;
              }
              pbVar21 = pbVar19 + 1;
              *pbVar19 = (byte)uVar17;
              uStack_e0._0_7_ = uVar3;
              uStack_e0._7_1_ = uVar4;
              goto LAB_10ae892f8;
            }
            uStack_e0._0_7_ = uVar3;
            uStack_e0._7_1_ = uVar4;
            if (param_4 == (byte *)0x0) goto LAB_10ae894cc;
            puVar10 = (undefined8 *)&UNK_10f6d2b98;
            uVar13 = 0x28;
            goto LAB_10ae89354;
          }
          if (bVar2 != 0x5c) goto LAB_10ae895fc;
          *pbVar19 = 0x5c;
        }
        else if (bVar2 == 0x61) {
          *pbVar19 = 7;
        }
        else if (bVar2 == 0x62) {
          *pbVar19 = 8;
        }
        else {
          if (bVar2 != 0x66) goto LAB_10ae895fc;
          *pbVar19 = 0xc;
        }
      }
      else if (bVar2 < 0x75) {
        if (bVar2 == 0x6e) {
          *pbVar19 = 10;
        }
        else if (bVar2 == 0x72) {
          *pbVar19 = 0xd;
        }
        else {
          if (uVar17 != 0x74) goto LAB_10ae895fc;
          *pbVar19 = 9;
        }
      }
      else {
        if (bVar2 == 0x75) {
          pbVar18 = pbVar14 + 5;
          if (pbVar18 < pbVar1) {
            lVar12 = 0;
            puVar10 = (undefined8 *)0x0;
            do {
              bVar2 = pbVar14[lVar12 + 2];
              if (-1 < (char)(&UNK_10e52ca36)[bVar2]) {
                uStack_e0._0_7_ = uVar3;
                uStack_e0._7_1_ = uVar4;
                if (param_4 == (byte *)0x0) goto LAB_10ae894c8;
                func_0x000104c54c8c(&puStack_b0,pbVar6,lVar12 + 1);
                ppuVar8 = &puStack_b0;
                puVar10 = (undefined8 *)0x0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (ppuVar8,0,&UNK_10f6d2bc1,0x26);
                goto LAB_10ae893c0;
              }
              uVar17 = bVar2 + 9;
              if (bVar2 < 0x3a) {
                uVar17 = (uint)bVar2;
              }
              uVar9 = (uint)puVar10;
              puVar10 = (undefined8 *)(ulong)(uVar17 & 0xf | uVar9 << 4);
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 != 4);
            uVar9 = uVar9 & 0xfffff80;
            if ((param_4 != (byte *)0x0) && (uVar9 == 0xd80)) {
              puStack_b0 = &UNK_10f6d2c4c;
              uStack_a8 = 0x2c;
              uStack_a1 = 0;
              uStack_d8 = 5;
              uStack_d1 = 0;
              puVar10 = &uStack_e0;
              func_0x000107c2ba40(&uStack_80,&puStack_b0);
              goto LAB_10ae89728;
            }
LAB_10ae892a4:
            uStack_e0._0_7_ = uVar3;
            uStack_e0._7_1_ = uVar4;
            if (uVar9 != 0xd80) {
              pbVar21 = pbVar19;
              FUN_10ae87714();
              pbVar21 = pbVar19 + (long)pbVar21;
              goto LAB_10ae892f8;
            }
          }
          else {
            uStack_e0._0_7_ = uVar3;
            uStack_e0._7_1_ = uVar4;
            if (param_4 != (byte *)0x0) {
              bStack_99 = 1;
              puStack_b0._0_2_ = (ushort)*pbVar6;
              ppuVar8 = &puStack_b0;
              puVar10 = (undefined8 *)0x0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (ppuVar8,0,&UNK_10f6d2bc1,0x26);
LAB_10ae893c0:
              puVar7 = *ppuVar8;
              uStack_e0._0_7_ = SUB87(ppuVar8[1],0);
              uStack_e0._7_1_ = (undefined1)*(undefined8 *)((long)ppuVar8 + 0xf);
              uStack_d8 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar8 + 0xf) >> 8);
              bVar2 = *(byte *)((long)ppuVar8 + 0x17);
              ppuVar8[1] = (undefined *)0x0;
              ppuVar8[2] = (undefined *)0x0;
              *ppuVar8 = (undefined *)0x0;
              if ((char)param_4[0x17] < '\0') {
                __ZdlPv(*(undefined8 *)param_4);
              }
              *(undefined **)param_4 = puVar7;
              *(ulong *)(param_4 + 8) = CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
              *(ulong *)(param_4 + 0xf) = CONCAT71(uStack_d8,uStack_e0._7_1_);
              param_4[0x17] = bVar2;
              puVar7 = puStack_b0;
              goto joined_r0x00010ae89770;
            }
          }
          goto LAB_10ae894c8;
        }
        if (bVar2 != 0x76) {
          if (bVar2 == 0x78) goto LAB_10ae891a8;
          goto LAB_10ae895fc;
        }
        *pbVar19 = 0xb;
      }
      pbVar21 = pbVar19 + 1;
      uStack_e0._0_7_ = uVar3;
      uStack_e0._7_1_ = uVar4;
    }
    else {
LAB_10ae8907c:
      pbVar21 = pbVar19 + 1;
      *pbVar19 = (byte)uVar17;
      pbVar18 = pbVar14;
      uStack_e0._0_7_ = uVar3;
      uStack_e0._7_1_ = uVar4;
    }
LAB_10ae892f8:
    puVar10 = (undefined8 *)0x7;
    pbVar6 = (byte *)0x5c;
    pbVar14 = pbVar18 + 1;
    pbVar19 = pbVar21;
    if (pbVar1 <= pbVar14) goto code_r0x00010ae89304;
    goto LAB_10ae88fec;
  }
LAB_10ae89308:
  uVar15 = (long)pbVar21 - (long)pbVar22;
  if ((uVar17 >> 7 & 1) == 0) {
    if ((byte)uVar17 < uVar15) goto LAB_10ae8977c;
    param_3[0x17] = (byte)uVar15;
  }
  else {
    if (*(ulong *)(param_3 + 8) < uVar15) goto LAB_10ae8977c;
    *(ulong *)(param_3 + 8) = uVar15;
    param_3 = *(byte **)param_3;
  }
  param_3[uVar15] = 0;
  param_4 = (byte *)0x1;
LAB_10ae894cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pbVar6 = param_4;
LAB_10ae8977c:
  func_0x000109276104();
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  __Unwind_Resume();
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  puVar11 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    puVar16 = puVar10;
    pbVar22 = pbVar6;
    do {
      puVar11 = (undefined8 *)((long)puVar11 + (ulong)(byte)(&UNK_10e52f6e8)[*pbVar22]);
      puVar16 = (undefined8 *)((long)puVar16 + -1);
      pbVar22 = pbVar22 + 1;
    } while (puVar16 != (undefined8 *)0x0);
  }
  if (puVar11 == puVar10) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pbVar6,puVar10);
  }
  else {
    func_0x000107c34fec(extraout_x8);
    if (puVar10 != (undefined8 *)0x0) {
      pbVar22 = *(byte **)extraout_x8;
      if (-1 < (char)extraout_x8[0x17]) {
        pbVar22 = extraout_x8;
      }
      do {
        bVar2 = *pbVar6;
        if ((&UNK_10e52f6e8)[bVar2] == '\x02') {
          pbVar21 = pbVar22;
          if (bVar2 < 0x22) {
            if (bVar2 == 9) {
              pbVar22[0] = 0x5c;
              pbVar22[1] = 0x74;
              pbVar21 = pbVar22 + 2;
            }
            else if (bVar2 == 10) {
              pbVar22[0] = 0x5c;
              pbVar22[1] = 0x6e;
              pbVar21 = pbVar22 + 2;
            }
            else if (bVar2 == 0xd) {
              pbVar22[0] = 0x5c;
              pbVar22[1] = 0x72;
              pbVar21 = pbVar22 + 2;
            }
          }
          else if (bVar2 == 0x22) {
            pbVar21 = pbVar22 + 2;
            pbVar22[0] = 0x5c;
            pbVar22[1] = 0x22;
          }
          else if (bVar2 == 0x27) {
            pbVar21 = pbVar22 + 2;
            pbVar22[0] = 0x5c;
            pbVar22[1] = 0x27;
          }
          else if (bVar2 == 0x5c) {
            pbVar21 = pbVar22 + 2;
            pbVar22[0] = 0x5c;
            pbVar22[1] = 0x5c;
          }
        }
        else if ((&UNK_10e52f6e8)[bVar2] == '\x01') {
          *pbVar22 = bVar2;
          pbVar21 = pbVar22 + 1;
        }
        else {
          *pbVar22 = 0x5c;
          pbVar22[1] = bVar2 >> 6 | 0x30;
          pbVar22[2] = bVar2 >> 3 & 7 | 0x30;
          pbVar22[3] = bVar2 & 7 | 0x30;
          pbVar21 = pbVar22 + 4;
        }
        pbVar6 = pbVar6 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + -1);
        pbVar22 = pbVar21;
      } while (puVar10 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x00010ae89304:
  uVar17 = (uint)param_3[0x17];
  goto LAB_10ae89308;
}



/* Entry: 10ae897f0; end: 10ae8998b;  */

void FUN_10ae897f0(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar2 = 0;
  if (param_3 != 0) {
    lVar2 = 0;
    lVar3 = param_3;
    pbVar4 = param_2;
    do {
      lVar2 = lVar2 + (ulong)(byte)(&UNK_10e52f6e8)[*pbVar4];
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar4 + 1;
    } while (lVar3 != 0);
  }
  if (lVar2 == param_3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,param_2,param_3);
  }
  else {
    func_0x000107c34fec(param_1);
    if (param_3 != 0) {
      pbVar4 = *(byte **)param_1;
      if (-1 < (char)param_1[0x17]) {
        pbVar4 = param_1;
      }
      do {
        bVar1 = *param_2;
        if ((&UNK_10e52f6e8)[bVar1] == '\x02') {
          pbVar5 = pbVar4;
          if (bVar1 < 0x22) {
            if (bVar1 == 9) {
              pbVar4[0] = 0x5c;
              pbVar4[1] = 0x74;
              pbVar5 = pbVar4 + 2;
            }
            else if (bVar1 == 10) {
              pbVar4[0] = 0x5c;
              pbVar4[1] = 0x6e;
              pbVar5 = pbVar4 + 2;
            }
            else if (bVar1 == 0xd) {
              pbVar4[0] = 0x5c;
              pbVar4[1] = 0x72;
              pbVar5 = pbVar4 + 2;
            }
          }
          else if (bVar1 == 0x22) {
            pbVar5 = pbVar4 + 2;
            pbVar4[0] = 0x5c;
            pbVar4[1] = 0x22;
          }
          else if (bVar1 == 0x27) {
            pbVar5 = pbVar4 + 2;
            pbVar4[0] = 0x5c;
            pbVar4[1] = 0x27;
          }
          else if (bVar1 == 0x5c) {
            pbVar5 = pbVar4 + 2;
            pbVar4[0] = 0x5c;
            pbVar4[1] = 0x5c;
          }
        }
        else if ((&UNK_10e52f6e8)[bVar1] == '\x01') {
          *pbVar4 = bVar1;
          pbVar5 = pbVar4 + 1;
        }
        else {
          *pbVar4 = 0x5c;
          pbVar4[1] = bVar1 >> 6 | 0x30;
          pbVar4[2] = bVar1 >> 3 & 7 | 0x30;
          pbVar4[3] = bVar1 & 7 | 0x30;
          pbVar5 = pbVar4 + 4;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        pbVar4 = pbVar5;
      } while (param_3 != 0);
    }
  }
  return;
}


