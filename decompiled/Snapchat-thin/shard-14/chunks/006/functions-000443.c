/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b584ccc; end: 10b584ccf;  */

long FUN_10b584ccc(long param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b584cd0; end: 10b584ce3;  */

void FUN_10b584cd0(void)

{
  FUN_10b584c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b584ce4; end: 10b584cef;  */

undefined ** FUN_10b584ce4(void)

{
  return &PTR_DAT_110d0e888;
}



/* Entry: 10b584cf0; end: 10b584d23;  */

void FUN_10b584cf0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b585fd8();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b584d24; end: 10b584df3;  */

long * FUN_10b584d24(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b586034();
  func_0x00010b586014(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b584d60;
  }
  else if ((int)param_2 != 0) {
LAB_10b584d60:
    func_0x00010b585ee8();
    param_2 = 1;
    unaff_x20 = param_3;
    func_0x00010b585e6c();
  }
  func_0x00010b586014(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b584dbc;
  }
  else if ((int)param_2 == 0) goto LAB_10b584dbc;
  func_0x00010b585ee8();
  unaff_x20 = param_3;
  func_0x00010b585e6c(param_3,2);
LAB_10b584dbc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b585ecc();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar4;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar2);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar3);
}



/* Entry: 10b584df4; end: 10b584e6b;  */

long FUN_10b584df4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b585f9c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b586008(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b585fe4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585f14();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b584e6c; end: 10b584e6f;  */

void FUN_10b584e6c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b585eb4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    func_0x00010b586180();
  }
  func_0x00010b585ffc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
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



/* Entry: 10b584e70; end: 10b584edf;  */

void FUN_10b584e70(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b585eb4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    func_0x00010b586180();
  }
  func_0x00010b585ffc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
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



/* Entry: 10b584ee0; end: 10b584f43;  */

long FUN_10b584ee0(long param_1)

