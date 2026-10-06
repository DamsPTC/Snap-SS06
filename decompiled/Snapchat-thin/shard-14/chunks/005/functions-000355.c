/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b47f484; end: 10b47f537;  */

undefined8 * FUN_10b47f484(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b47f66c();
  }
  else {
    FUN_10b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cea728;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x28;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[6] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10b47f538; end: 10b47f6ab;  */

void FUN_10b47f538(void)

{
  return;
}



/* Entry: 10b47f6ac; end: 10b47f6eb;  */

long FUN_10b47f6ac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47f6ec; end: 10b47f6ef;  */

long FUN_10b47f6ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47f6f0; end: 10b47f703;  */

void FUN_10b47f6f0(void)

{
  FUN_10b47f6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47f704; end: 10b47f70f;  */

undefined ** FUN_10b47f704(void)

{
  return &PTR_DAT_110ceaa40;
}



/* Entry: 10b47f710; end: 10b47f75b;  */

void FUN_10b47f710(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b47f75c; end: 10b47f8ab;  */

long * FUN_10b47f75c(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar7 = param_1;
  if ((int)param_1[5] != 0) {
    plVar3 = param_1;
    func_0x00010b47fa48();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8(plVar7,uVar2);
    param_2 = plVar7;
  }
  plVar3 = plVar7;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b47fa48();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar7);
    func_0x00010b47fa54();
    param_2 = plVar3;
  }
  lVar4 = param_1[3];
  for (iVar8 = 0; (int)lVar4 != iVar8; iVar8 = iVar8 + 1) {
    uVar5 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
    }
    plVar3 = (long *)0x3;
    func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar3;
  }
  plVar7 = plVar3;
  if ((int)param_1[6] != 0) {
    func_0x00010b47fa48();
    plVar7 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b47fa54();
    param_2 = plVar7;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b47fa48();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar7);
    func_0x00010b47fa54();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b47f8ac; end: 10b47f973;  */

long FUN_10b47f8ac(long param_1)

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
    FUN_10b47f974();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00010b47fa2c();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b47fa2c();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b47fa2c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x38) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b47f974; end: 10b47f99f;  */

long FUN_10b47f974(long param_1)

