/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10936134c; end: 10936137f;  */

long FUN_10936134c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109361678(param_1 + 0x10);
  return param_1;
}



/* Entry: 109361380; end: 109361383;  */

long FUN_109361380(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109361678(param_1 + 0x10);
  return param_1;
}



/* Entry: 109361384; end: 109361397;  */

void FUN_109361384(void)

{
  FUN_10936134c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109361398; end: 1093613a3;  */

undefined ** FUN_109361398(void)

{
  return &PTR_DAT_110af3880;
}



/* Entry: 1093613a4; end: 1093613eb;  */

void FUN_1093613a4(long param_1)

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



/* Entry: 1093613ec; end: 109361607;  */

long * FUN_1093613ec(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109361608; end: 10936160b;  */

void FUN_109361608(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10936160c; end: 10936165f;  */

void FUN_10936160c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109361660; end: 109361677;  */

void FUN_109361660(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af3720;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 109361678; end: 1093616ab;  */

long * FUN_109361678(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1093616ac; end: 10936188b;  */

void FUN_1093616ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af3720;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10936188c; end: 10936188f;  */

long FUN_10936188c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x0001093617e0(param_1);
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109361890; end: 1093618a3;  */

void FUN_109361890(void)

{
  func_0x000109361848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093618a4; end: 1093618cf;  */

long FUN_1093618a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093618d0; end: 1093618db;  */

undefined ** FUN_1093618d0(void)

{
  return &PTR_DAT_110af39a8;
}



/* Entry: 1093618dc; end: 10936192f;  */

void FUN_1093618dc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x0001093617e0(param_1);
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



/* Entry: 109361930; end: 109361c93;  */

long * FUN_109361930(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x28);
  if (iVar13 != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar3 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
      iVar13 = *(int *)(param_1 + 0x28);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar13;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar13 = *(int *)(param_1 + 0x2c);
  if (iVar13 != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar3 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
      iVar13 = *(int *)(param_1 + 0x2c);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar13;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar5 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar5 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x30),param_2);
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar12 = 8;
    plVar3 = plVar5;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar12 + -1);
      }
      puVar9 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566b9c);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar9[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar3) + 0xe < lVar4)) {
        plVar5 = param_3;
        func_0x00010b4d5120(param_3,4,puVar9,plVar3);
      }
      else {
        *(undefined1 *)plVar3 = 0x22;
        *(char *)((long)plVar3 + 1) = (char)lVar4;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy((long)plVar3 + 2,puVar9,lVar4);
        plVar5 = (long *)((long)plVar3 + 2 + lVar4);
      }
      lVar12 = lVar12 + 8;
      uVar11 = uVar11 - 1;
      plVar3 = plVar5;
    } while (uVar11 != 0);
  }
  plVar3 = plVar5;
  if (*(int *)(param_1 + 0x44) == 5) {
    plVar3 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x28),plVar5,param_3);
  }
  iVar13 = *(int *)(param_1 + 0x34);
  if (iVar13 != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= plVar3) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar3 = param_3 + 2;
          break;
        }
        plVar7 = param_3;
        func_0x000107c303dc();
        plVar3 = (long *)((long)plVar7 + (long)((int)plVar3 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= plVar3);
      iVar13 = *(int *)(param_1 + 0x34);
    }
    *(undefined1 *)plVar3 = 0x35;
    *(int *)((long)plVar3 + 1) = iVar13;
    plVar3 = (long *)((long)plVar3 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar12 = *(long *)(uVar11 + 8);
      uVar6 = (ulong)*(uint *)(uVar11 + 0x10);
    }
    else {
      lVar12 = uVar11 + 8;
    }
    uVar8 = (uint)uVar6;
    if (*param_3 - (long)plVar3 < (long)(int)uVar8) {
      puVar10 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar10 < (int)uVar8) {
        do {
          iVar13 = (int)puVar10;
          _memcpy(plVar3,lVar12,(long)iVar13);
          uVar8 = (int)uVar6 - iVar13;
          uVar6 = (ulong)uVar8;
          lVar12 = lVar12 + iVar13;
          plVar7 = (long *)*param_3;
          plVar5 = (long *)((long)plVar3 + (long)iVar13);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar3 + (long)((int)plVar5 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar3 = plVar5;
          } while (plVar7 <= plVar5);
          puVar10 = (undefined1 *)((long)plVar7 + (0x10 - (long)plVar3));
        } while ((int)puVar10 < (int)uVar8);
      }
      _memcpy(plVar3,lVar12,(long)(int)uVar8);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar3,lVar12,uVar6 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
  }
  return plVar3;
}