{
  func_0x00010b585eac();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b584848();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b584a64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b584b80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b584c9c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b584f44; end: 10b584f47;  */

long FUN_10b584f44(long param_1)

{
  func_0x00010b585eac();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b584848();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b584a64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b584b80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b584c9c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b584f48; end: 10b584f5b;  */

void FUN_10b584f48(void)

{
  FUN_10b584ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b584f5c; end: 10b584f67;  */

undefined ** FUN_10b584f5c(void)

{
  return &PTR_DAT_110d0e8f0;
}



/* Entry: 10b584f68; end: 10b5850df;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b584f68(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (long *)0x1;
    func_0x00010b585e84();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x2;
    func_0x00010b585e84();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)0x3;
    func_0x00010b585e84();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x20);
    param_4 = (long *)0x4;
    func_0x00010b585e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
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



/* Entry: 10b5850e0; end: 10b5850e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5850e0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b585f54();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b585bf8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b584a04();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b585c68();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b584a48();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b585cd0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b584b54();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b585d3c();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b584e70();
      }
    }
  }
  func_0x00010b585f88();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5860fc();
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



/* Entry: 10b5850e4; end: 10b58511b;  */

long FUN_10b5850e4(long param_1)

{
  func_0x00010b585eac();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b58511c; end: 10b58511f;  */

long FUN_10b58511c(long param_1)

{
  func_0x00010b585eac();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b585120; end: 10b585133;  */

void FUN_10b585120(void)

{
  FUN_10b5850e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b585134; end: 10b58513f;  */

undefined ** FUN_10b585134(void)

{
  return &PTR_DAT_110d0e948;
}



/* Entry: 10b585140; end: 10b58517f;  */

void FUN_10b585140(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b585180; end: 10b585253;  */

long * FUN_10b585180(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b5860ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b585e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
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



/* Entry: 10b585254; end: 10b585257;  */

void FUN_10b585254(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010b586020();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b586174();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
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



/* Entry: 10b585258; end: 10b58528f;  */

void FUN_10b585258(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010b586020();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b586174();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
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



/* Entry: 10b585290; end: 10b5852b7;  */

undefined8 FUN_10b585290(undefined8 param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  return param_1;
}



/* Entry: 10b5852b8; end: 10b5852bb;  */

undefined8 FUN_10b5852b8(undefined8 param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  return param_1;
}



/* Entry: 10b5852bc; end: 10b5852cf;  */

void FUN_10b5852bc(void)

{
  FUN_10b585290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5852d0; end: 10b5852db;  */

undefined ** FUN_10b5852d0(void)

{
  return &PTR_DAT_110d0e998;
}



/* Entry: 10b5852dc; end: 10b58530b;  */

void FUN_10b5852dc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b585fd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b58530c; end: 10b5853b3;  */

long * FUN_10b58530c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  func_0x00010b586034();
  func_0x00010b586014(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b585364;
  }
  else if ((int)param_2 == 0) goto LAB_10b585364;
  func_0x00010b585ee8();
  unaff_x20 = param_3;
  func_0x00010b585e6c(param_3,1);
LAB_10b585364:
  plVar1 = unaff_x20;
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282cc();
    plVar4 = unaff_x20;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return plVar1;
  }
  func_0x00010b585ecc();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar5;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar3);
  }
  _memcpy(plVar1,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)plVar4);
}



/* Entry: 10b5853b4; end: 10b58547f;  */

void FUN_10b5853b4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b585f9c();
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
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585f14();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b585480; end: 10b5854a3;  */

undefined8 FUN_10b585480(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b5854a4; end: 10b5854a7;  */

undefined8 FUN_10b5854a4(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b5854a8; end: 10b5854bb;  */

void FUN_10b5854a8(void)

{
  FUN_10b585480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5854bc; end: 10b5854c7;  */

undefined ** FUN_10b5854bc(void)

{
  return &PTR_DAT_110d0e9e8;
}



/* Entry: 10b5854c8; end: 10b58554b;  */

long * FUN_10b5854c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  if ((int)param_1[2] != 0) {
    func_0x00010b5860d8();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5860d8();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5860d8();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
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



/* Entry: 10b58554c; end: 10b58562f;  */

ulong FUN_10b58554c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b585630; end: 10b58565f;  */

long * FUN_10b585630(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b585660; end: 10b585953;  */

void FUN_10b585660(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010b585ed8();
  }
  else {
    func_0x00010b585ee0();
  }
  func_0x00010b5860ec(&PTR_FUN_110d0e260);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b585954; end: 10b5859b7;  */

undefined8 * FUN_10b585954(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b585ed8();
  }
  else {
    func_0x00010b585ee0();
  }
  *puVar1 = &PTR_FUN_110d0e2b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10b583b18();
  return puVar1;
}



/* Entry: 10b5859b8; end: 10b585af3;  */

undefined8 * FUN_10b5859b8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b58610c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b585ed8();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b585ee0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d0e260;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585e60();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(unaff_x19 + 0x18);
  return param_1;
}



/* Entry: 10b585af4; end: 10b585bf7;  */

void FUN_10b585af4(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  int *apiStack_58 [3];
  
  func_0x00010564c19c(apiStack_58);
  while (piVar1 = apiStack_58[0], apiStack_58[0] != (int *)0x0) {
    piVar2 = apiStack_58[0] + 2;
    func_0x000107c28188();
    func_0x00010b585ef8();
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)(ulong)(*param_1 + 1);
      piVar2 = param_1;
      func_0x000107c27d60(param_1,piVar3);
      if ((int)piVar2 != 0) {
        func_0x000107c28188(piVar1 + 2);
        func_0x00010b585ef8();
        param_2 = piVar3;
      }
      piVar2 = param_1;
      func_0x000107c27d64(param_1,0x50);
      func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_1 + 6),piVar1 + 2);
      uVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar2 + 8) = &PTR_FUN_110d0e490;
      *(undefined8 *)(piVar2 + 10) = uVar4;
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      *(undefined8 *)(piVar2 + 0x10) = uVar4;
      piVar2[0x12] = 0;
      func_0x000107c27d68(param_1,param_2,piVar2);
      *param_1 = *param_1 + 1;
    }
    if (piVar1 != piVar2) {
      FUN_10b585140(piVar2 + 8);
      param_2 = piVar1 + 8;
      FUN_10b585258(piVar2 + 8);
    }
    func_0x000107c27d54(apiStack_58);
  }
  return;
}



/* Entry: 10b585bf8; end: 10b585c67;  */

undefined8 * FUN_10b585bf8(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b58610c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58602c();
  }
  else {
    func_0x00010b586138();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d0e3f0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585e60();
  }
  func_0x00010598dec8(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  return param_1;
}



/* Entry: 10b585c68; end: 10b585ccf;  */

undefined8 * FUN_10b585c68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b585ed8();
  }
  else {
    func_0x00010b585ee0();
  }
  *puVar1 = &PTR_FUN_110d0e440;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_10b584a48();
  return puVar1;
}



/* Entry: 10b585cd0; end: 10b585d3b;  */

undefined8 * FUN_10b585cd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b585ed8();
  }
  else {
    func_0x00010b585ee0();
  }
  *puVar1 = &PTR_FUN_110d0e350;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  func_0x00010b584b54();
  return puVar1;
}



