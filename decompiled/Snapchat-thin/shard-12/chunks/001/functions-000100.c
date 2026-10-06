/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dbf35c; end: 108dbf71f;  */

void FUN_108dbf35c(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  long *plVar16;
  long lVar17;
  
  plVar16 = (long *)param_1[2];
  bVar9 = *(byte *)((long)param_2 + 0x1c);
  piVar13 = (int *)*param_2;
  iVar14 = *piVar13;
  iVar2 = iVar14 + (bVar9 & 1 ^ 1);
  iVar3 = iVar2 + (int)param_5;
  iVar4 = *(int *)((long)param_1 + 0x54);
  iVar1 = iVar4 + 1;
  *(int *)((long)param_1 + 0x54) = iVar1;
  iVar5 = *(int *)(param_2 + 1);
  if (param_6 == 0) {
    iVar4 = iVar4 + 2;
    *(int *)((long)param_1 + 0x54) = iVar3 + iVar1;
  }
  else {
    iVar4 = (int)param_4 - iVar2;
  }
  FUN_108da8740(param_1,piVar13,iVar4,1);
  if ((bVar9 & 1) == 0) {
    FUN_108d71098(plVar16,0x49,*(undefined4 *)((long)param_2 + 0xc),iVar4 + iVar14,0);
  }
  if (param_6 == 0) {
    FUN_108d71098(param_1[2],0x20,param_4,iVar4 + iVar2,param_5);
    FUN_108da8510(param_1,param_4,param_5);
  }
  FUN_108d71098(plVar16,0x31,iVar4 + iVar5,iVar3 - iVar5,iVar1);
  if (0 < iVar5) {
    iVar2 = *(int *)((long)param_1 + 0x54);
    iVar6 = *(int *)(param_2 + 1);
    *(int *)((long)param_1 + 0x54) = iVar6 + iVar2;
    if ((bVar9 & 1) == 0) {
      plVar11 = plVar16;
      FUN_108d71098(plVar16,0x2e,iVar4 + iVar14,0,0);
      uVar10 = (uint)plVar11;
    }
    else {
      plVar11 = plVar16;
      FUN_108d71098(plVar16,0x3b,*(undefined4 *)((long)param_2 + 0xc),0,0);
      uVar10 = (uint)plVar11;
    }
    FUN_108d71098(plVar16,0x2a,iVar2 + 1,iVar4,*(undefined4 *)(param_2 + 1));
    iVar14 = *(int *)(param_2 + 3);
    if (iVar14 < 0) {
      iVar14 = *(int *)((long)plVar16 + 0x3c) + -1;
    }
    if (*(char *)(*plVar16 + 0x51) == '\0') {
      lVar12 = plVar16[1] + (long)iVar14 * 0x18;
    }
    else {
      lVar12 = 0x11372e6a0;
    }
    if (*(char *)(*param_1 + 0x51) != '\0') {
      return;
    }
    *(int *)(lVar12 + 8) = iVar3 - iVar6;
    lVar17 = *(long *)(lVar12 + 0x10);
    _bzero(*(undefined8 *)(lVar17 + 0x18),*(undefined2 *)(lVar17 + 6));
    FUN_108d6aaec(plVar16,0xffffffff,lVar17,0xfffffffa);
    plVar11 = param_1;
    FUN_108db3058(param_1,*param_2,iVar5,*(ushort *)(lVar17 + 8) - 1);
    *(long **)(lVar12 + 0x10) = plVar11;
    uVar7 = *(uint *)((long)plVar16 + 0x3c);
    FUN_108d71098(plVar16,0x2b,uVar7 + 1,0,uVar7 + 1);
    lVar12 = plVar16[6];
    FUN_108da84a4();
    iVar3 = *(int *)((long)param_1 + 0x54) + 1;
    *(int *)((long)param_1 + 0x54) = iVar3;
    *(int *)(param_2 + 2) = iVar3;
    *(int *)((long)param_2 + 0x14) = (int)lVar12;
    FUN_108d71098(plVar16,0x11,iVar3,lVar12,0);
    FUN_108d71098(plVar16,0x77,*(undefined4 *)((long)param_2 + 0xc),0,0);
    uVar8 = *(uint *)((long)plVar16 + 0x3c);
    if (uVar10 < uVar8) {
      *(uint *)(plVar16[1] + (ulong)uVar10 * 0x18 + 8) = uVar8;
    }
    *(uint *)(plVar16[6] + 100) = uVar8 - 1;
    uVar15 = *(undefined4 *)(param_2 + 1);
    FUN_108d71098(param_1[2],0x20,iVar4,iVar2 + 1,uVar15);
    FUN_108da8510(param_1,iVar4,uVar15);
    uVar10 = *(uint *)((long)plVar16 + 0x3c);
    if (uVar7 < uVar10) {
      *(uint *)(plVar16[1] + (ulong)uVar7 * 0x18 + 8) = uVar10;
    }
    *(uint *)(plVar16[6] + 100) = uVar10 - 1;
  }
  uVar15 = 0x6d;
  if ((*(byte *)((long)param_2 + 0x1c) & 1) == 0) {
    uVar15 = 0x6e;
  }
  FUN_108d71098(plVar16,uVar15,*(undefined4 *)((long)param_2 + 0xc),iVar1,0);
  iVar1 = *(int *)(param_3 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(param_3 + 0x10) != 0) {
      iVar1 = *(int *)(param_3 + 0x10) + 1;
    }
    plVar11 = plVar16;
    FUN_108d71098(plVar16,0x8b,iVar1,0,0xffffffff);
    FUN_108d71098(plVar16,0x69,*(undefined4 *)((long)param_2 + 0xc),0,0);
    FUN_108d71098(plVar16,0x5f,*(undefined4 *)((long)param_2 + 0xc),0,0);
    uVar10 = *(uint *)((long)plVar16 + 0x3c);
    if ((uint)plVar11 < uVar10) {
      *(uint *)(plVar16[1] + ((ulong)plVar11 & 0xffffffff) * 0x18 + 8) = uVar10;
    }
    *(uint *)(plVar16[6] + 100) = uVar10 - 1;
  }
  return;
}



/* Entry: 108dbf720; end: 108dbf9d3;  */

undefined8 FUN_108dbf720(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uStack_58;
  uint uStack_54;
  
  plVar11 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)*plVar11;
  piVar13 = (int *)plVar11[1];
  lVar18 = plVar11[3];
  cVar3 = *param_2;
  if (cVar3 != -100) {
    if (cVar3 == -0x65) {
      if (((*(ushort *)(plVar11 + 6) >> 3 & 1) != 0) ||
         (*(uint *)(param_1 + 0x20) != (uint)(byte)param_2[0x36])) {
        return 0;
      }
      uVar9 = *(uint *)(lVar18 + 0x38);
      puVar16 = *(undefined8 **)(lVar18 + 0x30);
      if (0 < (int)uVar9) {
        uVar19 = 0;
        puVar14 = puVar16;
        do {
          uVar6 = *puVar14;
          FUN_108daa04c(uVar6,param_2,0xffffffff);
          if ((int)uVar6 == 0) goto LAB_108dbf9ac;
          uVar19 = uVar19 + 1;
          puVar14 = puVar14 + 3;
        } while (uVar9 != uVar19);
      }
      lVar8 = *plVar1;
      uVar4 = *(undefined1 *)(lVar8 + 0x4e);
      FUN_108dbf9dc(lVar8,puVar16,0x18,(uint *)(lVar18 + 0x38),&uStack_54);
      *(long *)(lVar18 + 0x30) = lVar8;
      uVar19 = uStack_54;
      if (-1 < (int)uStack_54) {
        puVar16 = (undefined8 *)(lVar8 + (ulong)uStack_54 * 0x18);
        *puVar16 = param_2;
        iVar12 = *(int *)((long)plVar1 + 0x54) + 1;
        *(int *)((long)plVar1 + 0x54) = iVar12;
        *(int *)(puVar16 + 2) = iVar12;
        lVar8 = *plVar1;
        lVar17 = *(long *)(param_2 + 8);
        if (lVar17 == 0) {
          uVar9 = 0;
        }
        else {
          lVar7 = lVar17;
          _strlen(lVar17);
          uVar9 = (uint)lVar7 & 0x3fffffff;
        }
        if (*(undefined4 **)(param_2 + 0x20) == (undefined4 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = **(undefined4 **)(param_2 + 0x20);
        }
        FUN_108d6e688(lVar8,lVar17,uVar9,uVar10,uVar4,0);
        puVar16[1] = lVar8;
        if (((byte)param_2[4] >> 4 & 1) == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = (int)plVar1[10];
          *(int *)(plVar1 + 10) = iVar12 + 1;
        }
        *(int *)((long)puVar16 + 0x14) = iVar12;
      }
LAB_108dbf9ac:
      *(short *)(param_2 + 0x32) = (short)uVar19;
      *(long *)(param_2 + 0x38) = lVar18;
      return 1;
    }
    if (cVar3 != -0x66) {
      return 0;
    }
  }
  if (piVar13 == (int *)0x0) {
    return 1;
  }
  iVar12 = *piVar13;
  if (iVar12 < 1) {
    return 1;
  }
  piVar13 = piVar13 + 0x12;
  while (*(int *)(param_2 + 0x2c) != *piVar13) {
    iVar12 = iVar12 + -1;
    piVar13 = piVar13 + 0x1c;
    if (iVar12 == 0) {
      return 1;
    }
  }
  uVar9 = *(uint *)(lVar18 + 0x28);
  if (0 < (int)uVar9) {
    uVar19 = 0;
    piVar13 = (int *)(*(long *)(lVar18 + 0x20) + 0xc);
    do {
      if ((piVar13[-1] == *(int *)(param_2 + 0x2c)) && (*piVar13 == (int)*(short *)(param_2 + 0x30))
         ) goto LAB_108dbf948;
      uVar19 = uVar19 + 1;
      piVar13 = piVar13 + 8;
    } while (uVar9 != uVar19);
  }
  lVar8 = *plVar1;
  FUN_108dbf9dc(lVar8,*(long *)(lVar18 + 0x20),0x20,(uint *)(lVar18 + 0x28),&uStack_58);
  *(long *)(lVar18 + 0x20) = lVar8;
  uVar19 = uStack_58;
  if (-1 < (int)uStack_58) {
    puVar16 = (undefined8 *)(lVar8 + (ulong)uStack_58 * 0x20);
    *puVar16 = *(undefined8 *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x2c);
    sVar5 = *(short *)(param_2 + 0x30);
    *(int *)(puVar16 + 1) = iVar2;
    *(int *)((long)puVar16 + 0xc) = (int)sVar5;
    iVar12 = *(int *)((long)plVar1 + 0x54) + 1;
    *(int *)((long)plVar1 + 0x54) = iVar12;
    *(int *)((long)puVar16 + 0x14) = iVar12;
    puVar16[3] = param_2;
    piVar13 = *(int **)(lVar18 + 0x18);
    if ((piVar13 != (int *)0x0) && (0 < *piVar13)) {
      iVar12 = 0;
      puVar14 = *(undefined8 **)(piVar13 + 2);
      do {
        pcVar15 = (char *)*puVar14;
        if (((*pcVar15 == -0x66) && (*(int *)(pcVar15 + 0x2c) == iVar2)) &&
           (*(short *)(pcVar15 + 0x30) == sVar5)) goto LAB_108dbf944;
        iVar12 = iVar12 + 1;
        puVar14 = puVar14 + 4;
      } while (*piVar13 != iVar12);
    }
    iVar12 = *(int *)(lVar18 + 0xc);
    *(int *)(lVar18 + 0xc) = iVar12 + 1;
LAB_108dbf944:
    *(int *)(puVar16 + 2) = iVar12;
  }
LAB_108dbf948:
  *(long *)(param_2 + 0x38) = lVar18;
  *param_2 = -100;
  *(short *)(param_2 + 0x32) = (short)uVar19;
  return 1;
}



/* Entry: 108dbf9d4; end: 108dbf9db;  */

undefined8 FUN_108dbf9d4(void)

{
  return 0;
}



/* Entry: 108dbf9dc; end: 108dbfb3b;  */

long FUN_108dbf9dc(long param_1,long param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *param_4;
  lVar3 = param_2;
  if ((uVar1 & uVar1 - 1) == 0) {
    iVar2 = uVar1 << 1;
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    func_0x000108d711ec(param_1,param_2,(long)(iVar2 * param_3));
    lVar3 = param_1;
    if (param_1 == 0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  _bzero(lVar3 + (int)(uVar1 * param_3),param_3);
  *param_5 = uVar1;
  *param_4 = *param_4 + 1;
  return lVar3;
}



/* Entry: 108dbfb3c; end: 108dbfbdb;  */

undefined8 FUN_108dbfb3c(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_2 + 0x46) >> 4 & 1) == 0) {
LAB_108dbfb7c:
    if ((((*(byte *)(param_2 + 0x46) & 1) == 0) || ((*(byte *)(*param_1 + 0x2d) >> 3 & 1) != 0)) ||
       (*(char *)((long)param_1 + 0x1e) != '\0')) {
      if ((param_3 != 0) || (*(long *)(param_2 + 0x18) == 0)) {
        return 0;
      }
      puVar1 = &UNK_10f51a216;
      goto LAB_108dbfbbc;
    }
  }
  else {
    plVar2 = (long *)(param_2 + 0x58);
    do {
      plVar3 = (long *)*plVar2;
      plVar2 = plVar3 + 5;
    } while (*plVar3 != *param_1);
    if (*(long *)(*(long *)plVar3[1] + 0x68) != 0) goto LAB_108dbfb7c;
  }
  puVar1 = &UNK_10f51a1f9;
LAB_108dbfbbc:
  func_0x000108d6a85c(param_1,puVar1);
  return 1;
}



/* Entry: 108dbfbdc; end: 108dbfd2b;  */

void FUN_108dbfbdc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 auStack_68 [2];
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  lVar6 = *param_1;
  if (param_2[0xd] == 0) {
    uVar8 = 0xfff0bdc0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x28);
    if ((int)uVar1 < 1) {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      plVar5 = (long *)(*(long *)(lVar6 + 0x20) + 0x18);
      do {
        uVar8 = uVar7;
        if (*plVar5 == param_2[0xd]) break;
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 4;
        uVar8 = (ulong)uVar1;
      } while (uVar1 != uVar7);
    }
  }
  lVar2 = lVar6;
  FUN_108daa624(lVar6,param_3,0,0);
  lVar3 = lVar6;
  FUN_108d9cf10(lVar6,0,0,0);
  if (lVar3 != 0) {
    lVar4 = lVar6;
    FUN_108d68d58(lVar6,*param_2);
    *(long *)(lVar3 + 0x18) = lVar4;
    lVar4 = lVar6;
    FUN_108d68d58(lVar6,*(undefined8 *)
                         (*(long *)(lVar6 + 0x20) +
                         (-(uVar8 >> 0x1f & 1) & 0xffffffe000000000 | (uVar8 & 0xffffffff) << 5)));
    *(long *)(lVar3 + 0x10) = lVar4;
  }
  plVar5 = param_1;
  FUN_108d9cb64(param_1,0,lVar3,lVar2,0,0,0,0,0,0);
  auStack_68[0] = 0xc;
  uStack_60 = 0;
  uStack_64 = param_4;
  FUN_108d9b494(param_1,plVar5,auStack_68);
  func_0x000108d93f18(lVar6,plVar5,1);
  return;
}



/* Entry: 108dbfd2c; end: 108dbfe2f;  */

