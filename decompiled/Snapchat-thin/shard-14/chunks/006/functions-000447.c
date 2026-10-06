/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b58fdcc; end: 10b58fdef;  */

undefined8 FUN_10b58fdcc(undefined8 param_1)

{
  func_0x00010b59011c();
  return param_1;
}



/* Entry: 10b58fdf0; end: 10b58fe03;  */

void FUN_10b58fdf0(void)

{
  FUN_10b58fdcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58fe04; end: 10b58fe23;  */

undefined ** FUN_10b58fe04(void)

{
  return &PTR_DAT_110d10578;
}



/* Entry: 10b58fe24; end: 10b58fe93;  */

long * FUN_10b58fe24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b59010c();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b590130();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    puVar3 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,param_1);
    param_4 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
    while( true ) {
      iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar7 = (int)uVar5;
      uVar2 = iVar7 - iVar8;
      uVar5 = (ulong)uVar2;
      if (uVar2 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar5);
}



/* Entry: 10b58fe94; end: 10b58fecb;  */

long FUN_10b58fe94(long param_1)

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



/* Entry: 10b58fecc; end: 10b58feef;  */

undefined8 FUN_10b58fecc(undefined8 param_1)

{
  func_0x00010b59011c();
  return param_1;
}



/* Entry: 10b58fef0; end: 10b58ff03;  */

void FUN_10b58fef0(void)

{
  FUN_10b58fecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58ff04; end: 10b58ff23;  */

undefined ** FUN_10b58ff04(void)

{
  return &PTR_DAT_110d105d0;
}



/* Entry: 10b58ff24; end: 10b58ff9f;  */

long * FUN_10b58ff24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b59010c();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b590130();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280a8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar6 = (int)uVar4;
      uVar1 = iVar6 - iVar7;
      uVar4 = (ulong)uVar1;
      if (uVar1 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar4);
}



/* Entry: 10b58ffa0; end: 10b58ffe7;  */

long FUN_10b58ffa0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 10b58ffe8; end: 10b590057;  */

undefined8 * FUN_10b58ffe8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d10448;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  FUN_10b58fd8c();
  return puVar1;
}



/* Entry: 10b590058; end: 10b5900cb;  */

undefined8 * FUN_10b590058(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110d10498;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  func_0x00010b58fdac();
  return puVar1;
}



/* Entry: 10b5900cc; end: 10b590147;  */

void FUN_10b5900cc(void)

{
  return;
}



/* Entry: 10b590148; end: 10b59019b;  */

void FUN_10b590148(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b59062c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b59019c; end: 10b5901cb;  */

long FUN_10b59019c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5901cc(param_1);
  return param_1;
}



/* Entry: 10b5901cc; end: 10b5901df;  */

void FUN_10b5901cc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b59062c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5901e0; end: 10b5901f3;  */

void FUN_10b5901e0(void)

{
  FUN_10b59019c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5901f4; end: 10b590203;  */

long FUN_10b5901f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59065c(param_1);
  return param_1;
}



/* Entry: 10b590204; end: 10b59023b;  */

void FUN_10b590204(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b590148();
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



/* Entry: 10b59023c; end: 10b590317;  */

long * FUN_10b59023c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    func_0x00010b5909bc();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5909c8();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x24) == 3) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,param_1[3],*(undefined4 *)(param_1[3] + 0x18),param_2,param_3);
  }
  else {
    plVar2 = param_2;
    if (*(int *)((long)param_1 + 0x24) == 2) {
      func_0x00010b5909bc();
      plVar2 = (long *)0x10;
      func_0x000107c280a8(0x10,plVar1);
      func_0x00010b5909c8();
    }
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar2;
  }
  uVar5 = param_1[1] & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if ((long)(int)uVar4 <= *param_3 - (long)plVar2) {
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
    iVar6 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar6 - iVar7);
    if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar2 + (long)iVar7;
    plVar2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar6);
}



/* Entry: 10b590318; end: 10b5903c3;  */

long FUN_10b590318(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010b590754();
    func_0x00010b5909a4();
    lVar1 = lVar1 + lVar2 + extraout_x8;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b590394;
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6);
  }
  lVar1 = lVar1 + 1;
LAB_10b590394:
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



/* Entry: 10b5903c4; end: 10b5903c7;  */