/* Entry: 10b585d3c; end: 10b585daf;  */

undefined8 * FUN_10b585d3c(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b586020();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b586130();
  }
  else {
    func_0x00010b585f70();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d0e3a0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e60();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c2809c();
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b585db0; end: 10b5861e7;  */

void FUN_10b585db0(void)

{
  return;
}



/* Entry: 10b5861e8; end: 10b58621b;  */

long FUN_10b5861e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b58621c(param_1);
  return param_1;
}



/* Entry: 10b58621c; end: 10b58624b;  */

long * FUN_10b58621c(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c305bc();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 10b58624c; end: 10b58624f;  */

long FUN_10b58624c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b58621c(param_1);
  return param_1;
}



/* Entry: 10b586250; end: 10b586263;  */

void FUN_10b586250(void)

{
  FUN_10b5861e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b586264; end: 10b58626f;  */

undefined ** FUN_10b586264(void)

{
  return &PTR_DAT_110d0eba0;
}



/* Entry: 10b586270; end: 10b5862c3;  */

void FUN_10b586270(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b56b31c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5699ac(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b5862c4; end: 10b5863d3;  */

long * FUN_10b5862c4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x20);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar2);
    plVar2 = (long *)(ulong)*(byte *)(param_1 + 0x38);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x000107c280a8(plVar2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar6);
  }
  return plVar2;
}



/* Entry: 10b5863d4; end: 10b58646f;  */

void FUN_10b5863d4(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  lVar5 = (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b569e1c();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x000107c305a4();
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x38) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b586470; end: 10b58652b;  */

void FUN_10b586470(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001053ab440(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x000107c305c8(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b569ad8();
    }
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10b58652c; end: 10b586533;  */

void FUN_10b58652c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110d0eb60;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b586534; end: 10b586587;  */

void FUN_10b586534(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110d0eb60;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b586588; end: 10b58660f;  */

undefined8 * FUN_10b586588(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0ec28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)(param_3 + 0x4d);
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  return param_1;
}



/* Entry: 10b586610; end: 10b58663f;  */

long FUN_10b586610(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b586640(param_1);
  return param_1;
}



/* Entry: 10b586640; end: 10b586667;  */

/* WARNING: Possible PIC construction at 0x00010b586654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b586658) */

void FUN_10b586640(long param_1)

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



/* Entry: 10b586668; end: 10b58666b;  */

long FUN_10b586668(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b586640(param_1);
  return param_1;
}



/* Entry: 10b58666c; end: 10b58667f;  */

void FUN_10b58666c(void)

{
  FUN_10b586610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b586680; end: 10b58668b;  */

undefined ** FUN_10b586680(void)

{
  return &PTR_DAT_110d0ec68;
}



/* Entry: 10b58668c; end: 10b5866e3;  */

void FUN_10b58668c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b5866e4; end: 10b586daf;  */

long * FUN_10b5866e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((char)param_1[4] == '\x01') {
    plVar2 = param_1;
    func_0x00010b587380();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x22) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x23) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  puVar7 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b5867c8;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b5867c8:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77ca8d);
    plVar2 = param_3;
    func_0x00010b5873f4(param_3,5);
    param_2 = plVar2;
  }
  puVar7 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b586830;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b586830;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77cad7);
  plVar2 = param_3;
  func_0x00010b5873f4(param_3,6);
  param_2 = plVar2;
