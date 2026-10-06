/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059902bc; end: 1059902c7;  */

undefined ** FUN_1059902bc(void)

{
  return &PTR_DAT_1108c6b48;
}



/* Entry: 1059902c8; end: 10599030f;  */

void FUN_1059902c8(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10598f91c(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105990310; end: 1059903d7;  */

long * FUN_105990310(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10599037c;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10599037c;
  }
  func_0x0001006281b4(puVar1,lVar3,1,&UNK_10f317d08);
  plVar2 = param_3;
  func_0x0001001a5a30(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10599037c:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x0001059909f4(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar8;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar4);
}



/* Entry: 1059903d8; end: 105990457;  */

long FUN_1059903d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_105990410;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_105990410:
    lVar3 = 0;
    goto LAB_105990414;
  }
  func_0x0001001a5744();
  lVar3 = uVar1 + 1;
LAB_105990414:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_105990458(*(undefined8 *)(param_1 + 0x20));
    func_0x000105990a6c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 105990458; end: 10599046f;  */

void FUN_105990458(void)

{
  FUN_10598fb5c();
  func_0x0001059909b8();
  return;
}



/* Entry: 105990470; end: 105990473;  */

void FUN_105990470(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105990a5c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x0001001a53d4(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_1059908dc();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10598fc3c();
    }
  }
  func_0x000105990a10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000105990a4c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105990474; end: 105990513;  */

void FUN_105990474(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105990a5c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x0001001a53d4(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_1059908dc();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10598fc3c();
    }
  }
  func_0x000105990a10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000105990a4c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105990514; end: 10599053f;  */

undefined8 FUN_105990514(undefined8 param_1)

{
  func_0x000105990a88();
  FUN_105990540(param_1);
  return param_1;
}



/* Entry: 105990540; end: 105990597;  */

void FUN_105990540(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_105990268();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105990268();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_105990268();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_105990268();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105990598; end: 10599059b;  */

undefined8 FUN_105990598(undefined8 param_1)

{
  func_0x000105990a88();
  FUN_105990540(param_1);
  return param_1;
}



/* Entry: 10599059c; end: 1059905af;  */

void FUN_10599059c(void)

{
  FUN_105990514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059905b0; end: 1059905bb;  */

undefined ** FUN_1059905b0(void)

{
  return &PTR_DAT_1108c6b98;
}



/* Entry: 1059905bc; end: 105990723;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1059905bc(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *in_x3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  int iVar6;
  
  func_0x000105990aa4();
  if ((unaff_w21 & 1) != 0) {
    in_x3 = (long *)0x2;
    func_0x0001059909f4(2,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    in_x3 = (long *)0x3;
    func_0x0001059909f4(3,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    in_x3 = (long *)0x4;
    func_0x0001059909f4(4,*(long *)(unaff_x20 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x14));
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    in_x3 = (long *)0x5;
    func_0x0001059909f4(5,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)in_x3 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)in_x3) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        in_x3 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)in_x3 + (long)iVar5);
    }
    _memcpy(in_x3,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)in_x3 + (long)(int)uVar3);
  }
  return in_x3;
}



/* Entry: 105990724; end: 10599073b;  */

void FUN_105990724(void)

{
  FUN_1059903d8();
  func_0x0001059909b8();
  return;
}



/* Entry: 10599073c; end: 105990757;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10599073c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105990a5c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x000105990a3c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_105990474();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000105990a3c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_105990474();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000105990a3c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_105990474();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x000105990a3c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_105990474();
      }
    }
  }
  func_0x000105990a10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000105990a4c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105990758; end: 10599081b;  */

void FUN_105990758(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000105990a90();
  }
  else {
    func_0x000105990a30();
  }
  *puVar1 = &PTR_FUN_1108c6a18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10599081c; end: 1059908db;  */

undefined8 * FUN_10599081c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x000105990a98();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_1108c6a68;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000105990a04();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000105990a44();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000105990a44();
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000105990a44();
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000105990a44();
  }
  puVar2[6] = puVar3;
  return puVar2;
}



/* Entry: 1059908dc; end: 10599091f;  */

undefined8 * FUN_1059908dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_1108c6960;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10598fd00(puVar2 + 2,param_1,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  func_0x0001002a0e60(lVar1,param_1);
  puVar2[5] = lVar1;
  param_2 = param_2 + 0x30;
  func_0x0001002a0e60(param_2,param_1);
  puVar2[6] = param_2;
  *(undefined4 *)(puVar2 + 7) = 0;
  return puVar2;
}



/* Entry: 105990920; end: 1059909ab;  */

undefined8 * FUN_105990920(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000105990a90();
  }
  else {
    func_0x000105990a30();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_1108c6a18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000105990a04();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x0001002a0e60(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1059908dc(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 1059909ac; end: 105990ac3;  */

void FUN_1059909ac(void)

{
  return;
}



/* Entry: 105990ac4; end: 105990b3b;  */

long FUN_105990ac4(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  byte bVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  plVar1 = param_5;
  func_0x0001001a597c(param_5,param_4);
  func_0x0001001a59d0(param_1 << 3 | 2,plVar1);
  FUN_1059928c4(param_2,param_3);
  func_0x0001001a59d0();
  func_0x000105992f44();
  plVar1 = (long *)0x2;
  func_0x000105992fc4(2,param_3,param_2);
  lVar5 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_3[1], lVar5 < 0x80)) {
    lVar8 = *param_5;
    iVar6 = 0x10;
    func_0x0001001a5b20();
    if (lVar5 <= lVar8 + ~((long)plVar1 + (long)iVar6) + 0x10) {
      lVar8 = (long)plVar1 + 2;
      bVar2 = 0x12;
      while (0x7f < bVar2) {
        *(byte *)(lVar8 + -2) = bVar2 | 0x80;
        lVar8 = lVar8 + 1;
        bVar2 = 0;
      }
      *(byte *)(lVar8 + -2) = bVar2;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memcpy(lVar8,plVar1,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_5,2);
  func_0x00010b4d56cc();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x00010b4d576c();
    uVar4 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x00010b4d5758();
    uVar3 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*param_5 - (long)plVar1 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*param_5 - (int)plVar1) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar7;
      plVar1 = param_5;
      func_0x000107c303e4(param_5,lVar5);
    }
    func_0x00010b4d5738();
    return (long)plVar1 + (long)iVar6;
  }
  _memcpy(plVar1);
  return (long)plVar1 + (long)(int)param_3;
}



/* Entry: 105990b3c; end: 105990b6f;  */

long FUN_105990b3c(int param_1)

{
  int extraout_w8;
  ulong extraout_x9;
  int unaff_w20;
  
  func_0x0001001a5744();
  func_0x000105992fd0();
  func_0x000105992fdc(unaff_w20 + param_1 + 2);
  return (extraout_x9 >> 6 & 0x3ffffff) + (long)extraout_w8;
}



/* Entry: 105990b70; end: 105990b7b;  */

undefined1  [16] FUN_105990b70(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x24;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 105990b7c; end: 105990b97;  */

long FUN_105990b7c(long param_1)

{
  long extraout_x8;
  
  FUN_105996cb4();
  func_0x000105992ad8();
  return param_1 + extraout_x8;
}



/* Entry: 105990b98; end: 105990ba3;  */

undefined1  [16] FUN_105990b98(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x44;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 105990ba4; end: 105990bcf;  */

undefined8 * FUN_105990ba4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108c6c80;
  param_1[1] = param_2;
  FUN_105990bd0();
  return param_1;
}



/* Entry: 105990bd0; end: 105990c13;  */

void FUN_105990bd0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x20) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x28) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x38) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  return;
}



/* Entry: 105990c14; end: 105990c3f;  */