void FUN_10b5903c4(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5909e0();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b590148();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      if (iVar3 == 3) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 3) {
          ppuVar1 = &PTR_PTR_1133a45b0;
        }
        func_0x00010b590498(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b590890(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b5903c8; end: 10b59055b;  */

void FUN_10b5903c8(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5909e0();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b590148();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      if (iVar3 == 3) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 3) {
          ppuVar1 = &PTR_PTR_1133a45b0;
        }
        func_0x00010b590498(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b590890(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b59055c; end: 10b590593;  */

void FUN_10b59055c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b590204();
  func_0x00010b5909e0(param_1,param_2);
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b590148();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      if (iVar3 == 3) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 3) {
          ppuVar1 = &PTR_PTR_1133a45b0;
        }
        func_0x00010b590498(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b590890(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b590594; end: 10b5905d7;  */

void FUN_10b590594(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 10b5905d8; end: 10b59062b;  */

void FUN_10b5905d8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b593440();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b59062c; end: 10b59065b;  */

long FUN_10b59062c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59065c(param_1);
  return param_1;
}



/* Entry: 10b59065c; end: 10b59066b;  */

void FUN_10b59065c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b593440();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b59066c; end: 10b59067f;  */

void FUN_10b59066c(void)

{
  FUN_10b59062c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b590680; end: 10b59068b;  */

undefined ** FUN_10b590680(void)

{
  return &PTR_DAT_110d10768;
}



/* Entry: 10b59068c; end: 10b5907d3;  */

void FUN_10b59068c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5905d8();
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



/* Entry: 10b5907d4; end: 10b5907ef;  */

long FUN_10b5907d4(long param_1)

{
  long extraout_x8;
  
  FUN_10b5936f8();
  func_0x00010b5909a4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5907f0; end: 10b590803;  */

void FUN_10b5907f0(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5909e0();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b5905d8();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
        if (*(int *)(unaff_x20 + 0x1c) != 2) {
          ppuVar1 = &PTR_PTR_1133a4be0;
        }
        FUN_10b593270(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      }
      else {
        FUN_10b590930(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
        *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
      }
    }
    else if (iVar2 == 1) {
      *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b590804; end: 10b59088f;  */

void FUN_10b590804(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d10678;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b590890; end: 10b59092f;  */

undefined8 * FUN_10b590890(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d10678;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    FUN_10b590930(param_1,*(undefined8 *)(param_2 + 0x10));
    puVar2[2] = param_1;
  }
  else if (iVar1 == 1) {
    puVar2[2] = *(undefined8 *)(param_2 + 0x10);
  }
  return puVar2;
}



/* Entry: 10b590930; end: 10b590973;  */

undefined8 * FUN_10b590930(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x90;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x90);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d10d48;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b593c2c();
  }
  func_0x00010b593d68(puVar1 + 2);
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b593d68(puVar1 + 5);
  *(undefined4 *)(puVar1 + 7) = 0;
  func_0x00010b593d68(puVar1 + 8);
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  puVar1[0x10] = *(undefined8 *)(param_2 + 0x80);
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  puVar1[0xd] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xb] = uVar2;
  return puVar1;
}



/* Entry: 10b590974; end: 10b5909f3;  */

void FUN_10b590974(void)

{
  return;
}



/* Entry: 10b5909f4; end: 10b590a4b;  */

undefined8 * FUN_10b5909f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d108f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5916a0();
  }
  FUN_10b59138c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b590a4c; end: 10b590a77;  */

long FUN_10b590a4c(long param_1)

{
  func_0x00010b591680();
  FUN_10b5913b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b590a78; end: 10b590a7b;  */

long FUN_10b590a78(long param_1)

{
  func_0x00010b591680();
  FUN_10b5913b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b590a7c; end: 10b590a8f;  */

void FUN_10b590a7c(void)

{
  FUN_10b590a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b590a90; end: 10b590a9b;  */

undefined ** FUN_10b590a90(void)

{
  return &PTR_DAT_110d10930;
}



/* Entry: 10b590a9c; end: 10b590adb;  */

void FUN_10b590a9c(long param_1)

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



/* Entry: 10b590adc; end: 10b590b83;  */

long * FUN_10b590adc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b591640();
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x18);
    param_4 = (long *)0x1;
    func_0x00010b591678();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5916bc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b590b84; end: 10b590bfb;  */

long FUN_10b590b84(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b590bfc();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b590bfc; end: 10b590c13;  */

void FUN_10b590bfc(void)

{
  FUN_10b590df8();
  func_0x00010b591604();
  return;
}



/* Entry: 10b590c14; end: 10b590c17;  */

void FUN_10b590c14(long param_1,long param_2)

{
  FUN_10b590c60(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b590c18; end: 10b590c5f;  */

void FUN_10b590c18(long param_1,long param_2)

{
  FUN_10b590c60(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b590c60; end: 10b590c6f;  */

void FUN_10b590c60(long *param_1,long param_2)

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



/* Entry: 10b590c70; end: 10b590cc3;  */

void FUN_10b590c70(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b591004();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b590cc4; end: 10b590cf7;  */

long FUN_10b590cc4(long param_1)

{
  func_0x00010b591680();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b590c70(param_1);
  }
  return param_1;
}



/* Entry: 10b590cf8; end: 10b590cfb;  */

long FUN_10b590cf8(long param_1)

{
  func_0x00010b591680();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b590c70(param_1);
  }
  return param_1;
}



/* Entry: 10b590cfc; end: 10b590d0f;  */

void FUN_10b590cfc(void)

{
  FUN_10b590cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b590d10; end: 10b590d1f;  */

long FUN_10b590d10(long param_1)

{
  func_0x00010b591680();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59122c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b59122c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b590d20; end: 10b590d4f;  */

void FUN_10b590d20(long param_1)

{
  ulong *puVar1;
  
  FUN_10b590c70();
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



/* Entry: 10b590d50; end: 10b590df7;  */

long * FUN_10b590d50(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b591640();
  if (*(int *)(param_1 + 0x1c) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b591678();
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    func_0x00010b591634();
    if (*(int *)(unaff_x20 + 0x1c) == 1) {
      param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280b8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5916bc();
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



/* Entry: 10b590df8; end: 10b590e7b;  */

void FUN_10b590df8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10b590e7c();
    iVar1 = iVar1 + 1;
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  else {
    iVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b590e7c; end: 10b590e93;  */

void FUN_10b590e7c(void)

{
  func_0x00010b591150();
  func_0x00010b591604();
  return;
}



/* Entry: 10b590e94; end: 10b591003;  */

void FUN_10b590e94(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5916c8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b590c70();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
        if (*(int *)(unaff_x20 + 0x1c) != 2) {
          ppuVar1 = &PTR_PTR_1133a4710;
        }
        func_0x00010b590f58(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      }
      else {
        FUN_10b5914ec(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
        *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
      }
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b591004; end: 10b591047;  */

long FUN_10b591004(long param_1)

{
  func_0x00010b591680();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59122c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b59122c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b591048; end: 10b59105b;  */

void FUN_10b591048(void)

{
  FUN_10b591004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59105c; end: 10b591067;  */

undefined ** FUN_10b59105c(void)

{
  return &PTR_DAT_110d109d8;
}



/* Entry: 10b591068; end: 10b5910bb;  */

void FUN_10b591068(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5910bc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5910bc(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b5910bc; end: 10b5910d3;  */

void FUN_10b5910bc(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b5910d4; end: 10b5911d7;  */

long * FUN_10b5910d4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b591640();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_4 = (long *)0x1;
    func_0x00010b591678();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)0x2;
    func_0x00010b591678();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5916bc();
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



/* Entry: 10b5911d8; end: 10b5911ef;  */

void FUN_10b5911d8(void)

{
  FUN_10b591318();
  func_0x00010b591604();
  return;
}



/* Entry: 10b5911f0; end: 10b59122b;  */

void FUN_10b5911f0(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5916c8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        FUN_10b591584(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_10b5911f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        FUN_10b591584(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
      }
      else {
        FUN_10b5911f0();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59122c; end: 10b59124f;  */

undefined8 FUN_10b59122c(undefined8 param_1)

{
  func_0x00010b591680();
  return param_1;
}



/* Entry: 10b591250; end: 10b591253;  */

undefined8 FUN_10b591250(undefined8 param_1)

{
  func_0x00010b591680();
  return param_1;
}



/* Entry: 10b591254; end: 10b591267;  */

void FUN_10b591254(void)

{
  FUN_10b59122c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b591268; end: 10b591273;  */

undefined ** FUN_10b591268(void)

{
  return &PTR_DAT_110d10a38;
}



/* Entry: 10b591274; end: 10b591317;  */

long * FUN_10b591274(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b591640();
  plVar4 = param_1;
  if (param_1[2] != 0) {
    func_0x00010b591634();
    plVar4 = *(long **)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280ac(plVar4,uVar2);
    param_4 = plVar4;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x00010b591634();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x18);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x000107c280a8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5916bc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b591318; end: 10b59138b;  */

long FUN_10b591318(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b59138c; end: 10b5913b7;  */

undefined8 * FUN_10b59138c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b590c60(param_1,param_3);
  return param_1;
}



/* Entry: 10b5913b8; end: 10b5913e7;  */

long * FUN_10b5913b8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5913e8; end: 10b5914eb;  */

void FUN_10b5913e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5916b4();
  }
  else {
    func_0x00010b591694();
  }
  *puVar1 = &PTR_FUN_110d10800;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5914ec; end: 10b591583;  */

undefined8 * FUN_10b5914ec(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b591688();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d10850;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5916a0();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b591584(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b591584(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 10b591584; end: 10b5915f7;  */

undefined8 * FUN_10b591584(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5916b4();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d10800;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  FUN_10b5911f0();
  return puVar1;
}



/* Entry: 10b5915f8; end: 10b5916db;  */

void FUN_10b5915f8(void)

{
  return;
}



/* Entry: 10b5916dc; end: 10b59172f;  */

void FUN_10b5916dc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10b591e48();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b591730; end: 10b59175b;  */

undefined8 FUN_10b591730(undefined8 param_1)

{
  func_0x00010b592248();
  FUN_10b59175c(param_1);
  return param_1;
}



/* Entry: 10b59175c; end: 10b59179b;  */

void FUN_10b59175c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b591bf8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 2) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_10b591e48();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b59179c; end: 10b59179f;  */

undefined8 FUN_10b59179c(undefined8 param_1)

{
  func_0x00010b592248();
  FUN_10b59175c(param_1);
  return param_1;
}



/* Entry: 10b5917a0; end: 10b5917b3;  */

void FUN_10b5917a0(void)

{
  FUN_10b591730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5917b4; end: 10b5917c3;  */

long FUN_10b5917b4(long param_1)

{
  func_0x00010b592248();
  FUN_10b592044(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5917c4; end: 10b591953;  */

void FUN_10b5917c4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b59180c(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_10b5916dc(param_1);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b591954; end: 10b591983;  */

void FUN_10b591954(void)

{
  FUN_10b591d94();
  FUN_10b592210();
  return;
}



/* Entry: 10b591984; end: 10b591987;  */

void FUN_10b591984(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar3 = uVar4;
      func_0x00010b59210c(uVar4,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
    }
    else {
      FUN_10b591a7c();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x28) == iVar2) {
      if (iVar2 == 2) {
        func_0x00010b591b24(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      }
    }
    else {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_10b5916dc(param_1);
      }
      *(int *)(param_1 + 0x28) = iVar2;
      if (iVar2 == 2) {
        func_0x00010b592198(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
    }
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



/* Entry: 10b591988; end: 10b591a7b;  */

void FUN_10b591988(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar3 = uVar4;
      func_0x00010b59210c(uVar4,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
    }
    else {
      FUN_10b591a7c();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x28) == iVar2) {
      if (iVar2 == 2) {
        func_0x00010b591b24(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      }
    }
    else {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_10b5916dc(param_1);
      }
      *(int *)(param_1 + 0x28) = iVar2;
      if (iVar2 == 2) {
        func_0x00010b592198(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
    }
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



/* Entry: 10b591a7c; end: 10b591ba3;  */

void FUN_10b591a7c(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b591ba4; end: 10b591bf7;  */

void FUN_10b591ba4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  return;
}



/* Entry: 10b591bf8; end: 10b591c23;  */

undefined8 FUN_10b591bf8(undefined8 param_1)

{
  func_0x00010b592248();
  FUN_10b591c24(param_1);
  return param_1;
}



/* Entry: 10b591c24; end: 10b591c4b;  */

/* WARNING: Possible PIC construction at 0x00010b591c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b591c3c) */

void FUN_10b591c24(long param_1)

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



/* Entry: 10b591c4c; end: 10b591c4f;  */

undefined8 FUN_10b591c4c(undefined8 param_1)

{
  func_0x00010b592248();
  FUN_10b591c24(param_1);
  return param_1;
}



/* Entry: 10b591c50; end: 10b591c63;  */

void FUN_10b591c50(void)

{
  FUN_10b591bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b591c64; end: 10b591c6f;  */

undefined ** FUN_10b591c64(void)

{
  return &PTR_DAT_110d10c38;
}



/* Entry: 10b591c70; end: 10b591d93;  */

long * FUN_10b591c70(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b591ce8;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b591ce8:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77d1da);
    param_2 = param_3;
    func_0x00010b592264(param_3,2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b591d50;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b591d50;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77d224);
  param_2 = param_3;
  func_0x00010b592264(param_3,3);
LAB_10b591d50:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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



/* Entry: 10b591d94; end: 10b591e43;  */

long FUN_10b591d94(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b591dcc;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b591dcc:
    lVar3 = 0;
    goto LAB_10b591dd0;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b591dd0:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b591e44; end: 10b591e47;  */

void FUN_10b591e44(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b591e48; end: 10b591e73;  */

long FUN_10b591e48(long param_1)

{
  func_0x00010b592248();
  FUN_10b592044(param_1 + 0x10);
  return param_1;
}


