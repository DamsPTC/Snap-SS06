/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5af898; end: 10b5af89f;  */

void FUN_10b5af898(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110d162a8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5af8a0; end: 10b5af973;  */

void FUN_10b5af8a0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d162a8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5af974; end: 10b5af9e7;  */

void FUN_10b5af974(void)

{
  return;
}



/* Entry: 10b5af9e8; end: 10b5afa0f;  */

long FUN_10b5af9e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5afa10; end: 10b5afa5f;  */

undefined8 * FUN_10b5afa10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d16360;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  func_0x00010b5af99c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5afa60; end: 10b5afa63;  */

long FUN_10b5afa60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5afa64; end: 10b5afa77;  */

void FUN_10b5afa64(void)

{
  FUN_10b5af9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5afa78; end: 10b5afa9b;  */

undefined ** FUN_10b5afa78(void)

{
  return &PTR_DAT_110d163a0;
}



/* Entry: 10b5afa9c; end: 10b5afb77;  */

long * FUN_10b5afa9c(long *param_1,long *param_2,long *param_3)

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
    func_0x00010b5afc20();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5afc14();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x00010b5afc20();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5afc14();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    func_0x00010b5afc20();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5afc14();
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



/* Entry: 10b5afb78; end: 10b5afbc7;  */

long FUN_10b5afb78(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10) +
                  (uint)*(byte *)(param_1 + 0x12)) & 7) * 2;
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



/* Entry: 10b5afbc8; end: 10b5afc13;  */

void FUN_10b5afbc8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16360;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  return;
}



/* Entry: 10b5afc14; end: 10b5afc33;  */

