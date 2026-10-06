/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b56da70; end: 10b56da7b;  */

undefined ** FUN_10b56da70(void)

{
  return &PTR_DAT_110d0b1c0;
}



/* Entry: 10b56da7c; end: 10b56daab;  */

void FUN_10b56da7c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x00010b57222c();
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



/* Entry: 10b56daac; end: 10b56db13;  */

long * FUN_10b56daac(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b56db14; end: 10b56db63;  */

void FUN_10b56db14(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b56d9d0(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b5733fc();
  return;
}



/* Entry: 10b56db64; end: 10b56db67;  */

void FUN_10b56db64(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b56d9ec();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56db68; end: 10b56dbcb;  */

void FUN_10b56db68(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_FUN_110d0ae38);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  FUN_10b571a9c(unaff_x19 + 0x10);
  lVar1 = unaff_x21 + 0x28;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 10b56dbcc; end: 10b56dbf7;  */

undefined8 FUN_10b56dbcc(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56dbf8(param_1);
  return param_1;
}



/* Entry: 10b56dbf8; end: 10b56dc1f;  */

undefined8 FUN_10b56dbf8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x00010b573414(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return unaff_x19;
}



/* Entry: 10b56dc20; end: 10b56dc23;  */

undefined8 FUN_10b56dc20(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56dbf8(param_1);
  return param_1;
}



/* Entry: 10b56dc24; end: 10b56dc37;  */

void FUN_10b56dc24(void)

{
  FUN_10b56dbcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56dc38; end: 10b56dc43;  */

undefined ** FUN_10b56dc38(void)

{
  return &PTR_DAT_110d0b200;
}



/* Entry: 10b56dc44; end: 10b56dc7f;  */

void FUN_10b56dc44(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5732a4();
  if (in_NG == in_OV) {
    func_0x00010b5733f4();
  }
  func_0x000107c3025c(unaff_x19 + 0x28);
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



/* Entry: 10b56dc80; end: 10b56dd33;  */

long * FUN_10b56dc80(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b572fb0();
  func_0x000107c39e90(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_10b56dcd0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b56dcd0;
  param_4 = (long *)&UNK_10f77b78a;
  func_0x000107c39e84();
  func_0x00010b572e88();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b56dcd0:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010b572e50();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b572f8c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b573018();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b5732cc();
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
  return unaff_x20;
}



/* Entry: 10b56dd34; end: 10b56dda3;  */

long FUN_10b56dd34(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_10b56dda4();
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b573210(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000107c39e94();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b56dda4; end: 10b56ddbf;  */

long FUN_10b56dda4(long param_1)

{
  long extraout_x8;
  
  FUN_10b56e324();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56ddc0; end: 10b56ddc3;  */

void FUN_10b56ddc0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b56de1c();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56ddc4; end: 10b56de1b;  */

void FUN_10b56ddc4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b56de1c();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56de1c; end: 10b56de2b;  */

void FUN_10b56de1c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b56de2c; end: 10b56de77;  */

void FUN_10b56de2c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b57315c();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_10b56e53c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56de78; end: 10b56dea3;  */

undefined8 FUN_10b56de78(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56dea4(param_1);
  return param_1;
}



/* Entry: 10b56dea4; end: 10b56deb7;  */

void FUN_10b56dea4(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b57315c();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_10b56e53c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56deb8; end: 10b56decb;  */

void FUN_10b56deb8(void)

{
  FUN_10b56de78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56decc; end: 10b56dedb;  */

undefined8 FUN_10b56decc(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56e568(param_1);
  return param_1;
}



/* Entry: 10b56dedc; end: 10b56dfc3;  */

void FUN_10b56dedc(long param_1)

{
  ulong *puVar1;
  
  FUN_10b56de2c();
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



/* Entry: 10b56dfc4; end: 10b56dfc7;  */

void FUN_10b56dfc4(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        func_0x00010b56e054();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_10b56de2c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00010b573058();
        FUN_10b572844();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56dfc8; end: 10b56e117;  */

void FUN_10b56dfc8(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        func_0x00010b56e054();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_10b56de2c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00010b573058();
        FUN_10b572844();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56e118; end: 10b56e16f;  */

long FUN_10b56e118(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b56de78();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10b56e188(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b56e170; end: 10b56e173;  */

long FUN_10b56e170(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b56de78();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10b56e188(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b56e174; end: 10b56e187;  */

void FUN_10b56e174(void)

{
  FUN_10b56e118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56e188; end: 10b56e1b7;  */

void FUN_10b56e188(long param_1)

{
  if (*(int *)(param_1 + 0x40) == 1) {
    func_0x000107c30258(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b56e1b8; end: 10b56e1c3;  */

undefined ** FUN_10b56e1b8(void)

{
  return &PTR_DAT_110d0b298;
}



/* Entry: 10b56e1c4; end: 10b56e21b;  */

void FUN_10b56e1c4(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  if ((param_1[2] & 1) != 0) {
    FUN_10b56dedc(param_1[6]);
  }
  FUN_10b56e188(param_1);
  func_0x00010b573474();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b56e21c; end: 10b56e323;  */

long * FUN_10b56e21c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107c39e6c();
  if ((int)param_1[8] == 2) {
    func_0x00010b572e44();
    param_2 = param_1;
    func_0x00010b5732ec();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  else if ((int)param_1[8] == 1) {
    func_0x000107c39e90(*(undefined8 *)(unaff_x20 + 0x38));
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x22[1];
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f77b7b2;
    func_0x000107c39e84();
    func_0x000107c39e60();
    func_0x000107c39e9c();
    param_1 = unaff_x22;
    unaff_x21 = unaff_x22;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x3;
    func_0x00010b572f74();
    unaff_x21 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010b572e50();
    param_3 = (ulong)*(uint *)(param_2 + 6);
    param_1 = (long *)0x4;
    func_0x00010b572f74();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732d8();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b56e324; end: 10b56e3d3;  */

void FUN_10b56e324(long param_1)

{
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b572d6c();
  while (unaff_x22 != 0) {
    func_0x00010b569e34(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b56df6c(*(undefined8 *)(param_1 + 0x30));
    func_0x00010b572d34();
  }
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x00010b573004(*(undefined8 *)(param_1 + 0x38));
  }
  else if (*(int *)(param_1 + 0x40) == 1) {
    func_0x000107c39e98(*(undefined8 *)(param_1 + 0x38));
    func_0x000107c39e94();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b573310();
  return;
}



/* Entry: 10b56e3d4; end: 10b56e4c3;  */

void FUN_10b56e3d4(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572db0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    param_1 = unaff_x21 + 3;
    func_0x000107c303c4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5728c8();
      unaff_x21[6] = (ulong)unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_10b56dfc8();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x40);
  if (iVar2 != 0) {
    if ((int)unaff_x21[8] != iVar2) {
      if ((int)unaff_x21[8] != 0) {
        param_1 = unaff_x21;
        FUN_10b56e188();
      }
      *(int *)(unaff_x21 + 8) = iVar2;
    }
    if (iVar2 == 2) {
      unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
    }
    else {
      bVar3 = iVar2 == 1;
      if (bVar3) {
        func_0x00010b572fd4();
        if (!bVar3) {
          unaff_x21[7] = extraout_x8;
        }
        param_1 = unaff_x21 + 7;
        func_0x000107c30248();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56e4c4; end: 10b56e53b;  */

void FUN_10b56e4c4(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b572fe4();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b56e518;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56ea78();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10b56e518;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b56e518;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56e730();
    }
  }
  __ZdlPv();
LAB_10b56e518:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56e53c; end: 10b56e567;  */

undefined8 FUN_10b56e53c(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56e568(param_1);
  return param_1;
}



/* Entry: 10b56e568; end: 10b56e577;  */

void FUN_10b56e568(long param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b572fe4();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b56e518;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56ea78();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10b56e518;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b56e518;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56e730();
    }
  }
  __ZdlPv();
LAB_10b56e518:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56e578; end: 10b56e58b;  */

void FUN_10b56e578(void)

{
  FUN_10b56e53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56e58c; end: 10b56e59f;  */

long FUN_10b56e58c(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b04(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56e5a0; end: 10b56e6ab;  */

void FUN_10b56e5a0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b56e4c4();
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



/* Entry: 10b56e6ac; end: 10b56e6af;  */

void FUN_10b56e6ac(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56e0fc;
  func_0x00010b57331c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_10b56e4c4();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010b572ef0();
      func_0x00010b573504();
      FUN_10b56e704();
      goto LAB_10b56e0fc;
    }
    func_0x00010b573058();
    FUN_10b5729c0();
  }
  else {
    if (iVar1 != 1) goto LAB_10b56e0fc;
    if (unaff_w24 == 1) {
      func_0x00010b572ef0();
      func_0x00010b573534();
      FUN_10b56e6b0();
      goto LAB_10b56e0fc;
    }
    func_0x00010b573058();
    FUN_10b572934();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56e0fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56e6b0; end: 10b56e703;  */

void FUN_10b56e6b0(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  func_0x00010598fce8();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10b56ea64();
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56e704; end: 10b56e72f;  */

void FUN_10b56e704(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 10b56e730; end: 10b56e763;  */

long FUN_10b56e730(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b04(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56e764; end: 10b56e777;  */

void FUN_10b56e764(void)

{
  FUN_10b56e730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56e778; end: 10b56e783;  */

undefined ** FUN_10b56e778(void)

{
  return &PTR_DAT_110d0b320;
}



/* Entry: 10b56e784; end: 10b56e7bf;  */

void FUN_10b56e784(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x000107c282c0();
  func_0x00010b572240(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10b56e7c0; end: 10b56e96f;  */

long * FUN_10b56e7c0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  
  func_0x000107c39e6c();
  puVar2 = (ulong *)(param_1 + 2);
  lVar13 = 8;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU)
                       ); uVar12 != 0; uVar12 = uVar12 - 1) {
    uVar7 = *puVar2;
    puVar4 = puVar2;
    if ((uVar7 & 1) != 0) {
      puVar4 = (ulong *)(uVar7 + lVar13 + -1);
    }
    param_3 = (undefined8 *)*puVar4;
    lVar5 = (long)*(char *)((long)param_3 + 0x17);
    puVar11 = param_3;
    if (lVar5 < 0) {
      lVar5 = param_3[1];
      puVar11 = (undefined8 *)*param_3;
    }
    plVar6 = (long *)&UNK_10f77b7dd;
    func_0x000107c303d4(puVar11,lVar5,1);
    puVar11 = (undefined8 *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)puVar11 < 0) && (puVar11 = (undefined8 *)param_3[1], 0x7f < (long)puVar11)) ||
       ((*unaff_x19 - (long)unaff_x21) + 0xe < (long)puVar11)) {
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      plVar6 = param_1;
    }
    else {
      *(undefined1 *)unaff_x21 = 10;
      *(char *)((long)unaff_x21 + 1) = (char)puVar11;
      puVar9 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        puVar9 = (undefined8 *)*param_3;
      }
      plVar3 = (long *)((long)unaff_x21 + 2);
      param_1 = plVar3;
      param_3 = puVar11;
      _memcpy(plVar3,puVar9);
      unaff_x21 = plVar6;
      plVar6 = (long *)((long)plVar3 + (long)puVar11);
    }
    lVar13 = lVar13 + 8;
    param_4 = unaff_x21;
    unaff_x21 = plVar6;
  }
  iVar10 = *(int *)(unaff_x20 + 0x30);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    func_0x00010b572e50();
    func_0x00010b573574();
    func_0x00010b572f74();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b572e44();
    func_0x00010b5730c0();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b572e44();
    func_0x00010b5730b0();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(undefined8 **)(extraout_x8 + 0x10);
  }
  func_0x00010b5732d8();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar10 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar8 = (int)param_3;
    param_3 = (undefined8 *)(ulong)(uint)(iVar8 - iVar10);
    if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar10);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar8);
}



/* Entry: 10b56e970; end: 10b56ea47;  */

long FUN_10b56e970(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x9;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar2;
  lVar8 = 8;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar8 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    uVar6 = uVar4 + uVar6;
    lVar8 = lVar8 + 8;
  }
  uVar7 = *(ulong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  lVar8 = uVar6 + (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar7 & 1) != 0) {
    puVar1 = (ulong *)(uVar7 + 7);
  }
  while (((long)iVar3 & 0x1fffffffffffffffU) != 0) {
    FUN_10b56ea48(*puVar1);
    func_0x00010b5731e8();
    puVar1 = puVar1 + 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010b572f00(0xfffffff7);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010b573044();
    lVar8 = extraout_x8 + lVar8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar5 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar5 = *(long *)(extraout_x9 + 0x10);
    }
    lVar8 = lVar5 + lVar8;
  }
  *(int *)(param_1 + 0x50) = (int)lVar8;
  return lVar8;
}



/* Entry: 10b56ea48; end: 10b56ea63;  */

long FUN_10b56ea48(long param_1)

{
  long extraout_x8;
  
  FUN_10b56f3e0();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56ea64; end: 10b56ea77;  */

void FUN_10b56ea64(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  func_0x00010598fce8();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10b56ea64();
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56ea78; end: 10b56ea9b;  */

undefined8 FUN_10b56ea78(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b56ea9c; end: 10b56eaaf;  */

void FUN_10b56ea9c(void)

{
  FUN_10b56ea78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56eab0; end: 10b56eacf;  */

undefined ** FUN_10b56eab0(void)

{
  return &PTR_DAT_110d0b368;
}



/* Entry: 10b56ead0; end: 10b56eb57;  */

long * FUN_10b56ead0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if (param_1[2] != 0) {
    func_0x00010b572ee4();
    func_0x00010b5733c8();
    func_0x00010b572e7c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b572ee4();
    func_0x00010b5732ec();
    func_0x00010b572e7c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b56eb58; end: 10b56ebb7;  */

ulong FUN_10b56eb58(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b56ebb8; end: 10b56ebe3;  */

undefined8 FUN_10b56ebb8(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56ebe4(param_1);
  return param_1;
}



/* Entry: 10b56ebe4; end: 10b56ec17;  */

void FUN_10b56ebe4(void)

{
  long unaff_x19;
  
  func_0x000107c39e8c();
  func_0x000107c30258();
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    if (*(int *)(unaff_x19 + 0x24) == 2) {
      func_0x000107c39eb0();
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
  }
  return;
}



/* Entry: 10b56ec18; end: 10b56ec1b;  */

undefined8 FUN_10b56ec18(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56ebe4(param_1);
  return param_1;
}



/* Entry: 10b56ec1c; end: 10b56ec2f;  */

void FUN_10b56ec1c(void)

{
  FUN_10b56ebb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56ec30; end: 10b56ec5b;  */

void FUN_10b56ec30(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 2) {
    func_0x000107c39eb0();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b56ec5c; end: 10b56ec67;  */

undefined ** FUN_10b56ec5c(void)

{
  return &PTR_DAT_110d0b3b0;
}



/* Entry: 10b56ec68; end: 10b56ec9f;  */

void FUN_10b56ec68(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x000107c3025c();
  FUN_10b56ec30();
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



/* Entry: 10b56eca0; end: 10b56ed8f;  */

long * FUN_10b56eca0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107c39e6c();
  func_0x000107c39e90(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b56ecf0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b56ecf0;
  param_4 = (long *)&UNK_10f77b806;
  func_0x000107c39e84();
  func_0x000107c39e60();
  func_0x000107c39e9c();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10b56ecf0:
  func_0x000107c39eb4();
  if ((bool)in_ZR) {
    func_0x00010b572e44();
    func_0x000107c39eb4();
    func_0x00010b5731d4();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  else if (extraout_w8 == 2) {
    func_0x000107c39e90(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = (long *)&UNK_10f77b831;
    func_0x000107c39e84();
    func_0x000107c39e68();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732d8();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b56ed90; end: 10b56ee1f;  */

long FUN_10b56ed90(long param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107c39e88();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    func_0x00010b573004(*(undefined8 *)(unaff_x19 + 0x18));
    param_1 = (extraout_x8_00 >> 6 & 0x3ffffff) + param_1;
  }
  else if (*(int *)(unaff_x19 + 0x24) == 2) {
    func_0x000107c39e98(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x000107c39e94();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b56ee20; end: 10b56ee23;  */

void FUN_10b56ee20(ulong *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b572e6c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b5735a0();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) != iVar1) {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10b56ec30();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    }
    else {
      bVar2 = iVar1 == 2;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[3] = extraout_x8_00;
        }
        func_0x00010b57317c();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56ee24; end: 10b56eedb;  */

void FUN_10b56ee24(ulong *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b572e6c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b5735a0();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) != iVar1) {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10b56ec30();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    }
    else {
      bVar2 = iVar1 == 2;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[3] = extraout_x8_00;
        }
        func_0x00010b57317c();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56eedc; end: 10b56f067;  */

void FUN_10b56eedc(ulong *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5731dc();
  FUN_10b56ec68();
  func_0x00010b573540();
  func_0x00010b572e6c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b5735a0();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar4 = param_2[1];
  }
  if (uVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) != iVar1) {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10b56ec30();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    }
    else {
      bVar2 = iVar1 == 2;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[3] = extraout_x8_00;
        }
        func_0x00010b57317c();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56f068; end: 10b56f143;  */

void FUN_10b56f068(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_DAT_110d0a9d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573430();
  func_0x00010b5735d8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b56f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf136)[extraout_x8_00] * 4 + 0x10b56f0b4))();
    return;
  }
  return;
}



/* Entry: 10b56f144; end: 10b56f16f;  */

undefined8 FUN_10b56f144(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56f170(param_1);
  return param_1;
}



/* Entry: 10b56f170; end: 10b56f183;  */

void FUN_10b56f170(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b57315c();
  func_0x00010b5735d8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b56ef38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf127)[extraout_x8] * 4 + 0x10b56ef3c))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56f184; end: 10b56f197;  */

void FUN_10b56f184(void)

{
  FUN_10b56f144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56f198; end: 10b56f1bb;  */

long FUN_10b56f198(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571a10(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56f1bc; end: 10b56f1eb;  */

void FUN_10b56f1bc(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b56ef0c();
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



/* Entry: 10b56f1ec; end: 10b56f3df;  */

long * FUN_10b56f1ec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  int iVar3;
  
  func_0x000107c39e6c();
  func_0x00010b5735d8(*(undefined4 *)((long)param_1 + 0x1c));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b56f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf145)[extraout_x8] * 4 + 0x10b56f224))();
    return param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    func_0x00010b5732d8();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        lVar1 = (long)param_4 + (long)iVar3;
        param_4 = param_1;
        func_0x000107c303e4(param_1,lVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10b56f3e0; end: 10b56f4df;  */

void FUN_10b56f3e0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  
  iVar1 = 0;
  func_0x00010b5735d8(*(undefined4 *)(param_1 + 0x1c));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b56f414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf154)[extraout_x8] * 4 + 0x10b56f418))();
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b56f4e0; end: 10b56f4fb;  */

ulong FUN_10b56f4e0(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b573004(param_1 << 1 ^ param_1 >> 0x3f);
  return extraout_x8 >> 6 & 0x3ffffff;
}



/* Entry: 10b56f4fc; end: 10b56f54f;  */

long FUN_10b56f4fc(long param_1)

{
  long extraout_x8;
  
  FUN_10b56fbec();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56f550; end: 10b56f553;  */

void FUN_10b56f550(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56f760;
  func_0x00010b57331c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010b56ef0c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 0xe;
  switch(iVar1 + -1) {
  case 0:
    if (unaff_w24 != iVar1) {
      func_0x00010b573420();
    }
    func_0x00010b57313c();
    func_0x00010b573534();
    goto code_r0x00010b56f690;
  case 1:
  case 10:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 2:
    func_0x00010b572fd4();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x00010b5731f4();
code_r0x00010b56f690:
    func_0x00010b573120();
    goto LAB_10b56f760;
  case 3:
  case 9:
    *(undefined1 *)(unaff_x21 + 2) = *(undefined1 *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 4:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 5:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b56f77c();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572a20();
    break;
  case 6:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b56f7ac();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572a74();
    break;
  default:
    goto LAB_10b56f760;
  case 8:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
      func_0x00010b56c3ac();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    FUN_10b56b330();
    break;
  case 0xb:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f7dc();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    FUN_10b56b6b0();
    break;
  case 0xc:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f810();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572ac4();
    break;
  case 0xd:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f840();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572b18();
    break;
  case 0xe:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f8b8();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572b90();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56f760:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56f554; end: 10b56f77b;  */

void FUN_10b56f554(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56f760;
  func_0x00010b57331c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010b56ef0c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 0xe;
  switch(iVar1 + -1) {
  case 0:
    if (unaff_w24 != iVar1) {
      func_0x00010b573420();
    }
    func_0x00010b57313c();
    func_0x00010b573534();
    goto code_r0x00010b56f690;
  case 1:
  case 10:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 2:
    func_0x00010b572fd4();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x00010b5731f4();
code_r0x00010b56f690:
    func_0x00010b573120();
    goto LAB_10b56f760;
  case 3:
  case 9:
    *(undefined1 *)(unaff_x21 + 2) = *(undefined1 *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 4:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    goto LAB_10b56f760;
  case 5:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b56f77c();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572a20();
    break;
  case 6:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b56f7ac();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572a74();
    break;
  default:
    goto LAB_10b56f760;
  case 8:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
      func_0x00010b56c3ac();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    FUN_10b56b330();
    break;
  case 0xb:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f7dc();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    FUN_10b56b6b0();
    break;
  case 0xc:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f810();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572ac4();
    break;
  case 0xd:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f840();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572b18();
    break;
  case 0xe:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56f8b8();
      goto LAB_10b56f760;
    }
    func_0x00010b573058();
    func_0x00010b572b90();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56f760:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56f77c; end: 10b56f7db;  */

void FUN_10b56f77c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b572760();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56f7dc; end: 10b56f80f;  */

void FUN_10b56f7dc(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 10b56f810; end: 10b56f83f;  */

void FUN_10b56f810(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b571310();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56f840; end: 10b56f8b7;  */

void FUN_10b56f840(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b572e6c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b56b6b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b56f7dc();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00010b5735c4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56f8b8; end: 10b56f917;  */

void FUN_10b56f8b8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b571750();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56f918; end: 10b56f943;  */

long FUN_10b56f918(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571a10(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56f944; end: 10b56f957;  */

void FUN_10b56f944(void)

{
  FUN_10b56f918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56f958; end: 10b56f963;  */

undefined ** FUN_10b56f958(void)

{
  return &PTR_DAT_110d0b438;
}



/* Entry: 10b56f964; end: 10b56f993;  */

void FUN_10b56f964(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  FUN_10b572208();
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



/* Entry: 10b56f994; end: 10b56fa9f;  */

long FUN_10b56f994(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  long lStack_68;
  long *plStack_60;
  
  lVar2 = param_3;
  func_0x00010b573328();
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x10) == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b5731cc();
      while (lVar3 = param_1, lStack_68 != 0) {
        lVar2 = lStack_68 + 0x20;
        func_0x00010b5732f4();
        param_1 = lVar3;
        func_0x00010b572ebc();
        func_0x00010b57319c();
        unaff_x19 = lVar3;
      }
    }
    else {
      func_0x00010b57322c();
      for (lVar3 = lStack_68 << 3; lVar1 = param_1, lVar3 != 0; lVar3 = lVar3 + -8) {
        lVar2 = *plStack_60 + 0x18;
        func_0x00010b5732f4();
        param_1 = lVar1;
        func_0x00010b572ebc();
        plStack_60 = plStack_60 + 1;
        unaff_x19 = lVar1;
      }
      func_0x00010b57321c();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b573018();
    if (lVar2 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar2);
    unaff_x19 = param_3;
  }
  return unaff_x19;
}



/* Entry: 10b56faa0; end: 10b56fb03;  */

ulong FUN_10b56faa0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  undefined8 uStack_38;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010b5731cc();
  while (uStack_38 != 0) {
    func_0x00010b573204();
    uVar2 = lVar1 + uVar2;
    func_0x00010b57319c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = lVar1 + uVar2;
  }
  *(int *)(param_1 + 0x30) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b56fb04; end: 10b56fb07;  */

void FUN_10b56fb04(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b572760();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b56fb08; end: 10b56fb33;  */

long FUN_10b56fb08(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b04(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56fb34; end: 10b56fb47;  */

void FUN_10b56fb34(void)

{
  FUN_10b56fb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56fb48; end: 10b56fb53;  */

undefined ** FUN_10b56fb48(void)

{
  return &PTR_DAT_110d0b480;
}



/* Entry: 10b56fb54; end: 10b56fb83;  */

void FUN_10b56fb54(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x00010b572240();
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



/* Entry: 10b56fb84; end: 10b56fbeb;  */

long * FUN_10b56fb84(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b56fbec; end: 10b56fc3b;  */

void FUN_10b56fbec(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b56ea48(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b5733fc();
  return;
}



/* Entry: 10b56fc3c; end: 10b56fc3f;  */

void FUN_10b56fc3c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b56ea64();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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


