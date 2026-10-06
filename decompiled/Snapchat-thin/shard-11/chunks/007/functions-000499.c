/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088c586c; end: 1088c587f;  */

void FUN_1088c586c(void)

{
  FUN_1088c5844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5880; end: 1088c588b;  */

undefined ** FUN_1088c5880(void)

{
  return &PTR_DAT_110a83880;
}



/* Entry: 1088c588c; end: 1088c58ff;  */

long * FUN_1088c588c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088c68ac();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x0001088c6970();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280b8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088c5900; end: 1088c594f;  */

long FUN_1088c5900(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088c5950; end: 1088c5977;  */

undefined8 FUN_1088c5950(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c5978; end: 1088c597b;  */

undefined8 FUN_1088c5978(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c597c; end: 1088c598f;  */

void FUN_1088c597c(void)

{
  FUN_1088c5950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5990; end: 1088c599b;  */

undefined ** FUN_1088c5990(void)

{
  return &PTR_DAT_110a838c8;
}



/* Entry: 1088c599c; end: 1088c5a1f;  */

long * FUN_1088c599c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001088c69f4();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088c59e8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_1088c59e8;
  func_0x0001088c6a08();
  func_0x0001088c6a28();
  param_2 = unaff_x22;
LAB_1088c59e8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088c69c0();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1088c5a20; end: 1088c5a77;  */

void FUN_1088c5a20(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c6924();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088c69e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1088c5a78; end: 1088c5a7b;  */

void FUN_1088c5a78(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c5a7c; end: 1088c5acb;  */

void FUN_1088c5a7c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c6b30();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        func_0x00010b5c3924();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1088c5acc; end: 1088c5b1f;  */

long FUN_1088c5acc(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088d081c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1088c5a7c(param_1);
  }
  return param_1;
}



/* Entry: 1088c5b20; end: 1088c5b23;  */

long FUN_1088c5b20(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088d081c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1088c5a7c(param_1);
  }
  return param_1;
}



/* Entry: 1088c5b24; end: 1088c5b37;  */

void FUN_1088c5b24(void)

{
  FUN_1088c5acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5b38; end: 1088c5b43;  */

undefined ** FUN_1088c5b38(void)

{
  return &PTR_DAT_110a83910;
}



/* Entry: 1088c5b44; end: 1088c5c6f;  */

long * FUN_1088c5b44(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  if ((int)param_1[6] == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    func_0x0001088c68bc();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x2;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x3;
    func_0x0001088c691c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69c0();
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
  return param_4;
}



/* Entry: 1088c5c70; end: 1088c5cc3;  */

long FUN_1088c5c70(long param_1)

{
  long extraout_x8;
  
  FUN_1088d0930();
  func_0x0001088c6844();
  return param_1 + extraout_x8;
}



/* Entry: 1088c5cc4; end: 1088c5cc7;  */

void FUN_1088c5cc4(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x0001088c68f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001088c6b18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x0001088c677c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088d07f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x0001088c67b0();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bcd28();
      }
    }
  }
  func_0x0001088c6a10();
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    if ((int)unaff_x21[6] == iVar2) {
      if (iVar2 == 1) {
        param_1 = (ulong *)unaff_x21[5];
        func_0x00010b5c4808();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_1088c5a7c();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
      if (iVar2 == 1) {
        func_0x0001088c67e4();
        unaff_x21[5] = (ulong)puVar3;
        param_1 = puVar3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c68e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c5cc8; end: 1088c5cfb;  */

long FUN_1088c5cc8(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c5cfc; end: 1088c5cff;  */

long FUN_1088c5cfc(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c5d00; end: 1088c5d13;  */

void FUN_1088c5d00(void)

{
  FUN_1088c5cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5d14; end: 1088c5d1f;  */

undefined ** FUN_1088c5d14(void)

{
  return &PTR_DAT_110a83958;
}



/* Entry: 1088c5d20; end: 1088c5dcb;  */

long * FUN_1088c5d20(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x0001088c68bc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
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



/* Entry: 1088c5dcc; end: 1088c5e47;  */

void FUN_1088c5dcc(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088c67b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bcd28();
      puVar1 = puVar2;
    }
  }
  func_0x0001088c6b48();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c5e48; end: 1088c61e7;  */

void FUN_1088c5e48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110a830b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088c61e8; end: 1088c62bf;  */

void FUN_1088c61e8(long param_1)

{
  int iVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c69cc();
  if (param_1 == 0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6868();
  }
  func_0x0001088c6a3c();
  func_0x0001088c6a48(&PTR_FUN_110a83330);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c6874();
  }
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  *(int *)(unaff_x21 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_1088c65c4();
    *(undefined8 *)(unaff_x21 + 0x10) = unaff_x19;
  }
  return;
}



/* Entry: 1088c62c0; end: 1088c6323;  */

undefined8 * FUN_1088c62c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6948();
  }
  *puVar1 = &PTR_FUN_110a831f0;
  puVar1[1] = param_1;
  func_0x0001088c6b3c();
  FUN_1088c4384();
  return puVar1;
}



/* Entry: 1088c6324; end: 1088c63ef;  */

void FUN_1088c6324(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088c69cc();
  if (param_1 == 0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6868();
  }
  func_0x0001088c6a3c();
  func_0x0001088c6a48(&PTR_FUN_110a83290);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c6874();
  }
  func_0x0001088c695c();
  func_0x0001088c6aa4();
  return;
}



/* Entry: 1088c63f0; end: 1088c645b;  */

undefined8 * FUN_1088c63f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110a830b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  FUN_1088c4460();
  return puVar1;
}



/* Entry: 1088c645c; end: 1088c65c3;  */

void FUN_1088c645c(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088c69cc();
  if (param_1 == 0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6868();
  }
  func_0x0001088c6a3c();
  func_0x0001088c6a48(&PTR_FUN_110a83240);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c6874();
  }
  func_0x0001088c695c();
  func_0x0001088c6aa4();
  return;
}



/* Entry: 1088c65c4; end: 1088c6627;  */

undefined8 * FUN_1088c65c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6948();
  }
  *puVar1 = &PTR_FUN_110a831a0;
  puVar1[1] = param_1;
  func_0x0001088c6b3c();
  FUN_1088c4788();
  return puVar1;
}



/* Entry: 1088c6628; end: 1088c677b;  */

void FUN_1088c6628(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088c69cc();
  if (param_1 == 0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6868();
  }
  func_0x0001088c6a3c();
  func_0x0001088c6a48(&PTR_FUN_110a83150);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c6874();
  }
  func_0x0001088c695c();
  func_0x0001088c6aa4();
  return;
}



/* Entry: 1088c677c; end: 1088c681f;  */

undefined8 * FUN_1088c677c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c347c8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c6940();
  }
  else {
    func_0x0001088c6948();
    param_1 = unaff_x20;
  }
  func_0x000107c347d4();
  *param_1 = &PTR_FUN_110a84298;
  param_1[1] = param_2;
  func_0x0001088dda2c();
  FUN_1088d07f0();
  return param_1;
}