bool FUN_108dbfd2c(uint param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  if ((param_1 >> 0x13 & 1) == 0) {
    return false;
  }
  if (param_3 == 0) {
    lVar3 = param_2[0xd] + 0x50;
    func_0x000108d93668(lVar3,*param_2,auStack_38);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
      bVar1 = param_2[4] != 0;
    }
    else {
LAB_108dbfe08:
      bVar1 = true;
    }
  }
  else {
    for (lVar3 = param_2[4]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      uVar4 = (ulong)*(uint *)(lVar3 + 0x28);
      if (0 < (int)*(uint *)(lVar3 + 0x28)) {
        piVar5 = (int *)(lVar3 + 0x40);
        do {
          if ((-1 < *(int *)(param_3 + (long)*piVar5 * 4)) ||
             (((int)param_4 != 0 && (*piVar5 == (int)*(short *)((long)param_2 + 0x3c)))))
          goto LAB_108dbfe08;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
    }
    lVar3 = param_2[0xd] + 0x50;
    func_0x000108d93668(lVar3,*param_2,auStack_34);
    bVar1 = false;
    if (lVar3 != 0) {
      for (lVar3 = *(long *)(lVar3 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
        puVar2 = param_2;
        FUN_108dc05c4(param_2,lVar3,param_3,param_4);
        if ((int)puVar2 != 0) goto LAB_108dbfe08;
      }
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 108dbfe30; end: 108dc0017;  */

long FUN_108dbfe30(long *param_1,undefined8 *param_2,int param_3,ulong param_4,char *param_5,
                  int *param_6,uint *param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((*(byte *)((long)param_2 + 0x46) >> 4 & 1) == 0) {
    if (param_2[0xd] == 0) {
      uVar5 = 0xfff0bdc0;
    }
    else {
      uVar3 = *(uint *)(*param_1 + 0x28);
      if ((int)uVar3 < 1) {
        uVar5 = 0;
      }
      else {
        uVar4 = 0;
        plVar1 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
        do {
          uVar5 = uVar4;
          if (*plVar1 == param_2[0xd]) break;
          uVar4 = uVar4 + 1;
          plVar1 = plVar1 + 4;
          uVar5 = (ulong)uVar3;
        } while (uVar3 != uVar4);
      }
    }
    plVar1 = param_1;
    FUN_108d70f98(param_1);
    if ((int)param_4 < 0) {
      param_4 = (ulong)*(uint *)(param_1 + 10);
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (int)param_4;
    }
    uVar3 = (int)param_4 + 1;
    if (((*(byte *)((long)param_2 + 0x46) >> 5 & 1) == 0) &&
       ((param_5 == (char *)0x0 || (*param_5 != '\0')))) {
      FUN_108da66a0(param_1,param_4,uVar5,param_2,param_3);
    }
    else {
      func_0x000108da6790(param_1,uVar5,*(undefined4 *)(param_2 + 7),param_3 == 0x37,*param_2);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = uVar3;
    }
    lVar7 = param_2[2];
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        if ((((*(byte *)(lVar7 + 0x5b) & 3) == 2) && (param_6 != (int *)0x0)) &&
           ((*(byte *)((long)param_2 + 0x46) >> 5 & 1) != 0)) {
          *param_6 = (int)((ulong)uVar3 + lVar6);
        }
        if ((param_5 == (char *)0x0) || (param_5[lVar6 + 1] != '\0')) {
          FUN_108d71098(plVar1,param_3,(ulong)uVar3 + lVar6,*(undefined4 *)(lVar7 + 0x50),uVar5);
          lVar8 = param_1[2];
          plVar2 = param_1;
          FUN_108da68a8(param_1,lVar7);
          FUN_108d6aaec(lVar8,0xffffffff,plVar2,0xfffffffa);
        }
        lVar6 = lVar6 + 1;
        lVar7 = *(long *)(lVar7 + 0x28);
      } while (lVar7 != 0);
      uVar3 = uVar3 + (int)lVar6;
    }
    if ((int)param_1[10] < (int)uVar3) {
      *(uint *)(param_1 + 10) = uVar3;
    }
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}



/* Entry: 108dc0018; end: 108dc00b7;  */

void FUN_108dc0018(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar1 = param_1;
  if ((long *)param_1[0x38] != (long *)0x0) {
    plVar1 = (long *)param_1[0x38];
  }
  uVar2 = *(uint *)((long)plVar1 + 500);
  uVar6 = (ulong)uVar2;
  plVar5 = (long *)plVar1[0x4d];
  plVar4 = plVar5;
  if (0 < (int)uVar2) {
    do {
      if (param_2 == *plVar4) {
        return;
      }
      uVar6 = uVar6 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 != 0);
  }
  FUN_108d62be4();
  if (((int)param_1 == 0) &&
     (FUN_108d63588(plVar5,(long)(int)(uVar2 * 8 + 8)), plVar5 != (long *)0x0)) {
    plVar1[0x4d] = (long)plVar5;
    iVar3 = *(int *)((long)plVar1 + 500);
    *(int *)((long)plVar1 + 500) = iVar3 + 1;
    plVar5[iVar3] = param_2;
  }
  else {
    *(undefined1 *)(*plVar1 + 0x51) = 1;
  }
  return;
}



/* Entry: 108dc00b8; end: 108dc055b;  */

void FUN_108dc00b8(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,ulong param_8,undefined4 param_9
                  )

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  lVar10 = param_1[2];
  uVar3 = *(undefined8 *)(lVar10 + 0x30);
  FUN_108da84a4();
  uVar7 = 0x46;
  if ((*(byte *)((long)param_2 + 0x46) & 0x20) != 0) {
    uVar7 = 0x44;
  }
  if (param_9._1_1_ == '\0') {
    lVar8 = lVar10;
    FUN_108d71098(lVar10,uVar7,param_4,uVar3,param_6);
    FUN_108d6aaec(lVar10,lVar8,(long)param_7,0xfffffff2);
  }
  iVar2 = *(int *)(*param_1 + 0x2c);
  FUN_108dbfd2c(iVar2,param_2,0,0);
  uVar11 = (uint)uVar3;
  if ((param_3 != 0) || (iVar12 = 0, iVar2 != 0)) {
    plVar4 = param_1;
    func_0x000108dc06a0(param_1,param_3,0,0,3,param_2,(undefined1)param_9);
    plVar5 = param_1;
    FUN_108dc0768(param_1,param_2);
    iVar2 = *(int *)((long)param_1 + 0x54);
    iVar12 = iVar2 + 1;
    *(int *)((long)param_1 + 0x54) = iVar12 + *(short *)((long)param_2 + 0x3e);
    FUN_108d71098(lVar10,0x21,param_6,iVar12,0);
    sVar6 = *(short *)((long)param_2 + 0x3e);
    if (0 < sVar6) {
      uVar13 = 0;
      uVar1 = (uint)plVar5 | (uint)plVar4;
      do {
        if ((uVar1 == 0xffffffff) ||
           ((uVar13 < 0x20 && ((uVar1 >> (ulong)(uVar13 & 0x1f) & 1) != 0)))) {
          FUN_108da9a60(lVar10,param_2,param_4,uVar13,iVar2 + 2 + uVar13);
          sVar6 = *(short *)((long)param_2 + 0x3e);
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)sVar6);
    }
    iVar2 = *(int *)(lVar10 + 0x3c);
    FUN_108dc0880(param_1,param_3,0x6d,0,1,param_2,iVar12,(undefined1)param_9,uVar11);
    if (iVar2 < *(int *)(lVar10 + 0x3c)) {
      lVar8 = lVar10;
      FUN_108d71098(lVar10,uVar7,param_4,uVar3,param_6);
      FUN_108d6aaec(lVar10,lVar8,(long)param_7,0xfffffff2);
    }
    func_0x000108dc092c(param_1,param_2,iVar12,0,0,0);
    param_8 = param_8 & 0xffffffff;
  }
  if (param_2[3] == 0) {
    func_0x000108dc0e94(param_1,param_2[2],*(undefined1 *)((long)param_2 + 0x46),param_4,param_5,0);
    FUN_108d71098(lVar10,0x5f,param_4,param_8,0);
    if ((int)param_8 != 0) {
      FUN_108d6aaec(lVar10,0xffffffff,*param_2,0);
    }
  }
  func_0x000108dc0fb8(param_1,param_2,0,iVar12,0,0);
  FUN_108dc0880(param_1,param_3,0x6d,0,2,param_2,iVar12,(undefined1)param_9,uVar11);
  lVar8 = *(long *)(lVar10 + 0x30);
  if (((int)uVar11 < 0) && (lVar9 = *(long *)(lVar8 + 0x80), lVar9 != 0)) {
    *(undefined4 *)(lVar9 + (ulong)~uVar11 * 4) = *(undefined4 *)(lVar10 + 0x3c);
  }
  *(int *)(lVar8 + 100) = *(int *)(lVar10 + 0x3c) + -1;
  return;
}



/* Entry: 108dc055c; end: 108dc05c3;  */

undefined8 FUN_108dc055c(long param_1,uint *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = 1;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    uVar3 = (ulong)*param_2;
    if (0 < (int)*param_2) {
      puVar4 = (undefined8 *)(*(long *)(param_2 + 2) + 8);
      do {
        lVar2 = param_1;
        func_0x000108dafdd0(param_1,*puVar4);
        if (-1 < (int)lVar2) {
          return 1;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 4;
      } while (uVar3 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108dc05c4; end: 108dc0767;  */

undefined8 FUN_108dc05c4(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    sVar2 = *(short *)(param_1 + 0x3e);
    do {
      if (0 < sVar2) {
        lVar6 = 0;
        lVar7 = 0;
        lVar4 = *(long *)(param_2 + 0x48 + uVar5 * 0x10);
        do {
          if ((-1 < *(int *)(param_3 + lVar7 * 4)) ||
             ((param_4 != 0 && (lVar7 == *(short *)(param_1 + 0x3c))))) {
            if (lVar4 == 0) {
              if ((*(byte *)(*(long *)(param_1 + 8) + lVar6 + 0x2b) & 1) != 0) {
                return 1;
              }
            }
            else {
              uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
              FUN_108d5e044(uVar3,lVar4);
              if ((int)uVar3 == 0) {
                return 1;
              }
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (sVar2 != lVar7);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  return 0;
}



/* Entry: 108dc0768; end: 108dc087f;  */

uint FUN_108dc0768(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  long lStack_50;
  undefined1 auStack_44 [4];
  
  if ((*(byte *)(*param_1 + 0x2e) >> 3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = param_2[4];
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar4 = (ulong)*(uint *)(lVar2 + 0x28);
        if (0 < (int)*(uint *)(lVar2 + 0x28)) {
          puVar5 = (uint *)(lVar2 + 0x40);
          do {
            uVar1 = 1 << (ulong)(*puVar5 & 0x1f);
            if (0x1f < (int)*puVar5) {
              uVar1 = 0xffffffff;
            }
            uVar6 = uVar1 | uVar6;
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 4;
          } while (uVar4 != 0);
        }
        lVar2 = *(long *)(lVar2 + 8);
      } while (lVar2 != 0);
    }
    lVar2 = param_2[0xd] + 0x50;
    func_0x000108d93668(lVar2,*param_2,auStack_44);
    if (lVar2 != 0) {
      for (lVar2 = *(long *)(lVar2 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
        lStack_50 = 0;
        FUN_108dc1c34(param_1,param_2,lVar2,&lStack_50,0);
        if ((lStack_50 != 0) && (uVar4 = (ulong)*(ushort *)(lStack_50 + 0x56), uVar4 != 0)) {
          puVar3 = *(ushort **)(lStack_50 + 8);
          do {
            uVar1 = 1 << (ulong)(*puVar3 & 0x1f);
            if (0x1f < (short)*puVar3) {
              uVar1 = 0xffffffff;
            }
            uVar6 = uVar1 | uVar6;
            uVar4 = uVar4 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar4 != 0);
        }
      }
    }
  }
  return uVar6;
}



/* Entry: 108dc0880; end: 108dc1b3f;  */

void FUN_108dc0880(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = *(long *)(param_2 + 0x40)) {
    if ((param_3 == *(byte *)(param_2 + 0x10)) && (param_5 == *(byte *)(param_2 + 0x11))) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      FUN_108dc055c(uVar1,param_4);
      if ((int)uVar1 != 0) {
        FUN_108dc1eac(param_1,param_2,param_6,param_7,param_8,param_9);
      }
    }
  }
  return;
}



/* Entry: 108dc1b40; end: 108dc1c33;  */

/* WARNING: Removing unreachable block (ram,0x000108dc1be4) */

int * FUN_108dc1b40(int *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  piVar1 = param_1;
  FUN_108d9cf10(param_1,0,0,0);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = param_1;
  FUN_108d68d58(param_1,*(undefined8 *)(param_2 + 0x18));
  *(int **)(piVar1 + (long)*piVar1 * 0x1c + -0x16) = piVar2;
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x28);
  if (lVar3 == 0) {
    uVar4 = 0xfff0bdc0;
  }
  else {
    uVar5 = param_1[10];
    uVar4 = (ulong)uVar5;
    if ((int)uVar5 < 1) {
      uVar4 = 0;
      goto LAB_108dc1bfc;
    }
    uVar6 = 0;
    plVar7 = (long *)(*(long *)(param_1 + 8) + 0x18);
    do {
      if (*plVar7 == lVar3) {
        uVar5 = (uint)uVar6;
        uVar4 = uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 4;
    } while (uVar4 != uVar6);
    if (uVar5 == 0) goto LAB_108dc1bfc;
  }
  if ((int)uVar4 < 2) {
    return piVar1;
  }
LAB_108dc1bfc:
  FUN_108d68d58(param_1,*(undefined8 *)(*(long *)(param_1 + 8) + (uVar4 & 0xffffffff) * 0x20));
  *(int **)(piVar1 + (long)*piVar1 * 0x1c + -0x18) = param_1;
  return piVar1;
}



/* Entry: 108dc1c34; end: 108dc1eab;  */

void FUN_108dc1c34(undefined8 *param_1,long param_2,long param_3,long *param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  uVar3 = *(uint *)(param_3 + 0x28);
  lVar6 = *(long *)(param_3 + 0x48);
  if (uVar3 == 1) {
    if (-1 < *(short *)(param_2 + 0x3c)) {
      if (lVar6 == 0) {
        return;
      }
      iVar9 = (int)*(undefined8 *)
                    (*(long *)(param_2 + 8) + (long)(int)*(short *)(param_2 + 0x3c) * 0x30);
      FUN_108d5e044();
      if (iVar9 == 0) {
        return;
      }
      puVar16 = (undefined4 *)0x0;
      goto LAB_108dc1cdc;
    }
  }
  else if (param_5 != (undefined8 *)0x0) {
    puVar16 = (undefined4 *)*param_1;
    FUN_108d6a6fc(puVar16,(long)(int)uVar3 << 2);
    if (puVar16 == (undefined4 *)0x0) {
      return;
    }
    *param_5 = puVar16;
    goto LAB_108dc1cdc;
  }
  puVar16 = (undefined4 *)0x0;
LAB_108dc1cdc:
  lVar15 = *(long *)(param_2 + 0x10);
  if (lVar15 != 0) {
    puVar7 = (undefined4 *)(ulong)uVar3;
    puVar1 = (undefined4 *)(param_3 + 0x40);
    do {
      if ((uVar3 == *(ushort *)(lVar15 + 0x56)) && (*(char *)(lVar15 + 0x5a) != '\0')) {
        if (lVar6 == 0) {
          if ((*(byte *)(lVar15 + 0x5b) & 3) == 2) {
            puVar13 = puVar16;
            if (0 < (int)uVar3) {
              while (puVar13 != (undefined4 *)0x0) {
                *puVar16 = *puVar1;
                puVar7 = (undefined4 *)((long)puVar7 + -1);
                puVar1 = puVar1 + 4;
                puVar16 = puVar16 + 1;
                puVar13 = puVar7;
              }
            }
LAB_108dc1e9c:
            *param_4 = lVar15;
            return;
          }
        }
        else {
          if ((int)uVar3 < 1) {
            puVar13 = (undefined4 *)0x0;
          }
          else {
            puVar13 = (undefined4 *)0x0;
            lVar14 = *(long *)(lVar15 + 8);
            lVar11 = *(long *)(param_2 + 8);
            lVar12 = *(long *)(lVar15 + 0x40);
            while( true ) {
              iVar9 = (int)*(short *)(lVar14 + (long)puVar13 * 2);
              puVar8 = *(undefined **)(lVar11 + (long)iVar9 * 0x30 + 0x20);
              puVar2 = &UNK_10f51757c;
              if (puVar8 != (undefined *)0x0) {
                puVar2 = puVar8;
              }
              uVar4 = *(undefined8 *)(lVar12 + (long)puVar13 * 8);
              FUN_108d5e044(uVar4,puVar2);
              if ((int)uVar4 != 0) break;
              uVar4 = *(undefined8 *)(lVar11 + (long)iVar9 * 0x30);
              puVar10 = (undefined8 *)(param_3 + 0x48);
              puVar17 = puVar7;
              while( true ) {
                uVar5 = *puVar10;
                FUN_108d5e044(uVar5,uVar4);
                if ((int)uVar5 == 0) break;
                puVar10 = puVar10 + 2;
                puVar17 = (undefined4 *)((long)puVar17 + -1);
                if (puVar17 == (undefined4 *)0x0) goto LAB_108dc1de8;
              }
              if (puVar16 != (undefined4 *)0x0) {
                puVar16[(long)puVar13] = *(undefined4 *)(puVar10 + -1);
              }
              puVar13 = (undefined4 *)((long)puVar13 + 1);
              if (puVar13 == puVar7) goto LAB_108dc1e9c;
            }
          }
LAB_108dc1de8:
          if ((uint)puVar13 == uVar3) goto LAB_108dc1e9c;
        }
      }
      lVar15 = *(long *)(lVar15 + 0x28);
    } while (lVar15 != 0);
  }
  if (*(char *)((long)param_1 + 0x1e6) == '\0') {
    func_0x000108d6a85c(param_1,&UNK_10f51a24a);
  }
  func_0x000108d60660(*param_1,puVar16);
  return;
}



/* Entry: 108dc1eac; end: 108dc1f83;  */

void FUN_108dc1eac(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1;
  FUN_108d70f98();
  plVar3 = param_1;
  func_0x000108dc16ac(param_1,param_2,param_3,param_5);
  if (plVar3 != (long *)0x0) {
    if (*param_2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = (*(byte *)(*param_1 + 0x2e) & 4) == 0;
    }
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
    FUN_108d71098(plVar2,0x83,param_4,param_6);
    FUN_108d6aaec(plVar2,0xffffffff,plVar3[2],0xffffffee);
    if (plVar2[1] != 0) {
      *(bool *)(plVar2[1] + (long)*(int *)((long)plVar2 + 0x3c) * 0x18 + -0x15) = bVar1;
    }
  }
  return;
}



/* Entry: 108dc1f84; end: 108dc295b;  */

int FUN_108dc1f84(long *param_1,undefined4 param_2,long param_3,long param_4,long *param_5,
                 int *param_6,int param_7,ulong param_8,int param_9)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  int iStack_8c;
  
  plVar7 = param_1;
  FUN_108d70f98();
  lVar14 = param_1[10];
  lVar8 = plVar7[6];
  FUN_108da84a4();
  iVar15 = (int)param_8;
  if (iVar15 < 0) {
    FUN_108d71098(plVar7,0x87,*(undefined1 *)((long)param_5 + 0x2c),lVar8,0);
  }
  iVar6 = (int)lVar14 + -1;
  uVar19 = (ulong)*(uint *)(param_5 + 5);
  if (0 < (int)*(uint *)(param_5 + 5)) {
    lVar14 = 0;
    do {
      FUN_108d71098(plVar7,0x4c,param_7 + 1 + param_6[lVar14],lVar8,0);
      lVar14 = lVar14 + 1;
      uVar19 = (ulong)(int)param_5[5];
    } while (lVar14 < (long)uVar19);
  }
  if (param_9 == 0) {
    if (param_4 == 0) {
      if (*(char *)((long)param_1 + 0x1f) == '\0') {
        iVar18 = *(int *)((long)param_1 + 0x54) + 1;
        *(int *)((long)param_1 + 0x54) = iVar18;
      }
      else {
        bVar1 = *(char *)((long)param_1 + 0x1f) - 1;
        *(byte *)((long)param_1 + 0x1f) = bVar1;
        iVar18 = *(int *)((long)param_1 + (ulong)bVar1 * 4 + 0x24);
      }
      FUN_108d71098(plVar7,0x22,param_7 + *param_6 + 1,iVar18,0);
      plVar10 = plVar7;
      FUN_108d71098(plVar7,0x26,iVar18,0,0);
      if ((iVar15 == 1) && (param_3 == *param_5)) {
        FUN_108d71098(plVar7,0x4f,param_7,lVar8,iVar18);
        if (plVar7[1] != 0) {
          *(undefined1 *)(plVar7[1] + (long)*(int *)((long)plVar7 + 0x3c) * 0x18 + -0x15) = 0x90;
        }
      }
      FUN_108da66a0(param_1,iVar6,param_2,param_3,0x36);
      FUN_108d71098(plVar7,0x46,iVar6,0,iVar18);
      FUN_108d71098(plVar7,0x10,0,lVar8,0);
      uVar3 = *(uint *)((long)plVar7 + 0x3c);
      if (1 < uVar3) {
        *(uint *)(plVar7[1] + (ulong)(uVar3 - 2) * 0x18 + 8) = uVar3;
      }
      lVar14 = plVar7[6];
      if ((uint)plVar10 < uVar3) {
        *(uint *)(plVar7[1] + ((ulong)plVar10 & 0xffffffff) * 0x18 + 8) = uVar3;
      }
      *(uint *)(lVar14 + 100) = uVar3 - 1;
      if (iVar18 != 0) {
        bVar1 = *(byte *)((long)param_1 + 0x1f);
        if (bVar1 < 8) {
          puVar11 = (undefined1 *)((long)param_1 + 0x8e);
          iVar15 = 10;
          do {
            if (*(int *)(puVar11 + 6) == iVar18) {
              *puVar11 = 1;
              goto LAB_108dc2070;
            }
            puVar11 = puVar11 + 0x14;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          *(byte *)((long)param_1 + 0x1f) = bVar1 + 1;
          *(int *)((long)param_1 + (ulong)bVar1 * 4 + 0x24) = iVar18;
        }
      }
    }
    else {
      iVar18 = (int)uVar19;
      if (*(int *)((long)param_1 + 0x44) < iVar18) {
        iVar13 = *(int *)((long)param_1 + 0x54) + 1;
        *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + iVar18;
      }
      else {
        iVar13 = (int)param_1[9];
        *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - iVar18;
        *(int *)(param_1 + 9) = iVar13 + iVar18;
      }
      if (*(char *)((long)param_1 + 0x1f) == '\0') {
        iStack_8c = *(int *)((long)param_1 + 0x54) + 1;
        *(int *)((long)param_1 + 0x54) = iStack_8c;
      }
      else {
        bVar1 = *(char *)((long)param_1 + 0x1f) - 1;
        *(byte *)((long)param_1 + 0x1f) = bVar1;
        iStack_8c = *(int *)((long)param_1 + (ulong)bVar1 * 4 + 0x24);
      }
      FUN_108d71098(plVar7,0x36,iVar6,*(undefined4 *)(param_4 + 0x50),param_2);
      lVar14 = param_1[2];
      plVar10 = param_1;
      FUN_108da68a8(param_1,param_4);
      FUN_108d6aaec(lVar14,0xffffffff,plVar10,0xfffffffa);
      if (0 < iVar18) {
        uVar17 = uVar19 & 0xffffffff;
        piVar16 = param_6;
        iVar2 = iVar13;
        do {
          FUN_108d71098(plVar7,0x21,param_7 + 1 + *piVar16,iVar2,0);
          iVar2 = iVar2 + 1;
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 1;
        } while (uVar17 != 0);
      }
      if ((iVar15 == 1) && (param_3 == *param_5)) {
        if (0 < iVar18) {
          uVar17 = 0;
          iVar15 = *(int *)((long)plVar7 + 0x3c);
          do {
            sVar5 = *(short *)(*(long *)(param_4 + 8) + uVar17 * 2);
            iVar2 = 0;
            if (*(short *)(param_3 + 0x3c) != sVar5) {
              iVar2 = sVar5 + 1;
            }
            FUN_108d71098(plVar7,0x4e,param_7 + 1 + param_6[uVar17],iVar18 + iVar15 + 1,
                          iVar2 + param_7);
            if (plVar7[1] != 0) {
              *(undefined1 *)(plVar7[1] + (long)*(int *)((long)plVar7 + 0x3c) * 0x18 + -0x15) = 0x10
              ;
            }
            uVar17 = uVar17 + 1;
          } while ((uVar19 & 0xffffffff) != uVar17);
        }
        FUN_108d71098(plVar7,0x10,0,lVar8,0);
      }
      param_8 = param_8 & 0xffffffff;
      plVar10 = plVar7;
      FUN_108dbf060(plVar7,param_4);
      plVar9 = plVar7;
      FUN_108d71098(plVar7,0x31,iVar13,uVar19,iStack_8c);
      FUN_108d6aaec(plVar7,plVar9,plVar10,uVar19);
      plVar10 = plVar7;
      FUN_108d71098(plVar7,0x45,iVar6,lVar8,iStack_8c);
      FUN_108d6aaec(plVar7,plVar10,0,0xfffffff2);
      if (iStack_8c != 0) {
        bVar1 = *(byte *)((long)param_1 + 0x1f);
        if (bVar1 < 8) {
          puVar11 = (undefined1 *)((long)param_1 + 0x8e);
          iVar15 = 10;
          do {
            if (*(int *)(puVar11 + 6) == iStack_8c) {
              *puVar11 = 1;
              goto LAB_108dc250c;
            }
            puVar11 = puVar11 + 0x14;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          *(byte *)((long)param_1 + 0x1f) = bVar1 + 1;
          *(int *)((long)param_1 + (ulong)bVar1 * 4 + 0x24) = iStack_8c;
        }
      }
LAB_108dc250c:
      FUN_108da8510(param_1,iVar13,uVar19);
      if (*(int *)((long)param_1 + 0x44) < iVar18) {
        *(int *)((long)param_1 + 0x44) = iVar18;
        *(int *)(param_1 + 9) = iVar13;
      }
    }
  }
LAB_108dc2070:
  cVar4 = *(char *)((long)param_5 + 0x2c);
  if (cVar4 == '\0') {
    if ((((*(byte *)(*param_1 + 0x2f) & 1) == 0) && (param_1[0x38] == 0)) &&
       ((char)param_1[4] == '\0')) {
      FUN_108da99ac(param_1,0x313,2,0,0xfffffffe,4);
      goto LAB_108dc20c4;
    }
    if (0 < (int)param_8) {
      if ((long *)param_1[0x38] != (long *)0x0) {
        param_1 = (long *)param_1[0x38];
      }
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  FUN_108d71098(plVar7,0x86,cVar4,param_8,0);
LAB_108dc20c4:
  lVar14 = plVar7[6];
  if (((int)(uint)lVar8 < 0) && (lVar12 = *(long *)(lVar14 + 0x80), lVar12 != 0)) {
    *(undefined4 *)(lVar12 + (ulong)~(uint)lVar8 * 4) = *(undefined4 *)((long)plVar7 + 0x3c);
  }
  *(int *)(lVar14 + 100) = *(int *)((long)plVar7 + 0x3c) + -1;
  iVar15 = *(int *)((long)plVar7 + 0x3c);
  iVar18 = iVar15;
  if (*(int *)(plVar7[6] + 0x60) <= iVar15) {
    plVar10 = plVar7;
    FUN_108d71134();
    if ((int)plVar10 != 0) {
      return 1;
    }
    iVar18 = *(int *)((long)plVar7 + 0x3c);
  }
  *(int *)((long)plVar7 + 0x3c) = iVar18 + 1;
  puVar11 = (undefined1 *)(plVar7[1] + (long)iVar15 * 0x18);
  *puVar11 = 0x3d;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = iVar6;
  *(undefined4 *)(puVar11 + 8) = 0;
  *(undefined4 *)(puVar11 + 0xc) = 0;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  puVar11[1] = 0;
  return iVar15;
}



/* Entry: 108dc295c; end: 108dc2a23;  */

long * FUN_108dc295c(long *param_1,long param_2,int param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar3 = (long *)*param_1;
  uStack_50 = 0;
  uStack_48 = 0;
  plVar1 = plVar3;
  FUN_108db0138(plVar3,0x9f,&uStack_50,0);
  if (plVar1 != (long *)0x0) {
    if (((int)param_4 < 0) || ((uint)*(ushort *)(param_2 + 0x3c) == (param_4 & 0xffff))) {
      *(int *)((long)plVar1 + 0x2c) = param_3;
      *(undefined1 *)((long)plVar1 + 1) = 0x44;
    }
    else {
      lVar2 = *(long *)(param_2 + 8) + (long)(int)param_4 * 0x30;
      *(uint *)((long)plVar1 + 0x2c) = param_3 + param_4 + 1;
      *(undefined1 *)((long)plVar1 + 1) = *(undefined1 *)(lVar2 + 0x29);
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) {
        lVar2 = *(long *)plVar3[2];
      }
      FUN_108dae14c(param_1,plVar1,lVar2);
      plVar1 = param_1;
    }
  }
  return plVar1;
}



/* Entry: 108dc2a24; end: 108dc2db7;  */

void FUN_108dc2a24(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar12 = *param_1;
  for (plVar14 = *(long **)(param_3 + 0x58); (plVar14 != (long *)0x0 && (*plVar14 != lVar12));
      plVar14 = (long *)plVar14[5]) {
  }
  uVar13 = param_1[2];
  uStack_78 = &UNK_10f51a2ae;
  uStack_70 = CONCAT44(uStack_70._4_4_,7);
  lVar6 = lVar12;
  FUN_108db0138(lVar12,0x1b,&uStack_78,0);
  lVar5 = *param_1;
  FUN_108d9ccd4(lVar5,0,lVar6);
  lVar6 = lVar5;
  if (param_5 != 0) {
    lVar17 = lVar12;
    FUN_108daa624(lVar12,param_5,0,0);
    lVar6 = *param_1;
    FUN_108d9ccd4(lVar6,lVar5,lVar17);
  }
  if (0 < *(short *)(param_3 + 0x3e)) {
    lVar17 = 0;
    lVar5 = 0;
    lVar16 = lVar6;
    do {
      uVar4 = *(uint *)(param_6 + lVar5 * 4);
      lVar7 = lVar12;
      if ((int)uVar4 < 0) {
        FUN_108d9ce48(lVar12,0x1b,*(undefined8 *)(*(long *)(param_3 + 8) + lVar17));
      }
      else {
        FUN_108daa624(lVar12,*(undefined8 *)(*(long *)(param_4 + 8) + (ulong)uVar4 * 0x20),0,0);
      }
      lVar6 = *param_1;
      FUN_108d9ccd4(lVar6,lVar16,lVar7);
      lVar5 = lVar5 + 1;
      lVar17 = lVar17 + 0x30;
      lVar16 = lVar6;
    } while (lVar5 < *(short *)(param_3 + 0x3e));
  }
  plVar8 = param_1;
  FUN_108d9cb64(param_1,lVar6,param_2,param_7,0,0,0,0,0,0);
  iVar2 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar2 + 1;
  iVar11 = 1;
  if (param_5 != 0) {
    iVar11 = 2;
  }
  FUN_108d71098(uVar13,0x39,iVar2,iVar11 + *(short *)(param_3 + 0x3e),0);
  if (*(long *)(uVar13 + 8) != 0) {
    *(undefined1 *)(*(long *)(uVar13 + 8) + (long)*(int *)(uVar13 + 0x3c) * 0x18 + -0x15) = 8;
  }
  uStack_78 = (undefined *)CONCAT62(uStack_78._2_6_,0xe);
  uStack_70 = 0;
  uStack_78 = (undefined *)CONCAT44(iVar2,(undefined4)uStack_78);
  FUN_108d9b494(param_1,plVar8,&uStack_78);
  iVar3 = *(int *)((long)param_1 + 0x54);
  *(int *)((long)param_1 + 0x54) = iVar3 + 2 + (int)*(short *)(param_3 + 0x3e);
  uVar9 = uVar13;
  FUN_108d71098(uVar13,0x6c,iVar2,0,0);
  FUN_108d71098(uVar13,0x2f,iVar2,0,iVar3 + 1);
  FUN_108d71098(uVar13,0x2f,iVar2,param_5 != 0,iVar3 + 2);
  if (0 < *(short *)(param_3 + 0x3e)) {
    iVar15 = 0;
    iVar1 = iVar3 + 3;
    do {
      iVar15 = iVar15 + 1;
      FUN_108d71098(uVar13,0x2f,iVar2,iVar11,iVar1);
      iVar1 = iVar1 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar15 < *(short *)(param_3 + 0x3e));
  }
  FUN_108dc0018(param_1,param_3);
  uVar10 = uVar13;
  FUN_108d71098(uVar13,0xf,0,*(short *)(param_3 + 0x3e) + 2,iVar3 + 1);
  FUN_108d6aaec(uVar13,uVar10,plVar14,0xfffffff6);
  if (*(long *)(uVar13 + 8) != 0) {
    iVar11 = 2;
    if (param_8 != 10) {
      iVar11 = param_8;
    }
    *(char *)(*(long *)(uVar13 + 8) + (long)*(int *)(uVar13 + 0x3c) * 0x18 + -0x15) = (char)iVar11;
  }
  if ((long *)param_1[0x38] != (long *)0x0) {
    param_1 = (long *)param_1[0x38];
  }
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  FUN_108d71098(uVar13,9,iVar2,(uint)uVar9 + 1,0);
  uVar4 = *(uint *)(uVar13 + 0x3c);
  if ((uint)uVar9 < uVar4) {
    *(uint *)(*(long *)(uVar13 + 8) + (uVar9 & 0xffffffff) * 0x18 + 8) = uVar4;
  }
  *(uint *)(*(long *)(uVar13 + 0x30) + 100) = uVar4 - 1;
  FUN_108d71098(uVar13,0x3d,iVar2,0,0);
  func_0x000108d93f18(lVar12,plVar8,1);
  return;
}



/* Entry: 108dc2db8; end: 108dc2ed3;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d6abec) */

void FUN_108dc2db8(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  plVar8 = *(long **)(param_2 + 0x28);
  if (plVar8 == (long *)0x0) {
    lVar9 = *param_1;
    plVar8 = (long *)((long)*(short *)(param_2 + 0x3e) + 1);
    FUN_108d60848();
    if (plVar8 == (long *)0x0) {
      *(undefined1 *)(lVar9 + 0x51) = 1;
      return;
    }
    if (*(short *)(param_2 + 0x3e) < 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      lVar7 = 0x29;
      do {
        *(undefined1 *)((long)plVar8 + lVar9) = *(undefined1 *)(*(long *)(param_2 + 8) + lVar7);
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x30;
      } while (lVar9 < *(short *)(param_2 + 0x3e));
    }
    do {
      *(undefined1 *)((long)plVar8 + lVar9) = 0;
      if (lVar9 < 1) break;
      lVar7 = lVar9 + -1;
      lVar9 = lVar9 + -1;
    } while (*(char *)((long)plVar8 + lVar7) == 'A');
    *(long **)(param_2 + 0x28) = plVar8;
  }
  plVar3 = plVar8;
  _strlen();
  uVar2 = (uint)plVar3 & 0x3fffffff;
  if (((ulong)plVar3 & 0x3fffffff) == 0) {
    return;
  }
  if ((int)param_3 == 0) {
    iVar5 = -1;
  }
  else {
    plVar4 = param_1;
    FUN_108d71098(param_1,0x30,param_3,uVar2,0);
    iVar5 = (int)plVar4;
  }
  lVar9 = *param_1;
  if ((param_1[1] != 0) && (*(char *)(lVar9 + 0x51) == '\0')) {
    if (iVar5 < 0) {
      iVar5 = *(int *)((long)param_1 + 0x3c) + -1;
    }
    lVar7 = param_1[1] + (long)iVar5 * 0x18;
    FUN_108d80c2c(lVar9,(long)*(char *)(lVar7 + 1),*(undefined8 *)(lVar7 + 0x10));
    *(undefined8 *)(lVar7 + 0x10) = 0;
    if (uVar2 == 0xfffffff2) {
      *(int *)(lVar7 + 0x10) = (int)plVar8;
      uVar6 = 0xf2;
    }
    else {
      if (plVar8 == (long *)0x0) {
        *(undefined1 *)(lVar7 + 1) = 0;
        return;
      }
      if (uVar2 == 0xfffffff6) {
        *(long **)(lVar7 + 0x10) = plVar8;
        *(undefined1 *)(lVar7 + 1) = 0xf6;
        *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
        return;
      }
      if (uVar2 == 0xfffffffa) {
        *(long **)(lVar7 + 0x10) = plVar8;
        uVar6 = 0xfa;
      }
      else {
        if (((ulong)plVar3 & 0x3fffffff) == 0) {
          plVar3 = plVar8;
          _strlen(plVar8);
          uVar2 = (uint)plVar3 & 0x3fffffff;
        }
        lVar9 = *param_1;
        FUN_108d95eb4(lVar9,plVar8,uVar2);
        *(long *)(lVar7 + 0x10) = lVar9;
        uVar6 = 0xff;
      }
    }
    *(undefined1 *)(lVar7 + 1) = uVar6;
    return;
  }
  if (uVar2 == 0xfffffff6) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar3 = plVar8;
  if (uVar2 == 0xfffffff7 || SCARRY4(uVar2,9)) {
    if (uVar2 == 0xfffffff4 || SCARRY4(uVar2,0xc)) {
      if ((1 < uVar2 + 0xd) && (uVar2 != 0xfffffff1)) {
        return;
      }
    }
    else {
      if (uVar2 == 0xfffffff5) {
        if (*(long *)(lVar9 + 0x328) != 0) {
          return;
        }
        goto SUB_108d5e198;
      }
      if (uVar2 != 0xfffffff6) {
        return;
      }
      if (*(long *)(lVar9 + 0x328) != 0) {
        return;
      }
      lVar9 = *plVar8;
      iVar5 = (int)plVar8[3] + -1;
      *(int *)(plVar8 + 3) = iVar5;
      if (iVar5 != 0) {
        return;
      }
      if ((long *)plVar8[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[2] + 0x20))();
      }
    }
  }
  else if (uVar2 == 0xfffffffa || SCARRY4(uVar2,6)) {
    if (uVar2 != 0xfffffff8) {
      if (uVar2 != 0xfffffffa) {
        return;
      }
      if (*(long *)(lVar9 + 0x328) != 0) {
        return;
      }
      iVar5 = (int)*plVar8 + -1;
      *(int *)plVar8 = iVar5;
      if (iVar5 != 0) {
        return;
      }
      goto SUB_108d5e198;
    }
    if (*(long *)(lVar9 + 0x328) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (((*(ushort *)(plVar8 + 1) & 0x2460) != 0) || ((int)plVar8[4] != 0)) {
        FUN_108d826d0(plVar8);
      }
      lVar9 = plVar8[5];
    }
    else if ((int)plVar8[4] != 0) {
      unaff_x30 = 0x108d80cf8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar3 = (long *)plVar8[3];
      unaff_x19 = plVar8;
      unaff_x20 = lVar9;
      unaff_x29 = puVar1;
    }
  }
  else if (uVar2 == 0xfffffffb) {
    if ((*(ushort *)((long)plVar8 + 2) >> 4 & 1) == 0) {
      return;
    }
  }
  else if (uVar2 != 0xffffffff) {
    return;
  }
  plVar8 = plVar3;
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((plVar8 < *(long **)(lVar9 + 0x170)) || (*(long **)(lVar9 + 0x178) <= plVar8)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)plVar8;
      }
      else {
        uVar2 = (uint)*(ushort *)(lVar9 + 0x150);
      }
      **(int **)(lVar9 + 0x328) = **(int **)(lVar9 + 0x328) + uVar2;
      return;
    }
    if ((*(long **)(lVar9 + 0x170) <= plVar8) && (plVar8 < *(long **)(lVar9 + 0x178))) {
      *plVar8 = *(long *)(lVar9 + 0x168);
      *(long **)(lVar9 + 0x168) = plVar8;
      *(int *)(lVar9 + 0x154) = *(int *)(lVar9 + 0x154) + -1;
      return;
    }
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (plVar8 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar3 = plVar8;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(plVar8);
    plVar8 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar8);
  return;
}



/* Entry: 108dc2ed4; end: 108dc3dc3;  */

void FUN_108dc2ed4(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5,
                  int param_6,int param_7,int param_8,byte param_9,undefined4 param_10,
                  undefined4 *param_11)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  short *psVar25;
  undefined4 uVar26;
  ulong uVar27;
  int *piVar28;
  uint uVar29;
  long *plVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  undefined4 uStack_c4;
  long lStack_70;
  
  lVar19 = *param_1;
  plVar9 = param_1;
  FUN_108d70f98();
  sVar7 = *(short *)((long)param_2 + 0x3e);
  if ((*(byte *)((long)param_2 + 0x46) >> 5 & 1) == 0) {
    lStack_70 = 0;
    uVar14 = 1;
  }
  else {
    plVar30 = param_2 + 2;
    do {
      lStack_70 = *plVar30;
      plVar30 = (long *)(lStack_70 + 0x28);
    } while ((*(byte *)(lStack_70 + 0x5b) & 3) != 2);
    uVar14 = (uint)*(ushort *)(lStack_70 + 0x56);
  }
  uVar15 = (uint)param_9;
  if (0 < sVar7) {
    lVar33 = 0;
    lVar35 = 0;
    iVar16 = param_6;
    do {
      iVar16 = iVar16 + 1;
      if (lVar35 != *(short *)((long)param_2 + 0x3c)) {
        bVar4 = *(byte *)(param_2[1] + lVar33 + 0x28);
        if (bVar4 != 0) {
          uVar21 = 2;
          if (bVar4 != 10) {
            uVar21 = (uint)bVar4;
          }
          if (uVar15 != 10) {
            uVar21 = uVar15;
          }
          if ((uVar21 == 5) && (uVar21 = 2, *(long *)(param_2[1] + lVar33 + 8) != 0)) {
            uVar21 = 5;
          }
          if (uVar21 < 3) {
            if (uVar21 != 1) {
              if (uVar21 != 2) {
LAB_108dc30b0:
                plVar30 = plVar9;
                FUN_108d71098(plVar9,0x4d,iVar16,0,0);
                FUN_108da6628(param_1,*(undefined8 *)(param_2[1] + lVar33 + 8),iVar16);
                uVar21 = *(uint *)((long)plVar9 + 0x3c);
                if ((uint)plVar30 < uVar21) {
                  *(uint *)(plVar9[1] + ((ulong)plVar30 & 0xffffffff) * 0x18 + 8) = uVar21;
                }
                *(uint *)(plVar9[6] + 100) = uVar21 - 1;
                goto LAB_108dc310c;
              }
              plVar30 = param_1;
              if ((long *)param_1[0x38] != (long *)0x0) {
                plVar30 = (long *)param_1[0x38];
              }
              *(undefined1 *)((long)plVar30 + 0x21) = 1;
            }
          }
          else if (uVar21 != 3) {
            if (uVar21 != 4) goto LAB_108dc30b0;
            FUN_108d71098(plVar9,0x4c,iVar16,param_10,0);
            goto LAB_108dc310c;
          }
          lVar24 = lVar19;
          FUN_108d6a8e0(lVar19,&UNK_10f518dd3);
          plVar30 = plVar9;
          FUN_108d71098(plVar9,0x17,0x513,uVar21,iVar16);
          FUN_108d6aaec(plVar9,plVar30,lVar24,0xffffffff);
          if (plVar9[1] != 0) {
            *(undefined1 *)(plVar9[1] + (long)*(int *)((long)plVar9 + 0x3c) * 0x18 + -0x15) = 1;
          }
        }
      }
LAB_108dc310c:
      lVar35 = lVar35 + 1;
      lVar33 = lVar33 + 0x30;
    } while (sVar7 != lVar35);
  }
  piVar28 = (int *)param_2[6];
  if (((piVar28 != (int *)0x0) && ((*(byte *)(lVar19 + 0x2d) >> 5 & 1) == 0)) &&
     (*(int *)(param_1 + 0xd) = param_6 + 1, 0 < *piVar28)) {
    lVar33 = 0;
    lVar35 = 0;
    uVar21 = 2;
    if (uVar15 != 10) {
      uVar21 = uVar15;
    }
    lVar24 = plVar9[6];
    do {
      FUN_108da84a4();
      FUN_108dab73c(param_1,*(undefined8 *)(*(long *)(piVar28 + 2) + lVar33),lVar24,0x10);
      if (uVar21 == 4) {
        FUN_108d71098(plVar9,0x10,0,param_10,0);
      }
      else {
        lVar10 = *(long *)(*(long *)(piVar28 + 2) + lVar33 + 8);
        if (lVar10 == 0) {
          lVar10 = *param_2;
        }
        uVar29 = 2;
        if (uVar21 != 5) {
          uVar29 = uVar21;
        }
        FUN_108da99ac(param_1,0x113,uVar29,lVar10,0,3);
        uVar21 = uVar29;
      }
      lVar10 = plVar9[6];
      if ((int)(uint)lVar24 < 0) {
        iVar16 = *(int *)((long)plVar9 + 0x3c);
        if (*(long *)(lVar10 + 0x80) != 0) {
          *(int *)(*(long *)(lVar10 + 0x80) + (ulong)~(uint)lVar24 * 4) = iVar16;
        }
      }
      else {
        iVar16 = *(int *)((long)plVar9 + 0x3c);
      }
      *(int *)(lVar10 + 100) = iVar16 + -1;
      lVar35 = lVar35 + 1;
      lVar33 = lVar33 + 0x20;
      lVar24 = lVar10;
    } while (lVar35 < *piVar28);
  }
  uVar21 = 0;
  uVar29 = 0;
  uStack_c4 = 0;
  if ((param_8 == 0) || (lStack_70 != 0)) goto LAB_108dc34ac;
  lVar35 = plVar9[6];
  FUN_108da84a4();
  uVar21 = uVar15;
  if (uVar15 == 10) {
    uVar21 = 2;
    if (*(byte *)((long)param_2 + 0x47) != 10) {
      uVar21 = (uint)*(byte *)((long)param_2 + 0x47);
    }
  }
  if (param_7 != 0) {
    FUN_108d71098(plVar9,0x4f,param_6,lVar35,param_7);
    if (plVar9[1] != 0) {
      *(undefined1 *)(plVar9[1] + (long)*(int *)((long)plVar9 + 0x3c) * 0x18 + -0x15) = 0x90;
    }
  }
  plVar30 = (long *)0x0;
  if ((uVar15 == 5) || (uVar21 != 5)) {
LAB_108dc3334:
    FUN_108d71098(plVar9,0x46,param_4,lVar35,param_6);
    if (uVar21 - 1 < 3) {
LAB_108dc3418:
      FUN_108dc3dc4(param_1,uVar21,param_2);
    }
    else {
      if (uVar21 != 4) {
        if (uVar21 == 5) goto LAB_108dc3368;
        uVar21 = 2;
        goto LAB_108dc3418;
      }
      FUN_108d71098(plVar9,0x10,0,param_10,0);
    }
    uStack_c4 = 0;
  }
  else {
    lVar33 = param_2[2];
    if (lVar33 != 0) {
      do {
        if (*(byte *)(lVar33 + 0x5a) - 3 < 2) {
          plVar30 = plVar9;
          FUN_108d71098(plVar9,0x10,0,0,0);
          goto LAB_108dc3334;
        }
        lVar33 = *(long *)(lVar33 + 0x28);
      } while (lVar33 != 0);
      plVar30 = (long *)0x0;
      goto LAB_108dc3334;
    }
    FUN_108d71098(plVar9,0x46,param_4,lVar35,param_6);
    plVar30 = (long *)0x0;
LAB_108dc3368:
    if (((*(byte *)(lVar19 + 0x2e) >> 2 & 1) == 0) ||
       (plVar12 = param_1, func_0x000108dbfa84(param_1,param_2,0x6d,0,0), plVar12 == (long *)0x0)) {
      iVar16 = *(int *)(*param_1 + 0x2c);
      FUN_108dbfd2c(iVar16,param_2,0,0);
      plVar12 = (long *)0x0;
      if (iVar16 == 0) {
        lVar33 = param_2[2];
        uStack_c4 = 1;
        if (lVar33 != 0) {
          plVar12 = param_1;
          if ((long *)param_1[0x38] != (long *)0x0) {
            plVar12 = (long *)param_1[0x38];
          }
          *(undefined1 *)(plVar12 + 4) = 1;
          func_0x000108dc0e94(param_1,lVar33,*(undefined1 *)((long)param_2 + 0x46),param_4,param_5,0
                             );
        }
        goto LAB_108dc342c;
      }
    }
    plVar3 = param_1;
    if ((long *)param_1[0x38] != (long *)0x0) {
      plVar3 = (long *)param_1[0x38];
    }
    uStack_c4 = 1;
    *(undefined1 *)(plVar3 + 4) = 1;
    FUN_108dc00b8(param_1,param_2,plVar12,param_4,param_5,param_6,1,0,0x105);
  }
LAB_108dc342c:
  uVar29 = (uint)plVar30;
  lVar33 = plVar9[6];
  if (((int)(uint)lVar35 < 0) && (lVar24 = *(long *)(lVar33 + 0x80), lVar24 != 0)) {
    *(undefined4 *)(lVar24 + (ulong)~(uint)lVar35 * 4) = *(undefined4 *)((long)plVar9 + 0x3c);
  }
  *(int *)(lVar33 + 100) = *(int *)((long)plVar9 + 0x3c) + -1;
  if (uVar29 == 0) {
    uVar21 = 0;
  }
  else {
    plVar12 = plVar9;
    FUN_108d71098(plVar9,0x10,0,0,0);
    uVar21 = (uint)plVar12;
    uVar17 = *(uint *)((long)plVar9 + 0x3c);
    if (uVar29 < uVar17) {
      *(uint *)(plVar9[1] + ((ulong)plVar30 & 0xffffffff) * 0x18 + 8) = uVar17;
    }
    *(uint *)(plVar9[6] + 100) = uVar17 - 1;
  }
LAB_108dc34ac:
  lVar35 = param_2[2];
  if (lVar35 != 0) {
    lVar33 = 0;
    bVar8 = false;
    iVar16 = param_6 + 1;
    iVar34 = -1;
    do {
      if (*(int *)(param_3 + lVar33 * 4) != 0) {
        if (!bVar8) {
          FUN_108dc2db8(plVar9,param_2,iVar16);
        }
        uVar11 = plVar9[6];
        FUN_108da84a4();
        if (*(long *)(lVar35 + 0x48) != 0) {
          FUN_108d71098(plVar9,0x1c,0,*(undefined4 *)(param_3 + lVar33 * 4),0);
          *(int *)(param_1 + 0xd) = iVar16;
          FUN_108da95f4(param_1,*(undefined8 *)(lVar35 + 0x48),uVar11,0x10);
          *(undefined4 *)(param_1 + 0xd) = 0;
        }
        uVar5 = *(ushort *)(lVar35 + 0x58);
        uVar20 = (ulong)uVar5;
        uVar17 = (uint)uVar5;
        uVar18 = (uint)uVar5;
        if (*(int *)((long)param_1 + 0x44) < (int)uVar17) {
          iVar23 = *(int *)((long)param_1 + 0x54) + 1;
          *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + uVar18;
          if (uVar18 != 0) goto LAB_108dc358c;
LAB_108dc3628:
          uVar20 = 0;
        }
        else {
          iVar23 = (int)param_1[9];
          *(uint *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - uVar17;
          *(uint *)(param_1 + 9) = iVar23 + uVar17;
          if (uVar18 == 0) goto LAB_108dc3628;
LAB_108dc358c:
          uVar27 = 0;
          do {
            sVar7 = *(short *)(*(long *)(lVar35 + 8) + uVar27 * 2);
            if ((sVar7 < 0) || (*(short *)((long)param_2 + 0x3c) == sVar7)) {
              iVar22 = iVar23 + (int)uVar27;
              if (iVar22 != iVar34) {
                iVar34 = param_6;
                if (*(long *)(lVar35 + 0x48) != 0) {
                  iVar22 = -1;
                }
                goto LAB_108dc35e4;
              }
            }
            else {
              iVar22 = iVar34;
              iVar34 = iVar16 + sVar7;
LAB_108dc35e4:
              FUN_108d71098(plVar9,0x22,iVar34,iVar23 + (int)uVar27,0);
              uVar20 = (ulong)*(ushort *)(lVar35 + 0x58);
              iVar34 = iVar22;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < uVar20);
        }
        FUN_108d71098(plVar9,0x31,iVar23,uVar20,*(undefined4 *)(param_3 + lVar33 * 4));
        FUN_108da8510(param_1,iVar23,*(undefined2 *)(lVar35 + 0x58));
        uVar17 = (uint)uVar11;
        if (lStack_70 == lVar35 && (param_7 != 0 && param_8 == 0)) {
          lVar24 = plVar9[6];
          if ((int)uVar17 < 0) {
            lVar10 = *(long *)(lVar24 + 0x80);
            iVar23 = *(int *)((long)plVar9 + 0x3c);
joined_r0x000108dc399c:
            if (lVar10 != 0) {
              *(int *)(lVar10 + (ulong)~uVar17 * 4) = iVar23;
            }
          }
          else {
LAB_108dc3740:
            iVar23 = *(int *)((long)plVar9 + 0x3c);
          }
          *(int *)(lVar24 + 100) = iVar23 + -1;
        }
        else {
          bVar4 = *(byte *)(lVar35 + 0x5a);
          if (bVar4 == 0) {
            uVar5 = *(ushort *)(lVar35 + 0x58);
            FUN_108da8510(param_1,iVar23,uVar5);
            if (*(int *)((long)param_1 + 0x44) < (int)(uint)uVar5) {
              *(uint *)((long)param_1 + 0x44) = (uint)uVar5;
              *(int *)(param_1 + 9) = iVar23;
            }
            lVar24 = plVar9[6];
            if (-1 < (int)uVar17) goto LAB_108dc3740;
            lVar10 = *(long *)(lVar24 + 0x80);
            iVar23 = *(int *)((long)plVar9 + 0x3c);
            goto joined_r0x000108dc399c;
          }
          uVar18 = 2;
          if (bVar4 != 10) {
            uVar18 = (uint)bVar4;
          }
          if (uVar15 != 10) {
            uVar18 = uVar15;
          }
          uVar6 = *(undefined2 *)(lVar35 + 0x56);
          iVar32 = (int)lVar33;
          plVar30 = plVar9;
          FUN_108d71098(plVar9,0x43,param_5 + iVar32,uVar11 & 0xffffffff,iVar23);
          FUN_108d6aaec(plVar9,plVar30,uVar6,0xfffffff2);
          iVar22 = iVar23;
          if (lStack_70 != lVar35) {
            if (*(int *)((long)param_1 + 0x44) < (int)uVar14) {
              iVar22 = *(int *)((long)param_1 + 0x54) + 1;
              *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + uVar14;
            }
            else {
              iVar22 = (int)param_1[9];
              *(uint *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - uVar14;
              *(uint *)(param_1 + 9) = iVar22 + uVar14;
            }
          }
          if ((param_7 != 0) || (uVar18 == 5)) {
            if ((*(byte *)((long)param_2 + 0x46) >> 5 & 1) == 0) {
              FUN_108d71098(plVar9,0x70,param_5 + iVar32,iVar22,0);
              if (param_7 != 0) {
                FUN_108d71098(plVar9,0x4f,iVar22,uVar11 & 0xffffffff,param_7);
                if (plVar9[1] != 0) {
                  *(undefined1 *)(plVar9[1] + (long)*(int *)((long)plVar9 + 0x3c) * 0x18 + -0x15) =
                       0x90;
                }
              }
            }
            else {
              if ((lStack_70 != lVar35) && (*(short *)(lStack_70 + 0x56) != 0)) {
                uVar11 = 0;
                do {
                  if ((ulong)*(ushort *)(lVar35 + 0x58) != 0) {
                    lVar24 = 0;
                    psVar25 = *(short **)(lVar35 + 8);
                    do {
                      if (*(short *)(*(long *)(lStack_70 + 8) + uVar11 * 2) == *psVar25) {
                        iVar13 = (int)lVar24 >> 0x10;
                        goto LAB_108dc388c;
                      }
                      lVar24 = lVar24 + 0x10000;
                      psVar25 = psVar25 + 1;
                    } while ((ulong)*(ushort *)(lVar35 + 0x58) * 0x10000 - lVar24 != 0);
                  }
                  iVar13 = -1;
LAB_108dc388c:
                  FUN_108d71098(plVar9,0x2f,param_5 + iVar32,iVar13,iVar22 + (int)uVar11);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lStack_70 + 0x56));
              }
              if ((param_7 != 0) && (*(ushort *)(lStack_70 + 0x56) != 0)) {
                uVar11 = 0;
                iVar32 = iVar23;
                if ((*(byte *)(lVar35 + 0x5b) & 3) != 2) {
                  iVar32 = iVar22;
                }
                uVar31 = *(int *)((long)plVar9 + 0x3c) + (uint)*(ushort *)(lStack_70 + 0x56);
                uVar26 = 0x4e;
                do {
                  plVar30 = param_1;
                  func_0x000108da6a20(param_1,*(undefined8 *)
                                               (*(long *)(lStack_70 + 0x40) + uVar11 * 8));
                  bVar8 = uVar11 != *(ushort *)(lStack_70 + 0x56) - 1;
                  uVar1 = uVar17;
                  if (bVar8) {
                    uVar1 = uVar31;
                  }
                  uVar2 = 0x4f;
                  if (bVar8) {
                    uVar2 = uVar26;
                  }
                  plVar12 = plVar9;
                  FUN_108d71098(plVar9,uVar2,
                                param_7 + 1 + (int)*(short *)(*(long *)(lStack_70 + 8) + uVar11 * 2)
                                ,uVar1,iVar32 + (int)uVar11);
                  FUN_108d6aaec(plVar9,plVar12,plVar30,0xfffffffc);
                  if (plVar9[1] != 0) {
                    *(undefined1 *)(plVar9[1] + (long)*(int *)((long)plVar9 + 0x3c) * 0x18 + -0x15)
                         = 0x90;
                  }
                  uVar11 = uVar11 + 1;
                  uVar31 = uVar1;
                  uVar26 = uVar2;
                } while (uVar11 < *(ushort *)(lStack_70 + 0x56));
              }
            }
          }
          if (uVar18 - 1 < 3) {
            FUN_108db152c(param_1,uVar18,lVar35);
          }
          else if (uVar18 == 4) {
            FUN_108d71098(plVar9,0x10,0,param_10,0);
          }
          else {
            plVar30 = param_1;
            if ((long *)param_1[0x38] != (long *)0x0) {
              plVar30 = (long *)param_1[0x38];
            }
            *(undefined1 *)(plVar30 + 4) = 1;
            if ((*(byte *)(lVar19 + 0x2e) >> 2 & 1) == 0) {
              plVar30 = (long *)0x0;
            }
            else {
              plVar30 = param_1;
              func_0x000108dbfa84(param_1,param_2,0x6d,0,0);
            }
            FUN_108dc00b8(param_1,param_2,plVar30,param_4,param_5,iVar22,(int)(short)uVar14,0,
                          CONCAT11(lStack_70 == lVar35,5));
            uStack_c4 = 1;
          }
          lVar24 = plVar9[6];
          if ((int)uVar17 < 0) {
            lVar10 = *(long *)(lVar24 + 0x80);
            iVar32 = *(int *)((long)plVar9 + 0x3c);
            if (lVar10 != 0) {
              *(int *)(lVar10 + (ulong)~uVar17 * 4) = iVar32;
            }
          }
          else {
            iVar32 = *(int *)((long)plVar9 + 0x3c);
          }
          *(int *)(lVar24 + 100) = iVar32 + -1;
          uVar5 = *(ushort *)(lVar35 + 0x58);
          FUN_108da8510(param_1,iVar23,uVar5);
          if (*(int *)((long)param_1 + 0x44) < (int)(uint)uVar5) {
            *(uint *)((long)param_1 + 0x44) = (uint)uVar5;
            *(int *)(param_1 + 9) = iVar23;
          }
          if (iVar22 == iVar23) {
            bVar8 = true;
            goto LAB_108dc39b4;
          }
          FUN_108da8510(param_1,iVar22,uVar14);
          if (*(int *)((long)param_1 + 0x44) < (int)uVar14) {
            *(uint *)((long)param_1 + 0x44) = uVar14;
            *(int *)(param_1 + 9) = iVar22;
          }
        }
        bVar8 = true;
      }
LAB_108dc39b4:
      lVar33 = lVar33 + 1;
      lVar35 = *(long *)(lVar35 + 0x28);
    } while (lVar35 != 0);
  }
  if (uVar29 != 0) {
    FUN_108d71098(plVar9,0x10,0,uVar29 + 1,0);
    uVar14 = *(uint *)((long)plVar9 + 0x3c);
    if (uVar21 < uVar14) {
      *(uint *)(plVar9[1] + (ulong)uVar21 * 0x18 + 8) = uVar14;
    }
    *(uint *)(plVar9[6] + 100) = uVar14 - 1;
  }
  *param_11 = uStack_c4;
  return;
}



/* Entry: 108dc3dc4; end: 108dc3e4f;  */

void FUN_108dc3dc4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  if (*(short *)(param_3 + 0x3c) < 0) {
    FUN_108d6a8e0(uVar3,&UNK_10f51a2b6);
    uVar4 = 0xa13;
  }
  else {
    FUN_108d6a8e0(uVar3,&UNK_10f518dd3);
    uVar4 = 0x613;
  }
  puVar1 = param_1;
  FUN_108d70f98();
  if ((int)param_2 == 2) {
    if ((undefined8 *)param_1[0x38] != (undefined8 *)0x0) {
      param_1 = (undefined8 *)param_1[0x38];
    }
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  puVar2 = puVar1;
  FUN_108d71098(puVar1,0x18,uVar4,param_2,0);
  FUN_108d6aaec(puVar1,puVar2,uVar3,0xffffffff);
  if (puVar1[1] != 0) {
    *(undefined1 *)(puVar1[1] + (long)*(int *)((long)puVar1 + 0x3c) * 0x18 + -0x15) = 2;
  }
  return;
}



/* Entry: 108dc3e50; end: 108dc481b;  */

undefined8
FUN_108dc3e50(long *param_1,long *param_2,undefined8 *param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 uVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  ulong uStack_78;
  int iStack_6c;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_1[0x50] != 0) {
    return 0;
  }
  if (param_3[0xe] != 0) {
    return 0;
  }
  lVar22 = *param_1;
  lVar7 = *(long *)(*(long *)(lVar22 + 0x20) + 0x38);
  FUN_108db1c50(lVar7,*(undefined1 *)((long)param_1 + 0x1e6),param_2);
  if (lVar7 != 0) {
    return 0;
  }
  if ((*(byte *)((long)param_2 + 0x46) >> 4 & 1) != 0) {
    return 0;
  }
  if (((int)param_4 == 10) &&
     ((*(short *)((long)param_2 + 0x3c) < 0 ||
      (param_4 = (ulong)*(byte *)((long)param_2 + 0x47), *(byte *)((long)param_2 + 0x47) == 10)))) {
    param_4 = 2;
  }
  piVar15 = (int *)param_3[5];
  if (*piVar15 != 1) {
    return 0;
  }
  if (*(long *)(piVar15 + 0xc) != 0) {
    return 0;
  }
  if (param_3[6] != 0) {
    return 0;
  }
  if (param_3[9] != 0) {
    return 0;
  }
  if (param_3[7] != 0) {
    return 0;
  }
  if (param_3[0xc] != 0) {
    return 0;
  }
  if (param_3[10] != 0) {
    return 0;
  }
  if ((*(ushort *)((long)param_3 + 10) & 1) != 0) {
    return 0;
  }
  if (*(int *)*param_3 != 1) {
    return 0;
  }
  if (*(char *)**(undefined8 **)((int *)*param_3 + 2) != 't') {
    return 0;
  }
  plVar8 = param_1;
  FUN_108dafaec(param_1,0,piVar15 + 2);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (plVar8 == param_2) {
    return 0;
  }
  if ((*(byte *)((long)plVar8 + 0x46) >> 4 & 1) != 0) {
    return 0;
  }
  if ((uint)((*(byte *)((long)param_2 + 0x46) & 0x20) == 0) ==
      (*(byte *)((long)plVar8 + 0x46) & 0x20) >> 5) {
    return 0;
  }
  if (plVar8[3] != 0) {
    return 0;
  }
  uVar5 = *(ushort *)((long)param_2 + 0x3e);
  if (uVar5 != *(ushort *)((long)plVar8 + 0x3e)) {
    return 0;
  }
  if (*(short *)((long)param_2 + 0x3c) != *(short *)((long)plVar8 + 0x3c)) {
    return 0;
  }
  if (0 < (short)uVar5) {
    uVar19 = 0;
    pcVar21 = (char *)(plVar8[1] + 0x29);
    pcVar23 = (char *)(param_2[1] + 0x29);
    do {
      if (*pcVar23 != *pcVar21) {
        return 0;
      }
      lVar7 = *(long *)(pcVar23 + -9);
      if (lVar7 == 0 || *(long *)(pcVar21 + -9) == 0) {
        if (lVar7 != 0 || *(long *)(pcVar21 + -9) != 0) {
          return 0;
        }
      }
      else {
        FUN_108d5e044();
        if ((int)lVar7 != 0) {
          return 0;
        }
      }
      if ((pcVar23[-1] != '\0') && (pcVar21[-1] == '\0')) {
        return 0;
      }
      if (uVar19 != 0) {
        lVar7 = *(long *)(pcVar23 + -0x19);
        if ((lVar7 == 0) == (*(long *)(pcVar21 + -0x19) != 0)) {
          return 0;
        }
        if ((lVar7 != 0) && (_strcmp(), (int)lVar7 != 0)) {
          return 0;
        }
      }
      uVar19 = uVar19 + 1;
      pcVar21 = pcVar21 + 0x30;
      pcVar23 = pcVar23 + 0x30;
    } while (uVar5 != uVar19);
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    bVar6 = false;
  }
  else {
    lVar24 = plVar8[2];
    if (lVar24 == 0) {
      return 0;
    }
    bVar6 = false;
    do {
      lVar20 = lVar24;
      if (*(char *)(lVar7 + 0x5a) != '\0') {
        bVar6 = true;
      }
      while (lVar9 = lVar7, FUN_108dc4ad8(lVar7,lVar20), (int)lVar9 == 0) {
        lVar20 = *(long *)(lVar20 + 0x28);
        if (lVar20 == 0) {
          return 0;
        }
      }
      lVar7 = *(long *)(lVar7 + 0x28);
    } while (lVar7 != 0);
  }
  if (param_2[6] != 0) {
    lVar7 = plVar8[6];
    func_0x000108daa588(lVar7,param_2[6],0xffffffff);
    if ((int)lVar7 != 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)(lVar22 + 0x2c);
  if ((uVar1 >> 0x13 & 1) == 0) {
    if ((uVar1 >> 7 & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar1 >> 7 & 1) != 0) {
      return 0;
    }
    if (param_2[4] != 0) {
      return 0;
    }
  }
  if (plVar8[0xd] == 0) {
    uStack_78 = 0xfff0bdc0;
  }
  else {
    uVar1 = *(uint *)(lVar22 + 0x28);
    if ((int)uVar1 < 1) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = 0;
      plVar10 = (long *)(*(long *)(lVar22 + 0x20) + 0x18);
      uVar19 = uStack_78;
      do {
        uStack_78 = uVar19;
        if (*plVar10 == plVar8[0xd]) break;
        uVar19 = uStack_78 + 1;
        plVar10 = plVar10 + 4;
        uStack_78 = (ulong)uVar1;
      } while (uVar1 != uVar19);
    }
  }
  plVar10 = param_1;
  FUN_108d70f98();
  func_0x000108dab6e4(param_1,uStack_78);
  iVar2 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar2 + 2;
  plVar11 = param_1;
  FUN_108dc481c(param_1,param_5,param_2);
  cVar3 = *(char *)((long)param_1 + 0x1f);
  if (cVar3 == '\0') {
    iStack_7c = *(int *)((long)param_1 + 0x54) + 1;
    iStack_6c = iStack_7c;
  }
  else {
    *(byte *)((long)param_1 + 0x1f) = cVar3 - 1U;
    iStack_6c = *(int *)((long)param_1 + (ulong)(byte)(cVar3 - 1U) * 4 + 0x24);
    if (cVar3 != '\x01') {
      *(byte *)((long)param_1 + 0x1f) = cVar3 - 2U;
      iStack_7c = *(int *)((long)param_1 + (ulong)(byte)(cVar3 - 2U) * 4 + 0x24);
      goto LAB_108dc4200;
    }
    iStack_7c = *(int *)((long)param_1 + 0x54);
  }
  iStack_7c = iStack_7c + 1;
  *(int *)((long)param_1 + 0x54) = iStack_7c;
LAB_108dc4200:
  FUN_108da66a0(param_1,iVar2 + 1,param_5,param_2,0x37);
  if (((*(byte *)(lVar22 + 0x2f) >> 3 & 1) == 0) &&
     ((((*(short *)((long)param_2 + 0x3c) < 0 && (param_2[2] != 0)) || (bVar6)) ||
      ((int)param_4 - 3U < 0xfffffffe)))) {
    plVar12 = plVar10;
    FUN_108d71098(plVar10,0x6c,iVar2 + 1,0,0);
    plVar13 = plVar10;
    FUN_108d71098(plVar10,0x10,0,0,0);
    uStack_80 = (uint)plVar13;
    uVar1 = *(uint *)((long)plVar10 + 0x3c);
    if ((uint)plVar12 < uVar1) {
      *(uint *)(plVar10[1] + ((ulong)plVar12 & 0xffffffff) * 0x18 + 8) = uVar1;
    }
    *(uint *)(plVar10[6] + 100) = uVar1 - 1;
  }
  else {
    uStack_80 = 0;
  }
  if ((*(byte *)((long)plVar8 + 0x46) >> 5 & 1) == 0) {
    FUN_108da66a0(param_1,iVar2,uStack_78,plVar8,0x36);
    plVar12 = plVar10;
    FUN_108d71098(plVar10,0x6c,iVar2,0,0);
    uStack_84 = (uint)plVar12;
    plVar12 = plVar10;
    if (*(short *)((long)param_2 + 0x3c) < 0) {
      if (param_2[2] == 0) {
        iVar17 = iVar2 + 1;
        uVar14 = 0x4a;
      }
      else {
        uVar14 = 0x67;
        iVar17 = iVar2;
      }
      FUN_108d71098(plVar10,uVar14,iVar17,iStack_7c,0);
    }
    else {
      FUN_108d71098(plVar10,0x67,iVar2,iStack_7c,0);
      plVar13 = plVar10;
      FUN_108d71098(plVar10,0x46,iVar2 + 1,0,iStack_7c);
      FUN_108dc3dc4(param_1,param_4,param_2);
      uVar1 = *(uint *)((long)plVar10 + 0x3c);
      if ((uint)plVar13 < uVar1) {
        *(uint *)(plVar10[1] + ((ulong)plVar13 & 0xffffffff) * 0x18 + 8) = uVar1;
      }
      *(uint *)(plVar10[6] + 100) = uVar1 - 1;
      if (0 < (int)plVar11) {
        FUN_108d71098(param_1[2],0x88,(ulong)plVar11 & 0xffffffff,iStack_7c,0);
      }
    }
    FUN_108d71098(plVar10,0x66,iVar2,iStack_6c,0);
    FUN_108d71098(plVar10,0x4b,iVar2 + 1,iStack_6c,iStack_7c);
    if (plVar10[1] != 0) {
      *(undefined1 *)(plVar10[1] + (long)*(int *)((long)plVar10 + 0x3c) * 0x18 + -0x15) = 0xb;
    }
    FUN_108d6aaec(plVar10,0xffffffff,*param_2,0);
    FUN_108d71098(plVar10,9,iVar2,plVar12,0);
    FUN_108d71098(plVar10,0x3d,iVar2,0,0);
    FUN_108d71098(plVar10,0x3d,iVar2 + 1,0,0);
  }
  else {
    func_0x000108da6790(param_1,param_5,(int)param_2[7],1,*param_2);
    func_0x000108da6790(param_1,uStack_78,(int)plVar8[7],0,*plVar8);
    uStack_84 = 0;
  }
  for (lVar7 = param_2[2]; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x28)) {
    lVar24 = plVar8[2];
    while ((lVar24 != 0 && (lVar20 = lVar7, FUN_108dc4ad8(lVar7,lVar24), (int)lVar20 == 0))) {
      lVar24 = *(long *)(lVar24 + 0x28);
    }
    FUN_108d71098(plVar10,0x36,iVar2,*(undefined4 *)(lVar24 + 0x50),uStack_78);
    FUN_108da6878(param_1,lVar24);
    FUN_108d71098(plVar10,0x37,iVar2 + 1,*(undefined4 *)(lVar7 + 0x50),param_5);
    FUN_108da6878(param_1,lVar7);
    if (plVar10[1] != 0) {
      *(undefined1 *)(plVar10[1] + (long)*(int *)((long)plVar10 + 0x3c) * 0x18 + -0x15) = 1;
    }
    plVar11 = plVar10;
    FUN_108d71098(plVar10,0x6c,iVar2,0,0);
    FUN_108d71098(plVar10,0x65,iVar2,iStack_6c,0);
    if ((*(byte *)(lVar22 + 0x2f) >> 3 & 1) == 0) {
LAB_108dc45ec:
      uVar18 = 0;
    }
    else {
      uVar5 = *(ushort *)(lVar24 + 0x58);
      if (uVar5 == 0) {
        uVar19 = 0;
LAB_108dc45c0:
        if ((uint)uVar19 != (uint)uVar5) goto LAB_108dc45ec;
      }
      else {
        uVar19 = 0;
        lVar24 = *(long *)(lVar24 + 0x40);
        do {
          iVar17 = 0xf51757c;
          FUN_108d5e044(&UNK_10f51757c,*(undefined8 *)(lVar24 + uVar19 * 8));
          if (iVar17 != 0) goto LAB_108dc45c0;
          uVar19 = uVar19 + 1;
        } while (uVar5 != uVar19);
      }
      FUN_108d71098(plVar10,0x69,iVar2 + 1,0,0xffffffff);
      uVar18 = 0x10;
    }
    FUN_108d71098(plVar10,0x6e,iVar2 + 1,iStack_6c,1);
    if (plVar10[1] != 0) {
      *(undefined1 *)(plVar10[1] + (long)*(int *)((long)plVar10 + 0x3c) * 0x18 + -0x15) = uVar18;
    }
    FUN_108d71098(plVar10,9,iVar2,(uint)plVar11 + 1,0);
    uVar1 = *(uint *)((long)plVar10 + 0x3c);
    if ((uint)plVar11 < uVar1) {
      *(uint *)(plVar10[1] + ((ulong)plVar11 & 0xffffffff) * 0x18 + 8) = uVar1;
    }
    *(uint *)(plVar10[6] + 100) = uVar1 - 1;
    FUN_108d71098(plVar10,0x3d,iVar2,0,0);
    FUN_108d71098(plVar10,0x3d,iVar2 + 1,0,0);
  }
  if (uStack_84 != 0) {
    uVar1 = *(uint *)((long)plVar10 + 0x3c);
    if (uStack_84 < uVar1) {
      *(uint *)(plVar10[1] + (ulong)uStack_84 * 0x18 + 8) = uVar1;
    }
    *(uint *)(plVar10[6] + 100) = uVar1 - 1;
  }
  if (iStack_7c != 0) {
    bVar4 = *(byte *)((long)param_1 + 0x1f);
    if (bVar4 < 8) {
      puVar16 = (undefined1 *)((long)param_1 + 0x8e);
      iVar17 = 10;
      do {
        if (*(int *)(puVar16 + 6) == iStack_7c) {
          *puVar16 = 1;
          goto LAB_108dc472c;
        }
        puVar16 = puVar16 + 0x14;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar4 + 1;
      *(int *)((long)param_1 + (ulong)bVar4 * 4 + 0x24) = iStack_7c;
    }
  }
LAB_108dc472c:
  if (iStack_6c != 0) {
    bVar4 = *(byte *)((long)param_1 + 0x1f);
    if (bVar4 < 8) {
      puVar16 = (undefined1 *)((long)param_1 + 0x8e);
      iVar17 = 10;
      do {
        if (*(int *)(puVar16 + 6) == iStack_6c) {
          *puVar16 = 1;
          goto LAB_108dc4784;
        }
        puVar16 = puVar16 + 0x14;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar4 + 1;
      *(int *)((long)param_1 + (ulong)bVar4 * 4 + 0x24) = iStack_6c;
    }
  }
LAB_108dc4784:
  if (uStack_80 != 0) {
    FUN_108d71098(plVar10,0x18,0,0,0);
    uVar1 = *(uint *)((long)plVar10 + 0x3c);
    if (uStack_80 < uVar1) {
      *(uint *)(plVar10[1] + (ulong)uStack_80 * 0x18 + 8) = uVar1;
    }
    *(uint *)(plVar10[6] + 100) = uVar1 - 1;
    FUN_108d71098(plVar10,0x3d,iVar2 + 1,0,0);
    return 0;
  }
  return 1;
}



/* Entry: 108dc481c; end: 108dc49bb;  */

int FUN_108dc481c(long *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(param_3 + 0x46) >> 3 & 1) == 0) {
    return 0;
  }
  plVar2 = param_1;
  if ((long *)param_1[0x38] != (long *)0x0) {
    plVar2 = (long *)param_1[0x38];
  }
  plVar4 = plVar2 + 0x37;
  do {
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      param_1 = (long *)*param_1;
      FUN_108d6a6fc(param_1,0x18);
      if (param_1 == (long *)0x0) {
        return 0;
      }
      lVar5 = plVar2[0x37];
      plVar2[0x37] = (long)param_1;
      *param_1 = lVar5;
      param_1[1] = param_3;
      iVar3 = *(int *)((long)plVar2 + 0x54);
      iVar1 = iVar3 + 2;
      *(undefined4 *)(param_1 + 2) = param_2;
      *(int *)((long)param_1 + 0x14) = iVar1;
      *(int *)((long)plVar2 + 0x54) = iVar3 + 3;
      return iVar1;
    }
  } while (plVar4[1] != param_3);
  return *(int *)((long)plVar4 + 0x14);
}



/* Entry: 108dc49bc; end: 108dc4a3b;  */

void FUN_108dc49bc(long param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_108da6628();
  iVar1 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar1;
  FUN_108d71098(uVar2,0x21,param_3,iVar1,0);
  param_2[0x36] = *param_2;
  *param_2 = 0x9f;
  *(int *)(param_2 + 0x2c) = iVar1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xffffefff;
  return;
}



/* Entry: 108dc4a3c; end: 108dc4ad7;  */

void FUN_108dc4a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x23) != '\0') {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0x100000000;
    pcStack_60 = FUN_108daa264;
    uStack_58 = 0x108daa314;
    FUN_108daa320(&pcStack_60,param_2);
    if (uStack_40._4_1_ != '\0') {
      FUN_108daa1ec(param_1,param_2,param_3,0);
      return;
    }
  }
  FUN_108da6628(param_1,param_2,param_3);
  return;
}



/* Entry: 108dc4ad8; end: 108dc4bbb;  */

bool FUN_108dc4ad8(long param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x56);
  if ((uVar1 == *(ushort *)(param_2 + 0x56)) &&
     (*(char *)(param_1 + 0x5a) == *(char *)(param_2 + 0x5a))) {
    if (uVar1 != 0) {
      uVar6 = 0;
      lVar7 = *(long *)(param_2 + 8);
      lVar8 = *(long *)(param_1 + 8);
      do {
        if ((*(short *)(lVar7 + uVar6 * 2) != *(short *)(lVar8 + uVar6 * 2)) ||
           (*(char *)(*(long *)(param_2 + 0x38) + uVar6) !=
            *(char *)(*(long *)(param_1 + 0x38) + uVar6))) goto LAB_108dc4ba4;
        lVar3 = *(long *)(*(long *)(param_2 + 0x40) + uVar6 * 8);
        lVar5 = *(long *)(*(long *)(param_1 + 0x40) + uVar6 * 8);
        if (lVar3 == 0 || lVar5 == 0) {
          if (lVar3 != 0 || lVar5 != 0) goto LAB_108dc4ba4;
        }
        else {
          FUN_108d5e044();
          if ((int)lVar3 != 0) goto LAB_108dc4ba4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    FUN_108daa04c(uVar4,*(undefined8 *)(param_1 + 0x48),0xffffffff);
    bVar2 = (int)uVar4 == 0;
  }
  else {
LAB_108dc4ba4:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 108dc4bbc; end: 108dc4c6f;  */

void FUN_108dc4bbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  lVar2 = *(long *)(*plVar4 + 0x130);
  iVar3 = (int)param_2;
  *(int *)(lVar2 + 0x1c) = iVar3;
  if (iVar3 < 0) {
    lVar1 = (long)*(int *)(lVar2 + 0x24) + (long)*(int *)(lVar2 + 0x20);
    param_2 = 0;
    if (lVar1 != 0) {
      param_2 = ((long)iVar3 * -0x400) / lVar1;
    }
  }
  (*pcRam00000001132979e8)(*(undefined8 *)(lVar2 + 0x40),param_2);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x58) != 0) {
      (*pcRam00000001132979a8)();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    return;
  }
  return;
}



/* Entry: 108dc4c70; end: 108dc4d3f;  */

int FUN_108dc4c70(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  undefined1 *puVar7;
  
  plVar3 = param_1;
  FUN_108d70f98();
  iVar1 = *(int *)((long)param_1 + 0x54) + 1;
  *(int *)((long)param_1 + 0x54) = iVar1;
  puVar4 = (undefined8 *)*param_1;
  FUN_108d6a6fc(puVar4,8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = param_3;
  }
  plVar5 = plVar3;
  FUN_108d71098(plVar3,0x1a,0,iVar1,0);
  FUN_108d6aaec(plVar3,plVar5,puVar4,0xfffffff3);
  FUN_108d71004(plVar3,1);
  if (*(char *)(*plVar3 + 0x51) == '\0') {
    FUN_108d67c04(plVar3[4],param_2,0xffffffff,1,0);
  }
  iVar2 = *(int *)((long)plVar3 + 0x3c);
  iVar6 = iVar2;
  if (*(int *)(plVar3[6] + 0x60) <= iVar2) {
    plVar5 = plVar3;
    FUN_108d71134();
    if ((int)plVar5 != 0) {
      return 1;
    }
    iVar6 = *(int *)((long)plVar3 + 0x3c);
  }
  *(int *)((long)plVar3 + 0x3c) = iVar6 + 1;
  puVar7 = (undefined1 *)(plVar3[1] + (long)iVar2 * 0x18);
  *puVar7 = 0x23;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = iVar1;
  *(undefined4 *)(puVar7 + 8) = 1;
  *(undefined4 *)(puVar7 + 0xc) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puVar7[1] = 0;
  return iVar2;
}



/* Entry: 108dc4d40; end: 108dc4e1b;  */

void FUN_108dc4d40(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = param_1, FUN_108d5e044(param_1,&UNK_10f51a42f), (int)lVar1 != 0)) {
    FUN_108d5e044(param_1,"normal");
  }
  return;
}



/* Entry: 108dc4e1c; end: 108dc4eb3;  */

void FUN_108dc4e1c(long *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  if (*param_2 - 0x30 < 3) {
    uVar2 = *param_2 - 0x30 & 0xff;
  }
  else {
    pbVar1 = param_2;
    FUN_108d5e044(param_2,&DAT_10f2df167);
    if ((int)pbVar1 == 0) {
      uVar2 = 1;
    }
    else {
      FUN_108d5e044(param_2,&DAT_10f2df13e);
      uVar2 = 2;
      if ((int)param_2 != 0) {
        uVar2 = 0;
      }
    }
  }
  lVar3 = *param_1;
  if ((uVar2 != *(byte *)(lVar3 + 0x50)) && (FUN_108dc4eb4(), (int)param_1 == 0)) {
    *(char *)(lVar3 + 0x50) = (char)uVar2;
  }
  return;
}



/* Entry: 108dc4eb4; end: 108dc4f1b;  */

undefined8 FUN_108dc4eb4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(*(long *)(lVar2 + 0x20) + 0x28);
  if (lVar1 != 0) {
    if ((*(char *)(lVar2 + 0x4f) == '\0') || (*(char *)(lVar1 + 0x10) != '\0')) {
      func_0x000108d6a85c(param_1,&UNK_10f51a91d);
      return 1;
    }
    FUN_108d618d8(lVar1);
    *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x28) = 0;
    FUN_108d61aa4(lVar2);
  }
  return 0;
}



/* Entry: 108dc4f1c; end: 108dc4f8b;  */

void FUN_108dc4f1c(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((*(char *)(param_1 + 0x4f) != '\0') && (0 < *(int *)(param_1 + 0x28))) {
    uVar1 = *(int *)(param_1 + 0x28) + 1;
    pbVar2 = (byte *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      if (*(long *)(pbVar2 + -8) != 0) {
        FUN_108dc5090(*(long *)(pbVar2 + -8),*(uint *)(param_1 + 0x2c) & 0x1c | (uint)*pbVar2);
      }
      uVar1 = uVar1 - 1;
      pbVar2 = pbVar2 + 0x20;
    } while (1 < uVar1);
  }
  return;
}



/* Entry: 108dc4f8c; end: 108dc508f;  */

/* WARNING: Removing unreachable block (ram,0x000108dc53b0) */

void FUN_108dc4f8c(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  
  puVar1 = &DAT_10dfa2e62;
  if (param_2 != 0) {
    puVar1 = &UNK_10dfa2e5e;
  }
  uVar2 = 0xf51a98b;
  uVar3 = 4;
  if (param_2 != 0) {
    uVar3 = 0xc;
  }
  func_0x000108d6e1a0(param_1,&DAT_10f51a98b,2,1,puVar1,FUN_108dc51b0,0,0,0);
  func_0x000108d6e1a0(param_1,&DAT_10f51a98b,3,1,puVar1,FUN_108dc51b0,0,0,0);
  func_0x000108d6e1a0(param_1,&DAT_10f51a990,2,1,&DAT_10dfa0745,FUN_108dc51b0,0,0,0);
  FUN_108dc5380(param_1,&DAT_10f51a990,0xc);
  _strlen(&DAT_10f51a98b);
  FUN_108d6e688(param_1,&DAT_10f51a98b,uVar2 & 0x3fffffff,2,1,0);
  if (param_1 != 0) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | uVar3;
  }
  return;
}



