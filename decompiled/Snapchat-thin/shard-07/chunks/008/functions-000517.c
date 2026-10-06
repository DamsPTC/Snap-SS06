/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105996b68; end: 105996b93;  */

/* WARNING: Possible PIC construction at 0x000105996b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105996b80) */

void FUN_105996b68(long param_1)

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



/* Entry: 105996b94; end: 105996b97;  */

undefined8 FUN_105996b94(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105996b68(param_1);
  return param_1;
}



/* Entry: 105996b98; end: 105996bab;  */

void FUN_105996b98(void)

{
  FUN_105996b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996bac; end: 105996bb7;  */

undefined ** FUN_105996bac(void)

{
  return &PTR_DAT_1108c7f88;
}



/* Entry: 105996bb8; end: 105996cb3;  */

long * FUN_105996bb8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010599bd24();
  func_0x00010599be50(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_105996bf0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_105996bf0:
      param_4 = (long *)&UNK_10f318248;
      func_0x00010599bdd4();
      func_0x00010599bc18();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_105996c28;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_105996c28:
      param_4 = (long *)&UNK_10f31827f;
      func_0x00010599bdd4();
      func_0x00010599c0c0();
      func_0x00010599bc4c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105996c80;
  }
  else if ((int)param_2 == 0) goto LAB_105996c80;
  param_4 = (long *)&UNK_10f3182ab;
  func_0x00010599bdd4();
  func_0x00010599bc4c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_105996c80:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010599bffc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 105996cb4; end: 105996d47;  */

long FUN_105996cb4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010599be08();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  func_0x00010599be44(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  func_0x00010599be44(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 105996d48; end: 105996d4b;  */

void FUN_105996d48(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  func_0x00010599bcd4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x0001001a53d4();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105996d4c; end: 105996d83;  */

long FUN_105996d4c(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105996f88();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105996d84; end: 105996d97;  */

void FUN_105996d84(void)

{
  FUN_105996d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996d98; end: 105996da3;  */

undefined ** FUN_105996d98(void)

{
  return &PTR_DAT_1108c7fd0;
}



/* Entry: 105996da4; end: 105996dd7;  */

void FUN_105996da4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010599be9c();
  func_0x00010029b2d4(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 105996dd8; end: 105996ea3;  */

long * FUN_105996dd8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010599bbf0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105996e1c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_105996e1c;
  param_4 = (long *)&UNK_10f3182d7;
  func_0x00010599bdd4();
  func_0x00010599bc18();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_105996e1c:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x20);
    param_1 = (long *)0x2;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if (*(char *)(unaff_x21 + 0x28) == '\x01') {
    func_0x0001001a597c();
    param_1 = (long *)(ulong)*(byte *)(unaff_x21 + 0x28);
    uVar2 = 0x18;
    func_0x0001001a59d0(0x18,unaff_x19);
    func_0x0001001a59d0(param_1,uVar2);
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010599bffc();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 105996ea4; end: 105996f17;  */

void FUN_105996ea4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010599bc38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000105997068(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00010599bae8();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x28) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 105996f18; end: 105996f1b;  */

void FUN_105996f18(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bbb4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010599bff0();
    puVar1 = unaff_x22;
  }
  func_0x00010599bcd4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c0ac();
    if (param_1 == (ulong *)0x0) {
      func_0x00010599b344();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_105996f1c();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105996f1c; end: 105996f87;  */

void FUN_105996f1c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  func_0x00010599bcd4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105996f88; end: 105996fb3;  */

undefined8 FUN_105996f88(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  func_0x00010599bf64();
  return param_1;
}



/* Entry: 105996fb4; end: 105996fb7;  */

undefined8 FUN_105996fb4(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  func_0x00010599bf64();
  return param_1;
}



/* Entry: 105996fb8; end: 105996fcb;  */

void FUN_105996fb8(void)

{
  FUN_105996f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996fcc; end: 105996fd7;  */

undefined ** FUN_105996fcc(void)

{
  return &PTR_DAT_1108c8010;
}



/* Entry: 105996fd8; end: 1059970df;  */

long * FUN_105996fd8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010599bbc4();
  lVar3 = (long)*(char *)((param_1[2] & 0xfffffffffffffffcU) + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)((param_1[2] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x0001001a5a30();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x00010599c0c0();
    func_0x0001001a5a30();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 1059970e0; end: 1059970e3;  */

void FUN_1059970e0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  func_0x00010599bcd4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 1059970e4; end: 105997117;  */

long FUN_1059970e4(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1059972a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105997118; end: 10599711b;  */

long FUN_105997118(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1059972a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10599711c; end: 10599712f;  */

void FUN_10599711c(void)

{
  FUN_1059970e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997130; end: 10599713b;  */

undefined ** FUN_105997130(void)

{
  return &PTR_DAT_1108c8060;
}



/* Entry: 10599713c; end: 10599723b;  */

void FUN_10599713c(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    FUN_1053936e4(param_1 + 3);
  }
  if ((param_1[2] & 1) != 0) {
    FUN_105997314(param_1[6]);
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10599723c; end: 10599723f;  */

void FUN_10599723c(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010599b3a8();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_105997240();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 105997240; end: 1059972a7;  */

void FUN_105997240(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  func_0x00010599c128();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00010599b428();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_105997484();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 1059972a8; end: 1059972ef;  */

long FUN_1059972a8(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1059979b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 1059972f0; end: 1059972f3;  */

long FUN_1059972f0(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1059979b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 1059972f4; end: 105997307;  */

void FUN_1059972f4(void)

{
  FUN_1059972a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997308; end: 105997313;  */

undefined ** FUN_105997308(void)

{
  return &PTR_DAT_1108c80a8;
}



/* Entry: 105997314; end: 10599734f;  */

void FUN_105997314(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010599bcc8();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_10598f91c(unaff_x19[4]);
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 105997350; end: 10599746f;  */

long * FUN_105997350(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010599bbc4();
  lVar4 = param_1[4];
  puVar1 = (ulong *)(param_1 + 3);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x18);
    func_0x00010599bcbc();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010599bd60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 105997470; end: 105997483;  */

void FUN_105997470(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  func_0x00010599c128();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00010599b428();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_105997484();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105997484; end: 105997507;  */

void FUN_105997484(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c0ac();
    if (param_1 == (ulong *)0x0) {
      func_0x00010599be70();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_10598fc3c();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105997508; end: 105997553;  */

void FUN_105997508(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1059977cc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105997554; end: 105997587;  */

long FUN_105997554(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105997508(param_1);
  }
  return param_1;
}



/* Entry: 105997588; end: 10599758b;  */

long FUN_105997588(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105997508(param_1);
  }
  return param_1;
}



/* Entry: 10599758c; end: 10599759f;  */

void FUN_10599758c(void)

{
  FUN_105997554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059975a0; end: 1059975af;  */

long FUN_1059975a0(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105998b18();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059975b0; end: 105997697;  */

void FUN_1059975b0(long param_1)

{
  ulong *puVar1;
  
  FUN_105997508();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 105997698; end: 1059977cb;  */

void FUN_105997698(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        func_0x000105997724();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_105997508();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00010599be64();
        func_0x00010599b494();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 1059977cc; end: 105997813;  */

long FUN_1059977cc(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105998b18();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105997814; end: 105997827;  */

void FUN_105997814(void)

{
  FUN_1059977cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997828; end: 105997833;  */

undefined ** FUN_105997828(void)

{
  return &PTR_DAT_1108c8138;
}



/* Entry: 105997834; end: 105997883;  */

void FUN_105997834(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010599bcc8();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000105993a08(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10598f91c(unaff_x19[5]);
    }
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 105997884; end: 1059979b3;  */

long * FUN_105997884(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010599bbf0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1059978c8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1059978c8;
  param_4 = (long *)&UNK_10f3182fb;
  func_0x00010599bdd4();
  func_0x00010599bc18();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1059978c8:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    func_0x00010599c238();
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x38);
    param_1 = (long *)0x3;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010599bffc();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 1059979b4; end: 1059979b7;  */

void FUN_1059979b4(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010599bbb4();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599c220();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010599c0ac();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c140();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x000105993d50();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010599c1e0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1059979b8; end: 1059979ef;  */

long FUN_1059979b8(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059979f0; end: 1059979f3;  */

long FUN_1059979f0(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059979f4; end: 105997a07;  */

void FUN_1059979f4(void)

{
  FUN_1059979b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997a08; end: 105997a13;  */

undefined ** FUN_105997a08(void)

{
  return &PTR_DAT_1108c8188;
}



/* Entry: 105997a14; end: 105997aa7;  */

long * FUN_105997a14(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010599bbf0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105997a58;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_105997a58;
  param_4 = (long *)&UNK_10f31832f;
  func_0x00010599bdd4();
  func_0x00010599bc18();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_105997a58:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x38);
    param_1 = (long *)0x2;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010599bffc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 105997aa8; end: 105997b13;  */

void FUN_105997aa8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010599bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_105990458(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00010599bdc0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
  }
  func_0x00010599bf88();
  return;
}



/* Entry: 105997b14; end: 105997b23;  */

void FUN_105997b14(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c0ac();
    if (param_1 == (ulong *)0x0) {
      func_0x00010599be70();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_10598fc3c();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105997b24; end: 105997b47;  */

undefined8 FUN_105997b24(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997b48; end: 105997b4b;  */

undefined8 FUN_105997b48(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997b4c; end: 105997b5f;  */

void FUN_105997b4c(void)

{
  FUN_105997b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997b60; end: 105997be7;  */

undefined ** FUN_105997b60(void)

{
  return &PTR_DAT_1108c81d0;
}



/* Entry: 105997be8; end: 105997c0b;  */

undefined8 FUN_105997be8(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997c0c; end: 105997c0f;  */

undefined8 FUN_105997c0c(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997c10; end: 105997c23;  */

void FUN_105997c10(void)

{
  FUN_105997be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997c24; end: 105997c9f;  */

undefined ** FUN_105997c24(void)

{
  return &PTR_DAT_1108c8218;
}



/* Entry: 105997ca0; end: 105997d1b;  */

void FUN_105997ca0(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105997cf8;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105997be8();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_105997cf8;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105997cf8;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105997b24();
    }
  }
  __ZdlPv();
LAB_105997cf8:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105997d1c; end: 105997d4f;  */

long FUN_105997d1c(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105997ca0(param_1);
  }
  return param_1;
}



/* Entry: 105997d50; end: 105997d53;  */

long FUN_105997d50(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105997ca0(param_1);
  }
  return param_1;
}



/* Entry: 105997d54; end: 105997d67;  */

void FUN_105997d54(void)

{
  FUN_105997d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997d68; end: 105997d73;  */

undefined ** FUN_105997d68(void)

{
  return &PTR_DAT_1108c8268;
}



/* Entry: 105997d74; end: 105997e3f;  */

long * FUN_105997d74(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  uint extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  func_0x00010599c1c0();
  if (extraout_w8 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    func_0x00010599bd60();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 105997e40; end: 105997e4f;  */

void FUN_105997e40(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10599592c;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_105997ca0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c04c();
      func_0x000105997bdc();
      goto LAB_10599592c;
    }
    func_0x00010599be64();
    FUN_10599b56c();
  }
  else {
    if (iVar1 != 1) goto LAB_10599592c;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c04c();
      FUN_105997b14();
      goto LAB_10599592c;
    }
    func_0x00010599be64();
    FUN_10599b51c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10599592c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105997e50; end: 105997e73;  */

undefined8 FUN_105997e50(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997e74; end: 105997e77;  */

undefined8 FUN_105997e74(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105997e78; end: 105997e8b;  */

void FUN_105997e78(void)

{
  FUN_105997e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997e8c; end: 105997f07;  */

undefined ** FUN_105997e8c(void)

{
  return &PTR_DAT_1108c82b0;
}



/* Entry: 105997f08; end: 105997f3b;  */

long FUN_105997f08(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105997f3c; end: 105997f3f;  */

long FUN_105997f3c(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105997f40; end: 105997f53;  */

void FUN_105997f40(void)

{
  FUN_105997f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105997f54; end: 105997f5f;  */

undefined ** FUN_105997f54(void)

{
  return &PTR_DAT_1108c8300;
}



/* Entry: 105997f60; end: 10599803b;  */

void FUN_105997f60(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010599bfa0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599c150();
  }
  func_0x00010599bf1c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10599803c; end: 10599803f;  */

void FUN_10599803c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 105998040; end: 10599809b;  */

void FUN_105998040(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10599809c; end: 1059980cf;  */

long FUN_10599809c(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059980d0; end: 1059980d3;  */

long FUN_1059980d0(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059980d4; end: 1059980e7;  */

void FUN_1059980d4(void)

{
  FUN_10599809c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059980e8; end: 1059980f3;  */

undefined ** FUN_1059980e8(void)

{
  return &PTR_DAT_1108c8368;
}



/* Entry: 1059980f4; end: 1059981cf;  */

void FUN_1059980f4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010599bfa0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599c150();
  }
  func_0x00010599bf1c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1059981d0; end: 1059981d3;  */

void FUN_1059981d0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1059981d4; end: 10599822f;  */

void FUN_1059981d4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 105998230; end: 10599825b;  */

long FUN_105998230(long param_1)

{
  func_0x00010599bd80();
  func_0x00010006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10599825c; end: 10599825f;  */

long FUN_10599825c(long param_1)

{
  func_0x00010599bd80();
  func_0x00010006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 105998260; end: 105998273;  */

void FUN_105998260(void)

{
  FUN_105998230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105998274; end: 105998293;  */

undefined ** FUN_105998274(void)

{
  return &PTR_DAT_1108c83c8;
}



/* Entry: 105998294; end: 105998333;  */

long * FUN_105998294(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int *piVar4;
  int iVar5;
  int *unaff_x22;
  int iVar6;
  
  func_0x00010599bbc4();
  uVar1 = *(uint *)(param_1 + 0x20);
  piVar4 = (int *)(ulong)uVar1;
  if (uVar1 != 0) {
    func_0x00010599bcfc();
    *param_1 = 10;
    while (0x7f < uVar1) {
      func_0x00010599c200();
    }
    func_0x00010599c1ec();
    do {
      func_0x00010599bcfc();
      uVar3 = (ulong)*piVar4;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar3) {
        func_0x00010599c1cc();
        uVar3 = extraout_x8;
      }
      piVar4 = piVar4 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar3;
    } while (piVar4 < unaff_x22);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 105998334; end: 1059983c7;  */

long FUN_105998334(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 1059983c8; end: 1059984a3;  */

void FUN_1059983c8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010599bddc();
  func_0x00010599c134();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 1059984a4; end: 1059984d7;  */

long FUN_1059984a4(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001059983f8(param_1);
  }
  return param_1;
}



/* Entry: 1059984d8; end: 1059984db;  */

long FUN_1059984d8(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001059983f8(param_1);
  }
  return param_1;
}



/* Entry: 1059984dc; end: 1059984ef;  */

void FUN_1059984dc(void)

{
  FUN_1059984a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059984f0; end: 1059984fb;  */

undefined ** FUN_1059984f0(void)

{
  return &PTR_DAT_1108c8428;
}


