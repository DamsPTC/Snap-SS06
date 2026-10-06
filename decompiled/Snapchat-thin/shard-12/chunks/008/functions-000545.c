/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098cfdf8; end: 1098cfe9b;  */

long FUN_1098cfdf8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098cfe9c; end: 1098cfebf;  */

undefined8 FUN_1098cfe9c(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098cfec0; end: 1098cfec3;  */

undefined8 FUN_1098cfec0(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098cfec4; end: 1098cfed7;  */

void FUN_1098cfec4(void)

{
  FUN_1098cfe9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cfed8; end: 1098cfeff;  */

undefined ** FUN_1098cfed8(void)

{
  return &PTR_DAT_110b19b10;
}



/* Entry: 1098cff00; end: 1098cffa3;  */

long * FUN_1098cff00(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098d1320();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d13a0();
    func_0x0001098d1378();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d13b0();
    func_0x0001098d1378();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d1390();
    func_0x0001098d1378();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001098d12d0();
    func_0x000107c280a8(0x21,param_1);
    func_0x0001098d1378();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1384();
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



/* Entry: 1098cffa4; end: 1098d0007;  */

long FUN_1098cffa4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d0008; end: 1098d0033;  */

undefined8 FUN_1098d0008(undefined8 param_1)

{
  func_0x0001098d1338();
  FUN_1098d0034(param_1);
  return param_1;
}



/* Entry: 1098d0034; end: 1098d006b;  */

void FUN_1098d0034(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098cfe9c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098cfd14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d006c; end: 1098d006f;  */

undefined8 FUN_1098d006c(undefined8 param_1)

{
  func_0x0001098d1338();
  FUN_1098d0034(param_1);
  return param_1;
}



/* Entry: 1098d0070; end: 1098d0083;  */

void FUN_1098d0070(void)

{
  FUN_1098d0008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d0084; end: 1098d008f;  */

undefined ** FUN_1098d0084(void)

{
  return &PTR_DAT_110b19b50;
}



/* Entry: 1098d0090; end: 1098d00e3;  */

void FUN_1098d0090(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098cfee4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098cfd5c(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098d00e4; end: 1098d01df;  */

long * FUN_1098d00e4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098d1320();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    param_4 = (long *)0x1;
    func_0x0001098d1370();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)0x2;
    func_0x0001098d1370();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1384();
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



/* Entry: 1098d01e0; end: 1098d020f;  */

void FUN_1098d01e0(void)

{
  FUN_1098cffa4();
  FUN_1098d12a8();
  return;
}



/* Entry: 1098d0210; end: 1098d0213;  */

void FUN_1098d0210(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001098d13f4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1098d1058();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098cfe4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1098d10cc();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0001098cfcd4();
      }
    }
  }
  func_0x0001098d1414();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098d1404();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098d0214; end: 1098d02b3;  */

void FUN_1098d0214(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001098d13f4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1098d1058();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098cfe4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1098d10cc();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0001098cfcd4();
      }
    }
  }
  func_0x0001098d1414();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098d1404();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098d02b4; end: 1098d02ef;  */

long FUN_1098d02b4(long param_1)

{
  func_0x0001098d1338();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098d0008();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098d02f0; end: 1098d02f3;  */

long FUN_1098d02f0(long param_1)

{
  func_0x0001098d1338();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098d0008();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098d02f4; end: 1098d0307;  */

void FUN_1098d02f4(void)

{
  FUN_1098d02b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d0308; end: 1098d0313;  */

undefined ** FUN_1098d0308(void)

{
  return &PTR_DAT_110b19b88;
}



/* Entry: 1098d0314; end: 1098d0353;  */

void FUN_1098d0314(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d1448();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1098d0090(*(undefined8 *)(unaff_x19 + 0x20));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1098d0354; end: 1098d03f3;  */

long * FUN_1098d0354(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x0001098d13c0();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1098d03a0;
  }
  else if ((int)param_2 == 0) goto LAB_1098d03a0;
  func_0x0001098d1438();
  unaff_x20 = unaff_x19;
  func_0x0001098d134c();
LAB_1098d03a0:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x14);
    unaff_x20 = (long *)0x2;
    func_0x0001098d1340();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d1384();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 1098d03f4; end: 1098d0463;  */

long FUN_1098d03f4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d1468();
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
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1098d0464(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x0001098d1424();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098d145c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 1098d0464; end: 1098d047b;  */

void FUN_1098d0464(void)

{
  func_0x0001098d0160();
  FUN_1098d12a8();
  return;
}



/* Entry: 1098d047c; end: 1098d051f;  */

void FUN_1098d047c(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d13f4();
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
    func_0x000107c30248(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_1098d1138();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1098d0214();
    }
  }
  func_0x0001098d1414();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1404();
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



/* Entry: 1098d0520; end: 1098d0557;  */

long FUN_1098d0520(long param_1)

{
  func_0x0001098d1338();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1098d0558; end: 1098d055b;  */

long FUN_1098d0558(long param_1)

{
  func_0x0001098d1338();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1098d055c; end: 1098d056f;  */

void FUN_1098d055c(void)

{
  FUN_1098d0520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d0570; end: 1098d057b;  */

undefined ** FUN_1098d0570(void)

{
  return &PTR_DAT_110b19bd0;
}



/* Entry: 1098d057c; end: 1098d05bb;  */

void FUN_1098d057c(long param_1)

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



/* Entry: 1098d05bc; end: 1098d0663;  */

long * FUN_1098d05bc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0001098d1320();
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_4 = (long *)0x1;
    func_0x0001098d1370();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1384();
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



/* Entry: 1098d0664; end: 1098d06d7;  */

long FUN_1098d0664(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
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
    FUN_1098d06d8();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098d145c();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098d06d8; end: 1098d06ef;  */

void FUN_1098d06d8(void)

{
  FUN_1098d03f4();
  FUN_1098d12a8();
  return;
}



/* Entry: 1098d06f0; end: 1098d06f3;  */

void FUN_1098d06f0(long param_1,long param_2)

{
  FUN_1098d073c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1098d06f4; end: 1098d073b;  */

void FUN_1098d06f4(long param_1,long param_2)

{
  FUN_1098d073c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1098d073c; end: 1098d076b;  */

void FUN_1098d073c(long *param_1,long param_2)

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



/* Entry: 1098d076c; end: 1098d078f;  */

undefined8 FUN_1098d076c(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098d0790; end: 1098d0793;  */

undefined8 FUN_1098d0790(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098d0794; end: 1098d07a7;  */

void FUN_1098d0794(void)

{
  FUN_1098d076c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d07a8; end: 1098d07c7;  */

undefined ** FUN_1098d07a8(void)

{
  return &PTR_DAT_110b19c18;
}



/* Entry: 1098d07c8; end: 1098d0833;  */

long * FUN_1098d07c8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001098d1320();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x0001098d12d0();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    puVar3 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,param_1);
    param_4 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098d1384();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
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
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1098d0834; end: 1098d086f;  */

long FUN_1098d0834(long param_1)

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



/* Entry: 1098d0870; end: 1098d08f7;  */

void FUN_1098d0870(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x38) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098d08cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1098d076c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 4) goto LAB_1098d08cc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098d08cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1098d0520();
    }
  }
  __ZdlPv();
LAB_1098d08cc:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1098d08f8; end: 1098d09bf;  */

undefined8 * FUN_1098d08f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b19a90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098d1364();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x000107c2809c(lVar1,param_2);
  param_1[4] = lVar1;
  iVar3 = *(int *)(param_3 + 0x38);
  *(int *)(param_1 + 7) = iVar3;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001098d1138(param_2,*(undefined8 *)(param_3 + 0x28));
    iVar3 = *(int *)(param_1 + 7);
  }
  param_1[5] = uVar2;
  if (iVar3 == 5) {
    FUN_1098d123c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  else {
    if (iVar3 != 4) {
      return param_1;
    }
    func_0x0001098d11cc(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 1098d09c0; end: 1098d09eb;  */

undefined8 FUN_1098d09c0(undefined8 param_1)

{
  func_0x0001098d1338();
  FUN_1098d09ec(param_1);
  return param_1;
}



/* Entry: 1098d09ec; end: 1098d0a3b;  */

void FUN_1098d09ec(long param_1)

{
  ulong uVar1;
  
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098d0008();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098d08cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1098d076c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 4) goto LAB_1098d08cc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098d08cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1098d0520();
    }
  }
  __ZdlPv();
LAB_1098d08cc:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1098d0a3c; end: 1098d0a3f;  */

undefined8 FUN_1098d0a3c(undefined8 param_1)

{
  func_0x0001098d1338();
  FUN_1098d09ec(param_1);
  return param_1;
}



/* Entry: 1098d0a40; end: 1098d0a53;  */

void FUN_1098d0a40(void)

{
  FUN_1098d09c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d0a54; end: 1098d0a5f;  */

undefined ** FUN_1098d0a54(void)

{
  return &PTR_DAT_110b19c58;
}



/* Entry: 1098d0a60; end: 1098d0aaf;  */

void FUN_1098d0a60(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d1448();
  func_0x000107c3025c(unaff_x19 + 0x20);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1098d0090(*(undefined8 *)(unaff_x19 + 0x28));
  }
  FUN_1098d0870();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1098d0ab0; end: 1098d0bc3;  */

long * FUN_1098d0ab0(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  undefined8 *puVar5;
  int iVar6;
  
  func_0x0001098d13c0();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098d0ae0;
  }
  else if ((int)param_2 != 0) {
LAB_1098d0ae0:
    func_0x0001098d1438();
    unaff_x20 = unaff_x19;
    func_0x0001098d134c();
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    unaff_x20 = (long *)0x2;
    func_0x0001098d1340();
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_1098d0b40;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1098d0b40:
    func_0x0001098d1438(puVar5);
    unaff_x20 = unaff_x19;
    func_0x0001098d134c();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x38);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 4) {
    lVar3 = 0x28;
  }
  else {
    if (uVar1 != 5) goto LAB_1098d0b8c;
    lVar3 = 0x14;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + lVar3);
  func_0x0001098d1340();
  unaff_x20 = plVar2;
LAB_1098d0b8c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d1384();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar6;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar3,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 1098d0bc4; end: 1098d0c7f;  */

long FUN_1098d0bc4(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d1468();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_1098d0bf0;
LAB_1098d0bdc:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_1098d0bdc;
LAB_1098d0bf0:
    param_1 = 0;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001098d1424();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1098d0464(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001098d1424();
  }
  if (*(int *)(unaff_x19 + 0x38) == 5) {
    func_0x0001098d0c98(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 4) goto LAB_1098d0c54;
    FUN_1098d0c80(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x0001098d1424();
LAB_1098d0c54:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098d145c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 1098d0c80; end: 1098d0caf;  */

void FUN_1098d0c80(void)

{
  FUN_1098d0664();
  FUN_1098d12a8();
  return;
}



/* Entry: 1098d0cb0; end: 1098d0cb3;  */

void FUN_1098d0cb0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001098d13f4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar4 + 8);
  }
  if (lVar7 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248(param_1,uVar4,puVar5);
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar4 + 8);
  }
  if (lVar7 != 0) {
    uVar6 = unaff_x21[1];
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248(param_1,uVar4,uVar6);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[5];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar3;
      func_0x0001098d1138();
      unaff_x21[5] = (ulong)param_1;
    }
    else {
      FUN_1098d0214();
    }
  }
  func_0x0001098d1414();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_1098d0e0c;
  iVar2 = (int)unaff_x21[7];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1098d0870();
    }
    *(int *)(unaff_x21 + 7) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x0001098d074c();
      goto LAB_1098d0e0c;
    }
    FUN_1098d123c();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 4) goto LAB_1098d0e0c;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_1098d06f4();
      goto LAB_1098d0e0c;
    }
    func_0x0001098d11cc();
    param_1 = puVar3;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_1098d0e0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1404();
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



/* Entry: 1098d0cb4; end: 1098d0e33;  */

void FUN_1098d0cb4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001098d13f4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar4 + 8);
  }
  if (lVar7 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248(param_1,uVar4,puVar5);
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar4 + 8);
  }
  if (lVar7 != 0) {
    uVar6 = unaff_x21[1];
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248(param_1,uVar4,uVar6);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[5];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar3;
      func_0x0001098d1138();
      unaff_x21[5] = (ulong)param_1;
    }
    else {
      FUN_1098d0214();
    }
  }
  func_0x0001098d1414();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_1098d0e0c;
  iVar2 = (int)unaff_x21[7];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1098d0870();
    }
    *(int *)(unaff_x21 + 7) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x0001098d074c();
      goto LAB_1098d0e0c;
    }
    FUN_1098d123c();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 4) goto LAB_1098d0e0c;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_1098d06f4();
      goto LAB_1098d0e0c;
    }
    func_0x0001098d11cc();
    param_1 = puVar3;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_1098d0e0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1404();
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