/* Entry: 108dc5090; end: 108dc51af;  */

void FUN_108dc5090(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  lVar4 = *plVar6;
  if ((param_2 & 3) == 1) {
    bVar3 = false;
    *(undefined2 *)(lVar4 + 0xb) = 1;
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x10);
    *(bool *)(lVar4 + 0xb) = cVar1 != '\0';
    bVar3 = cVar1 == '\0' && (param_2 & 3) == 3;
    *(bool *)(lVar4 + 0xc) = bVar3;
    if (cVar1 == '\0') {
      if ((param_2 >> 2 & 1) == 0) {
        bVar5 = 2;
        *(undefined1 *)(lVar4 + 0xf) = 2;
        if ((param_2 >> 3 & 1) != 0) {
          *(undefined1 *)(lVar4 + 0xd) = 3;
          bVar5 = 2;
          goto LAB_108dc5120;
        }
      }
      else {
        bVar5 = 3;
        *(undefined1 *)(lVar4 + 0xf) = 3;
      }
      *(byte *)(lVar4 + 0xd) = bVar5;
      goto LAB_108dc5120;
    }
  }
  bVar5 = 0;
  *(undefined1 *)(lVar4 + 0xf) = 0;
  *(undefined1 *)(lVar4 + 0xd) = 0;
LAB_108dc5120:
  if (bVar3) {
    bVar5 = bVar5 | 0x20;
  }
  *(byte *)(lVar4 + 0xe) = bVar5;
  bVar5 = *(byte *)(lVar4 + 0x18) & 0xfe;
  if ((param_2 & 0x10) == 0) {
    bVar5 = bVar5 + 1;
  }
  *(byte *)(lVar4 + 0x18) = bVar5;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x58) != 0) {
      (*pcRam00000001132979a8)();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    return;
  }
  return;
}



/* Entry: 108dc51b0; end: 108dc537f;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

byte ** FUN_108dc51b0(long *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte **ppbVar7;
  byte *pbVar8;
  byte **ppbVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  byte *pbStack_58;
  
  lVar14 = *(long *)(*param_1 + 0x28);
  uVar5 = *param_3;
  FUN_108d67a14(uVar5,1);
  uVar6 = param_3[1];
  func_0x000108d67a18(uVar6,1);
  ppbVar7 = (byte **)*param_3;
  FUN_108d678b0(ppbVar7,1);
  if (*(int *)(lVar14 + 0x88) < (int)ppbVar7) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar2 = 0xf51a995;
    lVar14 = *param_1;
    if (*(long *)(lVar14 + 0x28) == 0) {
      iVar13 = 1000000000;
    }
    else {
      iVar13 = *(int *)(*(long *)(lVar14 + 0x28) + 0x68);
    }
    _strlen();
    uVar2 = uVar2 & 0x3fffffff;
    if (iVar13 < (int)uVar2) {
      uVar2 = iVar13 + 1;
    }
    if (iVar13 < (int)uVar2) {
      ppbVar7 = (byte **)0x12;
    }
    else {
      iVar12 = uVar2 + 1;
      iVar1 = iVar12;
      if (iVar12 < 0x21) {
        iVar1 = 0x20;
      }
      if (*(int *)(lVar14 + 0x20) < iVar1) {
        lVar3 = lVar14;
        FUN_108d82884(lVar14,iVar1,0);
        if ((int)lVar3 != 0) {
          return (byte **)0x7;
        }
        uVar4 = *(undefined8 *)(lVar14 + 0x10);
      }
      else {
        uVar4 = *(undefined8 *)(lVar14 + 0x18);
        *(undefined8 *)(lVar14 + 0x10) = uVar4;
        *(ushort *)(lVar14 + 8) = *(ushort *)(lVar14 + 8) & 0xd;
      }
      _memcpy(uVar4,&UNK_10f51a995,(long)iVar12);
      *(uint *)(lVar14 + 0xc) = uVar2;
      *(undefined2 *)(lVar14 + 8) = 0x202;
      *(undefined1 *)(lVar14 + 10) = 1;
      uVar10 = 0x12;
      if ((int)uVar2 <= iVar13) {
        uVar10 = 0;
      }
      ppbVar7 = (byte **)(ulong)uVar10;
    }
    return ppbVar7;
  }
  if (param_2 == 3) {
    pbVar8 = (byte *)param_3[2];
    func_0x000108d67a18(pbVar8,1);
    if (pbVar8 == (byte *)0x0) {
      return (byte **)0x0;
    }
    pbStack_58 = pbVar8;
    if ((pbVar8 != (byte *)0xffffffffffffffff) && (bVar11 = *pbVar8, bVar11 != 0)) {
      iVar13 = 0;
      do {
        iVar12 = iVar13;
        if (bVar11 < 0xc0) {
          pbVar8 = pbVar8 + 1;
          bVar11 = *pbVar8;
        }
        else {
          do {
            pbVar8 = pbVar8 + 1;
            bVar11 = *pbVar8;
          } while ((char)bVar11 < -0x40);
        }
        iVar13 = iVar12 + 1;
      } while (bVar11 != 0 && pbVar8 != (byte *)0xffffffffffffffff);
      if (iVar12 == 0) {
        ppbVar9 = &pbStack_58;
        FUN_108d96304(ppbVar9);
        ppbVar7 = ppbVar9;
        goto joined_r0x000108dc52f0;
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    ppbVar7 = (byte **)*param_1;
    FUN_108d67c04(ppbVar7,&UNK_10f51a9b6,0xffffffff,1,0xffffffffffffffff);
  }
  else {
    ppbVar9 = (byte **)0x0;
joined_r0x000108dc52f0:
    if ((uVar6 != 0) && (uVar5 != 0)) {
      FUN_108d6b684(uVar5,uVar6,*(undefined8 *)(param_1[1] + 8),ppbVar9);
      ppbVar7 = (byte **)*param_1;
      if (((ulong)ppbVar7[1] & 0x2460) != 0) {
        ppbVar9 = ppbVar7;
        if (((ulong)ppbVar7[1] & 0x2460) != 0) {
          func_0x000108d82720(ppbVar7);
        }
        *ppbVar7 = (byte *)(uVar5 & 0xffffffff);
        *(undefined2 *)(ppbVar7 + 1) = 4;
        return ppbVar9;
      }
      *ppbVar7 = (byte *)(uVar5 & 0xffffffff);
      *(undefined2 *)(ppbVar7 + 1) = 4;
    }
  }
  return ppbVar7;
}



/* Entry: 108dc5380; end: 108dc544f;  */

void FUN_108dc5380(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_2;
    _strlen(param_2);
    uVar2 = (uint)lVar1 & 0x3fffffff;
  }
  FUN_108d6e688(param_1,param_2,uVar2,2,1,0);
  if (param_1 != 0) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | param_3;
  }
  return;
}



/* Entry: 108dc5450; end: 108dc616b;  */