undefined8 FUN_105990c14(undefined8 param_1)

{
  func_0x000105992d08();
  FUN_105990c40(param_1);
  return param_1;
}



/* Entry: 105990c40; end: 105990cef;  */

void FUN_105990c40(long param_1)

{
  func_0x000100067de0(param_1 + 0x18);
  func_0x000105992e44();
  func_0x000105992e4c();
  func_0x000105992e98();
  func_0x000105992df8();
  func_0x000105992e6c();
  func_0x000105992f84();
  func_0x000100067de0(param_1 + 0x50);
  func_0x000100067de0(param_1 + 0x58);
  func_0x000100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bceba98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105990cf0; end: 105990cf3;  */

undefined8 FUN_105990cf0(undefined8 param_1)

{
  func_0x000105992d08();
  FUN_105990c40(param_1);
  return param_1;
}



/* Entry: 105990cf4; end: 105990d07;  */

void FUN_105990cf4(void)

{
  FUN_105990c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105990d08; end: 105990d13;  */

undefined ** FUN_105990d08(void)

{
  return &PTR_DAT_1108c6cc0;
}



/* Entry: 105990d14; end: 105990def;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105990d14(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x000105992c40();
  func_0x000105992e3c();
  func_0x000105992e74();
  func_0x000105992e90();
  func_0x000105992df0();
  func_0x000105992e64();
  func_0x000105992f7c();
  func_0x00010029b2d4(unaff_x19 + 0x50);
  func_0x00010029b2d4(unaff_x19 + 0x58);
  func_0x00010029b2d4(unaff_x19 + 0x60);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(unaff_x19 + 0x90));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0xca) = 0;
  *(undefined8 *)(unaff_x19 + 0xc2) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 105990df0; end: 1059912eb;  */

long * FUN_105990df0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x000105992c14();
  func_0x000105992d34(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105990e2c;
  }
  else if ((int)param_2 != 0) {
LAB_105990e2c:
    param_4 = (long *)&UNK_10f317d41;
    func_0x000105992cf8();
    param_2 = (long *)0xa;
    param_1 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = param_1;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105990e6c;
  }
  else if ((int)param_2 != 0) {
LAB_105990e6c:
    param_4 = (long *)&UNK_10f317d7d;
    func_0x000105992cf8();
    param_2 = (long *)0x14;
    param_1 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    func_0x000105992b78();
    plVar3 = (long *)0xf0;
    func_0x0001001a59d0();
    func_0x000105992d60();
    param_2 = param_1;
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    func_0x000105992b78();
    plVar4 = (long *)0x140;
    func_0x0001001a59d0();
    func_0x000105992d60();
    param_2 = plVar3;
    unaff_x21 = plVar4;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x32;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105990f10;
  }
  else if ((int)param_2 != 0) {
LAB_105990f10:
    param_4 = (long *)&UNK_10f317db9;
    func_0x000105992cf8();
    param_2 = (long *)0x3c;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105990f50;
  }
  else if ((int)param_2 != 0) {
LAB_105990f50:
    param_4 = (long *)&UNK_10f317def;
    func_0x000105992cf8();
    param_2 = (long *)0x46;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  func_0x000105992c88();
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105990f8c;
  }
  else if ((int)param_2 != 0) {
LAB_105990f8c:
    param_4 = (long *)&UNK_10f317e29;
    func_0x000105992cf8();
    param_2 = (long *)0x50;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x70);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x5a;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x64;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x000105992b78();
    plVar3 = (long *)0x370;
    func_0x0001001a59d0();
    func_0x000105992b84();
    param_2 = plVar4;
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    func_0x000105992b78();
    plVar4 = (long *)0x3c0;
    func_0x0001001a59d0();
    func_0x000105992d60();
    param_2 = plVar3;
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105991044;
  }
  else if ((int)param_2 != 0) {
LAB_105991044:
    param_4 = (long *)&UNK_10f317e60;
    func_0x000105992cf8();
    param_2 = (long *)0x82;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x80);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x8c;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x96;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x90);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0xa0;
    func_0x000105992b90();
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1059910d8;
  }
  else if ((int)param_2 != 0) {
LAB_1059910d8:
    param_4 = (long *)&UNK_10f317ea0;
    func_0x000105992cf8();
    param_2 = (long *)0xaa;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105991118;
  }
  else if ((int)param_2 != 0) {
LAB_105991118:
    param_4 = (long *)&UNK_10f317ed7;
    func_0x000105992cf8();
    param_2 = (long *)0xb4;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_105991158;
  }
  else if ((int)param_2 != 0) {
LAB_105991158:
    param_4 = (long *)&UNK_10f317f0d;
    func_0x000105992cf8();
    param_2 = (long *)0xbe;
    plVar4 = unaff_x19;
    func_0x000105992b4c();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0xb4) != 0) {
    func_0x000105992b78();
    plVar3 = (long *)0x640;
    func_0x0001001a59d0();
    func_0x000105992b84();
    param_2 = plVar4;
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    func_0x000105992b78();
    plVar4 = (long *)0x690;
    func_0x0001001a59d0();
    func_0x000105992b84();
    param_2 = plVar3;
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    func_0x000105992b78();
    plVar3 = (long *)0x6e0;
    func_0x0001001a59d0();
    func_0x000105992d60();
    param_2 = plVar4;
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 200) != 0) {
    func_0x000105992b78();
    plVar4 = (long *)0x730;
    func_0x0001001a59d0();
    func_0x000105992d60();
    param_2 = plVar3;
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0xc4) != 0) {
    func_0x000105992b78();
    plVar3 = (long *)0x780;
    func_0x0001001a59d0();
    func_0x000105992b84();
    param_2 = plVar4;
    unaff_x21 = plVar3;
  }
  func_0x000105992d34(*(undefined8 *)(unaff_x20 + 0x60));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_105991268;
  }
  else if ((int)param_2 == 0) goto LAB_105991268;
  param_4 = (long *)&UNK_10f317f46;
  func_0x000105992cf8();
  func_0x000105992b4c();
  plVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_105991268:
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
    func_0x000105992b78();
    plVar4 = (long *)0x820;
    func_0x0001001a59d0(0x820,plVar3);
    func_0x000105992ba8();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0xd1) == '\x01') {
    func_0x000105992b78();
    plVar3 = (long *)0x870;
    func_0x0001001a59d0(0x870,plVar4);
    func_0x000105992ba8();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000105992d48();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000105992e30();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1059912ec; end: 10599156f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1059912ec(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long unaff_x19;
  
  func_0x000105992bf0();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar5 = param_1 + 1;
  }
  func_0x000105992c98();
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992cd8();
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992d28(*(undefined8 *)(unaff_x19 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992c68();
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992ce8();
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992d28(*(undefined8 *)(unaff_x19 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992d28(*(undefined8 *)(unaff_x19 + 0x50));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992d28(*(undefined8 *)(unaff_x19 + 0x58));
  lVar4 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  func_0x000105992d28(*(undefined8 *)(unaff_x19 + 0x60));
  lVar4 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000105992d6c();
  }
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      FUN_105991570();
      func_0x000105992d6c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      FUN_105991570();
      func_0x000105992d6c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x78);
      FUN_105991570();
      func_0x000105992d6c();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x80);
      FUN_105991570();
      func_0x000105992d6c();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x88);
      FUN_105991570();
      func_0x000105992d6c();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x90);
      FUN_105991570();
      func_0x000105992d6c();
    }
  }
  iVar3 = -9;
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9 + 2;
    iVar3 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_00 + 2;
    iVar3 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_01 + 2;
    iVar3 = extraout_w8_01;
  }
  if (*(int *)(unaff_x19 + 0xb0) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_02 + 2;
    iVar3 = extraout_w8_02;
  }
  if (*(int *)(unaff_x19 + 0xb4) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_03 + 2;
    iVar3 = extraout_w8_03;
  }
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_04 + 2;
    iVar3 = extraout_w8_04;
  }
  if (*(int *)(unaff_x19 + 0xc0) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_05 + 2;
    iVar3 = extraout_w8_05;
  }
  if (*(int *)(unaff_x19 + 0xc4) != 0) {
    func_0x000105992af0();
    lVar5 = extraout_x9_06 + 2;
    iVar3 = extraout_w8_06;
  }
  if (*(long *)(unaff_x19 + 200) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 200)) * iVar3 + 0x280U >> 6) + 2;
  }
  lVar4 = lVar5 + 3;
  if (*(char *)(unaff_x19 + 0xd0) == '\0') {
    lVar4 = lVar5;
  }
  func_0x000105992f20(lVar4);
  if ((extraout_x8_09 & 1) != 0) {
    func_0x000105992dbc();
    lVar5 = extraout_x8_10;
    if (extraout_x8_10 < 0) {
      lVar5 = *(long *)(extraout_x9_07 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 105991570; end: 10599158b;  */

long FUN_105991570(long param_1)

{
  long extraout_x8;
  
  func_0x00010bcebbb0();
  func_0x000105992ad8();
  return param_1 + extraout_x8;
}



/* Entry: 10599158c; end: 1059918b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10599158c(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000105992bc0();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x000105992efc();
  }
  func_0x000105992c24();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992e54();
  }
  func_0x000105992ca8();
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992f18();
  }
  func_0x000105992cb8();
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992f10();
  }
  func_0x000105992d1c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992f74();
  }
  func_0x000105992c78();
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992e5c();
  }
  func_0x000105992cc8();
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992e7c();
  }
  func_0x000105992d1c(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    func_0x000105992f8c();
  }
  func_0x000105992d1c(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    param_1 = (ulong *)(unaff_x21 + 0x50);
    func_0x0001001a53d4();
  }
  func_0x000105992d1c(*(undefined8 *)(unaff_x20 + 0x58));
  lVar3 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    param_1 = (ulong *)(unaff_x21 + 0x58);
    func_0x0001001a53d4();
  }
  func_0x000105992d1c(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000105992d10();
    }
    param_1 = (ulong *)(unaff_x21 + 0x60);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        func_0x000105992f08();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    *(long *)(unaff_x21 + 0xa0) = *(long *)(unaff_x20 + 0xa0);
  }
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    *(long *)(unaff_x21 + 0xa8) = *(long *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0xb0) = *(int *)(unaff_x20 + 0xb0);
  }
  if (*(int *)(unaff_x20 + 0xb4) != 0) {
    *(int *)(unaff_x21 + 0xb4) = *(int *)(unaff_x20 + 0xb4);
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    *(int *)(unaff_x21 + 0xc0) = *(int *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 0xc4) != 0) {
    *(int *)(unaff_x21 + 0xc4) = *(int *)(unaff_x20 + 0xc4);
  }
  if (*(long *)(unaff_x20 + 200) != 0) {
    *(long *)(unaff_x21 + 200) = *(long *)(unaff_x20 + 200);
  }
  if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xd0) = 1;
  }
  if (*(char *)(unaff_x20 + 0xd1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xd1) = 1;
  }
  func_0x000105992b38();
  if ((extraout_x8_09 & 1) == 0) {
    return;
  }
  func_0x000105992bd0();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1059918b4; end: 1059918cb;  */

undefined1  [16] FUN_1059918b4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x28;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1059918cc; end: 1059918e7;  */

long FUN_1059918cc(long param_1)

{
  long extraout_x8;
  
  func_0x00010bce8160();
  func_0x000105992ad8();
  return param_1 + extraout_x8;
}



/* Entry: 1059918e8; end: 1059918f3;  */

undefined1  [16] FUN_1059918e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x22;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1059918f4; end: 105991917;  */

undefined8 FUN_1059918f4(undefined8 param_1)

{
  func_0x000105992d08();
  return param_1;
}



/* Entry: 105991918; end: 10599191b;  */

undefined8 FUN_105991918(undefined8 param_1)

{
  func_0x000105992d08();
  return param_1;
}



/* Entry: 10599191c; end: 10599192f;  */

void FUN_10599191c(void)

{
  FUN_1059918f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105991930; end: 10599194f;  */

undefined ** FUN_105991930(void)

{
  return &PTR_DAT_1108c6d10;
}



/* Entry: 105991950; end: 1059919af;  */

long * FUN_105991950(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000105992be0();
  if ((int)param_1[2] != 0) {
    func_0x000105992bb4();
    func_0x000105992c04();
    func_0x000105992b84();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000105992d48();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1059919b0; end: 105991a13;  */

long FUN_1059919b0(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000105992e00();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 105991a14; end: 105991a37;  */

void FUN_105991a14(byte *param_1)

{
  byte *pbVar1;
  
  func_0x000100628240();
  pbVar1 = param_1;
  func_0x000105992d8c();
  func_0x000100628278();
  for (; (byte *)0x7f < param_1; param_1 = (byte *)((ulong)param_1 >> 7)) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  return;
}



/* Entry: 105991a38; end: 105991a47;  */

void FUN_105991a38(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x000105992db4();
  }
  else {
    func_0x000105992c34();
  }
  func_0x000105992e84(&PTR_FUN_1108c6c30);
  return;
}



/* Entry: 105991a48; end: 105991a8f;  */

undefined8 * FUN_105991a48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  puVar1 = param_1;
  func_0x000105992f94();
  puVar1[2] = extraout_x8;
  puVar1[3] = param_2;
  FUN_1059929d4();
  return param_1;
}



/* Entry: 105991a90; end: 105991ac7;  */

void FUN_105991a90(void)

{
  undefined1 in_ZR;
  
  func_0x00010006804c();
  if (!(bool)in_ZR) {
    func_0x000105992fbc();
  }
  return;
}



/* Entry: 105991ac8; end: 105991aeb;  */

undefined8 FUN_105991ac8(undefined8 param_1)

{
  FUN_105991aec(param_1,0);
  return param_1;
}



/* Entry: 105991aec; end: 105991b03;  */

void FUN_105991aec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 105991b04; end: 105991b73;  */

void FUN_105991b04(long param_1)

{
  if (param_1 == 0) {
    func_0x000105992db4();
  }
  else {
    func_0x000105992c34();
  }
  func_0x000105992e84(&PTR_FUN_1108c6c30);
  return;
}



/* Entry: 105991b74; end: 105991b97;  */

/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */

void FUN_105991b74(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    puVar2 = param_1;
    func_0x000107c39c34(param_1,0x10300380020,0);
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      puVar4 = *(undefined8 **)(unaff_x22 + unaff_x23 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000107c39c30();
        puVar4 = puVar2;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar4;
        func_0x000107c60ca0(puVar4 + 1);
        puVar2 = (undefined8 *)((long)puVar4 + unaff_x24);
        func_0x000107c60ca0();
        func_0x00010063c2d0();
        puVar4 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = (ulong)uVar1;
  while (0 < (long)uVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 105991b98; end: 105991c2b;  */

ulong * FUN_105991b98(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x000105992fa0(alStack_48);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x000105992d84();
      plVar2 = plVar2 + 1;
    }
    FUN_105991c2c(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}



/* Entry: 105991c2c; end: 105991c4b;  */

void FUN_105991c2c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_105991c4c(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 105991c4c; end: 105991c73;  */

/* WARNING: Possible PIC construction at 0x000105992044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105991ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105992048) */
/* WARNING: Removing unreachable block (ram,0x000105992050) */
/* WARNING: Removing unreachable block (ram,0x00010599206c) */
/* WARNING: Removing unreachable block (ram,0x000105992074) */
/* WARNING: Removing unreachable block (ram,0x00010599207c) */
/* WARNING: Removing unreachable block (ram,0x000105992080) */
/* WARNING: Removing unreachable block (ram,0x000105992b08) */
/* WARNING: Removing unreachable block (ram,0x000105991ff4) */
/* WARNING: Removing unreachable block (ram,0x000105992000) */
/* WARNING: Removing unreachable block (ram,0x000105992008) */
/* WARNING: Removing unreachable block (ram,0x000105992010) */
/* WARNING: Removing unreachable block (ram,0x000105992014) */
/* WARNING: Removing unreachable block (ram,0x00010064ef5c) */

long * FUN_105991c4c(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 *unaff_x29;
  long *unaff_x30;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar11 = LZCOUNT((long)param_2 - (long)param_1 >> 3) << 1 ^ 0x7e;
  plVar3 = (long *)auStack_70;
  puVar2 = auStack_70;
  uVar16 = 1;
  plVar14 = param_2;
LAB_105991ca4:
  plVar15 = plVar14 + -1;
  plStack_68 = plVar14 + -2;
LAB_105991cb8:
  lVar12 = -uVar11;
  plVar7 = param_1;
LAB_105991cc0:
  param_1 = plVar7;
  lVar12 = lVar12 + 1;
  uVar11 = (long)plVar14 - (long)param_1 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto LAB_105991e3c;
  case 2:
    lVar12 = plVar14[-1];
    func_0x000100125af4(lVar12,*param_1);
    if (((uint)lVar12 >> 7 & 1) != 0) {
      lVar12 = *param_1;
      *param_1 = plVar14[-1];
      plVar14[-1] = lVar12;
    }
    goto LAB_105991e3c;
  case 3:
    plVar7 = param_1 + 1;
    plVar8 = plVar15;
    func_0x000105992ee0(param_1,plVar7,plVar15,param_3);
    goto FUN_105991f20;
  case 4:
    plVar7 = param_1 + 1;
    plVar10 = param_1 + 2;
    plVar9 = plVar15;
    func_0x000105992ee0(param_1);
    break;
  case 5:
    plVar7 = param_1 + 1;
    plVar8 = param_1 + 2;
    plVar6 = param_1 + 3;
    func_0x000105992ee0(param_1);
    plVar3 = &lStack_b0;
    unaff_x29 = auStack_80;
    plVar10 = plVar8;
    plVar9 = plVar6;
    lStack_b0 = lVar12;
    uStack_a8 = uVar16;
    plStack_a0 = param_1;
    plStack_98 = plVar15;
    plStack_90 = plVar14;
    plStack_88 = param_3;
    func_0x000105992dd4();
    unaff_x30 = (long *)0x105992048;
    plVar15 = plVar8;
    param_1 = plVar6;
    break;
  default:
    if ((long)uVar11 < 0x18) {
      plVar7 = param_1;
      func_0x000105992e24();
      if ((int)uVar16 == 0) {
        func_0x000105992ee0();
        plVar8 = plVar7;
        lStack_b0 = lVar12;
        uStack_a8 = uVar16;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        if (plVar7 != param_2) {
          while( true ) {
            plVar8 = plVar8 + 1;
            plVar14 = plVar7 + 1;
            if (plVar14 == param_2) break;
            lVar12 = plVar7[1];
            func_0x000100125af4(lVar12,*plVar7);
            plVar7 = plVar14;
            if (((uint)lVar12 >> 7 & 1) != 0) {
              lVar12 = *plVar14;
              plVar14 = plVar8;
              do {
                plVar15 = plVar14 + -1;
                *plVar14 = *plVar15;
                lVar13 = lVar12;
                func_0x000100125af4(lVar12,plVar14[-2]);
                plVar14 = plVar15;
              } while (((uint)lVar13 >> 7 & 1) != 0);
              *plVar15 = lVar12;
            }
          }
        }
        return plVar7;
      }
      func_0x000105992ee0();
      if (plVar7 == param_2) {
        return plVar7;
      }
      lStack_b0 = lVar12;
      uStack_a8 = uVar16;
      plStack_a0 = param_1;
      plStack_98 = plVar15;
      plStack_90 = plVar14;
      plStack_88 = param_3;
      func_0x000105992dd4();
      lVar12 = 0;
      plVar15 = plVar7;
      goto LAB_1059920b0;
    }
    if (lVar12 == 1) {
      plVar8 = param_1;
      plVar7 = plVar14;
      plVar6 = plVar14;
      plVar10 = param_3;
      func_0x000105992ee0();
      if (plVar8 == plVar7) {
        return plVar6;
      }
      if (plVar8 != plVar7) {
        plVar9 = plVar8;
        lStack_b0 = lVar12;
        uStack_a8 = uVar16;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        func_0x000105992584();
        lVar12 = (long)plVar7 - (long)plVar8;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          func_0x000105992fa8();
          if (((uint)plVar9 >> 7 & 1) != 0) {
            lVar13 = *plVar7;
            *plVar7 = *plVar8;
            *plVar8 = lVar13;
            plVar9 = plVar8;
            FUN_1059925e4(plVar8,plVar10,lVar12 >> 3,plVar8);
          }
        }
        func_0x000105992e24(plVar8);
        FUN_1059926f4();
        plVar6 = plVar7;
      }
      return plVar6;
    }
    plVar7 = param_1 + (uVar11 >> 1);
    if (uVar11 < 0x81) {
      param_2 = param_1;
      func_0x000105992f3c(plVar7,param_1,plVar15);
    }
    else {
      func_0x000105992f3c(param_1,plVar7,plVar15);
      func_0x000105992f3c(param_1 + 1,plVar7 + -1,plStack_68);
      func_0x000105992f3c(param_1 + 2,plVar7 + 1,plVar14 + -3);
      param_2 = plVar7;
      func_0x000105992f3c(plVar7 + -1,plVar7,plVar7 + 1);
      lVar13 = *param_1;
      *param_1 = *plVar7;
      *plVar7 = lVar13;
    }
    if ((int)uVar16 == 0) {
      uVar4 = (uint)param_1[-1];
      param_2 = (long *)*param_1;
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) == 0) {
        func_0x000105992e24();
        func_0x0001059921c4();
        goto LAB_105991de8;
      }
    }
    plVar8 = param_1;
    func_0x000105992e24();
    func_0x000105992290();
    if (((ulong)param_2 & 1) != 0) {
      plVar6 = param_1;
      param_2 = plVar8;
      FUN_105992364(param_1,plVar8,param_3);
      plVar7 = plVar8 + 1;
      func_0x000105992e24();
      iVar5 = (int)plVar7;
      FUN_105992364();
      if (iVar5 == 0) goto code_r0x000105991db0;
      uVar11 = -lVar12;
      plVar14 = plVar8;
      if (((ulong)plVar6 & 1) != 0) goto LAB_105991e3c;
      goto LAB_105991ca4;
    }
    goto LAB_105991db8;
  }
  puVar2 = (undefined1 *)((long)plVar3 + -0x30);
  *(long **)((long)plVar3 + -0x30) = param_1;
  *(long **)((long)plVar3 + -0x28) = plVar15;
  *(long **)((long)plVar3 + -0x20) = plVar14;
  *(long **)((long)plVar3 + -0x18) = param_3;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(long **)((long)plVar3 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)plVar3 + -0x10);
  plVar8 = plVar10;
  func_0x000105992dd4();
  unaff_x30 = (long *)0x105991ff4;
  plVar15 = plVar10;
  param_1 = plVar9;
FUN_105991f20:
  *(long **)(puVar2 + -0x30) = param_1;
  *(long **)(puVar2 + -0x28) = plVar15;
  *(long **)(puVar2 + -0x20) = plVar14;
  *(long **)(puVar2 + -0x18) = param_3;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(long **)(puVar2 + -8) = unaff_x30;
  func_0x000105992dc8();
  uVar4 = (uint)*plVar7;
  func_0x000105992ed8();
  lVar12 = *plVar8;
  func_0x000100125af4(lVar12,*param_3);
  if ((uVar4 >> 7 & 1) == 0) {
    if (-1 < (char)lVar12) {
      return (long *)0x0;
    }
    func_0x000105993004();
    uVar4 = (uint)*param_3;
    func_0x000105992ed8();
    if ((uVar4 >> 7 & 1) != 0) {
      lVar12 = *plVar15;
      *plVar15 = *param_3;
      *param_3 = lVar12;
    }
  }
  else {
    lVar13 = *plVar15;
    if ((char)lVar12 < '\0') {
      *plVar15 = *plVar8;
      *plVar8 = lVar13;
    }
    else {
      *plVar15 = *param_3;
      *param_3 = lVar13;
      uVar4 = (uint)*plVar8;
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x000105993004();
      }
    }
  }
  return (long *)0x1;
LAB_1059920b0:
  plVar8 = plVar15 + 1;
  if (plVar8 == param_3) {
    return plVar7;
  }
  plVar7 = (long *)plVar15[1];
  func_0x000100125af4(plVar7,*plVar15);
  if (((uint)plVar7 >> 7 & 1) != 0) {
    plVar15 = (long *)*plVar8;
    lVar13 = lVar12;
    do {
      lVar17 = lVar13;
      puVar1 = (undefined8 *)((long)plVar14 + lVar17);
      puVar1[1] = *puVar1;
      plVar6 = plVar14;
      if (lVar17 == 0) goto LAB_105992104;
      plVar7 = plVar15;
      func_0x000100125af4(plVar15,puVar1[-1]);
      lVar13 = lVar17 + -8;
    } while (((uint)plVar7 >> 7 & 1) != 0);
    plVar6 = (long *)((long)plVar14 + lVar17);
LAB_105992104:
    *plVar6 = (long)plVar15;
  }
  lVar12 = lVar12 + 8;
  plVar15 = plVar8;
  goto LAB_1059920b0;
code_r0x000105991db0:
  plVar7 = plVar8 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_105991db8;
  goto LAB_105991cc0;
LAB_105991db8:
  param_2 = plVar8;
  FUN_105991c74(param_1,plVar8,param_3,-lVar12,uVar16);
  param_1 = plVar8 + 1;
LAB_105991de8:
  uVar16 = 0;
  uVar11 = -lVar12;
  goto LAB_105991cb8;
LAB_105991e3c:
  func_0x000105992ee0(unaff_x30);
  return unaff_x30;
}



/* Entry: 105991c74; end: 105991f1f;  */

/* WARNING: Possible PIC construction at 0x000105992044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105991ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105992048) */
/* WARNING: Removing unreachable block (ram,0x000105992050) */
/* WARNING: Removing unreachable block (ram,0x00010599206c) */
/* WARNING: Removing unreachable block (ram,0x000105992074) */
/* WARNING: Removing unreachable block (ram,0x00010599207c) */
/* WARNING: Removing unreachable block (ram,0x000105992080) */
/* WARNING: Removing unreachable block (ram,0x000105992b08) */
/* WARNING: Removing unreachable block (ram,0x000105991ff4) */
/* WARNING: Removing unreachable block (ram,0x000105992000) */
/* WARNING: Removing unreachable block (ram,0x000105992008) */
/* WARNING: Removing unreachable block (ram,0x000105992010) */
/* WARNING: Removing unreachable block (ram,0x000105992014) */
/* WARNING: Removing unreachable block (ram,0x00010064ef5c) */

long * FUN_105991c74(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 *unaff_x29;
  long *unaff_x30;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  plVar3 = (long *)auStack_70;
  puVar2 = auStack_70;
  plVar14 = param_2;
LAB_105991ca4:
  plVar15 = plVar14 + -1;
  plStack_68 = plVar14 + -2;
LAB_105991cb8:
  param_4 = -param_4;
  plVar7 = param_1;
LAB_105991cc0:
  param_1 = plVar7;
  param_4 = param_4 + 1;
  uVar11 = (long)plVar14 - (long)param_1 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto LAB_105991e3c;
  case 2:
    lVar12 = plVar14[-1];
    func_0x000100125af4(lVar12,*param_1);
    if (((uint)lVar12 >> 7 & 1) != 0) {
      lVar12 = *param_1;
      *param_1 = plVar14[-1];
      plVar14[-1] = lVar12;
    }
    goto LAB_105991e3c;
  case 3:
    plVar7 = param_1 + 1;
    plVar8 = plVar15;
    func_0x000105992ee0(param_1,plVar7,plVar15,param_3);
    goto FUN_105991f20;
  case 4:
    plVar7 = param_1 + 1;
    plVar10 = param_1 + 2;
    plVar9 = plVar15;
    func_0x000105992ee0(param_1);
    break;
  case 5:
    plVar7 = param_1 + 1;
    plVar8 = param_1 + 2;
    plVar6 = param_1 + 3;
    func_0x000105992ee0(param_1);
    plVar3 = &lStack_b0;
    unaff_x29 = auStack_80;
    plVar10 = plVar8;
    plVar9 = plVar6;
    lStack_b0 = param_4;
    uStack_a8 = param_5;
    plStack_a0 = param_1;
    plStack_98 = plVar15;
    plStack_90 = plVar14;
    plStack_88 = param_3;
    func_0x000105992dd4();
    unaff_x30 = (long *)0x105992048;
    plVar15 = plVar8;
    param_1 = plVar6;
    break;
  default:
    if ((long)uVar11 < 0x18) {
      plVar7 = param_1;
      func_0x000105992e24();
      if ((param_5 & 1) == 0) {
        func_0x000105992ee0();
        plVar8 = plVar7;
        lStack_b0 = param_4;
        uStack_a8 = param_5;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        if (plVar7 != param_2) {
          while( true ) {
            plVar8 = plVar8 + 1;
            plVar14 = plVar7 + 1;
            if (plVar14 == param_2) break;
            lVar12 = plVar7[1];
            func_0x000100125af4(lVar12,*plVar7);
            plVar7 = plVar14;
            if (((uint)lVar12 >> 7 & 1) != 0) {
              lVar12 = *plVar14;
              plVar14 = plVar8;
              do {
                plVar15 = plVar14 + -1;
                *plVar14 = *plVar15;
                lVar13 = lVar12;
                func_0x000100125af4(lVar12,plVar14[-2]);
                plVar14 = plVar15;
              } while (((uint)lVar13 >> 7 & 1) != 0);
              *plVar15 = lVar12;
            }
          }
        }
        return plVar7;
      }
      func_0x000105992ee0();
      if (plVar7 == param_2) {
        return plVar7;
      }
      lStack_b0 = param_4;
      uStack_a8 = param_5;
      plStack_a0 = param_1;
      plStack_98 = plVar15;
      plStack_90 = plVar14;
      plStack_88 = param_3;
      func_0x000105992dd4();
      lVar12 = 0;
      plVar15 = plVar7;
      goto LAB_1059920b0;
    }
    if (param_4 == 1) {
      plVar8 = param_1;
      plVar7 = plVar14;
      plVar6 = plVar14;
      plVar10 = param_3;
      func_0x000105992ee0();
      if (plVar8 == plVar7) {
        return plVar6;
      }
      if (plVar8 != plVar7) {
        plVar9 = plVar8;
        lStack_b0 = param_4;
        uStack_a8 = param_5;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        func_0x000105992584();
        lVar12 = (long)plVar7 - (long)plVar8;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          func_0x000105992fa8();
          if (((uint)plVar9 >> 7 & 1) != 0) {
            lVar13 = *plVar7;
            *plVar7 = *plVar8;
            *plVar8 = lVar13;
            plVar9 = plVar8;
            FUN_1059925e4(plVar8,plVar10,lVar12 >> 3,plVar8);
          }
        }
        func_0x000105992e24(plVar8);
        FUN_1059926f4();
        plVar6 = plVar7;
      }
      return plVar6;
    }
    plVar7 = param_1 + (uVar11 >> 1);
    if (uVar11 < 0x81) {
      param_2 = param_1;
      func_0x000105992f3c(plVar7,param_1,plVar15);
    }
    else {
      func_0x000105992f3c(param_1,plVar7,plVar15);
      func_0x000105992f3c(param_1 + 1,plVar7 + -1,plStack_68);
      func_0x000105992f3c(param_1 + 2,plVar7 + 1,plVar14 + -3);
      param_2 = plVar7;
      func_0x000105992f3c(plVar7 + -1,plVar7,plVar7 + 1);
      lVar12 = *param_1;
      *param_1 = *plVar7;
      *plVar7 = lVar12;
    }
    if ((param_5 & 1) == 0) {
      uVar4 = (uint)param_1[-1];
      param_2 = (long *)*param_1;
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) == 0) {
        func_0x000105992e24();
        func_0x0001059921c4();
        goto LAB_105991de8;
      }
    }
    plVar8 = param_1;
    func_0x000105992e24();
    func_0x000105992290();
    if (((ulong)param_2 & 1) != 0) {
      plVar6 = param_1;
      param_2 = plVar8;
      FUN_105992364(param_1,plVar8,param_3);
      plVar7 = plVar8 + 1;
      func_0x000105992e24();
      iVar5 = (int)plVar7;
      FUN_105992364();
      if (iVar5 == 0) goto code_r0x000105991db0;
      param_4 = -param_4;
      plVar14 = plVar8;
      if (((ulong)plVar6 & 1) != 0) goto LAB_105991e3c;
      goto LAB_105991ca4;
    }
    goto LAB_105991db8;
  }
  puVar2 = (undefined1 *)((long)plVar3 + -0x30);
  *(long **)((long)plVar3 + -0x30) = param_1;
  *(long **)((long)plVar3 + -0x28) = plVar15;
  *(long **)((long)plVar3 + -0x20) = plVar14;
  *(long **)((long)plVar3 + -0x18) = param_3;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(long **)((long)plVar3 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)plVar3 + -0x10);
  plVar8 = plVar10;
  func_0x000105992dd4();
  unaff_x30 = (long *)0x105991ff4;
  plVar15 = plVar10;
  param_1 = plVar9;