/* Entry: 109361c94; end: 109361dc7;  */

ulong FUN_109361c94(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  uVar6 = uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar8;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar6 = uVar2 + uVar6 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = uVar6 + 5;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar6 = uVar6 + 5;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + uVar6;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar6 = uVar6 + 5;
  }
  if (*(int *)(param_1 + 0x44) == 5) {
    lVar4 = *(long *)(param_1 + 0x38);
    FUN_1093622a8();
    uVar6 = uVar6 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar6 = lVar4 + uVar6;
  }
  *(int *)(param_1 + 0x40) = (int)uVar6;
  return uVar6;
}



/* Entry: 109361dc8; end: 109361edb;  */

void FUN_109361dc8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
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
  iVar1 = *(int *)(param_2 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x44) == iVar1) {
      if (iVar1 == 5) {
        FUN_109361edc(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
      }
    }
    else {
      if (*(int *)(param_1 + 0x44) != 0) {
        func_0x0001093617e0(param_1);
      }
      *(int *)(param_1 + 0x44) = iVar1;
      if (iVar1 == 5) {
        FUN_10936240c(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
    }
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



/* Entry: 109361edc; end: 109361f4b;  */

void FUN_109361edc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
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



/* Entry: 109361f4c; end: 109361f77;  */

void FUN_109361f4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109361f78; end: 109361f9b;  */

undefined ** FUN_109361f78(void)

{
  return &PTR_DAT_110af39e8;
}



/* Entry: 109361f9c; end: 1093622a7;  */

byte * FUN_109361f9c(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  iVar10 = *(int *)(param_1 + 0x14);
  if (iVar10 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
      iVar10 = *(int *)(param_1 + 0x14);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar10;
    param_2 = param_2 + 5;
  }
  pbVar4 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    pbVar4 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  pbVar8 = pbVar4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    pbVar8 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x1c),pbVar4);
  }
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      iVar10 = *(int *)(param_1 + 0x20);
    }
    *pbVar8 = 0x2d;
    *(int *)(pbVar8 + 1) = iVar10;
    pbVar8 = pbVar8 + 5;
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = *(byte **)param_3;
    if (pbVar8 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      bVar2 = *(byte *)(param_1 + 0x24);
    }
    *pbVar8 = 0x30;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar4;
          _memcpy(pbVar8,lVar9,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar10;
          pbVar4 = *(byte **)param_3;
          pbVar1 = pbVar8 + iVar10;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar8 + ((int)pbVar1 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar8 = pbVar1;
          } while (pbVar4 <= pbVar1);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar8);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar9,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar9,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 1093622a8; end: 109362367;  */

long FUN_1093622a8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x24) * 2;
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



/* Entry: 109362368; end: 10936240b;  */

void FUN_109362368(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110af3918;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0;
  return;
}



/* Entry: 10936240c; end: 10936249b;  */

undefined8 * FUN_10936240c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0;
  FUN_109361edc();
  return puVar1;
}



/* Entry: 10936249c; end: 1093624f3;  */

long FUN_10936249c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093624f4; end: 109362517;  */

undefined ** FUN_1093624f4(void)

{
  return &PTR_DAT_110af3aa8;
}



/* Entry: 109362518; end: 10936276b;  */

long * FUN_109362518(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uStack_48;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      iVar9 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar9;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar4 = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar4 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),param_2);
  }
  plVar1 = plVar4;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),plVar4);
  }
  plVar4 = plVar1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar4 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x1c),plVar1);
  }
  plVar1 = plVar4;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x0001088b96ec(param_3,*(int *)(param_1 + 0x20),plVar4);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x24);
    }
    *(undefined1 *)plVar1 = 0x30;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar9 = (int)puVar8;
          _memcpy(plVar1,lVar7,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar9;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar9);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lVar7,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar7,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 10936276c; end: 109362897;  */