/* WARNING: Possible PIC construction at 0x000108dc56bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108dc56c0) */
/* WARNING: Removing unreachable block (ram,0x000108dc56f4) */
/* WARNING: Removing unreachable block (ram,0x000108dc5728) */
/* WARNING: Removing unreachable block (ram,0x000108dc5708) */
/* WARNING: Removing unreachable block (ram,0x000108dc5710) */
/* WARNING: Removing unreachable block (ram,0x000108dc5730) */
/* WARNING: Removing unreachable block (ram,0x000108dc5720) */
/* WARNING: Removing unreachable block (ram,0x000108dc5748) */
/* WARNING: Removing unreachable block (ram,0x000108dc5764) */
/* WARNING: Removing unreachable block (ram,0x000108dc5770) */
/* WARNING: Removing unreachable block (ram,0x000108dc577c) */
/* WARNING: Removing unreachable block (ram,0x000108dc5780) */
/* WARNING: Removing unreachable block (ram,0x000108dc57bc) */
/* WARNING: Removing unreachable block (ram,0x000108dc57cc) */
/* WARNING: Removing unreachable block (ram,0x000108dc56d0) */
/* WARNING: Removing unreachable block (ram,0x000108dc56d8) */
/* WARNING: Removing unreachable block (ram,0x000108dc57d0) */
/* WARNING: Removing unreachable block (ram,0x000108dc57f0) */
/* WARNING: Removing unreachable block (ram,0x000108dc57f8) */
/* WARNING: Removing unreachable block (ram,0x000108dc5874) */
/* WARNING: Removing unreachable block (ram,0x000108dc58e4) */
/* WARNING: Removing unreachable block (ram,0x000108dc5898) */
/* WARNING: Removing unreachable block (ram,0x000108dc5900) */
/* WARNING: Removing unreachable block (ram,0x000108dc5908) */
/* WARNING: Removing unreachable block (ram,0x000108dc595c) */
/* WARNING: Removing unreachable block (ram,0x000108dc5914) */
/* WARNING: Removing unreachable block (ram,0x000108dc5960) */
/* WARNING: Removing unreachable block (ram,0x000108dc5924) */
/* WARNING: Removing unreachable block (ram,0x000108dc5938) */
/* WARNING: Removing unreachable block (ram,0x000108dc5944) */
/* WARNING: Removing unreachable block (ram,0x000108dc5968) */
/* WARNING: Removing unreachable block (ram,0x000108dc5958) */
/* WARNING: Removing unreachable block (ram,0x000108dc5970) */
/* WARNING: Removing unreachable block (ram,0x000108dc58a4) */
/* WARNING: Removing unreachable block (ram,0x000108dc5980) */
/* WARNING: Removing unreachable block (ram,0x000108dc5990) */
/* WARNING: Removing unreachable block (ram,0x000108dc59b4) */
/* WARNING: Removing unreachable block (ram,0x000108dc5800) */
/* WARNING: Removing unreachable block (ram,0x000108dc5818) */
/* WARNING: Removing unreachable block (ram,0x000108dc582c) */
/* WARNING: Removing unreachable block (ram,0x000108dc5840) */
/* WARNING: Removing unreachable block (ram,0x000108dc58cc) */
/* WARNING: Removing unreachable block (ram,0x000108dc58d4) */
/* WARNING: Removing unreachable block (ram,0x000108dc5848) */
/* WARNING: Removing unreachable block (ram,0x000108dc5864) */
/* WARNING: Removing unreachable block (ram,0x000108dc55a0) */

void FUN_108dc5450(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  char **ppcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  char *pcVar10;
  char *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *pcStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  uint uStack_74;
  long lStack_70;
  long lStack_68;
  
  ppcVar2 = &pcStack_90;
  puVar13 = &stack0xfffffffffffffff0;
  plVar9 = *(long **)(*param_1 + 0x28);
  lStack_70 = 0;
  lStack_68 = 0;
  plStack_80 = (long *)0x0;
  pcVar3 = (char *)*param_3;
  FUN_108d67a14(pcVar3,1);
  pcVar4 = (char *)param_3[1];
  func_0x000108d67a18(pcVar4,1);
  pcVar10 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar10 = pcVar3;
  }
  pcVar3 = "";
  if (pcVar4 != (char *)0x0) {
    pcVar3 = pcVar4;
  }
  uVar1 = *(uint *)(plVar9 + 5);
  uVar12 = (ulong)uVar1;
  if ((int)uVar1 < (int)(*(uint *)((long)plVar9 + 0x84) + 2)) {
    if (*(char *)((long)plVar9 + 0x4f) != '\0') {
      plVar11 = (long *)plVar9[4];
      plVar6 = plVar11;
      if (0 < (int)uVar1) {
        do {
          lVar5 = *plVar6;
          FUN_108d5e044(lVar5,pcVar3);
          if ((int)lVar5 == 0) {
            puVar8 = &UNK_10f51aba8;
            pcStack_90 = pcVar3;
            goto LAB_108dc5558;
          }
          uVar12 = uVar12 - 1;
          plVar6 = plVar6 + 4;
        } while (uVar12 != 0);
      }
      plVar6 = plVar9;
      if (plVar11 == plVar9 + 0x58) {
        FUN_108d6a6fc(plVar9,0x60);
        if (plVar6 == (long *)0x0) {
          return;
        }
        plVar11 = (long *)plVar9[4];
        lVar14 = plVar11[1];
        lVar5 = *plVar11;
        lVar16 = plVar11[3];
        lVar15 = plVar11[2];
        lVar17 = plVar11[4];
        lVar19 = plVar11[7];
        lVar18 = plVar11[6];
        plVar6[5] = plVar11[5];
        plVar6[4] = lVar17;
        plVar6[7] = lVar19;
        plVar6[6] = lVar18;
        plVar6[1] = lVar14;
        *plVar6 = lVar5;
        plVar6[3] = lVar16;
        plVar6[2] = lVar15;
      }
      else {
        func_0x000108d711ec(plVar9,plVar11,(long)(int)uVar1 * 0x20 + 0x20);
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      plVar9[4] = (long)plVar6;
      plVar6 = plVar6 + (long)(int)plVar9[5] * 4;
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      uStack_74 = *(uint *)(plVar9 + 8);
      uVar7 = *(undefined8 *)(*plVar9 + 0x18);
      func_0x000108dc5bd8(uVar7,pcVar10,&uStack_74,&uStack_88,&lStack_68,&lStack_70);
      lVar14 = lStack_68;
      lVar5 = lStack_70;
      if ((int)uVar7 == 0) {
        uStack_74 = uStack_74 | 0x100;
        FUN_108d7d91c(uStack_88,lStack_68,plVar9,plVar6 + 1,0);
        unaff_x30 = 0x108dc56c0;
      }
      else {
        if ((int)uVar7 == 7) {
          *(undefined1 *)((long)plVar9 + 0x51) = 1;
        }
        *(undefined4 *)((long)param_1 + 0x24) = 1;
        *(undefined1 *)((long)param_1 + 0x29) = 1;
        FUN_108d67c04(*param_1,lStack_70,0xffffffff,1,0xffffffffffffffff);
        ppcVar2 = (char **)register0x00000008;
        lVar14 = lVar5;
        param_1 = unaff_x19;
        plVar9 = unaff_x20;
        pcVar10 = unaff_x21;
        param_3 = unaff_x22;
        puVar13 = unaff_x29;
      }
      *(undefined8 **)((long)ppcVar2 + -0x30) = param_3;
      *(char **)((long)ppcVar2 + -0x28) = pcVar10;
      *(long **)((long)ppcVar2 + -0x20) = plVar9;
      *(long **)((long)ppcVar2 + -0x18) = param_1;
      *(undefined1 **)((long)ppcVar2 + -0x10) = puVar13;
      *(undefined8 *)((long)ppcVar2 + -8) = unaff_x30;
      if (lVar14 == 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
      if (iRam0000000113297910 != 0) {
        if (lRam0000000113829af0 != 0) {
          (*pcRam0000000113297998)();
        }
        lVar5 = lVar14;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 - (int)lVar5;
        lRam0000000113829a98 = lRam0000000113829a98 + -1;
        (*pcRam0000000113297940)(lVar14);
        lVar14 = lRam0000000113829af0;
        UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
        if (lRam0000000113829af0 == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar14);
      return;
    }
    puVar8 = &UNK_10f51ab7e;
  }
  else {
    puVar8 = &UNK_10f51ab59;
    pcStack_90 = (char *)(ulong)*(uint *)((long)plVar9 + 0x84);
  }
LAB_108dc5558:
  plVar6 = plVar9;
  FUN_108d6a8e0(plVar9,puVar8);
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    plStack_80 = plVar6;
    FUN_108d67c04(*param_1,plVar6,0xffffffff,1,0xffffffffffffffff);
    func_0x000108d60660(plVar9,plStack_80);
  }
  return;
}



/* Entry: 108dc616c; end: 108dc6207;  */

void FUN_108dc616c(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x78;
    FUN_108d60848();
    if (param_2 != (undefined8 *)0x0) {
      param_2[0xe] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      goto LAB_108dc61c0;
    }
  }
  else {
    FUN_108d7e5d4(param_2,0x78,0x108d8e2fc);
    if (param_2 != (undefined8 *)0x0) {
LAB_108dc61c0:
      if (*(char *)(param_2 + 0xe) != '\0') {
        return;
      }
      param_2[0xc] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      *(undefined1 *)((long)param_2 + 0x71) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}



/* Entry: 108dc6208; end: 108dc639f;  */

void FUN_108dc6208(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char acStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = (char *)*param_3;
  FUN_108d67a14(pcVar4,1);
  lVar10 = *(long *)(*param_1 + 0x28);
  pcVar2 = "";
  if (pcVar4 != (char *)0x0) {
    pcVar2 = pcVar4;
  }
  uVar3 = *(uint *)(lVar10 + 0x28);
  if (0 < (int)uVar3) {
    uVar16 = 0;
    puVar13 = *(undefined8 **)(lVar10 + 0x20);
    do {
      plVar12 = (long *)puVar13[1];
      if (plVar12 != (long *)0x0) {
        uVar5 = *puVar13;
        pcVar4 = pcVar2;
        FUN_108d5e044(uVar5,pcVar2);
        if ((int)uVar5 == 0) {
          if (uVar16 < 2) {
            puVar7 = &UNK_10f51acda;
            goto LAB_108dc62a4;
          }
          if (*(char *)(lVar10 + 0x4f) == '\0') {
            puVar7 = &UNK_10f51acf4;
            goto LAB_108dc62a4;
          }
          if (((char)plVar12[2] == '\0') && ((int)plVar12[3] == 0)) {
            FUN_108d618d8();
            puVar13[1] = 0;
            puVar13[3] = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
              iVar8 = *(int *)(lVar10 + 0x28);
              if (iVar8 < 3) {
                iVar9 = 2;
              }
              else {
                lVar11 = 0;
                lVar14 = 2;
                iVar9 = 2;
                do {
                  lVar1 = *(long *)(lVar10 + 0x20) + lVar11;
                  if (*(long *)(lVar1 + 0x48) == 0) {
                    func_0x000108d60660(lVar10,*(undefined8 *)(lVar1 + 0x40));
                    *(undefined8 *)(lVar1 + 0x40) = 0;
                  }
                  else {
                    if (iVar9 < lVar14) {
                      uVar5 = *(undefined8 *)(lVar1 + 0x40);
                      uVar18 = *(undefined8 *)(lVar1 + 0x58);
                      uVar17 = *(undefined8 *)(lVar1 + 0x50);
                      puVar13 = (undefined8 *)(*(long *)(lVar10 + 0x20) + (long)iVar9 * 0x20);
                      puVar13[1] = *(undefined8 *)(lVar1 + 0x48);
                      *puVar13 = uVar5;
                      puVar13[3] = uVar18;
                      puVar13[2] = uVar17;
                    }
                    iVar9 = iVar9 + 1;
                  }
                  lVar14 = lVar14 + 1;
                  iVar8 = *(int *)(lVar10 + 0x28);
                  lVar11 = lVar11 + 0x20;
                } while (lVar14 < iVar8);
              }
              _bzero(*(long *)(lVar10 + 0x20) + (long)iVar9 * 0x20,
                     -(ulong)((uint)(iVar8 - iVar9) >> 0x1f) & 0xffffffe000000000 |
                     (ulong)(uint)(iVar8 - iVar9) << 5);
              *(int *)(lVar10 + 0x28) = iVar9;
              if (iVar9 < 3) {
                puVar6 = *(undefined8 **)(lVar10 + 0x20);
                puVar13 = (undefined8 *)(lVar10 + 0x2c0);
                if (puVar6 != puVar13) {
                  uVar17 = puVar6[1];
                  uVar5 = *puVar6;
                  uVar19 = puVar6[3];
                  uVar18 = puVar6[2];
                  uVar20 = puVar6[4];
                  uVar22 = puVar6[7];
                  uVar21 = puVar6[6];
                  *(undefined8 *)(lVar10 + 0x2e8) = puVar6[5];
                  *(undefined8 *)(lVar10 + 0x2e0) = uVar20;
                  *(undefined8 *)(lVar10 + 0x2f8) = uVar22;
                  *(undefined8 *)(lVar10 + 0x2f0) = uVar21;
                  *(undefined8 *)(lVar10 + 0x2c8) = uVar17;
                  *puVar13 = uVar5;
                  *(undefined8 *)(lVar10 + 0x2d8) = uVar19;
                  *(undefined8 *)(lVar10 + 0x2d0) = uVar18;
                  func_0x000108d60660(lVar10);
                  *(undefined8 **)(lVar10 + 0x20) = puVar13;
                }
              }
              return;
            }
            goto LAB_108dc639c;
          }
          puVar7 = &UNK_10f51ad1e;
          goto LAB_108dc62a4;
        }
      }
      uVar16 = uVar16 + 1;
      puVar13 = puVar13 + 4;
    } while (uVar3 != uVar16);
  }
  puVar7 = &UNK_10f51acc5;
LAB_108dc62a4:
  func_0x000108d64bd8(0x80,acStack_d8,puVar7);
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  plVar12 = (long *)*param_1;
  pcVar4 = acStack_d8;
  FUN_108d67c04(plVar12,pcVar4,0xffffffff,1,0xffffffffffffffff);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_108dc639c:
  ___stack_chk_fail();
  lVar10 = *plVar12;
  iVar8 = *(int *)(lVar10 + 0x28);
  if (0 < iVar8) {
    iVar9 = 0;
    lVar14 = *(long *)(lVar10 + 0x20);
    do {
      plVar15 = *(long **)(*(long *)(lVar14 + 0x18) + 0x10);
      if (plVar15 != (long *)0x0) {
        do {
          FUN_108dc6420(plVar12,plVar15[2],pcVar4);
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        iVar8 = *(int *)(lVar10 + 0x28);
      }
      iVar9 = iVar9 + 1;
      lVar14 = lVar14 + 0x20;
    } while (iVar9 < iVar8);
  }
  return;
}



/* Entry: 108dc63a0; end: 108dc641f;  */

void FUN_108dc63a0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x28);
  if (0 < iVar1) {
    iVar3 = 0;
    lVar4 = *(long *)(lVar2 + 0x20);
    do {
      plVar5 = *(long **)(*(long *)(lVar4 + 0x18) + 0x10);
      if (plVar5 != (long *)0x0) {
        do {
          FUN_108dc6420(param_1,plVar5[2],param_2);
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        iVar1 = *(int *)(lVar2 + 0x28);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < iVar1);
  }
  return;
}



/* Entry: 108dc6420; end: 108dc653b;  */

void FUN_108dc6420(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_2 + 0x10);
  do {
    if (lVar5 == 0) {
      return;
    }
    if (param_3 == 0) {
LAB_108dc6490:
      if (*(long *)(param_2 + 0x68) == 0) {
        uVar7 = 0xfff0bdc0;
      }
      else {
        uVar1 = *(uint *)(*param_1 + 0x28);
        if ((int)uVar1 < 1) {
          uVar7 = 0;
        }
        else {
          uVar6 = 0;
          plVar4 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
          do {
            uVar7 = uVar6;
            if (*plVar4 == *(long *)(param_2 + 0x68)) break;
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 4;
            uVar7 = (ulong)uVar1;
          } while (uVar1 != uVar6);
        }
      }
      plVar4 = param_1;
      if ((long *)param_1[0x38] != (long *)0x0) {
        plVar4 = (long *)param_1[0x38];
      }
      func_0x000108dab6e4(param_1,uVar7);
      *(uint *)(plVar4 + 0x2d) = *(uint *)(plVar4 + 0x2d) | 1 << (ulong)((uint)uVar7 & 0x1f);
      FUN_108db0ccc(param_1,lVar5,0xffffffff);
    }
    else {
      uVar2 = *(ushort *)(lVar5 + 0x58);
      if ((ulong)uVar2 != 0) {
        uVar7 = 0;
        lVar8 = *(long *)(lVar5 + 8);
        do {
          if (-1 < *(short *)(lVar8 + uVar7 * 2)) {
            uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + uVar7 * 8);
            FUN_108d5e044(uVar3,param_3);
            if ((int)uVar3 == 0) goto LAB_108dc6490;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
      }
    }
    lVar5 = *(long *)(lVar5 + 0x28);
  } while( true );
}



/* Entry: 108dc653c; end: 108dc6713;  */

int FUN_108dc653c(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = (uint)param_2;
  lVar5 = *(long *)(*(long *)(*param_1 + 0x20) + (long)(int)uVar2 * 0x20 + 0x18);
  plVar6 = param_1;
  if ((long *)param_1[0x38] != (long *)0x0) {
    plVar6 = (long *)param_1[0x38];
  }
  func_0x000108dab6e4();
  *(uint *)(plVar6 + 0x2d) = *(uint *)(plVar6 + 0x2d) | 1 << (ulong)(uVar2 & 0x1f);
  iVar1 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar1 + 3;
  FUN_108dc6714(param_1,param_2,iVar1,0,0);
  plVar6 = *(long **)(lVar5 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar5 = param_1[10];
    iVar3 = *(int *)((long)param_1 + 0x54);
    do {
      func_0x000108dc68dc(param_1,plVar6[2],0,iVar1,iVar3 + 1,(int)lVar5);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  FUN_108d70f98();
  if (param_1 != (long *)0x0) {
    iVar1 = *(int *)((long)param_1 + 0x3c);
    iVar3 = iVar1;
    if (*(int *)(param_1[6] + 0x60) <= iVar1) {
      plVar6 = param_1;
      FUN_108d71134();
      if ((int)plVar6 != 0) {
        return 1;
      }
      iVar3 = *(int *)((long)param_1 + 0x3c);
    }
    *(int *)((long)param_1 + 0x3c) = iVar3 + 1;
    puVar4 = (undefined1 *)(param_1[1] + (long)iVar1 * 0x18);
    *puVar4 = 0x7b;
    puVar4[3] = 0;
    *(uint *)(puVar4 + 4) = uVar2;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    puVar4[1] = 0;
    return iVar1;
  }
  return 0;
}



/* Entry: 108dc6714; end: 108dc7107;  */

void FUN_108dc6714(long *param_1,long *param_2,long *param_3,ulong param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  long *plVar31;
  undefined1 auStack_77 [3];
  undefined4 auStack_74 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *param_1;
  plVar8 = param_1;
  plVar9 = param_2;
  plVar14 = param_3;
  uVar15 = param_4;
  FUN_108d70f98();
  plVar10 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar26 = 0;
    lVar18 = *(long *)(lVar25 + 0x20);
    ppuVar29 = &PTR_DAT_110ac5058;
    do {
      puVar30 = ppuVar29[-1];
      lVar20 = lVar25;
      func_0x000108d700dc(lVar25,puVar30,*(undefined8 *)(lVar18 + (long)(int)param_2 * 0x20));
      if (lVar20 == 0) {
        if (*ppuVar29 != (undefined *)0x0) {
          FUN_108dac88c(param_1,&UNK_10f51ad89);
          auStack_74[lVar26] = *(undefined4 *)((long)param_1 + 0x1a4);
          auStack_77[lVar26] = 4;
        }
      }
      else {
        uVar2 = *(undefined4 *)(lVar20 + 0x38);
        auStack_74[lVar26] = uVar2;
        auStack_77[lVar26] = 0;
        func_0x000108da6790(param_1,param_2,uVar2,1,puVar30);
        if (param_4 == 0) {
          FUN_108d71098(plVar8,0x76,uVar2,param_2,0);
        }
        else {
          FUN_108dac88c(param_1,&UNK_10f519c8e);
        }
      }
      lVar26 = lVar26 + 1;
      ppuVar29 = ppuVar29 + 2;
    } while (lVar26 != 3);
    plVar9 = plVar8;
    FUN_108d71098(plVar8,0x37,(int)param_3,auStack_74[0]);
    plVar14 = (long *)0x3;
    uVar15 = 0xfffffff2;
    FUN_108d6aaec();
    param_5 = param_2;
    if (plVar8[1] != 0) {
      *(undefined1 *)(plVar8[1] + (long)*(int *)((long)plVar8 + 0x3c) * 0x18 + -0x15) =
           auStack_77[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *plVar10;
  iVar16 = (int)param_5;
  iVar1 = iVar16 + 7;
  iVar3 = *(int *)((long)plVar10 + 0x54);
  if (*(int *)((long)plVar10 + 0x54) <= iVar1) {
    iVar3 = iVar1;
  }
  *(int *)((long)plVar10 + 0x54) = iVar3;
  plVar8 = plVar10;
  FUN_108d70f98();
  if (((plVar9 != (long *)0x0) && (plVar8 != (long *)0x0)) && ((int)plVar9[7] != 0)) {
    lVar26 = *plVar9;
    if (lVar26 == 0) {
LAB_108dc699c:
      if (plVar9[0xd] == 0) {
        uVar27 = 0xfff0bdc0;
      }
      else {
        uVar24 = *(uint *)(lVar25 + 0x28);
        if ((int)uVar24 < 1) {
          uVar27 = 0;
        }
        else {
          uVar19 = 0;
          plVar31 = (long *)(*(long *)(lVar25 + 0x20) + 0x18);
          do {
            uVar27 = uVar19;
            if (*plVar31 == plVar9[0xd]) break;
            uVar19 = uVar19 + 1;
            plVar31 = plVar31 + 4;
            uVar27 = (ulong)uVar24;
          } while (uVar24 != uVar19);
        }
      }
      plVar31 = plVar10;
      FUN_108dabcbc(plVar10,0x1c,lVar26,0,
                    *(undefined8 *)
                     (*(long *)(lVar25 + 0x20) +
                     (-(uVar27 >> 0x1f & 1) & 0xffffffe000000000 | (uVar27 & 0xffffffff) << 5)));
      if ((int)plVar31 == 0) {
        func_0x000108da6790(plVar10,uVar27,(int)plVar9[7],0,*plVar9);
        iVar22 = (int)param_6;
        iVar3 = (int)plVar10[10];
        if ((int)plVar10[10] <= iVar22 + 2) {
          iVar3 = iVar22 + 2;
        }
        *(int *)(plVar10 + 10) = iVar3;
        func_0x000108da66a0(plVar10,param_6,uVar27,plVar9,0x36);
        lVar26 = *plVar9;
        plVar31 = plVar8;
        FUN_108d71098(plVar8,0x61,0,iVar16 + 4,0);
        FUN_108d6aaec(plVar8,plVar31,lVar26,0);
        plVar31 = (long *)plVar9[2];
        bVar6 = true;
        uVar19 = uVar15;
        if (plVar31 != (long *)0x0) {
          bVar6 = true;
          do {
            if ((plVar14 == (long *)0x0) || (plVar14 == plVar31)) {
              bVar7 = false;
              if (plVar31[9] != 0) {
                bVar7 = bVar6;
              }
              bVar6 = bVar7;
              if (((*(byte *)((long)plVar9 + 0x46) >> 5 & 1) == 0) ||
                 ((*(byte *)((long)plVar31 + 0x5b) & 3) != 2)) {
                uVar23 = (uint)*(ushort *)(plVar31 + 0xb);
                lVar26 = *plVar31;
                uVar24 = uVar23;
                if ((*(byte *)((long)plVar31 + 0x5b) >> 3 & 1) != 0) {
                  uVar24 = (uint)*(ushort *)((long)plVar31 + 0x56);
                }
              }
              else {
                uVar23 = (uint)*(ushort *)((long)plVar31 + 0x56);
                lVar26 = *plVar9;
                uVar24 = uVar23;
              }
              uVar5 = uVar24 - 1;
              uVar19 = (ulong)uVar5;
              plVar11 = plVar8;
              FUN_108d71098(plVar8,0x61,0,iVar16 + 5,0);
              FUN_108d6aaec(plVar8,plVar11,lVar26,0);
              iVar3 = *(int *)((long)plVar10 + 0x54);
              if (*(int *)((long)plVar10 + 0x54) <= (int)(uVar5 + iVar1)) {
                iVar3 = uVar5 + iVar1;
              }
              *(int *)((long)plVar10 + 0x54) = iVar3;
              FUN_108d71098(plVar8,0x36,iVar22 + 1,(int)plVar31[10],uVar27);
              lVar26 = plVar10[2];
              plVar11 = plVar10;
              FUN_108da68a8(plVar10,plVar31);
              FUN_108d6aaec(lVar26,0xffffffff,plVar11,0xfffffffa);
              FUN_108d71098(plVar8,0x19,uVar23,iVar16 + 2,0);
              FUN_108d71098(plVar8,0x19,*(undefined2 *)((long)plVar31 + 0x56),iVar16 + 3,0);
              FUN_108d71098(plVar8,1,0,iVar16 + 2,iVar16 + 1);
              FUN_108d6aaec(plVar8,0xffffffff,&UNK_110ac5080,0xfffffffb);
              if (plVar8[1] != 0) {
                *(undefined1 *)(plVar8[1] + (long)*(int *)((long)plVar8 + 0x3c) * 0x18 + -0x15) = 2;
              }
              plVar11 = plVar8;
              FUN_108d71098(plVar8,0x6c,iVar22 + 1,0,0);
              FUN_108d71098(plVar8,0x19,0,iVar16 + 2,0);
              if (uVar24 < 2) {
                iVar3 = *(int *)((long)plVar8 + 0x3c);
LAB_108dc6e90:
                FUN_108d71098(plVar8,1,1,iVar16 + 1,iVar16 + 3);
                FUN_108d6aaec(plVar8,0xffffffff,&UNK_110ac50c8,0xfffffffb);
                if (plVar8[1] != 0) {
                  *(undefined1 *)(plVar8[1] + (long)*(int *)((long)plVar8 + 0x3c) * 0x18 + -0x15) =
                       2;
                }
                FUN_108d71098(plVar8,9,iVar22 + 1,iVar3,0);
                FUN_108d71098(plVar8,1,0,iVar16 + 1,iVar16 + 6);
                FUN_108d6aaec(plVar8,0xffffffff,&UNK_110ac5110,0xfffffffb);
                if (plVar8[1] != 0) {
                  *(undefined1 *)(plVar8[1] + (long)*(int *)((long)plVar8 + 0x3c) * 0x18 + -0x15) =
                       1;
                }
                plVar12 = plVar8;
                FUN_108d71098(plVar8,0x31,iVar16 + 4,3,iVar16 + 3);
                FUN_108d6aaec(plVar8,plVar12,&UNK_10f51ada0,0);
                FUN_108d71098(plVar8,0x4a,uVar15 & 0xffffffff,param_5,0);
                FUN_108d71098(plVar8,0x4b,uVar15 & 0xffffffff,iVar16 + 3,param_5);
                lVar26 = plVar8[1];
                uVar24 = *(uint *)((long)plVar8 + 0x3c);
                if (lVar26 != 0) {
                  *(undefined1 *)(lVar26 + (long)(int)uVar24 * 0x18 + -0x15) = 8;
                }
                if ((uint)plVar11 < uVar24) {
                  *(uint *)(lVar26 + ((ulong)plVar11 & 0xffffffff) * 0x18 + 8) = uVar24;
                }
                *(uint *)(plVar8[6] + 100) = uVar24 - 1;
              }
              else {
                uVar24 = (uint)plVar8[6];
                FUN_108da84a4();
                lVar26 = lVar25;
                FUN_108d6a6fc(lVar25,uVar19 << 2);
                if (lVar26 != 0) {
                  FUN_108d71098(plVar8,0x10,0,0,0);
                  iVar3 = *(int *)((long)plVar8 + 0x3c);
                  if (((uVar5 == 1) && (*(short *)((long)plVar31 + 0x56) == 1)) &&
                     (*(char *)((long)plVar31 + 0x5a) != '\0')) {
                    FUN_108d71098(plVar8,0x4d,iVar1,uVar24,0);
                  }
                  uVar28 = 0;
                  do {
                    plVar12 = plVar10;
                    func_0x000108da6a20(plVar10,*(undefined8 *)(plVar31[8] + uVar28 * 8));
                    FUN_108d71098(plVar8,0x19,uVar28,iVar16 + 2,0);
                    FUN_108d71098(plVar8,0x2f,iVar22 + 1,uVar28,iVar16 + 3);
                    plVar13 = plVar8;
                    FUN_108d71098(plVar8,0x4e,iVar16 + 3,0,iVar1 + (int)uVar28);
                    FUN_108d6aaec(plVar8,plVar13,plVar12,0xfffffffc);
                    *(int *)(lVar26 + uVar28 * 4) = (int)plVar13;
                    if (plVar8[1] != 0) {
                      *(undefined1 *)
                       (plVar8[1] + (long)*(int *)((long)plVar8 + 0x3c) * 0x18 + -0x15) = 0x80;
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar19 != uVar28);
                  FUN_108d71098(plVar8,0x19,uVar19,iVar16 + 2,0);
                  FUN_108d71098(plVar8,0x10,0,uVar24,0);
                  uVar23 = *(uint *)((long)plVar8 + 0x3c);
                  if (iVar3 - 1U < uVar23) {
                    *(uint *)(plVar8[1] + (ulong)(iVar3 - 1U) * 0x18 + 8) = uVar23;
                  }
                  uVar28 = 0;
                  *(uint *)(plVar8[6] + 100) = uVar23 - 1;
                  do {
                    uVar5 = *(uint *)(lVar26 + uVar28 * 4);
                    uVar23 = *(uint *)((long)plVar8 + 0x3c);
                    if (uVar5 < uVar23) {
                      *(uint *)(plVar8[1] + (ulong)uVar5 * 0x18 + 8) = uVar23;
                    }
                    *(uint *)(plVar8[6] + 100) = uVar23 - 1;
                    FUN_108d71098(plVar8,0x2f,iVar22 + 1,uVar28,iVar1 + (int)uVar28);
                    uVar28 = uVar28 + 1;
                  } while (uVar19 != uVar28);
                  lVar18 = plVar8[6];
                  if ((int)uVar24 < 0) {
                    lVar20 = *(long *)(lVar18 + 0x80);
                    iVar17 = *(int *)((long)plVar8 + 0x3c);
                    if (lVar20 != 0) {
                      *(int *)(lVar20 + (ulong)~uVar24 * 4) = iVar17;
                    }
                  }
                  else {
                    iVar17 = *(int *)((long)plVar8 + 0x3c);
                  }
                  *(int *)(lVar18 + 100) = iVar17 + -1;
                  func_0x000108d60660(lVar25,lVar26);
                  goto LAB_108dc6e90;
                }
              }
              uVar19 = uVar15 & 0xffffffff;
            }
            plVar31 = (long *)plVar31[5];
          } while (plVar31 != (long *)0x0);
        }
        if ((plVar14 == (long *)0x0) && (bVar6)) {
          FUN_108d71098(plVar8,0x32,param_6,iVar16 + 6,0);
          plVar9 = plVar8;
          FUN_108d71098(plVar8,0x2e,iVar16 + 6,0,0);
          FUN_108d71098(plVar8,0x1c,0,iVar16 + 5,0);
          plVar10 = plVar8;
          FUN_108d71098(plVar8,0x31,iVar16 + 4,3,iVar16 + 3);
          FUN_108d6aaec(plVar8,plVar10,&UNK_10f51ada0,0);
          FUN_108d71098(plVar8,0x4a,uVar19,param_5,0);
          FUN_108d71098(plVar8,0x4b,uVar19,iVar16 + 3,param_5);
          lVar25 = plVar8[1];
          uVar24 = *(uint *)((long)plVar8 + 0x3c);
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + (long)(int)uVar24 * 0x18 + -0x15) = 8;
          }
          if ((uint)plVar9 < uVar24) {
            *(uint *)(lVar25 + ((ulong)plVar9 & 0xffffffff) * 0x18 + 8) = uVar24;
          }
          *(uint *)(plVar8[6] + 100) = uVar24 - 1;
        }
      }
    }
    else {
      lVar18 = 0;
      do {
        if ((ulong)*(byte *)(lVar26 + lVar18) == 0) {
          cVar4 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar18]];
          cVar21 = '\0';
LAB_108dc6994:
          if (cVar21 == cVar4) {
            return;
          }
          goto LAB_108dc699c;
        }
        cVar21 = (&UNK_10dfa05fd)[*(byte *)(lVar26 + lVar18)];
        cVar4 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar18]];
        if (cVar21 != cVar4) goto LAB_108dc6994;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 7);
    }
  }
  return;
}



/* Entry: 108dc7108; end: 108dc7147;  */

int FUN_108dc7108(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FUN_108d70f98();
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = iVar1;
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x60) <= iVar1) {
    lVar2 = param_1;
    FUN_108d71134();
    if ((int)lVar2 != 0) {
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x3c) = iVar3 + 1;
  puVar4 = (undefined1 *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
  *puVar4 = 0x7b;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = param_2;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[1] = 0;
  return iVar1;
}



/* Entry: 108dc7148; end: 108dc71ff;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc7148(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = (int)*param_3;
  func_0x000108d6797c();
  uVar1 = iVar7 + 1U & 0xfffffffe;
  uVar2 = (undefined4)param_3[1];
  func_0x000108d6797c();
  puVar6 = *(undefined4 **)(*param_1 + 0x28);
  puVar4 = puVar6;
  FUN_108d68fc8(puVar6,(long)(int)(uVar1 * 8 + 0x58));
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = *param_1;
    if ((*(ushort *)(uVar3 + 8) & 0x2460) == 0) {
      *(undefined2 *)(uVar3 + 8) = 1;
    }
    else {
      func_0x000108d82720();
      uVar3 = *param_1;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 7;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    *(undefined1 *)(*(long *)(uVar3 + 0x28) + 0x51) = 1;
    return uVar3;
  }
  *(undefined4 **)(puVar4 + 0x14) = puVar6;
  *puVar4 = 0;
  puVar4[2] = iVar7;
  puVar4[3] = uVar2;
  *(undefined4 **)(puVar4 + 6) = puVar4 + 0x16 + (int)uVar1;
  *(undefined4 **)(puVar4 + 8) = puVar4 + 0x16;
  uVar3 = *param_1;
  FUN_108d67c04(uVar3,puVar4,0x58,0,FUN_108dc7200);
  if ((int)uVar3 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar3 = *param_1;
    if (*(long *)(uVar3 + 0x28) == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*(long *)(uVar3 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar7 < (int)uVar1) {
      uVar1 = iVar7 + 1;
    }
    if (((*(ushort *)(uVar3 + 8) & 0x2460) != 0) || (*(int *)(uVar3 + 0x20) != 0)) {
      FUN_108d826d0(uVar3);
    }
    *(undefined **)(uVar3 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar3 + 0x30) = 0;
    *(uint *)(uVar3 + 0xc) = uVar1;
    *(undefined2 *)(uVar3 + 8) = 0xa02;
    *(undefined1 *)(uVar3 + 10) = 1;
    uVar5 = 0x12;
    if ((int)uVar1 <= iVar7) {
      uVar5 = 0;
    }
    return (ulong)uVar5;
  }
  return uVar3;
}



/* Entry: 108dc7200; end: 108dc720b;  */

void FUN_108dc7200(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar3 = param_1[10];
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x328) != 0) {
      if ((param_1 < *(undefined8 **)(lVar3 + 0x170)) ||
         (*(undefined8 **)(lVar3 + 0x178) <= param_1)) {
        (*pcRam0000000113297950)();
        uVar1 = (uint)param_1;
      }
      else {
        uVar1 = (uint)*(ushort *)(lVar3 + 0x150);
      }
      **(int **)(lVar3 + 0x328) = **(int **)(lVar3 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(lVar3 + 0x170) <= param_1) && (param_1 < *(undefined8 **)(lVar3 + 0x178)))
    {
      *param_1 = *(undefined8 *)(lVar3 + 0x168);
      *(undefined8 **)(lVar3 + 0x168) = param_1;
      *(int *)(lVar3 + 0x154) = *(int *)(lVar3 + 0x154) + -1;
      return;
    }
  }
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = param_1;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_1);
    param_1 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 108dc720c; end: 108dc72db;  */