FUN_105991f20:
  *(long **)(puVar2 + -0x30) = param_1;
  *(long **)(puVar2 + -0x28) = plVar15;
  *(long **)(puVar2 + -0x20) = plVar14;
  *(long **)(puVar2 + -0x18) = param_3;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(long **)(puVar2 + -8) = unaff_x30;
  func_0x000105992dc8();
  uVar4 = (uint)*plVar7;
  func_0x000105992ed8();
  lVar12 = *plVar8;
  func_0x000100125af4(lVar12,*param_3);
  if ((uVar4 >> 7 & 1) == 0) {
    if (-1 < (char)lVar12) {
      return (long *)0x0;
    }
    func_0x000105993004();
    uVar4 = (uint)*param_3;
    func_0x000105992ed8();
    if ((uVar4 >> 7 & 1) != 0) {
      lVar12 = *plVar15;
      *plVar15 = *param_3;
      *param_3 = lVar12;
    }
  }
  else {
    lVar13 = *plVar15;
    if ((char)lVar12 < '\0') {
      *plVar15 = *plVar8;
      *plVar8 = lVar13;
    }
    else {
      *plVar15 = *param_3;
      *param_3 = lVar13;
      uVar4 = (uint)*plVar8;
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x000105993004();
      }
    }
  }
  return (long *)0x1;