long FUN_10936276c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x24) * 2;
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



/* Entry: 109362898; end: 1093628e7;  */

void FUN_109362898(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110af3a68;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0;
  return;
}



/* Entry: 1093628e8; end: 10936295b;  */

undefined8 * FUN_1093628e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af3b18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109311ab0(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_3 + 0x24);
  return param_1;
}



/* Entry: 10936295c; end: 1093629a3;  */

long FUN_10936295c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093629a4; end: 1093629a7;  */

long FUN_1093629a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093629a8; end: 1093629bb;  */

void FUN_1093629a8(void)

{
  FUN_10936295c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093629bc; end: 1093629df;  */

undefined ** FUN_1093629bc(void)

{
  return &PTR_DAT_110af3b58;
}



/* Entry: 1093629e0; end: 109362db7;  */

byte * FUN_1093629e0(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x24);
  if (uVar12 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x24);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar12;
    uVar3 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar7 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar7 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar12 = *(uint *)(param_1 + 0x28);
  if (uVar12 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x28);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = (ulong)(int)uVar12;
    uVar3 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar7 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar7 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar9 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar9 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109362b00:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109362b98:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109362b98;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109362b00;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar4 = uVar17;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar9 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar9 + ((int)param_2 - (int)pbVar10);
          pbVar9 = param_2;
          pbVar10 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar5 = (ulong)(int)*puVar14;
      uVar3 = uVar5;
      pbVar10 = pbVar9;
      if (0x7f < *puVar14) {
        do {
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar3 | 0x80;
          uVar5 = uVar3 >> 7;
          uVar7 = uVar3 >> 0xe;
          uVar3 = uVar5;
          pbVar10 = pbVar9;
        } while (uVar7 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar5;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar11 = *(long *)(uVar3 + 8);
      uVar5 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar11 = uVar3 + 8;
    }
    uVar12 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar4;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar5 - iVar16;
          uVar5 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar4 = (byte *)*param_3;
          pbVar9 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar9;
          } while (pbVar4 <= pbVar9);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109362db8; end: 109362e9f;  */

long FUN_109362db8(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar4;
  return lVar4;
}



/* Entry: 109362ea0; end: 109362f5f;  */

void FUN_109362ea0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x000107c282d8(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x18);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 109362f60; end: 109362f67;  */

void FUN_109362f60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110af3b18;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 109362f68; end: 109362fb3;  */

void FUN_109362f68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110af3b18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 109362fb4; end: 109362fef;  */

void FUN_109362fb4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
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



/* Entry: 109362ff0; end: 109363047;  */

long FUN_109362ff0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109363048; end: 10936306b;  */

undefined ** FUN_109363048(void)

{
  return &PTR_DAT_110af3c98;
}



/* Entry: 10936306c; end: 10936325f;  */

long * FUN_10936306c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uStack_48;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      iVar9 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar9;
    param_2 = (long *)((long)param_2 + 5);
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    plVar4 = (long *)*param_3;
    if (param_2 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      uVar2 = *(undefined1 *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar9 = (int)puVar8;
          _memcpy(param_2,lVar7,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar9;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar7,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar7,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109363260; end: 1093632a7;  */

ulong FUN_109363260(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 5;
  }
  uVar1 = uVar1 | (ulong)*(byte *)(param_1 + 0x14) << 1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 1093632a8; end: 1093632db;  */

long FUN_1093632a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093632dc; end: 1093632df;  */

long FUN_1093632dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093632e0; end: 1093632f3;  */

void FUN_1093632e0(void)

{
  FUN_1093632a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093632f4; end: 1093632ff;  */

undefined ** FUN_1093632f4(void)

{
  return &PTR_DAT_110af3cf8;
}



/* Entry: 109363300; end: 109363347;  */

void FUN_109363300(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
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



/* Entry: 109363348; end: 10936353f;  */

long * FUN_109363348(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar11;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar13 = 8;
    plVar7 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar9 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566bc5);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar9[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar7) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,puVar9,plVar7);
      }
      else {
        *(undefined1 *)plVar7 = 10;
        *(char *)((long)plVar7 + 1) = (char)lVar4;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy((undefined1 *)((long)plVar7 + 2),puVar9,lVar4);
        param_2 = (long *)((undefined1 *)((long)plVar7 + 2) + lVar4);
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      plVar7 = param_2;
    } while (uVar12 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar12 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar13 = *(long *)(uVar12 + 8);
      uVar5 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      lVar13 = uVar12 + 8;
    }
    uVar8 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar13,(long)iVar10);
          uVar8 = (int)uVar5 - iVar10;
          uVar5 = (ulong)uVar8;
          lVar13 = lVar13 + iVar10;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar3 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar7;
          } while (plVar6 <= plVar7);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar13,uVar5 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109363540; end: 1093635db;  */

ulong FUN_109363540(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar8;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 1093635dc; end: 10936368b;  */

void FUN_1093635dc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10936368c; end: 10936368f;  */

long FUN_10936368c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1093632a8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109363690; end: 1093636a3;  */

void FUN_109363690(void)

{
  func_0x000109363630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093636a4; end: 1093636af;  */

undefined ** FUN_1093636a4(void)

{
  return &PTR_DAT_110af3d50;
}



/* Entry: 1093636b0; end: 10936370b;  */

void FUN_1093636b0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109363054(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109363300(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10936370c; end: 109363877;  */

long * FUN_10936370c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28),plVar1,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 109363878; end: 109363937;  */

long FUN_109363878(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109363260();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109363540();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109363938; end: 109363a0b;  */

void FUN_109363938(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_109363b10(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109362fb4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109363ba0(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093635dc();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109363a0c; end: 109363a23;  */

void FUN_109363a0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110af3bb8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109363a24; end: 109363b0f;  */

void FUN_109363a24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110af3bb8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109363b10; end: 109363b9f;  */

undefined8 * FUN_109363b10(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3c08;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  FUN_109362fb4();
  return puVar1;
}



/* Entry: 109363ba0; end: 109363c2f;  */

undefined8 * FUN_109363ba0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3bb8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 109363c30; end: 109363c6b;  */

long FUN_109363c30(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10934e760();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109363c6c; end: 109363c6f;  */

long FUN_109363c6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10934e760();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109363c70; end: 109363c83;  */

void FUN_109363c70(void)

{
  FUN_109363c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109363c84; end: 109363c8f;  */

undefined ** FUN_109363c84(void)

{
  return &PTR_DAT_110af3e30;
}



/* Entry: 109363c90; end: 109363ce7;  */

void FUN_109363c90(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10934e7d0(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 109363ce8; end: 1093640ef;  */

long * FUN_109363ce8(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar3 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x24),plVar2);
  }
  iVar8 = *(int *)(param_1 + 0x28);
  if (iVar8 != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= plVar3) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar3 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar3 = (long *)((long)plVar4 + (long)((int)plVar3 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= plVar3);
      iVar8 = *(int *)(param_1 + 0x28);
    }
    *(undefined1 *)plVar3 = 0x1d;
    *(int *)((long)plVar3 + 1) = iVar8;
    plVar3 = (long *)((long)plVar3 + 5);
  }
  plVar2 = plVar3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),plVar3,param_3);
  }
  iVar8 = *(int *)(param_1 + 0x2c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar2);
      iVar8 = *(int *)(param_1 + 0x2c);
    }
    *(undefined1 *)plVar2 = 0x2d;
    *(int *)((long)plVar2 + 1) = iVar8;
    plVar2 = (long *)((long)plVar2 + 5);
  }
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = param_3;
    func_0x0001089f53c8(param_3,*(int *)(param_1 + 0x30),plVar2);
  }
  iVar8 = *(int *)(param_1 + 0x34);
  if (iVar8 != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= plVar3) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar3 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar3 = (long *)((long)plVar4 + (long)((int)plVar3 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= plVar3);
      iVar8 = *(int *)(param_1 + 0x34);
    }
    *(undefined1 *)plVar3 = 0x3d;
    *(int *)((long)plVar3 + 1) = iVar8;
    plVar3 = (long *)((long)plVar3 + 5);
  }
  plVar2 = plVar3;
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar2 = param_3;
    func_0x000108b32050(param_3,*(int *)(param_1 + 0x38),plVar3);
  }
  iVar8 = *(int *)(param_1 + 0x3c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar2);
      iVar8 = *(int *)(param_1 + 0x3c);
    }
    *(undefined1 *)plVar2 = 0x4d;
    *(int *)((long)plVar2 + 1) = iVar8;
    plVar2 = (long *)((long)plVar2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar2);
      iVar8 = *(int *)(param_1 + 0x40);
    }
    *(undefined1 *)plVar2 = 0x55;
    *(int *)((long)plVar2 + 1) = iVar8;
    plVar2 = (long *)((long)plVar2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x44);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar2);
      iVar8 = *(int *)(param_1 + 0x44);
    }
    *(undefined1 *)plVar2 = 0x5d;
    *(int *)((long)plVar2 + 1) = iVar8;
    plVar2 = (long *)((long)plVar2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar1 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar1) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar7 < (int)uVar1) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar2,lVar6,(long)iVar8);
          uVar1 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar1;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar2 + (long)iVar8);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar2 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar2));
        } while ((int)puVar7 < (int)uVar1);
      }
      uStack_48._0_4_ = uVar1;
      _memcpy(plVar2,lVar6,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar6,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar1);
    }
  }
  return plVar2;
}