void FUN_108dc720c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  
  piVar3 = (int *)*param_3;
  FUN_108d677b4();
  uVar4 = param_3[1];
  func_0x000108d6797c();
  if (*piVar3 == 0) {
    if (0 < piVar3[2]) {
      lVar7 = 0;
      lVar6 = *(long *)(piVar3 + 6);
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < piVar3[2]);
    }
  }
  else {
    iVar2 = (int)uVar4;
    if (0 < iVar2) {
      uVar4 = uVar4 & 0x7fffffff;
      piVar5 = *(int **)(piVar3 + 6);
      do {
        *piVar5 = *piVar5 + 1;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 != 0);
    }
    if (iVar2 < piVar3[2]) {
      lVar6 = *(long *)(piVar3 + 6);
      lVar1 = *(long *)(piVar3 + 8);
      lVar7 = (long)iVar2;
      do {
        *(int *)(lVar1 + lVar7 * 4) = *(int *)(lVar1 + lVar7 * 4) + 1;
        *(undefined4 *)(lVar6 + lVar7 * 4) = 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < piVar3[2]);
    }
  }
  *piVar3 = *piVar3 + 1;
  return;
}



/* Entry: 108dc72dc; end: 108dc73ff;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc72dc(ulong *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  lVar3 = *param_3;
  FUN_108d677b4();
  uVar4 = (ulong)(*(int *)(lVar3 + 0xc) * 0x19 + 0x19);
  func_0x000108d65d8c();
  if (uVar4 == 0) {
    uVar4 = *param_1;
    if ((*(ushort *)(uVar4 + 8) & 0x2460) == 0) {
      *(undefined2 *)(uVar4 + 8) = 1;
    }
    else {
      func_0x000108d82720();
      uVar4 = *param_1;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 7;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    *(undefined1 *)(*(long *)(uVar4 + 0x28) + 0x51) = 1;
    return uVar4;
  }
  func_0x000108d64bd8(0x18,uVar4,"%llu");
  if (0 < *(int *)(lVar3 + 0xc)) {
    uVar2 = uVar4;
    _strlen(uVar4);
    lVar8 = 0;
    uVar2 = uVar4 + (uVar2 & 0x3fffffff);
    do {
      func_0x000108d64bd8(0x18,uVar2,&UNK_10f51adc1);
      uVar5 = uVar2;
      _strlen();
      uVar2 = uVar2 + (uVar5 & 0x3fffffff);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar3 + 0xc));
  }
  uVar2 = *param_1;
  FUN_108d67c04(uVar2,uVar4,0xffffffff,1,0x108d5e198);
  if ((int)uVar2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar4 = *param_1;
    if (*(long *)(uVar4 + 0x28) == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*(long *)(uVar4 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar7 < (int)uVar1) {
      uVar1 = iVar7 + 1;
    }
    if (((*(ushort *)(uVar4 + 8) & 0x2460) != 0) || (*(int *)(uVar4 + 0x20) != 0)) {
      FUN_108d826d0(uVar4);
    }
    *(undefined **)(uVar4 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar4 + 0x30) = 0;
    *(uint *)(uVar4 + 0xc) = uVar1;
    *(undefined2 *)(uVar4 + 8) = 0xa02;
    *(undefined1 *)(uVar4 + 10) = 1;
    uVar6 = 0x12;
    if ((int)uVar1 <= iVar7) {
      uVar6 = 0;
    }
    return (ulong)uVar6;
  }
  return uVar2;
}



/* Entry: 108dc7400; end: 108dc751f;  */

undefined8 FUN_108dc7400(undefined8 param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2;
  _strlen();
  if ((uVar2 & 0x3fffffff) < 7) {
LAB_108dc74a4:
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      if ((ulong)*(byte *)(param_2 + lVar4) == 0) {
        cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar4]];
        cVar5 = '\0';
LAB_108dc7480:
        if (cVar5 != cVar1) goto LAB_108dc74a4;
        break;
      }
      cVar5 = (&UNK_10dfa05fd)[*(byte *)(param_2 + lVar4)];
      cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar4]];
      if (cVar5 != cVar1) goto LAB_108dc7480;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 7);
    func_0x000108d6a85c(param_1,&UNK_10f51b078);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 108dc7520; end: 108dc75e3;  */

long FUN_108dc7520(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x20) + 0x38);
  if ((*(undefined8 **)(param_2 + 0x68) != puVar3) &&
     (puVar5 = puVar3, FUN_108db1c50(puVar3,*(undefined1 *)((long)param_1 + 0x1e6),param_2),
     puVar5 != (undefined8 *)0x0)) {
    lVar4 = 0;
    do {
      lVar1 = lVar4;
      if ((undefined8 *)puVar5[5] == puVar3) {
        lVar1 = lVar2;
        FUN_108dc77b4(lVar2,lVar4,*puVar5);
      }
      puVar5 = (undefined8 *)puVar5[8];
      lVar4 = lVar1;
    } while (puVar5 != (undefined8 *)0x0);
    if (lVar1 != 0) {
      lVar2 = *param_1;
      FUN_108d6a8e0(lVar2,&UNK_10f51b0aa);
      func_0x000108d60660(*param_1,lVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 108dc75e4; end: 108dc77b3;  */

void FUN_108dc75e4(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  plVar3 = param_1;
  FUN_108d70f98();
  if (plVar3 != (long *)0x0) {
    lVar7 = *param_1;
    uVar8 = 0xfff0bdc0;
    if (param_2[0xd] != 0) {
      uVar1 = *(uint *)(lVar7 + 0x28);
      if ((int)uVar1 < 1) {
        uVar8 = 0;
      }
      else {
        uVar10 = 0;
        plVar5 = (long *)(*(long *)(lVar7 + 0x20) + 0x18);
        do {
          uVar8 = uVar10;
          if (*plVar5 == param_2[0xd]) break;
          uVar10 = uVar10 + 1;
          plVar5 = plVar5 + 4;
          uVar8 = (ulong)uVar1;
        } while (uVar1 != uVar10);
      }
    }
    puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x20) + 0x38);
    FUN_108db1c50(puVar4,*(undefined1 *)((long)param_1 + 0x1e6),param_2);
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[8]) {
      uVar10 = 0xfff0bdc0;
      if (puVar4[5] != 0) {
        uVar1 = *(uint *)(*param_1 + 0x28);
        if ((int)uVar1 < 1) {
          uVar10 = 0;
        }
        else {
          uVar6 = 0;
          plVar5 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
          do {
            uVar10 = uVar6;
            if (*plVar5 == puVar4[5]) break;
            uVar6 = uVar6 + 1;
            uVar10 = (ulong)uVar1;
            plVar5 = plVar5 + 4;
          } while (uVar1 != uVar6);
        }
      }
      uVar11 = *puVar4;
      plVar5 = plVar3;
      FUN_108d71098(plVar3,0x7e,uVar10,0,0);
      FUN_108d6aaec(plVar3,plVar5,uVar11,0);
    }
    uVar11 = *param_2;
    plVar5 = plVar3;
    FUN_108d71098(plVar3,0x7c,uVar8,0,0);
    FUN_108d6aaec(plVar3,plVar5,uVar11,0);
    lVar7 = *param_1;
    FUN_108d6a8e0(lVar7,&UNK_10f51b0c2);
    if (lVar7 != 0) {
      FUN_108dacaa4(plVar3,uVar8,lVar7);
      FUN_108dc7520(param_1,param_2);
      if (param_1 != (long *)0x0) {
        plVar5 = plVar3;
        FUN_108d71098(plVar3,0x7a,1,0,0);
        FUN_108d6aaec(plVar3,plVar5,param_1,0xffffffff);
        uVar1 = *(uint *)(*plVar3 + 0x28);
        if (0 < (int)uVar1) {
          uVar8 = 0;
          uVar9 = *(uint *)((long)plVar3 + 0x94);
          lVar7 = 8;
          do {
            uVar2 = 1 << (ulong)((uint)uVar8 & 0x1f);
            if ((uVar8 != 1) &&
               (*(char *)(*(long *)(*(long *)(*plVar3 + 0x20) + lVar7) + 0x11) != '\0')) {
              *(uint *)(plVar3 + 0x13) = *(uint *)(plVar3 + 0x13) | uVar2;
            }
            uVar9 = uVar2 | uVar9;
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x20;
          } while (uVar1 != uVar8);
          *(uint *)((long)plVar3 + 0x94) = uVar9;
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 108dc77b4; end: 108dc7827;  */

void FUN_108dc77b4(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_108d6a8e0(param_1,&UNK_10f51b094);
  }
  else {
    FUN_108d6a8e0(param_1,&UNK_10f51b09c);
    func_0x000108d60660(param_1,param_2);
  }
  return;
}



/* Entry: 108dc7828; end: 108dc7a43;  */

void FUN_108dc7828(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  plVar4 = param_1;
  FUN_108d70f98();
  if (plVar4 == (long *)0x0) {
    return;
  }
  cVar1 = *(char *)((long)param_1 + 0x1f);
  if (cVar1 == '\0') {
    iVar9 = *(int *)((long)param_1 + 0x54) + 1;
    iVar6 = iVar9;
  }
  else {
    *(byte *)((long)param_1 + 0x1f) = cVar1 - 1U;
    iVar9 = *(int *)((long)param_1 + (ulong)(byte)(cVar1 - 1U) * 4 + 0x24);
    if (cVar1 != '\x01') {
      *(byte *)((long)param_1 + 0x1f) = cVar1 - 2U;
      iVar6 = *(int *)((long)param_1 + (ulong)(byte)(cVar1 - 2U) * 4 + 0x24);
      goto LAB_108dc78a8;
    }
    iVar6 = *(int *)((long)param_1 + 0x54);
  }
  iVar6 = iVar6 + 1;
  *(int *)((long)param_1 + 0x54) = iVar6;
LAB_108dc78a8:
  FUN_108d71098(plVar4,0x33,param_2,iVar9,2);
  uVar10 = (uint)param_2;
  uVar3 = 1 << (ulong)(uVar10 & 0x1f);
  *(uint *)((long)plVar4 + 0x94) = *(uint *)((long)plVar4 + 0x94) | uVar3;
  if ((uVar10 != 1) &&
     (*(char *)(*(long *)(*(long *)(*plVar4 + 0x20) + (long)(int)uVar10 * 0x20 + 8) + 0x11) != '\0')
     ) {
    *(uint *)(plVar4 + 0x13) = *(uint *)(plVar4 + 0x13) | uVar3;
  }
  FUN_108d71098(plVar4,0x19,param_3,iVar6,0);
  plVar5 = plVar4;
  FUN_108d71098(plVar4,0x53,iVar6,0,iVar9);
  if (plVar4[1] != 0) {
    *(undefined1 *)(plVar4[1] + (long)*(int *)((long)plVar4 + 0x3c) * 0x18 + -0x15) = 0x90;
  }
  FUN_108d71098(plVar4,0x34,param_2,2,iVar6);
  uVar3 = *(uint *)((long)plVar4 + 0x3c);
  if ((uint)plVar5 < uVar3) {
    *(uint *)(plVar4[1] + ((ulong)plVar5 & 0xffffffff) * 0x18 + 8) = uVar3;
  }
  *(uint *)(plVar4[6] + 100) = uVar3 - 1;
  if (iVar9 != 0) {
    bVar2 = *(byte *)((long)param_1 + 0x1f);
    if (bVar2 < 8) {
      puVar7 = (undefined1 *)((long)param_1 + 0x8e);
      iVar8 = 10;
      do {
        if (*(int *)(puVar7 + 6) == iVar9) {
          *puVar7 = 1;
          if (iVar6 == 0) {
            return;
          }
          goto LAB_108dc79d8;
        }
        puVar7 = puVar7 + 0x14;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar2 + 1;
      *(int *)((long)param_1 + (ulong)bVar2 * 4 + 0x24) = iVar9;
    }
  }
  if (iVar6 != 0) {
LAB_108dc79d8:
    bVar2 = *(byte *)((long)param_1 + 0x1f);
    if (bVar2 < 8) {
      puVar7 = (undefined1 *)((long)param_1 + 0x8e);
      iVar9 = 10;
      do {
        if (*(int *)(puVar7 + 6) == iVar6) {
          *puVar7 = 1;
          return;
        }
        puVar7 = puVar7 + 0x14;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar2 + 1;
      *(int *)((long)param_1 + (ulong)bVar2 * 4 + 0x24) = iVar6;
    }
  }
  return;
}



/* Entry: 108dc7a44; end: 108dc7a93;  */

void FUN_108dc7a44(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((param_1[0x4b] != 0) && (lVar4 = param_1[0x44], lVar4 != 0)) {
    lVar5 = *param_1;
    lVar2 = lVar5;
    FUN_108d95eb4(lVar5,param_1[0x4b],(long)(int)param_1[0x4c]);
    uVar1 = *(uint *)(lVar4 + 0x4c);
    *(uint *)(lVar4 + 0x4c) = uVar1 + 1;
    lVar3 = lVar5;
    func_0x000108d711ec(lVar5,*(undefined8 *)(lVar4 + 0x50),(long)(int)(uVar1 * 8 + 0x10));
    if (lVar3 == 0) {
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          func_0x000108d60660(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar6));
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar1 * 8 - lVar6 != 0);
      }
      func_0x000108d60660(lVar5,lVar2);
      func_0x000108d60660(lVar5,*(undefined8 *)(lVar4 + 0x50));
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      *(long *)(lVar3 + (long)(int)uVar1 * 8) = lVar2;
      *(undefined8 *)(lVar3 + (long)(int)(uVar1 + 1) * 8) = 0;
    }
    *(long *)(lVar4 + 0x50) = lVar3;
    return;
  }
  return;
}



/* Entry: 108dc7a94; end: 108dc7b47;  */

void FUN_108dc7a94(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x4c);
  *(uint *)(param_2 + 0x4c) = uVar1 + 1;
  lVar2 = param_1;
  func_0x000108d711ec(param_1,*(undefined8 *)(param_2 + 0x50),(long)(int)(uVar1 * 8 + 0x10));
  if (lVar2 == 0) {
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        func_0x000108d60660(param_1,*(undefined8 *)(*(long *)(param_2 + 0x50) + lVar3));
        lVar3 = lVar3 + 8;
      } while ((ulong)uVar1 * 8 - lVar3 != 0);
    }
    func_0x000108d60660(param_1,param_3);
    func_0x000108d60660(param_1,*(undefined8 *)(param_2 + 0x50));
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  else {
    *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8) = param_3;
    *(undefined8 *)(lVar2 + (long)(int)(uVar1 + 1) * 8) = 0;
  }
  *(long *)(param_2 + 0x50) = lVar2;
  return;
}



/* Entry: 108dc7b48; end: 108dc7dc7;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

undefined * FUN_108dc7b48(undefined **param_1,int param_2,ulong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  
  puVar2 = (undefined *)*param_3;
  if ((1L << (*(ushort *)(puVar2 + 8) & 0x1f) & 0xaaaaaaaaaaaaaaaaU) != 0) {
    return puVar2;
  }
  FUN_108d67a14(puVar2,1);
  if (puVar2 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  uVar3 = *param_3;
  uVar14 = 1;
  FUN_108d678b0(uVar3,1);
  if (param_2 == 1) {
    ppuVar17 = (undefined **)&UNK_10dfa30ca;
    ppuVar5 = &PTR_s__110ac5158;
  }
  else {
    pbVar4 = (byte *)param_3[1];
    func_0x000108d67a18(pbVar4,1);
    if (pbVar4 == (byte *)0x0) {
      return (undefined *)0x0;
    }
    bVar8 = *pbVar4;
    if (bVar8 == 0) goto LAB_108dc7d94;
    uVar15 = 0;
    pbVar7 = pbVar4;
    do {
      if (bVar8 < 0xc0) {
        pbVar7 = pbVar7 + 1;
        bVar8 = *pbVar7;
      }
      else {
        do {
          pbVar7 = pbVar7 + 1;
          bVar8 = *pbVar7;
        } while ((char)bVar8 < -0x40);
      }
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (bVar8 != 0);
    ppuVar5 = param_1;
    FUN_108dc9cb0(param_1,uVar15 * 9);
    if (ppuVar5 == (undefined **)0x0) {
      return (undefined *)0x0;
    }
    if (*pbVar4 == 0) goto LAB_108dc7d94;
    uVar14 = 0;
    ppuVar17 = ppuVar5 + uVar15;
    do {
      ppuVar5[uVar14] = pbVar4;
      pbVar9 = pbVar4 + 1;
      pbVar7 = pbVar4;
      if (0xbf < *pbVar4) {
        do {
          pbVar9 = pbVar7 + 1;
          pbVar7 = pbVar9;
        } while ((char)*pbVar9 < -0x40);
      }
      *(char *)((long)ppuVar17 + uVar14) = (char)pbVar9 - (char)pbVar4;
      uVar14 = uVar14 + 1;
      pbVar4 = pbVar9;
    } while (*pbVar9 != 0);
    uVar14 = uVar14 & 0xffffffff;
  }
  uVar10 = *(uint *)(param_1[1] + 8);
  if (((uVar10 & 1) == 0) ||
     (uVar15 = uVar14, ppuVar11 = ppuVar5, ppuVar16 = ppuVar17, (int)uVar3 < 1)) {
LAB_108dc7d20:
    if ((uVar10 >> 1 & 1) != 0) {
      uVar10 = (uint)uVar3;
      uVar15 = uVar3;
joined_r0x000108dc7d28:
      uVar3 = uVar15;
      uVar12 = uVar14;
      ppuVar16 = ppuVar17;
      ppuVar11 = ppuVar5;
      if (0 < (int)uVar10) {
        do {
          uVar10 = (int)uVar3 - (uint)*(byte *)ppuVar16;
          if ((int)(uint)*(byte *)ppuVar16 <= (int)uVar3) {
            puVar1 = puVar2 + uVar10;
            _memcmp(puVar1,*ppuVar11);
            uVar15 = (ulong)uVar10;
            if ((int)puVar1 == 0) goto joined_r0x000108dc7d28;
          }
          ppuVar11 = ppuVar11 + 1;
          uVar12 = uVar12 - 1;
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
          if (uVar12 == 0) break;
        } while( true );
      }
    }
  }
  else {
    do {
      while( true ) {
        bVar8 = *(byte *)ppuVar16;
        uVar6 = (int)uVar3 - (uint)bVar8;
        if (((int)(uint)bVar8 <= (int)uVar3) &&
           (puVar1 = puVar2, _memcmp(puVar2,*ppuVar11,(ulong)bVar8), (int)puVar1 == 0)) break;
        uVar15 = uVar15 - 1;
        ppuVar11 = ppuVar11 + 1;
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        if (uVar15 == 0) goto LAB_108dc7d20;
      }
      puVar2 = puVar2 + bVar8;
      uVar15 = uVar14;
      ppuVar11 = ppuVar5;
      uVar3 = (ulong)uVar6;
      ppuVar16 = ppuVar17;
    } while (0 < (int)uVar6);
  }
  if (param_2 != 1) {
    func_0x000108d5e198(ppuVar5);
  }
LAB_108dc7d94:
  puVar1 = *param_1;
  FUN_108d67c04(puVar1,puVar2,uVar3,1,0xffffffffffffffff);
  if ((int)puVar1 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar10 = 0xf51745e;
    puVar2 = *param_1;
    if (*(long *)(puVar2 + 0x28) == 0) {
      iVar13 = 1000000000;
    }
    else {
      iVar13 = *(int *)(*(long *)(puVar2 + 0x28) + 0x68);
    }
    _strlen();
    uVar10 = uVar10 & 0x3fffffff;
    if (iVar13 < (int)uVar10) {
      uVar10 = iVar13 + 1;
    }
    if (((*(ushort *)(puVar2 + 8) & 0x2460) != 0) || (*(int *)(puVar2 + 0x20) != 0)) {
      FUN_108d826d0(puVar2);
    }
    *(undefined **)(puVar2 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(uint *)(puVar2 + 0xc) = uVar10;
    *(undefined2 *)(puVar2 + 8) = 0xa02;
    puVar2[10] = 1;
    uVar6 = 0x12;
    if ((int)uVar10 <= iVar13) {
      uVar6 = 0;
    }
    return (undefined *)(ulong)uVar6;
  }
  return puVar1;
}



/* Entry: 108dc7dc8; end: 108dc7ebb;  */

long * FUN_108dc7dc8(long *param_1,uint param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(param_1[1] + 8);
  puVar6 = (undefined8 *)*param_3;
  if ((1L << (*(ushort *)(puVar6 + 1) & 0x1f) & 0xaaaaaaaaaaaaaaaaU) != 0) {
    return param_1;
  }
  if (1 < (int)param_2) {
    uVar8 = 0;
    uVar7 = *(undefined8 *)(*(long *)(param_1[3] + 8) + (long)(int)param_1[4] * 0x18 + -8);
    uVar9 = 1;
    plVar2 = param_1;
    do {
      if ((0xaaaaaaaaUL >> (*(ushort *)(param_3[uVar9] + 8) & 0x1f) & 1) != 0) {
        return plVar2;
      }
      plVar2 = (long *)param_3[uVar8];
      FUN_108d895b4(plVar2,param_3[uVar9],uVar7);
      if (-1 < (int)((uint)plVar2 ^ -(uint)(lVar5 != 0))) {
        uVar8 = uVar9 & 0xffffffff;
      }
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
    puVar6 = (undefined8 *)param_3[uVar8];
  }
  puVar3 = (undefined8 *)*param_1;
  if ((*(ushort *)(puVar3 + 1) & 0x2460) != 0) {
    func_0x000108d82720(puVar3);
  }
  uVar7 = puVar6[2];
  uVar10 = *puVar6;
  puVar3[1] = puVar6[1];
  *puVar3 = uVar10;
  puVar3[2] = uVar7;
  uVar1 = *(ushort *)(puVar3 + 1);
  uVar4 = uVar1 & 0xfbff;
  *(ushort *)(puVar3 + 1) = uVar4;
  if (((uVar1 & 0x12) != 0) && ((*(ushort *)(puVar6 + 1) >> 0xb & 1) == 0)) {
    *(ushort *)(puVar3 + 1) = uVar4 | 0x1000;
    uVar4 = *(ushort *)(puVar3 + 1);
    if ((uVar4 >> 0xe & 1) != 0) {
      func_0x000108d6781c(puVar3);
      uVar4 = *(ushort *)(puVar3 + 1);
    }
    if (((uVar4 & 0x12) != 0) && ((*(int *)(puVar3 + 4) == 0 || (puVar3[2] != puVar3[3])))) {
      puVar6 = puVar3;
      FUN_108d82884(puVar3,*(int *)((long)puVar3 + 0xc) + 2,1);
      if ((int)puVar6 != 0) {
        return (long *)0x7;
      }
      *(undefined1 *)(puVar3[2] + (long)*(int *)((long)puVar3 + 0xc)) = 0;
      *(undefined1 *)(puVar3[2] + (long)*(int *)((long)puVar3 + 0xc) + 1) = 0;
      uVar4 = *(ushort *)(puVar3 + 1) | 0x200;
    }
    *(ushort *)(puVar3 + 1) = uVar4 & 0xefff;
    return (long *)0x0;
  }
  return (long *)0x0;
}



/* Entry: 108dc7ebc; end: 108dc7fb3;  */

long * FUN_108dc7ebc(long *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = (long *)*param_3;
  if ((*(ushort *)(param_1[2] + 8) >> 0xd & 1) == 0) {
    plVar6 = param_1;
    FUN_108d68de0(param_1,0x38);
    plVar3 = plVar6;
  }
  else {
    plVar6 = *(long **)(param_1[2] + 0x10);
    plVar3 = param_1;
  }
  if (plVar6 == (long *)0x0) {
    return plVar3;
  }
  if ((1L << (*(ushort *)(*param_3 + 8) & 0x1f) & 0xaaaaaaaaaaaaaaaaU) == 0) {
    if ((short)plVar6[1] == 0) {
      plVar6[5] = *(long *)(*param_1 + 0x28);
    }
    else {
      lVar7 = *(long *)(param_1[1] + 8);
      plVar3 = plVar6;
      FUN_108d895b4(plVar6,plVar5,
                    *(undefined8 *)(*(long *)(param_1[3] + 8) + (long)(int)param_1[4] * 0x18 + -8));
      bVar2 = (int)(uint)plVar3 < 1;
      if (lVar7 != 0) {
        bVar2 = (uint)plVar3 < 0x80000000;
      }
      if (bVar2) goto LAB_108dc7f78;
    }
    if ((*(ushort *)(plVar6 + 1) & 0x2460) != 0) {
      func_0x000108d82720(plVar6);
    }
    lVar7 = plVar5[2];
    lVar8 = *plVar5;
    plVar6[1] = plVar5[1];
    *plVar6 = lVar8;
    plVar6[2] = lVar7;
    uVar1 = *(ushort *)(plVar6 + 1);
    uVar4 = uVar1 & 0xfbff;
    *(ushort *)(plVar6 + 1) = uVar4;
    if (((uVar1 & 0x12) != 0) && ((*(ushort *)(plVar5 + 1) >> 0xb & 1) == 0)) {
      *(ushort *)(plVar6 + 1) = uVar4 | 0x1000;
      uVar4 = *(ushort *)(plVar6 + 1);
      if ((uVar4 >> 0xe & 1) != 0) {
        func_0x000108d6781c(plVar6);
        uVar4 = *(ushort *)(plVar6 + 1);
      }
      if (((uVar4 & 0x12) != 0) && (((int)plVar6[4] == 0 || (plVar6[2] != plVar6[3])))) {
        plVar5 = plVar6;
        FUN_108d82884(plVar6,*(int *)((long)plVar6 + 0xc) + 2,1);
        if ((int)plVar5 != 0) {
          return (long *)0x7;
        }
        *(undefined1 *)(plVar6[2] + (long)*(int *)((long)plVar6 + 0xc)) = 0;
        *(undefined1 *)(plVar6[2] + (long)*(int *)((long)plVar6 + 0xc) + 1) = 0;
        uVar4 = *(ushort *)(plVar6 + 1) | 0x200;
      }
      *(ushort *)(plVar6 + 1) = uVar4 & 0xefff;
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  if ((short)plVar6[1] == 0) {
    return plVar3;
  }
LAB_108dc7f78:
  *(undefined1 *)(param_1 + 5) = 1;
  return plVar3;
}



/* Entry: 108dc7fb4; end: 108dc8037;  */

void FUN_108dc7fb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((*(ushort *)(param_1[2] + 8) >> 0xd & 1) == 0) {
    puVar1 = param_1;
    FUN_108d68de0(param_1,0);
  }
  else {
    puVar1 = *(undefined8 **)(param_1[2] + 0x10);
  }
  if ((puVar1 != (undefined8 *)0x0) &&
     (((*(short *)(puVar1 + 1) != 0 &&
       (FUN_108d67fe4(*param_1,puVar1), (*(ushort *)(puVar1 + 1) & 0x2460) != 0)) ||
      (*(int *)(puVar1 + 4) != 0)))) {
    if ((*(ushort *)(puVar1 + 1) & 0x2460) != 0) {
      func_0x000108d82720(puVar1);
    }
    if (*(int *)(puVar1 + 4) != 0) {
      func_0x000108d60660(puVar1[5],puVar1[3]);
      *(undefined4 *)(puVar1 + 4) = 0;
    }
    puVar1[2] = 0;
    return;
  }
  return;
}



/* Entry: 108dc8038; end: 108dc808b;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc8038(ulong *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  if ((byte)((&UNK_10dfa06fd)[(ulong)*(ushort *)(*param_3 + 8) & 0x1f] - 1) < 4) {
    pcVar3 = (&PTR_s_integer_110ac5318)
             [(byte)((&UNK_10dfa06fd)[(ulong)*(ushort *)(*param_3 + 8) & 0x1f] - 1)];
  }
  else {
    pcVar3 = "null";
  }
  uVar2 = *param_1;
  FUN_108d67c04(uVar2,pcVar3,0xffffffff,1,0);
  if ((int)uVar2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar2 = *param_1;
    if (*(long *)(uVar2 + 0x28) == 0) {
      iVar5 = 1000000000;
    }
    else {
      iVar5 = *(int *)(*(long *)(uVar2 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar5 < (int)uVar1) {
      uVar1 = iVar5 + 1;
    }
    if (((*(ushort *)(uVar2 + 8) & 0x2460) != 0) || (*(int *)(uVar2 + 0x20) != 0)) {
      FUN_108d826d0(uVar2);
    }
    *(undefined **)(uVar2 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar2 + 0x30) = 0;
    *(uint *)(uVar2 + 0xc) = uVar1;
    *(undefined2 *)(uVar2 + 8) = 0xa02;
    *(undefined1 *)(uVar2 + 10) = 1;
    uVar4 = 0x12;
    if ((int)uVar1 <= iVar5) {
      uVar4 = 0;
    }
    return (ulong)uVar4;
  }
  return uVar2;
}



/* Entry: 108dc808c; end: 108dc818f;  */

/* WARNING: Possible PIC construction at 0x000108d839f0: Changing call to branch */

void FUN_108dc808c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte bVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  pbVar2 = (byte *)*param_3;
  bVar4 = (&UNK_10dfa06fd)[(ulong)*(ushort *)(pbVar2 + 8) & 0x1f];
  if (bVar4 - 1 < 2) {
LAB_108dc80d0:
    FUN_108d678b0(pbVar2,1);
    puVar3 = (ulong *)*param_1;
    unaff_x20 = (ulong)(int)pbVar2;
  }
  else {
    if (bVar4 != 3) {
      if (bVar4 != 4) {
        puVar3 = (ulong *)*param_1;
        if ((puVar3[1] & 0x2460) != 0) goto SUB_108d82720;
        uVar5 = 1;
        goto LAB_108dc8174;
      }
      goto LAB_108dc80d0;
    }
    FUN_108d67a14(pbVar2,1);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    bVar4 = *pbVar2;
    if (bVar4 == 0) {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = 0;
      do {
        if (bVar4 < 0xc0) {
          pbVar2 = pbVar2 + 1;
          bVar4 = *pbVar2;
        }
        else {
          do {
            pbVar2 = pbVar2 + 1;
            bVar4 = *pbVar2;
          } while ((char)bVar4 < -0x40);
        }
        unaff_x20 = (ulong)((int)unaff_x20 + 1);
      } while (bVar4 != 0);
    }
    puVar3 = (ulong *)*param_1;
  }
  if ((puVar3[1] & 0x2460) != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    if ((puVar3[1] & 0x2460) == 0) {
      *puVar3 = unaff_x20;
      *(undefined2 *)(puVar3 + 1) = 4;
      return;
    }
    unaff_x30 = 0x108d839f4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = puVar3;
SUB_108d82720:
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar1 = (ushort)puVar3[1];
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x000108d82798(puVar3,*puVar3);
      uVar1 = (ushort)puVar3[1];
    }
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 5 & 1) == 0) {
        if ((uVar1 >> 6 & 1) != 0) {
          plVar6 = (long *)*puVar3;
          plVar6[1] = *(long *)(*plVar6 + 0xf8);
          *(long **)(*plVar6 + 0xf8) = plVar6;
        }
      }
      else {
        func_0x000108d82838(*puVar3);
      }
    }
    else {
      (*(code *)puVar3[6])(puVar3[2]);
    }
    *(undefined2 *)(puVar3 + 1) = 1;
    return;
  }
  *puVar3 = unaff_x20;
  uVar5 = 4;
LAB_108dc8174:
  *(undefined2 *)(puVar3 + 1) = uVar5;
  return;
}



/* Entry: 108dc8190; end: 108dc857b;  */

void FUN_108dc8190(long *param_1,undefined8 param_2,ulong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = *param_3;
  uVar1 = *(ushort *)(uVar8 + 8);
  uVar2 = *(ushort *)(param_3[1] + 8);
  if (((1 << (ulong)(uVar1 & 0x1f) | 1 << (ulong)(uVar2 & 0x1f)) & 0xaaaaaaaaU) == 0) {
    FUN_108d678b0(uVar8,1);
    uVar3 = param_3[1];
    FUN_108d678b0(uVar3,1);
    uVar1 = uVar1 | uVar2;
    pcVar4 = (char *)*param_3;
    if ((uVar1 & 0xf) == 0) {
      FUN_108d677b4();
      uVar5 = param_3[1];
      FUN_108d677b4(uVar5);
    }
    else {
      FUN_108d67a14(pcVar4,1);
      uVar5 = param_3[1];
      func_0x000108d67a18(uVar5,1);
    }
    iVar11 = (int)uVar3;
    if ((int)uVar8 < iVar11) {
      uVar8 = 0;
    }
    else {
      uVar12 = 1;
      do {
        pcVar6 = pcVar4;
        _memcmp(pcVar4,uVar5,(long)iVar11);
        if ((int)pcVar6 == 0) goto LAB_108dc82ac;
        uVar12 = uVar12 + 1;
        iVar10 = (int)uVar8 + 1;
        do {
          iVar9 = iVar10;
          pcVar4 = pcVar4 + 1;
          iVar10 = (int)uVar8;
          if ((uVar1 & 0xf) == 0) break;
          iVar10 = iVar9 + -1;
        } while (*pcVar4 < -0x40);
        uVar8 = (ulong)(iVar9 - 2);
      } while (iVar11 < iVar10);
      uVar12 = 0;
LAB_108dc82ac:
      uVar8 = (ulong)uVar12;
    }
    puVar7 = (ulong *)*param_1;
    if ((puVar7[1] & 0x2460) != 0) {
      if ((puVar7[1] & 0x2460) != 0) {
        func_0x000108d82720(puVar7);
      }
      *puVar7 = uVar8;
      *(undefined2 *)(puVar7 + 1) = 4;
      return;
    }
    *puVar7 = uVar8;
    *(undefined2 *)(puVar7 + 1) = 4;
  }
  return;
}



/* Entry: 108dc857c; end: 108dc862b;  */

void FUN_108dc857c(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long alStack_68 [4];
  undefined4 uStack_48;
  undefined1 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if (0 < param_2) {
    lVar4 = *(long *)(*param_1 + 0x28);
    lVar1 = *param_3;
    FUN_108d67a14(lVar1,1);
    if (lVar1 != 0) {
      uStack_3c = 0;
      plStack_38 = param_3 + 1;
      uStack_48 = *(undefined4 *)(lVar4 + 0x68);
      alStack_68[1] = 0;
      alStack_68[2] = 0;
      alStack_68[3] = 0;
      uStack_44 = 0;
      alStack_68[0] = lVar4;
      iStack_40 = param_2 + -1;
      FUN_108d95760(alStack_68,2,lVar1);
      uVar3 = alStack_68[3] & 0xffffffff;
      plVar2 = alStack_68;
      FUN_108d64afc(plVar2);
      FUN_108d67a8c(param_1,plVar2,uVar3,1,FUN_108d627f0);
    }
  }
  return;
}



/* Entry: 108dc862c; end: 108dc86ab;  */

void FUN_108dc862c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcStack_28;
  
  pcVar2 = (char *)*param_3;
  FUN_108d67a14(pcVar2,1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    iVar1 = (int)&pcStack_28;
    pcStack_28 = pcVar2;
    FUN_108d96304();
    param_1 = (long *)*param_1;
    if ((*(ushort *)(param_1 + 1) & 0x2460) != 0) {
      if ((*(ushort *)(param_1 + 1) & 0x2460) != 0) {
        func_0x000108d82720(param_1);
      }
      *param_1 = (long)iVar1;
      *(undefined2 *)(param_1 + 1) = 4;
      return;
    }
    *param_1 = (long)iVar1;
    *(undefined2 *)(param_1 + 1) = 4;
  }
  return;
}