LAB_1059920b0:
  plVar8 = plVar15 + 1;
  if (plVar8 == param_3) {
    return plVar7;
  }
  plVar7 = (long *)plVar15[1];
  func_0x000100125af4(plVar7,*plVar15);
  if (((uint)plVar7 >> 7 & 1) != 0) {
    plVar15 = (long *)*plVar8;
    lVar13 = lVar12;
    do {
      lVar16 = lVar13;
      puVar1 = (undefined8 *)((long)plVar14 + lVar16);
      puVar1[1] = *puVar1;
      plVar6 = plVar14;
      if (lVar16 == 0) goto LAB_105992104;
      plVar7 = plVar15;
      func_0x000100125af4(plVar15,puVar1[-1]);
      lVar13 = lVar16 + -8;
    } while (((uint)plVar7 >> 7 & 1) != 0);
    plVar6 = (long *)((long)plVar14 + lVar16);
LAB_105992104:
    *plVar6 = (long)plVar15;
  }
  lVar12 = lVar12 + 8;
  plVar15 = plVar8;
  goto LAB_1059920b0;
code_r0x000105991db0:
  plVar7 = plVar8 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_105991db8;
  goto LAB_105991cc0;
LAB_105991db8:
  param_2 = plVar8;
  FUN_105991c74(param_1,plVar8,param_3,-param_4,(uint)param_5 & 1);
  param_1 = plVar8 + 1;
