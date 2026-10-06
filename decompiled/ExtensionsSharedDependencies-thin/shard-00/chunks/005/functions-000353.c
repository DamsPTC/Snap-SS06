/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00707ca0; end: 00707ccb;  */

uint FUN_00707ca0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ulong *)*param_2 < *(ulong *)*param_1);
  if (*(ulong *)*param_1 < *(ulong *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 00707ccc; end: 00707d03;  */

void FUN_00707ccc(void)

{
  func_0x00707d10();
  return;
}



/* Entry: 00707d04; end: 00707d77;  */

void FUN_00707d04(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00707d78; end: 00707f97;  */

ulong FUN_00707d78(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong unaff_x19;
  int unaff_w20;
  ulong uVar3;
  
  func_0x00708178();
  if (param_1 == 0) {
    func_0x0070815c();
    func_0x00708150();
    return 0;
  }
  func_0x007081b0();
  if ((int)param_1 < 1) {
    func_0x0070815c();
  }
  else if (unaff_w20 == 2) {
    FUN_0070d26c();
    if (unaff_x19 != 0) {
      func_0x00708190();
      FUN_00709540();
LAB_00707e4c:
      func_0x0070e584();
      uVar3 = unaff_x19;
      goto LAB_00707e74;
    }
    func_0x0070816c();
  }
  else if (unaff_w20 == 1) {
    uVar3 = 0;
    while( true ) {
      uVar2 = unaff_x19;
      func_0x007081a0();
      FUN_00704358();
      if (uVar2 == 0) break;
      func_0x00708190();
      iVar1 = (int)uVar2;
      FUN_00709540();
      if (iVar1 == 0) {
        unaff_x19 = 0;
        goto LAB_00707e4c;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      func_0x0070e584();
    }
    func_0x006de5a4();
    if (((((uint)(uVar2 >> 0x18) & 0xff) == 9) && (((uint)uVar2 & 0xfff) == 0x6e)) &&
       ((int)uVar3 != 0)) {
      FUN_006de5b0();
      goto LAB_00707e74;
    }
    func_0x0070816c();
  }
  else {
    func_0x0070816c();
  }
  func_0x00708150();
  uVar3 = 0;
LAB_00707e74:
  func_0x006d1850();
  return uVar3;
}



/* Entry: 00707f98; end: 0070809b;  */

int FUN_00707f98(long param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_006d224c(param_2,"r");
  if (param_2 == (ulong *)0x0) {
    func_0x0070815c();
    func_0x00708150();
    iVar3 = 0;
  }
  else {
    puVar2 = param_2;
    func_0x007081a0();
    FUN_00702894();
    func_0x006d1850(param_2);
    if (puVar2 == (ulong *)0x0) {
      func_0x0070816c();
      func_0x00708150();
      iVar3 = 0;
    }
    else {
      uVar4 = 0;
      iVar3 = 0;
      while( true ) {
        if (*puVar2 <= uVar4) break;
        plVar5 = *(long **)(puVar2[1] + uVar4 * 8);
        if (*plVar5 != 0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
          FUN_00709540();
          if (iVar1 == 0) goto LAB_0070806c;
          iVar3 = iVar3 + 1;
        }
        if (plVar5[1] != 0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
          FUN_00709614();
          if (iVar1 == 0) goto LAB_0070806c;
          iVar3 = iVar3 + 1;
        }
        uVar4 = uVar4 + 1;
      }
      if (iVar3 == 0) {
        func_0x0070816c();
        func_0x00708150();
      }
LAB_0070806c:
      FUN_00705f40(puVar2,0x708144,0x70da80);
    }
  }
  return iVar3;
}



/* Entry: 0070809c; end: 00708143;  */

bool FUN_0070809c(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 1) {
    FUN_00707f98(param_1,param_3);
    iVar2 = (int)param_1;
  }
  else {
    if (param_4 == 3) {
      puVar3 = &UNK_0091bdb6;
      _getenv();
      puVar1 = &UNK_0091bd97;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
      FUN_00707f98(param_1,puVar1);
      if ((int)param_1 != 0) {
        return true;
      }
      func_0x0070816c();
      func_0x00708150();
      return false;
    }
    FUN_00707d78(param_1,param_3,param_4);
    iVar2 = (int)param_1;
  }
  return iVar2 != 0;
}



/* Entry: 00708144; end: 007081c7;  */

void FUN_00708144(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 007081c8; end: 00708533;  */

ulong FUN_007081c8(undefined8 param_1,long *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int extraout_w12;
  int extraout_w12_00;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uStack_dc;
  char acStack_c0 [80];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar5 = param_1;
  if (param_4 == 0) {
    plVar6 = param_2;
    FUN_007085e0();
    uVar10 = (uint)plVar6;
    if (!(bool)in_ZR) goto LAB_00708530;
    FUN_00709c84(param_2,0,0);
    if (param_2 == (long *)0x0) {
      return 0;
    }
    if ((char)*param_2 != '\0') {
      pbVar11 = (byte *)((long)param_2 + 1);
      pbVar22 = (byte *)((long)param_2 + 2);
      iVar24 = (int)param_2;
      while( true ) {
        iVar24 = iVar24 + 1;
        if ((pbVar22[-1] == 0) ||
           (((pbVar22[-1] == 0x2f && (*pbVar22 - 0x41 < 0x1a)) &&
            ((pbVar22[1] == 0x3d || ((pbVar22[1] - 0x41 < 0x1a && (pbVar22[2] == 0x3d)))))))) break;
LAB_00708978:
        pbVar22 = pbVar22 + 1;
      }
      iVar13 = iVar24 - (int)pbVar11;
      uVar5 = param_1;
      func_0x006d199c(param_1,pbVar11,iVar13);
      if (iVar13 != (int)uVar5) {
LAB_007089b0:
        FUN_006de8e4(0xb,0,7,0,0);
        uVar17 = 0;
        goto LAB_007089cc;
      }
      if (pbVar22[-1] != 0) {
        uVar5 = param_1;
        func_0x006d199c(param_1,&UNK_0091bd7f,2);
        if ((int)uVar5 != 2) goto LAB_007089b0;
        pbVar11 = pbVar22;
        if (pbVar22[-1] != 0) goto LAB_00708978;
      }
    }
    uVar17 = 1;
LAB_007089cc:
    func_0x00701ed0(param_2);
    return uVar17;
  }
  uStack_dc = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  uVar16 = (ulong)uStack_dc;
  uVar17 = uVar16;
  FUN_00708534();
  uVar10 = (uint)uVar17;
  if ((int)uVar5 == 0) {
LAB_00708500:
    uVar16 = 0xffffffff;
  }
  else {
    uVar14 = (param_4 & 0xf0000) - 0x10000 >> 0x10;
    in_ZR = uVar14 == 3;
    iVar24 = 3;
    uVar12 = 0x8dd357;
    uVar20 = 0x8e50c6;
    switch(uVar14) {
    case 0:
      uStack_dc = 0;
      uVar20 = 0x8cf8c6;
      iVar24 = 1;
      uVar12 = 0x8b897a;
      break;
    case 1:
      func_0x007085f8();
      uVar12 = 0x8db403;
      iVar24 = extraout_w12;
      break;
    case 2:
      func_0x007085f8();
      uVar12 = 0x911db3;
      iVar24 = extraout_w12_00;
      break;
    case 3:
      break;
    default:
      goto LAB_00708500;
    }
    bVar4 = (param_4 & 0x800000) != 0;
    uVar21 = 0x8e52f8;
    if (bVar4) {
      uVar21 = 0x911b83;
    }
    iVar13 = 3;
    if (!bVar4) {
      iVar13 = 1;
    }
    uVar1 = (uint)param_4 & 0x600000;
    if (param_2 == (long *)0x0) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      if ((uint *)*param_2 != (uint *)0x0) {
        uVar27 = *(uint *)*param_2;
      }
    }
    uVar26 = 0;
    uVar2 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
    iVar25 = -1;
    while( true ) {
      iVar15 = (int)uVar16;
      uVar10 = (uint)uVar17;
      uVar27 = uVar27 - 1;
      in_ZR = 1;
      if (uVar2 == uVar26) break;
      uVar10 = uVar26;
      if ((param_4 & 0x100000) != 0) {
        uVar10 = uVar27;
      }
      plVar6 = param_2;
      func_0x0070cc1c(param_2,uVar10);
      if (iVar25 != -1) {
        in_ZR = iVar25 == (int)plVar6[2];
        if ((bool)in_ZR) {
          uVar5 = param_1;
          uVar10 = uVar20;
          FUN_007085ac(param_1,uVar20,iVar24);
          if ((int)uVar5 == 0) goto LAB_00708500;
          iVar15 = iVar15 + iVar24;
        }
        else {
          uVar5 = param_1;
          uVar10 = uVar12;
          FUN_007085ac(param_1,uVar12,1);
          if (((int)uVar5 == 0) ||
             (uVar5 = param_1, uVar10 = uStack_dc, FUN_00708534(), (int)uVar5 == 0))
          goto LAB_00708500;
          iVar15 = uStack_dc + 1 + iVar15;
        }
      }
      iVar25 = (int)plVar6[2];
      pcVar8 = (char *)*plVar6;
      uVar17 = plVar6[1];
      pcVar7 = pcVar8;
      FUN_00702384();
      iVar23 = (int)pcVar7;
      if (uVar1 != 0x600000) {
        in_ZR = uVar1 == 0x400000;
        if (((bool)in_ZR) || (iVar23 == 0)) {
          pcVar7 = acStack_c0;
          func_0x007026a4(acStack_c0,0x50,pcVar8,1);
          iVar18 = 0;
        }
        else {
          in_ZR = uVar1 == 0x200000;
          if ((bool)in_ZR) {
            func_0x007025c0();
            iVar18 = 0x19;
          }
          else if ((param_4 & 0x600000) == 0) {
            FUN_007025a4();
            iVar18 = 10;
          }
          else {
            iVar18 = 0;
            pcVar7 = "";
          }
        }
        pcVar8 = pcVar7;
        _strlen();
        uVar5 = param_1;
        FUN_007085ac(param_1,pcVar7,pcVar8);
        uVar10 = (uint)pcVar7;
        if ((int)uVar5 == 0) goto LAB_00708500;
        iVar19 = (int)pcVar8;
        if (((uint)param_4 >> 0x19 & 1) != 0) {
          uVar3 = iVar18 - iVar19;
          in_ZR = uVar3 == 0;
          if (!(bool)in_ZR && iVar19 <= iVar18) {
            uVar5 = param_1;
            uVar10 = uVar3;
            FUN_00708534();
            if ((int)uVar5 == 0) goto LAB_00708500;
            iVar15 = uVar3 + iVar15;
          }
        }
        uVar5 = param_1;
        uVar10 = uVar21;
        FUN_007085ac(param_1,uVar21,iVar13);
        if ((int)uVar5 == 0) goto LAB_00708500;
        iVar15 = iVar13 + iVar19 + iVar15;
      }
      bVar4 = (param_4 & 0x1000000) == 0;
      in_ZR = iVar23 != 0 || bVar4;
      uVar16 = 0;
      if (iVar23 == 0 && !bVar4) {
        uVar16 = 0x80;
      }
      uVar5 = param_1;
      FUN_006cca74(param_1,uVar17,uVar16 | param_4);
      uVar10 = (uint)uVar17;
      if ((int)uVar5 < 0) goto LAB_00708500;
      uVar16 = (ulong)(uint)((int)uVar5 + iVar15);
      uVar26 = uVar26 + 1;
    }
  }
  FUN_007085e0();
  if ((bool)in_ZR) {
    return uVar16;
  }
LAB_00708530:
  ___stack_chk_fail();
  uVar12 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  uVar20 = 0xffffffff;
  do {
    uVar21 = uVar12;
    if (uVar20 - uVar12 == -1) break;
    uVar9 = uVar5;
    FUN_007085ac(uVar5," ",1);
    uVar21 = uVar20 + 1;
    uVar20 = uVar21;
  } while ((int)uVar9 != 0);
  return (ulong)((int)uVar10 <= (int)uVar21);
}



/* Entry: 00708534; end: 007085ab;  */

bool FUN_00708534(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar3 = 0xffffffff;
  do {
    uVar4 = uVar1;
    if (uVar3 - uVar1 == -1) break;
    uVar2 = param_1;
    FUN_007085ac(param_1," ",1);
    uVar4 = uVar3 + 1;
    uVar3 = uVar4;
  } while ((int)uVar2 != 0);
  return (int)param_2 <= (int)uVar4;
}



/* Entry: 007085ac; end: 007085df;  */

bool FUN_007085ac(long param_1,undefined8 param_2,int param_3)

{
  if (param_1 != 0) {
    func_0x006d199c();
    return (int)param_1 == param_3;
  }
  return true;
}



/* Entry: 007085e0; end: 00708627;  */

void FUN_007085e0(void)

{
  return;
}



/* Entry: 00708628; end: 007087a3;  */

bool FUN_00708628(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar2 = param_1;
  func_0x007088b0(param_2);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00708898();
    bVar1 = false;
    plVar8 = plStack_58;
    goto LAB_00708774;
  }
  if ((long *)puVar2[1] == (long *)0x0) {
    puVar3 = puVar2;
    FUN_006eaae0();
    puVar4 = puVar3;
  }
  else {
    puVar3 = *(undefined8 **)puVar2[1];
    FUN_00702384();
    if ((plStack_58 == (long *)0x0) || ((int)puVar3 != 0x38f)) {
      func_0x00708898();
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)*plStack_58;
      FUN_006dcf30();
      puVar3 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        func_0x00708898();
      }
    }
  }
  plVar8 = plStack_58;
  if ((undefined8 *)*puVar2 == (undefined8 *)0x0) {
    FUN_006eaae0();
joined_r0x007086e0:
    if (puVar4 != (undefined8 *)0x0) {
      lVar5 = puVar2[2];
      if (lVar5 == 0) {
        lVar5 = 0x14;
      }
      else {
        FUN_006cbec4();
        if ((int)lVar5 < 0) goto LAB_0070876c;
      }
      lVar6 = puVar2[3];
      if ((lVar6 != 0) && (FUN_006cbec4(), lVar6 != 1)) goto LAB_0070876c;
      FUN_006deedc(param_1,&uStack_60,puVar3,0,param_3);
      if (((int)param_1 != 0) &&
         ((uVar7 = uStack_60, FUN_006e1b84(uStack_60,6), (int)uVar7 != 0 &&
          (uVar7 = uStack_60, func_0x006e1b9c(uStack_60,lVar5), (int)uVar7 != 0)))) {
        func_0x006e1bb4(uStack_60,puVar4);
        bVar1 = (int)uStack_60 != 0;
        goto LAB_00708774;
      }
    }
  }
  else {
    puVar3 = *(undefined8 **)*puVar2;
    FUN_006dcf30();
    if (puVar3 != (undefined8 *)0x0) goto joined_r0x007086e0;
LAB_0070876c:
    func_0x00708898();
  }
  bVar1 = false;
LAB_00708774:
  func_0x0070861c(puVar2);
  func_0x0070d1a0(plVar8);
  return bVar1;
}



/* Entry: 007087a4; end: 0070886f;  */

long FUN_007087a4(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_2 = 0;
  piVar4 = *(int **)(param_1 + 8);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 0x10)) {
    return 0;
  }
  uStack_40 = *(undefined8 *)(*(int **)(piVar4 + 2) + 2);
  lVar2 = 0;
  func_0x00708610(0,&uStack_40,(long)**(int **)(piVar4 + 2));
  if (lVar2 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(lVar2 + 8);
  if ((puVar5 != (undefined8 *)0x0) && (puVar5[1] != 0)) {
    iVar1 = (int)*puVar5;
    FUN_00702384();
    if ((iVar1 == 0x38f) && (*(int *)puVar5[1] == 0x10)) {
      piVar4 = *(int **)((int *)puVar5[1] + 2);
      uStack_38 = *(undefined8 *)(piVar4 + 2);
      uVar3 = 0;
      func_0x0070d188(0,&uStack_38,(long)*piVar4);
      goto LAB_00708854;
    }
  }
  uVar3 = 0;
LAB_00708854:
  *param_2 = uVar3;
  return lVar2;
}



/* Entry: 00708870; end: 00708897;  */

undefined8 FUN_00708870(int param_1,long *param_2)

{
  if (param_1 == 2) {
    func_0x0070d1a0(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}



/* Entry: 00708898; end: 007088bb;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_00708898(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0xb;
  FUN_006de604(0xb,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0xb000070;
  }
  return;
}



/* Entry: 007088bc; end: 007089eb;  */

undefined8 FUN_007088bc(undefined8 param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  
  FUN_00709c84(param_2,0,0);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 != '\0') {
    pbVar2 = (byte *)(param_2 + 1);
    pbVar4 = (byte *)(param_2 + 2);
    iVar5 = (int)param_2;
    while( true ) {
      iVar5 = iVar5 + 1;
      if ((pbVar4[-1] == 0) ||
         (((pbVar4[-1] == 0x2f && (*pbVar4 - 0x41 < 0x1a)) &&
          ((pbVar4[1] == 0x3d || ((pbVar4[1] - 0x41 < 0x1a && (pbVar4[2] == 0x3d)))))))) break;
LAB_00708978:
      pbVar4 = pbVar4 + 1;
    }
    iVar1 = iVar5 - (int)pbVar2;
    uVar3 = param_1;
    func_0x006d199c(param_1,pbVar2,iVar1);
    if (iVar1 != (int)uVar3) {
LAB_007089b0:
      FUN_006de8e4(0xb,0,7,0,0);
      uVar3 = 0;
      goto LAB_007089cc;
    }
    if (pbVar4[-1] != 0) {
      uVar3 = param_1;
      func_0x006d199c(param_1,&UNK_0091bd7f,2);
      if ((int)uVar3 != 2) goto LAB_007089b0;
      pbVar2 = pbVar4;
      if (pbVar4[-1] != 0) goto LAB_00708978;
    }
  }
  uVar3 = 1;
LAB_007089cc:
  func_0x00701ed0(param_2);
  return uVar3;
}



/* Entry: 007089ec; end: 00708a67;  */

ulong FUN_007089ec(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
      (lVar2 = param_1, FUN_00708f50(), (int)lVar2 < 0)) ||
     (((*(long *)(param_2 + 0x18) == 0 || (*(int *)(param_2 + 8) != 0)) &&
      (lVar2 = param_2, FUN_00708f50(), (int)lVar2 < 0)))) {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_0099a3f0)(uVar3,*(undefined8 *)(param_2 + 0x18));
        return uVar3;
      }
      return 0;
    }
  }
  return uVar3;
}



/* Entry: 00708a68; end: 00708aab;  */

ulong FUN_00708a68(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*param_1 + 0x28);
  lVar5 = *(long *)(*param_2 + 0x28);
  if ((((*(long *)(lVar4 + 0x18) == 0) || (*(int *)(lVar4 + 8) != 0)) &&
      (lVar2 = lVar4, FUN_00708f50(), (int)lVar2 < 0)) ||
     (((*(long *)(lVar5 + 0x18) == 0 || (*(int *)(lVar5 + 8) != 0)) &&
      (lVar2 = lVar5, FUN_00708f50(), (int)lVar2 < 0)))) {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar1 = *(int *)(lVar4 + 0x20) - *(int *)(lVar5 + 0x20);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar3 = *(ulong *)(lVar4 + 0x18);
      if (*(int *)(lVar4 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_0099a3f0)(uVar3,*(undefined8 *)(lVar5 + 0x18));
        return uVar3;
      }
      return 0;
    }
  }
  return uVar3;
}



/* Entry: 00708aac; end: 00708bbb;  */