/* Entry: 108dc86ac; end: 108dc87ef;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67b34) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

byte * FUN_108dc86ac(long *param_1,uint param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  
  plVar5 = param_1;
  FUN_108d62be4();
  if ((int)plVar5 == 0) {
    pbVar4 = (byte *)(long)(int)(param_2 << 2 | 1);
    FUN_108d60848();
    if (pbVar4 != (byte *)0x0) {
      pbVar11 = pbVar4;
      if (0 < (int)param_2) {
        uVar9 = (ulong)param_2;
        pbVar10 = pbVar4;
        do {
          uVar6 = *param_3;
          func_0x000108d6797c();
          uVar7 = 0xfffd;
          if (uVar6 >> 0x10 < 0x11) {
            uVar7 = (uint)uVar6 & 0x1fffff;
          }
          if (uVar7 < 0x80) {
            pbVar11 = pbVar10 + 1;
            *pbVar10 = (byte)uVar7;
          }
          else {
            bVar1 = (byte)uVar7 & 0x3f | 0x80;
            if (uVar7 < 0x800) {
              *pbVar10 = (byte)(uVar7 >> 6) | 0xc0;
              pbVar10[1] = bVar1;
              pbVar11 = pbVar10 + 2;
            }
            else {
              bVar2 = (byte)(uVar7 >> 6) & 0x3f | 0x80;
              if (uVar7 >> 0x10 == 0) {
                *pbVar10 = (byte)(uVar7 >> 0xc) | 0xe0;
                pbVar10[1] = bVar2;
                pbVar10[2] = bVar1;
                pbVar11 = pbVar10 + 3;
              }
              else {
                *pbVar10 = (byte)(uVar7 >> 0x12) | 0xf0;
                pbVar10[1] = (byte)(uVar7 >> 0xc) & 0x3f | 0x80;
                pbVar10[2] = bVar2;
                pbVar10[3] = bVar1;
                pbVar11 = pbVar10 + 4;
              }
            }
          }
          uVar9 = uVar9 - 1;
          param_3 = param_3 + 1;
          pbVar10 = pbVar11;
        } while (uVar9 != 0);
      }
      if ((ulong)((long)pbVar11 - (long)pbVar4) >> 0x1f == 0) {
        pbVar4 = (byte *)*param_1;
        FUN_108d67c04();
        if ((int)pbVar4 != 0x12) {
          return pbVar4;
        }
        *(undefined4 *)((long)param_1 + 0x24) = 0x12;
        *(undefined1 *)((long)param_1 + 0x29) = 1;
        lVar3 = *param_1;
      }
      else {
        (*(code *)0x108d5e198)(pbVar4);
        if (param_1 == (long *)0x0) {
          return pbVar4;
        }
        *(undefined4 *)((long)param_1 + 0x24) = 0x12;
        *(undefined1 *)((long)param_1 + 0x29) = 1;
        lVar3 = *param_1;
      }
      uVar7 = 0xf51745e;
      if (*(long *)(lVar3 + 0x28) == 0) {
        iVar12 = 1000000000;
      }
      else {
        iVar12 = *(int *)(*(long *)(lVar3 + 0x28) + 0x68);
      }
      _strlen();
      uVar7 = uVar7 & 0x3fffffff;
      if (iVar12 < (int)uVar7) {
        uVar7 = iVar12 + 1;
      }
      if (((*(ushort *)(lVar3 + 8) & 0x2460) != 0) || (*(int *)(lVar3 + 0x20) != 0)) {
        func_0x000108d826d0(lVar3);
      }
      *(undefined **)(lVar3 + 0x10) = &DAT_10f51745e;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(uint *)(lVar3 + 0xc) = uVar7;
      *(undefined2 *)(lVar3 + 8) = 0xa02;
      *(undefined1 *)(lVar3 + 10) = 1;
      uVar8 = 0x12;
      if ((int)uVar7 <= iVar12) {
        uVar8 = 0;
      }
      return (byte *)(ulong)uVar8;
    }
  }
  pbVar4 = (byte *)*param_1;
  if ((*(ushort *)(pbVar4 + 8) & 0x2460) == 0) {
    pbVar4[8] = 1;
    pbVar4[9] = 0;
  }
  else {
    func_0x000108d82720();
    pbVar4 = (byte *)*param_1;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 7;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  *(undefined1 *)(*(long *)(pbVar4 + 0x28) + 0x51) = 1;
  return pbVar4;
}



/* Entry: 108dc87f0; end: 108dc88f3;  */

/* WARNING: Possible PIC construction at 0x000108d67c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d67bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d67c5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67bbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */

double * FUN_108dc87f0(double param_1,long *param_2,undefined8 param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  long lVar10;
  undefined2 uVar11;
  uint uVar12;
  long *plVar13;
  double *unaff_x19;
  undefined8 unaff_x20;
  int iVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  dVar9 = *param_4;
  if ((&UNK_10dfa06fd)[(ulong)*(ushort *)((long)dVar9 + 8) & 0x1f] == '\x05') {
    pdVar7 = (double *)*param_2;
    if (((ulong)pdVar7[1] & 0x2460) != 0) goto SUB_108d82720;
    uVar11 = 1;
  }
  else {
    if ((&UNK_10dfa06fd)[(ulong)*(ushort *)((long)dVar9 + 8) & 0x1f] != '\x01') {
      func_0x000108d67900();
      dVar9 = -param_1;
      if (0.0 <= param_1) {
        dVar9 = param_1;
      }
      pdVar7 = (double *)*param_2;
      unaff_x29 = &stack0xfffffffffffffff0;
      if (((ulong)pdVar7[1] & 0x2460) == 0) {
        *(undefined2 *)(pdVar7 + 1) = 1;
        *pdVar7 = dVar9;
        *(undefined2 *)(pdVar7 + 1) = 8;
        return pdVar7;
      }
      unaff_x30 = 0x108d67bbc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = pdVar7;
SUB_108d82720:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(double **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar3 = *(ushort *)(pdVar7 + 1);
      pdVar8 = pdVar7;
      if ((uVar3 >> 0xd & 1) != 0) {
        func_0x000108d82798(pdVar7,*pdVar7);
        uVar3 = *(ushort *)(pdVar7 + 1);
      }
      if ((uVar3 >> 10 & 1) == 0) {
        if ((uVar3 >> 5 & 1) == 0) {
          if ((uVar3 >> 6 & 1) != 0) {
            plVar13 = (long *)*pdVar7;
            plVar13[1] = *(long *)(*plVar13 + 0xf8);
            *(long **)(*plVar13 + 0xf8) = plVar13;
          }
        }
        else {
          pdVar8 = (double *)*pdVar7;
          func_0x000108d82838(pdVar8);
        }
      }
      else {
        pdVar8 = (double *)pdVar7[2];
        (*(code *)pdVar7[6])(pdVar8);
      }
      *(undefined2 *)(pdVar7 + 1) = 1;
      return pdVar8;
    }
    func_0x000108d6797c();
    if ((long)dVar9 < 0) {
      if (dVar9 == -0.0) {
        *(undefined4 *)((long)param_2 + 0x24) = 1;
        *(undefined1 *)((long)param_2 + 0x29) = 1;
        uVar4 = 0xf51b436;
        lVar10 = *param_2;
        if (*(long *)(lVar10 + 0x28) == 0) {
          iVar14 = 1000000000;
        }
        else {
          iVar14 = *(int *)(*(long *)(lVar10 + 0x28) + 0x68);
        }
        _strlen();
        uVar4 = uVar4 & 0x3fffffff;
        if (iVar14 < (int)uVar4) {
          uVar4 = iVar14 + 1;
        }
        if (iVar14 < (int)uVar4) {
          pdVar7 = (double *)0x12;
        }
        else {
          iVar1 = uVar4 + 1;
          iVar2 = iVar1;
          if (iVar1 < 0x21) {
            iVar2 = 0x20;
          }
          if (*(int *)(lVar10 + 0x20) < iVar2) {
            lVar5 = lVar10;
            FUN_108d82884(lVar10,iVar2,0);
            if ((int)lVar5 != 0) {
              return (double *)0x7;
            }
            uVar6 = *(undefined8 *)(lVar10 + 0x10);
          }
          else {
            uVar6 = *(undefined8 *)(lVar10 + 0x18);
            *(undefined8 *)(lVar10 + 0x10) = uVar6;
            *(ushort *)(lVar10 + 8) = *(ushort *)(lVar10 + 8) & 0xd;
          }
          _memcpy(uVar6,&UNK_10f51b436,(long)iVar1);
          *(uint *)(lVar10 + 0xc) = uVar4;
          *(undefined2 *)(lVar10 + 8) = 0x202;
          *(undefined1 *)(lVar10 + 10) = 1;
          uVar12 = 0x12;
          if ((int)uVar4 <= iVar14) {
            uVar12 = 0;
          }
          pdVar7 = (double *)(ulong)uVar12;
        }
        return pdVar7;
      }
      dVar9 = (double)-(long)dVar9;
    }
    pdVar7 = (double *)*param_2;
    if (((ulong)pdVar7[1] & 0x2460) != 0) {
      pdVar8 = pdVar7;
      if (((ulong)pdVar7[1] & 0x2460) != 0) {
        func_0x000108d82720(pdVar7);
      }
      *pdVar7 = dVar9;
      *(undefined2 *)(pdVar7 + 1) = 4;
      return pdVar8;
    }
    *pdVar7 = dVar9;
    uVar11 = 4;
  }
  *(undefined2 *)(pdVar7 + 1) = uVar11;
  return pdVar7;
}



/* Entry: 108dc88f4; end: 108dc8bb7;  */

void FUN_108dc88f4(double param_1,long *param_2,int param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double *pdVar7;
  uint uVar8;
  double dStack_38;
  
  if (param_3 == 2) {
    lVar4 = param_4[1];
    if ((0xaaaaaaaaUL >> (*(ushort *)(lVar4 + 8) & 0x1f) & 1) != 0) {
      return;
    }
    func_0x000108d6797c();
    uVar8 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    if (0x1d < (int)uVar8) {
      uVar8 = 0x1e;
    }
  }
  else {
    uVar8 = 0;
  }
  if ((0xaaaaaaaaUL >> (*(ushort *)(*param_4 + 8) & 0x1f) & 1) != 0) {
    return;
  }
  func_0x000108d67900();
  if (uVar8 == 0) {
    bVar1 = false;
    if ((0.0 <= param_1) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 < 9.223372036854776e+18;
    }
    if (bVar1) {
      dStack_38 = (double)(long)(param_1 + 0.5);
      goto LAB_108dc8a14;
    }
  }
  if (uVar8 == 0) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_1 < 0.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < -9.223372036854776e+18;
        bVar2 = param_1 == -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      dStack_38 = -(double)(long)(0.5 - param_1);
      goto LAB_108dc8a14;
    }
  }
  puVar5 = &UNK_10f51b447;
  FUN_108d5e0b4();
  if (puVar5 == (undefined *)0x0) {
    lVar4 = *param_2;
    if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
      *(undefined2 *)(lVar4 + 8) = 1;
    }
    else {
      func_0x000108d82720();
      lVar4 = *param_2;
    }
    *(undefined4 *)((long)param_2 + 0x24) = 7;
    *(undefined1 *)((long)param_2 + 0x29) = 1;
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + 0x51) = 1;
    return;
  }
  puVar6 = puVar5;
  _strlen();
  FUN_108d82a1c(puVar5,&dStack_38,(uint)puVar6 & 0x3fffffff,1);
  func_0x000108d5e198(puVar5);
LAB_108dc8a14:
  pdVar7 = (double *)*param_2;
  if (((ulong)pdVar7[1] & 0x2460) == 0) {
    *(undefined2 *)(pdVar7 + 1) = 1;
  }
  else {
    func_0x000108d82720(pdVar7);
  }
  *pdVar7 = dStack_38;
  *(undefined2 *)(pdVar7 + 1) = 8;
  return;
}



/* Entry: 108dc8bb8; end: 108dc8bcf;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc8bb8(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  FUN_108d67c04(uVar2,&UNK_10dfa05e4,0xffffffff,1,0);
  if ((int)uVar2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar2 = *param_1;
    if (*(long *)(uVar2 + 0x28) == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(*(long *)(uVar2 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar4 < (int)uVar1) {
      uVar1 = iVar4 + 1;
    }
    if (((*(ushort *)(uVar2 + 8) & 0x2460) != 0) || (*(int *)(uVar2 + 0x20) != 0)) {
      FUN_108d826d0(uVar2);
    }
    *(undefined **)(uVar2 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar2 + 0x30) = 0;
    *(uint *)(uVar2 + 0xc) = uVar1;
    *(undefined2 *)(uVar2 + 8) = 0xa02;
    *(undefined1 *)(uVar2 + 10) = 1;
    uVar3 = 0x12;
    if ((int)uVar1 <= iVar4) {
      uVar3 = 0;
    }
    return (ulong)uVar3;
  }
  return uVar2;
}



/* Entry: 108dc8bd0; end: 108dc8c9f;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc8bd0(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  pbVar4 = (byte *)*param_3;
  FUN_108d677b4();
  uVar5 = *param_3;
  FUN_108d678b0(uVar5,1);
  iVar3 = (int)uVar5;
  puVar6 = param_1;
  FUN_108dc9cb0(param_1,(long)iVar3 << 1 | 1);
  if (puVar6 == (ulong *)0x0) {
    return 0;
  }
  puVar8 = puVar6;
  puVar9 = puVar6;
  if (0 < iVar3) {
    do {
      bVar1 = *pbVar4;
      *(undefined *)puVar9 = (&UNK_10dfa30cb)[bVar1 >> 4];
      puVar8 = (ulong *)((long)puVar9 + 2);
      *(undefined *)((long)puVar9 + 1) = (&UNK_10dfa30cb)[(ulong)bVar1 & 0xf];
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
      puVar9 = puVar8;
      pbVar4 = pbVar4 + 1;
    } while (uVar2 != 0);
  }
  *(undefined1 *)puVar8 = 0;
  uVar5 = *param_1;
  FUN_108d67c04(uVar5,puVar6,iVar3 << 1,1,0x108d5e198);
  if ((int)uVar5 != 0x12) {
    return uVar5;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar2 = 0xf51745e;
  uVar5 = *param_1;
  if (*(long *)(uVar5 + 0x28) == 0) {
    iVar3 = 1000000000;
  }
  else {
    iVar3 = *(int *)(*(long *)(uVar5 + 0x28) + 0x68);
  }
  _strlen();
  uVar2 = uVar2 & 0x3fffffff;
  if (iVar3 < (int)uVar2) {
    uVar2 = iVar3 + 1;
  }
  if (((*(ushort *)(uVar5 + 8) & 0x2460) != 0) || (*(int *)(uVar5 + 0x20) != 0)) {
    FUN_108d826d0(uVar5);
  }
  *(undefined **)(uVar5 + 0x10) = &DAT_10f51745e;
  *(undefined8 *)(uVar5 + 0x30) = 0;
  *(uint *)(uVar5 + 0xc) = uVar2;
  *(undefined2 *)(uVar5 + 8) = 0xa02;
  *(undefined1 *)(uVar5 + 10) = 1;
  uVar7 = 0x12;
  if ((int)uVar2 <= iVar3) {
    uVar7 = 0;
  }
  return (ulong)uVar7;
}



/* Entry: 108dc8ca0; end: 108dc8d07;  */

void FUN_108dc8ca0(undefined8 *param_1)

{
  ulong *puVar1;
  ulong uStack_28;
  
  FUN_108d64cc0(8,&uStack_28);
  if ((long)uStack_28 < 0) {
    uStack_28 = -(uStack_28 & 0x7fffffffffffffff);
  }
  puVar1 = (ulong *)*param_1;
  if ((puVar1[1] & 0x2460) == 0) {
    *puVar1 = uStack_28;
    *(undefined2 *)(puVar1 + 1) = 4;
  }
  else {
    FUN_108d839c8();
  }
  return;
}



/* Entry: 108dc8d08; end: 108dc8d83;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc8d08(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)*param_3;
  func_0x000108d6797c();
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  puVar3 = param_1;
  FUN_108dc9cb0(param_1,iVar5);
  if (puVar3 != (ulong *)0x0) {
    FUN_108d64cc0(iVar5,puVar3);
    uVar2 = *param_1;
    FUN_108d67c04(uVar2,puVar3,iVar5,0,0x108d5e198);
    if ((int)uVar2 == 0x12) {
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      uVar1 = 0xf51745e;
      uVar2 = *param_1;
      if (*(long *)(uVar2 + 0x28) == 0) {
        iVar5 = 1000000000;
      }
      else {
        iVar5 = *(int *)(*(long *)(uVar2 + 0x28) + 0x68);
      }
      _strlen();
      uVar1 = uVar1 & 0x3fffffff;
      if (iVar5 < (int)uVar1) {
        uVar1 = iVar5 + 1;
      }
      if (((*(ushort *)(uVar2 + 8) & 0x2460) != 0) || (*(int *)(uVar2 + 0x20) != 0)) {
        FUN_108d826d0(uVar2);
      }
      *(undefined **)(uVar2 + 0x10) = &DAT_10f51745e;
      *(undefined8 *)(uVar2 + 0x30) = 0;
      *(uint *)(uVar2 + 0xc) = uVar1;
      *(undefined2 *)(uVar2 + 8) = 0xa02;
      *(undefined1 *)(uVar2 + 10) = 1;
      uVar4 = 0x12;
      if ((int)uVar1 <= iVar5) {
        uVar4 = 0;
      }
      return (ulong)uVar4;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 108dc8d84; end: 108dc8ddb;  */

long FUN_108dc8d84(long *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *param_3;
  FUN_108d895b4(lVar2,param_3[1],
                *(undefined8 *)(*(long *)(param_1[3] + 8) + (long)(int)param_1[4] * 0x18 + -8));
  if ((int)lVar2 == 0) {
    return lVar2;
  }
  puVar4 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)*param_1;
  if ((*(ushort *)(puVar3 + 1) & 0x2460) != 0) {
    func_0x000108d82720(puVar3);
  }
  uVar6 = puVar4[2];
  uVar7 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar7;
  puVar3[2] = uVar6;
  uVar1 = *(ushort *)(puVar3 + 1);
  uVar5 = uVar1 & 0xfbff;
  *(ushort *)(puVar3 + 1) = uVar5;
  if (((uVar1 & 0x12) != 0) && ((*(ushort *)(puVar4 + 1) >> 0xb & 1) == 0)) {
    *(ushort *)(puVar3 + 1) = uVar5 | 0x1000;
    uVar5 = *(ushort *)(puVar3 + 1);
    if ((uVar5 >> 0xe & 1) != 0) {
      func_0x000108d6781c(puVar3);
      uVar5 = *(ushort *)(puVar3 + 1);
    }
    if (((uVar5 & 0x12) != 0) && ((*(int *)(puVar3 + 4) == 0 || (puVar3[2] != puVar3[3])))) {
      puVar4 = puVar3;
      FUN_108d82884(puVar3,*(int *)((long)puVar3 + 0xc) + 2,1);
      if ((int)puVar4 != 0) {
        return 7;
      }
      *(undefined1 *)(puVar3[2] + (long)*(int *)((long)puVar3 + 0xc)) = 0;
      *(undefined1 *)(puVar3[2] + (long)*(int *)((long)puVar3 + 0xc) + 1) = 0;
      uVar5 = *(ushort *)(puVar3 + 1) | 0x200;
    }
    *(ushort *)(puVar3 + 1) = uVar5 & 0xefff;
    return 0;
  }
  return 0;
}



/* Entry: 108dc8ddc; end: 108dc8df3;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc8ddc(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  FUN_108d67c04(uVar2,&UNK_10f517522,0xffffffff,1,0);
  if ((int)uVar2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar2 = *param_1;
    if (*(long *)(uVar2 + 0x28) == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(*(long *)(uVar2 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar4 < (int)uVar1) {
      uVar1 = iVar4 + 1;
    }
    if (((*(ushort *)(uVar2 + 8) & 0x2460) != 0) || (*(int *)(uVar2 + 0x20) != 0)) {
      FUN_108d826d0(uVar2);
    }
    *(undefined **)(uVar2 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar2 + 0x30) = 0;
    *(uint *)(uVar2 + 0xc) = uVar1;
    *(undefined2 *)(uVar2 + 8) = 0xa02;
    *(undefined1 *)(uVar2 + 10) = 1;
    uVar3 = 0x12;
    if ((int)uVar1 <= iVar4) {
      uVar3 = 0;
    }
    return (ulong)uVar3;
  }
  return uVar2;
}



/* Entry: 108dc8df4; end: 108dc8efb;  */

void FUN_108dc8df4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  func_0x000108d6797c(uVar1);
  FUN_108d67a14(param_3[1],1);
  FUN_108d64c00(uVar1,&UNK_10f517517);
  return;
}



/* Entry: 108dc8efc; end: 108dc923f;  */

/* WARNING: Possible PIC construction at 0x000108d67e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d67e6c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

long * FUN_108dc8efc(double param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  byte bVar16;
  double dStack_88;
  undefined1 auStack_7a [42];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar6 = (byte *)*param_4;
  bVar16 = (&UNK_10dfa06fd)[(ulong)*(ushort *)(pbVar6 + 8) & 0x1f];
  if (bVar16 < 3) {
    if (bVar16 == 1) {
      plVar5 = (long *)*param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        if ((*(ushort *)(plVar5 + 1) & 0x2460) != 0) {
          func_0x000108d82720(plVar5);
        }
        lVar10 = *(long *)(pbVar6 + 0x10);
        lVar14 = *(long *)pbVar6;
        plVar5[1] = *(long *)(pbVar6 + 8);
        *plVar5 = lVar14;
        plVar5[2] = lVar10;
        uVar1 = *(ushort *)(plVar5 + 1);
        uVar8 = uVar1 & 0xfbff;
        *(ushort *)(plVar5 + 1) = uVar8;
        if (((uVar1 & 0x12) != 0) && ((*(ushort *)(pbVar6 + 8) >> 0xb & 1) == 0)) {
          *(ushort *)(plVar5 + 1) = uVar8 | 0x1000;
          uVar8 = *(ushort *)(plVar5 + 1);
          if ((uVar8 >> 0xe & 1) != 0) {
            func_0x000108d6781c(plVar5);
            uVar8 = *(ushort *)(plVar5 + 1);
          }
          if (((uVar8 & 0x12) != 0) && (((int)plVar5[4] == 0 || (plVar5[2] != plVar5[3])))) {
            plVar3 = plVar5;
            FUN_108d82884(plVar5,*(int *)((long)plVar5 + 0xc) + 2,1);
            if ((int)plVar3 != 0) {
              return (long *)0x7;
            }
            *(undefined1 *)(plVar5[2] + (long)*(int *)((long)plVar5 + 0xc)) = 0;
            *(undefined1 *)(plVar5[2] + (long)*(int *)((long)plVar5 + 0xc) + 1) = 0;
            uVar8 = *(ushort *)(plVar5 + 1) | 0x200;
          }
          *(ushort *)(plVar5 + 1) = uVar8 & 0xefff;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
      goto LAB_108dc923c;
    }
    if (bVar16 != 2) {
LAB_108dc90bc:
      plVar5 = param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        plVar5 = (long *)&UNK_10f517654;
        iVar15 = 4;
        uVar7 = 0;
code_r0x000108d67a8c:
        plVar3 = (long *)*param_2;
        FUN_108d67c04(plVar3,plVar5,iVar15,1,uVar7);
        if ((int)plVar3 != 0x12) {
          return plVar3;
        }
        *(undefined4 *)((long)param_2 + 0x24) = 0x12;
        *(undefined1 *)((long)param_2 + 0x29) = 1;
        uVar2 = 0xf51745e;
        lVar10 = *param_2;
        if (*(long *)(lVar10 + 0x28) == 0) {
          iVar15 = 1000000000;
        }
        else {
          iVar15 = *(int *)(*(long *)(lVar10 + 0x28) + 0x68);
        }
        _strlen();
        uVar2 = uVar2 & 0x3fffffff;
        if (iVar15 < (int)uVar2) {
          uVar2 = iVar15 + 1;
        }
        if (((*(ushort *)(lVar10 + 8) & 0x2460) != 0) || (*(int *)(lVar10 + 0x20) != 0)) {
          func_0x000108d826d0(lVar10);
        }
        *(undefined **)(lVar10 + 0x10) = &DAT_10f51745e;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(uint *)(lVar10 + 0xc) = uVar2;
        *(undefined2 *)(lVar10 + 8) = 0xa02;
        *(undefined1 *)(lVar10 + 10) = 1;
        uVar9 = 0x12;
        if ((int)uVar2 <= iVar15) {
          uVar9 = 0;
        }
        return (long *)(ulong)uVar9;
      }
      goto LAB_108dc923c;
    }
    FUN_108d67900(pbVar6);
    func_0x000108d64bd8(0x32,auStack_7a,&UNK_10f517b49);
    FUN_108d82a1c(auStack_7a,&dStack_88,0x14,1);
    if (param_1 != dStack_88) {
      func_0x000108d64bd8(0x32,auStack_7a,&UNK_10f51b44c);
    }
    FUN_108d67a8c(param_2,auStack_7a,0xffffffff,1,0xffffffffffffffff);
    plVar5 = param_2;
  }
  else if (bVar16 == 3) {
    FUN_108d67a14(pbVar6,1);
    plVar5 = (long *)0x0;
    if (pbVar6 != (byte *)0x0) {
      lVar12 = 0;
      lVar14 = 0;
      do {
        if (pbVar6[lVar12] == 0x27) {
          lVar14 = lVar14 + 1;
        }
        else if (pbVar6[lVar12] == 0) goto LAB_108dc9160;
        lVar12 = lVar12 + 1;
      } while( true );
    }
  }
  else {
    if (bVar16 != 4) goto LAB_108dc90bc;
    func_0x000108d677b4();
    uVar4 = *param_4;
    FUN_108d678b0(uVar4,1);
    plVar3 = param_2;
    FUN_108dc9cb0(param_2,(-(uVar4 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar4 & 0xffffffff) << 1) +
                          4);
    plVar5 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      if (0 < (int)uVar4) {
        uVar11 = uVar4 & 0xffffffff;
        puVar13 = (undefined *)((long)plVar3 + 3);
        do {
          puVar13[-1] = (&UNK_10dfa30cb)[*pbVar6 >> 4];
          *puVar13 = (&UNK_10dfa30cb)[(ulong)*pbVar6 & 0xf];
          uVar11 = uVar11 - 1;
          puVar13 = puVar13 + 2;
          pbVar6 = pbVar6 + 1;
        } while (uVar11 != 0);
      }
      *(undefined2 *)((long)plVar3 + (long)((int)uVar4 << 1) + 2) = 0x27;
      *(undefined2 *)plVar3 = 0x2758;
      FUN_108d67a8c(param_2,plVar3,0xffffffff,1,0xffffffffffffffff);
      plVar5 = param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
        if (iRam0000000113297910 != 0) {
          if (plRam0000000113829af0 != (long *)0x0) {
            (*pcRam0000000113297998)();
          }
          plVar5 = plVar3;
          (*pcRam0000000113297950)();
          lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar5;
          lRam0000000113829a98 = lRam0000000113829a98 + -1;
          (*pcRam0000000113297940)(plVar3);
          plVar3 = plRam0000000113829af0;
          UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
          if (plRam0000000113829af0 == (long *)0x0) {
            return (long *)0x0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar3);
        return plVar3;
      }
      goto LAB_108dc923c;
    }
  }
  goto LAB_108dc91c0;
LAB_108dc9160:
  plVar5 = param_2;
  FUN_108dc9cb0(param_2,lVar14 + lVar12 + 3);
  if (plVar5 != (long *)0x0) {
    *(undefined1 *)plVar5 = 0x27;
    bVar16 = *pbVar6;
    if (bVar16 == 0) {
      iVar15 = 1;
    }
    else {
      uVar4 = 1;
      do {
        iVar15 = (int)uVar4;
        uVar4 = (long)iVar15 + 1;
        *(byte *)((long)plVar5 + (long)iVar15) = bVar16;
        if (*pbVar6 == 0x27) {
          *(undefined1 *)((long)plVar5 + uVar4) = 0x27;
          uVar4 = (ulong)(iVar15 + 2);
        }
        iVar15 = (int)uVar4;
        bVar16 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      } while (bVar16 != 0);
    }
    *(undefined2 *)((long)plVar5 + (long)iVar15) = 0x27;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) goto LAB_108dc923c;
    uVar7 = 0x108d5e198;
    iVar15 = iVar15 + 1;
    goto code_r0x000108d67a8c;
  }
LAB_108dc91c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return plVar5;
  }
LAB_108dc923c:
  ___stack_chk_fail();
  plVar5 = (long *)*plVar5;
  lVar10 = *(long *)(plVar5[5] + 0x30);
  if ((*(ushort *)(plVar5 + 1) & 0x2460) != 0) {
    plVar3 = plVar5;
    if ((*(ushort *)(plVar5 + 1) & 0x2460) != 0) {
      func_0x000108d82720(plVar5);
    }
    *plVar5 = lVar10;
    *(undefined2 *)(plVar5 + 1) = 4;
    return plVar3;
  }
  *plVar5 = lVar10;
  *(undefined2 *)(plVar5 + 1) = 4;
  return plVar5;
}



/* Entry: 108dc9240; end: 108dc92cf;  */

void FUN_108dc9240(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *(undefined8 *)(puVar1[5] + 0x30);
  if ((*(ushort *)(puVar1 + 1) & 0x2460) != 0) {
    if ((*(ushort *)(puVar1 + 1) & 0x2460) != 0) {
      func_0x000108d82720(puVar1);
    }
    *puVar1 = uVar2;
    *(undefined2 *)(puVar1 + 1) = 4;
    return;
  }
  *puVar1 = uVar2;
  *(undefined2 *)(puVar1 + 1) = 4;
  return;
}



/* Entry: 108dc92d0; end: 108dc9563;  */

/* WARNING: Possible PIC construction at 0x000108d67e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d67e6c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

long * FUN_108dc92d0(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 *puVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  
  lVar6 = *param_3;
  FUN_108d67a14(lVar6,1);
  if (lVar6 == 0) {
    return (long *)0x0;
  }
  lVar7 = *param_3;
  FUN_108d678b0(lVar7,1);
  pcVar8 = (char *)param_3[1];
  func_0x000108d67a18(pcVar8,1);
  if (pcVar8 == (char *)0x0) {
    return (long *)0x0;
  }
  if (*pcVar8 == '\0') {
    puVar15 = (undefined8 *)*param_3;
    puVar14 = (undefined8 *)*param_1;
    if ((*(ushort *)(puVar14 + 1) & 0x2460) != 0) {
      func_0x000108d82720(puVar14);
    }
    uVar19 = puVar15[2];
    uVar25 = *puVar15;
    puVar14[1] = puVar15[1];
    *puVar14 = uVar25;
    puVar14[2] = uVar19;
    uVar3 = *(ushort *)(puVar14 + 1);
    uVar16 = uVar3 & 0xfbff;
    *(ushort *)(puVar14 + 1) = uVar16;
    if (((uVar3 & 0x12) != 0) && ((*(ushort *)(puVar15 + 1) >> 0xb & 1) == 0)) {
      *(ushort *)(puVar14 + 1) = uVar16 | 0x1000;
      uVar16 = *(ushort *)(puVar14 + 1);
      if ((uVar16 >> 0xe & 1) != 0) {
        func_0x000108d6781c(puVar14);
        uVar16 = *(ushort *)(puVar14 + 1);
      }
      if (((uVar16 & 0x12) != 0) && ((*(int *)(puVar14 + 4) == 0 || (puVar14[2] != puVar14[3])))) {
        puVar15 = puVar14;
        FUN_108d82884(puVar14,*(int *)((long)puVar14 + 0xc) + 2,1);
        if ((int)puVar15 != 0) {
          return (long *)0x7;
        }
        *(undefined1 *)(puVar14[2] + (long)*(int *)((long)puVar14 + 0xc)) = 0;
        *(undefined1 *)(puVar14[2] + (long)*(int *)((long)puVar14 + 0xc) + 1) = 0;
        uVar16 = *(ushort *)(puVar14 + 1) | 0x200;
      }
      *(ushort *)(puVar14 + 1) = uVar16 & 0xefff;
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  lVar9 = param_3[1];
  FUN_108d678b0(lVar9,1);
  lVar10 = param_3[2];
  func_0x000108d67a18(lVar10,1);
  if (lVar10 == 0) {
    return (long *)0x0;
  }
  lVar11 = param_3[2];
  FUN_108d678b0(lVar11,1);
  iVar21 = (int)lVar7;
  lVar7 = (long)(iVar21 + 1);
  plVar12 = param_1;
  FUN_108dc9cb0(param_1,lVar7);
  if (plVar12 == (long *)0x0) {
    return (long *)0x0;
  }
  iVar24 = (int)lVar9;
  if (iVar21 - iVar24 < 0) {
    iVar18 = 0;
    iVar23 = 0;
  }
  else {
    iVar23 = 0;
    iVar20 = (int)lVar11;
    plVar5 = plVar12;
    iVar22 = 0;
    do {
      pcVar13 = (char *)(lVar6 + iVar22);
      cVar2 = *pcVar13;
      plVar12 = plVar5;
      if ((cVar2 == *pcVar8) && (_memcmp(pcVar13,pcVar8,(long)iVar24), (int)pcVar13 == 0)) {
        lVar9 = *param_1;
        lVar7 = lVar7 + (iVar20 - iVar24);
        if ((long)*(int *)(*(long *)(lVar9 + 0x28) + 0x68) < lVar7 + -1) {
          *(undefined4 *)((long)param_1 + 0x24) = 0x12;
          *(undefined1 *)((long)param_1 + 0x29) = 1;
          FUN_108d67c04(lVar9,&DAT_10f51745e,0xffffffff,1,0);
SUB_108d5e198:
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
          UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
          if (iRam0000000113297910 != 0) {
            if (plRam0000000113829af0 != (long *)0x0) {
              (*pcRam0000000113297998)();
            }
            plVar12 = plVar5;
            (*pcRam0000000113297950)();
            lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar12;
            lRam0000000113829a98 = lRam0000000113829a98 + -1;
            (*pcRam0000000113297940)(plVar5);
            plVar5 = plRam0000000113829af0;
            UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
            if (plRam0000000113829af0 == (long *)0x0) {
              return (long *)0x0;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar5);
          return plVar5;
        }
        FUN_108d62be4();
        if (((int)lVar9 != 0) || (FUN_108d63588(plVar5,(long)(int)lVar7), plVar12 == (long *)0x0)) {
          FUN_108d68164(param_1);
          goto SUB_108d5e198;
        }
        _memcpy((long)plVar12 + (long)iVar23,lVar10,(long)iVar20);
        iVar23 = iVar23 + iVar20;
        iVar22 = iVar24 + -1 + iVar22;
      }
      else {
        *(char *)((long)plVar5 + (long)iVar23) = cVar2;
        iVar23 = iVar23 + 1;
      }
      iVar18 = iVar22 + 1;
      bVar1 = iVar22 < iVar21 - iVar24;
      plVar5 = plVar12;
      iVar22 = iVar18;
    } while (bVar1);
  }
  _memcpy((long)plVar12 + (long)iVar23,lVar6 + iVar18,(long)(iVar21 - iVar18));
  lVar6 = (long)iVar23 + (long)(iVar21 - iVar18);
  *(undefined1 *)((long)plVar12 + lVar6) = 0;
  plVar5 = (long *)*param_1;
  FUN_108d67c04(plVar5,plVar12,lVar6,1,0x108d5e198);
  if ((int)plVar5 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar4 = 0xf51745e;
    lVar6 = *param_1;
    if (*(long *)(lVar6 + 0x28) == 0) {
      iVar21 = 1000000000;
    }
    else {
      iVar21 = *(int *)(*(long *)(lVar6 + 0x28) + 0x68);
    }
    _strlen();
    uVar4 = uVar4 & 0x3fffffff;
    if (iVar21 < (int)uVar4) {
      uVar4 = iVar21 + 1;
    }
    if (((*(ushort *)(lVar6 + 8) & 0x2460) != 0) || (*(int *)(lVar6 + 0x20) != 0)) {
      FUN_108d826d0(lVar6);
    }
    *(undefined **)(lVar6 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(uint *)(lVar6 + 0xc) = uVar4;
    *(undefined2 *)(lVar6 + 8) = 0xa02;
    *(undefined1 *)(lVar6 + 10) = 1;
    uVar17 = 0x12;
    if ((int)uVar4 <= iVar21) {
      uVar17 = 0;
    }
    return (long *)(ulong)uVar17;
  }
  return plVar5;
}



/* Entry: 108dc9564; end: 108dc95d7;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

uint * FUN_108dc9564(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  
  lVar6 = *(long *)(*param_1 + 0x28);
  lVar3 = *param_3;
  func_0x000108d6797c();
  if (*(int *)(lVar6 + 0x68) < lVar3) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 0x28) == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*(long *)(lVar3 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar7 < (int)uVar1) {
      uVar1 = iVar7 + 1;
    }
    if (((*(ushort *)(lVar3 + 8) & 0x2460) != 0) || (*(int *)(lVar3 + 0x20) != 0)) {
      FUN_108d826d0(lVar3);
    }
    *(undefined **)(lVar3 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(uint *)(lVar3 + 0xc) = uVar1;
    *(undefined2 *)(lVar3 + 8) = 0xa02;
    *(undefined1 *)(lVar3 + 10) = 1;
    uVar5 = 0x12;
    if ((int)uVar1 <= iVar7) {
      uVar5 = 0;
    }
    return (uint *)(ulong)uVar5;
  }
  puVar4 = (uint *)*param_1;
  puVar2 = puVar4;
  if (((puVar4[2] & 0x2460) != 0) || (puVar4[8] != 0)) {
    FUN_108d826d0(puVar4);
  }
  *(undefined2 *)(puVar4 + 2) = 0x4010;
  puVar4[3] = 0;
  *puVar4 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
  *(undefined1 *)((long)puVar4 + 10) = 1;
  puVar4[4] = 0;
  puVar4[5] = 0;
  return puVar2;
}



/* Entry: 108dc95d8; end: 108dc9693;  */

