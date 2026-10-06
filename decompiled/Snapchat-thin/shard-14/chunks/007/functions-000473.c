/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5d4c40; end: 10b5d4c93;  */

long FUN_10b5d4c40(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  long lVar3;
  
  bVar2 = *(int *)(param_1 + 0x10) == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = 5;
  }
  func_0x00010b5d6ca4(uVar1);
  uVar1 = extraout_x8;
  if (!bVar2) {
    uVar1 = extraout_x9;
  }
  func_0x00010b5d6cc0(uVar1);
  lVar3 = extraout_x8_00;
  if ((extraout_x9_00 & 1) != 0) {
    lVar3 = (long)*(char *)((extraout_x9_00 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((extraout_x9_00 & 0xfffffffffffffffe) + 0x10);
    }
    lVar3 = lVar3 + extraout_x8_00;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5d4c94; end: 10b5d4cb7;  */

undefined8 FUN_10b5d4c94(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d4cb8; end: 10b5d4cbb;  */

undefined8 FUN_10b5d4cb8(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d4cbc; end: 10b5d4ccf;  */

void FUN_10b5d4cbc(void)

{
  FUN_10b5d4c94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d4cd0; end: 10b5d4cdb;  */

undefined ** FUN_10b5d4cd0(void)

{
  return &PTR_DAT_110d240d8;
}



/* Entry: 10b5d4cdc; end: 10b5d4dc3;  */

long * FUN_10b5d4cdc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6a54();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6b04();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6af4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6ae4();
    func_0x00010b5d6aac();
  }
  uVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5d69e4();
    uVar2 = 0x35;
    func_0x000107c280a8(0x35,param_1);
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d69e4();
    func_0x000107c280a8(0x3d,uVar2);
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d4dc4; end: 10b5d4e47;  */

long FUN_10b5d4dc4(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long lVar4;
  int extraout_w10;
  ulong uVar5;
  
  bVar2 = *(int *)(param_1 + 0x10) == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = 5;
  }
  func_0x00010b5d6ca4(uVar1);
  lVar3 = extraout_x8;
  if (!bVar2) {
    lVar3 = extraout_x9;
  }
  if (extraout_w10 != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5d4e48; end: 10b5d4ec7;  */

void FUN_10b5d4e48(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5d4ea4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5d54ec();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b5d4ea4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5d4ea4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5d51bc();
    }
  }
  __ZdlPv();
LAB_10b5d4ea4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d4ec8; end: 10b5d4ef3;  */

undefined8 FUN_10b5d4ec8(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d4ef4(param_1);
  return param_1;
}



/* Entry: 10b5d4ef4; end: 10b5d4f07;  */

void FUN_10b5d4ef4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5d4ea4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5d54ec();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b5d4ea4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5d4ea4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5d51bc();
    }
  }
  __ZdlPv();
LAB_10b5d4ea4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d4f08; end: 10b5d4f1b;  */

void FUN_10b5d4f08(void)

{
  FUN_10b5d4ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d4f1c; end: 10b5d4f2f;  */

long FUN_10b5d4f1c(long param_1)

{
  func_0x00010b5d6ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d5688();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10b5d516c(param_1);
  }
  return param_1;
}



/* Entry: 10b5d4f30; end: 10b5d4fa7;  */

long * FUN_10b5d4f30(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
  if ((*(uint *)(unaff_x20 + 0x24) & 0xfffffffe) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00010b5d6ac0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d4fa8; end: 10b5d5013;  */

long FUN_10b5d4fa8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5d6b6c();
  lVar2 = 0;
  if (!(bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    FUN_10b5d5618(*(undefined8 *)(unaff_x19 + 0x18));
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b5d4fe8;
    FUN_10b5d5318(*(undefined8 *)(unaff_x19 + 0x18));
  }
  func_0x00010b5d6978();
LAB_10b5d4fe8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6b80();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5d5014; end: 10b5d5017;  */

void FUN_10b5d5014(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5d6a74();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6c00();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b5d4484;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5d4e48();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10b5d50e4();
      goto LAB_10b5d4484;
    }
    func_0x00010b5d6c8c();
    func_0x00010b5d6774();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5d4484;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10b5d5018();
      goto LAB_10b5d4484;
    }
    func_0x00010b5d6c8c();
    FUN_10b5d66d0();
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b5d4484:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d5018; end: 10b5d50e3;  */

void FUN_10b5d5018(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5d6a74();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5d6c00();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5d6c98();
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar2;
      FUN_10b5d67f4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b5d53b0();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5d6bf0();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != 0) {
    if ((int)unaff_x21[6] == iVar1) {
      if (iVar1 == 3) {
        param_1 = (ulong *)unaff_x21[5];
        func_0x00010b5d53e4();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_10b5d516c();
      }
      *(int *)(unaff_x21 + 6) = iVar1;
      if (iVar1 == 3) {
        FUN_10b5d685c();
        unaff_x21[5] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d50e4; end: 10b5d516b;  */

void FUN_10b5d50e4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d67f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5d53b0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x00010b5d6c6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d516c; end: 10b5d51bb;  */

void FUN_10b5d516c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_10b5d5404();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b5d51bc; end: 10b5d51ff;  */

long FUN_10b5d51bc(long param_1)

{
  func_0x00010b5d6ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d5688();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10b5d516c(param_1);
  }
  return param_1;
}



/* Entry: 10b5d5200; end: 10b5d5213;  */

void FUN_10b5d5200(void)

{
  FUN_10b5d51bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5214; end: 10b5d5223;  */

undefined8 FUN_10b5d5214(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5224; end: 10b5d526b;  */

void FUN_10b5d5224(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d6bd4();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5d526c(*(undefined8 *)(unaff_x19 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  FUN_10b5d516c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d526c; end: 10b5d527f;  */

void FUN_10b5d526c(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d5280; end: 10b5d5317;  */

long * FUN_10b5d5280(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d6a2c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x1;
    func_0x00010b5d6ac0();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6b9c();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x30) == 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b5d6ac0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d5318; end: 10b5d5393;  */

long FUN_10b5d5318(void)

{
  ulong extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d6bd4();
  if ((extraout_x8 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5d5394();
    lVar1 = lVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x30) == 3) {
    FUN_10b5d54b4(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x00010b5d6978();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6b80();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5d5394; end: 10b5d53af;  */

long FUN_10b5d5394(long param_1)

{
  long extraout_x8;
  
  FUN_10b5d573c();
  func_0x00010b5d699c();
  return param_1 + extraout_x8;
}



/* Entry: 10b5d53b0; end: 10b5d5403;  */

void FUN_10b5d53b0(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5d6a74();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5d6c00();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5d6c98();
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar2;
      FUN_10b5d67f4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b5d53b0();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5d6bf0();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != 0) {
    if ((int)unaff_x21[6] == iVar1) {
      if (iVar1 == 3) {
        param_1 = (ulong *)unaff_x21[5];
        func_0x00010b5d53e4();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_10b5d516c();
      }
      *(int *)(unaff_x21 + 6) = iVar1;
      if (iVar1 == 3) {
        FUN_10b5d685c();
        unaff_x21[5] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d5404; end: 10b5d5427;  */

undefined8 FUN_10b5d5404(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5428; end: 10b5d543b;  */

void FUN_10b5d5428(void)

{
  FUN_10b5d5404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d543c; end: 10b5d545b;  */

undefined ** FUN_10b5d543c(void)

{
  return &PTR_DAT_110d241d8;
}



/* Entry: 10b5d545c; end: 10b5d54b3;  */

long * FUN_10b5d545c(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d6b28();
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



/* Entry: 10b5d54b4; end: 10b5d54eb;  */

long FUN_10b5d54b4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
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



/* Entry: 10b5d54ec; end: 10b5d551f;  */

long FUN_10b5d54ec(long param_1)

{
  func_0x00010b5d6ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d5688();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5d5520; end: 10b5d5533;  */

void FUN_10b5d5520(void)

{
  FUN_10b5d54ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5534; end: 10b5d553f;  */

undefined ** FUN_10b5d5534(void)

{
  return &PTR_DAT_110d24230;
}



/* Entry: 10b5d5540; end: 10b5d557f;  */

void FUN_10b5d5540(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d6bd4();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5d526c(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d5580; end: 10b5d5617;  */

long * FUN_10b5d5580(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d6a2c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)0x1;
    func_0x00010b5d6ac0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6b9c();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5d69e4();
    func_0x000107c280a8(0x1d,param_1);
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d5618; end: 10b5d5683;  */

void FUN_10b5d5618(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d6bd4();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b5d5394();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    iVar1 = iVar1 + 5;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6b80();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5d5684; end: 10b5d5687;  */

void FUN_10b5d5684(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d67f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5d53b0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x00010b5d6c6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d5688; end: 10b5d56ab;  */

undefined8 FUN_10b5d5688(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d56ac; end: 10b5d56af;  */

undefined8 FUN_10b5d56ac(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d56b0; end: 10b5d56c3;  */

void FUN_10b5d56b0(void)

{
  FUN_10b5d5688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d56c4; end: 10b5d56cf;  */

undefined ** FUN_10b5d56c4(void)

{
  return &PTR_DAT_110d24280;
}



/* Entry: 10b5d56d0; end: 10b5d573b;  */

long * FUN_10b5d56d0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6a54();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d573c; end: 10b5d5783;  */

long FUN_10b5d573c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5d5784; end: 10b5d57cf;  */

void FUN_10b5d5784(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b5d5918();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d57d0; end: 10b5d57fb;  */

undefined8 FUN_10b5d57d0(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d57fc(param_1);
  return param_1;
}



/* Entry: 10b5d57fc; end: 10b5d580f;  */

void FUN_10b5d57fc(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b5d5918();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d5810; end: 10b5d5823;  */

void FUN_10b5d5810(void)

{
  FUN_10b5d57d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5824; end: 10b5d5833;  */

undefined8 FUN_10b5d5824(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5834; end: 10b5d589f;  */

long * FUN_10b5d5834(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x24) == 2) {
    func_0x00010b5d6a98();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d58a0; end: 10b5d58f3;  */

long FUN_10b5d58a0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5d6b6c();
  lVar2 = 0;
  if (!(bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    FUN_10b5d59c8(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010b5d6978();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6b80();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5d58f4; end: 10b5d5917;  */

void FUN_10b5d58f4(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5d6a74();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6c00();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b5d6c98();
        FUN_10b5d58f4();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10b5d5784();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 2) {
        func_0x00010b5d6c8c();
        FUN_10b5d68bc();
        unaff_x21[3] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d5918; end: 10b5d593b;  */

undefined8 FUN_10b5d5918(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d593c; end: 10b5d594f;  */

void FUN_10b5d593c(void)

{
  FUN_10b5d5918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5950; end: 10b5d596f;  */

undefined ** FUN_10b5d5950(void)

{
  return &PTR_DAT_110d24328;
}



/* Entry: 10b5d5970; end: 10b5d59c7;  */

long * FUN_10b5d5970(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d6b28();
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



/* Entry: 10b5d59c8; end: 10b5d59ff;  */

long FUN_10b5d59c8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
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



/* Entry: 10b5d5a00; end: 10b5d5a23;  */

undefined8 FUN_10b5d5a00(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5a24; end: 10b5d5a27;  */

undefined8 FUN_10b5d5a24(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5a28; end: 10b5d5a3b;  */

void FUN_10b5d5a28(void)

{
  FUN_10b5d5a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5a3c; end: 10b5d5a47;  */

undefined ** FUN_10b5d5a3c(void)

{
  return &PTR_DAT_110d24380;
}



/* Entry: 10b5d5a48; end: 10b5d5a9f;  */

long * FUN_10b5d5a48(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d6b28();
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



/* Entry: 10b5d5aa0; end: 10b5d5ad7;  */

long FUN_10b5d5aa0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
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



/* Entry: 10b5d5ad8; end: 10b5d5afb;  */

undefined8 FUN_10b5d5ad8(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5afc; end: 10b5d5aff;  */

undefined8 FUN_10b5d5afc(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5b00; end: 10b5d5b13;  */

void FUN_10b5d5b00(void)

{
  FUN_10b5d5ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5b14; end: 10b5d5b1f;  */

undefined ** FUN_10b5d5b14(void)

{
  return &PTR_DAT_110d243d8;
}



/* Entry: 10b5d5b20; end: 10b5d5bc7;  */

long * FUN_10b5d5b20(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6a54();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6b04();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6af4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6ae4();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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



/* Entry: 10b5d5bc8; end: 10b5d5c1b;  */

long FUN_10b5d5bc8(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  long lVar3;
  
  bVar2 = *(int *)(param_1 + 0x10) == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = 5;
  }
  func_0x00010b5d6ca4(uVar1);
  uVar1 = extraout_x8;
  if (!bVar2) {
    uVar1 = extraout_x9;
  }
  func_0x00010b5d6cc0(uVar1);
  lVar3 = extraout_x8_00;
  if ((extraout_x9_00 & 1) != 0) {
    lVar3 = (long)*(char *)((extraout_x9_00 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((extraout_x9_00 & 0xfffffffffffffffe) + 0x10);
    }
    lVar3 = lVar3 + extraout_x8_00;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5d5c1c; end: 10b5d5c47;  */

undefined8 FUN_10b5d5c1c(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d5c48(param_1);
  return param_1;
}



/* Entry: 10b5d5c48; end: 10b5d5c63;  */

void FUN_10b5d5c48(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d5da4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5c64; end: 10b5d5c67;  */

undefined8 FUN_10b5d5c64(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d5c48(param_1);
  return param_1;
}



/* Entry: 10b5d5c68; end: 10b5d5c7b;  */

void FUN_10b5d5c68(void)

{
  FUN_10b5d5c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5c7c; end: 10b5d5c9b;  */

undefined ** FUN_10b5d5c7c(void)

{
  return &PTR_DAT_110d24438;
}



/* Entry: 10b5d5c9c; end: 10b5d5d83;  */

long * FUN_10b5d5c9c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d6a2c();
  if ((int)param_1[4] != 0) {
    param_1 = unaff_x19;
    func_0x000107c282e4();
    param_3 = param_4;
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5d6a98();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5d5d84; end: 10b5d5da3;  */

void FUN_10b5d5d84(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d691c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5d5d84();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5d6c6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d5da4; end: 10b5d5dc7;  */

undefined8 FUN_10b5d5da4(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5dc8; end: 10b5d5dcb;  */

undefined8 FUN_10b5d5dc8(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d5dcc; end: 10b5d5ddf;  */

void FUN_10b5d5dcc(void)

{
  FUN_10b5d5da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d5de0; end: 10b5d5deb;  */

undefined ** FUN_10b5d5de0(void)

{
  return &PTR_DAT_110d24488;
}



/* Entry: 10b5d5dec; end: 10b5d5e5b;  */

long * FUN_10b5d5dec(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280b8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d6b28();
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



/* Entry: 10b5d5e5c; end: 10b5d5f23;  */

long FUN_10b5d5e5c(long param_1)

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



/* Entry: 10b5d5f24; end: 10b5d62c7;  */

void FUN_10b5d5f24(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b5d6b34();
  }
  else {
    func_0x00010b5d6b1c();
  }
  func_0x00010b5d6c0c(&PTR_FUN_110d23aa0);
  return;
}



/* Entry: 10b5d62c8; end: 10b5d6433;  */

undefined8 * FUN_10b5d62c8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d6c80();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6ac8();
  }
  else {
    func_0x00010b5d6a3c();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_DAT_110d23eb0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a48();
  }
  func_0x00010b5d6bb8();
  if ((bool)in_ZR) {
    FUN_10b5d6574();
    param_1[3] = unaff_x19;
  }
  return param_1;
}



/* Entry: 10b5d6434; end: 10b5d6493;  */

undefined8 * FUN_10b5d6434(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b5d6bac();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b34();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d6b3c();
  }
  *param_1 = &PTR_FUN_110d23c80;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  FUN_10b5d453c();
  return param_1;
}



/* Entry: 10b5d6494; end: 10b5d6513;  */

undefined8 * FUN_10b5d6494(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5d6bac();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6ac8();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d6ad0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d23e10;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6a48();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5d691c();
  }
  param_1[3] = unaff_x20;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 10b5d6514; end: 10b5d6573;  */

undefined8 * FUN_10b5d6514(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d6c18();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6ac8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d6ad0();
  }
  *param_1 = &PTR_FUN_110d23b40;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10b5d45d0();
  return param_1;
}



/* Entry: 10b5d6574; end: 10b5d660f;  */

undefined8 * FUN_10b5d6574(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5d6bac();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b8c();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d6b94();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d23d20;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6a48();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5d6610();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5d6670();
  }
  param_1[4] = unaff_x20;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 10b5d6610; end: 10b5d666f;  */

undefined8 * FUN_10b5d6610(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d6c18();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6ac8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d6ad0();
  }
  *param_1 = &PTR_FUN_110d23cd0;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10b5d4a6c();
  return param_1;
}



/* Entry: 10b5d6670; end: 10b5d66cf;  */

undefined8 * FUN_10b5d6670(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d6c18();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b8c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d6b94();
  }
  *param_1 = &PTR_FUN_110d23af0;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  func_0x00010b5d4ad0();
  return param_1;
}



/* Entry: 10b5d66d0; end: 10b5d67f3;  */

undefined8 * FUN_10b5d66d0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d6c80();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    func_0x00010b5d6c54();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d23d70;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a48();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(unaff_x20 + 0x30);
  *(int *)(param_1 + 6) = iVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b5d67f4();
    iVar3 = *(int *)(param_1 + 6);
  }
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x20 + 0x20);
  if (iVar3 == 3) {
    FUN_10b5d685c();
    param_1[5] = unaff_x19;
  }
  return param_1;
}



/* Entry: 10b5d67f4; end: 10b5d685b;  */

undefined8 * FUN_10b5d67f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x00010b5d6c18();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *puVar1 = &PTR_FUN_110d23be0;
  puVar1[1] = unaff_x21;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_10b5d53b0();
  return puVar1;
}



/* Entry: 10b5d685c; end: 10b5d68bb;  */

undefined8 * FUN_10b5d685c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b5d6bac();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b34();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d6b3c();
  }
  *param_1 = &PTR_FUN_110d23b90;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  func_0x00010b5d53e4();
  return param_1;
}



/* Entry: 10b5d68bc; end: 10b5d691b;  */

undefined8 * FUN_10b5d68bc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b5d6bac();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b34();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d6b3c();
  }
  *param_1 = &PTR_FUN_110d23c30;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  FUN_10b5d58f4();
  return param_1;
}



/* Entry: 10b5d691c; end: 10b5d6977;  */

undefined8 * FUN_10b5d691c(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d6c18();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d6b34();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d6b3c();
  }
  *param_1 = &PTR_FUN_110d23aa0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10b5d5d84();
  return param_1;
}



/* Entry: 10b5d6978; end: 10b5d6ce3;  */

void FUN_10b5d6978(void)

{
  return;
}



/* Entry: 10b5d6ce4; end: 10b5d6d23;  */

long FUN_10b5d6ce4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d6d24; end: 10b5d6d27;  */

long FUN_10b5d6d24(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d6d28; end: 10b5d6d3b;  */

void FUN_10b5d6d28(void)

{
  FUN_10b5d6ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