ulong FUN_00708aac(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long alStack_a0 [5];
  uint auStack_78 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  uint auStack_3c [5];
  undefined8 uStack_28;
  int iVar3;
  
  func_0x00708f7c();
  uStack_28 = extraout_x8;
  func_0x00708f50();
  uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
  lVar8 = (long)*(int *)(unaff_x19 + 0x20);
  FUN_006eaae0();
  uVar5 = uVar9;
  FUN_006ea778(uVar9,lVar8,auStack_3c,0,param_1,0);
  uVar4 = (int)uVar5 == 0;
  uVar1 = 0;
  if (!(bool)uVar4) {
    uVar1 = auStack_3c[0];
  }
  uVar6 = (ulong)uVar1;
  func_0x00708f68(uStack_28,uVar6);
  if ((bool)uVar4) {
    return uVar6;
  }
  ___stack_chk_fail();
  iVar2 = (int)alStack_a0;
  iVar3 = (int)alStack_a0;
  plVar7 = alStack_a0;
  uStack_48 = 0x708b1c;
  uStack_60 = uVar9;
  lStack_58 = lVar8;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00708f7c();
  uStack_68 = extraout_x8_00;
  func_0x00708f50();
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  FUN_006eaa70();
  FUN_006ea94c(alStack_a0,uVar6,0);
  if (iVar2 != 0) {
    (**(code **)(alStack_a0[0] + 0x18))
              (alStack_a0,(*(undefined8 **)(lVar8 + 0x10))[1],**(undefined8 **)(lVar8 + 0x10));
    FUN_006ea9b8(alStack_a0,auStack_78,0);
    if (iVar3 != 0) {
      uVar6 = (ulong)auStack_78[0];
      goto LAB_00708b90;
    }
  }
  uVar6 = 0;
LAB_00708b90:
  FUN_006ea7fc();
  func_0x00708f68(uStack_68);
  if ((bool)uVar4) {
    return uVar6;
  }
  ___stack_chk_fail();
  return *(ulong *)(*plVar7 + 0x28);
}



/* Entry: 00708bbc; end: 00708bc7;  */

undefined8 FUN_00708bbc(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}



/* Entry: 00708bc8; end: 00708c43;  */

long * FUN_00708bc8(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  func_0x00714664();
  func_0x00714664(param_2);
  plVar2 = param_1 + 0x11;
  _memcmp(plVar2,param_2 + 0x11,0x14);
  if ((int)plVar2 == 0) {
    lVar3 = *param_1;
    if ((*(int *)(lVar3 + 0x60) == 0) && (lVar4 = *param_2, *(int *)(lVar4 + 0x60) == 0)) {
      uVar1 = (int)*(long *)(lVar3 + 0x58) - *(int *)(lVar4 + 0x58);
      plVar2 = (long *)(ulong)uVar1;
      if (uVar1 == 0) {
        plVar2 = *(long **)(lVar3 + 0x50);
        if (*(long *)(lVar3 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcmp_0099a3f0)(plVar2,*(undefined8 *)(lVar4 + 0x50));
          return plVar2;
        }
        return (long *)0x0;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}



/* Entry: 00708c44; end: 00708c5f;  */

undefined8 * FUN_00708c44(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(ulong *)(*param_1 + 0x30);
  uStack_38 = 0;
  if (uVar1 != 0) {
    func_0x007064d4(0xb2a510);
    lVar4 = *(long *)(uVar1 + 0x10);
    func_0x0070650c(0xb2a510);
    if (lVar4 != 0) {
      FUN_00705a60(*(undefined8 *)(uVar1 + 0x10));
      return *(undefined8 **)(uVar1 + 0x10);
    }
    uVar2 = uVar1;
    FUN_0070e3e0(uVar1,&uStack_38);
    if (-1 < (int)uVar2) {
      uStack_40 = uVar2 & 0xffffffff;
      uStack_48 = uStack_38;
      puVar3 = &uStack_48;
      FUN_006df594();
      if ((puVar3 != (undefined8 *)0x0) && (uStack_40 == 0)) {
        func_0x007064f0(0xb2a510);
        if (*(long *)(uVar1 + 0x10) == 0) {
          *(undefined8 **)(uVar1 + 0x10) = puVar3;
          func_0x0070e530();
        }
        else {
          func_0x0070e530();
          func_0x006df294(puVar3);
          puVar3 = *(undefined8 **)(uVar1 + 0x10);
        }
        func_0x00701ed0(uStack_38);
        FUN_00705a60(puVar3);
        return puVar3;
      }
      func_0x0070e524(0xb,0,0x7d);
      goto LAB_0070e4a0;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_0070e4a0:
  func_0x00701ed0(uStack_38);
  func_0x006df294(puVar3);
  return (undefined8 *)0x0;
}



/* Entry: 00708c60; end: 00708e1f;  */

int FUN_00708c60(int *param_1,long param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if ((param_3 == (ulong *)0x0) || (*param_3 == 0)) {
      param_2 = 0;
    }
    else {
      param_2 = *(long *)param_3[1];
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  lVar3 = param_2;
  uStack_58 = param_4;
  FUN_0070a008();
  if (lVar3 == 2) {
    lVar3 = param_2;
    FUN_00708c44();
    lVar4 = lVar3;
    FUN_00708e20();
    iVar2 = (int)lVar4;
    if (iVar2 == 0) {
      while( true ) {
        if (param_3 == (ulong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *param_3;
        }
        FUN_0070e704(param_2);
        if (uVar8 <= uVar7) break;
        if ((param_3 == (ulong *)0x0) || (*param_3 <= uVar7)) {
          param_2 = 0;
        }
        else {
          param_2 = *(long *)(param_3[1] + uVar7 * 8);
        }
        lVar4 = param_2;
        FUN_0070a008();
        if (lVar4 != 2) {
          iVar2 = 0x38;
          goto joined_r0x00708e18;
        }
        func_0x006df294(lVar3);
        lVar3 = param_2;
        FUN_00708c44();
        lVar4 = lVar3;
        FUN_00708e20();
        iVar2 = (int)lVar4;
        if (iVar2 != 0) goto joined_r0x00708e18;
        uVar7 = uVar7 + 1;
      }
      lVar4 = lVar3;
      FUN_00708e20(lVar3,param_2,&uStack_58);
      iVar2 = (int)lVar4;
    }
    else {
      uVar7 = 0;
    }
joined_r0x00708e18:
    if (lVar3 != 0) {
      func_0x006df294(lVar3);
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = 0x3c;
    if (param_4 != uStack_58) {
      iVar5 = 0x3d;
    }
    if (iVar2 != 0x3c) {
      iVar5 = iVar2;
    }
    uVar6 = (uint)(iVar2 - 0x3bU < 2);
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    iVar5 = 0x38;
  }
  if (param_1 != (int *)0x0) {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar6;
    }
    *param_1 = (int)uVar7 - uVar1;
  }
  return iVar5;
}



/* Entry: 00708e20; end: 00708ea7;  */

undefined8 FUN_00708e20(long param_1,int param_2,ulong *param_3)

{
  int iVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 4) != 0x198)) || (**(long **)(param_1 + 8) == 0)) {
    return 0x39;
  }
  iVar1 = *(int *)(**(long **)(param_1 + 8) + 0x28);
  if (iVar1 == 0x19f) {
    if (param_2 != 0x31a && param_2 != -1) {
      return 0x3b;
    }
    if ((*param_3 & 0x10000) == 0) {
      return 0x3c;
    }
  }
  else {
    if (iVar1 != 0x2cb) {
      return 0x3a;
    }
    if (param_2 != 0x31b && param_2 != -1) {
      return 0x3b;
    }
    if (((uint)*param_3 >> 0x11 & 1) == 0) {
      return 0x3c;
    }
    *param_3 = *param_3 & 0xfffffffffffeffff;
  }
  return 0;
}



/* Entry: 00708ea8; end: 00708f4f;  */

void FUN_00708ea8(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  if ((param_3 & 0x30000) != 0) {
    uVar1 = **(undefined8 **)(*param_1 + 8);
    uStack_28 = param_3;
    FUN_00702384(uVar1);
    FUN_00708e20(param_2,uVar1,&uStack_28);
  }
  return;
}



/* Entry: 00708f50; end: 00708f8f;  */

/* WARNING: Removing unreachable block (ram,0x006cf728) */
/* WARNING: Removing unreachable block (ram,0x006cf75c) */
/* WARNING: Removing unreachable block (ram,0x006cf778) */
/* WARNING: Removing unreachable block (ram,0x006cf7ac) */
/* WARNING: Removing unreachable block (ram,0x006cf784) */
/* WARNING: Removing unreachable block (ram,0x006cf7a4) */

undefined8 * FUN_00708f50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  FUN_006d01cc(puVar1,0,&DAT_00a1c848);
  return puVar1;
}



/* Entry: 00708f90; end: 00709027;  */

void FUN_00708f90(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((((param_2 == 0) ||
       ((lVar1 = param_1, func_0x00709370(param_1,&PTR_DAT_00b2a1e0), lVar1 != 0 &&
        (FUN_00709028(), (int)lVar1 == 1)))) && (param_3 != 0)) &&
     (func_0x00709370(param_1,&PTR_DAT_00b2a0c8), param_1 != 0)) {
    FUN_00709028();
  }
  return;
}



/* Entry: 00709028; end: 00709083;  */

long FUN_00709028(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00709144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 1;
}



/* Entry: 00709084; end: 00709113;  */

segment_command * FUN_00709084(long param_1)

{
  segment_command *psVar1;
  segment_command *psVar2;
  
  psVar1 = &segment_command_00000020;
  FUN_00701e90();
  if (psVar1 != (segment_command *)0x0) {
    psVar1->cmd = 0;
    psVar1->cmdsize = 0;
    *(long *)psVar1->segname = param_1;
    psVar1->segname[8] = '\0';
    psVar1->segname[9] = '\0';
    psVar1->segname[10] = '\0';
    psVar1->segname[0xb] = '\0';
    psVar1->segname[0xc] = '\0';
    psVar1->segname[0xd] = '\0';
    psVar1->segname[0xe] = '\0';
    psVar1->segname[0xf] = '\0';
    psVar1->vmaddr = 0;
    if ((*(code **)(param_1 + 8) != (code *)0x0) &&
       (psVar2 = psVar1, (**(code **)(param_1 + 8))(), (int)psVar2 == 0)) {
      func_0x00709c5c();
      psVar1 = (segment_command *)0x0;
    }
  }
  return psVar1;
}



/* Entry: 00709114; end: 00709153;  */

long FUN_00709114(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00709124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 1;
}



/* Entry: 00709154; end: 00709203;  */

dword * FUN_00709154(void)

{
  dword *pdVar1;
  code *pcVar2;
  
  pdVar1 = &section_00000108.flags;
  FUN_00701e90();
  if (pdVar1 != (dword *)0x0) {
    _bzero(pdVar1,0x148);
    FUN_00706444(pdVar1 + 4);
    pcVar2 = FUN_00709204;
    FUN_00705e78();
    *(code **)(pdVar1 + 2) = pcVar2;
    if (pcVar2 != (code *)0x0) {
      *pdVar1 = 1;
      FUN_00705ed8();
      *(code **)(pdVar1 + 0x36) = pcVar2;
      if (pcVar2 != (code *)0x0) {
        FUN_0070c550();
        *(code **)(pdVar1 + 0x38) = pcVar2;
        if (pcVar2 != (code *)0x0) {
          pdVar1[0x50] = 1;
          return pdVar1;
        }
      }
    }
    _pthread_rwlock_destroy(pdVar1 + 4);
    if (*(long *)(pdVar1 + 0x38) != 0) {
      func_0x0070c628();
    }
    if (*(long *)(pdVar1 + 0x36) != 0) {
      FUN_00705f10();
    }
    if (*(long *)(pdVar1 + 2) != 0) {
      FUN_00705f10();
    }
    func_0x00709c5c();
  }
  return (dword *)0x0;
}



/* Entry: 00709204; end: 0070924f;  */

ulong FUN_00709204(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)*param_1;
  iVar1 = *piVar7;
  piVar8 = (int *)*param_2;
  if (iVar1 - *piVar8 != 0) {
    return (ulong)(uint)(iVar1 - *piVar8);
  }
  if (iVar1 == 2) {
    lVar5 = *(long *)(**(long **)(piVar7 + 2) + 0x10);
    lVar6 = *(long *)(**(long **)(piVar8 + 2) + 0x10);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    lVar5 = *(long *)(**(long **)(piVar7 + 2) + 0x28);
    lVar6 = *(long *)(**(long **)(piVar8 + 2) + 0x28);
  }
  if ((((*(long *)(lVar5 + 0x18) == 0) || (*(int *)(lVar5 + 8) != 0)) &&
      (lVar3 = lVar5, FUN_00708f50(), (int)lVar3 < 0)) ||
     (((*(long *)(lVar6 + 0x18) == 0 || (*(int *)(lVar6 + 8) != 0)) &&
      (lVar3 = lVar6, FUN_00708f50(), (int)lVar3 < 0)))) {
    uVar4 = 0xfffffffe;
  }
  else {
    uVar2 = *(int *)(lVar5 + 0x20) - *(int *)(lVar6 + 0x20);
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar4 = *(ulong *)(lVar5 + 0x18);
      if (*(int *)(lVar5 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_0099a3f0)(uVar4,*(undefined8 *)(lVar6 + 0x18));
        return uVar4;
      }
      return 0;
    }
  }
  return uVar4;
}



/* Entry: 00709250; end: 0070926b;  */

undefined8 FUN_00709250(long param_1)

{
  FUN_00705a60(param_1 + 0x140);
  return 1;
}



/* Entry: 0070926c; end: 0070931f;  */