void FUN_108dc95d8(long *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar2 = *param_3;
  FUN_108d67a14(lVar2,1);
  lVar3 = 0;
  uVar4 = *(undefined8 *)(*param_1 + 0x28);
  uStack_48 = 0;
  if (param_2 == 2) {
    lVar3 = param_3[1];
    func_0x000108d67a18(lVar3,1,0);
  }
  if ((lVar2 != 0) &&
     (FUN_108d6bb4c(uVar4,lVar2,lVar3,&uStack_48), uVar1 = uStack_48, (int)uVar4 != 0)) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    FUN_108d67c04(*param_1,uStack_48,0xffffffff,1,0xffffffffffffffff);
    func_0x000108d5e198(uVar1);
  }
  return;
}



/* Entry: 108dc9694; end: 108dc97bb;  */

void FUN_108dc9694(double param_1,double *param_2,undefined8 param_3,ulong *param_4)

{
  ushort uVar1;
  ulong uVar2;
  double dVar3;
  ulong uVar4;
  
  if ((*(ushort *)((long)param_2[2] + 8) >> 0xd & 1) == 0) {
    FUN_108d68de0(param_2,0x20);
  }
  else {
    param_2 = *(double **)((long)param_2[2] + 0x10);
  }
  uVar4 = *param_4;
  uVar1 = *(ushort *)(uVar4 + 8);
  if ((uVar1 & 0xf) == 2) {
    FUN_108d6a060(uVar4,0);
    uVar1 = *(ushort *)(uVar4 + 8);
  }
  uVar4 = 1L << (uVar1 & 0x1f);
  if (param_2 == (double *)0x0 || (uVar4 & 0x5555555555555555) == 0) {
    return;
  }
  param_2[2] = (double)((long)param_2[2] + 1);
  uVar2 = *param_4;
  if ((uVar4 & 0x50505050) == 0) {
    func_0x000108d67900();
    *param_2 = param_1 + *param_2;
    *(undefined1 *)((long)param_2 + 0x19) = 1;
    return;
  }
  func_0x000108d6797c();
  *param_2 = *param_2 + (double)(long)uVar2;
  if (*(char *)(param_2 + 3) != '\0' || *(char *)((long)param_2 + 0x19) != '\0') {
    return;
  }
  dVar3 = param_2[1];
  if ((long)uVar2 < 0) {
    if ((-1 < (long)dVar3) || (-0x7fffffffffffffff - (long)dVar3 <= (long)(uVar2 + 1)))
    goto LAB_108dc97a4;
  }
  else if ((long)dVar3 < 1 || uVar2 <= ((ulong)dVar3 ^ 0x7fffffffffffffff)) {
LAB_108dc97a4:
    param_2[1] = (double)((long)dVar3 + uVar2);
    return;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}



/* Entry: 108dc97bc; end: 108dc9a3b;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

long * FUN_108dc97bc(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  if ((*(ushort *)(param_1[2] + 8) >> 0xd & 1) == 0) {
    plVar6 = param_1;
    FUN_108d68de0(param_1,0);
  }
  else {
    plVar6 = *(long **)(param_1[2] + 0x10);
  }
  if ((plVar6 != (long *)0x0) && (0 < plVar6[2])) {
    if ((char)plVar6[3] != '\0') {
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      uVar3 = 0xf51b436;
      lVar8 = *param_1;
      if (*(long *)(lVar8 + 0x28) == 0) {
        iVar10 = 1000000000;
      }
      else {
        iVar10 = *(int *)(*(long *)(lVar8 + 0x28) + 0x68);
      }
      _strlen();
      uVar3 = uVar3 & 0x3fffffff;
      if (iVar10 < (int)uVar3) {
        uVar3 = iVar10 + 1;
      }
      if (iVar10 < (int)uVar3) {
        plVar6 = (long *)0x12;
      }
      else {
        iVar1 = uVar3 + 1;
        iVar2 = iVar1;
        if (iVar1 < 0x21) {
          iVar2 = 0x20;
        }
        if (*(int *)(lVar8 + 0x20) < iVar2) {
          lVar4 = lVar8;
          FUN_108d82884(lVar8,iVar2,0);
          if ((int)lVar4 != 0) {
            return (long *)0x7;
          }
          uVar5 = *(undefined8 *)(lVar8 + 0x10);
        }
        else {
          uVar5 = *(undefined8 *)(lVar8 + 0x18);
          *(undefined8 *)(lVar8 + 0x10) = uVar5;
          *(ushort *)(lVar8 + 8) = *(ushort *)(lVar8 + 8) & 0xd;
        }
        _memcpy(uVar5,&UNK_10f51b436,(long)iVar1);
        *(uint *)(lVar8 + 0xc) = uVar3;
        *(undefined2 *)(lVar8 + 8) = 0x202;
        *(undefined1 *)(lVar8 + 10) = 1;
        uVar9 = 0x12;
        if ((int)uVar3 <= iVar10) {
          uVar9 = 0;
        }
        plVar6 = (long *)(ulong)uVar9;
      }
      return plVar6;
    }
    if (*(char *)((long)plVar6 + 0x19) != '\0') {
      lVar8 = *plVar6;
      param_1 = (long *)*param_1;
      plVar6 = param_1;
      if ((*(ushort *)(param_1 + 1) & 0x2460) == 0) {
        *(undefined2 *)(param_1 + 1) = 1;
      }
      else {
        func_0x000108d82720(param_1);
      }
      *param_1 = lVar8;
      *(undefined2 *)(param_1 + 1) = 8;
      return plVar6;
    }
    lVar8 = plVar6[1];
    plVar6 = (long *)*param_1;
    if ((*(ushort *)(plVar6 + 1) & 0x2460) != 0) {
      plVar7 = plVar6;
      if ((*(ushort *)(plVar6 + 1) & 0x2460) != 0) {
        func_0x000108d82720(plVar6);
      }
      *plVar6 = lVar8;
      *(undefined2 *)(plVar6 + 1) = 4;
      return plVar7;
    }
    *plVar6 = lVar8;
    *(undefined2 *)(plVar6 + 1) = 4;
  }
  return plVar6;
}



/* Entry: 108dc9a3c; end: 108dc9b4b;  */

void FUN_108dc9a3c(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((1L << (*(ushort *)(*param_3 + 8) & 0x1f) & 0xaaaaaaaaaaaaaaaaU) != 0) {
    return;
  }
  if ((*(ushort *)(param_1[2] + 8) >> 0xd & 1) == 0) {
    plVar7 = param_1;
    FUN_108d68de0(param_1,0x28);
  }
  else {
    plVar7 = *(long **)(param_1[2] + 0x10);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar5 = plVar7[4];
  *(undefined4 *)(plVar7 + 4) = *(undefined4 *)(*(long *)(*param_1 + 0x28) + 0x68);
  if ((int)lVar5 != 0) {
    if (param_2 == 2) {
      puVar4 = (undefined *)param_3[1];
      FUN_108d67a14(puVar4,1);
      lVar5 = param_3[1];
      FUN_108d678b0(lVar5,1);
      if ((int)lVar5 == 0) goto LAB_108dc9b10;
    }
    else {
      lVar5 = 1;
      puVar4 = &DAT_10f68e8ee;
    }
    FUN_108d71998(plVar7,puVar4,lVar5);
  }
LAB_108dc9b10:
  lVar5 = *param_3;
  func_0x000108d67a18(lVar5,1);
  lVar6 = *param_3;
  FUN_108d678b0(lVar6,1);
  if (lVar5 == 0) {
    return;
  }
  lVar2 = plVar7[3];
  iVar1 = (int)lVar2 + (int)lVar6;
  if (*(int *)((long)plVar7 + 0x1c) <= iVar1) {
    plVar3 = plVar7;
    func_0x000108d71acc(plVar7,lVar6);
    if (0 < (int)plVar3) {
      _memcpy(plVar7[2] + (long)(int)plVar7[3],lVar5,(ulong)plVar3 & 0xffffffff);
      *(int *)(plVar7 + 3) = (int)plVar7[3] + (int)plVar3;
    }
    return;
  }
  *(int *)(plVar7 + 3) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(plVar7[2] + (long)(int)lVar2,lVar5,(long)(int)lVar6);
  return;
}



/* Entry: 108dc9b4c; end: 108dc9c0b;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108dc9b4c(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(ushort *)(param_1[2] + 8) >> 0xd & 1) == 0) {
    puVar2 = param_1;
    FUN_108d68de0(param_1,0);
  }
  else {
    puVar2 = *(ulong **)(param_1[2] + 0x10);
  }
  if (puVar2 != (ulong *)0x0) {
    if (*(char *)((long)puVar2 + 0x24) == '\x01') {
      uVar1 = *param_1;
      if ((*(ushort *)(uVar1 + 8) & 0x2460) == 0) {
        *(undefined2 *)(uVar1 + 8) = 1;
      }
      else {
        func_0x000108d82720();
        uVar1 = *param_1;
      }
      *(undefined4 *)((long)param_1 + 0x24) = 7;
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      *(undefined1 *)(*(long *)(uVar1 + 0x28) + 0x51) = 1;
      return uVar1;
    }
    if (*(char *)((long)puVar2 + 0x24) == '\x02') {
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      uVar1 = *param_1;
    }
    else {
      FUN_108d64afc();
      uVar1 = *param_1;
      FUN_108d67c04(uVar1,puVar2,0xffffffff,1,0x108d5e198);
      if ((int)uVar1 != 0x12) {
        return uVar1;
      }
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      uVar1 = *param_1;
    }
    uVar3 = 0xf51745e;
    if (*(long *)(uVar1 + 0x28) == 0) {
      iVar5 = 1000000000;
    }
    else {
      iVar5 = *(int *)(*(long *)(uVar1 + 0x28) + 0x68);
    }
    _strlen();
    uVar3 = uVar3 & 0x3fffffff;
    if (iVar5 < (int)uVar3) {
      uVar3 = iVar5 + 1;
    }
    if (((*(ushort *)(uVar1 + 8) & 0x2460) != 0) || (*(int *)(uVar1 + 0x20) != 0)) {
      FUN_108d826d0(uVar1);
    }
    *(undefined **)(uVar1 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar1 + 0x30) = 0;
    *(uint *)(uVar1 + 0xc) = uVar3;
    *(undefined2 *)(uVar1 + 8) = 0xa02;
    *(undefined1 *)(uVar1 + 10) = 1;
    uVar4 = 0x12;
    if ((int)uVar3 <= iVar5) {
      uVar4 = 0;
    }
    return (ulong)uVar4;
  }
  return 0;
}



/* Entry: 108dc9c0c; end: 108dc9caf;  */

void FUN_108dc9c0c(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)(param_2 + 0x30);
  if (pbVar4 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    pbVar1 = pbVar4;
    _strlen();
    uVar3 = (uint)pbVar1 & 0x3fffffff;
  }
  uVar5 = (ulong)((uVar3 + (byte)(&UNK_10dfa05fd)[*pbVar4]) % 0x17);
  lVar2 = param_1;
  FUN_108dc9d24(param_1,uVar5,pbVar4);
  if (lVar2 == 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + uVar5 * 8);
    *(long *)(param_1 + uVar5 * 8) = param_2;
  }
  else {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    *(long *)(lVar2 + 0x10) = param_2;
  }
  return;
}



/* Entry: 108dc9cb0; end: 108dc9d23;  */

void FUN_108dc9cb0(long *param_1,long param_2)

{
  if (*(int *)(*(long *)(*param_1 + 0x28) + 0x68) < param_2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    FUN_108d67c04(*param_1,&DAT_10f51745e,0xffffffff,1,0);
  }
  else {
    FUN_108d60848();
    if (param_2 == 0) {
      FUN_108d68164(param_1);
    }
  }
  return;
}



/* Entry: 108dc9d24; end: 108dc9d7f;  */

long FUN_108dc9d24(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar2 + 0x30);
    lVar1 = lVar3;
    func_0x000108d5ea34(lVar3,param_3,param_4);
    if (((int)lVar1 == 0) && (*(char *)(lVar3 + (param_4 & 0xffffffff)) == '\0')) break;
    lVar2 = *(long *)(lVar2 + 0x38);
  }
  return lVar2;
}



/* Entry: 108dc9d80; end: 108dc9fcf;  */

void FUN_108dc9d80(undefined8 *param_1)

{
  undefined8 *puVar1;
  long alStack_50 [6];
  
  puVar1 = param_1;
  FUN_108dca54c();
  if ((int)puVar1 == 0) {
    FUN_108dcaed0(alStack_50);
    FUN_108d67b88((double)alStack_50[0] / 86400000.0,*param_1);
  }
  return;
}



/* Entry: 108dc9fd0; end: 108dca527;  */

void FUN_108dc9fd0(long *param_1,undefined *param_2,long *param_3)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char cVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  
code_r0x000108dc9fd0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(double *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  if ((int)param_2 != 0) {
    lVar5 = *param_3;
    FUN_108d67a14(lVar5,1);
    plVar6 = (long *)0x0;
    unaff_x19 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    if ((lVar5 != 0) &&
       (plVar6 = param_1,
       FUN_108dca54c(param_1,(int)param_2 + -1,param_3 + 1,
                     (undefined1 *)((long)register0x00000008 + -0x128)), unaff_x20 = lVar5,
       (int)plVar6 == 0)) {
      lVar13 = 0;
      plVar6 = (long *)*param_1;
      plVar11 = (long *)plVar6[5];
      uVar12 = 1;
      do {
        if (*(char *)(lVar5 + lVar13) == '%') {
          lVar13 = lVar13 + 1;
          bVar3 = *(byte *)(lVar5 + lVar13);
          if (bVar3 < 0x59) {
            if (bVar3 < 0x4d) {
              if (bVar3 == 0x25) goto LAB_108dca120;
              if (bVar3 != 0x48) {
                if (bVar3 == 0x4a) goto LAB_108dca114;
                break;
              }
            }
            else if (((bVar3 != 0x4d) && (bVar3 != 0x53)) && (bVar3 != 0x57)) break;
LAB_108dca0f8:
            uVar12 = uVar12 + 1;
          }
          else if (bVar3 < 0x6a) {
            if (bVar3 != 0x59) {
              if (bVar3 == 100) goto LAB_108dca0f8;
              if (bVar3 != 0x66) break;
            }
            uVar12 = uVar12 + 8;
          }
          else if (bVar3 < 0x73) {
            if (bVar3 != 0x6a) {
              if (bVar3 == 0x6d) goto LAB_108dca0f8;
              break;
            }
            uVar12 = uVar12 + 3;
          }
          else if (bVar3 == 0x73) {
LAB_108dca114:
            uVar12 = uVar12 + 0x32;
          }
          else if (bVar3 != 0x77) break;
        }
        else if (*(char *)(lVar5 + lVar13) == '\0') {
          if (uVar12 < 100) {
            plVar11 = (long *)((long)register0x00000008 + -0xf4);
          }
          else {
            if ((ulong)(long)(int)plVar11[0xd] < uVar12) {
              *(undefined4 *)((long)param_1 + 0x24) = 0x12;
              *(undefined1 *)((long)param_1 + 0x29) = 1;
              FUN_108d67c04(plVar6,&DAT_10f51745e,0xffffffff,1,0);
              break;
            }
            FUN_108d6a6fc(plVar11,(long)(int)uVar12);
            if (plVar11 == (long *)0x0) {
              plVar6 = param_1;
              FUN_108d68164();
              unaff_x21 = plVar11;
              break;
            }
          }
          FUN_108dcaed0((undefined1 *)((long)register0x00000008 + -0x128));
          FUN_108dcb55c((undefined1 *)((long)register0x00000008 + -0x128));
          FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0x128));
          unaff_x28 = 0;
          unaff_x23 = 0;
          unaff_d8 = 0x4194997000000000;
          unaff_d9 = 0x100000001;
          unaff_x24 = 43200000;
          unaff_x25 = 0x636ba875fd33dc87;
          unaff_x26 = 0x4924924924924925;
          unaff_d10 = 59.999;
          goto LAB_108dca1ec;
        }
LAB_108dca120:
        lVar13 = lVar13 + 1;
        uVar12 = uVar12 + 1;
      } while( true );
    }
  }
  goto LAB_108dca4d8;
LAB_108dca1ec:
  cVar10 = *(char *)(lVar5 + unaff_x23);
  if (cVar10 == '%') {
    unaff_x23 = unaff_x23 + 1;
    bVar3 = *(byte *)(lVar5 + unaff_x23);
    unaff_x27 = (ulong)bVar3;
    if (bVar3 < 100) {
      if (bVar3 < 0x53) {
        if (bVar3 == 0x48) {
          uVar12 = (ulong)*(uint *)((long)register0x00000008 + -0x114);
        }
        else {
          if (bVar3 == 0x4a) {
            *(double *)((long)register0x00000008 + -0x170) =
                 (double)*(long *)((long)register0x00000008 + -0x128) / 86400000.0;
            uVar7 = 0x14;
            pcVar9 = "%.16g";
            goto LAB_108dca488;
          }
          if (bVar3 != 0x4d) goto LAB_108dca4a4;
          uVar12 = (ulong)*(uint *)((long)register0x00000008 + -0x110);
        }
      }
      else {
        if (bVar3 != 0x53) {
          if (bVar3 == 0x57) {
LAB_108dca2e8:
            *(undefined8 *)((long)register0x00000008 + -0x158) =
                 *(undefined8 *)((long)register0x00000008 + -0x120);
            *(undefined8 *)((long)register0x00000008 + -0x160) =
                 *(undefined8 *)((long)register0x00000008 + -0x128);
            *(undefined8 *)((long)register0x00000008 + -0x148) =
                 *(undefined8 *)((long)register0x00000008 + -0x110);
            *(undefined8 *)((long)register0x00000008 + -0x150) =
                 *(undefined8 *)((long)register0x00000008 + -0x118);
            *(undefined8 *)((long)register0x00000008 + -0x138) =
                 *(undefined8 *)((long)register0x00000008 + -0x100);
            *(undefined8 *)((long)register0x00000008 + -0x140) =
                 *(undefined8 *)((long)register0x00000008 + -0x108);
            *(undefined1 *)((long)register0x00000008 + -0x136) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x154) = 0x100000001;
            FUN_108dcaed0((undefined1 *)((long)register0x00000008 + -0x160));
            auVar4 = SEXT816((*(long *)((long)register0x00000008 + -0x128) + 43200000) -
                             *(long *)((long)register0x00000008 + -0x160)) *
                     SEXT816(0x636ba875fd33dc87);
            iVar2 = (int)(auVar4._8_8_ >> 0x19) - (auVar4._12_4_ >> 0x1f);
            if (bVar3 == 0x57) {
              lVar13 = (*(long *)((long)register0x00000008 + -0x128) + 43200000) / 86400000;
              auVar4 = SEXT816(lVar13) * SEXT816(0x4924924924924925);
              *(ulong *)((long)register0x00000008 + -0x170) =
                   (ulong)(uint)((iVar2 + (((int)(auVar4._8_8_ >> 1) - (auVar4._12_4_ >> 0x1f)) * 7
                                          - (int)lVar13) + 7) / 7);
              func_0x000108d64bd8(3,(undefined1 *)((long)plVar11 + unaff_x28),&DAT_10f51b4ee);
              uVar12 = 2;
            }
            else {
              *(ulong *)((long)register0x00000008 + -0x170) = (ulong)(iVar2 + 1);
              func_0x000108d64bd8(4,(undefined1 *)((long)plVar11 + unaff_x28),&UNK_10f51b4fa);
              uVar12 = 3;
            }
          }
          else {
            if (bVar3 != 0x59) goto LAB_108dca4a4;
            *(ulong *)((long)register0x00000008 + -0x170) =
                 (ulong)*(uint *)((long)register0x00000008 + -0x120);
            uVar7 = 5;
            pcVar9 = "%04d";
LAB_108dca488:
            func_0x000108d64bd8(uVar7,(undefined1 *)((long)plVar11 + unaff_x28),pcVar9);
            puVar8 = (undefined1 *)((long)plVar11 + unaff_x28);
            _strlen();
            uVar12 = (ulong)puVar8 & 0x3fffffff;
          }
          unaff_x28 = uVar12 + unaff_x28;
          goto LAB_108dca49c;
        }
        uVar12 = (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0x108);
      }
LAB_108dca3e0:
      *(ulong *)((long)register0x00000008 + -0x170) = uVar12;
      func_0x000108d64bd8(3,(undefined1 *)((long)plVar11 + unaff_x28),&DAT_10f51b4ee);
      unaff_x28 = unaff_x28 + 2;
    }
    else {
      if (bVar3 < 0x6d) {
        if (bVar3 == 100) {
          uVar12 = (ulong)*(uint *)((long)register0x00000008 + -0x118);
          goto LAB_108dca3e0;
        }
        if (bVar3 == 0x66) {
          dVar14 = unaff_d10;
          if (*(double *)((long)register0x00000008 + -0x108) <= 59.999) {
            dVar14 = *(double *)((long)register0x00000008 + -0x108);
          }
          *(double *)((long)register0x00000008 + -0x170) = dVar14;
          uVar7 = 7;
          pcVar9 = "%06.3f";
          goto LAB_108dca488;
        }
        if (bVar3 == 0x6a) goto LAB_108dca2e8;
LAB_108dca4a4:
        cVar10 = '%';
      }
      else {
        if (bVar3 == 0x6d) {
          uVar12 = (ulong)*(uint *)((long)register0x00000008 + -0x11c);
          goto LAB_108dca3e0;
        }
        if (bVar3 == 0x73) {
          *(long *)((long)register0x00000008 + -0x170) =
               *(long *)((long)register0x00000008 + -0x128) / 1000 + -0x3118a36940;
          uVar7 = 0x1e;
          pcVar9 = "%lld";
          goto LAB_108dca488;
        }
        if (bVar3 != 0x77) goto LAB_108dca4a4;
        auVar4 = SEXT816((*(long *)((long)register0x00000008 + -0x128) + 0x7b98a00) / 86400000) *
                 SEXT816(0x4924924924924925);
        cVar10 = (char)((*(long *)((long)register0x00000008 + -0x128) + 0x7b98a00) / 86400000) +
                 ((char)(auVar4._8_4_ >> 1) - (auVar4[0xf] >> 7)) * -7 + '0';
      }
LAB_108dca1fc:
      *(char *)((long)plVar11 + unaff_x28) = cVar10;
      unaff_x28 = unaff_x28 + 1;
    }
LAB_108dca49c:
    unaff_x23 = unaff_x23 + 1;
    goto LAB_108dca1ec;
  }
  if (cVar10 != '\0') goto LAB_108dca1fc;
  *(undefined1 *)((long)plVar11 + unaff_x28) = 0;
  pcVar1 = FUN_108d627f0;
  if (plVar11 == (long *)((long)register0x00000008 + -0xf4)) {
    pcVar1 = (code *)0xffffffffffffffff;
  }
  plVar6 = param_1;
  FUN_108d67a8c(param_1,plVar11,0xffffffff,1,pcVar1);
  unaff_x21 = plVar11;
  unaff_x22 = &DAT_10f51b4ee;
LAB_108dca4d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x90)) {
    return;
  }
  ___stack_chk_fail();
  param_2 = (undefined *)0x0;
  param_3 = (long *)0x0;
  *(long *)((long)register0x00000008 + -400) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x188) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x178) = FUN_108dca528;
  *(undefined8 *)((long)register0x00000008 + -0x198) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = plVar6;
  FUN_108dca54c();
  if ((int)unaff_x19 == 0) {
    FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0x230));
    *(ulong *)((long)register0x00000008 + -0x248) =
         (ulong)*(uint *)((long)register0x00000008 + -0x218);
    *(ulong *)((long)register0x00000008 + -0x240) =
         (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0x210);
    *(ulong *)((long)register0x00000008 + -0x250) =
         (ulong)*(uint *)((long)register0x00000008 + -0x21c);
    func_0x000108d64bd8(100,(undefined1 *)((long)register0x00000008 + -0x1fc),&UNK_10f51b4c1);
    param_2 = (undefined *)((long)register0x00000008 + -0x1fc);
    param_3 = (long *)0xffffffff;
    unaff_x19 = plVar6;
    FUN_108d67a8c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x198)) {
    return;
  }
  ___stack_chk_fail();
  *(long *)((long)register0x00000008 + -0x270) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x268) = plVar6;
  *(undefined1 **)((long)register0x00000008 + -0x260) =
       (undefined1 *)((long)register0x00000008 + -0x180);
  *(undefined8 *)((long)register0x00000008 + -600) = 0x108dc9f18;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined8 *)((long)register0x00000008 + -0x278) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1 = unaff_x19;
  FUN_108dca54c();
  if ((int)param_1 == 0) {
    FUN_108dcb55c((undefined1 *)((long)register0x00000008 + -0x310));
    FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0x310));
    *(ulong *)((long)register0x00000008 + -800) =
         (ulong)*(uint *)((long)register0x00000008 + -0x2f8);
    *(ulong *)((long)register0x00000008 + -0x318) =
         (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0x2f0);
    *(ulong *)((long)register0x00000008 + -0x330) =
         (ulong)*(uint *)((long)register0x00000008 + -0x300);
    *(ulong *)((long)register0x00000008 + -0x328) =
         (ulong)*(uint *)((long)register0x00000008 + -0x2fc);
    *(ulong *)((long)register0x00000008 + -0x340) =
         (ulong)*(uint *)((long)register0x00000008 + -0x308);
    *(ulong *)((long)register0x00000008 + -0x338) =
         (ulong)*(uint *)((long)register0x00000008 + -0x304);
    func_0x000108d64bd8(100,(undefined1 *)((long)register0x00000008 + -0x2dc),&UNK_10f51b4d0);
    param_2 = (undefined *)((long)register0x00000008 + -0x2dc);
    param_3 = (long *)0xffffffff;
    param_1 = unaff_x19;
    FUN_108d67a8c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x278)) {
    return;
  }
  unaff_x30 = FUN_108dc9fd0;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x340);
  goto code_r0x000108dc9fd0;
}



/* Entry: 108dca528; end: 108dca54b;  */

void FUN_108dca528(long *param_1)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long *plVar11;
  char cVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  
LAB_108dc9e74:
  puVar9 = (undefined *)0x0;
  plVar11 = (long *)0x0;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = param_1;
  FUN_108dca54c();
  if ((int)unaff_x19 == 0) {
    FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0xc0));
    *(ulong *)((long)register0x00000008 + -0xd8) =
         (ulong)*(uint *)((long)register0x00000008 + -0xa8);
    *(ulong *)((long)register0x00000008 + -0xd0) =
         (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0xa0);
    *(ulong *)((long)register0x00000008 + -0xe0) =
         (ulong)*(uint *)((long)register0x00000008 + -0xac);
    func_0x000108d64bd8(100,(undefined1 *)((long)register0x00000008 + -0x8c),&UNK_10f51b4c1);
    puVar9 = (undefined *)((long)register0x00000008 + -0x8c);
    plVar11 = (long *)0xffffffff;
    unaff_x19 = param_1;
    FUN_108d67a8c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
    return;
  }
  ___stack_chk_fail();
  *(long *)((long)register0x00000008 + -0x100) = unaff_x20;
  *(long **)((long)register0x00000008 + -0xf8) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x108dc9f18;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = unaff_x19;
  FUN_108dca54c();
  if ((int)plVar5 == 0) {
    FUN_108dcb55c((undefined1 *)((long)register0x00000008 + -0x1a0));
    FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0x1a0));
    *(ulong *)((long)register0x00000008 + -0x1b0) =
         (ulong)*(uint *)((long)register0x00000008 + -0x188);
    *(ulong *)((long)register0x00000008 + -0x1a8) =
         (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0x180);
    *(ulong *)((long)register0x00000008 + -0x1c0) =
         (ulong)*(uint *)((long)register0x00000008 + -400);
    *(ulong *)((long)register0x00000008 + -0x1b8) =
         (ulong)*(uint *)((long)register0x00000008 + -0x18c);
    *(ulong *)((long)register0x00000008 + -0x1d0) =
         (ulong)*(uint *)((long)register0x00000008 + -0x198);
    *(ulong *)((long)register0x00000008 + -0x1c8) =
         (ulong)*(uint *)((long)register0x00000008 + -0x194);
    func_0x000108d64bd8(100,(undefined1 *)((long)register0x00000008 + -0x16c),&UNK_10f51b4d0);
    puVar9 = (undefined *)((long)register0x00000008 + -0x16c);
    plVar11 = (long *)0xffffffff;
    plVar5 = unaff_x19;
    FUN_108d67a8c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x108)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x250) = unaff_d11;
  *(double *)((long)register0x00000008 + -0x248) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x240) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x238) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x230) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x228) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x220) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x218) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x210) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x208) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x200) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x1f8) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x1f0) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x1e8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x1e0) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -0x1d8) = FUN_108dc9fd0;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1e0);
  *(undefined8 *)((long)register0x00000008 + -0x260) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1 = plVar5;
  if ((int)puVar9 != 0) {
    lVar6 = *plVar11;
    FUN_108d67a14(lVar6,1);
    param_1 = (long *)0x0;
    unaff_x19 = plVar5;
    unaff_x21 = plVar11;
    unaff_x22 = puVar9;
    if ((lVar6 != 0) &&
       (param_1 = plVar5,
       FUN_108dca54c(plVar5,(int)puVar9 + -1,plVar11 + 1,
                     (undefined1 *)((long)register0x00000008 + -0x2f8)), unaff_x20 = lVar6,
       (int)param_1 == 0)) {
      lVar14 = 0;
      param_1 = (long *)*plVar5;
      plVar11 = (long *)param_1[5];
      uVar13 = 1;
      do {
        if (*(char *)(lVar6 + lVar14) == '%') {
          lVar14 = lVar14 + 1;
          bVar3 = *(byte *)(lVar6 + lVar14);
          if (bVar3 < 0x59) {
            if (bVar3 < 0x4d) {
              if (bVar3 == 0x25) goto LAB_108dca120;
              if (bVar3 != 0x48) {
                if (bVar3 == 0x4a) goto LAB_108dca114;
                break;
              }
            }
            else if (((bVar3 != 0x4d) && (bVar3 != 0x53)) && (bVar3 != 0x57)) break;
LAB_108dca0f8:
            uVar13 = uVar13 + 1;
          }
          else if (bVar3 < 0x6a) {
            if (bVar3 != 0x59) {
              if (bVar3 == 100) goto LAB_108dca0f8;
              if (bVar3 != 0x66) break;
            }
            uVar13 = uVar13 + 8;
          }
          else if (bVar3 < 0x73) {
            if (bVar3 != 0x6a) {
              if (bVar3 == 0x6d) goto LAB_108dca0f8;
              break;
            }
            uVar13 = uVar13 + 3;
          }
          else if (bVar3 == 0x73) {
LAB_108dca114:
            uVar13 = uVar13 + 0x32;
          }
          else if (bVar3 != 0x77) break;
        }
        else if (*(char *)(lVar6 + lVar14) == '\0') {
          if (uVar13 < 100) {
            plVar11 = (long *)((long)register0x00000008 + -0x2c4);
          }
          else {
            if ((ulong)(long)(int)plVar11[0xd] < uVar13) {
              *(undefined4 *)((long)plVar5 + 0x24) = 0x12;
              *(undefined1 *)((long)plVar5 + 0x29) = 1;
              FUN_108d67c04(param_1,&DAT_10f51745e,0xffffffff,1,0);
              break;
            }
            FUN_108d6a6fc(plVar11,(long)(int)uVar13);
            if (plVar11 == (long *)0x0) {
              param_1 = plVar5;
              FUN_108d68164();
              unaff_x21 = plVar11;
              break;
            }
          }
          FUN_108dcaed0((undefined1 *)((long)register0x00000008 + -0x2f8));
          FUN_108dcb55c((undefined1 *)((long)register0x00000008 + -0x2f8));
          FUN_108dcb680((undefined1 *)((long)register0x00000008 + -0x2f8));
          unaff_x28 = 0;
          unaff_x23 = 0;
          unaff_d8 = 0x4194997000000000;
          unaff_d9 = 0x100000001;
          unaff_x24 = 43200000;
          unaff_x25 = 0x636ba875fd33dc87;
          unaff_x26 = 0x4924924924924925;
          unaff_d10 = 59.999;
          goto LAB_108dca1ec;
        }
LAB_108dca120:
        lVar14 = lVar14 + 1;
        uVar13 = uVar13 + 1;
      } while( true );
    }
  }
  goto LAB_108dca4d8;