LAB_10b586830:
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[6] == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x25) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x26) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x31) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x27) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x2d) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x00010b587380();
    plVar1 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x2e) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x2f) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x88;
    func_0x000107c280a8(0x88,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x3d) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x98;
    func_0x000107c280a8(0x98,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0xa0;
    func_0x000107c280a8(0xa0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x35) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xa8;
    func_0x000107c280a8(0xa8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x36) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0xb0;
    func_0x000107c280a8(0xb0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x37) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xb8;
    func_0x000107c280a8(0xb8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[7] != 0) {
    func_0x00010b587380();
    plVar2 = (long *)0xc0;
    func_0x000107c280a8(0xc0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[8] == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xc8;
    func_0x000107c280a8(200,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x41) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0xd0;
    func_0x000107c280a8(0xd0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x33) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xd8;
    func_0x000107c280a8(0xd8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x42) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0xe0;
    func_0x000107c280a8(0xe0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x43) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xe8;
    func_0x000107c280a8(0xe8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x3e) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0xf0;
    func_0x000107c280a8(0xf0,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x3f) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0xf8;
    func_0x000107c280a8(0xf8,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[9] == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x100;
    func_0x000107c280a8(0x100,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x32) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x108;
    func_0x000107c280a8(0x108,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x49) == '\x01') {
    func_0x00010b587380();
    plVar2 = (long *)0x110;
    func_0x000107c280a8(0x110,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010b587380();
    plVar1 = (long *)0x118;
    func_0x000107c280a8(0x118,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x00010b587380();
    plVar2 = (long *)0x120;
    func_0x000107c280a8(0x120,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x4a) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x128;
    func_0x000107c280a8(0x128,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[10] != 0) {
    func_0x00010b587380();
    plVar2 = (long *)0x130;
    func_0x000107c280a8(0x130,plVar1);
    func_0x00010b587374();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x4b) == '\x01') {
    func_0x00010b587380();
    plVar1 = (long *)0x138;
    func_0x000107c280a8(0x138,plVar2);
    func_0x00010b587374();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x54) == '\x01') {
    func_0x00010b587380();
    param_2 = (long *)0x140;
    func_0x000107c280a8(0x140,plVar1);
    func_0x00010b587374();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b586db0; end: 10b586fcf;  */

void FUN_10b586db0(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  int extraout_w8;
  long lVar8;
  long extraout_x8;
  long lVar9;
  int extraout_w9;
  undefined8 uVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar7 + 0x17) < '\0') {
    if (*(long *)(uVar7 + 8) == 0) goto LAB_10b586de8;
  }
  else if (*(char *)(uVar7 + 0x17) == '\0') {
LAB_10b586de8:
    lVar9 = 0;
    goto LAB_10b586dec;
  }
  func_0x000107c282a0();
  lVar9 = uVar7 + 1;
LAB_10b586dec:
  uVar7 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar7 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar7 + 8);
  }
  if (lVar8 != 0) {
    func_0x000107c282a0();
    lVar9 = lVar9 + uVar7 + 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  bVar2 = (char)((ulong)uVar10 >> 8) * '\x02';
  bVar3 = (char)((ulong)uVar10 >> 0x18) * '\x02';
  bVar4 = (char)((ulong)uVar10 >> 0x28) * '\x02';
  bVar5 = (char)((ulong)uVar10 >> 0x38) * '\x02';
  lVar9 = ((ulong)((uint6)CONCAT14(bVar2,(uint)CONCAT12(bVar2,(ushort)(byte)((char)uVar10 * '\x02'))
                                  ) & 0xffff0000ffff) & 0xffffffff) +
          (ulong)(CONCAT12(bVar4,(ushort)(byte)((char)((ulong)uVar10 >> 0x20) * '\x02')) & 0xffff) +
          ((ulong)CONCAT14(bVar3,(uint)(byte)((char)((ulong)uVar10 >> 0x10) * '\x02')) & 0xffffffff)
          + ((ulong)CONCAT14(bVar5,(uint)(byte)((char)((ulong)uVar10 >> 0x30) * '\x02')) &
            0xffffffff) + (ulong)bVar2 + (ulong)bVar4 + (ulong)bVar3 + (ulong)bVar5 + lVar9;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar9 = lVar9 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  func_0x00010b58739c(lVar9 + (ulong)*(byte *)(param_1 + 0x2c) * 2 +
                      (ulong)*(byte *)(param_1 + 0x2d) * 2);
  func_0x00010b58739c();
  func_0x00010b58739c(extraout_x8 +
                      ((ulong)((uint)*(byte *)(param_1 + 0x31) + (uint)*(byte *)(param_1 + 0x30)) &
                      3) * 2);
  func_0x00010b58739c();
  func_0x00010b58739c();
  func_0x00010b58739c();
  func_0x00010b58739c();
  func_0x00010b5873ac(0x160);
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b5873ac();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  func_0x00010b58738c();
  iVar1 = extraout_w9;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = extraout_w9 +
            ((uint)(extraout_w8 + (int)LZCOUNT(*(int *)(param_1 + 0x4c)) * -9) >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = iVar1 + ((uint)(extraout_w8 + (int)LZCOUNT(*(int *)(param_1 + 0x50)) * -9) >> 6) + 2;
  }
  iVar6 = iVar1 + 3;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar6 = iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar7 + 0x10);
    }
    iVar6 = (int)lVar9 + iVar6;
  }
  *(int *)(param_1 + 0x58) = iVar6;
  return;
}