void FUN_0070926c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1 + 0x140;
    func_0x00705a98();
    if (iVar1 != 0) {
      _pthread_rwlock_destroy(param_1 + 0x10);
      puVar3 = *(ulong **)(param_1 + 0xd8);
      if (puVar3 != (ulong *)0x0) {
        for (uVar5 = 0; uVar5 < *puVar3; uVar5 = uVar5 + 1) {
          uVar4 = *(undefined8 *)(puVar3[1] + uVar5 * 8);
          FUN_00709114(uVar4);
          func_0x007090d4(uVar4);
        }
      }
      FUN_00705f10(puVar3);
      FUN_00705f40(*(undefined8 *)(param_1 + 8),0x709b94,FUN_00709320);
      if (*(long *)(param_1 + 0xe0) != 0) {
        func_0x0070c628();
      }
      if (param_1 != 0) {
        plVar2 = (long *)(param_1 + -8);
        FUN_00701f08(plVar2,*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(plVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 00709320; end: 007093ef;  */

void FUN_00709320(int *param_1)

{
  long *plVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 2) {
    func_0x0070d2d4(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 1) {
    func_0x0070e584(*(undefined8 *)(param_1 + 2));
  }
  if (param_1 != (int *)0x0) {
    plVar1 = (long *)(param_1 + -2);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 007093f0; end: 00709513;  */

undefined8 FUN_007093f0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 auStack_50 [4];
  
  func_0x00706480(param_1 + 0x10);
  puVar5 = *(ulong **)(param_1 + 8);
  puVar3 = puVar5;
  func_0x00709644(puVar5,param_2,param_3);
  iVar1 = (int)puVar3;
  if (iVar1 != -1) {
    puVar6 = (undefined4 *)0x0;
    if (puVar5 == (ulong *)0x0) goto LAB_00709460;
    if ((ulong)(long)iVar1 < *puVar5) {
      puVar6 = *(undefined4 **)(puVar5[1] + (long)iVar1 * 8);
      goto LAB_00709460;
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_00709460:
  func_0x007064b8(param_1 + 0x10);
  if (((int)param_2 == 2) || (puVar7 = puVar6, puVar6 == (undefined4 *)0x0)) {
    for (uVar8 = 0;
        (puVar3 = *(ulong **)(param_1 + 0xd8), puVar3 != (ulong *)0x0 &&
        ((long)uVar8 < (long)(int)*puVar3)); uVar8 = uVar8 + 1) {
      if (uVar8 < *puVar3) {
        lVar2 = *(long *)(puVar3[1] + uVar8 * 8);
      }
      else {
        lVar2 = 0;
      }
      if ((((*(long *)(lVar2 + 8) != 0) &&
           (pcVar4 = *(code **)(*(long *)(lVar2 + 8) + 0x30), pcVar4 != (code *)0x0)) &&
          (*(int *)(lVar2 + 4) == 0)) &&
         ((*pcVar4)(lVar2,param_2,param_3,auStack_50), puVar7 = auStack_50, 0 < (int)lVar2))
      goto LAB_007094e0;
    }
    puVar7 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
  }
LAB_007094e0:
  *param_4 = *puVar7;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar7 + 2);
  FUN_00709514(param_4);
  return 1;
}



/* Entry: 00709514; end: 0070953f;  */

undefined8 FUN_00709514(int *param_1)

{
  if (*param_1 - 1U < 2) {
    FUN_00705a60(*(long *)(param_1 + 2) + 0x18);
  }
  return 1;
}



/* Entry: 00709540; end: 00709547;  */

/* WARNING: Removing unreachable block (ram,0x00709580) */

bool FUN_00709540(long param_1,long param_2)

{
  bool bVar1;
  dword *pdVar2;
  long lVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    pdVar2 = &MACH_HEADER.ncmds;
    FUN_00701e90();
    if (pdVar2 != (dword *)0x0) {
      bVar4 = true;
      *pdVar2 = 1;
      *(long *)(pdVar2 + 2) = param_2;
      FUN_00709514();
      func_0x00706480(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 8);
      FUN_00709930(lVar3,pdVar2);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00706268(lVar3,pdVar2);
        bVar1 = lVar3 == 0;
        bVar4 = !bVar1;
      }
      else {
        bVar1 = true;
      }
      func_0x007064b8(param_1 + 0x10);
      if (!bVar1) {
        return bVar4;
      }
      func_0x0070961c(pdVar2);
      func_0x00709c5c();
      return bVar4;
    }
    FUN_006de8e4(0xb,0,0x41,0,0);
  }
  return false;
}



/* Entry: 00709548; end: 00709613;  */

bool FUN_00709548(long param_1,long param_2,int param_3)

{
  bool bVar1;
  dword *pdVar2;
  long lVar3;
  bool bVar4;
  dword dVar5;
  
  if (param_2 != 0) {
    pdVar2 = &MACH_HEADER.ncmds;
    FUN_00701e90();
    if (pdVar2 != (dword *)0x0) {
      bVar4 = true;
      dVar5 = 1;
      if (param_3 != 0) {
        dVar5 = 2;
      }
      *pdVar2 = dVar5;
      *(long *)(pdVar2 + 2) = param_2;
      FUN_00709514();
      func_0x00706480(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 8);
      FUN_00709930(lVar3,pdVar2);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00706268(lVar3,pdVar2);
        bVar1 = lVar3 == 0;
        bVar4 = !bVar1;
      }
      else {
        bVar1 = true;
      }
      func_0x007064b8(param_1 + 0x10);
      if (!bVar1) {
        return bVar4;
      }
      func_0x0070961c(pdVar2);
      func_0x00709c5c();
      return bVar4;
    }
    FUN_006de8e4(0xb,0,0x41,0,0);
  }
  return false;
}



/* Entry: 00709614; end: 0070964b;  */

bool FUN_00709614(long param_1,long param_2)

{
  bool bVar1;
  dword *pdVar2;
  long lVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    pdVar2 = &MACH_HEADER.ncmds;
    FUN_00701e90();
    if (pdVar2 != (dword *)0x0) {
      bVar4 = true;
      *pdVar2 = 2;
      *(long *)(pdVar2 + 2) = param_2;
      FUN_00709514();
      func_0x00706480(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 8);
      FUN_00709930(lVar3,pdVar2);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00706268(lVar3,pdVar2);
        bVar1 = lVar3 == 0;
        bVar4 = !bVar1;
      }
      else {
        bVar1 = true;
      }
      func_0x007064b8(param_1 + 0x10);
      if (!bVar1) {
        return bVar4;
      }
      func_0x0070961c(pdVar2);
      func_0x00709c5c();
      return bVar4;
    }
    FUN_006de8e4(0xb,0,0x41,0,0);
  }
  return false;
}



/* Entry: 0070964c; end: 00709773;  */

ulong * FUN_0070964c(ulong *param_1,int param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  ulong auStack_2a8 [2];
  uint uStack_294;
  int *piStack_250;
  ulong uStack_248;
  ulong *puStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_210;
  int aiStack_1d0 [2];
  undefined1 **ppuStack_1c8;
  undefined1 *apuStack_1c0 [47];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  apuStack_1c0[0] = auStack_238;
  uVar1 = param_3;
  if (param_2 == 1) {
    uVar1 = uStack_228;
    uStack_210 = param_3;
  }
  uStack_228 = uVar1;
  ppuStack_1c8 = apuStack_1c0;
  aiStack_1d0[0] = param_2;
  func_0x00706308(param_1);
  puVar4 = param_1;
  FUN_00709a20(param_1,&puStack_240,aiStack_1d0);
  if ((int)puVar4 == 0) {
    puVar5 = (ulong *)0xffffffff;
  }
  else {
    puVar5 = puStack_240;
    if (param_4 != (int *)0x0) {
      *param_4 = 1;
      piStack_250 = aiStack_1d0;
      iVar6 = (int)puStack_240 + 1;
      if (param_1 == (ulong *)0x0) goto LAB_00709704;
      while (iVar6 < (int)*param_1) {
        if (*param_1 <= (ulong)(long)iVar6) goto LAB_00709708;
        uStack_248 = *(ulong *)(param_1[1] + (long)iVar6 * 8);
        while( true ) {
          puVar4 = &uStack_248;
          FUN_00709204(puVar4,&piStack_250);
          if ((int)puVar4 != 0) goto LAB_0070973c;
          *param_4 = *param_4 + 1;
          iVar6 = iVar6 + 1;
          if (param_1 != (ulong *)0x0) break;
LAB_00709704:
          if (-1 < iVar6) goto LAB_0070973c;
LAB_00709708:
          uStack_248 = 0;
        }
      }
    }
  }
LAB_0070973c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00709c64();
  if (puVar4 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  puVar2 = puVar4;
  func_0x00709c00();
  func_0x00709be8();
  if ((int)puVar2 < 0) {
    func_0x00709bd4();
    uVar3 = *param_1;
    FUN_007093f0(uVar3,1,puVar5,auStack_2a8);
    if ((int)uVar3 != 0) {
      puVar2 = auStack_2a8;
      func_0x0070961c();
      func_0x00709c00();
      func_0x00709be8();
      if (-1 < (int)puVar2) goto LAB_007097a4;
      func_0x00709bd4();
    }
    FUN_00705f10(puVar4);
LAB_0070983c:
    puVar4 = (ulong *)0x0;
  }
  else {
LAB_007097a4:
    for (uVar7 = uStack_294 & ((int)uStack_294 >> 0x1f ^ 0xffffffffU); uVar7 != 0; uVar7 = uVar7 - 1
        ) {
      func_0x00709c70();
      func_0x00709c50();
      if (puVar2 == (ulong *)0x0) {
        func_0x00709bd4();
        FUN_00705f40(puVar4,0x709b98,0x70e584);
        goto LAB_0070983c;
      }
      puVar2 = puVar5 + 3;
      FUN_00705a60();
    }
    func_0x00709be0(*param_1);
  }
  return puVar4;
}



/* Entry: 00709774; end: 0070992f;  */

undefined1 * FUN_00709774(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar3;
  undefined1 auStack_58 [20];
  uint uStack_44;
  
  func_0x00709c64();
  if (param_1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  puVar1 = param_1;
  func_0x00709c00();
  func_0x00709be8();
  if ((int)puVar1 < 0) {
    func_0x00709bd4();
    uVar2 = *unaff_x20;
    FUN_007093f0(uVar2,1);
    if ((int)uVar2 != 0) {
      puVar1 = auStack_58;
      func_0x0070961c();
      func_0x00709c00();
      func_0x00709be8();
      if (-1 < (int)puVar1) goto LAB_007097a4;
      func_0x00709bd4();
    }
    FUN_00705f10(param_1);
LAB_0070983c:
    param_1 = (undefined1 *)0x0;
  }
  else {
LAB_007097a4:
    for (uVar3 = uStack_44 & ((int)uStack_44 >> 0x1f ^ 0xffffffffU); uVar3 != 0; uVar3 = uVar3 - 1)
    {
      func_0x00709c70();
      func_0x00709c50();
      if (puVar1 == (undefined1 *)0x0) {
        func_0x00709bd4();
        FUN_00705f40(param_1,0x709b98,0x70e584);
        goto LAB_0070983c;
      }
      puVar1 = (undefined1 *)(unaff_x21 + 0x18);
      FUN_00705a60();
    }
    func_0x00709be0(*unaff_x20);
  }
  return param_1;
}



/* Entry: 00709930; end: 00709a1f;  */

long FUN_00709930(ulong *param_1,int *param_2)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lStack_48;
  ulong uStack_40;
  int *piStack_38;
  
  piStack_38 = param_2;
  func_0x00706308();
  puVar2 = param_1;
  FUN_00709a20(param_1,&uStack_40,param_2);
  if ((int)puVar2 != 0) {
    if (*param_2 - 1U < 2) {
      uVar6 = uStack_40;
      if (param_1 != (ulong *)0x0) {
        for (; uVar6 < *param_1; uVar6 = uVar6 + 1) {
          lVar5 = *(long *)(param_1[1] + uVar6 * 8);
          plVar3 = &lStack_48;
          lStack_48 = lVar5;
          FUN_00709204(plVar3,&piStack_38);
          if ((int)plVar3 != 0) {
            return 0;
          }
          if (*param_2 == 2) {
            uVar4 = *(undefined8 *)(lVar5 + 8);
            func_0x00708a90(uVar4,*(undefined8 *)(param_2 + 2));
            iVar1 = (int)uVar4;
          }
          else {
            if (*param_2 != 1) {
              return lVar5;
            }
            uVar4 = *(undefined8 *)(lVar5 + 8);
            FUN_00708bc8(uVar4,*(undefined8 *)(param_2 + 2));
            iVar1 = (int)uVar4;
          }
          if (iVar1 == 0) {
            return lVar5;
          }
        }
      }
    }
    else if ((param_1 != (ulong *)0x0) && (uStack_40 < *param_1)) {
      return *(long *)(param_1[1] + uStack_40 * 8);
    }
  }
  return 0;
}



/* Entry: 00709a20; end: 00709a2b;  */

undefined8 FUN_00709a20(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      for (uVar4 = 0; *param_1 != uVar4; uVar4 = uVar4 + 1) {
        if (*(long *)(param_1[1] + uVar4 * 8) == param_3) {
          if (param_2 == (ulong *)0x0) {
            return 1;
          }
          *param_2 = uVar4;
          return 1;
        }
      }
    }
    else if (param_3 != 0) {
      if ((int)param_1[2] == 0) {
        puVar3 = param_1;
        for (uVar4 = 0; uVar4 < *param_1; uVar4 = uVar4 + 1) {
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar4 * 8));
          if ((int)puVar3 == 0) {
            if (param_2 == (ulong *)0x0) {
              return 1;
            }
            *param_2 = uVar4;
            return 1;
          }
        }
      }
      else {
        uVar4 = 0;
        puVar3 = param_1;
        uVar5 = *param_1;
        while (lVar2 = uVar5 - uVar4, uVar4 <= uVar5 && lVar2 != 0) {
          uVar1 = uVar4 + (lVar2 - 1U >> 1);
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar1 * 8));
          if ((int)puVar3 < 1) {
            uVar5 = uVar1;
            if (-1 < (int)puVar3) {
              if (lVar2 == 1) {
                if (param_2 != (ulong *)0x0) {
                  *param_2 = uVar1;
                }
                return 1;
              }
              uVar5 = uVar1 + 1;
            }
          }
          else {
            uVar4 = uVar1 + 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 00709a2c; end: 00709b63;  */

undefined8 FUN_00709a2c(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(*param_3 + 0x18);
  lVar1 = *param_2;
  FUN_007093f0(lVar1,1,uVar5,auStack_50);
  if ((int)lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    plVar2 = param_2;
    (*(code *)param_2[9])(param_2,param_3,uStack_48);
    if ((int)plVar2 == 0) {
      func_0x0070961c(auStack_50);
      func_0x00706480(*param_2 + 0x10);
      uVar3 = *(undefined8 *)(*param_2 + 8);
      func_0x00709644(uVar3,1,uVar5);
      if ((int)uVar3 == -1) {
LAB_00709b4c:
        uVar5 = 0;
      }
      else {
        uVar7 = (ulong)(int)uVar3;
        do {
          puVar4 = *(ulong **)(*param_2 + 8);
          if ((((puVar4 == (ulong *)0x0) || (*puVar4 <= uVar7)) ||
              (piVar6 = *(int **)(puVar4[1] + uVar7 * 8), *piVar6 != 1)) ||
             (uVar3 = uVar5, FUN_007089ec(uVar5,*(undefined8 *)(**(long **)(piVar6 + 2) + 0x28)),
             (int)uVar3 != 0)) goto LAB_00709b4c;
          plVar2 = param_2;
          (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar6 + 2));
          uVar7 = uVar7 + 1;
        } while ((int)plVar2 == 0);
        *param_1 = *(undefined8 *)(piVar6 + 2);
        FUN_00709514(piVar6);
        uVar5 = 1;
      }
      func_0x00709be0(*param_2);
    }
    else {
      *param_1 = uStack_48;
      uVar5 = 1;
    }
  }
  return uVar5;
}



/* Entry: 00709b64; end: 00709b9f;  */

undefined8 FUN_00709b64(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe0) + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(*(long *)(param_1 + 0xe0) + 0x18) = uVar1;
  return 1;
}



/* Entry: 00709ba0; end: 00709bd3;  */