/* Entry: 1088c6820; end: 1088c6b7f;  */

void FUN_1088c6820(void)

{
  return;
}



/* Entry: 1088c6b80; end: 1088c6bdb;  */

void FUN_1088c6b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001088c72a0();
  *unaff_x19 = &PTR_FUN_110a83b68;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088c7294();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088c723c();
  }
  unaff_x19[3] = unaff_x20;
  return;
}



/* Entry: 1088c6bdc; end: 1088c6c0b;  */

long FUN_1088c6bdc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088c6c0c(param_1);
  return param_1;
}



/* Entry: 1088c6c0c; end: 1088c6c27;  */

void FUN_1088c6c0c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c6c28; end: 1088c6c2b;  */

long FUN_1088c6c28(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088c6c0c(param_1);
  return param_1;
}



/* Entry: 1088c6c2c; end: 1088c6c3f;  */

void FUN_1088c6c2c(void)

{
  FUN_1088c6bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c6c40; end: 1088c6c4b;  */

undefined ** FUN_1088c6c40(void)

{
  return &PTR_DAT_110a83ba8;
}



/* Entry: 1088c6c4c; end: 1088c6d5f;  */

void FUN_1088c6c4c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088c7efc(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 1088c6d60; end: 1088c6d8b;  */

long FUN_1088c6d60(long param_1)

{
  FUN_1088c81e4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088c6d8c; end: 1088c6d8f;  */

void FUN_1088c6d8c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001088c723c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088c8390(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 1088c6d90; end: 1088c6e93;  */

void FUN_1088c6d90(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001088c723c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088c8390(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 1088c6e94; end: 1088c6ec3;  */

long FUN_1088c6e94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088c6ec4(param_1);
  return param_1;
}



/* Entry: 1088c6ec4; end: 1088c6ef3;  */

void FUN_1088c6ec4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c6ef4; end: 1088c6ef7;  */

long FUN_1088c6ef4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088c6ec4(param_1);
  return param_1;
}



/* Entry: 1088c6ef8; end: 1088c6f0b;  */

void FUN_1088c6ef8(void)

{
  FUN_1088c6e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c6f0c; end: 1088c6f17;  */

undefined ** FUN_1088c6f0c(void)

{
  return &PTR_DAT_110a83bf0;
}



/* Entry: 1088c6f18; end: 1088c6f67;  */

void FUN_1088c6f18(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088c7efc(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 1088c6f68; end: 1088c703b;  */

long * FUN_1088c6f68(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_1088c6fd4;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_1088c6fd4;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f4ea662);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_1088c6fd4:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
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



/* Entry: 1088c703c; end: 1088c70bf;  */

long FUN_1088c703c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1088c7074;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1088c7074:
    lVar3 = 0;
    goto LAB_1088c7078;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1088c7078:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_1088c6d60();
    lVar3 = lVar3 + lVar2 + 1;
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



/* Entry: 1088c70c0; end: 1088c70c3;  */

void FUN_1088c70c0(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x0001088c723c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_1088c8390();
    }
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



/* Entry: 1088c70c4; end: 1088c7197;  */

void FUN_1088c70c4(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x0001088c723c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_1088c8390();
    }
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



/* Entry: 1088c7198; end: 1088c71a7;  */

void FUN_1088c7198(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110a83b18;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 1088c71a8; end: 1088c727f;  */

void FUN_1088c71a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a83b18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 1088c7280; end: 1088c72b3;  */

void FUN_1088c7280(void)

{
  return;
}



/* Entry: 1088c72b4; end: 1088c730f;  */

void FUN_1088c72b4(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088c7310; end: 1088c733b;  */

undefined8 FUN_1088c7310(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c733c(param_1);
  return param_1;
}



/* Entry: 1088c733c; end: 1088c734f;  */

void FUN_1088c733c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088c7350; end: 1088c7363;  */

void FUN_1088c7350(void)

{
  FUN_1088c7310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c7364; end: 1088c736f;  */

undefined ** FUN_1088c7364(void)

{
  return &PTR_DAT_110a83df8;
}



/* Entry: 1088c7370; end: 1088c739f;  */

void FUN_1088c7370(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c72b4();
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



/* Entry: 1088c73a0; end: 1088c7457;  */

long * FUN_1088c73a0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c89b8();
  iVar3 = *(int *)((long)param_1 + 0x1c);
  if (iVar3 == 3) {
    func_0x0001088c8954();
    func_0x0001088c8a3c();
    func_0x0001088c88e4();
  }
  else {
    if (iVar3 == 2) {
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      param_1 = (long *)0x2;
    }
    else {
      param_1 = param_4;
      if (iVar3 != 1) goto LAB_1088c7424;
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      param_1 = (long *)0x1;
    }
    param_3 = (ulong)uVar1;
    func_0x000107c303cc();
  }
LAB_1088c7424:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_1;
  }
  func_0x0001088c8a08();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_1) {
    _memcpy(param_1,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_1 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_1) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    param_1 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_1 + (long)iVar3);
}



/* Entry: 1088c7458; end: 1088c74db;  */

void FUN_1088c7458(long param_1)

{
  int iVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = (int)LZCOUNT(*(undefined4 *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  else if ((iVar1 == 2) || (iVar1 == 1)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010793598c();
    uVar2 = iVar1 + 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088c8a64();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = (int)lVar3 + uVar2;
  }
  *(uint *)(param_1 + 0x18) = uVar2;
  return;
}



/* Entry: 1088c74dc; end: 1088c74df;  */

void FUN_1088c74dc(void)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c8a50();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088c758c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_1088c72b4();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    goto LAB_1088c758c;
  }
  if (iVar1 == 2) {
    if (iVar2 != 2) {
LAB_1088c7570:
      func_0x000107c284d4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
      *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
      goto LAB_1088c758c;
    }
    func_0x0001088c89d8();
  }
  else {
    if (iVar1 != 1) goto LAB_1088c758c;
    if (iVar2 != 1) goto LAB_1088c7570;
    func_0x0001088c89d8();
  }
  func_0x00010bd1b688();
LAB_1088c758c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1088c74e0; end: 1088c75af;  */

void FUN_1088c74e0(void)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c8a50();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088c758c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_1088c72b4();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    goto LAB_1088c758c;
  }
  if (iVar1 == 2) {
    if (iVar2 != 2) {
LAB_1088c7570:
      func_0x000107c284d4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
      *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
      goto LAB_1088c758c;
    }
    func_0x0001088c89d8();
  }
  else {
    if (iVar1 != 1) goto LAB_1088c758c;
    if (iVar2 != 1) goto LAB_1088c7570;
    func_0x0001088c89d8();
  }
  func_0x00010bd1b688();
LAB_1088c758c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1088c75b0; end: 1088c760f;  */

undefined8 * FUN_1088c75b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a83c78;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088c891c();
  }
  lVar1 = param_3 + 0x10;
  func_0x0001088c8990();
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x0001088c8990();
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 1088c7610; end: 1088c763b;  */

undefined8 FUN_1088c7610(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c763c(param_1);
  return param_1;
}



/* Entry: 1088c763c; end: 1088c765b;  */

void FUN_1088c763c(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001088c8a30();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 1088c765c; end: 1088c765f;  */

undefined8 FUN_1088c765c(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c763c(param_1);
  return param_1;
}



/* Entry: 1088c7660; end: 1088c7673;  */

void FUN_1088c7660(void)

{
  FUN_1088c7610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c7674; end: 1088c767f;  */

undefined ** FUN_1088c7674(void)

{
  return &PTR_DAT_110a83e38;
}



/* Entry: 1088c7680; end: 1088c77cf;  */

void FUN_1088c7680(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c8a24();
  func_0x000107c3025c(unaff_x19 + 0x18);
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



/* Entry: 1088c77d0; end: 1088c77d3;  */

void FUN_1088c77d0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c89f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088c77d4; end: 1088c7857;  */

void FUN_1088c77d4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c89f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088c7858; end: 1088c788b;  */

void FUN_1088c7858(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 1088c788c; end: 1088c78af;  */

undefined8 FUN_1088c788c(undefined8 param_1)

{
  func_0x0001088c8978();
  return param_1;
}



/* Entry: 1088c78b0; end: 1088c78b3;  */

undefined8 FUN_1088c78b0(undefined8 param_1)

{
  func_0x0001088c8978();
  return param_1;
}



/* Entry: 1088c78b4; end: 1088c78c7;  */

void FUN_1088c78b4(void)

{
  FUN_1088c788c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c78c8; end: 1088c78e7;  */

undefined ** FUN_1088c78c8(void)

{
  return &PTR_DAT_110a83e90;
}



/* Entry: 1088c78e8; end: 1088c7973;  */

long * FUN_1088c78e8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088c89b8();
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x0001088c8954();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x0001088c88e4();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088c8954();
    func_0x0001088c8a1c();
    func_0x0001088c88e4();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c8a08();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088c7974; end: 1088c79db;  */

ulong FUN_1088c7974(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 1088c79dc; end: 1088c7a07;  */

undefined8 FUN_1088c79dc(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c7a08(param_1);
  return param_1;
}



/* Entry: 1088c7a08; end: 1088c7a27;  */

void FUN_1088c7a08(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001088c8a30();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 1088c7a28; end: 1088c7a2b;  */

undefined8 FUN_1088c7a28(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c7a08(param_1);
  return param_1;
}



/* Entry: 1088c7a2c; end: 1088c7a3f;  */

void FUN_1088c7a2c(void)

{
  FUN_1088c79dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c7a40; end: 1088c7a4b;  */

undefined ** FUN_1088c7a40(void)

{
  return &PTR_DAT_110a83ee8;
}



/* Entry: 1088c7a4c; end: 1088c7a87;  */

void FUN_1088c7a4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c8a24();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088c7a88; end: 1088c7bab;  */

long * FUN_1088c7a88(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  
  puVar5 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar5 + 0x17);
  plVar1 = param_1;
  plVar6 = param_3;
  if (lVar2 < 0) {
    lVar2 = puVar5[1];
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_1088c7acc;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1088c7acc:
    func_0x0001088c8a14(puVar5,lVar2,param_3,&UNK_10f4ea694);
    param_2 = param_3;
    func_0x0001088c896c(param_3,1);
    plVar1 = param_2;
  }
  plVar3 = plVar1;
  if (param_1[4] != 0) {
    func_0x0001088c88d8();
    plVar3 = (long *)param_1[4];
    func_0x0001088c8a1c();
    func_0x000107c280ac(plVar3,plVar1);
    param_2 = plVar3;
  }
  if ((int)param_1[5] != 0) {
    func_0x0001088c88d8();
    func_0x0001088c8a3c();
    func_0x0001088c893c();
    param_2 = plVar3;
  }
  puVar5 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_1088c7b74;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_1088c7b74;
  func_0x0001088c8a14(puVar5);
  param_2 = param_3;
  func_0x0001088c896c(param_3,4);
LAB_1088c7b74:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001088c8a08();
  if ((long)plVar6 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
      if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar2,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 1088c7bac; end: 1088c7c6f;  */

long FUN_1088c7bac(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001088c8a44(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001088c8a44(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088c8a64();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088c7c70; end: 1088c7c73;  */

void FUN_1088c7c70(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c89f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088c7c74; end: 1088c7d0f;  */

void FUN_1088c7c74(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c89f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c8a70();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088c7d10; end: 1088c7e0b;  */

undefined8 * FUN_1088c7d10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a83db8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088c891c();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x50);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001088c8704(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_1088c8748(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001088c87b8(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001088c8844(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  param_1[7] = uVar2;
  if (*(int *)(param_1 + 10) == 7) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  }
  else if (*(int *)(param_1 + 10) == 6) {
    param_3 = param_3 + 0x48;
    func_0x000107c2809c(param_3,param_2);
    param_1[9] = param_3;
  }
  return param_1;
}



/* Entry: 1088c7e0c; end: 1088c7e37;  */

undefined8 FUN_1088c7e0c(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c7e38(param_1);
  return param_1;
}



/* Entry: 1088c7e38; end: 1088c7ea7;  */

void FUN_1088c7e38(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7610();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088c788c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088c79dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1088c7310();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x50) == 6) {
      func_0x000107c30258(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 1088c7ea8; end: 1088c7eab;  */

undefined8 FUN_1088c7ea8(undefined8 param_1)

{
  func_0x0001088c8978();
  FUN_1088c7e38(param_1);
  return param_1;
}



/* Entry: 1088c7eac; end: 1088c7ebf;  */

void FUN_1088c7eac(void)

{
  FUN_1088c7e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c7ec0; end: 1088c7eef;  */

void FUN_1088c7ec0(long param_1)

{
  if (*(int *)(param_1 + 0x50) == 6) {
    func_0x000107c30258(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