LAB_108dca1ec:
  cVar12 = *(char *)(lVar6 + unaff_x23);
  if (cVar12 == '%') {
    unaff_x23 = unaff_x23 + 1;
    bVar3 = *(byte *)(lVar6 + unaff_x23);
    unaff_x27 = (ulong)bVar3;
    if (bVar3 < 100) {
      if (bVar3 < 0x53) {
        if (bVar3 == 0x48) {
          uVar13 = (ulong)*(uint *)((long)register0x00000008 + -0x2e4);
        }
        else {
          if (bVar3 == 0x4a) {
            *(double *)((long)register0x00000008 + -0x340) =
                 (double)*(long *)((long)register0x00000008 + -0x2f8) / 86400000.0;
            uVar7 = 0x14;
            pcVar10 = "%.16g";
            goto LAB_108dca488;
          }
          if (bVar3 != 0x4d) goto LAB_108dca4a4;
          uVar13 = (ulong)*(uint *)((long)register0x00000008 + -0x2e0);
        }
      }
      else {
        if (bVar3 != 0x53) {
          if (bVar3 == 0x57) {
LAB_108dca2e8:
            *(undefined8 *)((long)register0x00000008 + -0x328) =
                 *(undefined8 *)((long)register0x00000008 + -0x2f0);
            *(undefined8 *)((long)register0x00000008 + -0x330) =
                 *(undefined8 *)((long)register0x00000008 + -0x2f8);
            *(undefined8 *)((long)register0x00000008 + -0x318) =
                 *(undefined8 *)((long)register0x00000008 + -0x2e0);
            *(undefined8 *)((long)register0x00000008 + -800) =
                 *(undefined8 *)((long)register0x00000008 + -0x2e8);
            *(undefined8 *)((long)register0x00000008 + -0x308) =
                 *(undefined8 *)((long)register0x00000008 + -0x2d0);
            *(undefined8 *)((long)register0x00000008 + -0x310) =
                 *(undefined8 *)((long)register0x00000008 + -0x2d8);
            *(undefined1 *)((long)register0x00000008 + -0x306) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x324) = 0x100000001;
            FUN_108dcaed0((undefined1 *)((long)register0x00000008 + -0x330));
            auVar4 = SEXT816((*(long *)((long)register0x00000008 + -0x2f8) + 43200000) -
                             *(long *)((long)register0x00000008 + -0x330)) *
                     SEXT816(0x636ba875fd33dc87);
            iVar2 = (int)(auVar4._8_8_ >> 0x19) - (auVar4._12_4_ >> 0x1f);
            if (bVar3 == 0x57) {
              lVar14 = (*(long *)((long)register0x00000008 + -0x2f8) + 43200000) / 86400000;
              auVar4 = SEXT816(lVar14) * SEXT816(0x4924924924924925);
              *(ulong *)((long)register0x00000008 + -0x340) =
                   (ulong)(uint)((iVar2 + (((int)(auVar4._8_8_ >> 1) - (auVar4._12_4_ >> 0x1f)) * 7
                                          - (int)lVar14) + 7) / 7);
              func_0x000108d64bd8(3,(undefined1 *)((long)plVar11 + unaff_x28),&DAT_10f51b4ee);
              uVar13 = 2;
            }
            else {
              *(ulong *)((long)register0x00000008 + -0x340) = (ulong)(iVar2 + 1);
              func_0x000108d64bd8(4,(undefined1 *)((long)plVar11 + unaff_x28),&UNK_10f51b4fa);
              uVar13 = 3;
            }
          }
          else {
            if (bVar3 != 0x59) goto LAB_108dca4a4;
            *(ulong *)((long)register0x00000008 + -0x340) =
                 (ulong)*(uint *)((long)register0x00000008 + -0x2f0);
            uVar7 = 5;
            pcVar10 = "%04d";
LAB_108dca488:
            func_0x000108d64bd8(uVar7,(undefined1 *)((long)plVar11 + unaff_x28),pcVar10);
            puVar8 = (undefined1 *)((long)plVar11 + unaff_x28);
            _strlen();
            uVar13 = (ulong)puVar8 & 0x3fffffff;
          }
          unaff_x28 = uVar13 + unaff_x28;
          goto LAB_108dca49c;
        }
        uVar13 = (ulong)(uint)(int)*(double *)((long)register0x00000008 + -0x2d8);
      }
LAB_108dca3e0:
      *(ulong *)((long)register0x00000008 + -0x340) = uVar13;
      func_0x000108d64bd8(3,(undefined1 *)((long)plVar11 + unaff_x28),&DAT_10f51b4ee);
      unaff_x28 = unaff_x28 + 2;
    }
    else {
      if (bVar3 < 0x6d) {
        if (bVar3 == 100) {
          uVar13 = (ulong)*(uint *)((long)register0x00000008 + -0x2e8);
          goto LAB_108dca3e0;
        }
        if (bVar3 == 0x66) {
          dVar15 = unaff_d10;
          if (*(double *)((long)register0x00000008 + -0x2d8) <= 59.999) {
            dVar15 = *(double *)((long)register0x00000008 + -0x2d8);
          }
          *(double *)((long)register0x00000008 + -0x340) = dVar15;
          uVar7 = 7;
          pcVar10 = "%06.3f";
          goto LAB_108dca488;
        }
        if (bVar3 == 0x6a) goto LAB_108dca2e8;
LAB_108dca4a4:
        cVar12 = '%';
      }
      else {
        if (bVar3 == 0x6d) {
          uVar13 = (ulong)*(uint *)((long)register0x00000008 + -0x2ec);
          goto LAB_108dca3e0;
        }
        if (bVar3 == 0x73) {
          *(long *)((long)register0x00000008 + -0x340) =
               *(long *)((long)register0x00000008 + -0x2f8) / 1000 + -0x3118a36940;
          uVar7 = 0x1e;
          pcVar10 = "%lld";
          goto LAB_108dca488;
        }
        if (bVar3 != 0x77) goto LAB_108dca4a4;
        auVar4 = SEXT816((*(long *)((long)register0x00000008 + -0x2f8) + 0x7b98a00) / 86400000) *
                 SEXT816(0x4924924924924925);
        cVar12 = (char)((*(long *)((long)register0x00000008 + -0x2f8) + 0x7b98a00) / 86400000) +
                 ((char)(auVar4._8_4_ >> 1) - (auVar4[0xf] >> 7)) * -7 + '0';
      }
LAB_108dca1fc:
      *(char *)((long)plVar11 + unaff_x28) = cVar12;
      unaff_x28 = unaff_x28 + 1;
    }
LAB_108dca49c:
    unaff_x23 = unaff_x23 + 1;
    goto LAB_108dca1ec;
  }
  if (cVar12 != '\0') goto LAB_108dca1fc;
  *(undefined1 *)((long)plVar11 + unaff_x28) = 0;
  pcVar1 = FUN_108d627f0;
  if (plVar11 == (long *)((long)register0x00000008 + -0x2c4)) {
    pcVar1 = (code *)0xffffffffffffffff;
  }
  param_1 = plVar5;
  FUN_108d67a8c(plVar5,plVar11,0xffffffff,1,pcVar1);
  unaff_x21 = plVar11;
  unaff_x22 = &DAT_10f51b4ee;
LAB_108dca4d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x260)) {
    return;
  }
  unaff_x30 = FUN_108dca528;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x340);
  goto LAB_108dc9e74;
}



/* Entry: 108dca54c; end: 108dcaecf;  */

byte * FUN_108dca54c(byte *param_1,uint param_2,undefined8 *param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dStack_120;
  double adStack_110 [6];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte bStack_c8;
  int iStack_c7;
  short sStack_c3;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = 0.0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  param_4[0x1a] = 0;
  param_4[0x1b] = 0;
  param_4[0x1c] = 0;
  param_4[0x1d] = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x28] = 0;
  param_4[0x29] = 0;
  param_4[0x2a] = 0;
  param_4[0x2b] = 0;
  param_4[0x2c] = 0;
  param_4[0x2d] = 0;
  param_4[0x2e] = 0;
  param_4[0x2f] = 0;
  param_4[0x20] = 0;
  param_4[0x21] = 0;
  param_4[0x22] = 0;
  param_4[0x23] = 0;
  param_4[0x24] = 0;
  param_4[0x25] = 0;
  param_4[0x26] = 0;
  param_4[0x27] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  if (param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      plVar13 = (long *)(*(long *)(param_1 + 0x18) + 0xc0);
      lVar6 = *plVar13;
      if (lVar6 == 0) {
        uVar5 = **(undefined8 **)(*(long *)param_1 + 0x28);
        func_0x000108d83a0c(uVar5,plVar13);
        if ((int)uVar5 != 0) {
          *plVar13 = 0;
          param_4[0] = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          param_4[4] = 0;
          param_4[5] = 0;
          param_4[6] = 0;
          param_4[7] = 0;
          return (byte *)0x1;
        }
        lVar6 = *plVar13;
      }
      *(long *)param_4 = lVar6;
      if (0 < lVar6) {
        param_4[0x2a] = 1;
      }
      return (byte *)(ulong)(0 >= lVar6);
    }
    goto LAB_108dcaecc;
  }
  pbVar3 = (byte *)*param_3;
  if ((byte)(&UNK_10dfa06fd)[(ulong)*(ushort *)(pbVar3 + 8) & 0x1f] - 1 < 2) {
    FUN_108d67900();
    *(long *)param_4 = (long)(dVar16 * 86400000.0 + 0.5);
    param_4[0x2a] = 1;
    pbVar4 = pbVar3;
LAB_108dca5f4:
    if (1 < (int)param_2) {
      dStack_120 = 365.0;
      uVar14 = 1;
LAB_108dca654:
      pbVar4 = (byte *)param_3[uVar14];
      pbVar15 = (byte *)0x1;
      FUN_108d67a14(pbVar4,1);
      pbVar3 = pbVar4;
      if (pbVar4 == (byte *)0x0) goto LAB_108dcae40;
      uVar7 = 0;
      iStack_d4 = 1;
      do {
        if ((ulong)pbVar4[uVar7] == 0) break;
        *(undefined *)((long)&uStack_d0 + uVar7) = (&UNK_10dfa05fd)[pbVar4[uVar7]];
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x1d);
      *(byte *)((long)&uStack_d0 + (uVar7 & 0xffffffff)) = 0;
      uVar7 = (ulong)(byte)uStack_d0;
      uVar12 = uStack_d0 & 0xff;
      if ((byte)uStack_d0 < 0x6c) {
        if (((uVar12 - 0x30 < 10) || (uVar12 == 0x2b)) || (uVar12 == 0x2d)) {
          pbVar15 = (byte *)&uStack_d0;
          lVar6 = 1;
          while( true ) {
            bVar2 = *(byte *)((long)&uStack_d0 + lVar6);
            if (((bVar2 == 0) || (bVar2 == 0x3a)) || (((&UNK_10dfa0749)[(uint)bVar2] & 1) != 0))
            break;
            lVar6 = lVar6 + 1;
            pbVar15 = pbVar15 + 1;
          }
          pbVar3 = (byte *)&uStack_d0;
          FUN_108d82a1c(pbVar3,&uStack_e0,lVar6,1);
          if ((int)pbVar3 == 0) goto LAB_108dcae3c;
          if (bVar2 == 0x3a) {
            adStack_110[3] = 0.0;
            adStack_110[2] = 0.0;
            adStack_110[5] = 0.0;
            adStack_110[4] = 0.0;
            pbVar4 = (byte *)&uStack_d0;
            if (uVar7 - 0x3a < 0xfffffffffffffff6) {
              pbVar4 = (byte *)((long)&uStack_d0 + 1);
            }
            adStack_110[1] = 0.0;
            adStack_110[0] = 0.0;
            FUN_108dcb088(pbVar4,adStack_110);
            if ((int)pbVar4 == 0) {
              FUN_108dcaed0(adStack_110);
              lVar8 = ((long)adStack_110[0] + -43200000) % 86400000;
              lVar6 = -lVar8;
              if (uVar12 != 0x2d) {
                lVar6 = lVar8;
              }
              pbVar4 = param_4;
              FUN_108dcaed0();
              param_4[0x28] = 0;
              param_4[0x29] = 0;
              param_4[0x2b] = 0;
              *(long *)param_4 = *(long *)param_4 + lVar6;
              iStack_d4 = 0;
            }
          }
          else {
            do {
              pbVar15 = pbVar15 + 1;
            } while (((&UNK_10dfa0749)[*pbVar15] & 1) != 0);
            pbVar4 = pbVar15;
            _strlen();
            uVar12 = (uint)pbVar4 & 0x3fffffff;
            if (0xfffffff7 < uVar12 - 0xb) {
              if (pbVar15[((ulong)pbVar4 & 0x3fffffff) - 1] == 0x73) {
                pbVar15[((ulong)pbVar4 & 0x3fffffff) - 1] = 0;
                uVar12 = uVar12 - 1;
              }
              pbVar4 = param_4;
              FUN_108dcaed0();
              iStack_d4 = 0;
              dVar16 = (double)CONCAT44(uStack_dc,uStack_e0);
              dVar19 = -0.5;
              if (0.0 <= dVar16) {
                dVar19 = 0.5;
              }
              if ((int)uVar12 < 5) {
                if (uVar12 == 3) {
                  _strcmp(pbVar15,"day");
                  pbVar4 = pbVar15;
                  if ((int)pbVar15 == 0) {
                    dVar19 = dVar19 + dVar16 * 86400000.0;
                    goto LAB_108dcac60;
                  }
                }
                else if (uVar12 == 4) {
                  pbVar4 = pbVar15;
                  _strcmp(pbVar15,"hour");
                  if ((int)pbVar4 == 0) {
                    dVar19 = dVar19 + dVar16 * 3600000.0;
                    goto LAB_108dcac60;
                  }
                  _strcmp(pbVar15,"year");
                  pbVar4 = pbVar15;
                  if ((int)pbVar15 == 0) {
                    FUN_108dcb55c(param_4);
                    FUN_108dcb680(param_4);
                    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + (int)dVar16;
                    param_4[0x2a] = 0;
                    pbVar4 = param_4;
                    FUN_108dcaed0();
                    dVar17 = (double)(int)dVar16;
                    dVar18 = dStack_120;
                    if (dVar16 != dVar17) goto LAB_108dcac58;
                    goto LAB_108dcac70;
                  }
                }
              }
              else if (uVar12 == 5) {
                _strcmp(pbVar15,"month");
                pbVar4 = pbVar15;
                if ((int)pbVar15 == 0) {
                  FUN_108dcb55c(param_4);
                  FUN_108dcb680(param_4);
                  iVar9 = *(int *)(param_4 + 0xc) + (int)dVar16;
                  uVar12 = (iVar9 - 1U) / 0xc;
                  if (iVar9 < 1) {
                    uVar12 = -((0xcU - iVar9) / 0xc);
                  }
                  *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + uVar12;
                  *(uint *)(param_4 + 0xc) = iVar9 + uVar12 * -0xc;
                  param_4[0x2a] = 0;
                  pbVar4 = param_4;
                  FUN_108dcaed0();
                  dVar17 = (double)(int)dVar16;
                  if (dVar16 != dVar17) {
                    dVar18 = 30.0;
LAB_108dcac58:
                    dVar19 = dVar19 + (dVar16 - dVar17) * dVar18 * 86400000.0;
                    goto LAB_108dcac60;
                  }
                  goto LAB_108dcac70;
                }
              }
              else if (uVar12 == 6) {
                pbVar4 = pbVar15;
                _strcmp(pbVar15,"minute");
                if ((int)pbVar4 == 0) {
                  dVar19 = dVar19 + dVar16 * 60000.0;
                }
                else {
                  _strcmp(pbVar15,&DAT_10f507f4e);
                  pbVar4 = pbVar15;
                  if ((int)pbVar15 != 0) goto LAB_108dcab7c;
                  dVar19 = dVar19 + dVar16 * 1000.0;
                }
LAB_108dcac60:
                pbVar3 = (byte *)(*(long *)param_4 + (long)dVar19);
                goto LAB_108dcac6c;
              }
LAB_108dcab7c:
              iStack_d4 = 1;
LAB_108dcac70:
              param_4[0x28] = 0;
              param_4[0x29] = 0;
              param_4[0x2b] = 0;
            }
          }
        }
      }
      else {
        if (uVar12 == 0x74 || (byte)uStack_d0 < 0x74) {
          if (uVar12 == 0x6c) {
            if (CONCAT44(uStack_cc,uStack_d0) == 0x6d69746c61636f6c &&
                CONCAT11((undefined1)iStack_c7,bStack_c8) == 0x65) {
              FUN_108dcaed0(param_4);
              pbVar4 = param_4;
              FUN_108dcb350(param_4,param_1,&iStack_d4);
              pbVar3 = pbVar4 + *(long *)param_4;
LAB_108dcac6c:
              *(byte **)param_4 = pbVar3;
              goto LAB_108dcac70;
            }
            goto LAB_108dcac78;
          }
          if ((uVar12 != 0x73) ||
             (CONCAT44(uStack_cc,uStack_d0) != 0x666f207472617473 || bStack_c8 != 0x20))
          goto LAB_108dcac78;
          pbVar4 = param_4;
          FUN_108dcb55c();
          param_4[0x29] = 1;
          param_4[0x2a] = 0;
          param_4[0x14] = 0;
          param_4[0x15] = 0;
          param_4[0x16] = 0;
          param_4[0x17] = 0;
          param_4[0x18] = 0;
          param_4[0x19] = 0;
          param_4[0x1a] = 0;
          param_4[0x1b] = 0;
          param_4[0x20] = 0;
          param_4[0x21] = 0;
          param_4[0x22] = 0;
          param_4[0x23] = 0;
          param_4[0x24] = 0;
          param_4[0x25] = 0;
          param_4[0x26] = 0;
          param_4[0x27] = 0;
          param_4[0x2b] = 0;
          if (iStack_c7 == 0x746e6f6d && sStack_c3 == 0x68) {
            param_4[0x10] = 1;
            param_4[0x11] = 0;
            param_4[0x12] = 0;
            param_4[0x13] = 0;
          }
          else if (iStack_c7 == 0x72616579 && (char)sStack_c3 == '\0') {
            pbVar4 = param_4;
            FUN_108dcb55c();
            param_4[0xc] = 1;
            param_4[0xd] = 0;
            param_4[0xe] = 0;
            param_4[0xf] = 0;
            param_4[0x10] = 1;
            param_4[0x11] = 0;
            param_4[0x12] = 0;
            param_4[0x13] = 0;
          }
          else if (iStack_c7 != 0x796164) goto LAB_108dcac78;
          goto LAB_108dcac80;
        }
        if (uVar12 == 0x75) {
          if ((CONCAT44(uStack_cc,uStack_d0) == 0x636f706578696e75 &&
               CONCAT11((undefined1)iStack_c7,bStack_c8) == 0x68) && (param_4[0x2a] != 0)) {
            lVar6 = (*(long *)param_4 + 0xa8c0) / 0x15180 + 0xbfc83e532200;
LAB_108dcabc4:
            *(long *)param_4 = lVar6;
            param_4[0x28] = 0;
            param_4[0x29] = 0;
            param_4[0x2b] = 0;
            goto LAB_108dcac80;
          }
          if (uStack_d0 != 0x637475) goto LAB_108dcac78;
          FUN_108dcaed0(param_4);
          pbVar3 = param_4;
          FUN_108dcb350(param_4,param_1,&iStack_d4);
          if (iStack_d4 != 0) goto LAB_108dcae3c;
          *(long *)param_4 = *(long *)param_4 - (long)pbVar3;
          param_4[0x28] = 0;
          param_4[0x29] = 0;
          param_4[0x2b] = 0;
          pbVar4 = param_4;
          FUN_108dcb350(param_4,param_1,&iStack_d4);
          *(byte **)param_4 = pbVar3 + (*(long *)param_4 - (long)pbVar4);
        }
        else if ((uVar12 == 0x77) && (CONCAT44(uStack_cc,uStack_d0) == 0x207961646b656577)) {
          pbVar3 = &bStack_c8;
          _strlen(pbVar3);
          pbVar4 = &bStack_c8;
          FUN_108d82a1c(pbVar4,&uStack_e0,(uint)pbVar3 & 0x3fffffff,1);
          if (((int)pbVar4 != 0) && (dVar16 = (double)CONCAT44(uStack_dc,uStack_e0), dVar16 < 7.0))
          {
            uVar12 = (uint)dVar16;
            if ((-1 < (int)uVar12) && (dVar16 == (double)(int)uVar12)) {
              FUN_108dcb55c(param_4);
              FUN_108dcb680(param_4);
              param_4[0x2a] = 0;
              param_4[0x2b] = 0;
              pbVar4 = param_4;
              FUN_108dcaed0();
              lVar6 = ((*(long *)param_4 + 0x7b98a00) / 86400000) % 7;
              lVar8 = lVar6 + -7;
              if (lVar6 <= (long)(ulong)uVar12) {
                lVar8 = lVar6;
              }
              lVar6 = *(long *)param_4 + ((ulong)uVar12 - lVar8) * 86400000;
              goto LAB_108dcabc4;
            }
          }
        }
      }
LAB_108dcac78:
      pbVar3 = pbVar4;
      if (iStack_d4 != 0) goto LAB_108dcae3c;
LAB_108dcac80:
      uVar14 = uVar14 + 1;
      if (uVar14 == param_2) goto LAB_108dcae24;
      goto LAB_108dca654;
    }
LAB_108dcae24:
    pbVar15 = (byte *)0x0;
    pbVar3 = pbVar4;
  }
  else {
    pbVar15 = (byte *)0x1;
    func_0x000108d67a18(pbVar3,1);
    if (pbVar3 != (byte *)0x0) {
      bVar2 = *pbVar3;
      pbVar4 = pbVar3;
      if (bVar2 == 0x2d) {
        pbVar4 = pbVar3 + 1;
      }
      iVar9 = (int)pbVar4;
      FUN_108dcb280();
      if (iVar9 == 3) {
        pbVar15 = pbVar3 + (ulong)(bVar2 == 0x2d) + 9;
        do {
          pbVar15 = pbVar15 + 1;
        } while ((ulong)*pbVar15 == 0x54 || ((&UNK_10dfa0749)[*pbVar15] & 1) != 0);
        pbVar4 = pbVar15;
        FUN_108dcb088(pbVar15,param_4);
        if ((int)pbVar4 != 0) {
          if (*pbVar15 != 0) goto LAB_108dcadb8;
          param_4[0x29] = 0;
        }
        param_4[0x2a] = 0;
        param_4[0x28] = 1;
        uVar12 = -uStack_d0;
        if (bVar2 != 0x2d) {
          uVar12 = uStack_d0;
        }
        *(uint *)(param_4 + 8) = uVar12;
        *(undefined4 *)(param_4 + 0xc) = uStack_e0;
        *(int *)(param_4 + 0x10) = iStack_d4;
        if (param_4[0x2b] != 0) {
          pbVar4 = param_4;
          FUN_108dcaed0();
        }
      }
      else {
LAB_108dcadb8:
        pbVar4 = pbVar3;
        FUN_108dcb088(pbVar3,param_4);
        if ((int)pbVar4 != 0) {
          pbVar4 = pbVar3;
          FUN_108d5e044(pbVar3,&DAT_10f300d82);
          if ((int)pbVar4 == 0) {
            pbVar3 = param_1;
            FUN_108dcb018(param_1,param_4);
            pbVar4 = pbVar3;
            if ((int)pbVar3 == 0) goto LAB_108dca5f4;
          }
          else {
            pbVar4 = pbVar3;
            _strlen(pbVar3);
            FUN_108d82a1c(pbVar3,adStack_110,(uint)pbVar4 & 0x3fffffff,1);
            if ((int)pbVar3 != 0) {
              *(long *)param_4 = (long)(adStack_110[0] * 86400000.0 + 0.5);
              param_4[0x2a] = 1;
              pbVar4 = pbVar3;
              goto LAB_108dca5f4;
            }
          }
LAB_108dcae3c:
          pbVar15 = (byte *)0x1;
          goto LAB_108dcae40;
        }
      }
      goto LAB_108dca5f4;
    }
  }
LAB_108dcae40:
  param_1 = pbVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return pbVar15;
  }
LAB_108dcaecc:
  ___stack_chk_fail();
  if (param_1[0x2a] == 0) {
    if (param_1[0x28] == 0) {
      iVar10 = 2000;
      iVar9 = 3;
      iVar11 = 1;
    }
    else {
      iVar10 = *(int *)(param_1 + 8);
      iVar11 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 0x10) + 2;
    }
    iVar1 = iVar11 + 0xc;
    if (2 < iVar11) {
      iVar1 = iVar11;
    }
    iVar10 = iVar10 - (uint)(iVar11 < 3);
    iVar11 = (int)((ulong)((long)iVar10 * -0x51eb851f) >> 0x20);
    lVar6 = (long)(((double)(((iVar11 >> 5) - (iVar11 >> 0x1f)) + iVar9 + iVar10 / 400 +
                             (iVar1 * 0x4ab51 + 0x4ab51) / 10000 +
                            (iVar10 * 0x8ead + 0xa445afc) / 100) + -1524.5) * 86400000.0);
    *(long *)param_1 = lVar6;
    param_1[0x2a] = 1;
    if (param_1[0x29] != 0) {
      lVar6 = (long)(*(double *)(param_1 + 0x20) * 1000.0) +
              (long)*(int *)(param_1 + 0x14) * 3600000 + (long)*(int *)(param_1 + 0x18) * 60000 +
              lVar6;
      *(long *)param_1 = lVar6;
      if (param_1[0x2b] != 0) {
        *(long *)param_1 = lVar6 + (long)*(int *)(param_1 + 0x1c) * -60000;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        return param_1;
      }
    }
  }
  return param_1;
}



/* Entry: 108dcaed0; end: 108dcb017;  */

void FUN_108dcaed0(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)((long)param_1 + 0x2a) == '\0') {
    if ((char)param_1[5] == '\0') {
      iVar4 = 2000;
      iVar2 = 3;
      iVar5 = 1;
    }
    else {
      iVar4 = (int)param_1[1];
      iVar5 = *(int *)((long)param_1 + 0xc);
      iVar2 = (int)param_1[2] + 2;
    }
    iVar1 = iVar5 + 0xc;
    if (2 < iVar5) {
      iVar1 = iVar5;
    }
    iVar4 = iVar4 - (uint)(iVar5 < 3);
    iVar5 = (int)((ulong)((long)iVar4 * -0x51eb851f) >> 0x20);
    lVar3 = (long)(((double)(((iVar5 >> 5) - (iVar5 >> 0x1f)) + iVar2 + iVar4 / 400 +
                             (iVar1 * 0x4ab51 + 0x4ab51) / 10000 +
                            (iVar4 * 0x8ead + 0xa445afc) / 100) + -1524.5) * 86400000.0);
    *param_1 = lVar3;
    *(undefined1 *)((long)param_1 + 0x2a) = 1;
    if (*(char *)((long)param_1 + 0x29) != '\0') {
      lVar3 = (long)((double)param_1[4] * 1000.0) +
              (long)*(int *)((long)param_1 + 0x14) * 3600000 + (long)(int)param_1[3] * 60000 + lVar3
      ;
      *param_1 = lVar3;
      if (*(char *)((long)param_1 + 0x2b) != '\0') {
        *param_1 = lVar3 + (long)*(int *)((long)param_1 + 0x1c) * -60000;
        *(undefined2 *)(param_1 + 5) = 0;
        *(undefined1 *)((long)param_1 + 0x2b) = 0;
        return;
      }
    }
  }
  return;
}



/* Entry: 108dcb018; end: 108dcb087;  */

bool FUN_108dcb018(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1[3] + 0xc0);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    uVar1 = **(undefined8 **)(*param_1 + 0x28);
    func_0x000108d83a0c(uVar1,plVar3);
    if ((int)uVar1 != 0) {
      *plVar3 = 0;
      *param_2 = 0;
      return true;
    }
    lVar2 = *plVar3;
  }
  *param_2 = lVar2;
  if (0 < lVar2) {
    *(undefined1 *)((long)param_2 + 0x2a) = 1;
  }
  return 0 >= lVar2;
}



/* Entry: 108dcb088; end: 108dcb27f;  */

undefined8 FUN_108dcb088(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  lVar4 = param_1;
  FUN_108dcb280();
  if ((int)lVar4 != 2) {
    return 1;
  }
  pbVar6 = (byte *)(param_1 + 5);
  if (*pbVar6 == 0x3a) {
    iVar8 = (int)param_1 + 6;
    FUN_108dcb280();
    if (iVar8 != 1) {
      return 1;
    }
    pbVar6 = (byte *)(param_1 + 8);
    dVar9 = 0.0;
    if (*pbVar6 == 0x2e) {
      pbVar7 = (byte *)(param_1 + 9);
      uVar5 = (ulong)*pbVar7;
      if (0xfffffffffffffff5 < uVar5 - 0x3a) {
        dVar9 = 0.0;
        dVar10 = 1.0;
        do {
          dVar9 = (double)(int)(char)uVar5 + dVar9 * 10.0 + -48.0;
          dVar10 = dVar10 * 10.0;
          pbVar7 = pbVar7 + 1;
          uVar5 = (ulong)*pbVar7;
        } while (0xfffffffffffffff5 < uVar5 - 0x3a);
        dVar9 = dVar9 / dVar10;
        pbVar6 = pbVar7;
      }
    }
  }
  else {
    iStack_44 = 0;
    dVar9 = 0.0;
  }
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x14) = uStack_3c;
  *(undefined4 *)(param_2 + 0x18) = uStack_40;
  *(double *)(param_2 + 0x20) = dVar9 + (double)iStack_44;
  do {
    pbVar7 = pbVar6;
    pbVar6 = pbVar7 + 1;
  } while (((&UNK_10dfa0749)[*pbVar7] & 1) != 0);
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar1 = *pbVar7;
  if (bVar1 == 0x2d) {
    iVar8 = -1;
LAB_108dcb1dc:
    FUN_108dcb280();
    if ((int)pbVar6 != 2) {
      return 1;
    }
    iVar2 = iStack_38 + iStack_34 * 0x3c;
    *(int *)(param_2 + 0x1c) = iVar2 * iVar8;
    bVar3 = iVar2 != 0;
    pbVar6 = pbVar7 + 6;
  }
  else {
    if (bVar1 == 0x2b) {
      iVar8 = 1;
      goto LAB_108dcb1dc;
    }
    bVar3 = false;
    if ((bVar1 & 0xdf) != 0x5a) goto LAB_108dcb258;
  }
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (((&UNK_10dfa0749)[bVar1] & 1) != 0);
LAB_108dcb258:
  if (bVar1 != 0) {
    return 1;
  }
  *(bool *)(param_2 + 0x2b) = bVar3;
  return 0;
}



/* Entry: 108dcb280; end: 108dcb34f;  */

int FUN_108dcb280(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = 0;
  piVar5 = (int *)register0x00000008;
  while( true ) {
    iVar4 = *piVar5;
    iVar3 = 0;
    pbVar2 = param_1;
    if (iVar4 != 0) {
      pbVar2 = param_1 + (ulong)(iVar4 - 1) + 1;
      do {
        if ((ulong)*param_1 - 0x3a < 0xfffffffffffffff6) {
          return iVar1;
        }
        iVar3 = (int)(char)*param_1 + iVar3 * 10 + -0x30;
        iVar4 = iVar4 + -1;
        param_1 = param_1 + 1;
      } while (iVar4 != 0);
    }
    if (iVar3 < piVar5[2] || piVar5[4] < iVar3) {
      return iVar1;
    }
    if (piVar5[6] == 0) {
      **(int **)(piVar5 + 8) = iVar3;
      return iVar1 + 1;
    }
    if (piVar5[6] != (int)(char)*pbVar2) break;
    **(int **)(piVar5 + 8) = iVar3;
    param_1 = pbVar2 + 1;
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 10;
  }
  return iVar1;
}



/* Entry: 108dcb350; end: 108dcb55b;  */

long FUN_108dcb350(long *param_1,undefined8 *param_2,uint *param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  double dStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  double dStack_70;
  long lStack_68;
  
  lStack_88 = param_1[1];
  lStack_90 = *param_1;
  uStack_78 = param_1[3];
  lStack_80 = param_1[2];
  lStack_68 = param_1[5];
  dStack_70 = (double)param_1[4];
  FUN_108dcb55c(&lStack_90);
  FUN_108dcb680(&lStack_90);
  if ((int)lStack_88 - 0x7f6U < 0xffffffbd) {
    lStack_80 = 1;
    lStack_88 = 0x1000007d0;
    uStack_78 = 0;
    dStack_70 = 0.0;
  }
  else {
    dStack_70 = (double)(int)(dStack_70 + 0.5);
  }
  uStack_78 = uStack_78 & 0xffffffff;
  lStack_68._0_3_ = (uint3)(ushort)lStack_68;
  FUN_108dcaed0(&lStack_90);
  lVar2 = lStack_90;
  lStack_c8 = lStack_90 / 1000 + -0x3118a36940;
  if (iRam0000000113297914 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 2;
    (*pcRam0000000113297988)();
    if (lVar4 != 0) {
      (*pcRam0000000113297998)(lVar4);
      bVar1 = false;
      goto LAB_108dcb460;
    }
  }
  bVar1 = true;
LAB_108dcb460:
  plVar5 = &lStack_c8;
  _localtime();
  bVar3 = iRam0000000113297ab8 != 0 || plVar5 == (long *)0x0;
  if (bVar3) {
    iVar6 = 0;
    uVar7 = 0;
    uVar9 = 0x10000076c;
    dVar8 = 0.0;
  }
  else {
    iVar6 = *(int *)((long)plVar5 + 4);
    dVar8 = (double)(int)*plVar5;
    uVar9 = NEON_rev64(CONCAT44((int)((ulong)plVar5[2] >> 0x20) + 0x76c,(int)plVar5[2] + 1),4);
    uVar7 = NEON_rev64(plVar5[1],4);
  }
  if (!bVar1) {
    (*pcRam00000001132979a8)(lVar4);
  }
  if (bVar3) {
    *(undefined4 *)((long)param_2 + 0x24) = 1;
    *(undefined1 *)((long)param_2 + 0x29) = 1;
    FUN_108d67c04(*param_2,&UNK_10f51b49b,0xffffffff,1,0xffffffffffffffff);
    lStack_c0 = 0;
  }
  else {
    uStack_98 = 0x101;
    uStack_b8 = uVar9;
    uStack_b0 = uVar7;
    iStack_a8 = iVar6;
    dStack_a0 = dVar8;
    FUN_108dcaed0(&lStack_c0);
    lStack_c0 = lStack_c0 - lVar2;
  }
  *param_3 = (uint)bVar3;
  return lStack_c0;
}



/* Entry: 108dcb55c; end: 108dcb67f;  */

void FUN_108dcb55c(long *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x2a) == '\0') {
    iVar3 = 2000;
    iVar5 = 1;
    iVar2 = 1;
  }
  else {
    auVar1 = SEXT816(*param_1 + 43200000) * SEXT816(0x636ba875fd33dc87);
    iVar2 = (int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f);
    iVar3 = (int)(((double)iVar2 + -1867216.25) / 36524.25);
    iVar5 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    iVar2 = ((iVar2 + iVar3) - (iVar5 >> 2)) + 0x5f5;
    iVar4 = (int)(((double)iVar2 + -122.1) / 365.25);
    iVar5 = (int)((ulong)((long)(iVar4 * 0x8ead) * -0x51eb851f) >> 0x20);
    iVar2 = ((iVar5 >> 5) - (iVar5 >> 0x1f)) + iVar2;
    iVar3 = (int)((double)iVar2 / 30.6001);
    iVar2 = iVar2 - (int)((double)iVar3 * 30.6001);
    iVar5 = -0xd;
    if (iVar3 < 0xe) {
      iVar5 = -1;
    }
    iVar5 = iVar5 + iVar3;
    iVar3 = -0x126c;
    if (iVar5 < 3) {
      iVar3 = -0x126b;
    }
    iVar3 = iVar3 + iVar4;
  }
  *(int *)(param_1 + 1) = iVar3;
  *(int *)((long)param_1 + 0xc) = iVar5;
  *(int *)(param_1 + 2) = iVar2;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 108dcb680; end: 108dcb763;  */

void FUN_108dcb680(long *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  double dVar3;
  
  if (*(char *)((long)param_1 + 0x29) != '\0') {
    return;
  }
  FUN_108dcaed0();
  auVar1 = SEXT816(*param_1 + 43200000) * SEXT816(0x636ba875fd33dc87);
  dVar3 = (double)((int)(*param_1 + 43200000) +
                  ((int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f)) * -86400000) / 1000.0;
  iVar2 = (int)dVar3;
  *(int *)((long)param_1 + 0x14) = iVar2 / 0xe10;
  *(int *)(param_1 + 3) = (iVar2 % 0xe10) / 0x3c;
  param_1[4] = (long)((dVar3 - (double)iVar2) + (double)((iVar2 % 0xe10) % 0x3c));
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  return;
}



/* Entry: 108dcb764; end: 108dcb86b;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

char * FUN_108dcb764(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iStack_54;
  
  pcVar3 = (char *)*param_3;
  FUN_108d67a14(pcVar3,1);
  pcVar4 = (char *)param_3[1];
  func_0x000108d67a18(pcVar4,1);
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    pcVar4 = (char *)0x0;
    uVar6 = *(undefined8 *)(*param_1 + 0x28);
    do {
      do {
        pcVar3 = pcVar3 + (int)pcVar4;
        pcVar4 = pcVar3;
        FUN_108d95788(pcVar3,&iStack_54);
      } while (iStack_54 == 0x97);
      if (iStack_54 == 0x7d || iStack_54 == 0x16) {
        FUN_108d6a8e0(uVar6,&UNK_10f51b543);
        pcVar3 = (char *)*param_1;
        FUN_108d67c04(pcVar3,uVar6,0xffffffff,1,FUN_108d627f0);
        if ((int)pcVar3 == 0x12) {
          *(undefined4 *)((long)param_1 + 0x24) = 0x12;
          *(undefined1 *)((long)param_1 + 0x29) = 1;
          uVar1 = 0xf51745e;
          lVar2 = *param_1;
          if (*(long *)(lVar2 + 0x28) == 0) {
            iVar7 = 1000000000;
          }
          else {
            iVar7 = *(int *)(*(long *)(lVar2 + 0x28) + 0x68);
          }
          _strlen();
          uVar1 = uVar1 & 0x3fffffff;
          if (iVar7 < (int)uVar1) {
            uVar1 = iVar7 + 1;
          }
          if (((*(ushort *)(lVar2 + 8) & 0x2460) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
            FUN_108d826d0(lVar2);
          }
          *(undefined **)(lVar2 + 0x10) = &DAT_10f51745e;
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(uint *)(lVar2 + 0xc) = uVar1;
          *(undefined2 *)(lVar2 + 8) = 0xa02;
          *(undefined1 *)(lVar2 + 10) = 1;
          uVar5 = 0x12;
          if ((int)uVar1 <= iVar7) {
            uVar5 = 0;
          }
          return (char *)(ulong)uVar5;
        }
        return pcVar3;
      }
    } while (*pcVar3 != '\0');
  }
  return pcVar4;
}