/* Entry: 1093640f0; end: 10936422f;  */

void FUN_1093640f0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10934ef20();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = iVar1 + 5;
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



/* Entry: 109364230; end: 109364233;  */

void FUN_109364230(long param_1,long param_2)

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
      func_0x0001093643b8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10934f11c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 109364234; end: 10936435b;  */

void FUN_109364234(long param_1,long param_2)

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
      func_0x0001093643b8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10934f11c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 10936435c; end: 109364363;  */

void FUN_10936435c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110af3df0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 109364364; end: 1093643fb;  */

void FUN_109364364(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110af3df0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 1093643fc; end: 10936449f;  */

undefined8 * FUN_1093643fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af3e98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  puVar2 = (ulong *)(param_3 + 0x18);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    uVar3 = *(uint *)(param_1 + 2);
    puVar1 = puVar2;
  }
  param_1[3] = puVar1;
  if ((uVar3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001093503d0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 1093644a0; end: 1093644f3;  */

long FUN_1093644a0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1093644f4; end: 1093644f7;  */

long FUN_1093644f4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1093644f8; end: 10936450b;  */

void FUN_1093644f8(void)

{
  FUN_1093644a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10936450c; end: 109364517;  */

undefined ** FUN_10936450c(void)

{
  return &PTR_DAT_110af3fc8;
}



/* Entry: 109364518; end: 109364593;  */

void FUN_109364518(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109348f68(*(undefined8 *)(param_1 + 0x20));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 109364594; end: 10936477b;  */

long * FUN_109364594(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  
  iVar11 = *(int *)(param_1 + 0x28);
  if (iVar11 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar2 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      iVar11 = *(int *)(param_1 + 0x28);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar11;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109364654;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109364654;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f566c03);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar8,plVar4);
  plVar4 = plVar2;
LAB_109364654:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar4 < (long)(int)uVar7) {
      puVar10 = (undefined1 *)((*param_3 - (long)plVar4) + 0x10);
      if ((int)puVar10 < (int)uVar7) {
        do {
          iVar11 = (int)puVar10;
          _memcpy(plVar4,lVar3,(long)iVar11);
          uVar7 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar7;
          lVar3 = lVar3 + iVar11;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)plVar4 + (long)iVar11);
          do {
            plVar4 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar4 = plVar2;
          } while (plVar6 <= plVar2);
          puVar10 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar4));
        } while ((int)puVar10 < (int)uVar7);
      }
      _memcpy(plVar4,lVar3,(long)(int)uVar7);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar4,lVar3,uVar9 & 0xffffffff);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar7);
    }
  }
  return plVar4;
}