/* Entry: 1098d0e34; end: 1098d0e6b;  */

void FUN_1098d0e34(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001098d13dc();
  }
  else {
    func_0x0001098d13e4();
  }
  *puVar1 = &PTR_FUN_110b198b0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1098d0e6c; end: 1098d1057;  */

void FUN_1098d0e6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d13dc();
  }
  else {
    func_0x0001098d13e4();
  }
  *puVar1 = &PTR_FUN_110b198b0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1098d1058; end: 1098d10cb;  */

undefined8 * FUN_1098d1058(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110b19900;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  func_0x0001098cfe4c();
  return puVar1;
}



/* Entry: 1098d10cc; end: 1098d1137;  */

undefined8 * FUN_1098d10cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d13dc();
  }
  else {
    func_0x0001098d13e4();
  }
  *puVar1 = &PTR_FUN_110b198b0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  func_0x0001098cfcd4();
  return puVar1;
}



/* Entry: 1098d1138; end: 1098d123b;  */

undefined8 * FUN_1098d1138(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d1430();
  }
  else {
    func_0x0001098d1358();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b199a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098d1364();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1098d1058(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1098d10cc(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 1098d123c; end: 1098d12a7;  */

undefined8 * FUN_1098d123c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b19950;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x0001098d074c();
  return puVar1;
}



/* Entry: 1098d12a8; end: 1098d147b;  */

long FUN_1098d12a8(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1098d147c; end: 1098d14db;  */

undefined8 * FUN_1098d147c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b19d58;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1098d14dc; end: 1098d150b;  */

long FUN_1098d14dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d150c; end: 1098d150f;  */

long FUN_1098d150c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d1510; end: 1098d1523;  */

void FUN_1098d1510(void)

{
  FUN_1098d14dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d1524; end: 1098d152f;  */

undefined ** FUN_1098d1524(void)

{
  return &PTR_DAT_110b19d98;
}



/* Entry: 1098d1530; end: 1098d156b;  */

void FUN_1098d1530(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 1098d156c; end: 1098d161b;  */

long * FUN_1098d156c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_1098d15d8;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_1098d15d8;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f587129);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_1098d15d8:
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



/* Entry: 1098d161c; end: 1098d1683;  */

void FUN_1098d161c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1098d1654;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1098d1654:
    iVar1 = 0;
    goto LAB_1098d1658;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_1098d1658:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 1098d1684; end: 1098d1687;  */

void FUN_1098d1684(long param_1,long param_2)

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



/* Entry: 1098d1688; end: 1098d16f7;  */

void FUN_1098d1688(long param_1,long param_2)

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



/* Entry: 1098d16f8; end: 1098d16ff;  */

void FUN_1098d16f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b19d58;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d1700; end: 1098d174f;  */

void FUN_1098d1700(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b19d58;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d1750; end: 1098d1763;  */

void FUN_1098d1750(void)

{
  return;
}



/* Entry: 1098d1764; end: 1098d17db;  */

undefined8 * FUN_1098d1764(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b19e08;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001098d1acc(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 1098d17dc; end: 1098d180b;  */

long FUN_1098d17dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d180c(param_1);
  return param_1;
}



/* Entry: 1098d180c; end: 1098d1827;  */

void FUN_1098d180c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098d1b60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d1828; end: 1098d182b;  */

long FUN_1098d1828(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d180c(param_1);
  return param_1;
}



/* Entry: 1098d182c; end: 1098d183f;  */

void FUN_1098d182c(void)

{
  FUN_1098d17dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d1840; end: 1098d184b;  */

undefined ** FUN_1098d1840(void)

{
  return &PTR_DAT_110b19e48;
}



/* Entry: 1098d184c; end: 1098d1897;  */

void FUN_1098d184c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001098d1bf8(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 1098d1898; end: 1098d193f;  */

long * FUN_1098d1898(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = (undefined8 *)0x9;
    func_0x000107c280a8(9,plVar2);
    param_2 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
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
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar8;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar7);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 1098d1940; end: 1098d19a7;  */

void FUN_1098d1940(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1098d19a8();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 1098d19a8; end: 1098d19d3;  */

long FUN_1098d19a8(long param_1)

{
  FUN_1098d1cb8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1098d19d4; end: 1098d19d7;  */

void FUN_1098d19d4(long param_1,long param_2)

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
      func_0x0001098d1acc(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x0001098d1b24(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
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



/* Entry: 1098d19d8; end: 1098d1a7b;  */

void FUN_1098d19d8(long param_1,long param_2)

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
      func_0x0001098d1acc(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x0001098d1b24(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
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



/* Entry: 1098d1a7c; end: 1098d1a83;  */

void FUN_1098d1a7c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b19e08;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1098d1a84; end: 1098d1b0f;  */

void FUN_1098d1a84(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b19e08;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1098d1b10; end: 1098d1b5f;  */

void FUN_1098d1b10(void)

{
  return;
}



/* Entry: 1098d1b60; end: 1098d1b87;  */

long FUN_1098d1b60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1098d1b88; end: 1098d1bd3;  */

undefined8 * FUN_1098d1b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110b19eb0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x0001098d1b24(param_1,param_3);
  return param_1;
}



/* Entry: 1098d1bd4; end: 1098d1bd7;  */

long FUN_1098d1bd4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1098d1bd8; end: 1098d1beb;  */

void FUN_1098d1bd8(void)

{
  FUN_1098d1b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d1bec; end: 1098d1c0b;  */

undefined ** FUN_1098d1bec(void)

{
  return &PTR_DAT_110b19ef0;
}



/* Entry: 1098d1c0c; end: 1098d1cb7;  */

long * FUN_1098d1c0c(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = param_1;
  if (param_1[2] != 0) {
    puVar2 = param_1;
    FUN_1098d1d54();
    uVar6 = param_1[2];
    puVar1 = (undefined8 *)0x9;
    func_0x000107c280a8(9,puVar2);
    param_2 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  if (param_1[3] != 0) {
    FUN_1098d1d54();
    uVar6 = param_1[3];
    puVar2 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,puVar1);
    param_2 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  if ((param_1[1] & 1) != 0) {
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
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1098d1cb8; end: 1098d1d0b;  */

long FUN_1098d1cb8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
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



/* Entry: 1098d1d0c; end: 1098d1d53;  */

void FUN_1098d1d0c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b19eb0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d1d54; end: 1098d1d67;  */

ulong * FUN_1098d1d54(void)

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