/* Entry: 10b586fd0; end: 10b586fd3;  */

void FUN_10b586fd0(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if (*(char *)(param_2 + 0x23) == '\x01') {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  if (*(char *)(param_2 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 1;
  }
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *(undefined1 *)(param_1 + 0x37) = 1;
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
  }
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  if (*(char *)(param_2 + 0x3f) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f) = 1;
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x43) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *(undefined1 *)(param_1 + 0x4b) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10b586fd4; end: 10b5872f7;  */

void FUN_10b586fd4(long param_1,long param_2)

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
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if (*(char *)(param_2 + 0x23) == '\x01') {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  if (*(char *)(param_2 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 1;
  }
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *(undefined1 *)(param_1 + 0x37) = 1;
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
  }
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  if (*(char *)(param_2 + 0x3f) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f) = 1;
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x43) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *(undefined1 *)(param_1 + 0x4b) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10b5872f8; end: 10b58732f;  */

undefined1  [16] FUN_10b5872f8(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x55);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x55);
  return auVar7;
}



/* Entry: 10b587330; end: 10b587373;  */

void FUN_10b587330(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110d0ec28;
  puVar1[1] = param_1;
  func_0x00010b5873c8();
  return;
}



/* Entry: 10b587374; end: 10b5874d7;  */

void FUN_10b587374(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b5874d8; end: 10b5874ff;  */

long FUN_10b5874d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b587500; end: 10b58753b;  */

undefined8 FUN_10b587500(undefined8 param_1)

{
  func_0x00010b587980();
  func_0x00010b58740c();
  return param_1;
}



/* Entry: 10b58753c; end: 10b58753f;  */

long FUN_10b58753c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b587540; end: 10b587553;  */

void FUN_10b587540(void)

{
  FUN_10b5874d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b587554; end: 10b587577;  */

undefined ** FUN_10b587554(void)

{
  return &PTR_DAT_110d0ed28;
}



/* Entry: 10b587578; end: 10b5877ab;  */

long * FUN_10b587578(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[3] == '\x01') {
    plVar2 = param_1;
    func_0x00010b58796c();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[2] != 0) {
    func_0x00010b58796c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b587960();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    func_0x00010b58796c();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b58796c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b587960();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b58796c();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x1a) == '\x01') {
    func_0x00010b58796c();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b587960();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x1b) == '\x01') {
    func_0x00010b58796c();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[4] == '\x01') {
    func_0x00010b58796c();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b587960();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010b58796c();
    plVar1 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x22) == '\x01') {
    func_0x00010b58796c();
    plVar2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b587960();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x23) == '\x01') {
    func_0x00010b58796c();
    plVar1 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b587960();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b58796c();
    param_2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar1);
    func_0x00010b587960();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b5877ac; end: 10b5878b7;  */