LAB_105991de8:
  param_5 = 0;
  param_4 = -param_4;
  goto LAB_105991cb8;
LAB_105991e3c:
  func_0x000105992ee0(unaff_x30);
  return unaff_x30;
}



/* Entry: 105991f20; end: 10599201b;  */

undefined8 FUN_105991f20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x000105992dc8();
  uVar1 = (uint)*param_2;
  func_0x000105992ed8();
  uVar2 = *param_3;
  func_0x000100125af4(uVar2,*unaff_x19);
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < (char)uVar2) {
      return 0;
    }
    func_0x000105993004();
    uVar1 = (uint)*unaff_x19;
    func_0x000105992ed8();
    if ((uVar1 >> 7 & 1) != 0) {
      uVar2 = *unaff_x21;
      *unaff_x21 = *unaff_x19;
      *unaff_x19 = uVar2;
    }
  }
  else {
    uVar3 = *unaff_x21;
    if ((char)uVar2 < '\0') {
      *unaff_x21 = *param_3;
      *param_3 = uVar3;
    }
    else {
      *unaff_x21 = *unaff_x19;
      *unaff_x19 = uVar3;
      uVar1 = (uint)*param_3;
      func_0x000100125af4();
      if ((uVar1 >> 7 & 1) != 0) {
        func_0x000105993004();
      }
    }
  }
  return 1;
}



