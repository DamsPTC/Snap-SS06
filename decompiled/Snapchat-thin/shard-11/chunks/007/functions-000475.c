/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108875684; end: 108875697;  */

void FUN_108875684(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108875698; end: 1088756d7;  */

void FUN_108875698(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1088756d8; end: 108875707;  */

void FUN_1088756d8(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x158) = 0;
  FUN_108707414();
  return;
}



/* Entry: 108875708; end: 108875723;  */

void FUN_108875708(void)

{
  func_0x00010887bc60();
  FUN_108875724();
  return;
}



/* Entry: 108875724; end: 10887572b;  */

void FUN_108875724(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_10887578c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 10887572c; end: 10887578b;  */

void FUN_10887572c(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_10887578c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 10887578c; end: 10887580f;  */

void FUN_10887578c(void)

{
  int unaff_w26;
  
  func_0x000107c34578();
  func_0x00010887b628();
  func_0x00010887bcd0();
  func_0x000107c287ac();
  func_0x00010887c704();
  func_0x000107c2a0d0();
  func_0x00010887c5b0();
  func_0x00010887c6f4();
  func_0x000107c28230();
  func_0x00010887c714();
  func_0x000107c28230();
  func_0x00010887c6d4();
  func_0x000107c2a10c();
  FUN_108875810();
  func_0x00010887c734();
  func_0x000107c28230();
  func_0x00010887c724();
  func_0x000107c28208();
  func_0x00010887c6e4();
  func_0x00010887c508();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (unaff_w26 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108875810; end: 108875817;  */

void FUN_108875810(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108875818; end: 1088758bf;  */

long FUN_108875818(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887588c;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887588c:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x00010887594c();
  return param_1;
}



/* Entry: 1088758c0; end: 108875917;  */

void FUN_1088758c0(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x00010887594c();
  return;
}



/* Entry: 108875918; end: 10887591b;  */

undefined8 * FUN_108875918(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887591c; end: 10887592f;  */

void FUN_10887591c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108875930; end: 1088759e3;  */

void FUN_108875930(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1088759e4; end: 108875a1b;  */

void FUN_1088759e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c34530();
  FUN_10887476c(auStack_38,param_3);
  func_0x00010887b7ac();
  func_0x00010887bfc4();
  return;
}



/* Entry: 108875a1c; end: 108875a6b;  */

void FUN_108875a1c(int param_1,undefined8 param_2,long param_3)

{
  if (*(char *)(param_3 + 4) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (param_1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010887c4cc();
  return;
}



/* Entry: 108875a6c; end: 108875a6f;  */

void FUN_108875a6c(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108875a70; end: 108875a9f;  */

void FUN_108875a70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108875aa0();
  if (lVar1 != 0) {
    FUN_108875b3c(param_1,lVar1);
  }
  return;
}



/* Entry: 108875aa0; end: 108875b3b;  */

long FUN_108875aa0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 108875b3c; end: 108875b6f;  */

undefined8 FUN_108875b3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108875b70(auStack_38);
  func_0x000107c2a118(auStack_38);
  return uVar1;
}



/* Entry: 108875b70; end: 108875c63;  */

void FUN_108875b70(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108875c24;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108875c24;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108875c24:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108875c64; end: 108875c93;  */

void FUN_108875c64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108875c94();
  if (lVar1 != 0) {
    FUN_108875d30(param_1,lVar1);
  }
  return;
}



/* Entry: 108875c94; end: 108875d2f;  */

long FUN_108875c94(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 108875d30; end: 108875d63;  */

undefined8 FUN_108875d30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108875d64(auStack_38);
  func_0x000107c2a124(auStack_38);
  return uVar1;
}



/* Entry: 108875d64; end: 108875e57;  */

void FUN_108875d64(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108875e18;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108875e18;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108875e18:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108875e58; end: 108875eab;  */

void FUN_108875e58(void)

{
  func_0x000107c343c4();
  FUN_108875eac();
  func_0x00010887bb54();
  return;
}



/* Entry: 108875eac; end: 108875ee7;  */

/* WARNING: Possible PIC construction at 0x000108875ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108875ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108875ec4) */
/* WARNING: Removing unreachable block (ram,0x000108875ecc) */
/* WARNING: Removing unreachable block (ram,0x00010887cd48) */

void FUN_108875eac(int param_1)

{
  func_0x00010887b72c();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108875ee8; end: 108875f3b;  */

void FUN_108875ee8(void)

{
  func_0x000107c343c4();
  func_0x000107c2a120();
  func_0x00010887bb54();
  return;
}



/* Entry: 108875f3c; end: 108875f8f;  */

void FUN_108875f3c(void)

{
  func_0x000107c343c4();
  FUN_108875f90();
  func_0x00010887bb54();
  return;
}



/* Entry: 108875f90; end: 108875fcb;  */

void FUN_108875f90(void)

{
  int unaff_w22;
  
  func_0x00010887b72c();
  func_0x000107c28208();
  func_0x00010887bef0();
  func_0x000107c287ac();
  func_0x000107c2a0d0();
  func_0x00010887bee0();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (unaff_w22 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108875fcc; end: 10887601f;  */

void FUN_108875fcc(void)

{
  func_0x000107c343c4();
  FUN_108876020();
  func_0x00010887bb54();
  return;
}



/* Entry: 108876020; end: 108876083;  */

void FUN_108876020(undefined8 param_1)

{
  int iVar1;
  
  func_0x000107c3426c();
  func_0x000107c28208();
  func_0x00010887c824();
  func_0x000107c287ac();
  func_0x00010887c834();
  func_0x000107c28208();
  func_0x00010887c7b0(param_1,4);
  func_0x000107c2a0d0(param_1,5);
  iVar1 = (int)param_1;
  func_0x00010887c804();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876084; end: 1088760d7;  */

void FUN_108876084(void)

{
  func_0x000107c343c4();
  FUN_1088760d8();
  func_0x00010887bb54();
  return;
}



/* Entry: 1088760d8; end: 108876113;  */

void FUN_1088760d8(int param_1)

{
  func_0x000107c34208();
  func_0x000107c28208();
  func_0x00010887bdf0();
  func_0x000107c34490();
  func_0x000107c287ac();
  func_0x000107c34488();
  func_0x000107c2a0d0();
  func_0x000107c3448c();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876114; end: 108876117;  */

undefined8 * FUN_108876114(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108876118; end: 10887612b;  */

void FUN_108876118(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887612c; end: 108876137;  */

void FUN_10887612c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108876138; end: 10887618b;  */

void FUN_108876138(void)

{
  func_0x000107c343c4();
  FUN_10887618c();
  func_0x00010887bb54();
  return;
}



/* Entry: 10887618c; end: 1088761c3;  */

void FUN_10887618c(int param_1)

{
  func_0x00010887b72c();
  func_0x000107c28208();
  func_0x00010887bef0();
  func_0x000107c2a0d0();
  func_0x00010887bbc4();
  func_0x00010887bee0();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088761c4; end: 1088761c7;  */

undefined8 * FUN_1088761c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088761c8; end: 1088761db;  */

void FUN_1088761c8(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088761dc; end: 1088761df;  */

undefined8 * FUN_1088761dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088761e0; end: 1088761f3;  */

void FUN_1088761e0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088761f4; end: 1088761ff;  */

void FUN_1088761f4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108876200; end: 10887628b;  */

void FUN_108876200(long param_1)

{
  long lVar1;
  int extraout_w8;
  long unaff_x19;
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c3445c();
    func_0x00010887bd1c();
    func_0x00010887bde4();
    func_0x000107c34464();
    func_0x000107c28228();
    func_0x00010887c3e4(*(undefined1 *)(unaff_x19 + 0x38));
    if (extraout_w8 == 1) {
      FUN_1088762b0();
    }
    else {
      FUN_1088762e0();
    }
    func_0x00010887c094();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10887628c; end: 1088762af;  */

void FUN_10887628c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1088762b0; end: 1088762df;  */

void FUN_1088762b0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c343b8();
  func_0x000107c3194c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 1088762e0; end: 10887631b;  */

void FUN_1088762e0(long param_1)

{
  FUN_108870208();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10887631c; end: 108876373;  */

void FUN_10887631c(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c34660();
  func_0x000107c34484();
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_10887628c(unaff_x19 + 0x10);
  }
  func_0x0001088762fc(unaff_x20 | 8);
  func_0x000107c34534();
  func_0x000107c31408();
  func_0x0001088762fc(unaff_x19 + 0x10);
  return;
}



/* Entry: 108876374; end: 1088763c7;  */

void FUN_108876374(void)

{
  func_0x000107c343c4();
  FUN_1088763c8();
  func_0x00010887bb54();
  return;
}



/* Entry: 1088763c8; end: 1088763eb;  */

void FUN_1088763c8(int param_1)

{
  func_0x000107c34200();
  func_0x000107c287ac();
  func_0x000107c342bc();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088763ec; end: 1088763ef;  */

undefined8 * FUN_1088763ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088763f0; end: 108876403;  */

void FUN_1088763f0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108876404; end: 108876407;  */

undefined8 * FUN_108876404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108876408; end: 10887641b;  */

void FUN_108876408(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887641c; end: 10887643f;  */

void FUN_10887641c(void)

{
  return;
}



/* Entry: 108876440; end: 10887646f;  */

void FUN_108876440(void)

{
  func_0x00010887ba60();
  FUN_108876470();
  func_0x00010887b7ac();
  func_0x00010887bfc4();
  return;
}



/* Entry: 108876470; end: 10887649f;  */

void FUN_108876470(void)

{
  func_0x000107c343ec();
  func_0x00010890caf8();
  func_0x00010887bd00();
  func_0x00010887c038();
  func_0x00010887c7d4();
  return;
}



/* Entry: 1088764a0; end: 1088764f7;  */

void FUN_1088764a0(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000107c2a13c();
  return;
}



/* Entry: 1088764f8; end: 1088764fb;  */

undefined8 * FUN_1088764f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088764fc; end: 10887650f;  */

void FUN_1088764fc(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108876510; end: 108876527;  */

void FUN_108876510(long param_1)

{
  func_0x00010887c854();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108876528; end: 1088765cf;  */

long FUN_108876528(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887659c;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887659c:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x00010887665c();
  return param_1;
}



/* Entry: 1088765d0; end: 108876627;  */

void FUN_1088765d0(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x00010887665c();
  return;
}



/* Entry: 108876628; end: 10887662b;  */

undefined8 * FUN_108876628(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887662c; end: 10887663f;  */

void FUN_10887662c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108876640; end: 10887667f;  */

void FUN_108876640(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108876680; end: 1088766af;  */

void FUN_108876680(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  FUN_1087b21bc();
  return;
}



/* Entry: 1088766b0; end: 1088766c7;  */

void FUN_1088766b0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000107c3478c(*param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  func_0x00010887bdb4();
  func_0x000107c3446c();
  func_0x000107c343fc();
  func_0x00010887c778();
  FUN_10887671c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 1088766c8; end: 10887671b;  */

void FUN_1088766c8(void)

{
  func_0x000107c3478c();
  func_0x00010887bdb4();
  func_0x000107c3446c();
  func_0x000107c343fc();
  func_0x00010887c778();
  FUN_10887671c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887671c; end: 108876753;  */

void FUN_10887671c(int param_1)

{
  func_0x00010887b72c();
  func_0x000107c287ac();
  func_0x00010887bef0();
  func_0x000107c28208();
  func_0x00010887bbc4();
  func_0x00010887bee0();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876754; end: 108876757;  */

undefined8 * FUN_108876754(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108876758; end: 10887676b;  */

void FUN_108876758(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887676c; end: 108876783;  */

void FUN_10887676c(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010887b7d4(*param_1,*param_2,param_2[1],param_2[2]);
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_1088767d0();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108876784; end: 1088767cf;  */

void FUN_108876784(void)

{
  func_0x00010887b7d4();
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_1088767d0();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 1088767d0; end: 1088767f7;  */

void FUN_1088767d0(int param_1,undefined8 param_2,long param_3)

{
  func_0x00010887b678();
  func_0x000107c287ac();
  func_0x00010887b958();
  func_0x00010887bae4();
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (param_1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x000107c31418();
  return;
}



/* Entry: 1088767f8; end: 108876813;  */

void FUN_1088767f8(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000107c3478c(*param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
  func_0x000107c3426c();
  func_0x000107c3446c();
  func_0x000107c343fc();
  func_0x000107c34274();
  FUN_10887686c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108876814; end: 10887686b;  */

void FUN_108876814(void)

{
  func_0x000107c3478c();
  func_0x000107c3426c();
  func_0x000107c3446c();
  func_0x000107c343fc();
  func_0x000107c34274();
  FUN_10887686c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887686c; end: 1088768b3;  */

void FUN_10887686c(int param_1,undefined8 param_2,long param_3)

{
  func_0x000107c34208();
  func_0x000107c287ac();
  func_0x00010887bdf0();
  func_0x000107c34490();
  func_0x000107c31410();
  func_0x000107c34488();
  FUN_1088768b4();
  func_0x000107c3448c();
  if (*(char *)(param_3 + 0x18) != '\x01') {
    func_0x00010bccb8cc();
    return;
  }
  func_0x00010054c7ec();
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (param_1 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088768b4; end: 1088768e3;  */

void FUN_1088768b4(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088768e4; end: 10887692f;  */

void FUN_1088768e4(void)

{
  func_0x00010887b7d4();
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_108876930();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108876930; end: 10887695f;  */

void FUN_108876930(int param_1)

{
  func_0x00010887b678();
  func_0x000107c287ac();
  func_0x00010887b958();
  func_0x00010887bae4();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876960; end: 108876963;  */

void FUN_108876960(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876964; end: 10887697f;  */

void FUN_108876964(void)

{
  func_0x00010887bc60();
  FUN_108876980();
  return;
}



/* Entry: 108876980; end: 108876987;  */

void FUN_108876980(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_1088769e8();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 108876988; end: 1088769e7;  */

void FUN_108876988(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_1088769e8();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 1088769e8; end: 108876a6b;  */

/* WARNING: Possible PIC construction at 0x000108876a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108876a54) */

void FUN_1088769e8(void)

{
  long unaff_x24;
  int unaff_w26;
  
  func_0x000107c34578();
  func_0x00010887b628();
  func_0x00010887bcd0();
  func_0x000107c2820c();
  func_0x00010887c704();
  func_0x000107c287ac();
  FUN_1088768b4();
  func_0x00010887c6f4();
  FUN_108876a6c();
  func_0x00010887c714();
  func_0x000107c2a10c();
  func_0x00010887c6d4();
  func_0x0001056453f4();
  func_0x000107c34474();
  func_0x00010887c734();
  func_0x000107c28208();
  func_0x00010887c724();
  if (*(char *)(unaff_x24 + 0x18) == '\x01') {
    func_0x00010054c7ec();
    func_0x0001005ecddc();
    func_0x000107c61324();
    if (unaff_w26 != 0) {
      func_0x000107c3a514();
      func_0x000107c3a50c();
      func_0x000107c3a524();
      func_0x0001003a91d4(&UNK_10f82fa8c);
      func_0x000107c3a51c();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc();
  return;
}



/* Entry: 108876a6c; end: 108876a6f;  */

void FUN_108876a6c(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108876a70; end: 108876a8f;  */

void FUN_108876a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000107c34200();
  func_0x000107c2820c();
  func_0x000107c342bc();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 108876a90; end: 108876b37;  */

long FUN_108876a90(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108876b04;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108876b04:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108876bc4();
  return param_1;
}



/* Entry: 108876b38; end: 108876b8f;  */

void FUN_108876b38(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108876bc4();
  return;
}



/* Entry: 108876b90; end: 108876b93;  */

undefined8 * FUN_108876b90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108876b94; end: 108876ba7;  */

void FUN_108876b94(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108876ba8; end: 108876be7;  */

void FUN_108876ba8(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108876be8; end: 108876c17;  */

void FUN_108876be8(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_108876c18();
  return;
}



/* Entry: 108876c18; end: 108876c7f;  */

void FUN_108876c18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_58 [56];
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_108876cd8(auStack_58,*unaff_x19);
    func_0x000107c344fc();
    FUN_108876c80();
    func_0x0001087dc134(auStack_58);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    func_0x0001087dc134();
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  return;
}



/* Entry: 108876c80; end: 108876cb3;  */

long FUN_108876c80(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_108876d38();
  }
  else {
    FUN_108876d6c();
  }
  return param_1;
}



/* Entry: 108876cb4; end: 108876cd7;  */

void FUN_108876cb4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001087dc134();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 108876cd8; end: 108876d37;  */

void FUN_108876cd8(long param_1,undefined4 param_2)

{
  func_0x000107c313f8();
  func_0x000107c345d8(param_1);
  func_0x000107c344b8(param_1 + 0x18);
  func_0x000107c2879c();
  func_0x000107c34464();
  func_0x000107c313d8();
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



/* Entry: 108876d38; end: 108876d6b;  */

void FUN_108876d38(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8();
  func_0x000107c27b9c();
  func_0x000107c3194c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 108876d6c; end: 108876d87;  */

void FUN_108876d6c(long param_1)

{
  FUN_108876d88();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