/* Entry: 10936477c; end: 109364847;  */

void FUN_10936477c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 == 0) {
    iVar2 = 0;
  }
  else {
    lVar4 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar4 = lVar5;
    }
    iVar2 = (int)lVar4 + ((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_109349238();
    iVar2 = iVar2 + iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 109364848; end: 10936484b;  */

void FUN_109364848(long param_1,long param_2)

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
      func_0x0001093503d0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x000109348e48();
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



/* Entry: 10936484c; end: 109364933;  */

void FUN_10936484c(long param_1,long param_2)

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
      func_0x0001093503d0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x000109348e48();
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



/* Entry: 109364934; end: 109364967;  */

long FUN_109364934(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093656e0(param_1 + 0x10);
  return param_1;
}



/* Entry: 109364968; end: 10936496b;  */

long FUN_109364968(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093656e0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10936496c; end: 10936497f;  */

void FUN_10936496c(void)

{
  FUN_109364934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109364980; end: 10936498b;  */

undefined ** FUN_109364980(void)

{
  return &PTR_DAT_110af4000;
}



/* Entry: 10936498c; end: 1093649d3;  */

void FUN_10936498c(long param_1)

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



/* Entry: 1093649d4; end: 109364bef;  */

long * FUN_1093649d4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109364bf0; end: 109364bf3;  */

void FUN_109364bf0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109364bf4; end: 109364d0f;  */

void FUN_109364bf4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109364d10; end: 109364d13;  */

long FUN_109364d10(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109364c7c(param_1);
  return param_1;
}



/* Entry: 109364d14; end: 109364d27;  */

void FUN_109364d14(void)

{
  func_0x000109364c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109364d28; end: 109364d33;  */

undefined ** FUN_109364d28(void)

{
  return &PTR_DAT_110af4038;
}



/* Entry: 109364d34; end: 109364dcf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109364d34(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109348f68(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109348c04(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109349ec8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10936498c(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000109360b3c(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 109364dd0; end: 10936502b;  */

byte * FUN_109364dd0(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  pbVar4 = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    pbVar4 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x40),param_2);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    pbVar1 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),pbVar4,param_3);
    pbVar4 = pbVar1;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    pbVar1 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),pbVar4,param_3);
    pbVar4 = pbVar1;
  }
  pbVar1 = pbVar4;
  if ((uVar9 >> 2 & 1) != 0) {
    pbVar1 = (byte *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),pbVar4,param_3);
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar2 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar7 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      uVar2 = *(uint *)(param_1 + 0x48);
    }
    pbVar7 = pbVar1 + 1;
    *pbVar1 = 0x28;
    uVar5 = (ulong)(int)uVar2;
    uVar3 = uVar5;
    pbVar4 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar6 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    pbVar1 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  pbVar4 = pbVar1;
  if ((uVar9 >> 3 & 1) != 0) {
    pbVar4 = (byte *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28),pbVar1,param_3);
  }
  pbVar1 = pbVar4;
  if ((uVar9 >> 4 & 1) != 0) {
    pbVar1 = (byte *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20),pbVar4,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar8 = *(long *)(uVar3 + 8);
      uVar5 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar8 = uVar3 + 8;
    }
    uVar9 = (uint)uVar5;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar9) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar9) {
        do {
          iVar10 = (int)pbVar4;
          _memcpy(pbVar1,lVar8,(long)iVar10);
          uVar9 = (int)uVar5 - iVar10;
          uVar5 = (ulong)uVar9;
          lVar8 = lVar8 + iVar10;
          pbVar4 = *(byte **)param_3;
          pbVar7 = pbVar1 + iVar10;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar7;
          } while (pbVar4 <= pbVar7);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar9);
      }
      _memcpy(pbVar1,lVar8,(long)(int)uVar9);
      pbVar1 = pbVar1 + (int)uVar9;
    }
    else {
      _memcpy(pbVar1,lVar8,uVar5 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar9;
    }
  }
  return pbVar1;
}



/* Entry: 10936502c; end: 1093651bb;  */

long FUN_10936502c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109349238();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109348da0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_10934a0e8();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      func_0x000109364b48();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_109360d04();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}