/* Entry: 10599201c; end: 1059921af;  */

void FUN_10599201c(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000105992dd4();
  func_0x000105991fd0();
  func_0x000105992fa8();
  if ((param_1 >> 7 & 1) != 0) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar1 = (uint)*param_4;
    func_0x000105992ed8();
    if ((((uVar1 >> 7 & 1) != 0) && (func_0x000105992ea0(), (uVar1 >> 7 & 1) != 0)) &&
       (func_0x000105992ebc(), (uVar1 >> 7 & 1) != 0)) {
      func_0x000105992ff0();
    }
  }
  return;
}



/* Entry: 1059921b0; end: 1059921c3;  */

undefined8 *
FUN_1059921b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_1 != param_2) {
    puVar1 = param_1;
    func_0x000105992584(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x000105992fa8();
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_1;
        *param_1 = uVar3;
        puVar1 = param_1;
        FUN_1059925e4(param_1,param_4,lVar2 >> 3,param_1);
      }
    }
    func_0x000105992e24(param_1);
    FUN_1059926f4();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 1059921c4; end: 105992363;  */

undefined8 * FUN_1059921c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = *param_1;
  puVar1 = param_1;
  func_0x000105992f34(param_1,param_2[-1]);
  puVar4 = param_1;
  if (((uint)puVar1 >> 7 & 1) == 0) {
    do {
      puVar4 = puVar4 + 1;
      if (param_2 <= puVar4) break;
      func_0x000105992f34();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  else {
    do {
      puVar4 = puVar4 + 1;
      func_0x000105992f34();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  if (puVar4 < param_2) {
    do {
      param_2 = param_2 + -1;
      func_0x000105992f34();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  while (puVar4 < param_2) {
    uVar2 = *puVar4;
    *puVar4 = *param_2;
    *param_2 = uVar2;
    do {
      puVar4 = puVar4 + 1;
      func_0x000105992f34();
    } while (((uint)puVar1 >> 7 & 1) == 0);
    do {
      param_2 = param_2 + -1;
      func_0x000105992f34();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  if (param_1 != puVar4 + -1) {
    *param_1 = puVar4[-1];
  }
  puVar4[-1] = uVar3;
  return puVar4;
}



/* Entry: 105992364; end: 1059924e7;  */

bool FUN_105992364(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  func_0x000105992d78();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar6 = unaff_x20[-1];
    func_0x000100125af4(uVar6,*unaff_x19);
    if (((uint)uVar6 >> 7 & 1) != 0) {
      uVar6 = *unaff_x19;
      *unaff_x19 = unaff_x20[-1];
      unaff_x20[-1] = uVar6;
    }
    break;
  case 3:
    FUN_105991f20();
    break;
  case 4:
    func_0x000105991fd0();
    break;
  case 5:
    FUN_10599201c();
    break;
  default:
    FUN_105991f20();
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = unaff_x19 + 3; puVar4 != unaff_x20; puVar4 = puVar4 + 1) {
      uVar2 = (uint)*puVar4;
      func_0x000105992ed8();
      if ((uVar2 >> 7 & 1) != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
          puVar5 = unaff_x19;
          if (lVar9 == -0x10) goto LAB_105992484;
          uVar3 = uVar6;
          func_0x000100125af4(uVar6,*(undefined8 *)((long)unaff_x19 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while (((uint)uVar3 >> 7 & 1) != 0);
        puVar5 = (undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
LAB_105992484:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 1059924e8; end: 1059925e3;  */

undefined8 *
FUN_1059924e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    puVar1 = param_1;
    func_0x000105992584(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x000105992fa8();
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_1;
        *param_1 = uVar3;
        puVar1 = param_1;
        FUN_1059925e4(param_1,param_4,lVar2 >> 3,param_1);
      }
    }
    func_0x000105992e24(param_1);
    FUN_1059926f4();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 1059925e4; end: 1059926f3;  */

void FUN_1059925e4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (1 < param_3) {
    uVar8 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar8) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar1 = lVar7 + 1;
      puVar9 = (undefined8 *)(param_1 + uVar1 * 8);
      uVar2 = lVar7 + 2;
      puVar10 = puVar9;
      uVar11 = uVar1;
      if ((long)uVar2 < param_3) {
        uVar5 = *puVar9;
        func_0x000100125af4(uVar5,puVar9[1]);
        puVar10 = puVar9 + 1;
        uVar11 = uVar2;
        if (-1 < (char)uVar5) {
          puVar10 = puVar9;
          uVar11 = uVar1;
        }
      }
      uVar4 = (uint)*puVar10;
      func_0x000105992ed8();
      if ((uVar4 >> 7 & 1) == 0) {
        uVar5 = *param_4;
        do {
          puVar9 = puVar10;
          *param_4 = *puVar9;
          if ((long)uVar8 < (long)uVar11) break;
          uVar2 = uVar11 << 1 | 1;
          puVar3 = (undefined8 *)(param_1 + uVar2 * 8);
          uVar1 = uVar11 * 2 + 2;
          puVar10 = puVar3;
          uVar11 = uVar2;
          if ((long)uVar1 < param_3) {
            uVar6 = *puVar3;
            func_0x000100125af4(uVar6,puVar3[1]);
            puVar10 = puVar3 + 1;
            uVar11 = uVar1;
            if (-1 < (char)uVar6) {
              puVar10 = puVar3;
              uVar11 = uVar2;
            }
          }
          uVar6 = *puVar10;
          func_0x000100125af4(uVar6,uVar5);
          param_4 = puVar9;
        } while (((uint)uVar6 >> 7 & 1) == 0);
        *puVar9 = uVar5;
      }
    }
  }
  return;
}



/* Entry: 1059926f4; end: 1059927ab;  */

void FUN_1059926f4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000105992c4c();
  lVar1 = param_2 - param_1 >> 3;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    func_0x000105992e24();
    func_0x000105992738();
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 1059927ac; end: 10599283f;  */

undefined8 * FUN_1059927ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 1 | 1;
    uVar1 = uVar4 * 2 + 2;
    uVar5 = uVar2;
    puVar6 = param_1 + uVar4 + 1;
    if ((long)uVar1 < param_3) {
      uVar3 = param_1[uVar4 + 1];
      func_0x000100125af4(uVar3,param_1[uVar4 + 2]);
      uVar5 = uVar1;
      puVar6 = param_1 + uVar4 + 2;
      if (-1 < (char)uVar3) {
        uVar5 = uVar2;
        puVar6 = param_1 + uVar4 + 1;
      }
    }
    *param_1 = *puVar6;
    uVar4 = uVar5;
    param_1 = puVar6;
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return puVar6;
}



/* Entry: 105992840; end: 1059928c3;  */

void FUN_105992840(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (1 < param_4) {
    func_0x000105992d78(param_4 + -2);
    uVar5 = extraout_x8 >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar5 * 8);
    uVar2 = *puVar1;
    puVar4 = (undefined8 *)(unaff_x20 + -8);
    func_0x000100125af4(uVar2,*puVar4);
    if (((uint)uVar2 >> 7 & 1) != 0) {
      uVar2 = *puVar4;
      do {
        puVar6 = puVar1;
        *puVar4 = *puVar6;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        puVar1 = (undefined8 *)(unaff_x19 + uVar5 * 8);
        uVar3 = *puVar1;
        func_0x000100125af4(uVar3,uVar2);
        puVar4 = puVar6;
      } while (((uint)uVar3 >> 7 & 1) != 0);
      *puVar6 = uVar2;
    }
  }
  return;
}



/* Entry: 1059928c4; end: 1059928ef;  */

int FUN_1059928c4(int param_1)

{
  int unaff_w20;
  
  func_0x0001001a5744();
  func_0x000105992fd0();
  return unaff_w20 + param_1 + 2;
}



/* Entry: 1059928f0; end: 1059929d3;  */

long FUN_1059928f0(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  plVar2 = param_1;
  func_0x000105992fc4();
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_2[1], lVar5 < 0x80)) {
    lVar8 = *param_4;
    uVar4 = (int)param_1 << 3;
    uVar1 = uVar4;
    func_0x0001001a5b20();
    if (lVar5 <= lVar8 + ~((long)plVar2 + (long)(int)uVar1) + 0x10) {
      lVar8 = (long)plVar2 + 2;
      for (uVar4 = uVar4 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *(byte *)(lVar8 + -2) = (byte)uVar4 | 0x80;
        lVar8 = lVar8 + 1;
      }
      *(byte *)(lVar8 + -2) = (byte)uVar4;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      _memcpy(lVar8,plVar2,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_4,param_1);
  func_0x00010b4d56cc();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x00010b4d576c();
    uVar4 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x00010b4d5758();
    uVar3 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*param_4 - (long)plVar2 < (long)(int)param_2) {
    while( true ) {
      iVar7 = ((int)*param_4 - (int)plVar2) + 0x10;
      iVar6 = (int)param_2;
      param_2 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar2 + (long)iVar7;
      plVar2 = param_4;
      func_0x000107c303e4(param_4,lVar5);
    }
    func_0x00010b4d5738();
    return (long)plVar2 + (long)iVar6;
  }
  _memcpy(plVar2);
  return (long)plVar2 + (long)(int)param_2;
}



/* Entry: 1059929d4; end: 105992abb;  */

void FUN_1059929d4(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x000105992da4();
  while (uStack_38 != 0) {
    func_0x000105647ed0(param_1,uStack_38 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x000105992d84();
  }
  return;
}



/* Entry: 105992abc; end: 105993017;  */

void FUN_105992abc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar7 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 2) goto code_r0x00010056a1f4;
  }
  else {
    plVar7 = (long *)plVar7[-1];
    if ((int)param_2 < 2) {
code_r0x00010056a1f4:
      uVar8 = 2;
      goto code_r0x00010056a20c;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar8 = 0x7fffffff;
      goto code_r0x00010056a20c;
    }
  }
  uVar1 = uVar1 * 2 + 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar1 = param_2;
  }
  uVar8 = (ulong)uVar1;
code_r0x00010056a20c:
  plVar5 = (long *)(uVar8 * 4 + 8);
  if (plVar7 == (long *)0x0) {
    uVar8 = (ulong)uVar2;
    func_0x000100064708();
    uVar8 = uVar8 - 8 >> 2;
    if (0x7ffffffe < uVar8) {
      uVar8 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar3 = aplStack_58;
    aplStack_58[0] = plVar5;
    func_0x0001053abb00(pplVar3,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar3 != (long **)0x0) {
      plVar7 = (long *)(long)*(char *)((long)pplVar3 + 0x17);
      pplVar6 = pplVar3;
      if ((long)plVar7 < 0) {
        pplVar6 = (long **)*pplVar3;
        plVar7 = pplVar3[1];
      }
      func_0x000107c2b940(aplStack_58,&UNK_10f317bd9,0x10a,pplVar6,plVar7);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      func_0x000107c2b948(aplStack_58);
      return;
    }
    plVar4 = plVar7;
    func_0x0001053abb54(plVar7,plVar5,1);
    plVar5 = plVar4;
  }
  *plVar5 = (long)plVar7;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      func_0x000107c610b4(plVar5 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 2);
    }
    func_0x00010056a30c(param_1);
  }
  param_1[1] = (uint)uVar8;
  *(long **)(param_1 + 2) = plVar5 + 1;
  return;
}



/* Entry: 105993018; end: 10599309b;  */

undefined8 * FUN_105993018(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c6df0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000105993850();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x0001002a0e60(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_105993794(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10599309c; end: 1059930cb;  */

long FUN_10599309c(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_1059930cc(param_1);
  return param_1;
}



/* Entry: 1059930cc; end: 1059930fb;  */

void FUN_1059930cc(long param_1)

{
  func_0x000100067de0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1059934f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059930fc; end: 1059930ff;  */

long FUN_1059930fc(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_1059930cc(param_1);
  return param_1;
}



/* Entry: 105993100; end: 105993113;  */

void FUN_105993100(void)

{
  FUN_10599309c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105993114; end: 10599311f;  */

undefined ** FUN_105993114(void)

{
  return &PTR_DAT_1108c6e30;
}



/* Entry: 105993120; end: 1059931af;  */

void FUN_105993120(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000105993170(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1059931b0; end: 1059932a3;  */

long * FUN_1059931b0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000100601864(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x0001001a597c(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x0001001a59d0(0x10,plVar2);
    func_0x0001001a59fc(plVar1,uVar3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    if (puVar8[1] == 0) goto LAB_105993268;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_105993268;
  func_0x000105993830(puVar8);
  plVar1 = param_3;
  func_0x000105993824(param_3,3);
LAB_105993268:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar1 + (long)iVar9;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar7);
  }
  _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar5);
}



/* Entry: 1059932a4; end: 10599334b;  */

long FUN_1059932a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1059932dc;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1059932dc:
    lVar3 = 0;
    goto LAB_1059932e0;
  }
  func_0x0001001a5744();
  lVar3 = uVar1 + 1;
LAB_1059932e0:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10599334c();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10599334c; end: 105993377;  */

long FUN_10599334c(long param_1)

{
  FUN_105993654();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 105993378; end: 10599337b;  */

void FUN_105993378(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_105993794(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10599345c();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599337c; end: 10599345b;  */

void FUN_10599337c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_105993794(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10599345c();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599345c; end: 1059934f7;  */

void FUN_10599345c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059934f8; end: 105993527;  */

long FUN_1059934f8(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105993528(param_1);
  return param_1;
}



/* Entry: 105993528; end: 10599354f;  */

/* WARNING: Possible PIC construction at 0x00010599353c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105993540) */

void FUN_105993528(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 105993550; end: 105993553;  */

long FUN_105993550(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105993528(param_1);
  return param_1;
}



/* Entry: 105993554; end: 105993567;  */

void FUN_105993554(void)

{
  FUN_1059934f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105993568; end: 105993573;  */

undefined ** FUN_105993568(void)

{
  return &PTR_DAT_1108c6e80;
}



/* Entry: 105993574; end: 105993653;  */

long * FUN_105993574(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_1059935b8;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1059935b8:
    func_0x000105993830(puVar5,lVar1,param_3,&UNK_10f317fbb);
    param_2 = param_3;
    func_0x000105993824(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_105993618;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_105993618;
  func_0x000105993830(puVar5);
  param_2 = param_3;
  func_0x000105993824(param_3,2);
LAB_105993618:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 105993654; end: 1059936e3;  */

long FUN_105993654(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10599368c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10599368c:
    lVar3 = 0;
    goto LAB_105993690;
  }
  func_0x0001001a5744();
  lVar3 = uVar1 + 1;
LAB_105993690:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1059936e4; end: 1059936f7;  */

void FUN_1059936e4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059936f8; end: 105993793;  */

void FUN_1059936f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x000105993844();
  }
  *puVar1 = &PTR_FUN_1108c6da0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 105993794; end: 10599380f;  */

undefined8 * FUN_105993794(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x000105993844();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_1108c6da0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000105993850();
  }
  lVar2 = param_2 + 0x10;
  func_0x0001002a0e60(lVar2,param_1);
  puVar1[2] = lVar2;
  param_2 = param_2 + 0x18;
  func_0x0001002a0e60(param_2,param_1);
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 105993810; end: 105993863;  */

void FUN_105993810(void)

{
  return;
}



/* Entry: 105993864; end: 1059938db;  */

void FUN_105993864(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x00010599bddc();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_FUN_1108c7bd8;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x00010599bb78();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010599c250();
    func_0x00010599a800();
  }
  unaff_x19[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010599c244();
    func_0x00010599a8dc();
  }
  unaff_x19[4] = puVar2;
  return;
}



/* Entry: 1059938dc; end: 105993907;  */

undefined8 FUN_1059938dc(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105993908(param_1);
  return param_1;
}



/* Entry: 105993908; end: 10599393b;  */

void FUN_105993908(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_105993ee4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105998b18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10599393c; end: 10599393f;  */

undefined8 FUN_10599393c(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105993908(param_1);
  return param_1;
}