long FUN_10b5877ac(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = (ushort)(byte)((uint)uVar6 >> 8) * 2;
  lVar3 = ((ulong)CONCAT24(uVar2,(uint)(ushort)((ushort)(byte)uVar6 * 2)) & 0xff) +
          (ulong)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ulong)uVar2 & 0xff) + (ulong)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + (ulong)uVar1
  ;
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = (ushort)(byte)((uint)uVar6 >> 8) * 2;
  lVar3 = ((ulong)CONCAT24(uVar2,(uint)(ushort)((ushort)(byte)uVar6 * 2)) & 0xff) +
          (ulong)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ulong)uVar2 & 0xff) + (ulong)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + lVar3;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5878b8; end: 10b5878ef;  */

void FUN_10b5878b8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b587560();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if (*(char *)(param_2 + 0x23) == '\x01') {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10b5878f0; end: 10b587913;  */

undefined1  [16] FUN_10b5878f0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x28);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar6;
}



/* Entry: 10b587914; end: 10b58795f;  */

void FUN_10b587914(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d0ece8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b587960; end: 10b5879eb;  */

void FUN_10b587960(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b5879ec; end: 10b587a13;  */

long FUN_10b5879ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b587a14; end: 10b587a5f;  */

undefined8 * FUN_10b587a14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0ed98;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b58799c(param_1,param_3);
  return param_1;
}



/* Entry: 10b587a60; end: 10b587a63;  */

long FUN_10b587a60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b587a64; end: 10b587a77;  */

void FUN_10b587a64(void)

{
  FUN_10b5879ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b587a78; end: 10b587a97;  */

undefined ** FUN_10b587a78(void)

{
  return &PTR_DAT_110d0edd8;
}



/* Entry: 10b587a98; end: 10b587b8f;  */

long * FUN_10b587a98(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    FUN_10b587ccc();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b587cd8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b587ccc();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b587cd8();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    FUN_10b587ccc();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b587cd8();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b587ccc();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b587cd8();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b587b90; end: 10b587c27;  */

long FUN_10b587b90(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b587c28; end: 10b587c5f;  */

void FUN_10b587c28(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b587a84();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10b587c60; end: 10b587c83;  */

undefined1  [16] FUN_10b587c60(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b587c84; end: 10b587ccb;  */

void FUN_10b587c84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110d0ed98;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b587ccc; end: 10b587ceb;  */

ulong * FUN_10b587ccc(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b587cec; end: 10b587d23;  */

long FUN_10b587cec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b587d24; end: 10b587d27;  */

long FUN_10b587d24(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b587d28; end: 10b587d3b;  */

void FUN_10b587d28(void)

{
  FUN_10b587cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b587d3c; end: 10b587d47;  */

undefined ** FUN_10b587d3c(void)

{
  return &PTR_DAT_110d0eee0;
}



/* Entry: 10b587d48; end: 10b587d87;  */

void FUN_10b587d48(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b587d88; end: 10b587e6f;  */

long * FUN_10b587d88(long param_1,long *param_2,long *param_3)

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
      goto LAB_10b587dcc;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b587dcc:
    func_0x00010b588478(puVar5,lVar1,param_3,&UNK_10f77cb20);
    param_2 = param_3;
    func_0x00010b588458(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b587e2c;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b587e2c;
  func_0x00010b588478(puVar5);
  param_2 = param_3;
  func_0x00010b588458(param_3,2);
LAB_10b587e2c:
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



/* Entry: 10b587e70; end: 10b587f9b;  */

long FUN_10b587e70(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b587ea8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b587ea8:
    lVar3 = 0;
    goto LAB_10b587eac;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b587eac:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
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



/* Entry: 10b587f9c; end: 10b58801f;  */

undefined8 * FUN_10b587f9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0eea0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b588350(param_1 + 2,param_2,param_3 + 0x10);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c(param_3,param_2);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}