{
  FUN_10b484248();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b47f9a0; end: 10b47fa23;  */

void FUN_10b47f9a0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b47fa24; end: 10b47fa77;  */

void FUN_10b47fa24(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110ceaa00;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b47fa78; end: 10b47faa7;  */

long FUN_10b47fa78(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47faa8; end: 10b47faab;  */

long FUN_10b47faa8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47faac; end: 10b47fabf;  */

void FUN_10b47faac(void)

{
  FUN_10b47fa78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47fac0; end: 10b47facb;  */

undefined ** FUN_10b47fac0(void)

{
  return &PTR_DAT_110ceab40;
}



/* Entry: 10b47facc; end: 10b47fb03;  */

void FUN_10b47facc(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
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



/* Entry: 10b47fb04; end: 10b47fc6f;  */

undefined8 ** FUN_10b47fb04(undefined8 **param_1,undefined8 **param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  ppuVar4 = param_1;
  if (*(int *)(param_1 + 2) != 0) {
    if ((*(int *)(param_1 + 2) == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      ppuVar2 = &puStack_78;
      func_0x00010564c19c(ppuVar2);
      while (ppuVar4 = ppuVar2, puVar1 = puStack_78, puStack_78 != (undefined8 *)0x0) {
        ppuVar2 = (undefined8 **)(puStack_78 + 1);
        func_0x00010b480370();
        lVar5 = (long)*(char *)((long)puVar1 + 0x1f);
        if (lVar5 < 0) {
          ppuVar2 = (undefined8 **)puVar1[1];
          lVar5 = puVar1[2];
        }
        func_0x00010b480348(ppuVar2,lVar5);
        func_0x00010b480338();
        func_0x00010b4803d4();
        param_2 = ppuVar4;
      }
    }
    else {
      ppuVar4 = &puStack_78;
      func_0x000105991b98(ppuVar4);
      puVar1 = apuStack_70[0];
      for (lVar5 = (long)puStack_78 << 3; ppuVar2 = ppuVar4, lVar5 != 0; lVar5 = lVar5 + -8) {
        ppuVar4 = (undefined8 **)*puVar1;
        func_0x00010b480370();
        puVar3 = (undefined8 *)(long)*(char *)((long)ppuVar4 + 0x17);
        if ((long)puVar3 < 0) {
          puVar3 = ppuVar4[1];
          ppuVar4 = (undefined8 **)*ppuVar4;
        }
        func_0x00010b480348(ppuVar4,puVar3);
        func_0x00010b480338();
        puVar1 = puVar1 + 1;
        param_2 = ppuVar2;
      }
      ppuVar4 = apuStack_70;
      func_0x000105991ac8(ppuVar4);
    }
  }
  if (((ulong)param_1[1] & 1) != 0) {
    func_0x00010b4803dc();
    param_2 = ppuVar4;
  }
  return param_2;
}



/* Entry: 10b47fc70; end: 10b47fcd3;  */

long FUN_10b47fc70(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b4803a8();
  while (uStack_38 != 0) {
    lVar1 = uStack_38 + 8;
    func_0x000105990b3c(lVar1,uStack_38 + 0x20);
    unaff_x20 = lVar1 + unaff_x20;
    func_0x00010b4803d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47fcd4; end: 10b47fcd7;  */

void FUN_10b47fcd4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b480400();
  func_0x0001059929d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b47fcd8; end: 10b47fd13;  */

void FUN_10b47fcd8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b480400();
  func_0x0001059929d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b47fd14; end: 10b47fd2b;  */

void FUN_10b47fd14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceab00;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10b47fd2c; end: 10b47fd93;  */

undefined8 * FUN_10b47fd2c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceab00;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b480154(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b47fd94; end: 10b47fdc3;  */

long FUN_10b47fd94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4801a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47fdc4; end: 10b47fdc7;  */

long FUN_10b47fdc4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4801a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47fdc8; end: 10b47fddb;  */

void FUN_10b47fdc8(void)

{
  FUN_10b47fd94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47fddc; end: 10b47fdf7;  */

undefined ** FUN_10b47fddc(void)

{
  return &PTR_DAT_110ceab88;
}



/* Entry: 10b47fdf8; end: 10b47fe4b;  */

void FUN_10b47fdf8(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10500580020,0);
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



/* Entry: 10b47fe4c; end: 10b47ffc7;  */

long **** FUN_10b47fe4c(long ****param_1,long ****param_2,long param_3)

{
  uint uVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  ulong uVar4;
  ulong uVar5;
  long ***ppplStack_70;
  long **applStack_68 [3];
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = (ulong)uVar1;
  pppplVar2 = param_1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      pppplVar3 = param_1;
      func_0x00010b4803f4();
      while (pppplVar2 = pppplVar3, (long ***)applStack_68[0] != (long ***)0x0) {
        func_0x00010b4803bc();
        func_0x00010b480338();
        pppplVar3 = (long ****)applStack_68;
        func_0x000107c27d54(pppplVar3);
        param_2 = pppplVar2;
      }
    }
    else {
      pppplVar2 = (long ****)(uVar4 << 3);
      __Znam();
      ppplStack_70 = (long ***)pppplVar2;
      func_0x00010b4803f4();
      while ((long ***)applStack_68[0] != (long ***)0x0) {
        *pppplVar2 = (long ***)(applStack_68[0] + 1);
        func_0x000107c27d54(applStack_68);
        pppplVar2 = pppplVar2 + 1;
      }
      pppplVar2 = (long ****)ppplStack_70;
      func_0x000105991c2c(ppplStack_70,ppplStack_70 + uVar4);
      uVar5 = uVar4 << 3;
      while (pppplVar3 = pppplVar2, uVar4 != 0) {
        func_0x00010b4803bc();
        pppplVar2 = pppplVar3;
        func_0x00010b480338();
        uVar5 = uVar5 - 8;
        param_2 = pppplVar3;
        uVar4 = uVar5;
      }
      pppplVar2 = &ppplStack_70;
      func_0x000105991ac8(pppplVar2);
    }
  }
  if (((ulong)param_1[1] & 1) != 0) {
    func_0x00010b4803dc();
    param_2 = pppplVar2;
  }
  return param_2;
}



/* Entry: 10b47ffc8; end: 10b480067;  */

void FUN_10b47ffc8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_w8;
  uint extraout_w9;
  
  uVar2 = param_4;
  func_0x000107c28094(param_4,param_3);
  uVar3 = 10;
  func_0x000107c280a8(10,uVar2);
  uVar2 = param_1;
  func_0x000107c282a0(param_1);
  iVar1 = (int)uVar2;
  func_0x00010b480414((int)param_2[6]);
  uVar4 = (ulong)(iVar1 + extraout_w8 + (extraout_w9 >> 6) + 2);
  func_0x000107c280a8(uVar4,uVar3);
  uVar3 = 1;
  func_0x0001059928f0(1,param_1,uVar4,param_4);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  uVar4 = (ulong)*(uint *)(param_2 + 6);
  uVar3 = param_4;
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,uVar3);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar4,param_4);
  return;
}



/* Entry: 10b480068; end: 10b480103;  */

long FUN_10b480068(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b4803a8();
  while (uStack_38 != 0) {
    lVar1 = uStack_38 + 8;
    func_0x00010b4800cc(lVar1,uStack_38 + 0x20);
    unaff_x20 = lVar1 + unaff_x20;
    func_0x00010b4803d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b480104; end: 10b480107;  */

void FUN_10b480104(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b480400();
  FUN_10b480250();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b480108; end: 10b480143;  */

void FUN_10b480108(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b480400();
  FUN_10b480250();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b480144; end: 10b480153;  */

void FUN_10b480144(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110ceaab0;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b480154; end: 10b4801a3;  */

undefined8 * FUN_10b480154(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_10b480250(param_1,param_3);
  return param_1;
}



/* Entry: 10b4801a4; end: 10b4801e7;  */

long FUN_10b4801a4(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500580020,0);
  }
  return param_1;
}



/* Entry: 10b4801e8; end: 10b480223;  */

void FUN_10b4801e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110ceaab0;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b480224; end: 10b48024f;  */

long FUN_10b480224(long param_1)

{
  FUN_10b47fc70();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b480250; end: 10b480337;  */

void FUN_10b480250(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *apiStack_48 [3];
  
  func_0x00010564c19c(apiStack_48);
  while (piVar1 = apiStack_48[0], apiStack_48[0] != (int *)0x0) {
    piVar2 = apiStack_48[0] + 2;
    func_0x000107c28188();
    func_0x00010b480354();
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)(ulong)(*param_1 + 1);
      piVar2 = param_1;
      func_0x000107c27d60(param_1,piVar3);
      if ((int)piVar2 != 0) {
        func_0x000107c28188(piVar1 + 2);
        func_0x00010b480354();
        param_2 = piVar3;
      }
      piVar2 = param_1;
      func_0x000107c27d64(param_1,0x58);
      func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_1 + 6),piVar1 + 2);
      func_0x00010b47fa60(piVar2 + 8,*(undefined8 *)(param_1 + 6));
      func_0x000107c27d68(param_1,param_2,piVar2);
      *param_1 = *param_1 + 1;
    }
    if (piVar1 != piVar2) {
      FUN_10b47facc(piVar2 + 8);
      param_2 = piVar1 + 8;
      FUN_10b47fcd8(piVar2 + 8);
    }
    func_0x00010b4803d4();
  }
  return;
}



/* Entry: 10b480338; end: 10b480427;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b480338(void)

{
  ulong unaff_x23;
  
  func_0x00010029f6ec();
  if ((unaff_x23 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return unaff_x23;
}



/* Entry: 10b480428; end: 10b480453;  */

undefined8 * FUN_10b480428(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceac18;
  param_1[1] = param_2;
  FUN_10b480454();
  return param_1;
}



/* Entry: 10b480454; end: 10b48049b;  */

void FUN_10b480454(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10b48049c; end: 10b4804cb;  */

long FUN_10b48049c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4804cc(param_1);
  return param_1;
}



/* Entry: 10b4804cc; end: 10b480533;  */

long FUN_10b4804cc(long param_1)

{
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bce7e0c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b47c7bc();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x38);
  func_0x000105991a90(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b480534; end: 10b480537;  */

long FUN_10b480534(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4804cc(param_1);
  return param_1;
}



/* Entry: 10b480538; end: 10b48054b;  */

void FUN_10b480538(void)

{
  FUN_10b48049c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48054c; end: 10b480557;  */

undefined ** FUN_10b48054c(void)

{
  return &PTR_DAT_110ceac58;
}



/* Entry: 10b480558; end: 10b4805f7;  */

void FUN_10b480558(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  func_0x000107c282c0(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce7ee0(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b47c85c(*(undefined8 *)(param_1 + 0x78));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4805f8; end: 10b48099f;  */

long * FUN_10b4805f8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar10[1];
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_10b48064c;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_10b48064c:
    func_0x00010b480e48(puVar10,lVar6,param_3,&UNK_10f76ec54);
    param_2 = param_3;
    func_0x00010b480e28(param_3,1);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b480e1c(2,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x1c));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b480e1c(3,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x1c));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b480e1c(4,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14));
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x80);
    uVar4 = 0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x000107c280b8(param_2,uVar4);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c();
      while (plVar5 = plVar3, lVar6 = lStack_78, lStack_78 != 0) {
        lVar7 = lStack_78 + 8;
        lVar12 = lStack_78 + 0x20;
        func_0x00010b480e04();
        lVar8 = (long)*(char *)(lVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar7 = *(long *)(lVar6 + 8);
          lVar8 = *(long *)(lVar6 + 0x10);
        }
        func_0x00010b480df8(lVar7,lVar8);
        lVar7 = (long)*(char *)(lVar6 + 0x37);
        if (lVar7 < 0) {
          lVar12 = *(long *)(lVar6 + 0x20);
          lVar7 = *(long *)(lVar6 + 0x28);
        }
        func_0x00010b480df8(lVar12,lVar7);
        plVar3 = &lStack_78;
        func_0x000107c27d54();
        param_2 = plVar5;
      }
    }
    else {
      plVar3 = &lStack_78;
      func_0x000105991b98();
      puVar10 = apuStack_70[0];
      for (lVar6 = lStack_78 << 3; plVar5 = plVar3, lVar6 != 0; lVar6 = lVar6 + -8) {
        puVar13 = (undefined8 *)*puVar10;
        plVar3 = puVar13 + 3;
        func_0x00010b480e04();
        lVar7 = (long)*(char *)((long)puVar13 + 0x17);
        puVar11 = puVar13;
        if (lVar7 < 0) {
          lVar7 = puVar13[1];
          puVar11 = (undefined8 *)*puVar13;
        }
        func_0x00010b480df8(puVar11,lVar7);
        lVar7 = (long)*(char *)((long)puVar13 + 0x2f);
        if (lVar7 < 0) {
          plVar3 = (long *)puVar13[3];
          lVar7 = puVar13[4];
        }
        func_0x00010b480df8(plVar3,lVar7);
        puVar10 = puVar10 + 1;
        param_2 = plVar5;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    if (puVar10[1] != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_10b4807a8;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_10b4807a8:
    func_0x00010b480e48(puVar10);
    param_2 = param_3;
    func_0x00010b480e28(param_3,7);
  }
  lVar6 = 8;
  for (uVar14 = (ulong)(*(uint *)(param_1 + 0x40) &
                       ((int)*(uint *)(param_1 + 0x40) >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
      uVar14 = uVar14 - 1) {
    uVar9 = *(ulong *)(param_1 + 0x38);
    puVar1 = (ulong *)(param_1 + 0x38);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(uVar9 + lVar6 + -1);
    }
    puVar11 = (undefined8 *)*puVar1;
    lVar7 = (long)*(char *)((long)puVar11 + 0x17);
    puVar10 = puVar11;
    if (lVar7 < 0) {
      lVar7 = puVar11[1];
      puVar10 = (undefined8 *)*puVar11;
    }
    func_0x00010b480df8(puVar10,lVar7);
    lVar7 = (long)*(char *)((long)puVar11 + 0x17);
    if (((lVar7 < 0) && (lVar7 = puVar11[1], 0x7f < lVar7)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar7)) {
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,8,puVar11,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x42;
      *(char *)((long)param_2 + 1) = (char)lVar7;
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        puVar11 = (undefined8 *)*puVar11;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar11,lVar7);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar7);
    }
    lVar6 = lVar6 + 8;
    param_2 = plVar3;
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    if (puVar10[1] == 0) goto LAB_10b4808d8;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10b4808d8;
  func_0x00010b480e48(puVar10);
  param_2 = param_3;
  func_0x00010b480e28(param_3,9);
LAB_10b4808d8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar14 + 0x1f);
    if (lVar6 < 0) {
      lVar7 = *(long *)(uVar14 + 8);
      lVar6 = *(long *)(uVar14 + 0x10);
    }
    else {
      lVar7 = uVar14 + 8;
    }
    func_0x0001053930c4(param_3,lVar7,lVar6,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b4809a0; end: 10b480b3f;  */

long FUN_10b4809a0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long alStack_58 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_58);
  while (alStack_58[0] != 0) {
    lVar6 = alStack_58[0] + 8;
    func_0x000105990b3c(lVar6,alStack_58[0] + 0x20);
    uVar4 = lVar6 + uVar4;
    func_0x000107c27d54(alStack_58);
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  lVar5 = uVar4 + uVar2;
  lVar6 = 8;
  for (uVar4 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    puVar1 = (ulong *)(param_1 + 0x38);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    lVar5 = uVar3 + lVar5;
    lVar6 = lVar6 + 8;
  }
  uVar4 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b480e34();
  }
  uVar4 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b480e34();
  }
  uVar4 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b480e34();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b480e34();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b47b584(*(undefined8 *)(param_1 + 0x70));
      func_0x00010b480e34();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b47bfc8(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b480e34();
    }
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b480b40; end: 10b480b43;  */

void FUN_10b480b40(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  func_0x00010598fce8(param_1 + 0x38,param_2 + 0x38);
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x000105992a88(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        FUN_10b47b5a0(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        func_0x00010bce7eac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        FUN_10b47c280(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar5;
      }
      else {
        FUN_10b47cb74();
      }
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b480b44; end: 10b480cfb;  */

void FUN_10b480b44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  func_0x00010598fce8(param_1 + 0x38,param_2 + 0x38);
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x000105992a88(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        FUN_10b47b5a0(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        func_0x00010bce7eac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        FUN_10b47c280(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar5;
      }
      else {
        FUN_10b47cb74();
      }
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b480cfc; end: 10b480dc3;  */

void FUN_10b480cfc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b480558();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  func_0x00010598fce8(param_1 + 0x38,param_2 + 0x38);
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x000105992a88(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        FUN_10b47b5a0(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        func_0x00010bce7eac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        FUN_10b47c280(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar5;
      }
      else {
        FUN_10b47cb74();
      }
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b480dc4; end: 10b480dcb;  */

undefined8 * FUN_10b480dc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x88;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x88);
  }
  *puVar1 = &PTR_FUN_110ceac18;
  puVar1[1] = param_2;
  FUN_10b480454();
  return puVar1;
}



/* Entry: 10b480dcc; end: 10b480df7;  */

long FUN_10b480dcc(long param_1)

{
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000105991a90(param_1 + 8);
  return param_1;
}



/* Entry: 10b480df8; end: 10b480e4f;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b480df8(ulong param_1,int param_2)

{
  func_0x00010029f6ec(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return param_1;
}



/* Entry: 10b480e50; end: 10b480eb3;  */

void FUN_10b480e50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b4823c0();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110ceacc8;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b48244c();
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c();
  unaff_x19[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c();
  unaff_x19[3] = param_3;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 10b480eb4; end: 10b480edf;  */

undefined8 FUN_10b480eb4(undefined8 param_1)

{
  func_0x00010b482350();
  FUN_10b480ee0(param_1);
  return param_1;
}



/* Entry: 10b480ee0; end: 10b480f07;  */

/* WARNING: Possible PIC construction at 0x00010b480ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b480ef8) */

void FUN_10b480ee0(long param_1)

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



/* Entry: 10b480f08; end: 10b480f0b;  */

undefined8 FUN_10b480f08(undefined8 param_1)

{
  func_0x00010b482350();
  FUN_10b480ee0(param_1);
  return param_1;
}



/* Entry: 10b480f0c; end: 10b480f1f;  */

void FUN_10b480f0c(void)

{
  FUN_10b480eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b480f20; end: 10b480f2b;  */

undefined ** FUN_10b480f20(void)

{
  return &PTR_DAT_110ceae48;
}



/* Entry: 10b480f2c; end: 10b480f67;  */

void FUN_10b480f2c(long param_1)

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



/* Entry: 10b480f68; end: 10b48104b;  */

long * FUN_10b480f68(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar3 + 0x17);
  plVar4 = param_3;
  if (lVar1 < 0) {
    lVar1 = puVar3[1];
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_10b480fac;
    }
  }
  else if (*(char *)((long)puVar3 + 0x17) != '\0') {
LAB_10b480fac:
    func_0x00010b48246c(puVar3,lVar1,param_3,&UNK_10f76ed71);
    param_2 = param_3;
    func_0x00010b48233c(param_3,1);
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] == 0) goto LAB_10b48100c;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if (*(char *)((long)puVar3 + 0x17) == '\0') goto LAB_10b48100c;
  func_0x00010b48246c(puVar3);
  param_2 = param_3;
  func_0x00010b48233c(param_3,2);
LAB_10b48100c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b482404();
  if ((long)plVar4 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar2 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar2 - iVar5);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar2);
  }
  _memcpy(param_2,lVar1,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b48104c; end: 10b4810d7;  */

long FUN_10b48104c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b481084;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b481084:
    lVar3 = 0;
    goto LAB_10b481088;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b481088:
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
    func_0x00010b4823f8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4810d8; end: 10b4810db;  */

void FUN_10b4810d8(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4823c0();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48232c();
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



/* Entry: 10b4810dc; end: 10b48119b;  */

void FUN_10b4810dc(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4823c0();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48232c();
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



/* Entry: 10b48119c; end: 10b4811c3;  */

void FUN_10b48119c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10b4811c4; end: 10b48123b;  */

void FUN_10b4811c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = param_3;
  func_0x00010b4823c0();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110ceae08;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b48244c();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  FUN_10b4820cc(unaff_x19 + 3);
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b482264();
  }
  unaff_x19[6] = unaff_x20;
  return;
}



/* Entry: 10b48123c; end: 10b481267;  */

undefined8 FUN_10b48123c(undefined8 param_1)

{
  func_0x00010b482350();
  FUN_10b481268(param_1);
  return param_1;
}



/* Entry: 10b481268; end: 10b481297;  */

long * FUN_10b481268(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b480eb4();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b481298; end: 10b48129b;  */

undefined8 FUN_10b481298(undefined8 param_1)

{
  func_0x00010b482350();
  FUN_10b481268(param_1);
  return param_1;
}



/* Entry: 10b48129c; end: 10b4812af;  */

void FUN_10b48129c(void)

{
  FUN_10b48123c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4812b0; end: 10b4812bb;  */

undefined ** FUN_10b4812b0(void)

{
  return &PTR_DAT_110ceaea0;
}



/* Entry: 10b4812bc; end: 10b48130f;  */

void FUN_10b4812bc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b480f2c(*(undefined8 *)(param_1 + 0x30));
  }
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



/* Entry: 10b481310; end: 10b4813af;  */

long * FUN_10b481310(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  int iVar5;
  
  plVar3 = param_3;
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x30);
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar1 = (long *)0x1;
    func_0x00010b482378();
  }
  iVar5 = *(int *)(param_1 + 0x20);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b4823dc();
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 6);
    plVar1 = (long *)0x2;
    func_0x00010b482378();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  func_0x00010b482404();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)plVar3) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar5;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar4);
  }
  _memcpy(plVar1,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)plVar3);
}



/* Entry: 10b4813b0; end: 10b48142b;  */

long FUN_10b4813b0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b482410();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b48142c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010b481444();
    unaff_x20 = unaff_x20 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4823f8();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b48142c; end: 10b48145b;  */

void FUN_10b48142c(void)

{
  func_0x00010b481710();
  func_0x00010b4823a4();
  return;
}



/* Entry: 10b48145c; end: 10b48145f;  */

void FUN_10b48145c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b48150c(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010b482264(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b4810dc();
    }
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



/* Entry: 10b481460; end: 10b48150b;  */

void FUN_10b481460(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b48150c(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010b482264(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b4810dc();
    }
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



/* Entry: 10b48150c; end: 10b48151b;  */

void FUN_10b48150c(long *param_1,long param_2)

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



/* Entry: 10b48151c; end: 10b4815a3;  */

void FUN_10b48151c(long param_1,long param_2)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b482488();
  FUN_10b4812bc();
  uVar2 = *(ulong *)(unaff_x20 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b48150c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      func_0x00010b482264(uVar2,*(undefined8 *)(unaff_x19 + 0x30));
      *(ulong *)(unaff_x20 + 0x30) = uVar2;
    }
    else {
      FUN_10b4810dc();
    }
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
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



/* Entry: 10b4815a4; end: 10b4815db;  */

long FUN_10b4815a4(long param_1)

{
  func_0x00010b482350();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4815dc; end: 10b4815df;  */

long FUN_10b4815dc(long param_1)

{
  func_0x00010b482350();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4815e0; end: 10b4815f3;  */

void FUN_10b4815e0(void)

{
  FUN_10b4815a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4815f4; end: 10b4815ff;  */

undefined ** FUN_10b4815f4(void)

{
  return &PTR_DAT_110ceaef0;
}



/* Entry: 10b481600; end: 10b481643;  */

void FUN_10b481600(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b481644; end: 10b4817a7;  */

long * FUN_10b481644(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  int iVar7;
  
  lVar4 = param_1[3];
  plVar1 = param_1;
  plVar5 = param_3;
  plVar3 = param_2;
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b4823dc();
    plVar5 = (long *)(ulong)*(uint *)((long)param_2 + 0x84);
    plVar1 = (long *)0x1;
    func_0x00010b482378();
    plVar3 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[5] != 0) {
    func_0x00010b482434();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b482440();
    plVar3 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b482434();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b482440();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b482404();
    if ((long)plVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)plVar5) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar6 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar3 + (long)iVar7;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar6);
    }
    _memcpy(plVar3,lVar4,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)plVar5);
  }
  return plVar3;
}



/* Entry: 10b4817a8; end: 10b4817ff;  */

void FUN_10b4817a8(ulong *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4823c0();
  if (*(int *)(param_2 + 0x18) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c303c4();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48232c();
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



/* Entry: 10b481800; end: 10b481857;  */

long FUN_10b481800(long param_1)

{
  func_0x00010b482350();
  func_0x000107c2a450(param_1 + 0x70);
  func_0x000107c282b4(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c303ac();
  }
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b481858; end: 10b48185b;  */

long FUN_10b481858(long param_1)

{
  func_0x00010b482350();
  func_0x000107c2a450(param_1 + 0x70);
  func_0x000107c282b4(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c303ac();
  }
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48185c; end: 10b48186f;  */

void FUN_10b48185c(void)

{
  FUN_10b481800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b481870; end: 10b48187b;  */

undefined ** FUN_10b481870(void)

{
  return &PTR_DAT_110ceaf38;
}



/* Entry: 10b48187c; end: 10b4818cf;  */

void FUN_10b48187c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  func_0x000107c282c0(param_1 + 0x58);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x70) = 0;
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



/* Entry: 10b4818d0; end: 10b481b63;  */

byte * FUN_10b4818d0(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  
  uVar9 = *(uint *)(param_1 + 0x20);
  pbVar5 = param_1;
  pbVar6 = param_3;
  pbVar8 = param_2;
  if (uVar9 != 0) {
    pbVar8 = param_1;
    func_0x00010b4822b4();
    *pbVar8 = 10;
    pbVar13 = pbVar8;
    while (0x7f < uVar9) {
      func_0x00010b482318();
    }
    pbVar8[1] = (byte)uVar9;
    piVar11 = *(int **)(param_1 + 0x18);
    piVar1 = piVar11 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b4822b4();
      uVar7 = (ulong)*piVar11;
      pbVar8 = pbVar13 + 1;
      pbVar5 = pbVar13;
      while (0x7f < uVar7) {
        func_0x00010b482474();
        uVar7 = extraout_x8;
      }
      piVar11 = piVar11 + 1;
      *pbVar13 = (byte)uVar7;
      pbVar13 = pbVar5;
    } while (piVar11 < piVar1);
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  if (uVar9 != 0) {
    func_0x00010b4822b4();
    *pbVar5 = 0x12;
    pbVar13 = pbVar5;
    while (0x7f < uVar9) {
      func_0x00010b482318();
    }
    pbVar5[1] = (byte)uVar9;
    piVar11 = *(int **)(param_1 + 0x30);
    piVar1 = piVar11 + *(int *)(param_1 + 0x28);
    do {
      func_0x00010b4822b4();
      uVar7 = (ulong)*piVar11;
      pbVar8 = pbVar13 + 1;
      pbVar5 = pbVar13;
      while (0x7f < uVar7) {
        func_0x00010b482474();
        uVar7 = extraout_x8_00;
      }
      piVar11 = piVar11 + 1;
      *pbVar13 = (byte)uVar7;
      pbVar13 = pbVar5;
    } while (piVar11 < piVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  pbVar13 = (byte *)(ulong)uVar4;
  for (uVar9 = 0; uVar4 != uVar9; uVar9 = uVar9 + 1) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    puVar3 = (ulong *)(param_1 + 0x40);
    if ((uVar7 & 1) != 0) {
      puVar3 = (ulong *)(uVar7 + (long)(int)uVar9 * 8 + 7);
    }
    param_2 = (byte *)*puVar3;
    pbVar6 = (byte *)(ulong)*(uint *)(param_2 + 0x30);
    pbVar5 = (byte *)0x3;
    func_0x00010b482378();
    pbVar8 = pbVar5;
  }
  for (uVar7 = (ulong)(*(uint *)(param_1 + 0x60) &
                      ((int)*(uint *)(param_1 + 0x60) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    func_0x00010b482358();
    pbVar5 = pbVar13;
    if ((long)param_2 < 0) {
      param_2 = *(byte **)(pbVar13 + 8);
      pbVar5 = *(byte **)pbVar13;
    }
    func_0x00010b482460(pbVar5);
    lVar15 = (long)(char)pbVar13[0x17];
    if (((lVar15 < 0) && (lVar15 = *(long *)(pbVar13 + 8), 0x7f < lVar15)) ||
       ((*(long *)param_3 - (long)pbVar8) + 0xe < lVar15)) {
      param_2 = (byte *)0x4;
      pbVar5 = param_3;
      pbVar6 = pbVar13;
      func_0x00010b4d5120();
      pbVar8 = pbVar5;
    }
    else {
      *pbVar8 = 0x22;
      pbVar8[1] = (byte)lVar15;
      if ((char)pbVar13[0x17] < '\0') {
        pbVar13 = *(byte **)pbVar13;
      }
      pbVar5 = pbVar8 + 2;
      func_0x00010b482428();
      pbVar8 = pbVar8 + 2 + lVar15;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x80);
  if (0 < (int)uVar9) {
    func_0x00010b4822b4();
    *pbVar5 = 0x2a;
    pbVar13 = pbVar5;
    while (0x7f < uVar9) {
      func_0x00010b482318();
    }
    pbVar5[1] = (byte)uVar9;
    puVar12 = *(uint **)(param_1 + 0x78);
    puVar2 = puVar12 + *(int *)(param_1 + 0x70);
    do {
      func_0x00010b4822b4();
      uVar9 = *puVar12;
      pbVar5 = pbVar13;
      while( true ) {
        pbVar8 = pbVar5 + 1;
        if (uVar9 < 0x80) break;
        *pbVar5 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar5 = pbVar8;
      }
      puVar12 = puVar12 + 1;
      *pbVar5 = (byte)uVar9;
    } while (puVar12 < puVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return pbVar8;
  }
  func_0x00010b482404();
  if ((long)pbVar6 < 0) {
    lVar15 = *(long *)(extraout_x8_01 + 8);
    pbVar6 = *(byte **)(extraout_x8_01 + 0x10);
  }
  else {
    lVar15 = extraout_x8_01 + 8;
  }
  if ((long)(int)pbVar6 <= *(long *)param_3 - (long)pbVar8) {
    _memcpy(pbVar8,lVar15,(ulong)pbVar6 & 0xffffffff);
    return pbVar8 + (int)pbVar6;
  }
  while( true ) {
    iVar14 = ((int)*(undefined8 *)param_3 - (int)pbVar8) + 0x10;
    iVar10 = (int)pbVar6;
    pbVar6 = (byte *)(ulong)(uint)(iVar10 - iVar14);
    if (iVar10 - iVar14 == 0 || iVar10 < iVar14) break;
    func_0x00010b4d5738();
    pbVar5 = pbVar8 + iVar14;
    pbVar8 = param_3;
    func_0x000107c303e4(param_3,pbVar5);
  }
  func_0x00010b4d5738();
  return pbVar8 + iVar10;
}



/* Entry: 10b481b64; end: 10b481d3b;  */

void FUN_10b481b64(long param_1)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = 0;
  lVar6 = 0;
  for (lVar9 = (long)*(int *)(param_1 + 0x10); lVar9 != 0; lVar9 = lVar9 + -1) {
    lVar6 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar8 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar6;
    lVar8 = lVar8 + 0x100000000;
  }
  lVar8 = 0;
  if (lVar6 != 0) {
    lVar8 = lVar6 + (ulong)((int)LZCOUNT((long)(int)lVar6) * -9 + 0x280U >> 6) + 1;
  }
  lVar11 = 0;
  lVar9 = 0;
  *(int *)(param_1 + 0x20) = (int)lVar6;
  for (lVar6 = (long)*(int *)(param_1 + 0x28); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar9 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar11 >> 0x1e))) * -9
                    + 0x280U >> 6) + lVar9;
    lVar11 = lVar11 + 0x100000000;
  }
  lVar8 = lVar9 + lVar8;
  if (lVar9 != 0) {
    lVar8 = lVar8 + (ulong)((int)LZCOUNT((long)(int)lVar9) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x38) = (int)lVar9;
  uVar10 = *(ulong *)(param_1 + 0x40);
  lVar8 = lVar8 + *(int *)(param_1 + 0x48);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar10 & 1) != 0) {
    puVar2 = (ulong *)(uVar10 + 7);
  }
  for (lVar6 = (long)*(int *)(param_1 + 0x48) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar10 = *puVar2;
    FUN_10b481f94();
    lVar8 = uVar10 + lVar8 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
    puVar2 = puVar2 + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  lVar8 = lVar8 + (ulong)uVar3;
  iVar1 = (int)lVar8;
  lVar6 = 8;
  for (uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x58);
    puVar2 = (ulong *)(param_1 + 0x58);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar6 + -1);
    }
    uVar7 = *puVar2;
    func_0x000107c282a0();
    lVar8 = uVar7 + lVar8;
    iVar1 = (int)lVar8;
    lVar6 = lVar6 + 8;
  }
  lVar6 = param_1 + 0x70;
  func_0x00010b4d3e38();
  iVar4 = (int)lVar6;
  *(int *)(param_1 + 0x80) = iVar4;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)LZCOUNT((long)iVar4) * -9 + 0x280U >> 6) + 1;
  }
  iVar5 = iVar4 + iVar1 + iVar5;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4823f8();
    lVar6 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    iVar5 = (int)lVar6 + iVar5;
  }
  *(int *)(param_1 + 0x84) = iVar5;
  return;
}



/* Entry: 10b481d3c; end: 10b481dab;  */

void FUN_10b481d3c(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4823c0();
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(unaff_x19 + 0x28,unaff_x20 + 0x28);
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c303c4(unaff_x19 + 0x40,unaff_x20 + 0x40);
  }
  func_0x00010598fce8(unaff_x19 + 0x58,unaff_x20 + 0x58);
  puVar1 = (ulong *)(unaff_x19 + 0x70);
  func_0x0001088ffb98();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48232c();
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



/* Entry: 10b481dac; end: 10b481ddf;  */

long FUN_10b481dac(long param_1)

{
  func_0x00010b482350();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b481de0; end: 10b481de3;  */

long FUN_10b481de0(long param_1)

{
  func_0x00010b482350();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b481de4; end: 10b481df7;  */

void FUN_10b481de4(void)

{
  FUN_10b481dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