void FUN_00709ba0(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 00709bd4; end: 00709c83;  */

void FUN_00709bd4(void)

{
  int iVar1;
  undefined8 *unaff_x20;
  
  iVar1 = (int)*unaff_x20 + 0x10;
  _pthread_rwlock_unlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_rdlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_wrlock();
  if (iVar1 == 0) {
    return;
  }
  _abort();
  _pthread_rwlock_unlock();
  if (iVar1 != 0) {
    _abort();
    _pthread_rwlock_unlock();
    if (iVar1 == 0) {
      return;
    }
    _abort();
    _pthread_once();
    if (iVar1 != 0) {
      _abort();
      FUN_0070673c();
      if (iRam0000000000b6cdd0 != 0) {
        _pthread_getspecific();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 00709c84; end: 0070a007;  */

long * FUN_00709c84(long *param_1,long *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  long **pplVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong unaff_x20;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long *plStack_138;
  ulong uStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_f4;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_e8 = param_1;
  if (param_2 == (long *)0x0) {
    func_0x006d33c4();
    if (param_1 == (long *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      func_0x006d34ac();
      if (plVar6 != (long *)0x0) {
        *(undefined1 *)param_1[1] = 0;
        if (plStack_e8 == (long *)0x0) {
          param_2 = (long *)param_1[1];
          func_0x00701ed0();
          param_3 = 200;
          goto LAB_00709fa4;
        }
        iStack_f4 = 200;
        plStack_e0 = param_1;
        goto LAB_00709d1c;
      }
    }
LAB_00709f64:
    uVar9 = 0x41;
LAB_00709f74:
    FUN_006de8e4(0xb,0,uVar9,0,0);
    func_0x006d3400();
  }
  else if (0 < param_3) {
    if (param_1 == (long *)0x0) {
LAB_00709fa4:
      param_1 = param_2;
      FUN_00702124(param_2,&UNK_0091bdd5,param_3);
      goto LAB_00709fb8;
    }
    plStack_e0 = (long *)0x0;
    iStack_f4 = param_3;
LAB_00709d1c:
    uStack_108 = 0x100000000;
    uStack_110 = 0;
    uVar20 = 0;
    uVar22 = 0;
    plVar6 = plStack_e8;
    plStack_f0 = param_2;
    while ((puVar10 = (ulong *)*plVar6, puVar10 != (ulong *)0x0 && (uVar20 < *puVar10))) {
      puVar19 = *(undefined8 **)(puVar10[1] + uVar20 * 8);
      puVar7 = (undefined1 *)*puVar19;
      FUN_00702384();
      if (((int)puVar7 == 0) || (FUN_007025a4(), puVar7 == (undefined1 *)0x0)) {
        puVar7 = auStack_d0;
        func_0x006cc674(auStack_d0,0x50,*puVar19);
      }
      puVar8 = puVar7;
      _strlen();
      param_1 = plStack_e0;
      puVar11 = (uint *)puVar19[1];
      uVar2 = *puVar11;
      if (0x100000 < (int)uVar2) {
LAB_00709f6c:
        uVar9 = 0x87;
        goto LAB_00709f74;
      }
      lVar12 = *(long *)(puVar11 + 2);
      uVar21 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      if ((uVar2 & 3) == 0 && puVar11[1] == 0x1b) {
        for (uVar16 = 0; uStack_80 = uStack_110, uStack_78 = uStack_108, uVar21 != uVar16;
            uVar16 = uVar16 + 1) {
          if (*(char *)(lVar12 + uVar16) != '\0') {
            *(undefined4 *)((ulong)&uStack_80 | (uVar16 & 3) << 2) = 1;
          }
        }
      }
      else {
        uStack_80 = 0x100000001;
        uStack_78 = 0x100000001;
      }
      iVar14 = 0;
      for (uVar16 = 0; uVar21 != uVar16; uVar16 = uVar16 + 1) {
        iVar15 = iVar14;
        if ((*(int *)((ulong)&uStack_80 | (uVar16 & 3) << 2) != 0) &&
           (iVar15 = iVar14 + 4, 0xffffffa0 < *(byte *)(lVar12 + uVar16) - 0x7f)) {
          iVar15 = iVar14 + 1;
        }
        iVar14 = iVar15;
      }
      iVar14 = (int)uVar22 + (int)puVar8 + iVar14;
      uVar2 = iVar14 + 2;
      unaff_x20 = (ulong)uVar2;
      uStack_d8 = uVar20;
      if (0x100000 < (int)uVar2) goto LAB_00709f6c;
      if (plStack_e0 == (long *)0x0) {
        plVar13 = plStack_f0;
        param_2 = plStack_f0;
        if (iStack_f4 <= (int)uVar2) goto joined_r0x00709ffc;
      }
      else {
        plVar6 = plStack_e0;
        func_0x006d34ac(plStack_e0,(long)(iVar14 + 3));
        if (plVar6 == (long *)0x0) goto LAB_00709f64;
        plVar13 = (long *)param_1[1];
        plVar6 = plStack_e8;
      }
      puVar1 = (undefined1 *)((long)plVar13 + (long)(int)uVar22);
      puVar23 = puVar1 + 1;
      *puVar1 = 0x2f;
      if (((ulong)puVar8 & 0xffffffff) != 0) {
        _memcpy(puVar23,puVar7);
      }
      puVar23[(int)puVar8] = 0x3d;
      lVar12 = *(long *)(puVar19[1] + 8);
      pbVar17 = puVar23 + (int)puVar8 + 1;
      for (uVar20 = 0; uVar21 != uVar20; uVar20 = uVar20 + 1) {
        pbVar18 = pbVar17;
        if (*(int *)((ulong)&uStack_80 | (uVar20 & 3) << 2) != 0) {
          bVar3 = *(byte *)(lVar12 + uVar20);
          if (bVar3 - 0x7f < 0xffffffa1) {
            pbVar17[0] = 0x5c;
            pbVar17[1] = 0x78;
            pbVar17[2] = (&UNK_0091bdc4)[bVar3 >> 4];
            pbVar17[3] = (&UNK_0091bdc4)[(ulong)bVar3 & 0xf];
            pbVar18 = pbVar17 + 4;
          }
          else {
            pbVar18 = pbVar17 + 1;
            *pbVar17 = bVar3;
          }
        }
        pbVar17 = pbVar18;
      }
      *pbVar17 = 0;
      uVar22 = unaff_x20;
      uVar20 = uStack_d8 + 1;
    }
    param_2 = plStack_f0;
    param_1 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      param_2 = (long *)plStack_e0[1];
      func_0x00701ed0();
    }
joined_r0x00709ffc:
    if (uVar20 == 0) {
      *(undefined1 *)param_2 = 0;
    }
    goto LAB_00709fb8;
  }
  param_2 = (long *)0x0;
LAB_00709fb8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)*param_1;
  if (lVar12 != 0) {
    plVar6 = (long *)0x0;
    if (lVar12 != 0) {
      pcStack_118 = FUN_0070a008;
      pplVar5 = &plStack_138;
      uStack_130 = unaff_x20;
      plStack_128 = param_2;
      puStack_120 = &stack0xfffffffffffffff0;
      FUN_006cc0ac(pplVar5,lVar12,2);
      if ((int)pplVar5 != 0) {
        plVar6 = (long *)-(long)plStack_138;
        if ((*(uint *)(lVar12 + 4) & 0x100) == 0) {
          plVar6 = plStack_138;
        }
        bVar4 = (ulong)-(long)plStack_138 < 0x8000000000000000;
        if (((uint)(plStack_138 != (long *)0x0) & *(uint *)(lVar12 + 4) >> 8) == 0) {
          bVar4 = (long)plStack_138 < 0;
        }
        if (!bVar4) {
          return plVar6;
        }
      }
      FUN_006de5b0();
      plVar6 = (long *)0xffffffffffffffff;
    }
    return plVar6;
  }
  return (long *)0x0;
}



/* Entry: 0070a008; end: 0070a01b;  */

long FUN_0070a008(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_28;
  
  lVar4 = *(long *)*param_1;
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    plVar2 = &lStack_28;
    FUN_006cc0ac(plVar2,lVar4,2);
    if ((int)plVar2 != 0) {
      lVar3 = -lStack_28;
      if ((*(uint *)(lVar4 + 4) & 0x100) == 0) {
        lVar3 = lStack_28;
      }
      bVar1 = (ulong)-lStack_28 < 0x8000000000000000;
      if (((uint)(lStack_28 != 0) & *(uint *)(lVar4 + 4) >> 8) == 0) {
        bVar1 = lStack_28 < 0;
      }
      if (!bVar1) {
        return lVar3;
      }
    }
    FUN_006de5b0();
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 0070a01c; end: 0070a0af;  */

ulong FUN_0070a01c(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  
  iVar4 = (int)param_2;
  if (iVar4 == -1) {
    uVar2 = 1;
  }
  else {
    if (iVar4 != 0) {
      if (iVar4 - 1U < 8) {
        lVar3 = (ulong)(iVar4 - 1U) * 0x28;
        switch(iVar4) {
        default:
          plVar6 = *(long **)(param_1 + 0xa0);
          if ((plVar6 != (long *)0x0) && ((*plVar6 != 0 || (plVar6[1] != 0)))) {
            param_2 = (ulong)*(uint *)(lVar3 + 0xb2a248);
            break;
          }
        case 1:
FUN_0070a158:
          lVar3 = param_1;
          func_0x00714664();
          uVar2 = 3;
          if ((int)lVar3 != 0) {
            uVar1 = 3;
            if ((*(byte *)(param_1 + 0x39) & 0x20) != 0) {
              uVar1 = 1;
            }
            uVar2 = (ulong)uVar1;
          }
          return uVar2;
        case 6:
        case 7:
          if (*(long *)(param_1 + 0xa0) == 0) {
            return 3;
          }
          param_2 = (ulong)*(uint *)(lVar3 + 0xb2a248);
        }
      }
      plVar6 = *(long **)(param_1 + 0xa0);
      if (plVar6 != (long *)0x0) {
        puVar5 = (ulong *)plVar6[1];
        iVar4 = (int)param_2;
        if (puVar5 != (ulong *)0x0) {
          for (uVar2 = 0; (puVar5 != (ulong *)0x0 && (uVar2 < *puVar5)); uVar2 = uVar2 + 1) {
            func_0x0070a1d0();
            if ((int)param_2 == iVar4) {
              return 2;
            }
            puVar5 = (ulong *)plVar6[1];
          }
        }
        puVar5 = (ulong *)*plVar6;
        if (puVar5 != (ulong *)0x0) {
          for (uVar2 = 0; (puVar5 != (ulong *)0x0 && (uVar2 < *puVar5)); uVar2 = uVar2 + 1) {
            func_0x0070a1d0();
            if ((int)param_2 == iVar4) {
              return 1;
            }
            puVar5 = (ulong *)*plVar6;
          }
        }
      }
      return 3;
    }
    uVar2 = 0x38e;
    FUN_0070a0b0(0x38e,param_1);
    if ((int)uVar2 == 3) goto FUN_0070a158;
  }
  return uVar2;
}



/* Entry: 0070a0b0; end: 0070a157;  */

undefined8 FUN_0070a0b0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_2 + 0xa0);
  if (plVar3 != (long *)0x0) {
    puVar1 = (ulong *)plVar3[1];
    iVar2 = (int)param_1;
    if (puVar1 != (ulong *)0x0) {
      for (uVar4 = 0; (puVar1 != (ulong *)0x0 && (uVar4 < *puVar1)); uVar4 = uVar4 + 1) {
        func_0x0070a1d0();
        if ((int)param_1 == iVar2) {
          return 2;
        }
        puVar1 = (ulong *)plVar3[1];
      }
    }
    puVar1 = (ulong *)*plVar3;
    if (puVar1 != (ulong *)0x0) {
      for (uVar4 = 0; (puVar1 != (ulong *)0x0 && (uVar4 < *puVar1)); uVar4 = uVar4 + 1) {
        func_0x0070a1d0();
        if ((int)param_1 == iVar2) {
          return 1;
        }
        puVar1 = (ulong *)*plVar3;
      }
    }
  }
  return 3;
}



/* Entry: 0070a158; end: 0070a193;  */

undefined4 FUN_0070a158(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_2;
  func_0x00714664();
  uVar1 = 3;
  if (((int)lVar2 != 0) && (uVar1 = 3, (*(byte *)(param_2 + 0x39) & 0x20) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 0070a194; end: 0070a1db;  */

undefined4 FUN_0070a194(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = *(long **)(param_2 + 0xa0);
  if ((plVar6 != (long *)0x0) && ((*plVar6 != 0 || (plVar6[1] != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar4 = (ulong)uVar1;
    plVar6 = *(long **)(param_2 + 0xa0);
    if (plVar6 != (long *)0x0) {
      puVar5 = (ulong *)plVar6[1];
      if (puVar5 != (ulong *)0x0) {
        for (uVar7 = 0; (puVar5 != (ulong *)0x0 && (uVar7 < *puVar5)); uVar7 = uVar7 + 1) {
          func_0x0070a1d0();
          if ((uint)uVar4 == uVar1) {
            return 2;
          }
          puVar5 = (ulong *)plVar6[1];
        }
      }
      puVar5 = (ulong *)*plVar6;
      if (puVar5 != (ulong *)0x0) {
        for (uVar7 = 0; (puVar5 != (ulong *)0x0 && (uVar7 < *puVar5)); uVar7 = uVar7 + 1) {
          func_0x0070a1d0();
          if ((uint)uVar4 == uVar1) {
            return 1;
          }
          puVar5 = (ulong *)*plVar6;
        }
      }
    }
    return 3;
  }
  lVar3 = param_2;
  func_0x00714664();
  uVar2 = 3;
  if (((int)lVar3 != 0) && (uVar2 = 3, (*(byte *)(param_2 + 0x39) & 0x20) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 0070a1dc; end: 0070a223;  */

uint FUN_0070a1dc(int *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00702528();
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (param_1 == (int *)0x0) {
LAB_0070a284:
    param_3 = 0xffffffff;
  }
  else {
    iVar1 = *param_1;
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar3 = (long)(int)param_3;
    do {
      lVar3 = lVar3 + 1;
      if (iVar1 <= lVar3) goto LAB_0070a284;
      uVar2 = **(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
      FUN_00702350(uVar2,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar2 != 0);
  }
  return param_3;
}



/* Entry: 0070a224; end: 0070a29f;  */

uint FUN_0070a224(int *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
LAB_0070a284:
    param_3 = 0xffffffff;
  }
  else {
    iVar1 = *param_1;
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar3 = (long)(int)param_3;
    do {
      lVar3 = lVar3 + 1;
      if (iVar1 <= lVar3) goto LAB_0070a284;
      uVar2 = **(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
      FUN_00702350(uVar2,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar2 != 0);
  }
  return param_3;
}



/* Entry: 0070a2a0; end: 0070a2cf;  */

undefined8 FUN_0070a2a0(ulong *param_1,uint param_2)

{
  if (((param_1 != (ulong *)0x0) && (-1 < (int)param_2)) && ((ulong)param_2 < *param_1)) {
    return *(undefined8 *)(param_1[1] + (ulong)param_2 * 8);
  }
  return 0;
}



/* Entry: 0070a2d0; end: 0070ae43;  */

ulong * FUN_0070a2d0(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  ulong uVar14;
  long extraout_x9;
  ulong *puVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong *puStack_70;
  int iStack_68;
  undefined4 uStack_64;
  
  if (param_1[1] == 0) {
    puVar18 = (ulong *)0xffffffff;
    uVar12 = 0x41;
    uVar11 = 0x7a;
  }
  else if (param_1[0x13] == 0) {
    uVar19 = param_1[4];
    puVar18 = param_1;
    FUN_00705ed8();
    param_1[0x13] = (ulong)puVar18;
    if ((puVar18 != (ulong *)0x0) && (func_0x00706268(), puVar18 != (ulong *)0x0)) {
      FUN_00705a60(param_1[1] + 0x18);
      *(undefined4 *)((long)param_1 + 0x94) = 1;
      puVar7 = (ulong *)param_1[2];
      if (puVar7 == (ulong *)0x0) {
        puVar15 = (ulong *)0x0;
      }
      else {
        FUN_00706288();
        puVar15 = puVar7;
        if (puVar7 == (ulong *)0x0) goto LAB_0070a36c;
      }
      puVar18 = (ulong *)param_1[0x13];
      if (puVar18 == (ulong *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = *puVar18;
        uVar14 = (ulong)((int)uVar21 + -1);
        if (uVar14 < uVar21) {
          puVar17 = *(ulong **)(puVar18[1] + uVar14 * 8);
          goto LAB_0070a3cc;
        }
      }
      puVar17 = (ulong *)0x0;
LAB_0070a3cc:
      iVar16 = *(int *)(uVar19 + 0x28);
      for (uVar19 = uVar21; (int)uVar19 <= iVar16; uVar19 = (ulong)((int)uVar19 + 1)) {
        puVar18 = puVar17;
        FUN_0070ae44(puVar17,&iStack_68);
        if ((int)puVar18 == 0) {
          puVar18 = (ulong *)0x0;
          uVar12 = 0x29;
LAB_0070a8cc:
          puVar17 = (ulong *)0x0;
LAB_0070a8d0:
          *(undefined4 *)(param_1 + 0x16) = uVar12;
          goto LAB_0070ad0c;
        }
        puVar7 = puVar18;
        if (iStack_68 != 0) break;
        if (*(char *)(param_1[4] + 0x19) < '\0') {
          func_0x0070c458();
          func_0x0070c504();
          if ((int)puVar18 < 0) {
            uVar12 = 0x42;
            goto LAB_0070a8cc;
          }
          puVar7 = puVar18;
          if ((int)puVar18 != 0) {
            func_0x0070c4a4();
            goto LAB_0070a498;
          }
        }
        if (puVar15 == (ulong *)0x0) {
          puVar18 = (ulong *)0x0;
          uVar19 = uVar21;
          goto LAB_0070a498;
        }
        uVar14 = 0;
        do {
          if (*puVar15 <= uVar14) {
            puVar18 = (ulong *)0x0;
            puStack_70 = (ulong *)0x0;
            goto LAB_0070a498;
          }
          puVar18 = *(ulong **)(puVar15[1] + uVar14 * 8);
          puVar7 = param_1;
          func_0x0070c494(param_1[9],param_1,puVar17);
          uVar14 = uVar14 + 1;
        } while ((int)puVar7 == 0);
        puStack_70 = puVar18;
        if (puVar18 == (ulong *)0x0) goto LAB_0070a498;
        uVar14 = param_1[0x13];
        func_0x00706268(uVar14,puVar18);
        if (uVar14 == 0) {
          func_0x0070c3dc();
          puVar18 = (ulong *)0x0;
          uVar12 = 0x11;
          goto LAB_0070a8cc;
        }
        FUN_00705a60(puVar18 + 3);
        puVar7 = puVar15;
        FUN_007060f0(puVar15,puVar18);
        *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
        puVar17 = puVar18;
      }
      puVar18 = (ulong *)0x0;
LAB_0070a498:
      bVar1 = false;
      puVar17 = (ulong *)0x0;
      puVar13 = (ulong *)param_1[0x13];
      uVar21 = uVar19;
      if (puVar13 == (ulong *)0x0) goto LAB_0070a4cc;
LAB_0070a4ac:
      iVar6 = (int)*puVar13 + -1;
      uVar14 = (ulong)iVar6;
      puVar20 = puVar18;
      if ((ulong)(long)iVar6 < *puVar13) {
        puVar13 = *(ulong **)(puVar13[1] + uVar14 * 8);
      }
      else {
        puVar13 = (ulong *)0x0;
      }
      do {
        func_0x0070c514();
        if ((int)puVar7 == 0) {
LAB_0070a7f0:
          puVar18 = puVar20;
          uVar12 = 0x29;
          goto LAB_0070a8d0;
        }
        if (iStack_68 != 0) {
          puVar8 = (ulong *)param_1[0x13];
          if ((puVar8 == (ulong *)0x0) || (*puVar8 != 1)) {
            func_0x00706270();
            *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + -1;
            iVar6 = (int)uVar19;
            uVar19 = (ulong)(iVar6 - 1);
            uVar21 = (ulong)((int)uVar21 - 1);
            puVar18 = (ulong *)param_1[0x13];
            puVar7 = puVar8;
            puVar17 = puVar8;
            if ((puVar18 == (ulong *)0x0) || (uVar14 = (ulong)(iVar6 + -2), *puVar18 <= uVar14)) {
              puVar13 = (ulong *)0x0;
            }
            else {
              puVar13 = *(ulong **)(puVar18[1] + uVar14 * 8);
            }
          }
          else {
            func_0x0070c458();
            (*extraout_x8)();
            puVar18 = puVar8;
            if (((int)puVar8 < 1) ||
               (puVar18 = puVar13, FUN_00708bc8(puVar13,puStack_70), (int)puVar18 != 0)) {
              param_1[0x17] = (ulong)puVar13;
              *(int *)((long)param_1 + 0xac) = iVar6;
              *(undefined4 *)(param_1 + 0x16) = 0x12;
              if ((int)puVar8 == 1) {
                func_0x0070c4a4();
              }
              func_0x0070c414();
              func_0x0070c50c();
              if ((int)puVar18 == 0) goto LAB_0070ad0c;
              bVar1 = true;
              puVar7 = puVar18;
              puVar20 = puVar18;
            }
            else {
              func_0x0070e584();
              puVar18 = (ulong *)param_1[0x13];
              if ((puVar18 != (ulong *)0x0) && (uVar14 < *puVar18)) {
                *(ulong **)(puVar18[1] + uVar14 * 8) = puStack_70;
              }
              *(undefined4 *)((long)param_1 + 0x94) = 0;
              puVar7 = puVar13;
              puVar20 = puVar8;
              puVar13 = puStack_70;
            }
          }
        }
        while (puVar18 = puVar7, iVar6 = (int)uVar19, iVar6 <= iVar16) {
          func_0x0070c514();
          if ((int)puVar18 == 0) goto LAB_0070a7f0;
          if (iStack_68 != 0) break;
          func_0x0070c458();
          (*extraout_x8_00)();
          if ((int)puVar18 < 0) {
            uVar12 = 0x42;
            goto LAB_0070a8d0;
          }
          if ((int)puVar18 == 0) break;
          puVar7 = (ulong *)param_1[0x13];
          func_0x00706268(puVar7,puStack_70);
          if (puVar7 == (ulong *)0x0) {
            func_0x0070c4a4();
            func_0x0070c3dc();
            puVar18 = (ulong *)0x0;
            uVar12 = 0x11;
            goto LAB_0070a8d0;
          }
          puVar20 = puVar18;
          puVar13 = puStack_70;
          uVar19 = (ulong)(iVar6 + 1);
        }
        pcVar22 = (code *)param_1[7];
        for (uVar14 = (ulong)*(int *)((long)param_1 + 0x94);
            (puVar7 = (ulong *)param_1[0x13], puVar7 != (ulong *)0x0 && (uVar14 < *puVar7));
            uVar14 = uVar14 + 1) {
          puVar7 = *(ulong **)(puVar7[1] + uVar14 * 8);
          puVar18 = puVar7;
          FUN_0070a01c(puVar7,*(undefined4 *)(param_1[4] + 0x24),0);
          if ((int)puVar18 == 2) {
            param_1[0x17] = (ulong)puVar7;
            *(int *)((long)param_1 + 0xac) = (int)uVar14;
            *(undefined4 *)(param_1 + 0x16) = 0x1c;
            func_0x0070c414();
            (*pcVar22)();
            if ((int)puVar18 == 0) goto LAB_0070ac54;
          }
          else {
            puVar20 = puVar18;
            if ((int)puVar18 == 1) goto LAB_0070a908;
          }
        }
        if ((*(byte *)(param_1[4] + 0x1a) >> 3 & 1) != 0) {
          puVar20 = puVar18;
          if ((puVar7 != (ulong *)0x0) && ((int)*puVar7 <= *(int *)((long)param_1 + 0x94))) {
            puVar20 = *(ulong **)puVar7[1];
            puVar18 = param_1;
            (*(code *)param_1[0xf])(param_1,*(undefined8 *)(*puVar20 + 0x28));
            if (puVar18 != (ulong *)0x0) {
              lVar23 = 0;
              for (uVar14 = 0; uVar26 = *puVar18, uVar14 < uVar26; uVar14 = uVar14 + 1) {
                lVar23 = *(long *)(puVar18[1] + uVar14 * 8);
                lVar9 = lVar23;
                FUN_00708bc8(lVar23,puVar20);
                if ((int)lVar9 == 0) {
                  uVar26 = *puVar18;
                  break;
                }
              }
              if (uVar14 < uVar26) {
                FUN_00705a60(lVar23 + 0x18);
              }
              else {
                lVar23 = 0;
              }
              FUN_0070bc24();
              if (lVar23 != 0) {
                plVar28 = (long *)param_1[0x13];
                if ((plVar28 != (long *)0x0) && (*plVar28 != 0)) {
                  *(long *)plVar28[1] = lVar23;
                }
                func_0x0070e584();
                *(undefined4 *)((long)param_1 + 0x94) = 0;
                goto LAB_0070a908;
              }
            }
            goto LAB_0070a70c;
          }
LAB_0070a908:
          if (param_1[0x1b] == 0) {
            uVar12 = *(undefined4 *)(param_1[4] + 0x20);
            bVar4 = (*(byte *)(param_1[4] + 0x18) & 0x40) == 0;
          }
          else {
            bVar4 = true;
            uVar12 = 6;
          }
          uVar19 = 0;
          uVar21 = 0;
          iVar16 = 0;
          iVar6 = 0;
          goto LAB_0070a94c;
        }
LAB_0070a70c:
        if ((*(ushort *)(param_1[4] + 0x19) & 0x1080) != 0) {
LAB_0070a814:
          if (!bVar1) {
            if (puVar17 == (ulong *)0x0) {
LAB_0070a878:
              uVar12 = 2;
              if (iVar6 <= *(int *)((long)param_1 + 0x94)) {
                uVar12 = 0x14;
              }
              *(undefined4 *)(param_1 + 0x16) = uVar12;
              param_1[0x17] = (ulong)puVar13;
              iVar6 = iVar6 + -1;
            }
            else {
              func_0x0070c52c(param_1[9]);
              func_0x0070c504();
              if ((int)puVar18 == 0) goto LAB_0070a878;
              puVar18 = (ulong *)param_1[0x13];
              func_0x00706268(puVar18,puVar17);
              *(int *)((long)param_1 + 0x94) = iVar6 + 1;
              param_1[0x17] = (ulong)puVar17;
              *(undefined4 *)(param_1 + 0x16) = 0x13;
              puVar17 = (ulong *)0x0;
            }
            *(int *)((long)param_1 + 0xac) = iVar6;
            func_0x0070c414();
            func_0x0070c50c();
            if ((int)puVar18 == 0) goto LAB_0070ac54;
          }
          bVar1 = true;
          puVar20 = puVar18;
          goto LAB_0070a908;
        }
        do {
          iVar5 = (int)uVar21;
          if (iVar5 < 2) goto LAB_0070a814;
          func_0x0070c458();
          (*extraout_x8_01)();
          if ((int)puVar18 < 0) goto LAB_0070ad0c;
          uVar21 = (ulong)(iVar5 - 1);
        } while ((int)puVar18 == 0);
        puVar7 = puVar18;
        func_0x0070c4a4();
        for (; iVar5 <= (int)uVar19; uVar19 = (ulong)((int)uVar19 - 1)) {
          puStack_70 = (ulong *)param_1[0x13];
          func_0x00706270();
          puVar7 = puStack_70;
          func_0x0070e584();
        }
        puVar13 = (ulong *)param_1[0x13];
        if (puVar13 == (ulong *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (undefined4)*puVar13;
        }
        *(undefined4 *)((long)param_1 + 0x94) = uVar12;
        if (puVar13 != (ulong *)0x0) goto LAB_0070a4ac;
LAB_0070a4cc:
        puVar13 = (ulong *)0x0;
        iVar6 = -1;
        uVar14 = 0xffffffffffffffff;
        puVar20 = puVar18;
      } while( true );
    }
LAB_0070a36c:
    puVar18 = (ulong *)0x0;
    uVar12 = 0x11;
    uVar11 = 0x41;
  }
  else {
    puVar18 = (ulong *)0xffffffff;
    uVar12 = 0x41;
    uVar11 = 0x42;
  }
  func_0x0070c3f4(0xb,0,uVar11);
  goto LAB_0070a384;
LAB_0070a94c:
  iVar5 = (int)puVar20;
  uVar14 = (ulong)*(int *)((long)param_1 + 0x94);
  uVar2 = uVar14 <= uVar19;
  uVar3 = uVar19 == uVar14;
  if ((long)uVar14 <= (long)uVar19) goto LAB_0070aa9c;
  puVar18 = (ulong *)param_1[0x13];
  if ((puVar18 == (ulong *)0x0) || (*puVar18 <= uVar19)) {
    puVar18 = (ulong *)0x0;
  }
  else {
    puVar18 = *(ulong **)(puVar18[1] + uVar19 * 8);
  }
  if (((((*(byte *)(param_1[4] + 0x18) >> 4 & 1) == 0) &&
       ((*(byte *)((long)puVar18 + 0x39) >> 1 & 1) != 0)) &&
      (func_0x0070c3c8(0x22), (int)puVar20 == 0)) ||
     (((bVar4 && ((*(byte *)((long)puVar18 + 0x39) >> 2 & 1) != 0)) &&
      (func_0x0070c3c8(0x28), (int)puVar20 == 0)))) goto LAB_0070ad04;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      puVar20 = puVar18;
      func_0x00714cf8();
      if ((int)puVar20 == 0) {
        uVar11 = 0x18;
LAB_0070a9e0:
        func_0x0070c3c8(uVar11);
        if ((int)puVar20 == 0) goto LAB_0070ad04;
      }
    }
    else {
      puVar20 = puVar18;
      func_0x00714cf8();
      if ((int)puVar20 != 0) {
        uVar11 = 0x25;
        goto LAB_0070a9e0;
      }
    }
  }
  if ((((0 < *(int *)(param_1[4] + 0x20)) &&
       (puVar20 = puVar18, FUN_007145e4(puVar18,uVar12,iVar6 == 1), (int)puVar20 != 1)) &&
      (func_0x0070c3c8(0x1a), (int)puVar20 == 0)) ||
     ((((1 < uVar19 && (((byte)puVar18[7] >> 5 & 1) == 0)) && (puVar18[5] != 0xffffffffffffffff)) &&
      (((long)(puVar18[5] + (long)iVar16 + 1) < (long)uVar21 &&
       (func_0x0070c3c8(0x19), (int)puVar20 == 0)))))) goto LAB_0070ad04;
  uVar25 = (uint)uVar21;
  if ((puVar18[7] & 0x20) == 0) {
    uVar25 = uVar25 + 1;
  }
  uVar21 = (ulong)uVar25;
  if (((uint)puVar18[7] >> 10 & 1) == 0) {
    iVar6 = 1;
  }
  else {
    if ((puVar18[6] != 0xffffffffffffffff && (long)puVar18[6] < (long)uVar19) &&
       (func_0x0070c3c8(0x26), (int)puVar20 == 0)) goto LAB_0070ad04;
    iVar16 = iVar16 + 1;
    iVar6 = 2;
  }
  uVar19 = uVar19 + 1;
  goto LAB_0070a94c;
LAB_0070aa9c:
  uVar21 = param_1[4];
  uVar19 = param_1[1];
  if (*(char *)(uVar21 + 0x70) == '\0') {
LAB_0070aac4:
    if (*(ulong **)(uVar21 + 0x38) != (ulong *)0x0) {
      uVar26 = **(ulong **)(uVar21 + 0x38);
      puVar18 = (ulong *)(uVar21 + 0x48);
      uVar14 = *puVar18;
      if (uVar14 != 0) {
        func_0x00701ed0();
        *puVar18 = 0;
      }
      uVar27 = 0;
      do {
        iVar5 = (int)uVar14;
        uVar2 = uVar27 <= uVar26;
        uVar3 = uVar26 == uVar27;
        if ((bool)uVar3) {
          if (uVar26 != 0) {
            param_1[0x17] = param_1[1];
            *(undefined8 *)((long)param_1 + 0xac) = 0x3e00000000;
            func_0x0070c3b8();
            if (iVar5 == 0) goto LAB_0070ad04;
          }
          break;
        }
        uVar24 = *(undefined8 *)(*(long *)(*(long *)(uVar21 + 0x38) + 8) + uVar27 * 8);
        uVar11 = uVar24;
        _strlen(uVar24);
        uVar14 = uVar19;
        FUN_00715d38(uVar19,uVar24,uVar11,*(undefined4 *)(uVar21 + 0x40),puVar18);
        uVar27 = uVar27 + 1;
        iVar5 = (int)uVar14;
        uVar3 = iVar5 == 0;
        uVar2 = 1;
      } while (iVar5 < 1);
    }
    if (*(long *)(uVar21 + 0x50) != 0) {
      uVar14 = uVar19;
      FUN_00715f40(uVar19,*(long *)(uVar21 + 0x50),*(undefined8 *)(uVar21 + 0x58),0);
      iVar5 = (int)uVar14;
      uVar3 = iVar5 == 0;
      uVar2 = 1;
      if (iVar5 < 1) {
        param_1[0x17] = param_1[1];
        *(undefined8 *)((long)param_1 + 0xac) = 0x3f00000000;
        func_0x0070c3b8();
        if (iVar5 == 0) goto LAB_0070ad04;
      }
    }
    if (*(long *)(uVar21 + 0x60) != 0) {
      FUN_00715f9c(uVar19,*(long *)(uVar21 + 0x60),*(undefined8 *)(uVar21 + 0x68),0);
      iVar5 = (int)uVar19;
      uVar3 = iVar5 == 0;
      uVar2 = 1;
      if (iVar5 < 1) {
        param_1[0x17] = param_1[1];
        *(undefined8 *)((long)param_1 + 0xac) = 0x4000000000;
        func_0x0070c3b8();
        if (iVar5 == 0) goto LAB_0070ad04;
      }
    }
    func_0x0070c49c(param_1[10]);
    if (iVar5 != 0) {
      puVar7 = (ulong *)((long)param_1 + 0xac);
      FUN_00708c60(puVar7,0,param_1[0x13],*(undefined8 *)(param_1[4] + 0x18));
      if ((int)puVar7 == 0) {
LAB_0070ac28:
        if (param_1[6] == 0) {
          puVar7 = param_1;
          FUN_0070ae7c();
        }
        else {
          func_0x0070c49c();
        }
        if ((int)puVar7 != 0) {
          if ((ulong *)param_1[0x13] == (ulong *)0x0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(ulong *)param_1[0x13];
          }
          bVar4 = false;
          do {
            puVar18 = (ulong *)param_1[0x13];
            do {
              uVar19 = uVar19 - 1;
              iVar16 = (int)uVar19;
              if (iVar16 < 0) {
                if ((puVar18 == (ulong *)0x0) || (*puVar18 == 0)) {
                  plVar28 = (long *)0x0;
                }
                else {
                  plVar28 = *(long **)puVar18[1];
                }
                if ((!bVar4) || (plVar28[0xf] != 0)) goto LAB_0070ad64;
                puVar13 = *(ulong **)(*plVar28 + 0x28);
                puVar18 = (ulong *)0xffffffff;
                goto LAB_0070ad80;
              }
              if ((puVar18 == (ulong *)0x0) || (*puVar18 <= (uVar19 & 0x7fffffff))) {
                puVar13 = (ulong *)0x0;
              }
              else {
                puVar13 = *(ulong **)(puVar18[1] + (uVar19 & 0x7fffffff) * 8);
              }
            } while ((iVar16 != 0) && (((byte)puVar13[7] >> 5 & 1) != 0));
            if (puVar18 == (ulong *)0x0) {
              uVar25 = 0;
            }
            else {
              uVar25 = (uint)*puVar18;
            }
            while (uVar25 = uVar25 - 1, iVar16 < (int)uVar25) {
              if (*(long *)(*(long *)(*(long *)(param_1[0x13] + 8) + (ulong)uVar25 * 8) + 0x80) != 0
                 ) {
                puVar7 = puVar13;
                FUN_00713398();
                bVar4 = true;
                iVar6 = (int)puVar7;
                if (iVar6 != 0) {
                  if (iVar6 == 0x11) goto LAB_0070ae34;
                  *(int *)((long)param_1 + 0xac) = iVar16;
                  *(int *)(param_1 + 0x16) = iVar6;
                  param_1[0x17] = (ulong)puVar13;
                  func_0x0070c3b8();
                  bVar4 = true;
                  if ((int)puVar7 == 0) goto LAB_0070ad04;
                }
              }
            }
          } while( true );
        }
      }
      else {
        *(int *)(param_1 + 0x16) = (int)puVar7;
        uVar19 = 0;
        if (param_1[0x13] != 0) {
          func_0x0070c544();
          if (!(bool)uVar2 || (bool)uVar3) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(ulong *)(*(long *)(extraout_x8_02 + 8) + extraout_x9 * 8);
          }
        }
        param_1[0x17] = uVar19;
        func_0x0070c414();
        func_0x0070c50c();
        if ((int)puVar7 != 0) goto LAB_0070ac28;
      }
LAB_0070ac54:
      puVar18 = (ulong *)0x0;
      goto LAB_0070ad0c;
    }
  }
  else {
    param_1[0x17] = uVar19;
    *(undefined8 *)((long)param_1 + 0xac) = 0x4100000000;
    func_0x0070c3b8();
    if (iVar5 != 0) goto LAB_0070aac4;
  }
LAB_0070ad04:
  puVar18 = (ulong *)0x0;
  goto LAB_0070ad0c;
LAB_0070ad64:
  if (bVar1) {
    puVar18 = (ulong *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_0070ae0c:
    if (*(char *)(param_1[4] + 0x18) < '\0') {
      func_0x0070c49c(param_1[0xe]);
      puVar18 = puVar7;
    }
    else {
      puVar18 = (ulong *)((long)&MACH_HEADER.magic + 1);
    }
  }
  goto LAB_0070ad0c;
LAB_0070ae34:
  puVar18 = (ulong *)0x0;
  *(undefined4 *)(param_1 + 0x16) = 0x11;
  goto LAB_0070ad0c;
  while( true ) {
    puVar18 = puVar13;
    func_0x0070cc1c(puVar13,puVar20);
    if (puVar18 == (ulong *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = puVar18[1];
    }
    piVar10 = &iStack_68;
    FUN_006cceb8(piVar10,uVar19);
    if ((int)piVar10 < 0) goto LAB_0070ae34;
    puVar7 = (ulong *)CONCAT44(uStack_64,iStack_68);
    puVar8 = puVar7;
    FUN_00715c6c(puVar7,(ulong)piVar10 & 0xffffffff);
    func_0x00701ed0();
    puVar18 = puVar20;
    if ((int)puVar8 != 0) break;
LAB_0070ad80:
    puVar20 = puVar13;
    FUN_0070cc54(puVar13,0xd,puVar18);
    puVar7 = puVar20;
    if ((int)puVar20 == -1) goto LAB_0070ad64;
  }
  *(int *)((long)param_1 + 0xac) = iVar16;
  *(undefined4 *)(param_1 + 0x16) = 0x43;
  param_1[0x17] = (ulong)plVar28;
  func_0x0070c3b8();
  bVar4 = (int)puVar7 != 0;
  puVar18 = (ulong *)(ulong)bVar4;
  if (bVar4 && !bVar1) goto LAB_0070ae0c;
LAB_0070ad0c:
  if (puVar15 != (ulong *)0x0) {
    FUN_00705f10(puVar15);
  }
  if (puVar17 != (ulong *)0x0) {
    func_0x0070e584(puVar17);
  }
  if (((int)puVar18 < 1) && ((int)param_1[0x16] == 0)) {
    uVar12 = 1;
LAB_0070a384:
    *(undefined4 *)(param_1 + 0x16) = uVar12;
  }
  return puVar18;
}



/* Entry: 0070ae44; end: 0070ae7b;  */

void FUN_0070ae44(long param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00714664();
  if ((int)lVar1 != 0) {
    *param_2 = *(uint *)(param_1 + 0x38) >> 0xd & 1;
  }
  return;
}



/* Entry: 0070ae7c; end: 0070b0eb;  */

void FUN_0070ae7c(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  uint extraout_w9;
  uint extraout_w9_00;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  puVar5 = *(ulong **)(param_1 + 0x98);
  if (puVar5 == (ulong *)0x0) {
    uVar7 = 0;
    plVar6 = (long *)0x0;
    uVar11 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  else {
    uVar7 = *puVar5;
    uVar9 = (int)uVar7 - 1;
    uVar11 = (ulong)uVar9;
    *(uint *)(param_1 + 0xac) = uVar9;
    if ((ulong)(long)(int)uVar9 < uVar7) {
      plVar6 = *(long **)(puVar5[1] + (long)(int)uVar9 * 8);
    }
    else {
      plVar6 = (long *)0x0;
    }
  }
  iVar10 = (int)uVar11;
  lVar2 = param_1;
  (**(code **)(param_1 + 0x48))(param_1,plVar6,plVar6);
  plVar3 = plVar6;
  if ((int)lVar2 == 0) {
    func_0x0070c538();
    plVar8 = plVar6;
    if ((extraout_w9 >> 0x13 & 1) != 0) goto LAB_0070af6c;
    if (1 < (int)uVar7) {
      uVar9 = (int)uVar7 - 2;
      uVar11 = (ulong)uVar9;
      *(uint *)(param_1 + 0xac) = uVar9;
      puVar5 = *(ulong **)(param_1 + 0x98);
      if (puVar5 == (ulong *)0x0) goto LAB_0070b03c;
      if ((ulong)uVar9 < *puVar5) goto LAB_0070b020;
      goto LAB_0070b03c;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x15;
    *(long **)(param_1 + 0xb8) = plVar6;
    func_0x0070c414();
                    /* WARNING: Could not recover jumptable at 0x0070af40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_0070b040:
  do {
    uVar9 = (uint)uVar11;
    plVar8 = plVar6;
    do {
      do {
        plVar6 = plVar3;
        if ((int)uVar9 < 0) {
          return;
        }
        iVar10 = (int)uVar11;
        *(int *)(param_1 + 0xac) = iVar10;
        if ((plVar6 != plVar8) || (func_0x0070c538(), (extraout_w9_00 >> 0xe & 1) != 0)) {
          plVar3 = plVar8;
          FUN_00708c44();
          if (plVar3 == (long *)0x0) {
            *(undefined4 *)(param_1 + 0xb0) = 6;
            *(long **)(param_1 + 0xb8) = plVar8;
            plVar4 = plVar3;
            func_0x0070c44c();
            if ((int)plVar4 == 0) {
              return;
            }
          }
          else {
            plVar4 = plVar6;
            func_0x0070d1fc(plVar6,plVar3);
            iVar1 = (int)plVar4;
            if (iVar1 < 1) {
              *(undefined4 *)(param_1 + 0xb0) = 7;
              *(long **)(param_1 + 0xb8) = plVar6;
              func_0x0070c414();
              (*UNRECOVERED_JUMPTABLE)();
              if (iVar1 == 0) {
                func_0x006df294(plVar3);
                return;
              }
            }
          }
          func_0x006df294(plVar3);
          func_0x0070c538();
        }
LAB_0070af6c:
        iVar1 = (int)**(undefined8 **)(*plVar6 + 0x20);
        func_0x0070c48c();
        if (iVar1 == 0) {
          func_0x0070c43c(0xd);
LAB_0070afac:
          func_0x0070c40c();
          if (iVar1 == 0) {
            return;
          }
        }
        else if (0 < iVar1) {
          func_0x0070c43c(9);
          iVar1 = 0;
          goto LAB_0070afac;
        }
        iVar1 = (int)*(undefined8 *)(*(long *)(*plVar6 + 0x20) + 8);
        func_0x0070c48c();
        if (iVar1 == 0) {
          func_0x0070c43c(0xe);
LAB_0070afe4:
          func_0x0070c40c();
          if (iVar1 == 0) {
            return;
          }
        }
        else if (iVar1 < 0) {
          func_0x0070c43c(10);
          iVar1 = 0;
          goto LAB_0070afe4;
        }
        *(long **)(param_1 + 0xb8) = plVar6;
        *(long **)(param_1 + 0xc0) = plVar8;
        iVar1 = 1;
        func_0x0070c44c();
        if (iVar1 == 0) {
          return;
        }
        uVar9 = iVar10 - 1;
        uVar11 = (ulong)uVar9;
        plVar3 = plVar6;
      } while (iVar10 < 1);
      puVar5 = *(ulong **)(param_1 + 0x98);
      if (puVar5 == (ulong *)0x0) goto LAB_0070b03c;
      plVar8 = plVar6;
      plVar3 = (long *)0x0;
    } while (*puVar5 <= uVar11);
LAB_0070b020:
    plVar3 = *(long **)(puVar5[1] + uVar11 * 8);
  } while( true );
LAB_0070b03c:
  plVar3 = (long *)0x0;
  goto LAB_0070b040;
}



/* Entry: 0070b0ec; end: 0070b1fb;  */

undefined4 FUN_0070b0ec(int *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uStack_2c;
  undefined8 uStack_28;
  
  if (param_1[1] == 0x18) {
    if (*param_1 != 0xf) {
      return 0;
    }
    lVar3 = 0xe;
  }
  else {
    if (param_1[1] != 0x17) {
      return 0;
    }
    if (*param_1 != 0xd) {
      return 0;
    }
    lVar3 = 0xc;
  }
  lVar4 = lVar3;
  pbVar5 = *(byte **)(param_1 + 2);
  while (lVar4 != 0) {
    bVar1 = *pbVar5;
    lVar4 = lVar4 + -1;
    pbVar5 = pbVar5 + 1;
    if (9 < bVar1 - 0x30) {
      return 0;
    }
  }
  if ((*(byte **)(param_1 + 2))[lVar3] != 0x5a) {
    return 0;
  }
  uStack_28 = 0;
  if (param_2 == (undefined8 *)0x0) {
    _time(&uStack_28);
  }
  else {
    uStack_28 = *param_2;
  }
  lVar3 = 0;
  FUN_006cd5b4(0,uStack_28,0,0);
  if (lVar3 != 0) {
    puVar2 = &uStack_28;
    FUN_006cd68c(puVar2,&uStack_2c,param_1,lVar3);
    if ((int)puVar2 != 0) {
      uVar6 = 1;
      if (-1 < (int)((uint)uStack_28 | uStack_2c)) {
        uVar6 = 0xffffffff;
      }
      goto LAB_0070b1f0;
    }
  }
  uVar6 = 0;
LAB_0070b1f0:
  func_0x006cd5a8(lVar3);
  return uVar6;
}



/* Entry: 0070b1fc; end: 0070b2d7;  */

bool FUN_0070b1fc(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00709034(param_1,param_3,0xffffffff);
  if ((int)lVar4 < 0) {
LAB_0070b254:
    lVar4 = 0;
LAB_0070b258:
    lVar3 = param_2;
    func_0x00709034(param_2,param_3,0xffffffff);
    if ((int)lVar3 < 0) {
LAB_0070b2a0:
      lVar3 = 0;
    }
    else {
      lVar2 = param_2;
      func_0x0070c4d4();
      if ((int)lVar2 != -1) goto LAB_0070b280;
      func_0x00709040(param_2,lVar3);
      if (param_2 == 0) goto LAB_0070b2a0;
      lVar3 = *(long *)(param_2 + 0x10);
    }
    if (lVar4 == 0 && lVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((lVar4 != 0) && (lVar3 != 0)) {
        FUN_006ce48c(lVar4);
        bVar1 = (int)lVar4 == 0;
      }
    }
  }
  else {
    lVar3 = param_1;
    func_0x0070c4d4();
    if ((int)lVar3 == -1) {
      func_0x00709040(param_1,lVar4);
      if (param_1 == 0) goto LAB_0070b254;
      lVar4 = *(long *)(param_1 + 0x10);
      goto LAB_0070b258;
    }
LAB_0070b280:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0070b2d8; end: 0070b2ef;  */

undefined4 FUN_0070b2d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* Entry: 0070b2f0; end: 0070b3cf;  */

long FUN_0070b2f0(void)

{
  long lVar1;
  
  lVar1 = 0xe8;
  FUN_00701e90();
  if (lVar1 == 0) {
    func_0x0070c3dc();
  }
  else {
    func_0x0070c4f8();
  }
  return lVar1;
}



/* Entry: 0070b3d0; end: 0070b59f;  */

undefined8 FUN_0070b3d0(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x10;
  long lVar3;
  
  plVar1 = param_1;
  _bzero(param_1,0xe8);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[0x1c] = 0;
  if (param_2 == 0) {
    func_0x0070c3f4(0xb,0,0x43);
  }
  else {
    FUN_0070c550();
    param_1[4] = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      param_1[7] = *(long *)(param_2 + 0xf0);
      param_1[0x11] = *(long *)(param_2 + 0x138);
      FUN_0070c654();
      if ((int)plVar1 != 0) {
        lVar3 = param_1[4];
        puVar2 = &UNK_009122d1;
        func_0x0070cb04(&UNK_009122d1);
        FUN_0070c654(lVar3,puVar2);
        if ((int)lVar3 != 0) {
          func_0x0070c4c8(0x70b540);
          func_0x0070c520();
          param_1[8] = extraout_x9;
          param_1[9] = extraout_x8;
          func_0x0070c4c8(FUN_0070b5a0);
          func_0x0070c520();
          param_1[6] = extraout_x9_00;
          param_1[7] = extraout_x8_00;
          func_0x0070c4c8(FUN_0070b5a4);
          param_1[10] = extraout_x8_01;
          param_1[0xb] = extraout_x10;
          func_0x0070c4c8(FUN_0070b7f0);
          func_0x0070c520();
          param_1[0xc] = extraout_x8_02;
          param_1[0xd] = extraout_x9_01;
          func_0x0070c4c8(FUN_00709774);
          func_0x0070c520();
          param_1[0xf] = extraout_x8_03;
          param_1[0x10] = extraout_x9_02;
          param_1[0xe] = 0x70bb34;
          return 1;
        }
      }
    }
  }
  FUN_006e29e4(0xb2a370,param_1,param_1 + 0x1c);
  if (param_1[4] != 0) {
    func_0x0070c628();
  }
  func_0x0070c4f8();
  func_0x0070c3dc();
  return 0;
}



/* Entry: 0070b5a0; end: 0070b5a3;  */

void FUN_0070b5a0(void)

{
  return;
}



/* Entry: 0070b5a4; end: 0070b7ef;  */

undefined8 FUN_0070b5a4(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar4 >> 2 & 1) == 0) {
LAB_0070b5e0:
    uVar2 = 1;
  }
  else {
    if ((uVar4 >> 3 & 1) == 0) {
      if (*(long *)(param_1 + 0xd8) != 0) goto LAB_0070b5e0;
      lVar8 = 0;
    }
    else if (*(int **)(param_1 + 0x98) == (int *)0x0) {
      lVar8 = -1;
    }
    else {
      lVar8 = (long)(**(int **)(param_1 + 0x98) + -1);
    }
    uVar9 = 0;
    lVar3 = param_1;
    do {
      if (lVar8 < (long)uVar9) goto LAB_0070b5e0;
      *(int *)(param_1 + 0xac) = (int)uVar9;
      puVar5 = *(ulong **)(param_1 + 0x98);
      if ((puVar5 == (ulong *)0x0) || (*puVar5 <= uVar9)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(puVar5[1] + uVar9 * 8);
      }
      lVar7 = 0;
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      iVar10 = 0;
      do {
        lStack_88 = 0;
        iVar6 = (int)lVar7;
        if (iVar10 == 0x807f) {
          lVar3 = 0;
          goto LAB_0070b7cc;
        }
        if (*(long *)(param_1 + 0x58) == 0) {
          uStack_68 = 0;
          uStack_6c = 0;
          lStack_80 = 0;
          lStack_78 = 0;
          iStack_70 = iVar10;
          func_0x0070c4ac();
          FUN_0070bc74();
          if ((int)lVar3 == 0) {
            func_0x0070c52c(*(undefined8 *)(param_1 + 0x80));
            (*extraout_x8)();
            if ((lVar3 != 0) || (lStack_78 == 0)) {
              func_0x0070c4ac();
              FUN_0070bc74();
              FUN_00705f40(lVar3,0x70c39c,0x70d2d4);
              goto LAB_0070b6f0;
            }
          }
          else {
LAB_0070b6f0:
            if (lStack_78 == 0) {
              lVar3 = 0;
              break;
            }
          }
          *(undefined8 *)(param_1 + 0xc0) = uStack_68;
          *(undefined4 *)(param_1 + 0xd0) = uStack_6c;
          *(int *)(param_1 + 0xd4) = iStack_70;
          lStack_88 = lStack_78;
          lVar7 = lStack_80;
        }
        else {
          lVar3 = param_1;
          func_0x0070c494(param_1,&lStack_88);
          lVar7 = 0;
          if ((int)lVar3 == 0) break;
        }
        lVar3 = lVar7;
        *(long *)(param_1 + 200) = lStack_88;
        lVar7 = param_1;
        (**(code **)(param_1 + 0x60))();
        if ((int)lVar7 == 0) {
LAB_0070b7c0:
          iVar6 = 0;
          goto LAB_0070b7cc;
        }
        if (lVar3 == 0) {
LAB_0070b770:
          lVar7 = param_1;
          func_0x0070c494(*(undefined8 *)(param_1 + 0x68),param_1,lStack_88);
          iVar6 = 0;
          if ((int)lVar7 == 0) goto LAB_0070b7cc;
        }
        else {
          func_0x0070c52c(*(undefined8 *)(param_1 + 0x60));
          (*extraout_x8_00)();
          if ((int)lVar7 == 0) goto LAB_0070b7c0;
          func_0x0070c52c(*(undefined8 *)(param_1 + 0x68));
          func_0x0070c494();
          if ((int)lVar7 != 2) {
            iVar6 = 0;
            if ((int)lVar7 != 0) goto LAB_0070b770;
            goto LAB_0070b7cc;
          }
        }
        func_0x0070d2d4(lStack_88);
        func_0x0070d2d4();
        lStack_88 = 0;
        bVar1 = iVar10 != *(int *)(param_1 + 0xd4);
        iVar10 = *(int *)(param_1 + 0xd4);
      } while (bVar1);
      iVar6 = (int)lVar3;
      func_0x0070c3a4(3);
      lVar3 = 0;
LAB_0070b7cc:
      func_0x0070d2d4(lStack_88);
      func_0x0070d2d4();
      *(undefined8 *)(param_1 + 200) = 0;
      uVar9 = uVar9 + 1;
    } while (iVar6 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 0070b7f0; end: 0070baa3;  */

bool FUN_0070b7f0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  code *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar12;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar13;
  long lVar14;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f0;
  long *plStack_90;
  undefined8 *puStack_50;
  
  piVar10 = (int *)param_1[0x13];
  if (piVar10 == (int *)0x0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *piVar10 - 1;
  }
  lVar14 = param_1[0x18];
  puVar6 = param_1;
  if (lVar14 == 0) {
    uVar1 = *(uint *)((long)param_1 + 0xac);
    bVar2 = uVar12 <= uVar1;
    bVar3 = uVar1 == uVar12;
    if ((int)uVar1 < (int)uVar12) {
      if ((piVar10 != (int *)0x0) && (func_0x0070c544(), bVar2 && !bVar3)) {
        lVar14 = *(long *)(*(long *)(extraout_x8 + 8) + extraout_x9 * 8);
        goto LAB_0070b9b4;
      }
      lVar14 = 0;
    }
    else {
      if ((piVar10 == (int *)0x0) || (func_0x0070c544(), !bVar2 || bVar3)) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(*(long *)(extraout_x8_00 + 8) + extraout_x9_00 * 8);
      }
      func_0x0070c504(param_1[9],param_1,lVar14);
      if ((int)puVar6 == 0) {
        *(undefined4 *)(param_1 + 0x16) = 0x21;
        func_0x0070c40c(param_1[7]);
        if ((int)puVar6 != 0) goto LAB_0070b9b4;
        goto LAB_0070b9c0;
      }
LAB_0070b9b4:
      if (lVar14 != 0) goto LAB_0070b830;
    }
LAB_0070b9b8:
    bVar3 = true;
  }
  else {
LAB_0070b830:
    iVar4 = (int)puVar6;
    if (*(long *)(param_2 + 0x40) == 0) {
      if ((((*(byte *)(lVar14 + 0x38) >> 1 & 1) == 0) || ((*(byte *)(lVar14 + 0x40) >> 1 & 1) != 0))
         || (func_0x0070c3a4(0x23), iVar4 != 0)) {
        uVar12 = *(uint *)(param_1 + 0x1a);
        if ((uVar12 >> 7 & 1) == 0) {
          func_0x0070c3a4(0x2c);
          if (iVar4 == 0) goto LAB_0070b9c0;
          uVar12 = *(uint *)(param_1 + 0x1a);
        }
        if ((uVar12 >> 3 & 1) == 0) {
          if (param_1[0x1b] == 0) {
            puVar7 = auStack_128;
            FUN_0070b3d0(puVar7,*param_1,param_1[0x18],param_1[2]);
            iVar4 = 0;
            if ((int)puVar7 != 0) {
              uStack_110 = param_1[3];
              lVar5 = param_1[4];
              if (lStack_108 != 0) {
                func_0x0070c628();
              }
              uStack_f0 = param_1[7];
              iVar4 = (int)auStack_128;
              lStack_108 = lVar5;
              puStack_50 = param_1;
              FUN_0070a2d0();
              if (iVar4 < 1) {
                iVar4 = (int)auStack_128;
                func_0x0070b354();
              }
              else {
                plVar13 = (long *)param_1[0x13];
                if ((plVar13 == (long *)0x0) || (*plVar13 == 0)) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(plVar13[1] + *plVar13 * 8 + -8);
                }
                if ((plStack_90 == (long *)0x0) || (*plStack_90 == 0)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(plStack_90[1] + *plStack_90 * 8 + -8);
                }
                FUN_00708bc8(uVar8,uVar9);
                iVar4 = (int)auStack_128;
                func_0x0070b354();
                if ((int)uVar8 == 0) goto LAB_0070b930;
              }
            }
          }
          func_0x0070c3a4(0x36);
          if (iVar4 == 0) goto LAB_0070b9c0;
        }
LAB_0070b930:
        if (((*(byte *)(param_2 + 0x30) >> 1 & 1) == 0) || (func_0x0070c3a4(0x29), iVar4 != 0))
        goto LAB_0070b838;
      }
    }
    else {
LAB_0070b838:
      if (((*(byte *)(param_1 + 0x1a) >> 6 & 1) != 0) ||
         (puVar6 = param_1, FUN_0070c2d8(param_1,param_2,1), (int)puVar6 != 0)) {
        FUN_00708c44();
        if (lVar14 == 0) {
          *(undefined4 *)(param_1 + 0x16) = 6;
          lVar5 = lVar14;
          func_0x0070c40c(param_1[7]);
          bVar3 = (int)lVar5 != 0;
          goto LAB_0070b9c8;
        }
        lVar5 = param_2;
        FUN_00708ea8(param_2,lVar14,*(undefined8 *)(param_1[4] + 0x18));
        iVar4 = (int)lVar5;
        if (iVar4 == 0) {
LAB_0070b888:
          pcVar11 = *(code **)(*(long *)(param_2 + 0x68) + 0x20);
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(param_2,lVar14);
            iVar4 = (int)param_2;
            if (0 < iVar4) goto LAB_0070b9b8;
          }
          func_0x0070c3a4(8);
          if (iVar4 != 0) goto LAB_0070b9b8;
        }
        else {
          *(int *)(param_1 + 0x16) = iVar4;
          func_0x0070c3b8();
          if (iVar4 != 0) goto LAB_0070b888;
        }
        bVar3 = false;
        goto LAB_0070b9c8;
      }
    }
LAB_0070b9c0:
    bVar3 = false;
    lVar14 = 0;
  }
LAB_0070b9c8:
  func_0x006df294(lVar14);
  return bVar3;
}



/* Entry: 0070baa4; end: 0070bc23;  */

void FUN_0070baa4(long param_1,long param_2,undefined8 param_3)

{
  long lStack_38;
  
  if ((((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) != 0) ||
      ((*(byte *)(param_2 + 0x1d) >> 1 & 1) == 0)) || (func_0x0070c3a4(0x24), (int)param_1 != 0)) {
    func_0x0070d2f4(param_2,&lStack_38,param_3);
    if (((int)param_2 != 0) && (*(int *)(lStack_38 + 0x20) != 8)) {
      func_0x0070c3a4(0x17);
    }
  }
  return;
}



/* Entry: 0070bc24; end: 0070bc37;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070bc24(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      FUN_0070c39c(0x70e584);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070bc38; end: 0070bc73;  */

undefined8 FUN_0070bc38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  
  func_0x0070cb04();
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    return 1;
  }
  uVar9 = *(ulong *)(param_2 + 0x10) | *(ulong *)(lVar1 + 0x10);
  uVar8 = (uint)uVar9;
  if ((uVar8 >> 4 & 1) != 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    return 1;
  }
  iVar3 = *(int *)(param_2 + 0x20);
  if ((uVar8 >> 1 & 1) == 0) {
    if (iVar3 == 0) {
LAB_0070c6d0:
      iVar3 = *(int *)(param_2 + 0x24);
      if (iVar3 != 0) {
        if ((uVar9 & 1) == 0) goto LAB_0070c6dc;
LAB_0070c6e4:
        *(int *)(lVar1 + 0x24) = iVar3;
      }
    }
    else {
      if (((uVar9 & 1) != 0) || (*(int *)(lVar1 + 0x20) == 0)) {
        *(int *)(lVar1 + 0x20) = iVar3;
        goto LAB_0070c6d0;
      }
      iVar3 = *(int *)(param_2 + 0x24);
      if (iVar3 != 0) {
LAB_0070c6dc:
        if (*(int *)(lVar1 + 0x24) == 0) goto LAB_0070c6e4;
      }
    }
    if ((*(int *)(param_2 + 0x28) != -1) && (((uVar9 & 1) != 0 || (*(int *)(lVar1 + 0x28) == -1))))
    {
      *(int *)(lVar1 + 0x28) = *(int *)(param_2 + 0x28);
    }
    uVar4 = *(ulong *)(lVar1 + 0x18);
    if (((uint)uVar4 >> 1 & 1) == 0) goto LAB_0070c710;
  }
  else {
    *(int *)(lVar1 + 0x20) = iVar3;
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    uVar4 = *(ulong *)(lVar1 + 0x18);
LAB_0070c710:
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar4 = uVar4 & 0xfffffffffffffffd;
    *(ulong *)(lVar1 + 0x18) = uVar4;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    uVar4 = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  *(ulong *)(lVar1 + 0x18) = *(ulong *)(param_2 + 0x18) | uVar4;
  puVar6 = *(ulong **)(param_2 + 0x30);
  if ((uVar8 >> 1 & 1) == 0) {
    if (puVar6 == (ulong *)0x0) goto LAB_0070c7dc;
    if (((uVar9 & 1) != 0) || (*(long *)(lVar1 + 0x30) == 0)) goto LAB_0070c75c;
    if (*(long *)(param_2 + 0x38) != 0) {
LAB_0070c7e8:
      if (*(long *)(lVar1 + 0x38) == 0) goto LAB_0070c7f0;
    }
LAB_0070c840:
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar5 == 0) {
LAB_0070c8a4:
      lVar5 = *(long *)(param_2 + 0x60);
      if (lVar5 == 0) goto LAB_0070c8e0;
      if ((uVar9 & 1) != 0) goto LAB_0070c8c0;
    }
    else {
      if (((uVar9 & 1) != 0) || (*(long *)(lVar1 + 0x50) == 0)) goto LAB_0070c864;
      lVar5 = *(long *)(param_2 + 0x60);
      if (lVar5 == 0) goto LAB_0070c8e0;
    }
    if (*(long *)(lVar1 + 0x60) != 0) goto LAB_0070c8e0;
  }
  else {
LAB_0070c75c:
    lVar5 = *(long *)(lVar1 + 0x30);
    if (lVar5 != 0) {
      func_0x0070c96c();
    }
    if (puVar6 == (ulong *)0x0) {
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
    else {
      FUN_00705ed8();
      *(long *)(lVar1 + 0x30) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = 0;
      while (uVar4 < *puVar6) {
        lVar5 = *(long *)(puVar6[1] + uVar4 * 8);
        FUN_0070224c();
        if (lVar5 == 0) {
          return 0;
        }
        lVar2 = *(long *)(lVar1 + 0x30);
        func_0x00706268(lVar2,lVar5);
        uVar4 = uVar4 + 1;
        if (lVar2 == 0) {
          func_0x006cc9a8(lVar5);
          return 0;
        }
      }
      *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) | 0x80;
    }
    if ((uVar8 >> 1 & 1) == 0) {
LAB_0070c7dc:
      if (*(long *)(param_2 + 0x38) == 0) goto LAB_0070c840;
      if ((uVar9 & 1) == 0) goto LAB_0070c7e8;
    }
LAB_0070c7f0:
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_0070c900();
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 != 0) {
      FUN_00706358(lVar5,0x70cb68,0x70c918,FUN_0070cb64,0x70c914);
      *(long *)(lVar1 + 0x38) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar8 >> 1 & 1) == 0) goto LAB_0070c840;
    lVar5 = *(long *)(param_2 + 0x50);
LAB_0070c864:
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    lVar2 = lVar5;
    FUN_0070ca8c(lVar5,uVar7);
    if (lVar2 != 0) goto LAB_0070c878;
    lVar2 = lVar1 + 0x50;
    func_0x0070caa4(lVar2,lVar1 + 0x58,lVar5,uVar7);
    if ((int)lVar2 == 0) goto LAB_0070c878;
    if ((uVar8 >> 1 & 1) == 0) goto LAB_0070c8a4;
    lVar5 = *(long *)(param_2 + 0x60);
  }
LAB_0070c8c0:
  if (*(long *)(param_2 + 0x68) == 0x10 || *(long *)(param_2 + 0x68) == 4) {
    lVar2 = lVar1 + 0x60;
    func_0x0070caa4(lVar2,lVar1 + 0x68,lVar5);
    if ((int)lVar2 != 0) {
LAB_0070c8e0:
      *(undefined1 *)(lVar1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
      return 1;
    }
  }
LAB_0070c878:
  *(undefined1 *)(lVar1 + 0x70) = 1;
  return 0;
}



/* Entry: 0070bc74; end: 0070c2d7;  */

bool FUN_0070bc74(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,ulong *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long extraout_x8;
  ulong *puVar10;
  uint uVar11;
  long extraout_x9;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uStack_b8;
  undefined8 uStack_a8;
  uint uStack_9c;
  long *plStack_98;
  uint uStack_84;
  uint uStack_74;
  int iStack_68;
  int iStack_64;
  
  uVar16 = 0;
  uVar20 = 0;
  uStack_9c = 0;
  plStack_98 = (long *)0x0;
  uStack_a8 = 0;
  uVar7 = *param_5;
  plVar8 = *(long **)(param_1 + 0xb8);
  uStack_74 = uVar7;
  while (param_7 != (ulong *)0x0) {
    if (*param_7 <= uVar20) {
      uVar7 = uStack_74;
      if (plStack_98 != (long *)0x0) {
        if (*param_2 != 0) {
          func_0x0070d2d4();
        }
        *param_2 = (long)plStack_98;
        *param_4 = uStack_a8;
        *param_5 = uStack_74;
        *param_6 = uStack_9c;
        FUN_00705a60(plStack_98 + 3);
        if (*param_3 != 0) {
          func_0x0070d2d4();
          *param_3 = 0;
        }
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) != 0) &&
           (((*(uint *)(*(long *)(param_1 + 0xb8) + 0x38) | *(uint *)((long)plStack_98 + 0x1c)) >>
             0xc & 1) != 0)) {
          uVar20 = 0;
          goto LAB_0070c1e4;
        }
      }
      break;
    }
    plVar21 = *(long **)(param_7[1] + uVar20 * 8);
    uVar6 = *(uint *)(plVar21 + 6);
    if ((uVar6 >> 1 & 1) == 0) {
      uStack_84 = *param_6;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
        if ((uVar6 & 0x60) == 0) goto LAB_0070bd2c;
      }
      else if ((uVar6 >> 6 & 1) == 0) {
        if (plVar21[8] == 0) {
LAB_0070bd2c:
          uVar3 = *(undefined8 *)(*plVar8 + 0x18);
          FUN_007089ec(uVar3,*(undefined8 *)(*plVar21 + 0x10));
          if ((int)uVar3 == 0) {
            uVar6 = 0x20;
          }
          else {
            if ((*(byte *)(plVar21 + 6) >> 5 & 1) == 0) goto LAB_0070bd54;
            uVar6 = 0;
          }
          uVar6 = (*(uint *)((long)plVar21 + 0x1c) >> 1 & 0x100 | uVar6) ^ 0x100;
          lVar19 = param_1;
          FUN_0070c2d8(param_1,plVar21,0);
          if ((int)lVar19 != 0) {
            uVar6 = uVar6 | 0x40;
          }
          plVar9 = *(long **)(param_1 + 0x98);
          if (plVar9 == (long *)0x0) {
            uVar14 = 0xffffffffffffffff;
          }
          else {
            uVar14 = *plVar9 - 1;
          }
          uVar17 = (ulong)*(int *)(param_1 + 0xac);
          bVar1 = uVar17 <= uVar14;
          bVar2 = uVar14 == uVar17;
          if ((plVar9 == (long *)0x0) || (func_0x0070c544(), !bVar1 || bVar2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(*(long *)(extraout_x8 + 8) + extraout_x9 * 8);
          }
          func_0x0070c468();
          if (((int)lVar19 == 0) && ((uVar6 >> 5 & 1) != 0)) {
            uVar6 = uVar6 | 0x1c;
            uVar16 = uVar3;
          }
          else {
            if (uVar14 != uVar17) {
              uVar17 = uVar17 + 1;
            }
            do {
              uVar17 = uVar17 + 1;
              if ((*(int **)(param_1 + 0x98) == (int *)0x0) ||
                 ((long)**(int **)(param_1 + 0x98) <= (long)uVar17)) {
                if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) goto LAB_0070be4c;
                uVar14 = 0;
                goto LAB_0070be80;
              }
              func_0x0070c474();
            } while (((int)lVar19 != 0) || (func_0x0070c468(), (int)lVar19 != 0));
            uVar6 = uVar6 | 0xc;
            uVar16 = uVar3;
          }
LAB_0070be4c:
          if ((uVar6 >> 2 & 1) != 0) {
            uVar11 = *(uint *)(plVar21 + 6);
            if ((uVar11 >> 4 & 1) == 0) {
              if ((*(byte *)(plVar8 + 7) >> 4 & 1) == 0) {
                uVar11 = uVar11 >> 3;
              }
              else {
                uVar11 = uVar11 >> 2;
              }
              if ((uVar11 & 1) == 0) {
                uVar11 = *(uint *)((long)plVar21 + 0x34);
                for (uVar14 = 0;
                    (puVar10 = (ulong *)plVar8[0xe], puVar10 != (ulong *)0x0 && (uVar14 < *puVar10))
                    ; uVar14 = uVar14 + 1) {
                  puVar18 = *(undefined8 **)(puVar10[1] + uVar14 * 8);
                  puVar10 = (ulong *)puVar18[2];
                  if (puVar10 != (ulong *)0x0) {
                    uVar17 = 0;
                    uVar3 = *(undefined8 *)(*plVar21 + 0x10);
                    if (puVar10 == (ulong *)0x0) goto LAB_0070bf04;
                    do {
                      uVar12 = *puVar10;
                      while( true ) {
                        if (uVar12 <= uVar17) goto LAB_0070c068;
                        piVar13 = *(int **)(puVar10[1] + uVar17 * 8);
                        if (*piVar13 == 4) {
                          uVar4 = *(undefined8 *)(piVar13 + 2);
                          FUN_007089ec(uVar4,uVar3);
                          if ((int)uVar4 == 0) goto LAB_0070bf4c;
                          puVar10 = (ulong *)puVar18[2];
                        }
                        uVar17 = uVar17 + 1;
                        if (puVar10 != (ulong *)0x0) break;
LAB_0070bf04:
                        uVar12 = 0;
                      }
                    } while( true );
                  }
                  if ((uVar6 >> 5 & 1) != 0) {
LAB_0070bf4c:
                    if ((((undefined8 *)plVar21[5] == (undefined8 *)0x0) ||
                        (piVar13 = (int *)*puVar18, piVar13 == (int *)0x0)) ||
                       (piVar15 = *(int **)plVar21[5], piVar15 == (int *)0x0)) {
LAB_0070c078:
                      uVar11 = *(uint *)(puVar18 + 3) & uVar11;
                      goto LAB_0070c08c;
                    }
                    if (*piVar13 == 1) {
                      lVar19 = *(long *)(piVar13 + 4);
                      if (lVar19 != 0) {
                        if (*piVar15 == 1) {
                          if ((*(long *)(piVar15 + 4) != 0) && (FUN_007089ec(), (int)lVar19 == 0))
                          goto LAB_0070c078;
                        }
                        else {
LAB_0070c024:
                          puVar10 = *(ulong **)(piVar15 + 2);
                          if (puVar10 != (ulong *)0x0) {
                            for (uVar17 = 0; uVar17 < *puVar10; uVar17 = uVar17 + 1) {
                              piVar13 = *(int **)(puVar10[1] + uVar17 * 8);
                              if ((*piVar13 == 4) &&
                                 (lVar5 = lVar19, FUN_007089ec(lVar19,*(undefined8 *)(piVar13 + 2)),
                                 (int)lVar5 == 0)) goto LAB_0070c078;
                            }
                          }
                        }
                      }
                    }
                    else if (*piVar15 == 1) {
                      lVar19 = *(long *)(piVar15 + 4);
                      piVar15 = piVar13;
                      if (lVar19 != 0) goto LAB_0070c024;
                    }
                    else {
                      for (uStack_b8 = 0;
                          (puVar10 = *(ulong **)(piVar13 + 2), puVar10 != (ulong *)0x0 &&
                          (uStack_b8 < *puVar10)); uStack_b8 = uStack_b8 + 1) {
                        uVar17 = 0;
                        uVar3 = *(undefined8 *)(puVar10[1] + uStack_b8 * 8);
                        while ((puVar10 = *(ulong **)(piVar15 + 2), puVar10 != (ulong *)0x0 &&
                               (uVar17 < *puVar10))) {
                          uVar4 = uVar3;
                          FUN_00712990(uVar3,*(undefined8 *)(puVar10[1] + uVar17 * 8));
                          uVar17 = uVar17 + 1;
                          if ((int)uVar4 == 0) goto LAB_0070c078;
                        }
                      }
                    }
                  }
LAB_0070c068:
                }
                if ((long *)plVar21[5] == (long *)0x0) {
                  if ((uVar6 >> 5 & 1) != 0) goto LAB_0070c08c;
                }
                else if (((uVar6 >> 5 & 1) != 0) && (*(long *)plVar21[5] == 0)) {
LAB_0070c08c:
                  if ((uVar11 & (uStack_84 ^ 0xffffffff)) == 0) goto LAB_0070bd54;
                  uStack_84 = uVar11 | uStack_84;
                  uVar6 = uVar6 | 0x80;
                }
              }
            }
            if (((int)uStack_74 <= (int)uVar6) && (uVar6 != 0)) {
              if ((uVar6 == uStack_74) && (plStack_98 != (long *)0x0)) {
                piVar13 = &iStack_64;
                FUN_006cd68c(piVar13,&iStack_68,*(undefined8 *)(*plStack_98 + 0x18),
                             *(undefined8 *)(*plVar21 + 0x18));
                if (((int)piVar13 == 0) || (uVar6 = uStack_74, iStack_64 < 1 && iStack_68 < 1))
                goto LAB_0070bd54;
              }
              uStack_74 = uVar6;
              uStack_9c = uStack_84;
              uStack_a8 = uVar16;
              plStack_98 = plVar21;
            }
          }
        }
      }
      else if ((*(uint *)((long)plVar21 + 0x34) & (uStack_84 ^ 0xffffffff)) != 0) goto LAB_0070bd2c;
    }
LAB_0070bd54:
    uVar20 = uVar20 + 1;
  }
  goto LAB_0070c2b0;
LAB_0070c1e4:
  if (*param_7 <= uVar20) goto LAB_0070c2a4;
  plVar8 = *(long **)(param_7[1] + uVar20 * 8);
  if ((plVar8[8] != 0) && (plStack_98[7] != 0)) {
    uVar16 = *(undefined8 *)(*plStack_98 + 0x10);
    FUN_007089ec(uVar16,*(undefined8 *)(*plVar8 + 0x10));
    if (((int)uVar16 == 0) &&
       ((plVar21 = plVar8, FUN_0070b1fc(plVar8,plStack_98,0x5a), (int)plVar21 != 0 &&
        (plVar21 = plVar8, FUN_0070b1fc(plVar8,plStack_98,0x302), (int)plVar21 != 0)))) {
      lVar19 = plVar8[8];
      FUN_006cbb40(lVar19,plStack_98[7]);
      if ((int)lVar19 < 1) {
        lVar19 = plVar8[7];
        FUN_006cbb40(lVar19,plStack_98[7]);
        if (0 < (int)lVar19) {
          FUN_0070c2d8(param_1,plVar8,0);
          if ((int)param_1 != 0) {
            *param_5 = *param_5 | 2;
          }
          FUN_00705a60(plVar8 + 3);
          goto LAB_0070c2a8;
        }
      }
    }
  }
  uVar20 = uVar20 + 1;
  goto LAB_0070c1e4;
LAB_0070be80:
  if ((*(ulong **)(param_1 + 0x10) == (ulong *)0x0) || (**(ulong **)(param_1 + 0x10) <= uVar14))
  goto LAB_0070be4c;
  func_0x0070c474();
  if (((int)lVar19 == 0) && (func_0x0070c468(), (int)lVar19 == 0)) {
    uVar6 = uVar6 | 4;
    uVar16 = uVar3;
    goto LAB_0070be4c;
  }
  uVar14 = uVar14 + 1;
  goto LAB_0070be80;
LAB_0070c2a4:
  plVar8 = (long *)0x0;
LAB_0070c2a8:
  *param_3 = (long)plVar8;
LAB_0070c2b0:
  return 0x1bf < (int)uVar7;
}



/* Entry: 0070c2d8; end: 0070c39b;  */

void FUN_0070c2d8(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    *(long **)(param_1 + 200) = param_2;
  }
  func_0x0070c538();
  iVar1 = (int)*(undefined8 *)(*param_2 + 0x18);
  func_0x0070c48c();
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar3 = 0xf;
LAB_0070c338:
    func_0x0070c3a4(uVar3);
    if (iVar1 == 0) {
      return;
    }
  }
  else if (0 < iVar1) {
    if (param_3 == 0) {
      return;
    }
    uVar3 = 0xb;
    goto LAB_0070c338;
  }
  lVar2 = *(long *)(*param_2 + 0x20);
  if (lVar2 != 0) {
    func_0x0070c48c();
    iVar1 = (int)lVar2;
    if (iVar1 == 0) {
      if (param_3 == 0) {
        return;
      }
      uVar3 = 0x10;
    }
    else {
      if ((-1 < iVar1) || ((*(byte *)(param_1 + 0xd0) >> 1 & 1) != 0)) goto joined_r0x0070c36c;
      if (param_3 == 0) {
        return;
      }
      uVar3 = 0xc;
    }
    func_0x0070c3a4(uVar3);
    param_3 = iVar1;
  }
joined_r0x0070c36c:
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 0070c39c; end: 0070c54f;  */

void FUN_0070c39c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070c4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070c550; end: 0070c653;  */

char * FUN_0070c550(void)

{
  char *pcVar1;
  
  pcVar1 = section_00000068.segname;
  FUN_00701e90();
  if (pcVar1 != (char *)0x0) {
    *(undefined8 *)(pcVar1 + 0x70) = 0;
    *(undefined8 *)(pcVar1 + 0x58) = 0;
    *(undefined8 *)(pcVar1 + 0x50) = 0;
    *(undefined8 *)(pcVar1 + 0x68) = 0;
    *(undefined8 *)(pcVar1 + 0x60) = 0;
    *(undefined8 *)(pcVar1 + 0x38) = 0;
    *(undefined8 *)(pcVar1 + 0x30) = 0;
    *(undefined8 *)(pcVar1 + 0x48) = 0;
    *(undefined8 *)(pcVar1 + 0x40) = 0;
    *(qword *)(pcVar1 + 0x18) = 0;
    *(qword *)(pcVar1 + 0x10) = 0;
    *(undefined8 *)(pcVar1 + 0x28) = 0;
    *(undefined8 *)(pcVar1 + 0x20) = 0;
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    func_0x0070c59c(pcVar1);
  }
  return pcVar1;
}



/* Entry: 0070c654; end: 0070c8ff;  */

undefined8 FUN_0070c654(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  uVar7 = (uint)uVar8;
  if ((uVar7 >> 4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    return 1;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  if ((uVar7 >> 1 & 1) == 0) {
    if (iVar2 == 0) {
LAB_0070c6d0:
      iVar2 = *(int *)(param_2 + 0x24);
      if (iVar2 != 0) {
        if ((uVar8 & 1) == 0) goto LAB_0070c6dc;
LAB_0070c6e4:
        *(int *)(param_1 + 0x24) = iVar2;
      }
    }
    else {
      if (((uVar8 & 1) != 0) || (*(int *)(param_1 + 0x20) == 0)) {
        *(int *)(param_1 + 0x20) = iVar2;
        goto LAB_0070c6d0;
      }
      iVar2 = *(int *)(param_2 + 0x24);
      if (iVar2 != 0) {
LAB_0070c6dc:
        if (*(int *)(param_1 + 0x24) == 0) goto LAB_0070c6e4;
      }
    }
    if ((*(int *)(param_2 + 0x28) != -1) && (((uVar8 & 1) != 0 || (*(int *)(param_1 + 0x28) == -1)))
       ) {
      *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
    }
    uVar3 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar3 >> 1 & 1) == 0) goto LAB_0070c710;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar2;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    uVar3 = *(ulong *)(param_1 + 0x18);
LAB_0070c710:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar3 = uVar3 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_2 + 0x18) | uVar3;
  puVar5 = *(ulong **)(param_2 + 0x30);
  if ((uVar7 >> 1 & 1) == 0) {
    if (puVar5 == (ulong *)0x0) goto LAB_0070c7dc;
    if (((uVar8 & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0070c75c;
    if (*(long *)(param_2 + 0x38) != 0) {
LAB_0070c7e8:
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0070c7f0;
    }
LAB_0070c840:
    lVar4 = *(long *)(param_2 + 0x50);
    if (lVar4 == 0) {
LAB_0070c8a4:
      lVar4 = *(long *)(param_2 + 0x60);
      if (lVar4 == 0) goto LAB_0070c8e0;
      if ((uVar8 & 1) != 0) goto LAB_0070c8c0;
    }
    else {
      if (((uVar8 & 1) != 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_0070c864;
      lVar4 = *(long *)(param_2 + 0x60);
      if (lVar4 == 0) goto LAB_0070c8e0;
    }
    if (*(long *)(param_1 + 0x60) != 0) goto LAB_0070c8e0;
  }
  else {
LAB_0070c75c:
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      func_0x0070c96c();
    }
    if (puVar5 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      FUN_00705ed8();
      *(long *)(param_1 + 0x30) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      uVar3 = 0;
      while (uVar3 < *puVar5) {
        lVar4 = *(long *)(puVar5[1] + uVar3 * 8);
        FUN_0070224c();
        if (lVar4 == 0) {
          return 0;
        }
        lVar1 = *(long *)(param_1 + 0x30);
        func_0x00706268(lVar1,lVar4);
        uVar3 = uVar3 + 1;
        if (lVar1 == 0) {
          func_0x006cc9a8(lVar4);
          return 0;
        }
      }
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
    }
    if ((uVar7 >> 1 & 1) == 0) {
LAB_0070c7dc:
      if (*(long *)(param_2 + 0x38) == 0) goto LAB_0070c840;
      if ((uVar8 & 1) == 0) goto LAB_0070c7e8;
    }
LAB_0070c7f0:
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0070c900();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    lVar4 = *(long *)(param_2 + 0x38);
    if (lVar4 != 0) {
      FUN_00706358(lVar4,0x70cb68,0x70c918,FUN_0070cb64,0x70c914);
      *(long *)(param_1 + 0x38) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar7 >> 1 & 1) == 0) goto LAB_0070c840;
    lVar4 = *(long *)(param_2 + 0x50);
LAB_0070c864:
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    lVar1 = lVar4;
    FUN_0070ca8c(lVar4,uVar6);
    if (lVar1 != 0) goto LAB_0070c878;
    lVar1 = param_1 + 0x50;
    FUN_0070caa4(lVar1,param_1 + 0x58,lVar4,uVar6);
    if ((int)lVar1 == 0) goto LAB_0070c878;
    if ((uVar7 >> 1 & 1) == 0) goto LAB_0070c8a4;
    lVar4 = *(long *)(param_2 + 0x60);
  }
LAB_0070c8c0:
  if (*(long *)(param_2 + 0x68) == 0x10 || *(long *)(param_2 + 0x68) == 4) {
    lVar1 = param_1 + 0x60;
    FUN_0070caa4(lVar1,param_1 + 0x68,lVar4);
    if ((int)lVar1 != 0) {
LAB_0070c8e0:
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
      return 1;
    }
  }
LAB_0070c878:
  *(undefined1 *)(param_1 + 0x70) = 1;
  return 0;
}



/* Entry: 0070c900; end: 0070c91b;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070c900(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      FUN_0070cb64(0x70c914);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070c91c; end: 0070c94b;  */

void FUN_0070c91c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar1 | 1;
  FUN_0070c654();
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 0070c94c; end: 0070c97f;  */

undefined8 FUN_0070c94c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return 1;
}



/* Entry: 0070c980; end: 0070c9bf;  */

bool FUN_0070c980(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_0070c9c0(param_1,0,param_2,param_3);
  bVar1 = (int)lVar2 != 0;
  if (!bVar1) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return bVar1;
}



/* Entry: 0070c9c0; end: 0070ca8b;  */

void FUN_0070c9c0(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_3, FUN_0070ca8c(param_3,param_4), lVar1 == 0)) {
    if ((param_2 == 0) && (*(long *)(param_1 + 0x38) != 0)) {
      FUN_0070c900();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_007020bc(param_3,param_4);
    if (param_3 != 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      if (lVar1 == 0) {
        FUN_00705ed8();
        *(long *)(param_1 + 0x38) = lVar1;
        if (lVar1 == 0) {
          func_0x00701ed0(param_3);
          return;
        }
      }
      func_0x00706268();
      if (lVar1 == 0) {
        func_0x00701ed0(param_3);
        if ((*(long **)(param_1 + 0x38) == (long *)0x0) || (**(long **)(param_1 + 0x38) == 0)) {
          FUN_00705f10();
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  return;
}



/* Entry: 0070ca8c; end: 0070caa3;  */

undefined8 FUN_0070ca8c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memchr_0099a3e8)(param_1,0,param_2);
    return param_1;
  }
  return 0;
}



/* Entry: 0070caa4; end: 0070cb63;  */

void FUN_0070caa4(long *param_1,long *param_2,long param_3,long param_4)

{
  if (((param_3 != 0) && (param_4 != 0)) && (FUN_007021c8(param_3,param_4), param_3 != 0)) {
    if (*param_1 != 0) {
      func_0x00701ed0();
    }
    *param_1 = param_3;
    if (param_2 != (long *)0x0) {
      *param_2 = param_4;
    }
  }
  return;
}



/* Entry: 0070cb64; end: 0070cb87;  */

void FUN_0070cb64(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070cb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070cb88; end: 0070cc0f;  */

uint FUN_0070cb88(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_0070cbf4:
    param_3 = 0xffffffff;
  }
  else {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*piVar3;
    }
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar2 = (long)(int)param_3;
    do {
      lVar2 = lVar2 + 1;
      if (lVar4 <= lVar2) goto LAB_0070cbf4;
      uVar1 = **(undefined8 **)(*(long *)(piVar3 + 2) + lVar2 * 8);
      FUN_00702350(uVar1,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar1 != 0);
  }
  return param_3;
}



/* Entry: 0070cc10; end: 0070cc53;  */

undefined8 FUN_0070cc10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 0070cc54; end: 0070cc9b;  */

uint FUN_0070cc54(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  func_0x00702528();
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  if (param_1 == (undefined8 *)0x0) {
LAB_0070cbf4:
    param_3 = 0xffffffff;
  }
  else {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*piVar3;
    }
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar2 = (long)(int)param_3;
    do {
      lVar2 = lVar2 + 1;
      if (lVar4 <= lVar2) goto LAB_0070cbf4;
      uVar1 = **(undefined8 **)(*(long *)(piVar3 + 2) + lVar2 * 8);
      FUN_00702350(uVar1,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar1 != 0);
  }
  return param_3;
}



/* Entry: 0070cc9c; end: 0070cd5f;  */

void FUN_0070cc9c(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if ((((param_1 != (undefined8 *)0x0) && (-1 < (int)param_2)) &&
      (puVar7 = (ulong *)*param_1, puVar7 != (ulong *)0x0)) && ((ulong)param_2 < *puVar7)) {
    uVar6 = (ulong)param_2;
    puVar2 = puVar7;
    FUN_00706084(puVar7,uVar6);
    uVar1 = *puVar7;
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != (uint)uVar1) {
      if (param_2 == 0) {
        uVar4 = (uint)puVar2[2];
        uVar3 = puVar7[1];
      }
      else {
        uVar3 = puVar7[1];
        uVar4 = *(int *)(*(long *)(uVar3 + (ulong)(param_2 - 1) * 8) + 0x10) + 1;
      }
      if ((int)uVar4 < *(int *)(*(long *)(uVar3 + uVar6 * 8) + 0x10)) {
        for (; (int)uVar6 < (int)(uint)uVar1; uVar6 = uVar6 + 1) {
          lVar5 = *(long *)(uVar3 + uVar6 * 8);
          *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        }
      }
    }
  }
  return;
}



/* Entry: 0070cd60; end: 0070cf5f;  */

long * FUN_0070cd60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  
  if (((param_1 != (long *)0x0) && (plVar2 = (long *)*param_1, plVar2 != (long *)0x0)) ||
     (plVar2 = param_1, FUN_0070dad8(), plVar2 != (long *)0x0)) {
    plVar1 = plVar2;
    FUN_0070d06c(plVar2,param_2);
    if (((int)plVar1 == 0) ||
       (plVar1 = plVar2, FUN_0070d0c8(plVar2,param_3,param_4,param_5), (int)plVar1 == 0)) {
      if ((param_1 == (long *)0x0) || (plVar2 != (long *)*param_1)) {
        func_0x0070dae4(plVar2);
      }
      plVar2 = (long *)0x0;
    }
    else if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
      *param_1 = (long)plVar2;
    }
  }
  return plVar2;
}



/* Entry: 0070cf60; end: 0070cfbf;  */

void FUN_0070cf60(undefined8 param_1)

{
  long lVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  
  lVar1 = 0;
  FUN_0070cfc0();
  if (lVar1 != 0) {
    func_0x0070ce10(param_1,lVar1,in_x5,in_x6);
    func_0x0070dae4(lVar1);
  }
  return;
}



/* Entry: 0070cfc0; end: 0070d06b;  */

undefined8
FUN_0070cfc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_007024d4(param_2,0);
  if (param_2 == 0) {
    FUN_0070d17c(0xb,0,0x6f);
    FUN_006de97c(2);
    param_1 = 0;
  }
  else {
    FUN_0070cd60(param_1,param_2,param_3,param_4,param_5);
    func_0x006cc9a8(param_2);
  }
  return param_1;
}



/* Entry: 0070d06c; end: 0070d0c7;  */

bool FUN_0070d06c(long *param_1,long param_2)

{
  bool bVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_0070d17c(0xb,0,0x43);
    bVar1 = false;
  }
  else {
    func_0x006cc9a8(*param_1);
    FUN_0070224c();
    *param_1 = param_2;
    bVar1 = param_2 != 0;
  }
  return bVar1;
}



/* Entry: 0070d0c8; end: 0070d17b;  */

void FUN_0070d0c8(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != 0 || ((int)param_4 == 0)))) {
    uVar2 = (uint)param_2;
    if (((int)uVar2 < 1) || ((uVar2 >> 0xc & 1) == 0)) {
      if ((int)param_4 < 0) {
        param_4 = param_3;
        _strlen(param_3);
      }
      uVar1 = param_1[1];
      FUN_006ce2d0(uVar1,param_3,param_4);
      if (((int)uVar1 != 0) && (uVar2 != 0xffffffff)) {
        *(uint *)(param_1[1] + 4) = uVar2;
      }
    }
    else {
      uVar1 = *param_1;
      FUN_00702384(uVar1);
      FUN_006cd484(param_1 + 1,param_3,param_4,param_2,uVar1);
    }
  }
  return;
}



/* Entry: 0070d17c; end: 0070d1ab;  */

void FUN_0070d17c(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 0070d1ac; end: 0070d26b;  */

ulong FUN_0070d1ac(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 uStack_42;
  
  uVar4 = *param_1;
  FUN_00702350(uVar4,*param_2);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  piVar5 = (int *)param_1[1];
  piVar6 = (int *)param_2[1];
  if (piVar5 == (int *)0x0 && piVar6 == (int *)0x0) {
    return 0;
  }
  if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar8 = *piVar5;
  if (iVar8 != *piVar6) {
    return 0xffffffff;
  }
  if (iVar8 == 1) {
    return (ulong)(uint)(piVar5[2] - piVar6[2]);
  }
  if (iVar8 == 5) {
    return 0;
  }
  if (iVar8 == 6) {
    iVar8 = *(int *)(*(long *)(piVar5 + 2) + 0x14);
    uVar7 = iVar8 - *(int *)(*(long *)(piVar6 + 2) + 0x14);
    if (uVar7 != 0) {
      return (ulong)uVar7;
    }
    uVar4 = *(ulong *)(*(long *)(piVar5 + 2) + 0x18);
    if (iVar8 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)(uVar4,*(undefined8 *)(*(long *)(piVar6 + 2) + 0x18));
    return uVar4;
  }
  piVar5 = *(int **)(piVar5 + 2);
  piVar6 = *(int **)(piVar6 + 2);
  iVar9 = *piVar6;
  uStack_42 = 0;
  iVar8 = *piVar5;
  iVar1 = piVar5[1];
  if (iVar1 == 3) {
    piVar3 = piVar5;
    FUN_006cb1ec(piVar5,(long)&uStack_42 + 1);
    iVar8 = (int)piVar3;
  }
  iVar2 = piVar6[1];
  if (iVar2 == 3) {
    piVar3 = piVar6;
    FUN_006cb1ec(piVar6,&uStack_42);
    iVar9 = (int)piVar3;
  }
  if (iVar8 < iVar9) {
LAB_006ce4f4:
    uVar4 = 0xffffffff;
  }
  else {
    if (iVar8 <= iVar9) {
      if ((byte)uStack_42 < uStack_42._1_1_) goto LAB_006ce4f4;
      if ((byte)uStack_42 <= uStack_42._1_1_) {
        if (iVar8 != 0) {
          uVar4 = *(ulong *)(piVar5 + 2);
          _memcmp(uVar4,*(undefined8 *)(piVar6 + 2),(long)iVar8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        uVar7 = 0xffffffff;
        if (iVar2 <= iVar1) {
          uVar7 = (uint)(iVar2 < iVar1);
        }
        return (ulong)uVar7;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 0070d26c; end: 0070d34f;  */

undefined8 FUN_0070d26c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_006d1abc(param_1,&uStack_28,&uStack_30,0x7fffffff);
  if ((int)param_1 == 0) {
    param_2 = 0;
  }
  else {
    uStack_38 = uStack_28;
    FUN_006ce6e8(param_2,&uStack_38,uStack_30,&UNK_00a1cc78);
    func_0x00701ed0(uStack_28);
  }
  return param_2;
}



/* Entry: 0070d350; end: 0070d7a7;  */

void FUN_0070d350(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  byte bVar10;
  int *piVar11;
  byte *pbVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  int iStack_54;
  
  plVar13 = (long *)*param_2;
  iVar3 = (int)param_1;
  uVar1 = iVar3 == 5;
  if ((bool)uVar1) {
    FUN_006eaae0();
    plVar4 = plVar13;
    func_0x0070d2a8(plVar13,param_1,plVar13 + 9,0);
    if ((int)plVar4 != 0) {
      func_0x0070da1c();
      func_0x0070d9f4();
      plVar13[5] = (long)plVar4;
      if (plVar4 == (long *)0x0) {
        func_0x0070da10();
        uVar2 = 1;
        if (!(bool)uVar1) {
          return;
        }
      }
      else {
        uVar8 = *(uint *)(plVar13 + 6);
        uVar7 = uVar8 | 1;
        *(uint *)(plVar13 + 6) = uVar7;
        bVar10 = 0 < (int)plVar4[1];
        if ((bool)bVar10) {
          uVar7 = uVar8 | 5;
          *(uint *)(plVar13 + 6) = uVar7;
        }
        if (0 < *(int *)((long)plVar4 + 0xc)) {
          bVar10 = bVar10 + 1;
          uVar7 = uVar7 | 8;
          *(uint *)(plVar13 + 6) = uVar7;
        }
        if (0 < *(int *)((long)plVar4 + 0x1c)) {
          bVar10 = bVar10 + 1;
          uVar7 = uVar7 | 0x10;
        }
        uVar8 = uVar7 | 2;
        if (bVar10 < 2) {
          uVar8 = uVar7;
        }
        if (0 < *(int *)((long)plVar4 + 0x1c) || 1 < bVar10) {
          *(uint *)(plVar13 + 6) = uVar8;
        }
        uVar2 = (int)plVar4[3] == 1;
        if (0 < (int)plVar4[3]) {
          uVar8 = uVar8 | 0x20;
          *(uint *)(plVar13 + 6) = uVar8;
        }
        piVar11 = (int *)plVar4[2];
        if (piVar11 != (int *)0x0) {
          *(uint *)(plVar13 + 6) = uVar8 | 0x40;
          iVar3 = *piVar11;
          uVar2 = iVar3 == 0;
          if (iVar3 < 1) {
            uVar8 = *(uint *)((long)plVar13 + 0x34);
          }
          else {
            pbVar12 = *(byte **)(piVar11 + 2);
            bVar10 = *pbVar12;
            uVar8 = (uint)bVar10;
            *(uint *)((long)plVar13 + 0x34) = (uint)bVar10;
            uVar2 = iVar3 == 1;
            if (!(bool)uVar2) {
              uVar8 = (uint)CONCAT11(pbVar12[1],bVar10);
            }
          }
          *(uint *)((long)plVar13 + 0x34) = uVar8 & 0x807f;
        }
        plVar4 = (long *)*plVar4;
        func_0x00712050(plVar4,*(undefined8 *)(*plVar13 + 0x10));
        if ((int)plVar4 == 0) {
          return;
        }
      }
      func_0x0070da1c();
      func_0x0070d9f4();
      plVar13[4] = (long)plVar4;
      uVar1 = uVar2;
      if (plVar4 == (long *)0x0) {
        func_0x0070da10();
        uVar1 = 1;
        if (!(bool)uVar2) {
          return;
        }
      }
      func_0x0070da1c();
      func_0x0070d9f4();
      plVar13[7] = (long)plVar4;
      uVar2 = uVar1;
      if (plVar4 == (long *)0x0) {
        func_0x0070da10();
        uVar2 = 1;
        if (!(bool)uVar1) {
          return;
        }
      }
      func_0x0070da1c();
      func_0x0070d9f4();
      plVar13[8] = (long)plVar4;
      if ((plVar4 != (long *)0x0) || (func_0x0070da10(), (bool)uVar2)) {
        if ((plVar4 == (long *)0x0) || (plVar13[7] != 0)) {
          puVar14 = *(ulong **)(*plVar13 + 0x30);
          if (puVar14 != (ulong *)0x0) {
            for (uVar17 = 0; uVar17 < *puVar14; uVar17 = uVar17 + 1) {
              puVar19 = *(undefined8 **)(puVar14[1] + uVar17 * 8);
              if (puVar19 == (undefined8 *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = (int)*puVar19;
              }
              FUN_00702384();
              if (iVar3 == 0x359) {
                *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x1000;
              }
              if ((((puVar19 != (undefined8 *)0x0) && (0 < *(int *)(puVar19 + 1))) &&
                  (iVar3 != 0x5a)) && ((iVar3 != 0x8c && (iVar3 != 0x302)))) {
                *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x200;
                break;
              }
            }
          }
          puVar14 = *(ulong **)(*plVar13 + 0x28);
          if (puVar14 != (ulong *)0x0) {
            lVar20 = 0;
            for (uVar17 = 0; uVar17 < *puVar14; uVar17 = uVar17 + 1) {
              lVar15 = *(long *)(puVar14[1] + uVar17 * 8);
              lVar5 = lVar15;
              func_0x0070907c(lVar15,0x303,&iStack_54,0);
              if (lVar5 == 0 && iStack_54 != -1) {
LAB_0070d780:
                *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x80;
                break;
              }
              if (lVar5 != 0) {
                lVar6 = plVar13[0xc];
                if (lVar6 == 0) {
                  FUN_00705ed8();
                  plVar13[0xc] = lVar6;
                  if (lVar6 == 0) {
                    return;
                  }
                }
                func_0x00706268();
                lVar20 = lVar5;
                if (lVar6 == 0) {
                  return;
                }
              }
              *(long *)(lVar15 + 0x18) = lVar20;
              lVar5 = lVar15;
              func_0x0070907c(lVar15,0x8d,&iStack_54,0);
              if (lVar5 == 0 && iStack_54 != -1) goto LAB_0070d780;
              if (lVar5 == 0) {
                *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
              }
              else {
                lVar6 = lVar5;
                FUN_006cbf48();
                *(int *)(lVar15 + 0x20) = (int)lVar6;
                FUN_006ce410(lVar5);
              }
              puVar16 = *(ulong **)(lVar15 + 0x10);
              if (puVar16 != (ulong *)0x0) {
                for (uVar18 = 0; uVar18 < *puVar16; uVar18 = uVar18 + 1) {
                  puVar19 = *(undefined8 **)(puVar16[1] + uVar18 * 8);
                  if ((puVar19 != (undefined8 *)0x0) && (0 < *(int *)(puVar19 + 1))) {
                    iVar3 = (int)*puVar19;
                    FUN_00702384();
                    if (iVar3 != 0x303) {
                      *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x200;
                      break;
                    }
                  }
                }
              }
            }
          }
          if (*(code **)(plVar13[0xd] + 8) != (code *)0x0) {
            (**(code **)(plVar13[0xd] + 8))();
          }
        }
        else {
          func_0x0070d9e8(0xb,0,0x8a);
        }
      }
    }
  }
  else if (iVar3 == 3) {
    if (((plVar13[0xd] == 0) || (pcVar9 = *(code **)(plVar13[0xd] + 0x10), pcVar9 == (code *)0x0))
       || (plVar4 = plVar13, (*pcVar9)(), (int)plVar4 != 0)) {
      if (plVar13[4] != 0) {
        func_0x0071001c();
      }
      if (plVar13[5] != 0) {
        func_0x00711d70();
      }
      FUN_006ce410(plVar13[7]);
      FUN_006ce410(plVar13[8]);
      FUN_00705f40(plVar13[0xc],FUN_0070d7a8,0x712984);
    }
  }
  else if (iVar3 == 1) {
    *(undefined8 *)((long)plVar13 + 0x24) = 0;
    *(undefined8 *)((long)plVar13 + 0x1c) = 0;
    *(undefined8 *)((long)plVar13 + 0x2c) = 0;
    *(undefined4 *)((long)plVar13 + 0x34) = 0x807f;
    plVar13[0xd] = (long)&UNK_00a1c580;
    plVar13[0xe] = 0;
    plVar13[0xc] = 0;
    plVar13[7] = 0;
    plVar13[8] = 0;
  }
  return;
}



/* Entry: 0070d7a8; end: 0070d7b3;  */

void FUN_0070d7a8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070d7b4; end: 0070d94b;  */

void FUN_0070d7b4(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uStack_80;
  undefined8 auStack_78 [5];
  
  auStack_78[0] = param_3;
  func_0x0070d9fc();
  func_0x007064d4();
  if (*(long *)(*param_1 + 0x28) == 0) {
    func_0x0070d9fc();
    func_0x0070650c();
  }
  else {
    iVar1 = *(int *)(*(long *)(*param_1 + 0x28) + 0x10);
    func_0x0070d9fc();
    func_0x0070650c();
    if (iVar1 == 0) {
      func_0x0070d9fc();
      func_0x007064f0();
      if ((*(long *)(*param_1 + 0x28) != 0) && (*(int *)(*(long *)(*param_1 + 0x28) + 0x10) == 0)) {
        func_0x00706308();
      }
      func_0x0070d9fc();
      func_0x00706528();
    }
  }
  uVar2 = *(undefined8 *)(*param_1 + 0x28);
  FUN_00706128(uVar2,&uStack_80,auStack_78,FUN_0070d9b4);
  uVar7 = uStack_80;
  if ((int)uVar2 == 0) {
    return;
  }
  do {
    puVar4 = *(ulong **)(*param_1 + 0x28);
    if (puVar4 == (ulong *)0x0) {
      return;
    }
    if (*puVar4 <= uVar7) {
      return;
    }
    puVar8 = *(undefined8 **)(puVar4[1] + uVar7 * 8);
    uVar2 = *puVar8;
    FUN_006cbb40(uVar2,param_3);
    if ((int)uVar2 != 0) {
      return;
    }
    puVar4 = (ulong *)puVar8[3];
    if (puVar4 == (ulong *)0x0) {
      if ((param_4 == 0) ||
         (lVar6 = param_4, FUN_007089ec(param_4,*(undefined8 *)(*param_1 + 0x10)), (int)lVar6 == 0))
      {
LAB_0070d910:
        if (param_2 == (undefined8 *)0x0) {
          return;
        }
        *param_2 = puVar8;
        return;
      }
    }
    else {
      lVar6 = param_4;
      if (param_4 == 0) {
        lVar6 = *(long *)(*param_1 + 0x10);
      }
      for (uVar9 = 0; (puVar4 != (ulong *)0x0 && (uVar9 < *puVar4)); uVar9 = uVar9 + 1) {
        piVar5 = *(int **)(puVar4[1] + uVar9 * 8);
        if (*piVar5 == 4) {
          lVar3 = lVar6;
          FUN_007089ec(lVar6,*(undefined8 *)(piVar5 + 2));
          if ((int)lVar3 == 0) goto LAB_0070d910;
          puVar4 = (ulong *)puVar8[3];
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



/* Entry: 0070d94c; end: 0070d9b3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0070d94c(long *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long alStack_78 [6];
  long lStack_48;
  
  lVar4 = param_1[1];
  FUN_0070d1ac(lVar4,*(undefined8 *)(*param_1 + 8));
  if ((int)lVar4 != 0) {
    FUN_0070d9e8(0xb,0,0x89);
    return 0;
  }
  lVar4 = param_1[1];
  piVar1 = (int *)param_1[2];
  lVar6 = *param_1;
  if (param_2 == 0) {
    uVar5 = 0x43;
LAB_00706864:
    FUN_006de8e4(0xb,0,uVar5,0,0);
    return 0;
  }
  if (piVar1[1] == 3) {
    piVar2 = piVar1;
    FUN_006cb25c(piVar1,&lStack_48);
    if ((int)piVar2 == 0) {
      uVar5 = 0x6d;
      goto LAB_00706864;
    }
  }
  else {
    lStack_48 = (long)*piVar1;
  }
  alStack_78[0] = 0;
  alStack_78[2] = 0;
  alStack_78[1] = 0;
  alStack_78[4] = 0;
  alStack_78[3] = 0;
  plVar3 = alStack_78 + 1;
  FUN_00706920(plVar3,lVar4,param_2);
  if ((int)plVar3 != 0) {
    FUN_006cf704(lVar6,alStack_78,&DAT_00a1c5a8);
    if (alStack_78[0] == 0) {
      uVar5 = 0x41;
    }
    else {
      plVar3 = alStack_78 + 1;
      func_0x006df118(plVar3,*(undefined8 *)(piVar1 + 2),lStack_48,alStack_78[0],(long)(int)lVar6);
      if ((int)plVar3 != 0) {
        uVar5 = 1;
        goto LAB_007068f4;
      }
      uVar5 = 6;
    }
    FUN_006de8e4(0xb,0,uVar5,0,0);
  }
  uVar5 = 0;
LAB_007068f4:
  func_0x00701ed0(alStack_78[0]);
  FUN_006ea7fc(alStack_78 + 1);
  return uVar5;
}


