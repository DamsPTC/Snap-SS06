/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10922bc80; end: 10922bc93;  */

void FUN_10922bc80(void)

{
  FUN_10922bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922bc94; end: 10922bc9f;  */

undefined ** FUN_10922bc94(void)

{
  return &PTR_DAT_110ae1f90;
}



/* Entry: 10922bca0; end: 10922bcd7;  */

void FUN_10922bca0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  FUN_10922c5d0();
  func_0x00010922bb2c();
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



/* Entry: 10922bcd8; end: 10922bdbf;  */

long * FUN_10922bcd8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010922c904();
  if (*(int *)((long)param_1 + 0x34) == 2) {
    func_0x00010922c80c();
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f55e130;
    func_0x00010922c824();
    func_0x00010922c9e8();
    func_0x00010922c778();
    unaff_x20 = unaff_x22;
  }
  else {
    unaff_x22 = param_1;
    if (*(int *)((long)param_1 + 0x34) == 1) {
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
      unaff_x22 = (long *)0x1;
      func_0x00010922c82c();
      unaff_x20 = unaff_x22;
    }
  }
  iVar5 = *(int *)(unaff_x21 + 0x18);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    uVar3 = *(ulong *)(unaff_x21 + 0x10);
    puVar2 = (ulong *)(unaff_x21 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar2 = (ulong *)(uVar3 + (long)iVar4 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x14);
    unaff_x22 = (long *)0x3;
    func_0x00010922c82c();
    unaff_x20 = unaff_x22;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010922c930();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010922c9b4();
    if (*unaff_x22 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x22 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = unaff_x22;
        func_0x000107c303e4(unaff_x22,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10922bdc0; end: 10922be37;  */

long FUN_10922bdc0(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010922c79c();
  while (unaff_x22 != 0) {
    func_0x00010922c9cc();
    func_0x00010922c9dc();
  }
  if (*(int *)(unaff_x19 + 0x34) == 1) {
    FUN_10922be38(*(undefined8 *)(unaff_x19 + 0x28));
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 2) goto LAB_10922be0c;
    func_0x00010922c9c0();
  }
  func_0x00010922c9a8();
LAB_10922be0c:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10922be38; end: 10922be53;  */

long FUN_10922be38(long param_1)

{
  long extraout_x8;
  
  FUN_10922ba30();
  func_0x00010922c784();
  return param_1 + extraout_x8;
}



/* Entry: 10922be54; end: 10922be57;  */

void FUN_10922be54(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x00010922c904();
  puVar4 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  FUN_10922bf48();
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        func_0x00010922bb2c();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    if (iVar1 == 2) {
      if (iVar2 != 2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      func_0x00010922c964();
    }
    else if (iVar1 == 1) {
      if (iVar2 == 1) {
        puVar3 = (ulong *)unaff_x21[5];
        func_0x00010922bab0();
      }
      else {
        func_0x00010922c704();
        unaff_x21[5] = (ulong)puVar4;
        puVar3 = puVar4;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c998();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10922be58; end: 10922bf47;  */

void FUN_10922be58(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x00010922c904();
  puVar4 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  FUN_10922bf48();
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        func_0x00010922bb2c();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    if (iVar1 == 2) {
      if (iVar2 != 2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      func_0x00010922c964();
    }
    else if (iVar1 == 1) {
      if (iVar2 == 1) {
        puVar3 = (ulong *)unaff_x21[5];
        func_0x00010922bab0();
      }
      else {
        func_0x00010922c704();
        unaff_x21[5] = (ulong)puVar4;
        puVar3 = puVar4;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c998();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10922bf48; end: 10922bf57;  */

void FUN_10922bf48(long *param_1,long param_2)

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



/* Entry: 10922bf58; end: 10922bf8b;  */

long FUN_10922bf58(long param_1)

{
  func_0x00010922c8ac();
  FUN_10922c3c4(param_1 + 0x28);
  FUN_10922c394(param_1 + 0x10);
  return param_1;
}



/* Entry: 10922bf8c; end: 10922bf8f;  */

long FUN_10922bf8c(long param_1)

{
  func_0x00010922c8ac();
  FUN_10922c3c4(param_1 + 0x28);
  FUN_10922c394(param_1 + 0x10);
  return param_1;
}



/* Entry: 10922bf90; end: 10922bfa3;  */

void FUN_10922bf90(void)

{
  FUN_10922bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922bfa4; end: 10922bfaf;  */

undefined ** FUN_10922bfa4(void)

{
  return &PTR_DAT_110ae1fe8;
}



/* Entry: 10922bfb0; end: 10922bfeb;  */

void FUN_10922bfb0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  FUN_10922c5d0();
  func_0x00010922c5e4(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 10922bfec; end: 10922c0a3;  */

long * FUN_10922bfec(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar4;
  int iVar5;
  
  func_0x00010922c93c();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010922c7f0();
    param_3 = (long *)(ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x1;
    func_0x00010922c89c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x40);
  plVar2 = param_4;
  if (lVar3 != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282cc();
    param_3 = param_4;
  }
  iVar5 = *(int *)(unaff_x20 + 0x30);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010922c7f0();
    param_3 = (long *)(ulong)*(uint *)(lVar3 + 0x20);
    plVar2 = (long *)0x3;
    func_0x00010922c89c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c930();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10922c0a4; end: 10922c147;  */

long FUN_10922c0a4(void)

{
  ulong *puVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  func_0x00010922c79c();
  while (unaff_x22 != 0) {
    func_0x00010922c9cc();
    func_0x00010922c9dc();
  }
  uVar4 = *(ulong *)(unaff_x19 + 0x28);
  iVar2 = *(int *)(unaff_x19 + 0x30);
  lVar5 = unaff_x20 + iVar2;
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  while (((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    FUN_10922c148(*puVar1);
    func_0x00010922c9dc();
    puVar1 = puVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar5 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * -9 + 0x2c0U >> 6) + lVar5;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(unaff_x19 + 0x48) = (int)lVar5;
  return lVar5;
}



/* Entry: 10922c148; end: 10922c163;  */

long FUN_10922c148(long param_1)

{
  long extraout_x8;
  
  FUN_10922b704();
  func_0x00010922c784();
  return param_1 + extraout_x8;
}



/* Entry: 10922c164; end: 10922c1b3;  */

void FUN_10922c164(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  
  func_0x00010922c8b4();
  FUN_10922bf48();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10922c1b4();
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010922c8f4();
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



/* Entry: 10922c1b4; end: 10922c1c3;  */

void FUN_10922c1b4(long *param_1,long param_2)

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



/* Entry: 10922c1c4; end: 10922c1ef;  */

long FUN_10922c1c4(long param_1)

{
  func_0x00010922c8ac();
  FUN_10922c394(param_1 + 0x10);
  return param_1;
}



/* Entry: 10922c1f0; end: 10922c1f3;  */

long FUN_10922c1f0(long param_1)

{
  func_0x00010922c8ac();
  FUN_10922c394(param_1 + 0x10);
  return param_1;
}



/* Entry: 10922c1f4; end: 10922c207;  */

void FUN_10922c1f4(void)

{
  FUN_10922c1c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922c208; end: 10922c213;  */

undefined ** FUN_10922c208(void)

{
  return &PTR_DAT_110ae2040;
}



/* Entry: 10922c214; end: 10922c243;  */

void FUN_10922c214(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  FUN_10922c5d0();
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



/* Entry: 10922c244; end: 10922c2b3;  */

long * FUN_10922c244(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x00010922c93c();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010922c7f0();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x1;
    func_0x00010922c89c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c930();
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



/* Entry: 10922c2b4; end: 10922c303;  */

long FUN_10922c2b4(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010922c79c();
  while (unaff_x22 != 0) {
    func_0x00010922c9cc();
    func_0x00010922c9dc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10922c304; end: 10922c33b;  */

void FUN_10922c304(ulong *param_1,long param_2)

{
  func_0x00010922c8b4();
  FUN_10922bf48();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010922c8f4();
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



/* Entry: 10922c33c; end: 10922c373;  */

void FUN_10922c33c(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x00010922c91c();
  }
  else {
    func_0x00010922c7c0();
  }
  func_0x00010922c988(&PTR_FUN_110ae1c28);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10922c374; end: 10922c393;  */

void FUN_10922c374(void)

{
  func_0x00010922c9f4();
  FUN_10922bf48();
  return;
}



/* Entry: 10922c394; end: 10922c3c3;  */

long * FUN_10922c394(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10922c3c4; end: 10922c3f3;  */

long * FUN_10922c3c4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10922c3f4; end: 10922c5cf;  */

void FUN_10922c3f4(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010922c91c();
  }
  else {
    func_0x00010922c7c0();
  }
  func_0x00010922c988(&PTR_FUN_110ae1c28);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10922c5d0; end: 10922c5f7;  */

void FUN_10922c5d0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10922c5f8; end: 10922c76b;  */

undefined8 * FUN_10922c5f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010922c910();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010922c91c();
  }
  else {
    func_0x00010922c7c0();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110ae1c78;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c878();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00010922c8cc();
  param_1[2] = lVar1;
  func_0x00010922c8c0();
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10922c76c; end: 10922ca07;  */

void FUN_10922c76c(void)

{
  return;
}



/* Entry: 10922ca08; end: 10922ca1f;  */

void FUN_10922ca08(void)

{
  FUN_10922bdc0();
  func_0x00010922d1b8();
  return;
}



/* Entry: 10922ca20; end: 10922ca4f;  */

long FUN_10922ca20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10922ca50(param_1);
  return param_1;
}



/* Entry: 10922ca50; end: 10922ca7f;  */

long * FUN_10922ca50(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10922bc20();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10922ca80; end: 10922ca83;  */

long FUN_10922ca80(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10922ca50(param_1);
  return param_1;
}



/* Entry: 10922ca84; end: 10922ca97;  */

void FUN_10922ca84(void)

{
  FUN_10922ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922ca98; end: 10922caa3;  */

undefined ** FUN_10922ca98(void)

{
  return &PTR_DAT_110ae21e0;
}



/* Entry: 10922caa4; end: 10922cafb;  */

void FUN_10922caa4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10922bca0(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 10922cafc; end: 10922cbb3;  */

long * FUN_10922cafc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010922d1fc(1,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x30));
  }
  iVar6 = *(int *)(param_1 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + (long)iVar5 * 8 + 7);
    }
    param_2 = (long *)0x2;
    func_0x00010922d1fc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x48));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10922cbb4; end: 10922cc3b;  */

long FUN_10922cbb4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010922d1d4();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10922cc3c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    FUN_10922ca08();
    unaff_x20 = unaff_x20 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10922cc3c; end: 10922cc53;  */

void FUN_10922cc3c(void)

{
  FUN_10922c0a4();
  func_0x00010922d1b8();
  return;
}



/* Entry: 10922cc54; end: 10922cd07;  */

void FUN_10922cc54(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010922d154(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10922be58();
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



/* Entry: 10922cd08; end: 10922cd37;  */

long FUN_10922cd08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10922cd38(param_1);
  return param_1;
}



/* Entry: 10922cd38; end: 10922cd5f;  */

long * FUN_10922cd38(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10922cd60; end: 10922cd63;  */

long FUN_10922cd60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10922cd38(param_1);
  return param_1;
}



/* Entry: 10922cd64; end: 10922cd77;  */

void FUN_10922cd64(void)

{
  FUN_10922cd08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922cd78; end: 10922cd83;  */

undefined ** FUN_10922cd78(void)

{
  return &PTR_DAT_110ae2238;
}



/* Entry: 10922cd84; end: 10922cdd3;  */

void FUN_10922cd84(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10922cdd4; end: 10922cfc7;  */

long * FUN_10922cdd4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10922ce44;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10922ce44;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f55e174);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar3;
LAB_10922ce44:
  iVar10 = *(int *)(param_1 + 0x18);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar3 = (long *)0x2;
    func_0x00010922d1fc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x28),param_2);
    param_2 = plVar3;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x30);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x000107c280b8(param_2,uVar4);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10922cfc8; end: 10922d053;  */

void FUN_10922cfc8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10922d054; end: 10922d063;  */

void FUN_10922d054(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010922d204();
  }
  else {
    func_0x00010922d1ec();
  }
  *puVar1 = &PTR_FUN_110ae2150;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 10922d064; end: 10922d093;  */

long * FUN_10922d064(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10922d094; end: 10922d0c3;  */

long * FUN_10922d094(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10922d0c4; end: 10922d18f;  */

void FUN_10922d0c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010922d204();
  }
  else {
    func_0x00010922d1ec();
  }
  *puVar1 = &PTR_FUN_110ae2150;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 10922d190; end: 10922d253;  */

void FUN_10922d190(void)

{
  return;
}



/* Entry: 10922d254; end: 10922d2ab;  */

long FUN_10922d254(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922d2ac; end: 10922d2ff;  */

undefined1  [16] FUN_10922d2ac(void)

{
  return ZEXT816(0x10ef12930);
}



/* Entry: 10922d300; end: 10922d34b;  */

long FUN_10922d300(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    __Znam();
    _bzero();
    *(long *)(param_1 + 0x38) = lVar1;
  }
  return lVar1;
}



/* Entry: 10922d34c; end: 10922d36b;  */

void FUN_10922d34c(void)

{
  return;
}



/* Entry: 10922d36c; end: 10922d37f;  */

void FUN_10922d36c(void)

{
  FUN_10922d388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922d380; end: 10922d387;  */

void FUN_10922d380(void)

{
  return;
}



/* Entry: 10922d388; end: 10922d45f;  */

long FUN_10922d388(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922d460; end: 10922d5ab;  */

undefined8 * FUN_10922d460(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 3;
  *param_1 = &PTR_DAT_110b97a10;
  param_1[1] = 0;
  lVar4 = param_3[1];
  lVar3 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = lVar4;
  param_1[5] = lVar3;
  *param_1 = &PTR_FUN_110ae25c0;
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(uint *)(*param_3 + 0x38) >> 2 & 1;
  }
  param_1[9] = 0;
  param_1[8] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(uint *)(*param_3 + 0x38) >> 2 & 1;
  }
  param_1[0xe] = 0;
  param_1[0xd] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 0x11) = uVar2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  bVar1 = 0;
  if (*param_3 != 0) {
    bVar1 = *(byte *)(*param_3 + 0x38) >> 2 & 1;
  }
  param_1[0x16] = 0;
  *(byte *)(param_1 + 0x13) = bVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  func_0x000109fccd08(param_1 + 9,8);
  func_0x000109fccd08(param_1 + 0xe,0x40);
  FUN_10922d67c(param_1 + 0x16,8);
  return param_1;
}



/* Entry: 10922d5ac; end: 10922d61b;  */

undefined8 * FUN_10922d5ac(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae25c0;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xe;
  FUN_10922d758(&puStack_28);
  puStack_28 = param_1 + 9;
  FUN_10922d758(&puStack_28);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922d61c; end: 10922d63b;  */

void FUN_10922d61c(void)

{
  return;
}



/* Entry: 10922d63c; end: 10922d64f;  */

void FUN_10922d63c(void)

{
  func_0x00010922d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922d650; end: 10922d67b;  */

undefined8 FUN_10922d650(void)

{
  return 0;
}



/* Entry: 10922d67c; end: 10922d707;  */

void FUN_10922d67c(long *param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10922d710();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10922d70c);
      (*pcVar1)();
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    FUN_10922d724();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar5 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar5);
    lVar4 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar3;
    param_1[2] = (long)(plVar2 + param_2);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10922d708; end: 10922d70f;  */

void FUN_10922d708(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10922d70c);
  (*pcVar1)();
}



/* Entry: 10922d710; end: 10922d723;  */

void FUN_10922d710(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10922d7c8();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10922d724; end: 10922d757;  */

void FUN_10922d724(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10922d7c8();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10922d758; end: 10922d7c7;  */

void FUN_10922d758(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10922d7c8();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10922d7c8; end: 10922d863;  */

long FUN_10922d7c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10922d864; end: 10922d97b;  */

void FUN_10922d864(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  if (*param_2 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    FUN_10922d97c(auStack_50,*(undefined8 *)(param_1 + 0x18));
    plVar6 = plStack_48;
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x28) + 0x38) >> 2 & 1;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  lVar4 = *(long *)(param_1 + 0x78);
  while (lVar4 != lVar5) {
    lVar4 = lVar4 + -0x10;
    FUN_10922d7c8();
  }
  *(long *)(param_1 + 0x78) = lVar5;
  *(uint *)(param_1 + 0x88) = uVar7;
  lVar5 = *(long *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x50);
  while (lVar4 != lVar5) {
    lVar4 = lVar4 + -0x10;
    FUN_10922d7c8();
  }
  *(long *)(param_1 + 0x50) = lVar5;
  *(uint *)(param_1 + 0x60) = uVar7;
  *(char *)(param_1 + 0x98) = (char)uVar7;
  lVar5 = *param_2;
  *(long *)(param_1 + 0xa8) = param_2[1];
  *(long *)(param_1 + 0xa0) = lVar5;
  if ((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
    func_0x000109fccc60(param_1 + 0x68);
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10922d97c; end: 10922da37;  */

void FUN_10922d97c(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (((param_3 != 0) && (*(long *)(param_3 + 0x18) == param_2)) &&
     (plVar4 = *(long **)(param_3 + 0x10), plVar4 != (long *)0x0)) {
    lVar5 = *(long *)(param_3 + 8);
    plVar3 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = plVar4;
    __ZNSt3__119__shared_weak_count4lockEv();
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (plVar3 != (long *)0x0) {
      if (lVar5 != 0) {
        *param_1 = lVar5;
        param_1[1] = (long)plVar3;
        return;
      }
      *param_1 = 0;
      param_1[1] = 0;
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 != 0) {
        return;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10922da38; end: 10922da8f;  */

long FUN_10922da38(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922da90; end: 10922daf7;  */

void FUN_10922da90(void)

{
  return;
}



/* Entry: 10922daf8; end: 10922db4f;  */

long FUN_10922daf8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922db50; end: 10922db83;  */

void FUN_10922db50(void)

{
  return;
}



/* Entry: 10922db84; end: 10922db97;  */

void FUN_10922db84(void)

{
  FUN_10922dba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922db98; end: 10922dba7;  */

undefined8 FUN_10922db98(void)

{
  return 0;
}



/* Entry: 10922dba8; end: 10922dc0b;  */

undefined8 * FUN_10922dba8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b97a80;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    FUN_10922dc0c(&puStack_28);
  }
  func_0x00010922e088(param_1 + 0xc);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922dc0c; end: 10922dc7b;  */

void FUN_10922dc0c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x80;
        FUN_10922dc7c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10922dc7c; end: 10922dd2f;  */

void FUN_10922dc7c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x68;
  func_0x00010922dcf0(&lStack_28);
  lStack_28 = param_1 + 0x50;
  FUN_10922dd7c(&lStack_28);
  lStack_28 = param_1 + 0x38;
  FUN_10922de08(&lStack_28);
  lStack_28 = param_1 + 0x20;
  func_0x00010922de94(&lStack_28);
  lStack_28 = param_1 + 8;
  func_0x00010922dfd4(&lStack_28);
  return;
}



/* Entry: 10922dd30; end: 10922dd7b;  */

/* WARNING: Removing unreachable block (ram,0x00010922dd5c) */

void FUN_10922dd30(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10922dd7c; end: 10922ddbb;  */

void FUN_10922dd7c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10922ddbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10922ddbc; end: 10922de07;  */

/* WARNING: Removing unreachable block (ram,0x00010922dde8) */

void FUN_10922ddbc(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10922de08; end: 10922de47;  */

void FUN_10922de08(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10922de48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10922de48; end: 10922df03;  */

/* WARNING: Removing unreachable block (ram,0x00010922de74) */

void FUN_10922de48(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10922df04; end: 10922df87;  */

void FUN_10922df04(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x00010922df48(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10922df88; end: 10922e043;  */

/* WARNING: Removing unreachable block (ram,0x00010922dfb4) */

void FUN_10922df88(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10922e044; end: 10922e117;  */

void FUN_10922e044(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x00010922df48(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10922e118; end: 10922e163;  */

/* WARNING: Removing unreachable block (ram,0x00010922e144) */

void FUN_10922e118(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10922e164; end: 10922e1bb;  */

long FUN_10922e164(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922e1bc; end: 10922e1eb;  */

undefined8 FUN_10922e1bc(void)

{
  return 0;
}



/* Entry: 10922e1ec; end: 10922e243;  */

long FUN_10922e1ec(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}