void FUN_10b5afc14(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b5afc34; end: 10b5afc5f;  */

undefined8 FUN_10b5afc34(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5afc60(param_1);
  return param_1;
}



/* Entry: 10b5afc60; end: 10b5afc7b;  */

void FUN_10b5afc60(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5357a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5afc7c; end: 10b5afc7f;  */

undefined8 FUN_10b5afc7c(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5afc60(param_1);
  return param_1;
}



/* Entry: 10b5afc80; end: 10b5afc93;  */

void FUN_10b5afc80(void)

{
  FUN_10b5afc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5afc94; end: 10b5afc9f;  */

undefined ** FUN_10b5afc94(void)

{
  return &PTR_DAT_110d164f0;
}



/* Entry: 10b5afca0; end: 10b5afcdf;  */

void FUN_10b5afca0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5b07b0();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b535814(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b5afce0; end: 10b5afd5f;  */

long * FUN_10b5afce0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5b0720();
  if ((int)param_1[4] != 0) {
    func_0x00010b5b0684();
    func_0x00010b5b06e4();
    func_0x00010b5b0740();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_4 = (long *)0x2;
    func_0x00010b5b06dc(2,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 10b5afd60; end: 10b5afdcb;  */

void FUN_10b5afd60(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b5b07b0();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b528724();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b5b06b0((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5afdcc; end: 10b5afdcf;  */

void FUN_10b5afdcc(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b0710();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b532c40();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5359bc();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5b079c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5b0730();
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



/* Entry: 10b5afdd0; end: 10b5afe43;  */

void FUN_10b5afdd0(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b0710();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b532c40();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5359bc();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5b079c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5b0730();
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



/* Entry: 10b5afe44; end: 10b5afe6f;  */

undefined8 FUN_10b5afe44(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5afe70(param_1);
  return param_1;
}



/* Entry: 10b5afe70; end: 10b5afe8b;  */

void FUN_10b5afe70(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5afc34();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5afe8c; end: 10b5afe8f;  */

undefined8 FUN_10b5afe8c(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5afe70(param_1);
  return param_1;
}



/* Entry: 10b5afe90; end: 10b5afea3;  */

void FUN_10b5afe90(void)

{
  FUN_10b5afe44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5afea4; end: 10b5afeaf;  */

undefined ** FUN_10b5afea4(void)

{
  return &PTR_DAT_110d16550;
}



/* Entry: 10b5afeb0; end: 10b5afef3;  */

void FUN_10b5afeb0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5b07b0();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5afca0(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10b5afef4; end: 10b5affbb;  */

long * FUN_10b5afef4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5b0720();
  if ((int)param_1[4] != 0) {
    func_0x00010b5b0684();
    func_0x00010b5b06e4();
    func_0x00010b5b074c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5b0684();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b5b0740();
    param_4 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x00010b5b06dc(3,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b0684();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b5b074c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 10b5affbc; end: 10b5b0047;  */

void FUN_10b5affbc(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b5b07b0();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b5afd60();
    func_0x00010b5b0690();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b5b06f4();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x00010b5b06b0((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x24)) * 9);
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b5b06f4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5b0048; end: 10b5b004b;  */

void FUN_10b5b0048(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b0710();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5b0518();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5afdd0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5b079c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5b0730();
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



/* Entry: 10b5b004c; end: 10b5b015b;  */

void FUN_10b5b004c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b0710();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5b0518();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5afdd0();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5b079c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5b0730();
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



/* Entry: 10b5b015c; end: 10b5b0187;  */

undefined8 FUN_10b5b015c(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5b0188(param_1);
  return param_1;
}



/* Entry: 10b5b0188; end: 10b5b01bf;  */

void FUN_10b5b0188(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5bb4e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5afe44();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b01c0; end: 10b5b01c3;  */

undefined8 FUN_10b5b01c0(undefined8 param_1)

{
  func_0x00010b5b0774();
  FUN_10b5b0188(param_1);
  return param_1;
}



/* Entry: 10b5b01c4; end: 10b5b01d7;  */

void FUN_10b5b01c4(void)

{
  FUN_10b5b015c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b01d8; end: 10b5b01e3;  */

undefined ** FUN_10b5b01d8(void)

{
  return &PTR_DAT_110d16598;
}



/* Entry: 10b5b01e4; end: 10b5b0237;  */

void FUN_10b5b01e4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5bb594(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5afeb0(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b5b0238; end: 10b5b033f;  */

long * FUN_10b5b0238(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5b0720();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_4 = (long *)0x1;
    func_0x00010b5b06dc(1,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (long *)0x2;
    func_0x00010b5b06dc(2,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 10b5b0340; end: 10b5b0377;  */

long FUN_10b5b0340(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5bb7a4();
  func_0x00010b5b0690();
  return param_1 + extraout_x8;
}



/* Entry: 10b5b0378; end: 10b5b037b;  */

void FUN_10b5b0378(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5b0710();
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
        FUN_10b5b05a0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5bb8e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5b05e4();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5b004c();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5b0730();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5b037c; end: 10b5b043b;  */

void FUN_10b5b037c(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5b0710();
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
        FUN_10b5b05a0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5bb8e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5b05e4();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5b004c();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5b0730();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5b043c; end: 10b5b0453;  */

void FUN_10b5b043c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b5b077c();
  }
  else {
    func_0x00010b5b0768();
  }
  *puVar1 = &PTR_FUN_110d16410;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5b0454; end: 10b5b0517;  */

void FUN_10b5b0454(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b077c();
  }
  else {
    func_0x00010b5b0768();
  }
  *puVar1 = &PTR_FUN_110d16410;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5b0518; end: 10b5b059f;  */

undefined8 * FUN_10b5b0518(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b077c();
  }
  else {
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d16410;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5b06c4();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b532c40(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar2;
}



/* Entry: 10b5b05a0; end: 10b5b05e3;  */

undefined8 * FUN_10b5b05a0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d18160;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_10b5bba4c(puVar2 + 3,param_1,param_2 + 0x18);
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5bbafc(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5bbb40(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b50fb3c(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5bbb84(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = param_1;
  puVar2[10] = *(undefined8 *)(param_2 + 0x50);
  return puVar2;
}



/* Entry: 10b5b05e4; end: 10b5b0677;  */

undefined8 * FUN_10b5b05e4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d16460;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5b06c4();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5b0518(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  puVar2[4] = uVar3;
  return puVar2;
}



/* Entry: 10b5b0678; end: 10b5b07bb;  */

void FUN_10b5b0678(void)

{
  return;
}



/* Entry: 10b5b07bc; end: 10b5b086b;  */

undefined8 * FUN_10b5b07bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16630;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b5b0e0c();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b5b0e0c();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b5b0e0c();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b5b0e0c();
  param_1[6] = lVar1;
  lVar1 = param_3 + 0x38;
  func_0x00010b5b0e0c();
  param_1[7] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  return param_1;
}



/* Entry: 10b5b086c; end: 10b5b089b;  */

long FUN_10b5b086c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b089c(param_1);
  return param_1;
}



/* Entry: 10b5b089c; end: 10b5b08eb;  */

void FUN_10b5b089c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b08ec; end: 10b5b08ef;  */

long FUN_10b5b08ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b089c(param_1);
  return param_1;
}



/* Entry: 10b5b08f0; end: 10b5b0903;  */

void FUN_10b5b08f0(void)

{
  FUN_10b5b086c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b0904; end: 10b5b090f;  */

undefined ** FUN_10b5b0904(void)

{
  return &PTR_DAT_110d16670;
}



/* Entry: 10b5b0910; end: 10b5b097f;  */

void FUN_10b5b0910(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x40));
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



/* Entry: 10b5b0980; end: 10b5b0b43;  */

long * FUN_10b5b0980(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar2 = param_2;
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x40);
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,plVar2,(int)plVar2[4],param_2,param_3);
  }
  func_0x00010b5b0e1c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b09e4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5b09e4:
    func_0x00010b5b0e14();
    plVar2 = (long *)0x2;
    plVar1 = param_3;
    func_0x00010b5b0e00();
  }
  func_0x00010b5b0e1c(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b0a24;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5b0a24:
    func_0x00010b5b0e14();
    plVar2 = (long *)0x3;
    plVar1 = param_3;
    func_0x00010b5b0e00();
  }
  func_0x00010b5b0e1c(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b0a64;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5b0a64:
    func_0x00010b5b0e14();
    plVar2 = (long *)0x4;
    plVar1 = param_3;
    func_0x00010b5b0e00();
  }
  func_0x00010b5b0e1c(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b0aa4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5b0aa4:
    func_0x00010b5b0e14();
    plVar2 = (long *)0x5;
    plVar1 = param_3;
    func_0x00010b5b0e00();
  }
  func_0x00010b5b0e1c(*(undefined8 *)(param_1 + 0x38));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5b0b00;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5b0b00;
  func_0x00010b5b0e14();
  plVar1 = param_3;
  func_0x00010b5b0e00(param_3,6);
LAB_10b5b0b00:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
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
  if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar6);
  }
  _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar4);
}



/* Entry: 10b5b0b44; end: 10b5b0c2f;  */

long FUN_10b5b0b44(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b5b0e4c(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar2 + 1;
  }
  func_0x00010b5b0e4c(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b0e28();
  }
  func_0x00010b5b0e4c(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b0e28();
  }
  func_0x00010b5b0e4c(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b0e28();
  }
  func_0x00010b5b0e4c(*(undefined8 *)(param_1 + 0x38));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b0e28();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000108c6cd50(*(undefined8 *)(param_1 + 0x40));
    func_0x00010b5b0e28();
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



/* Entry: 10b5b0c30; end: 10b5b0c33;  */

void FUN_10b5b0c30(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar2;
    }
    else {
      func_0x00010b535e30();
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



/* Entry: 10b5b0c34; end: 10b5b0d9f;  */

void FUN_10b5b0c34(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5b0e40(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b0e34();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar2;
    }
    else {
      func_0x00010b535e30();
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



/* Entry: 10b5b0da0; end: 10b5b0da7;  */

void FUN_10b5b0da0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110d16630;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b5b0da8; end: 10b5b0dff;  */

void FUN_10b5b0da8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110d16630;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b5b0e00; end: 10b5b0e6b;  */

long * FUN_10b5b0e00(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b5b0e6c; end: 10b5b0edf;  */

undefined8 * FUN_10b5b0e6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d166d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = *(uint *)(param_3 + 0x2c);
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)(param_3 + 0x15);
  param_1[2] = uVar2;
  if ((uVar1 & 0xfffffffe) == 2) {
    param_1[4] = *(undefined8 *)(param_3 + 0x20);
  }
  return param_1;
}



/* Entry: 10b5b0ee0; end: 10b5b0f13;  */

long FUN_10b5b0ee0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}



/* Entry: 10b5b0f14; end: 10b5b0f17;  */

long FUN_10b5b0f14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}



/* Entry: 10b5b0f18; end: 10b5b0f2b;  */

void FUN_10b5b0f18(void)

{
  FUN_10b5b0ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b0f2c; end: 10b5b0f53;  */

undefined ** FUN_10b5b0f2c(void)

{
  return &PTR_DAT_110d16718;
}



/* Entry: 10b5b0f54; end: 10b5b1083;  */

long * FUN_10b5b0f54(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b5b1218();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5b1224();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x2c) == 3) {
    plVar1 = param_3;
    func_0x00010599ccb0(param_3,param_1[4],param_2);
    param_2 = plVar1;
  }
  else if (*(int *)((long)param_1 + 0x2c) == 2) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,param_1[4],param_2);
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b5b1218();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5b1224();
    param_2 = plVar2;
  }
  if ((int)param_1[3] != 0) {
    plVar2 = param_3;
    func_0x0001088b96ec(param_3,(int)param_1[3],param_2);
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    FUN_10b5b1218();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x1c);
    uVar3 = 0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x000107c280a8(param_2,uVar3);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b5b1084; end: 10b5b11cb;  */

long FUN_10b5b1084(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x1c) * 2;
  if ((*(uint *)(param_1 + 0x2c) & 0xfffffffe) == 2) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 10b5b11cc; end: 10b5b1217;  */

void FUN_10b5b11cc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d166d8;
  puVar1[1] = param_1;
  puVar1[5] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x15) = 0;
  return;
}



/* Entry: 10b5b1218; end: 10b5b1237;  */

ulong * FUN_10b5b1218(void)

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



/* Entry: 10b5b1238; end: 10b5b12a3;  */

long FUN_10b5b1238(long param_1)

{
  func_0x00010b5b1fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5bd880();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  func_0x000107c2a450(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5b12a4; end: 10b5b12a7;  */

long FUN_10b5b12a4(long param_1)

{
  func_0x00010b5b1fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5bd880();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  func_0x000107c2a450(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5b12a8; end: 10b5b12bb;  */

void FUN_10b5b12a8(void)

{
  FUN_10b5b1238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b12bc; end: 10b5b12c7;  */

undefined ** FUN_10b5b12bc(void)

{
  return &PTR_DAT_110d16860;
}



/* Entry: 10b5b12c8; end: 10b5b134b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b12c8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c9480(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b576b44(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5bd8e4(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5ae29c(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x50) = 0;
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



/* Entry: 10b5b134c; end: 10b5b1587;  */

byte * FUN_10b5b134c(byte *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x28);
  pbVar2 = param_1;
  if (0 < (int)uVar7) {
    func_0x00010b5b1eb4();
    pbVar5 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar5[-1] = (byte)uVar7 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar7;
    puVar8 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar8 + *(int *)(param_1 + 0x18);
    do {
      func_0x00010b5b1eb4();
      uVar7 = *puVar8;
      pbVar5 = pbVar2;
      while( true ) {
        param_2 = pbVar5 + 1;
        if (uVar7 < 0x80) break;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar5 = param_2;
      }
      puVar8 = puVar8 + 1;
      *pbVar5 = (byte)uVar7;
    } while (puVar8 < puVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    pbVar2 = (byte *)0x2;
    func_0x00010b5b1f0c(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
    param_2 = pbVar2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b5b1eb4();
    param_2 = (byte *)0x18;
    func_0x000107c280a8(0x18,pbVar2);
    func_0x00010b5b1edc();
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (byte *)0x4;
    func_0x00010b5b1f0c(4,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20));
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (byte *)0x5;
    func_0x00010b5b1f0c(5,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20));
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_2 = (byte *)0x6;
    func_0x00010b5b1f0c(6,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x44));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar6 + 8);
    uVar4 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar3 = uVar6 + 8;
  }
  if ((long)(int)uVar4 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return param_2 + (int)uVar4;
  }
  while( true ) {
    iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar9 - iVar10);
    if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
    func_0x00010b4d5738();
    pbVar2 = param_2 + iVar10;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar2);
  }
  func_0x00010b4d5738();
  return param_2 + iVar9;
}



/* Entry: 10b5b1588; end: 10b5b15cf;  */

void FUN_10b5b1588(void)

{
  FUN_10b5c9500();
  FUN_10b5b1e98();
  return;
}



/* Entry: 10b5b15d0; end: 10b5b1717;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b15d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5b1dcc(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5c93c0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a4c(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b5b1e10(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b5bda40();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b5b1e54(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_10b5ae578();
      }
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
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



/* Entry: 10b5b1718; end: 10b5b174f;  */

long FUN_10b5b1718(long param_1)

{
  func_0x00010b5b1fb4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5b1750; end: 10b5b1753;  */

long FUN_10b5b1750(long param_1)

{
  func_0x00010b5b1fb4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5b1754; end: 10b5b1767;  */

void FUN_10b5b1754(void)

{
  FUN_10b5b1718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b1768; end: 10b5b1773;  */

undefined ** FUN_10b5b1768(void)

{
  return &PTR_DAT_110d168a0;
}



/* Entry: 10b5b1774; end: 10b5b17bb;  */

void FUN_10b5b1774(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b5b17bc; end: 10b5b1943;  */

long * FUN_10b5b17bc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar7;
  int iVar8;
  int unaff_w22;
  int iVar9;
  
  func_0x00010b5b1f40();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5b1f6c();
    param_1 = (long *)0x1;
    func_0x00010b5b1f0c();
    param_4 = param_1;
  }
  plVar7 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b1eb4();
    plVar7 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000107c280b8(plVar7,uVar2);
    param_4 = plVar7;
  }
  plVar3 = plVar7;
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5b1eb4();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x00010b5b1edc();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    func_0x00010b5b1eb4();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b5b1edc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
        iVar9 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)uVar5;
        uVar1 = iVar8 - iVar9;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar8);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b5b1944; end: 10b5b19bb;  */

void FUN_10b5b1944(long param_1,long param_2)

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
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
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



/* Entry: 10b5b19bc; end: 10b5b1a23;  */

undefined8 * FUN_10b5b19bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16820;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5b1c8c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5b1a24; end: 10b5b1a4f;  */

long FUN_10b5b1a24(long param_1)

{
  func_0x00010b5b1fb4();
  FUN_10b5b1cb8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b1a50; end: 10b5b1a53;  */

long FUN_10b5b1a50(long param_1)

{
  func_0x00010b5b1fb4();
  FUN_10b5b1cb8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b1a54; end: 10b5b1a67;  */

void FUN_10b5b1a54(void)

{
  FUN_10b5b1a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b1a68; end: 10b5b1a73;  */

undefined ** FUN_10b5b1a68(void)

{
  return &PTR_DAT_110d168d8;
}



/* Entry: 10b5b1a74; end: 10b5b1ab7;  */

void FUN_10b5b1a74(long param_1)

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



/* Entry: 10b5b1ab8; end: 10b5b1b73;  */

long * FUN_10b5b1ab8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar6;
  int unaff_w22;
  int iVar7;
  
  func_0x00010b5b1f40();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5b1f6c();
    param_1 = (long *)0x1;
    func_0x00010b5b1f0c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b1eb4();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b5b1edc();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5b1eb4();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5b1edc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 10b5b1b74; end: 10b5b1be7;  */

long FUN_10b5b1b74(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5b1f14();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5b1be8();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b5b1ec0();
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    func_0x00010b5b1ec0();
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



/* Entry: 10b5b1be8; end: 10b5b1bff;  */

void FUN_10b5b1be8(void)

{
  func_0x00010b5b18a8();
  FUN_10b5b1e98();
  return;
}



/* Entry: 10b5b1c00; end: 10b5b1c03;  */

void FUN_10b5b1c00(long param_1,long param_2)

{
  FUN_10b5b1c64(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5b1c04; end: 10b5b1c63;  */

void FUN_10b5b1c04(long param_1,long param_2)

{
  FUN_10b5b1c64(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5b1c64; end: 10b5b1c8b;  */

void FUN_10b5b1c64(long *param_1,long param_2)

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



/* Entry: 10b5b1c8c; end: 10b5b1cb7;  */

undefined8 * FUN_10b5b1c8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5b1c64(param_1,param_3);
  return param_1;
}



/* Entry: 10b5b1cb8; end: 10b5b1ce7;  */

long * FUN_10b5b1cb8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}


