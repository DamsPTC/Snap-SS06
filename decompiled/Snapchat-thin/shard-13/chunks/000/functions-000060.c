/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f9c4d8; end: 109f9c8df;  */

undefined8 *** FUN_109f9c4d8(undefined8 *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 **ppuVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 **ppuStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 **ppuStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1[1];
  lVar7 = *(long *)(lVar8 + 0x720);
  lVar9 = *(long *)(lVar8 + 0x728);
  if (lVar7 == lVar9) {
    lVar7 = 0;
  }
  else {
    iVar10 = 0;
    do {
      lVar2 = lVar8 + 0x358;
      FUN_109f9ca04(lVar2,lVar7);
      if ((int)lVar2 == (int)param_3) {
        iVar10 = iVar10 + 1;
      }
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != lVar9);
    lVar7 = (long)(iVar10 << 3);
  }
  puVar3 = param_1;
  FUN_109fabb60(param_1,param_3);
  __ZNSt3__19to_stringEj(&ppuStack_178,param_3);
  pppuVar4 = &ppuStack_178;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f62af1f,6);
  puStack_228 = pppuVar4[1];
  ppuStack_230 = *pppuVar4;
  uStack_220 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (uStack_168._7_1_ < '\0') {
    __ZdlPv(ppuStack_178);
  }
  __ZNSt3__19to_stringEj(&ppuStack_178,param_3);
  pppuVar4 = &ppuStack_178;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f62aa3d,6);
  puStack_248 = pppuVar4[1];
  ppuStack_250 = *pppuVar4;
  uStack_240 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (uStack_168._7_1_ < '\0') {
    __ZdlPv(ppuStack_178);
  }
  lVar8 = *(long *)*param_1 + 0x798;
  FUN_109d678e8(lVar8,(long)param_2,0);
  FUN_109d94e24();
  uStack_210 = param_1[0xb];
  uStack_208 = param_1[0x16];
  lVar9 = *(long *)*param_1 + 0x798;
  lStack_218 = lVar8;
  FUN_109d678e8(lVar9,lVar7,0);
  FUN_109d94e24();
  uStack_1f8 = param_1[0xd];
  lVar8 = *(long *)*param_1 + 0x798;
  lStack_200 = lVar9;
  FUN_109d678e8(lVar8,(long)(int)param_3,0);
  FUN_109d94e24();
  lVar9 = *(long *)*param_1 + 0x798;
  lStack_1f0 = lVar8;
  FUN_109d678e8(lVar9,1,0);
  FUN_109d94e24();
  uStack_1e0 = param_1[0x13];
  uStack_1d8 = param_1[0x15];
  lVar8 = *(long *)*param_1 + 0x798;
  lStack_1e8 = lVar9;
  FUN_109d678e8(lVar8,2,0);
  FUN_109d94e24();
  uStack_1c8 = param_1[0x12];
  uStack_1b8 = param_1[0x10];
  lVar9 = *(long *)*param_1 + 0x798;
  lStack_1d0 = lVar8;
  puStack_1c0 = puVar3;
  FUN_109d678e8(lVar9,lVar7,0);
  FUN_109d94e24();
  uStack_1a8 = param_1[0x11];
  lVar7 = *(long *)*param_1 + 0x798;
  lStack_1b0 = lVar9;
  FUN_109d678e8(lVar7,8,0);
  FUN_109d94e24();
  uStack_198 = param_1[0xe];
  pppuVar4 = (undefined8 ***)ppuStack_230;
  if (-1 < (long)uStack_220._7_1_) {
    pppuVar4 = &ppuStack_230;
  }
  ppuVar1 = (undefined8 **)puStack_228;
  if (-1 < (long)uStack_220) {
    ppuVar1 = (undefined8 **)(long)uStack_220._7_1_;
  }
  plVar5 = (long *)(*(long *)*param_1 + 0x108);
  lStack_1a0 = lVar7;
  FUN_109d956b4(plVar5,pppuVar4,ppuVar1);
  lStack_190 = *plVar5;
  if (((ulong)pppuVar4 & 1) != 0) {
    *(long *)(lStack_190 + 0x10) = lStack_190;
  }
  lStack_190 = lStack_190 + 8;
  uStack_188 = param_1[0xf];
  pppuVar4 = (undefined8 ***)ppuStack_250;
  if (-1 < (long)uStack_240._7_1_) {
    pppuVar4 = &ppuStack_250;
  }
  ppuVar1 = (undefined8 **)puStack_248;
  if (-1 < (long)uStack_240) {
    ppuVar1 = (undefined8 **)(long)uStack_240._7_1_;
  }
  plVar5 = (long *)(*(long *)*param_1 + 0x108);
  FUN_109d956b4(plVar5,pppuVar4,ppuVar1);
  lStack_180 = *plVar5;
  if (((ulong)pppuVar4 & 1) != 0) {
    *(long *)(lStack_180 + 0x10) = lStack_180;
  }
  lStack_180 = lStack_180 + 8;
  uStack_170 = 0x2000000000;
  ppuStack_178 = (undefined8 **)&uStack_168;
  func_0x000109d738cc(&ppuStack_178,&lStack_218,&ppuStack_178);
  if (param_4 != 0) {
    func_0x000109d33e60(&ppuStack_178,param_1[0x17]);
  }
  pppuVar6 = (undefined8 ***)*param_1;
  FUN_109d974c0(pppuVar6,ppuStack_178,uStack_170 & 0xffffffff,0,1);
  pppuVar4 = (undefined8 ***)ppuStack_178;
  if (ppuStack_178 != (undefined8 **)&uStack_168) {
    _free();
  }
  if ((long)uStack_240 < 0) {
    pppuVar4 = (undefined8 ***)ppuStack_250;
    __ZdlPv();
  }
  if ((long)uStack_220 < 0) {
    pppuVar4 = (undefined8 ***)ppuStack_230;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if (ppuStack_178 != (undefined8 **)&uStack_168) {
    _free();
  }
  if ((long)uStack_240 < 0) {
    __ZdlPv(ppuStack_250);
  }
  if ((long)uStack_220 < 0) {
    __ZdlPv(ppuStack_230);
  }
  __Unwind_Resume();
  if (pppuVar4[0x24] != (undefined8 **)0x0) {
    pppuVar4[0x25] = pppuVar4[0x24];
    __ZdlPv();
  }
  FUN_109fadda8(pppuVar4 + 0x1d);
  func_0x000109a093d0(pppuVar4 + 0x1a,pppuVar4[0x1b]);
  func_0x000109faddf0(pppuVar4[0x18]);
  func_0x000109f8eccc(pppuVar4 + 0x12);
  func_0x000109fade28(pppuVar4 + 0xb);
  func_0x000109fade70(pppuVar4 + 6);
  return pppuVar4;
}



/* Entry: 109f9c8e0; end: 109f9c943;  */

long FUN_109f9c8e0(long param_1)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x120);
    __ZdlPv();
  }
  FUN_109fadda8(param_1 + 0xe8);
  func_0x000109a093d0(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
  func_0x000109faddf0(*(undefined8 *)(param_1 + 0xc0));
  func_0x000109f8eccc(param_1 + 0x90);
  func_0x000109fade28(param_1 + 0x58);
  func_0x000109fade70(param_1 + 0x30);
  return param_1;
}



/* Entry: 109f9c944; end: 109f9ca03;  */

void FUN_109f9c944(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lVar3 = *(long *)(param_2 + 0x3d0);
  puStack_58 = &uStack_50;
  for (lVar2 = *(long *)(param_2 + 0x3c8); lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
    lVar1 = param_2;
    FUN_109f9ca04(param_2,lVar2);
    uStack_5c = (undefined4)lVar1;
    func_0x000108afce20(&puStack_58,&uStack_5c,&uStack_5c);
  }
  FUN_109f9d0b4(param_1,puStack_58,&uStack_50);
  func_0x000107c28478(&puStack_58,uStack_50);
  return;
}



/* Entry: 109f9ca04; end: 109f9ca73;  */

void FUN_109f9ca04(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x20) == 1) {
    func_0x000109df6a34(param_1 + 0x88,param_2 + 0x28);
  }
  else if (*(int *)(param_2 + 0x20) == 2) {
    FUN_109f8cf84(param_1 + 0x60,param_2 + 8);
  }
  return;
}



/* Entry: 109f9ca74; end: 109f9caaf;  */

undefined8 * FUN_109f9ca74(long *param_1,undefined8 **param_2)

{
  undefined8 **ppuVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  char cStack_71;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_18 [8];
  
  iVar7 = (int)auStack_18;
  FUN_109f9dd90();
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x38);
  }
  pcVar3 = "map::at:  key not found";
  func_0x000109262df8();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((iVar7 == 1) && ((int)param_2 != 0)) {
    if (*(long *)(pcVar3 + 0x268) == 0) {
      plVar10 = *(long **)pcVar3;
      puVar6 = (undefined8 *)(*plVar10 + 0x7e8);
      FUN_109d34148(puVar6,0x20,3);
      *puVar6 = plVar10;
      *(undefined4 *)(puVar6 + 1) = 0x10;
      *(undefined8 *)((long)puVar6 + 0x14) = 0;
      *(undefined8 *)((long)puVar6 + 0xc) = 0;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      FUN_109d9fbf8();
      *(undefined8 **)(pcVar3 + 0x268) = puVar6;
      func_0x000107c31940(&puStack_88,&UNK_10f62ae5b);
      pcVar5 = pcVar3 + 0x1c0;
      param_2 = &puStack_88;
      FUN_109f9de14(pcVar5,&puStack_88);
      *(undefined8 **)(pcVar5 + 0x28) = puVar6;
      if (cStack_71 < '\0') {
        __ZdlPv(puStack_88);
      }
    }
    pcVar5 = pcVar3 + 0x268;
    plVar10 = (long *)(pcVar3 + 0x270);
    if (*(long *)(pcVar3 + 0x270) != 0) goto LAB_109f9d038;
    plVar11 = *(long **)pcVar3;
    uVar4 = *(undefined8 *)(pcVar3 + 0x268);
    func_0x000109da017c(uVar4,1);
    puVar6 = (undefined8 *)(*plVar11 + 0x7e8);
    uStack_70 = uVar4;
    FUN_109d34148(puVar6,0x20,3);
    puVar12 = (uint *)(puVar6 + 1);
    *puVar12 = 0x10;
    *puVar6 = plVar11;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_88 = &uStack_70;
    uStack_80 = 1;
    *puVar12 = *puVar12 | 0x100;
    *(undefined4 *)((long)puVar6 + 0xc) = 1;
    ppuVar8 = &puStack_88;
    func_0x000109d9fba0(ppuVar8,*(long *)*puVar6 + 0x7e8);
    puVar6[2] = ppuVar8;
    *(undefined8 **)(pcVar3 + 0x270) = puVar6;
    func_0x000107c31940(&puStack_88,&UNK_10f62ae76);
    pcVar3 = pcVar3 + 0x1c0;
    param_2 = &puStack_88;
    FUN_109f9de14(pcVar3,&puStack_88);
  }
  else if (iVar7 == 2) {
    if (*(long *)(pcVar3 + 0x288) == 0) {
      plVar10 = *(long **)pcVar3;
      puVar6 = (undefined8 *)(*plVar10 + 0x7e8);
      FUN_109d34148(puVar6,0x20,3);
      *puVar6 = plVar10;
      *(undefined4 *)(puVar6 + 1) = 0x10;
      *(undefined8 *)((long)puVar6 + 0x14) = 0;
      *(undefined8 *)((long)puVar6 + 0xc) = 0;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      FUN_109d9fbf8();
      *(undefined8 **)(pcVar3 + 0x288) = puVar6;
      func_0x000107c31940(&puStack_88,&UNK_10f62aec5);
      pcVar5 = pcVar3 + 0x1c0;
      param_2 = &puStack_88;
      FUN_109f9de14(pcVar5,&puStack_88);
      *(undefined8 **)(pcVar5 + 0x28) = puVar6;
      if (cStack_71 < '\0') {
        __ZdlPv(puStack_88);
      }
    }
    pcVar5 = pcVar3 + 0x288;
    plVar10 = (long *)(pcVar3 + 0x290);
    if (*(long *)(pcVar3 + 0x290) != 0) goto LAB_109f9d038;
    plVar11 = *(long **)pcVar3;
    uVar4 = *(undefined8 *)(pcVar3 + 0x288);
    func_0x000109da017c(uVar4,1);
    puVar6 = (undefined8 *)(*plVar11 + 0x7e8);
    uStack_70 = uVar4;
    FUN_109d34148(puVar6,0x20,3);
    puVar12 = (uint *)(puVar6 + 1);
    *puVar12 = 0x10;
    *puVar6 = plVar11;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_88 = &uStack_70;
    uStack_80 = 1;
    *puVar12 = *puVar12 | 0x100;
    *(undefined4 *)((long)puVar6 + 0xc) = 1;
    ppuVar8 = &puStack_88;
    func_0x000109d9fba0(ppuVar8,*(long *)*puVar6 + 0x7e8);
    puVar6[2] = ppuVar8;
    *(undefined8 **)(pcVar3 + 0x290) = puVar6;
    func_0x000107c31940(&puStack_88,&UNK_10f62aeda);
    pcVar3 = pcVar3 + 0x1c0;
    param_2 = &puStack_88;
    FUN_109f9de14(pcVar3,&puStack_88);
  }
  else if (iVar7 == 3) {
    if (*(long *)(pcVar3 + 0x278) == 0) {
      plVar10 = *(long **)pcVar3;
      puVar6 = (undefined8 *)(*plVar10 + 0x7e8);
      FUN_109d34148(puVar6,0x20,3);
      *puVar6 = plVar10;
      *(undefined4 *)(puVar6 + 1) = 0x10;
      *(undefined8 *)((long)puVar6 + 0x14) = 0;
      *(undefined8 *)((long)puVar6 + 0xc) = 0;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      FUN_109d9fbf8();
      *(undefined8 **)(pcVar3 + 0x278) = puVar6;
      func_0x000107c31940(&puStack_88,&UNK_10f62ae94);
      pcVar5 = pcVar3 + 0x1c0;
      param_2 = &puStack_88;
      FUN_109f9de14(pcVar5,&puStack_88);
      *(undefined8 **)(pcVar5 + 0x28) = puVar6;
      if (cStack_71 < '\0') {
        __ZdlPv(puStack_88);
      }
    }
    pcVar5 = pcVar3 + 0x278;
    plVar10 = (long *)(pcVar3 + 0x280);
    if (*(long *)(pcVar3 + 0x280) != 0) goto LAB_109f9d038;
    plVar11 = *(long **)pcVar3;
    uVar4 = *(undefined8 *)(pcVar3 + 0x278);
    func_0x000109da017c(uVar4,1);
    puVar6 = (undefined8 *)(*plVar11 + 0x7e8);
    uStack_70 = uVar4;
    FUN_109d34148(puVar6,0x20,3);
    puVar12 = (uint *)(puVar6 + 1);
    *puVar12 = 0x10;
    *puVar6 = plVar11;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_88 = &uStack_70;
    uStack_80 = 1;
    *puVar12 = *puVar12 | 0x100;
    *(undefined4 *)((long)puVar6 + 0xc) = 1;
    ppuVar8 = &puStack_88;
    func_0x000109d9fba0(ppuVar8,*(long *)*puVar6 + 0x7e8);
    puVar6[2] = ppuVar8;
    *(undefined8 **)(pcVar3 + 0x280) = puVar6;
    func_0x000107c31940(&puStack_88,&UNK_10f62aeab);
    pcVar3 = pcVar3 + 0x1c0;
    param_2 = &puStack_88;
    FUN_109f9de14(pcVar3,&puStack_88);
  }
  else {
    if (*(long *)(pcVar3 + 600) == 0) {
      plVar10 = *(long **)pcVar3;
      puVar6 = (undefined8 *)(*plVar10 + 0x7e8);
      FUN_109d34148(puVar6,0x20,3);
      *puVar6 = plVar10;
      *(undefined4 *)(puVar6 + 1) = 0x10;
      *(undefined8 *)((long)puVar6 + 0x14) = 0;
      *(undefined8 *)((long)puVar6 + 0xc) = 0;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      FUN_109d9fbf8();
      *(undefined8 **)(pcVar3 + 600) = puVar6;
      func_0x000107c31940(&puStack_88,&UNK_10f62aef2);
      pcVar5 = pcVar3 + 0x1c0;
      param_2 = &puStack_88;
      FUN_109f9de14(pcVar5,&puStack_88);
      *(undefined8 **)(pcVar5 + 0x28) = puVar6;
      if (cStack_71 < '\0') {
        __ZdlPv(puStack_88);
      }
    }
    pcVar5 = pcVar3 + 600;
    plVar10 = (long *)(pcVar3 + 0x260);
    if (*(long *)(pcVar3 + 0x260) != 0) goto LAB_109f9d038;
    plVar11 = *(long **)pcVar3;
    uVar4 = *(undefined8 *)(pcVar3 + 600);
    func_0x000109da017c(uVar4,1);
    puVar6 = (undefined8 *)(*plVar11 + 0x7e8);
    uStack_70 = uVar4;
    FUN_109d34148(puVar6,0x20,3);
    puVar12 = (uint *)(puVar6 + 1);
    *puVar12 = 0x10;
    *puVar6 = plVar11;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_88 = &uStack_70;
    uStack_80 = 1;
    *puVar12 = *puVar12 | 0x100;
    *(undefined4 *)((long)puVar6 + 0xc) = 1;
    ppuVar8 = &puStack_88;
    func_0x000109d9fba0(ppuVar8,*(long *)*puVar6 + 0x7e8);
    puVar6[2] = ppuVar8;
    *(undefined8 **)(pcVar3 + 0x260) = puVar6;
    func_0x000107c31940(&puStack_88,&UNK_10f62af07);
    pcVar3 = pcVar3 + 0x1c0;
    param_2 = &puStack_88;
    FUN_109f9de14(pcVar3,&puStack_88);
  }
  *(undefined8 **)(pcVar3 + 0x28) = puVar6;
  if (cStack_71 < '\0') {
    __ZdlPv(puStack_88);
  }
LAB_109f9d038:
  ppuVar8 = (undefined8 **)*plVar10;
  puVar6 = *(undefined8 **)pcVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (cStack_71 < '\0') {
      __ZdlPv(puStack_88);
    }
    __Unwind_Resume();
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    while (ppuVar8 != param_2) {
      ppuVar9 = ppuVar8;
      ppuVar1 = (undefined8 **)ppuVar8[1];
      if ((undefined8 **)ppuVar8[1] == (undefined8 **)0x0) {
        do {
          ppuVar8 = (undefined8 **)ppuVar9[2];
          bVar2 = (undefined8 **)*ppuVar8 != ppuVar9;
          ppuVar9 = ppuVar8;
        } while (bVar2);
      }
      else {
        do {
          ppuVar8 = ppuVar1;
          ppuVar1 = (undefined8 **)*ppuVar8;
        } while ((undefined8 **)*ppuVar8 != (undefined8 **)0x0);
      }
    }
    FUN_109f9d134(puVar6);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109f9cab0; end: 109f9d0b3;  */

undefined8 * FUN_109f9cab0(undefined8 *param_1,int param_2,undefined8 **param_3)

{
  undefined8 **ppuVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  char cStack_51;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 1) && ((int)param_3 != 0)) {
    if (param_1[0x4d] == 0) {
      plVar8 = (long *)*param_1;
      puVar5 = (undefined8 *)(*plVar8 + 0x7e8);
      FUN_109d34148(puVar5,0x20,3);
      *puVar5 = plVar8;
      *(undefined4 *)(puVar5 + 1) = 0x10;
      *(undefined8 *)((long)puVar5 + 0x14) = 0;
      *(undefined8 *)((long)puVar5 + 0xc) = 0;
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      FUN_109d9fbf8();
      param_1[0x4d] = puVar5;
      func_0x000107c31940(&puStack_68,&UNK_10f62ae5b);
      puVar4 = param_1 + 0x38;
      param_3 = &puStack_68;
      FUN_109f9de14(puVar4,&puStack_68);
      puVar4[5] = puVar5;
      if (cStack_51 < '\0') {
        __ZdlPv(puStack_68);
      }
    }
    puVar5 = param_1 + 0x4d;
    plVar8 = param_1 + 0x4e;
    if (param_1[0x4e] != 0) goto LAB_109f9d038;
    plVar9 = (long *)*param_1;
    uVar3 = param_1[0x4d];
    func_0x000109da017c(uVar3,1);
    puVar4 = (undefined8 *)(*plVar9 + 0x7e8);
    uStack_50 = uVar3;
    FUN_109d34148(puVar4,0x20,3);
    puVar10 = (uint *)(puVar4 + 1);
    *puVar10 = 0x10;
    *puVar4 = plVar9;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_68 = &uStack_50;
    uStack_60 = 1;
    *puVar10 = *puVar10 | 0x100;
    *(undefined4 *)((long)puVar4 + 0xc) = 1;
    ppuVar6 = &puStack_68;
    func_0x000109d9fba0(ppuVar6,*(long *)*puVar4 + 0x7e8);
    puVar4[2] = ppuVar6;
    param_1[0x4e] = puVar4;
    func_0x000107c31940(&puStack_68,&UNK_10f62ae76);
    param_1 = param_1 + 0x38;
    param_3 = &puStack_68;
    FUN_109f9de14(param_1,&puStack_68);
  }
  else if (param_2 == 2) {
    if (param_1[0x51] == 0) {
      plVar8 = (long *)*param_1;
      puVar5 = (undefined8 *)(*plVar8 + 0x7e8);
      FUN_109d34148(puVar5,0x20,3);
      *puVar5 = plVar8;
      *(undefined4 *)(puVar5 + 1) = 0x10;
      *(undefined8 *)((long)puVar5 + 0x14) = 0;
      *(undefined8 *)((long)puVar5 + 0xc) = 0;
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      FUN_109d9fbf8();
      param_1[0x51] = puVar5;
      func_0x000107c31940(&puStack_68,&UNK_10f62aec5);
      puVar4 = param_1 + 0x38;
      param_3 = &puStack_68;
      FUN_109f9de14(puVar4,&puStack_68);
      puVar4[5] = puVar5;
      if (cStack_51 < '\0') {
        __ZdlPv(puStack_68);
      }
    }
    puVar5 = param_1 + 0x51;
    plVar8 = param_1 + 0x52;
    if (param_1[0x52] != 0) goto LAB_109f9d038;
    plVar9 = (long *)*param_1;
    uVar3 = param_1[0x51];
    func_0x000109da017c(uVar3,1);
    puVar4 = (undefined8 *)(*plVar9 + 0x7e8);
    uStack_50 = uVar3;
    FUN_109d34148(puVar4,0x20,3);
    puVar10 = (uint *)(puVar4 + 1);
    *puVar10 = 0x10;
    *puVar4 = plVar9;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_68 = &uStack_50;
    uStack_60 = 1;
    *puVar10 = *puVar10 | 0x100;
    *(undefined4 *)((long)puVar4 + 0xc) = 1;
    ppuVar6 = &puStack_68;
    func_0x000109d9fba0(ppuVar6,*(long *)*puVar4 + 0x7e8);
    puVar4[2] = ppuVar6;
    param_1[0x52] = puVar4;
    func_0x000107c31940(&puStack_68,&UNK_10f62aeda);
    param_1 = param_1 + 0x38;
    param_3 = &puStack_68;
    FUN_109f9de14(param_1,&puStack_68);
  }
  else if (param_2 == 3) {
    if (param_1[0x4f] == 0) {
      plVar8 = (long *)*param_1;
      puVar5 = (undefined8 *)(*plVar8 + 0x7e8);
      FUN_109d34148(puVar5,0x20,3);
      *puVar5 = plVar8;
      *(undefined4 *)(puVar5 + 1) = 0x10;
      *(undefined8 *)((long)puVar5 + 0x14) = 0;
      *(undefined8 *)((long)puVar5 + 0xc) = 0;
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      FUN_109d9fbf8();
      param_1[0x4f] = puVar5;
      func_0x000107c31940(&puStack_68,&UNK_10f62ae94);
      puVar4 = param_1 + 0x38;
      param_3 = &puStack_68;
      FUN_109f9de14(puVar4,&puStack_68);
      puVar4[5] = puVar5;
      if (cStack_51 < '\0') {
        __ZdlPv(puStack_68);
      }
    }
    puVar5 = param_1 + 0x4f;
    plVar8 = param_1 + 0x50;
    if (param_1[0x50] != 0) goto LAB_109f9d038;
    plVar9 = (long *)*param_1;
    uVar3 = param_1[0x4f];
    func_0x000109da017c(uVar3,1);
    puVar4 = (undefined8 *)(*plVar9 + 0x7e8);
    uStack_50 = uVar3;
    FUN_109d34148(puVar4,0x20,3);
    puVar10 = (uint *)(puVar4 + 1);
    *puVar10 = 0x10;
    *puVar4 = plVar9;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_68 = &uStack_50;
    uStack_60 = 1;
    *puVar10 = *puVar10 | 0x100;
    *(undefined4 *)((long)puVar4 + 0xc) = 1;
    ppuVar6 = &puStack_68;
    func_0x000109d9fba0(ppuVar6,*(long *)*puVar4 + 0x7e8);
    puVar4[2] = ppuVar6;
    param_1[0x50] = puVar4;
    func_0x000107c31940(&puStack_68,&UNK_10f62aeab);
    param_1 = param_1 + 0x38;
    param_3 = &puStack_68;
    FUN_109f9de14(param_1,&puStack_68);
  }
  else {
    if (param_1[0x4b] == 0) {
      plVar8 = (long *)*param_1;
      puVar5 = (undefined8 *)(*plVar8 + 0x7e8);
      FUN_109d34148(puVar5,0x20,3);
      *puVar5 = plVar8;
      *(undefined4 *)(puVar5 + 1) = 0x10;
      *(undefined8 *)((long)puVar5 + 0x14) = 0;
      *(undefined8 *)((long)puVar5 + 0xc) = 0;
      *(undefined4 *)((long)puVar5 + 0x1c) = 0;
      FUN_109d9fbf8();
      param_1[0x4b] = puVar5;
      func_0x000107c31940(&puStack_68,&UNK_10f62aef2);
      puVar4 = param_1 + 0x38;
      param_3 = &puStack_68;
      FUN_109f9de14(puVar4,&puStack_68);
      puVar4[5] = puVar5;
      if (cStack_51 < '\0') {
        __ZdlPv(puStack_68);
      }
    }
    puVar5 = param_1 + 0x4b;
    plVar8 = param_1 + 0x4c;
    if (param_1[0x4c] != 0) goto LAB_109f9d038;
    plVar9 = (long *)*param_1;
    uVar3 = param_1[0x4b];
    func_0x000109da017c(uVar3,1);
    puVar4 = (undefined8 *)(*plVar9 + 0x7e8);
    uStack_50 = uVar3;
    FUN_109d34148(puVar4,0x20,3);
    puVar10 = (uint *)(puVar4 + 1);
    *puVar10 = 0x10;
    *puVar4 = plVar9;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
    FUN_109d9fbf8();
    puStack_68 = &uStack_50;
    uStack_60 = 1;
    *puVar10 = *puVar10 | 0x100;
    *(undefined4 *)((long)puVar4 + 0xc) = 1;
    ppuVar6 = &puStack_68;
    func_0x000109d9fba0(ppuVar6,*(long *)*puVar4 + 0x7e8);
    puVar4[2] = ppuVar6;
    param_1[0x4c] = puVar4;
    func_0x000107c31940(&puStack_68,&UNK_10f62af07);
    param_1 = param_1 + 0x38;
    param_3 = &puStack_68;
    FUN_109f9de14(param_1,&puStack_68);
  }
  param_1[5] = puVar4;
  if (cStack_51 < '\0') {
    __ZdlPv(puStack_68);
  }
LAB_109f9d038:
  ppuVar6 = (undefined8 **)*plVar8;
  puVar5 = (undefined8 *)*puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_51 < '\0') {
      __ZdlPv(puStack_68);
    }
    __Unwind_Resume();
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    while (ppuVar6 != param_3) {
      ppuVar7 = ppuVar6;
      ppuVar1 = (undefined8 **)ppuVar6[1];
      if ((undefined8 **)ppuVar6[1] == (undefined8 **)0x0) {
        do {
          ppuVar6 = (undefined8 **)ppuVar7[2];
          bVar2 = (undefined8 **)*ppuVar6 != ppuVar7;
          ppuVar7 = ppuVar6;
        } while (bVar2);
      }
      else {
        do {
          ppuVar6 = ppuVar1;
          ppuVar1 = (undefined8 **)*ppuVar6;
        } while ((undefined8 **)*ppuVar6 != (undefined8 **)0x0);
      }
    }
    FUN_109f9d134(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 109f9d0b4; end: 109f9d133;  */

undefined8 * FUN_109f9d0b4(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    lVar3 = 0;
    plVar5 = param_2;
    do {
      plVar4 = plVar5;
      plVar1 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar2 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      lVar3 = lVar3 + 1;
    } while (plVar5 != param_3);
  }
  FUN_109f9d134(param_1,param_2,param_3,lVar3);
  return param_1;
}



/* Entry: 109f9d134; end: 109f9d1db;  */

void FUN_109f9d134(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  if (param_4 != 0) {
    func_0x000109265f60(param_1,param_4);
    puVar3 = *(undefined4 **)(param_1 + 8);
    while (param_2 != param_3) {
      *puVar3 = *(undefined4 *)((long)param_2 + 0x1c);
      plVar1 = (long *)param_2[1];
      plVar4 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar4[2];
          bVar2 = (long *)*param_2 != plVar4;
          plVar4 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar1;
          plVar1 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
      puVar3 = puVar3 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar3;
  }
  return;
}



/* Entry: 109f9d1dc; end: 109f9d807;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ****
FUN_109f9d1dc(long *param_1,undefined8 *******param_2,long *param_3,long param_4,long param_5,
             long *param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *******pppppppuVar16;
  long *unaff_x24;
  undefined8 *******pppppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *******pppppppuStack_4e8;
  long lStack_4e0;
  char cStack_4d1;
  long *plStack_4d0;
  ulong uStack_4c8;
  long alStack_4c0 [32];
  undefined8 ******ppppppuStack_3c0;
  ulong uStack_3b8;
  long lStack_3b0;
  undefined8 *******pppppppuStack_210;
  undefined8 uStack_208;
  undefined8 ******appppppuStack_200 [48];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_208 = 0x1000000000;
  lVar6 = *param_3;
  pppppppuVar19 = param_2;
  pppppppuStack_210 = appppppuStack_200;
  if (param_3[1] != lVar6) {
    ppppppuVar14 = (undefined8 ******)0x0;
    uVar12 = 0;
    uVar20 = 1;
    do {
      pppppppuVar19 = *(undefined8 ********)(*(long *)(lVar6 + uVar12 * 8) + 0x10);
      pppppppuVar4 = pppppppuVar19;
      FUN_109f48594();
      uVar10 = (ulong)pppppppuVar4 & 0xffffffff;
      if (uVar20 <= ((ulong)pppppppuVar4 & 0xffffffff)) {
        uVar20 = uVar10;
      }
      if ((int)pppppppuVar4 != 0) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = ((long)ppppppuVar14 + (uVar10 - 1)) / uVar10;
        }
        ppppppuVar14 = (undefined8 ******)(uVar3 * uVar10);
      }
      pppppppuVar5 = pppppppuVar19;
      FUN_109f48674();
      lVar6 = *param_1;
      FUN_109f9f1c0(lVar6,pppppppuVar19,param_1 + 0x38);
      pppppppuVar4 = pppppppuStack_210;
      if (lVar6 != 0) {
        ppppppuStack_3c0 = ppppppuVar14;
        uStack_3b8 = (ulong)pppppppuVar5 & 0xffffffff;
        lStack_3b0 = lVar6;
        if ((uint)uStack_208 < uStack_208._4_4_) {
          ppppppuVar13 = &ppppppuStack_3c0;
        }
        else {
          pppppppuVar19 = appppppuStack_200;
          if ((&ppppppuStack_3c0 < pppppppuStack_210) ||
             (pppppppuStack_210 + (uStack_208 & 0xffffffff) * 3 <= &ppppppuStack_3c0)) {
            func_0x000107c2b01c(&pppppppuStack_210,appppppuStack_200,(uStack_208 & 0xffffffff) + 1,
                                0x18);
            ppppppuVar13 = &ppppppuStack_3c0;
          }
          else {
            func_0x000107c2b01c(&pppppppuStack_210,appppppuStack_200,(uStack_208 & 0xffffffff) + 1,
                                0x18);
            ppppppuVar13 = (undefined8 ******)
                           ((long)pppppppuStack_210 + ((long)&ppppppuStack_3c0 - (long)pppppppuVar4)
                           );
          }
        }
        pppppppuVar4 = pppppppuStack_210 + (uStack_208 & 0xffffffff) * 3;
        ppppppuVar22 = (undefined8 ******)ppppppuVar13[1];
        ppppppuVar21 = (undefined8 ******)*ppppppuVar13;
        pppppppuVar4[2] = (undefined8 ******)ppppppuVar13[2];
        pppppppuVar4[1] = ppppppuVar22;
        *pppppppuVar4 = ppppppuVar21;
        uStack_208 = CONCAT44(uStack_208._4_4_,(uint)uStack_208 + 1);
      }
      ppppppuVar14 = (undefined8 ******)((long)ppppppuVar14 + ((ulong)pppppppuVar5 & 0xffffffff));
      uVar12 = uVar12 + 1;
      lVar6 = *param_3;
    } while (uVar12 < (ulong)(param_3[1] - lVar6 >> 3));
    unaff_x24 = param_6;
    if ((uint)uStack_208 != 0) {
      if (param_6 != (long *)0x0) {
        uVar12 = 0;
        *(undefined4 *)(param_6 + 1) = 0;
        lVar6 = (uStack_208 & 0xffffffff) * 0x18;
        pppppppuVar19 = pppppppuStack_210;
        do {
          ppppppuVar13 = *pppppppuVar19;
          if (*(uint *)((long)param_6 + 0xc) <= (uint)uVar12) {
            func_0x000107c2b01c(param_6,param_6 + 2,uVar12 + 1,8);
            uVar12 = (ulong)*(uint *)(param_6 + 1);
          }
          *(undefined8 *******)(*param_6 + uVar12 * 8) = ppppppuVar13;
          uVar9 = (int)param_6[1] + 1;
          uVar12 = (ulong)uVar9;
          *(uint *)(param_6 + 1) = uVar9;
          pppppppuVar19 = pppppppuVar19 + 3;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      FUN_109d73510(&ppppppuStack_3c0,&UNK_10f62aca9,0xd7);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppppuStack_4e8,&UNK_10f62ae45,param_2);
      uStack_4c8 = 0x1000000000;
      plStack_4d0 = alStack_4c0;
      if ((uint)uStack_208 == 0) {
        uVar12 = 0;
      }
      else {
        lVar6 = (uStack_208 & 0xffffffff) * 0x18;
        pppppppuVar19 = pppppppuStack_210 + 2;
        do {
          func_0x000109d33d14(&plStack_4d0,*pppppppuVar19);
          lVar6 = lVar6 + -0x18;
          pppppppuVar19 = pppppppuVar19 + 3;
        } while (lVar6 != 0);
        uVar12 = uStack_4c8 & 0xffffffff;
      }
      lVar6 = *param_1;
      FUN_109d9fa44(lVar6,plStack_4d0,uVar12,0);
      ppppppuVar13 = &ppppppuStack_3c0;
      FUN_109d73090(ppppppuVar13,lVar6);
      uVar12 = 0;
      if (uVar20 != 0) {
        uVar12 = ((long)ppppppuVar14 + (uVar20 - 1)) / uVar20;
      }
      pppppuVar18 = (undefined8 *****)(uVar12 * uVar20);
      uVar12 = uStack_208 & 0xffffffff;
      if ((uint)uStack_208 != 0) {
        ppppppuVar14 = ppppppuVar13 + 2;
        pppppppuVar19 = pppppppuStack_210;
        do {
          if ((undefined8 ******)*ppppppuVar14 != *pppppppuVar19) goto LAB_109f9d588;
          uVar12 = uVar12 - 1;
          ppppppuVar14 = ppppppuVar14 + 1;
          pppppppuVar19 = pppppppuVar19 + 3;
        } while (uVar12 != 0);
      }
      if ((*ppppppuVar13 == pppppuVar18) ||
         (lVar6 = 1L << ((ulong)*(byte *)(ppppppuVar13 + 1) & 0x3f),
         (undefined8 *****)((long)*ppppppuVar13 + lVar6 + -1 & -lVar6) == pppppuVar18)) {
        *(undefined4 *)(param_4 + 8) = 0;
        *(undefined4 *)(param_5 + 8) = 0;
        if ((uint)uStack_208 != 0) {
          lVar6 = 0;
          uVar12 = 0;
          do {
            func_0x000109d31b50(param_4,uVar12);
            uVar9 = (uint)*(long *)((long)pppppppuStack_210 + lVar6);
            uVar9 = uVar9 & -uVar9;
            if (0xf < uVar9) {
              uVar9 = 0x10;
            }
            uVar1 = 0x10;
            if (*(long *)((long)pppppppuStack_210 + lVar6) != 0) {
              uVar1 = uVar9;
            }
            func_0x000109d31b50(param_5,uVar1);
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 0x18;
          } while (uVar12 < (uStack_208 & 0xffffffff));
        }
        param_6 = plStack_4d0;
        ppppuVar7 = (undefined8 ****)*param_1;
        pppppppuVar19 = pppppppuStack_4e8;
        if (-1 < (long)cStack_4d1) {
          pppppppuVar19 = &pppppppuStack_4e8;
        }
        lVar6 = lStack_4e0;
        if (-1 < cStack_4d1) {
          lVar6 = (long)cStack_4d1;
        }
        FUN_109d9fe2c(ppppuVar7,pppppppuVar19,lVar6);
        FUN_109d9fb38();
      }
      else {
LAB_109f9d588:
        ppppuVar7 = (undefined8 ****)0x0;
      }
      if (plStack_4d0 != alStack_4c0) {
        _free();
      }
      if (ppppuVar7 == (undefined8 ****)0x0) {
        param_6 = alStack_4c0;
        uStack_4c8 = 0x2000000000;
        *(undefined4 *)(param_4 + 8) = 0;
        *(undefined4 *)(param_5 + 8) = 0;
        plStack_4d0 = param_6;
        if ((uint)uStack_208 == 0) {
          pppppuVar15 = (undefined8 *****)0x0;
        }
        else {
          lVar6 = 0;
          uVar12 = 0;
          pppppuVar15 = (undefined8 *****)0x0;
          do {
            pppppppuVar19 = pppppppuStack_210;
            lVar2 = (long)*(undefined8 ******)((long)pppppppuStack_210 + lVar6) - (long)pppppuVar15;
            if (pppppuVar15 <= *(undefined8 ******)((long)pppppppuStack_210 + lVar6) && lVar2 != 0)
            {
              lVar8 = param_1[0x3e];
              FUN_109d9ffc0(lVar8,lVar2);
              func_0x000109d33d14(&plStack_4d0,lVar8);
              pppppuVar15 = *(undefined8 ******)((long)pppppppuVar19 + lVar6);
            }
            func_0x000109d31b50(param_4,uStack_4c8 & 0xffffffff);
            uVar9 = (uint)*(long *)((long)pppppppuVar19 + lVar6);
            uVar9 = uVar9 & -uVar9;
            if (0xf < uVar9) {
              uVar9 = 0x10;
            }
            uVar1 = 0x10;
            if (*(long *)((long)pppppppuVar19 + lVar6) != 0) {
              uVar1 = uVar9;
            }
            func_0x000109d31b50(param_5,uVar1);
            func_0x000109d33d14(&plStack_4d0,*(undefined8 *)((long)pppppppuVar19 + lVar6 + 0x10));
            ppppppuVar14 = &ppppppuStack_3c0;
            FUN_109d2feb0(ppppppuVar14,*(undefined8 *)((long)pppppppuVar19 + lVar6 + 0x10));
            pppppuVar15 = (undefined8 *****)((long)ppppppuVar14 + (long)pppppuVar15);
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 0x18;
          } while (uVar12 < (uStack_208 & 0xffffffff));
        }
        if (pppppuVar15 <= pppppuVar18 && (long)pppppuVar18 - (long)pppppuVar15 != 0) {
          lVar6 = param_1[0x3e];
          FUN_109d9ffc0(lVar6,(long)pppppuVar18 - (long)pppppuVar15);
          func_0x000109d33d14(&plStack_4d0,lVar6);
        }
        ppppuVar7 = (undefined8 ****)*param_1;
        pppppppuVar19 = pppppppuStack_4e8;
        if (-1 < (long)cStack_4d1) {
          pppppppuVar19 = &pppppppuStack_4e8;
        }
        if (-1 < cStack_4d1) {
          lStack_4e0 = (long)cStack_4d1;
        }
        FUN_109d9fe2c(ppppuVar7,pppppppuVar19,lStack_4e0);
        FUN_109d9fb38();
        if (plStack_4d0 != param_6) {
          _free();
        }
      }
      param_1 = param_1 + 0x38;
      pppppppuVar19 = &pppppppuStack_4e8;
      FUN_109f9e23c(param_1,pppppppuVar19,&pppppppuStack_4e8);
      param_1[5] = (long)ppppuVar7;
      if (cStack_4d1 < '\0') {
        __ZdlPv(pppppppuStack_4e8);
      }
      FUN_109d7300c(&ppppppuStack_3c0);
      goto LAB_109f9d708;
    }
  }
  param_6 = unaff_x24;
  ppppuVar7 = (undefined8 ****)0x0;
LAB_109f9d708:
  pppppppuVar4 = pppppppuStack_210;
  if (pppppppuStack_210 != appppppuStack_200) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppuVar7;
  }
  ___stack_chk_fail();
  if (plStack_4d0 != param_6) {
    _free();
  }
  if (cStack_4d1 < '\0') {
    __ZdlPv(pppppppuStack_4e8);
  }
  FUN_109d7300c(&ppppppuStack_3c0);
  if (pppppppuStack_210 != appppppuStack_200) {
    _free();
  }
  __Unwind_Resume();
  pppppppuVar5 = pppppppuVar4;
  func_0x000107c31944();
  pppppppuVar16 = (undefined8 *******)pppppppuVar4[1];
  if (pppppppuVar16 != (undefined8 *******)0x0) {
    uVar12 = (long)pppppppuVar16 - 1;
    if (((ulong)pppppppuVar16 & uVar12) == 0) {
      pppppppuVar17 = (undefined8 *******)(uVar12 & (ulong)pppppppuVar5);
    }
    else {
      pppppppuVar17 = pppppppuVar5;
      if (pppppppuVar16 <= pppppppuVar5) {
        uVar20 = 0;
        if (pppppppuVar16 != (undefined8 *******)0x0) {
          uVar20 = (ulong)pppppppuVar5 / (ulong)pppppppuVar16;
        }
        pppppppuVar17 = (undefined8 *******)((long)pppppppuVar5 - uVar20 * (long)pppppppuVar16);
      }
    }
    if ((*pppppppuVar4)[(long)pppppppuVar17] != (undefined8 *****)0x0) {
      ppppuVar7 = *(*pppppppuVar4)[(long)pppppppuVar17];
      do {
        if (ppppuVar7 == (undefined8 ****)0x0) {
          return (undefined8 ****)0x0;
        }
        pppppppuVar11 = (undefined8 *******)ppppuVar7[1];
        if (pppppppuVar11 == pppppppuVar5) {
          pppppppuVar11 = pppppppuVar4;
          func_0x000104c4fbc4(pppppppuVar4,ppppuVar7 + 2,pppppppuVar19);
          if (((ulong)pppppppuVar11 & 1) != 0) {
            return ppppuVar7;
          }
        }
        else {
          if (((ulong)pppppppuVar16 & uVar12) == 0) {
            pppppppuVar11 = (undefined8 *******)((ulong)pppppppuVar11 & uVar12);
          }
          else if (pppppppuVar16 <= pppppppuVar11) {
            uVar20 = 0;
            if (pppppppuVar16 != (undefined8 *******)0x0) {
              uVar20 = (ulong)pppppppuVar11 / (ulong)pppppppuVar16;
            }
            pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 - uVar20 * (long)pppppppuVar16)
            ;
          }
          if (pppppppuVar11 != pppppppuVar17) {
            return (undefined8 ****)0x0;
          }
        }
        ppppuVar7 = (undefined8 ****)*ppppuVar7;
      } while( true );
    }
  }
  return (undefined8 ****)0x0;
}



/* Entry: 109f9d808; end: 109f9d8eb;  */

long FUN_109f9d808(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109f9d8ec; end: 109f9dcff;  */

long * FUN_109f9d8ec(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x78;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = (long)(plVar5 + 7);
  plVar5[6] = 0x1000000000;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_109f9dc10;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_109f9da98:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109f9dce8);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_109f9da98;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_109f9dc10:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109f9dd00; end: 109f9dd8f;  */

void FUN_109f9dd00(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109f98808(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109f9dd90; end: 109f9de13;  */

long * FUN_109f9dd90(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_109f9ddfc;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_109f9ddfc:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109f9de14; end: 109f9e037;  */

long * FUN_109f9de14(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar4 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar4) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar5 = 0;
            if (plVar6 != (long *)0x0) {
              uVar5 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar5 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x30;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar4;
  lVar3 = *param_3;
  plVar1[3] = param_3[1];
  plVar1[2] = lVar3;
  lVar3 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar1[4] = lVar3;
  plVar1[5] = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    FUN_109f9e038(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar1 = *plVar4;
    *plVar4 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar1 == 0) goto LAB_109f9dff8;
    plVar4 = *(long **)(*plVar1 + 8);
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar4) {
      uVar7 = 0;
      if (plVar6 != (long *)0x0) {
        uVar7 = (ulong)plVar4 / (ulong)plVar6;
      }
      plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar1 = *plVar4;
  }
  *plVar4 = (long)plVar1;
LAB_109f9dff8:
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 109f9e038; end: 109f9e207;  */

void FUN_109f9e038(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  if ((((ulong)plVar4 & 1) != 0) && (*(char *)((long)plVar6 + 0x27) < '\0')) {
    __ZdlPv(plVar6[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 109f9e208; end: 109f9e23b;  */

void FUN_109f9e208(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109f9e23c; end: 109f9e483;  */

long * FUN_109f9e23c(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x30;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  plVar1[5] = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_109f9e038(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 109f9e484; end: 109f9e497;  */

void FUN_109f9e484(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        uVar6 = puVar2[3];
        uVar5 = puVar2[2];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puStack_58[3] = uVar6;
        puStack_58[2] = uVar5;
        uVar4 = puVar2[6];
        uVar3 = puVar2[5];
        puStack_58[7] = puVar2[7];
        puStack_58[6] = uVar4;
        puStack_58[5] = uVar3;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[5] = 0;
        puVar2 = puVar2 + 8;
        puStack_58 = puStack_58 + 8;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x3f) < '\0') {
          __ZdlPv(param_2[5]);
        }
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_109f9e58c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 109f9e498; end: 109f9e58b;  */

void FUN_109f9e498(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        uVar5 = puVar1[3];
        uVar4 = puVar1[2];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puStack_48[3] = uVar5;
        puStack_48[2] = uVar4;
        uVar3 = puVar1[6];
        uVar2 = puVar1[5];
        puStack_48[7] = puVar1[7];
        puStack_48[6] = uVar3;
        puStack_48[5] = uVar2;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 8;
        puStack_48 = puStack_48 + 8;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x3f) < '\0') {
          __ZdlPv(param_2[5]);
        }
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_109f9e58c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 109f9e58c; end: 109f9e5bf;  */

long FUN_109f9e58c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f9e5c0(param_1);
  }
  return param_1;
}



/* Entry: 109f9e5c0; end: 109f9e68b;  */

/* WARNING: Removing unreachable block (ram,0x000109f9e5e8) */

void FUN_109f9e5c0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x40
      ) {
  }
  return;
}



/* Entry: 109f9e68c; end: 109f9e6db;  */

undefined8 * FUN_109f9e68c(long param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  if ((int)param_2 < 3) {
    if (param_2 == 1) {
      return *(undefined8 **)(param_1 + 0x210);
    }
    if (param_2 == 2) {
      return *(undefined8 **)(param_1 + 0x240);
    }
  }
  else {
    if (param_2 == 3) {
      return *(undefined8 **)(param_1 + 0x248);
    }
    if (param_2 == 4) {
      return *(undefined8 **)(param_1 + 0x250);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x210);
  lVar4 = *(long *)*puVar3;
  uStack_38 = (ulong)param_2;
  lVar1 = lVar4 + 0x900;
  puStack_40 = puVar3;
  FUN_109da1690(lVar1,&puStack_40);
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(lVar4 + 0x7e8);
    FUN_109d34148(puVar2,0x28,3);
    *puVar2 = *puVar3;
    puVar2[3] = puVar3;
    *(uint *)(puVar2 + 4) = param_2;
    puVar2[2] = puVar2 + 3;
    puVar2[1] = 0x100000012;
    *(undefined8 **)(lVar1 + 0x10) = puVar2;
  }
  return puVar2;
}



/* Entry: 109f9e6dc; end: 109f9e783;  */

long * FUN_109f9e6dc(long param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_109f9e740:
      plVar1 = (long *)0x28;
      __Znwm();
      *(undefined4 *)((long)plVar1 + 0x1c) = *param_3;
      *(undefined4 *)(plVar1 + 4) = 0;
      func_0x000109a09410(param_1,plVar2,plVar3,plVar1);
      return plVar1;
    }
    while (plVar2 = plVar1, *(uint *)((long)plVar2 + 0x1c) <= param_2) {
      if (param_2 <= *(uint *)((long)plVar2 + 0x1c)) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_109f9e740;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 109f9e784; end: 109f9e7ef;  */

ulong FUN_109f9e784(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)(uint)param_1[1];
  if (*(uint *)((long)param_1 + 0xc) <= (uint)param_1[1]) {
    uVar3 = *param_1;
    uVar1 = uVar3 + uVar2 * 0x20;
    if ((param_2 >= uVar3 && param_2 <= uVar1) && (param_2 < uVar3 || uVar1 != param_2)) {
      FUN_109f9e7f0(param_1,uVar2 + 1);
      param_2 = *param_1 + (param_2 - uVar3);
    }
    else {
      FUN_109f9e7f0(param_1,uVar2 + 1);
    }
  }
  return param_2;
}



/* Entry: 109f9e7f0; end: 109f9e9a3;  */

void FUN_109f9e7f0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 auStack_48 [2];
  
  plVar3 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x20,auStack_48);
  plVar4 = (long *)*param_1;
  if (*(uint *)(param_1 + 1) != 0) {
    plVar1 = plVar4 + (ulong)*(uint *)(param_1 + 1) * 4;
    plVar5 = plVar3;
    do {
      *plVar5 = *plVar4;
      lVar7 = plVar4[2];
      lVar6 = plVar4[1];
      plVar5[3] = plVar4[3];
      plVar5[2] = lVar7;
      plVar5[1] = lVar6;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[1] = 0;
      plVar5 = plVar5 + 4;
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
    plVar4 = (long *)*param_1;
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      plVar4 = plVar4 + (ulong)uVar2 * 4 + -3;
      lVar6 = (ulong)uVar2 * -0x20;
      do {
        if (*(char *)((long)plVar4 + 0x17) < '\0') {
          __ZdlPv(*plVar4);
        }
        plVar4 = plVar4 + -4;
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != 0);
      plVar4 = (long *)*param_1;
    }
  }
  if (plVar4 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar3;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_48[0];
  return;
}



/* Entry: 109f9e9a4; end: 109f9ebd3;  */

long * FUN_109f9e9a4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar8 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - 1;
    if ((uVar4 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar6 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar4 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar4 <= uVar6) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar1 * uVar4;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x20;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[2] = *param_3;
  *(undefined4 *)(plVar5 + 3) = 0;
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar4) {
      uVar2 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar2 = uVar2 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_109f9ebd4(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar2 * uVar4;
      }
    }
  }
  lVar7 = *param_1;
  plVar3 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_109f9eb9c;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar2 * uVar4;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_109f9eb9c:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109f9ebd4; end: 109f9eca3;  */

long * FUN_109f9ebd4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 > param_2 || param_2 == plVar15) {
    if (plVar15 <= param_2) {
      return plVar4;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar15 <= param_2) {
      return plVar4;
    }
  }
  if (param_2 == (long *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return plVar4;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (param_2 != plVar15);
    plVar15 = (long *)param_1[2];
    if (plVar15 == (long *)0x0) {
      return plVar4;
    }
    plVar10 = (long *)plVar15[1];
    uVar6 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar6) == 0) {
      plVar10 = (long *)((ulong)plVar10 & uVar6);
    }
    else if (param_2 <= plVar10) {
      uVar16 = 0;
      if (param_2 != (long *)0x0) {
        uVar16 = (ulong)plVar10 / (ulong)param_2;
      }
      plVar10 = (long *)((long)plVar10 - uVar16 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
    plVar11 = (long *)*plVar15;
    while (plVar11 != (long *)0x0) {
      plVar13 = (long *)plVar11[1];
      if (((ulong)param_2 & uVar6) == 0) {
        plVar13 = (long *)((ulong)plVar13 & uVar6);
      }
      else if (param_2 <= plVar13) {
        uVar16 = 0;
        if (param_2 != (long *)0x0) {
          uVar16 = (ulong)plVar13 / (ulong)param_2;
        }
        plVar13 = (long *)((long)plVar13 - uVar16 * (long)param_2);
      }
      plVar12 = plVar11;
      if (plVar13 != plVar10) {
        lVar3 = *param_1;
        if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
          *(long **)(lVar3 + (long)plVar13 * 8) = plVar15;
          plVar10 = plVar13;
        }
        else {
          *plVar15 = *plVar11;
          *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
          **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
          plVar12 = plVar15;
        }
      }
      plVar15 = plVar12;
      plVar11 = (long *)*plVar12;
    }
    return plVar4;
  }
  func_0x000104c4f740();
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = ((ulong)param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar16 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x24 = uVar7 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar6 <= uVar16) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar16 / uVar6;
        }
        unaff_x24 = uVar16 - uVar9 * uVar6;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar9 = plVar4[1];
        if (uVar9 == uVar16) {
          if ((long *)plVar4[2] == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar6 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar6 <= uVar9) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar8 * uVar6;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x20;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar16;
  plVar4[2] = *param_3;
  plVar4[3] = 0;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar6) {
      uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar7 = uVar7 | uVar6 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar6 = param_1[1];
    }
    if (uVar6 < uVar7) {
LAB_109f9ef64:
      if (uVar7 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109f9f1ac);
        (*pcVar2)();
      }
      lVar3 = uVar7 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar3;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar6 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      plVar15 = (long *)param_1[2];
      uVar6 = uVar7;
      if (plVar15 != (long *)0x0) {
        uVar9 = plVar15[1];
        uVar8 = uVar7 - 1;
        if ((uVar7 & uVar8) == 0) {
          uVar9 = uVar9 & uVar8;
        }
        else if (uVar7 <= uVar9) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar14 * uVar7;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar15;
        while (plVar10 != (long *)0x0) {
          uVar14 = plVar10[1];
          if ((uVar7 & uVar8) == 0) {
            uVar14 = uVar14 & uVar8;
          }
          else if (uVar7 <= uVar14) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar1 * uVar7;
          }
          plVar11 = plVar10;
          if (uVar14 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar15;
              uVar9 = uVar14;
            }
            else {
              *plVar15 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar10;
              plVar11 = plVar15;
            }
          }
          plVar15 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar7 < uVar6) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar6) {
        if (uVar7 != 0) goto LAB_109f9ef64;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = param_1[1];
      }
    }
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar6 <= uVar16) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar16 / uVar6;
        }
        unaff_x24 = uVar16 - uVar7 * uVar6;
      }
    }
  }
  lVar3 = *param_1;
  plVar15 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = param_1 + 2;
    *plVar4 = *plVar15;
    *plVar15 = (long)plVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar15;
    if (*plVar4 == 0) goto LAB_109f9f144;
    uVar16 = *(ulong *)(*plVar4 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar16 = uVar16 & uVar6 - 1;
    }
    else if (uVar6 <= uVar16) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar16 / uVar6;
      }
      uVar16 = uVar16 - uVar7 * uVar6;
    }
    plVar15 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar4 = *plVar15;
  }
  *plVar15 = (long)plVar4;
LAB_109f9f144:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 109f9eca4; end: 109f9eddf;  */

long * FUN_109f9eca4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar7 = (uint)(param_2 >> 0x20);
  iVar6 = (int)param_2;
  if (param_2 == 0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return plVar4;
  }
  if (uVar7 >> 0x1d == 0) {
    lVar3 = param_2 << 3;
    __Znwm();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    uVar8 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    plVar11 = (long *)param_1[2];
    if (plVar11 == (long *)0x0) {
      return plVar4;
    }
    uVar8 = plVar11[1];
    uVar9 = param_2 - 1;
    if ((param_2 & uVar9) == 0) {
      uVar8 = uVar8 & uVar9;
    }
    else if (param_2 <= uVar8) {
      uVar15 = 0;
      if (param_2 != 0) {
        uVar15 = uVar8 / param_2;
      }
      uVar8 = uVar8 - uVar15 * param_2;
    }
    *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
    plVar13 = (long *)*plVar11;
    while (plVar13 != (long *)0x0) {
      uVar15 = plVar13[1];
      if ((param_2 & uVar9) == 0) {
        uVar15 = uVar15 & uVar9;
      }
      else if (param_2 <= uVar15) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar15 / param_2;
        }
        uVar15 = uVar15 - uVar12 * param_2;
      }
      plVar14 = plVar13;
      if (uVar15 != uVar8) {
        lVar3 = *param_1;
        if (*(long *)(lVar3 + uVar15 * 8) == 0) {
          *(long **)(lVar3 + uVar15 * 8) = plVar11;
          uVar8 = uVar15;
        }
        else {
          *plVar11 = *plVar13;
          *plVar13 = **(undefined8 **)(lVar3 + uVar15 * 8);
          **(long **)(lVar3 + uVar15 * 8) = (long)plVar13;
          plVar14 = plVar11;
        }
      }
      plVar11 = plVar14;
      plVar13 = (long *)*plVar14;
    }
    return plVar4;
  }
  func_0x000104c4f740();
  uVar8 = ((ulong)(uint)(iVar6 << 3) + 8 ^ (ulong)uVar7) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar7 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar9 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar15 = uVar8 - 1;
    if ((uVar8 & uVar15) == 0) {
      unaff_x24 = uVar15 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar12 * uVar8;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar12 = plVar4[1];
        if (uVar12 == uVar9) {
          if (plVar4[2] == CONCAT44(uVar7,iVar6)) {
            return plVar4;
          }
        }
        else {
          if ((uVar8 & uVar15) == 0) {
            uVar12 = uVar12 & uVar15;
          }
          else if (uVar8 <= uVar12) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar10 * uVar8;
          }
          if (uVar12 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x20;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar9;
  plVar4[2] = *param_3;
  plVar4[3] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar15 = 1;
    if (2 < uVar8) {
      uVar15 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar15 = uVar15 | uVar8 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar15) {
LAB_109f9ef64:
      if (uVar15 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109f9f1ac);
        (*pcVar2)();
      }
      lVar3 = uVar15 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar3;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar15;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar15 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar15;
      if (plVar11 != (long *)0x0) {
        uVar12 = plVar11[1];
        uVar10 = uVar15 - 1;
        if ((uVar15 & uVar10) == 0) {
          uVar12 = uVar12 & uVar10;
        }
        else if (uVar15 <= uVar12) {
          uVar16 = 0;
          if (uVar15 != 0) {
            uVar16 = uVar12 / uVar15;
          }
          uVar12 = uVar12 - uVar16 * uVar15;
        }
        *(long **)(*param_1 + uVar12 * 8) = param_1 + 2;
        plVar13 = (long *)*plVar11;
        while (plVar13 != (long *)0x0) {
          uVar16 = plVar13[1];
          if ((uVar15 & uVar10) == 0) {
            uVar16 = uVar16 & uVar10;
          }
          else if (uVar15 <= uVar16) {
            uVar1 = 0;
            if (uVar15 != 0) {
              uVar1 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar1 * uVar15;
          }
          plVar14 = plVar13;
          if (uVar16 != uVar12) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar16 * 8) == 0) {
              *(long **)(lVar3 + uVar16 * 8) = plVar11;
              uVar12 = uVar16;
            }
            else {
              *plVar11 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar3 + uVar16 * 8);
              **(long **)(lVar3 + uVar16 * 8) = (long)plVar13;
              plVar14 = plVar11;
            }
          }
          plVar11 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (uVar15 < uVar8) {
      uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar12) {
        uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
      }
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      if (uVar15 < uVar8) {
        if (uVar15 != 0) goto LAB_109f9ef64;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar15 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar4 = *plVar11;
    *plVar11 = (long)plVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar4 == 0) goto LAB_109f9f144;
    uVar9 = *(ulong *)(*plVar4 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar15 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar4 = *plVar11;
  }
  *plVar11 = (long)plVar4;
LAB_109f9f144:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 109f9ede0; end: 109f9f1bf;  */

long * FUN_109f9ede0(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = *param_3;
  plVar9[3] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_109f9ef64:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109f9f1ac);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_109f9ef64;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_109f9f144;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_109f9f144:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 109f9f1c0; end: 109f9f8c7;  */

/* WARNING: Possible PIC construction at 0x000109f9f350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f9f354) */
/* WARNING: Removing unreachable block (ram,0x000109f9f3ec) */
/* WARNING: Removing unreachable block (ram,0x000109f9f3f0) */
/* WARNING: Removing unreachable block (ram,0x000109f9f41c) */
/* WARNING: Removing unreachable block (ram,0x000109f9f424) */
/* WARNING: Removing unreachable block (ram,0x000109f9f42c) */
/* WARNING: Removing unreachable block (ram,0x000109f9f434) */
/* WARNING: Removing unreachable block (ram,0x000109f9f43c) */
/* WARNING: Removing unreachable block (ram,0x000109f9f444) */
/* WARNING: Removing unreachable block (ram,0x000109f9f44c) */
/* WARNING: Removing unreachable block (ram,0x000109f9f454) */
/* WARNING: Removing unreachable block (ram,0x000109f9f4b8) */
/* WARNING: Removing unreachable block (ram,0x000109f9f464) */
/* WARNING: Removing unreachable block (ram,0x000109f9f524) */
/* WARNING: Removing unreachable block (ram,0x000109f9f52c) */

long ***** FUN_109f9f1c0(long *****param_1,long *****param_2,long *****param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  long ***ppplVar3;
  long *****ppppplVar4;
  ulong *puVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *****unaff_x19;
  long *****unaff_x20;
  long *****unaff_x21;
  long ***ppplVar12;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  long *****ppppplVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_3d8 [32];
  undefined2 uStack_3b8;
  long ****pppplStack_3b0;
  long ****pppplStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [32];
  long ****pppplStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  ulong auStack_350 [2];
  char cStack_339;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  undefined1 auStack_190 [128];
  long ****pppplStack_110;
  ulong uStack_108;
  long ***appplStack_100 [17];
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = param_1;
  ppppplVar7 = param_2;
  if (param_2 == (long *****)0x0) {
LAB_109f9f2c8:
    param_1 = unaff_x20;
    ppppplVar13 = (long *****)0x0;
    param_2 = ppppplVar7;
  }
  else {
    ppppplVar13 = (long *****)0x0;
    bVar2 = *(byte *)((long)param_2 + 4);
    uVar9 = (uint)bVar2;
    if (bVar2 < 7) {
      if (uVar9 == 2 || bVar2 < 2) {
        if (uVar9 < 2) {
          lVar11 = 0x798;
        }
        else {
          if (uVar9 != 2) goto LAB_109f9f7a8;
          lVar11 = 0x678;
        }
      }
      else if (uVar9 - 5 < 2) {
LAB_109f9f2dc:
        lVar11 = 0x768;
      }
      else {
        if (uVar9 != 3) goto LAB_109f9f7a8;
        lVar11 = 0x648;
      }
    }
    else {
      uVar10 = (uint)bVar2;
      if (10 < uVar10) {
        if (uVar10 - 0x11 < 2) {
          func_0x000107c31940(auStack_350,&UNK_10f62ae45);
          if ((*(byte *)((long)param_2 + 0xc) >> 1 & 1) == 0) {
            unaff_x21 = param_2;
            FUN_109eca058();
          }
          else {
            unaff_x21 = (long *****)(&UNK_10e05bf38 + (long)param_2[3]);
          }
          ppppplVar4 = unaff_x21;
          _strlen(unaff_x21);
          puVar5 = auStack_350;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,unaff_x21,ppppplVar4);
          uStack_368 = puVar5[1];
          pppplStack_370 = (long ****)*puVar5;
          uStack_360 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          if (cStack_339 < '\0') {
            __ZdlPv(auStack_350[0]);
          }
          ppppplVar7 = &pppplStack_370;
          ppppplVar4 = param_3;
          FUN_109f9d808(param_3,ppppplVar7);
          if (ppppplVar4 == (long *****)0x0) {
            unaff_x21 = (long *****)appplStack_100;
            uStack_108 = 0x1000000000;
            uVar8 = (ulong)*(uint *)(param_2 + 2);
            pppplStack_110 = (long ****)unaff_x21;
            if (*(uint *)(param_2 + 2) < 0x11) {
              puStack_1a0 = auStack_190;
              uStack_198 = 0x1000000000;
            }
            else {
              func_0x000107c2b01c(&pppplStack_110,unaff_x21,uVar8,8);
              uVar8 = (ulong)*(uint *)(param_2 + 2);
              puStack_1a0 = auStack_190;
              uStack_198 = 0x1000000000;
              if (0x10 < *(uint *)(param_2 + 2)) {
                func_0x000107c2b01c(&puStack_1a0,puStack_1a0,uVar8,8);
                uVar8 = (ulong)*(uint *)(param_2 + 2);
              }
            }
            unaff_x23 = auStack_190;
            if (uVar8 != 0) {
              lVar11 = 0;
              uVar15 = 0;
              do {
                lVar14 = *(long *)((long)param_2[6] + lVar11);
                if (2 < *(byte *)(lVar14 + 4) - 0xd) {
                  ppppplVar4 = param_1;
                  FUN_109f9f1c0(param_1,lVar14,param_3);
                  if (ppppplVar4 == (long *****)0x0) {
                    ppppplVar13 = (long *****)0x0;
                    ppppplVar7 = (long *****)0x0;
                    goto LAB_109f9f778;
                  }
                  func_0x000109d33d14(&pppplStack_110);
                  uVar8 = uStack_198 & 0xffffffff;
                  if (uStack_198 >> 0x20 <= uVar8) {
                    func_0x000107c2b01c(&puStack_1a0,auStack_190,uVar8 + 1,8);
                    uVar8 = uStack_198 & 0xffffffff;
                  }
                  *(long *)(puStack_1a0 + uVar8 * 8) = lVar14;
                  uStack_198 = CONCAT44(uStack_198._4_4_,(int)uStack_198 + 1);
                  uVar8 = (ulong)*(uint *)(param_2 + 2);
                }
                uVar15 = uVar15 + 1;
                lVar11 = lVar11 + 0x30;
              } while (uVar15 < uVar8);
            }
            FUN_109f48674();
            FUN_109d73510(auStack_350,&UNK_10f62aca9,0xd7);
            ppppplVar4 = param_1;
            FUN_109d9fa44(param_1,pppplStack_110,uStack_108 & 0xffffffff,0);
            puVar5 = auStack_350;
            FUN_109d73090(puVar5,ppppplVar4);
            lVar11 = ((ulong)param_2 & 0xffffffff) - *puVar5;
            if (*puVar5 <= ((ulong)param_2 & 0xffffffff) && lVar11 != 0) {
              pppplVar6 = *param_1 + 0xed;
              FUN_109d9ffc0(pppplVar6,lVar11);
              func_0x000109d33d14(&pppplStack_110,pppplVar6);
            }
            FUN_109d7300c(auStack_350);
            ppppplVar4 = (long *****)pppplStack_370;
            if (-1 < (long)uStack_360._7_1_) {
              ppppplVar4 = &pppplStack_370;
            }
            uVar8 = uStack_368;
            if (-1 < (long)uStack_360) {
              uVar8 = (long)uStack_360._7_1_;
            }
            ppppplVar13 = param_1;
            FUN_109d9fe2c(param_1,ppppplVar4,uVar8);
            FUN_109d9fb38();
            ppppplVar7 = &pppplStack_370;
            FUN_109f9e23c(param_3,ppppplVar7,&pppplStack_370);
            param_3[5] = (long ****)ppppplVar13;
LAB_109f9f778:
            if (puStack_1a0 != unaff_x23) {
              _free();
            }
            ppppplVar4 = (long *****)pppplStack_110;
            if ((long *****)pppplStack_110 != unaff_x21) {
              _free();
            }
          }
          else {
            ppppplVar13 = (long *****)ppppplVar4[5];
          }
          param_2 = ppppplVar7;
          if ((long)uStack_360 < 0) {
            ppppplVar4 = (long *****)pppplStack_370;
            __ZdlPv();
            param_2 = ppppplVar7;
          }
        }
        else {
          if (uVar10 == 0xb) goto LAB_109f9f2dc;
          if (uVar9 == 0x13) {
            ppppplVar7 = (long *****)param_2[6];
            FUN_109f9f1c0(param_1,ppppplVar7,param_3);
            unaff_x20 = param_1;
            if (ppppplVar4 != (long *****)0x0) {
              uVar9 = *(uint *)(param_2 + 2);
              if (uVar9 < 2) {
                uVar9 = 1;
              }
              param_2 = (long *****)(ulong)uVar9;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                ppplVar12 = **ppppplVar4;
                ppplVar3 = ppplVar12 + 0x11d;
                FUN_109da1348(ppplVar3,&stack0xffffffffffffffc0);
                ppppplVar7 = (long *****)ppplVar3[2];
                if (ppppplVar7 == (long *****)0x0) {
                  ppppplVar7 = (long *****)(ppplVar12 + 0xfd);
                  FUN_109d34148(ppppplVar7,0x28,3);
                  *ppppplVar7 = *ppppplVar4;
                  ppppplVar7[3] = (long ****)ppppplVar4;
                  ppppplVar7[4] = (long ****)param_2;
                  ppppplVar7[2] = (long ****)(ppppplVar7 + 3);
                  ppppplVar7[1] = (long ****)0x100000011;
                  ppplVar3[2] = (long **)ppppplVar7;
                }
                return ppppplVar7;
              }
              goto LAB_109f9f7e8;
            }
            goto LAB_109f9f2c8;
          }
        }
        goto LAB_109f9f7a8;
      }
      if (uVar9 - 7 < 2) {
        lVar11 = 0x780;
      }
      else {
        if (1 < uVar9 - 9) goto LAB_109f9f7a8;
        lVar11 = 0x7b0;
      }
    }
    ppppplVar13 = (long *****)((long)*param_1 + lVar11);
    unaff_x23 = (undefined1 *)(ulong)*(byte *)((long)param_2 + 0xe);
    bVar2 = *(byte *)((long)param_2 + 0xd);
    if (1 < *(byte *)((long)param_2 + 0xe)) {
      unaff_x30 = 0x109f9f354;
      register0x00000008 = (BADSPACEBASE *)auStack_390;
      unaff_x19 = param_3;
      unaff_x20 = param_1;
      unaff_x22 = (ulong)bVar2;
      unaff_x29 = puVar1;
SUB_109da00ec:
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long ******)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long ******)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long ******)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      ppplVar12 = **ppppplVar13;
      *(long ******)((long)register0x00000008 + -0x40) = ppppplVar13;
      *(ulong *)((long)register0x00000008 + -0x38) = (ulong)bVar2;
      ppplVar3 = ppplVar12 + 0x120;
      FUN_109da1690(ppplVar3,(undefined1 *)((long)register0x00000008 + -0x40));
      ppppplVar4 = (long *****)ppplVar3[2];
      if (ppppplVar4 == (long *****)0x0) {
        ppppplVar4 = (long *****)(ppplVar12 + 0xfd);
        FUN_109d34148(ppppplVar4,0x28,3);
        *ppppplVar4 = *ppppplVar13;
        ppppplVar4[3] = (long ****)ppppplVar13;
        *(uint *)(ppppplVar4 + 4) = (uint)bVar2;
        ppppplVar4[2] = (long ****)(ppppplVar4 + 3);
        ppppplVar4[1] = (long ****)0x100000012;
        ppplVar3[2] = (long **)ppppplVar4;
      }
      return ppppplVar4;
    }
    if (1 < bVar2) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto SUB_109da00ec;
      goto LAB_109f9f7e8;
    }
  }
LAB_109f9f7a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppppplVar13;
  }
LAB_109f9f7e8:
  ___stack_chk_fail();
  if (puStack_1a0 != unaff_x23) {
    _free();
  }
  if ((long *****)pppplStack_110 != unaff_x21) {
    _free();
  }
  if ((long)uStack_360 < 0) {
    __ZdlPv(pppplStack_370);
  }
  ppppplVar7 = ppppplVar4;
  __Unwind_Resume(ppppplVar4);
  pcStack_398 = FUN_109f9f8c8;
  pppplStack_3b0 = (long ****)param_1;
  pppplStack_3a8 = (long ****)ppppplVar4;
  puStack_3a0 = puVar1;
  FUN_109d38b9c(param_2,0);
  uStack_3b8 = 0x101;
  FUN_109fab914(ppppplVar7,param_2,auStack_3d8);
  return ppppplVar7;
}



/* Entry: 109f9f8c8; end: 109f9f90f;  */

void FUN_109f9f8c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined2 uStack_28;
  
  FUN_109d38b9c(param_2,0);
  uStack_28 = 0x101;
  FUN_109fab914(param_1,param_2,auStack_48);
  return;
}



/* Entry: 109f9f910; end: 109fa1afb;  */

/* WARNING: Removing unreachable block (ram,0x000109fa0574) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f9f910(undefined8 *param_1,float *******param_2,float *******param_3)

{
  undefined *puVar1;
  float ***pppfVar2;
  float ***pppfVar3;
  byte bVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  float *****pppppfVar9;
  float ****ppppfVar10;
  undefined8 *puVar11;
  float *******pppppppfVar12;
  float ******ppppppfVar13;
  float *******pppppppfVar14;
  float *******pppppppfVar15;
  float ******ppppppfVar16;
  float *******pppppppfVar17;
  float *******pppppppfVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  float *****pppppfVar23;
  float ****ppppfVar24;
  long lVar25;
  long lVar26;
  float ***pppfVar27;
  ulong uVar28;
  float ******ppppppfVar29;
  bool bVar30;
  float *****pppppfVar31;
  float ******ppppppfVar32;
  float *******pppppppfVar33;
  undefined1 uVar34;
  float *******pppppppfVar35;
  ulong uVar36;
  float *******unaff_x23;
  undefined *puVar37;
  undefined8 uVar38;
  float *******unaff_x26;
  float *******unaff_x27;
  float *******unaff_x28;
  float fVar39;
  float *******pppppppfStack_1f8;
  float *******pppppppfStack_1f0;
  ulong uStack_1e8;
  float *******pppppppfStack_1e0;
  float *******pppppppfStack_1d8;
  float ******ppppppfStack_1d0;
  float ******ppppppfStack_1c8;
  float *******pppppppfStack_1c0;
  undefined8 *******pppppppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  float *******pppppppfStack_198;
  undefined7 uStack_190;
  char cStack_189;
  undefined7 uStack_188;
  undefined7 uStack_180;
  char cStack_179;
  undefined7 uStack_178;
  float ******ppppppfStack_170;
  float ******ppppppfStack_168;
  char cStack_159;
  float *******pppppppfStack_158;
  float *******pppppppfStack_150;
  undefined7 uStack_148;
  char cStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined8 uStack_130;
  float *******pppppppfStack_128;
  float ******appppppfStack_120 [8];
  float *******pppppppfStack_e0;
  float *******pppppppfStack_d8;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  char cStack_b8;
  long lStack_88;
  
  pppppppfVar17 = (float *******)&pppppppfStack_e0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar20 = *(int *)(param_3 + 3);
  if (iVar20 < 5) {
    if (iVar20 < 3) {
      if (iVar20 == 0) {
        FUN_109fa1afc(&pppppppfStack_e0,param_2);
LAB_109f9fab4:
        if (cStack_b8 == '\x01') goto LAB_109fa0450;
        *(undefined4 *)param_1 = pppppppfStack_e0._0_4_;
        param_1[1] = pppppppfStack_d8;
        param_1[2] = CONCAT17(uStack_d0._7_1_,(undefined7)uStack_d0);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_c8,uStack_d0._7_1_);
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_c1;
        param_1[4] = CONCAT62(uStack_be,uStack_c0);
        *(undefined1 *)(param_1 + 5) = 0;
        param_3 = unaff_x28;
        goto LAB_109fa0468;
      }
      if (iVar20 == 1) goto LAB_109fa0450;
    }
    else {
      if (iVar20 == 3) {
        FUN_109fa511c(&pppppppfStack_e0,param_2);
        goto LAB_109f9fab4;
      }
      if (iVar20 == 4) {
        uVar22 = *(uint *)(param_3 + 5);
        if ((int)uVar22 < 0x60) {
          if (uVar22 - 0x59 < 6) {
            if (param_3[0x13] != (float ******)0x0) {
              pppppppfVar33 = param_2 + 6;
              FUN_109fab870(pppppppfVar33,*(undefined4 *)(param_3[0x13] + 3));
              if ((pppppppfVar33 != (float *******)0x0) &&
                 (pppppppfVar33 = (float *******)pppppppfVar33[3],
                 pppppppfVar33 != (float *******)0x0)) {
                puVar37 = &UNK_10f62b5ac;
                if (uVar22 != 0x5a) {
                  puVar37 = &UNK_10f62b5b5;
                }
                puVar1 = &UNK_10f62b5ac;
                if ((uVar22 | 2) != 0x5b) {
                  puVar1 = puVar37;
                }
                pppppppfVar35 = (float *******)*pppppppfVar33;
                if ((pppppppfVar35 == (float *******)0x0 || *(char *)(pppppppfVar35 + 1) != '\x12')
                   || (2 < *(int *)(pppppppfVar35 + 4) - 2U)) {
                  puVar37 = &UNK_10f62b4a0;
                  uVar38 = 3;
                }
                else {
                  puVar37 = (&PTR_DAT_110b96820)[*(int *)(pppppppfVar35 + 4) - 2U];
                  uVar38 = 5;
                }
                func_0x000107c31940(&pppppppfStack_158,puVar1);
                pppppppfVar17 = (float *******)&pppppppfStack_158;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppfVar17,&DAT_10f62a9de,1);
                pppppppfStack_d8 = (float *******)pppppppfVar17[1];
                pppppppfStack_e0 = (float *******)*pppppppfVar17;
                uStack_d0._0_7_ = SUB87(pppppppfVar17[2],0);
                uStack_d0._7_1_ = (char)((ulong)pppppppfVar17[2] >> 0x38);
                pppppppfVar17[1] = (float ******)0x0;
                pppppppfVar17[2] = (float ******)0x0;
                *pppppppfVar17 = (float ******)0x0;
                func_0x000104c54c8c(&pppppppuStack_1b0,puVar37,uVar38);
                pppppppuVar6 = pppppppuStack_1b0;
                if (-1 < (char)bStack_199) {
                  uStack_1a8 = (ulong)bStack_199;
                  pppppppuVar6 = &pppppppuStack_1b0;
                }
                pppppppfVar17 = (float *******)&pppppppfStack_e0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppfVar17,pppppppuVar6,uStack_1a8);
                pppppppfStack_128 = (float *******)pppppppfVar17[1];
                uStack_130 = (float *******)*pppppppfVar17;
                appppppfStack_120[0] = pppppppfVar17[2];
                pppppppfVar17[1] = (float ******)0x0;
                pppppppfVar17[2] = (float ******)0x0;
                *pppppppfVar17 = (float ******)0x0;
                if ((char)bStack_199 < '\0') {
                  __ZdlPv(pppppppuStack_1b0);
                }
                if (cStack_141 < '\0') {
                  __ZdlPv(pppppppfStack_158);
                }
                ppppppfVar16 = appppppfStack_120[0];
                pppppppfVar17 = pppppppfStack_128;
                pppppppfVar12 = uStack_130;
                unaff_x23 = (float *******)param_2[1];
                pppppppfVar15 = (float *******)((ulong)appppppfStack_120[0] >> 0x38);
                pppppppfStack_e0 = pppppppfVar35;
                FUN_109d9f92c(pppppppfVar35,&pppppppfStack_e0,1,0);
                pppppppfVar14 = pppppppfVar17;
                if (-1 < (long)ppppppfVar16) {
                  pppppppfVar12 = (float *******)&uStack_130;
                  pppppppfVar14 = pppppppfVar15;
                }
                FUN_109d9d3e8(unaff_x23,pppppppfVar12,pppppppfVar14,pppppppfVar35,0);
                if (((pppppppfVar12 != (float *******)0x0) && (*(char *)(pppppppfVar12 + 2) == '\0')
                    ) && ((float *******)pppppppfVar12[9] == pppppppfVar12 + 9)) {
                  pppppppfVar17 = pppppppfVar12 + 0xe;
                  pppppppfVar35 = pppppppfVar17;
                  FUN_109d5ab08(pppppppfVar17,**pppppppfVar12,0xffffffff,6);
                  pppppppfVar12[0xe] = (float ******)pppppppfVar35;
                  pppppppfVar35 = pppppppfVar17;
                  FUN_109d5ab08(pppppppfVar17,**pppppppfVar12,0xffffffff,0xf);
                  pppppppfVar12[0xe] = (float ******)pppppppfVar35;
                  pppppppfVar35 = pppppppfVar17;
                  FUN_109d5ab08(pppppppfVar17,**pppppppfVar12,0xffffffff,0x24);
                  pppppppfVar12[0xe] = (float ******)pppppppfVar35;
                  pppppppfVar35 = pppppppfVar17;
                  FUN_109d5ab08(pppppppfVar17,**pppppppfVar12,0xffffffff,0x42);
                  pppppppfVar12[0xe] = (float ******)pppppppfVar35;
                  *(uint *)(pppppppfVar12 + 4) = *(uint *)(pppppppfVar12 + 4) & 0xffffff3f | 0x40;
                }
                ppppppfVar32 = param_2[2];
                uStack_c0 = 0x101;
                pppppppfStack_158 = pppppppfVar33;
                FUN_109d5ce48(ppppppfVar32,unaff_x23,pppppppfVar12,&pppppppfStack_158,1,
                              &pppppppfStack_e0,0);
                *(ushort *)((long)ppppppfVar32 + 0x12) =
                     *(ushort *)((long)ppppppfVar32 + 0x12) & 0xfffc | 1;
                *(byte *)((long)ppppppfVar32 + 0x11) = *(byte *)((long)ppppppfVar32 + 0x11) | 0xfe;
                ppppppfVar16 = ppppppfVar32 + 8;
                FUN_109d5ab08(ppppppfVar16,**ppppppfVar32,0xffffffff,6);
                ppppppfVar32[8] = (float *****)ppppppfVar16;
                ppppppfVar16 = ppppppfVar32 + 8;
                FUN_109d5ab08(ppppppfVar16,**ppppppfVar32,0xffffffff,0x24);
                ppppppfVar32[8] = (float *****)ppppppfVar16;
                ppppppfVar16 = ppppppfVar32 + 8;
                FUN_109d5ab08(ppppppfVar16,**ppppppfVar32,0xffffffff,0x42);
                ppppppfVar32[8] = (float *****)ppppppfVar16;
                unaff_x28 = param_3 + 9;
                pppppppfVar33 = param_2 + 6;
                FUN_109fab460(pppppppfVar33,*(undefined4 *)unaff_x28,unaff_x28);
                pppppppfVar33[3] = ppppppfVar32;
                if (-1 < (long)appppppfStack_120[0]) goto LAB_109fa0450;
                __ZdlPv(uStack_130);
                goto LAB_109fa0450;
              }
            }
            func_0x000107c31940(&uStack_130,&UNK_10f62b580);
            FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b964b8);
            goto LAB_109fa0950;
          }
        }
        else {
          unaff_x28 = param_3;
          if ((int)uVar22 < 0x26f) {
            if (uVar22 == 0x60) {
LAB_109fa02a0:
              ppppfVar24 = ***param_2 + 0xc3;
              FUN_109d9f92c(ppppfVar24,0,0,0);
              ppppppfVar16 = param_2[1];
              puVar8 = (undefined8 *)&UNK_10f62b4b6;
              FUN_109d9d3e8(ppppppfVar16,&UNK_10f62b4b6,0x14,ppppfVar24,0);
              if (*(char *)(puVar8 + 2) == '\0' && puVar8 != (undefined8 *)0x0) {
                puVar11 = puVar8 + 0xe;
                FUN_109d5ab08(puVar11,*(undefined8 *)*puVar8,0xffffffff,0xf);
                puVar8[0xe] = puVar11;
                puVar11 = puVar8 + 0xe;
                FUN_109d5ab08(puVar11,*(undefined8 *)*puVar8,0xffffffff,0x24);
                puVar8[0xe] = puVar11;
                puVar11 = puVar8 + 0xe;
                FUN_109d5ab08(puVar11,*(undefined8 *)*puVar8,0xffffffff,0x42);
                puVar8[0xe] = puVar11;
                *(uint *)(puVar8 + 4) = *(uint *)(puVar8 + 4) & 0xffffff3f | 0x40;
              }
              param_2 = (float *******)param_2[2];
              uStack_c0 = 0x101;
              FUN_109d5ce48(param_2,ppppppfVar16,puVar8,0,0,&pppppppfStack_e0,0);
              *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) & 0xfffc | 1;
              pppppppfVar33 = param_2 + 8;
              FUN_109d5ab08(pppppppfVar33,**param_2,0xffffffff,0x24);
              param_2[8] = (float ******)pppppppfVar33;
              pppppppfVar33 = param_2 + 8;
              FUN_109d5ab08(pppppppfVar33,**param_2,0xffffffff,0x42);
              param_2[8] = (float ******)pppppppfVar33;
              goto LAB_109fa0450;
            }
            if (uVar22 == 0x61) {
LAB_109f9ffac:
              if (param_3[0x13] != (float ******)0x0) {
                pppppppfVar33 = param_2 + 6;
                FUN_109fab870(pppppppfVar33,*(undefined4 *)(param_3[0x13] + 3));
                if ((pppppppfVar33 != (float *******)0x0) &&
                   (ppppppfVar16 = pppppppfVar33[3], ppppppfVar16 != (float ******)0x0)) {
                  pppppfVar23 = *ppppppfVar16;
                  pppppfVar31 = **param_2;
                  ppppppfVar32 = ppppppfVar16;
                  if (pppppfVar23 != (float *****)(*pppppfVar31 + 0xea)) {
                    ppppppfVar32 = param_2[2];
                    FUN_109d666e0(pppppfVar23);
                    uStack_c0 = 0x101;
                    FUN_109d3488c(ppppppfVar32,0x21,ppppppfVar16,pppppfVar23,&pppppppfStack_e0);
                    pppppfVar31 = **param_2;
                  }
                  pppppppfVar33 = param_2 + 2;
                  ppppfVar24 = (*pppppppfVar33)[6][7];
                  uStack_c0 = 0x101;
                  FUN_109d38918(pppppfVar31,&pppppppfStack_e0,ppppfVar24,0);
                  pppppfVar9 = **param_2;
                  uStack_c0 = 0x101;
                  FUN_109d38918(pppppfVar9,&pppppppfStack_e0,ppppfVar24,0);
                  pppppppfVar17 = (float *******)*pppppppfVar33;
                  pppppfVar23 = pppppfVar31;
                  FUN_109d38c10(pppppfVar31,pppppfVar9,ppppppfVar32,0);
                  uStack_c0 = 0x101;
                  FUN_109fab914(pppppppfVar17,pppppfVar23,&pppppppfStack_e0);
                  ppppppfVar16 = *pppppppfVar33;
                  ppppppfVar16[6] = pppppfVar31;
                  ppppppfVar16[7] = pppppfVar31 + 5;
                  ppppfVar24 = ***param_2 + 0xc3;
                  FUN_109d9f92c(ppppfVar24,0,0,0);
                  unaff_x23 = (float *******)param_2[1];
                  puVar8 = (undefined8 *)&UNK_10f62b4b6;
                  FUN_109d9d3e8(unaff_x23,&UNK_10f62b4b6,0x14,ppppfVar24,0);
                  if ((*(char *)(puVar8 + 2) == '\0') && (puVar8 != (undefined8 *)0x0)) {
                    pppppppfVar17 = (float *******)(puVar8 + 0xe);
                    pppppppfVar33 = pppppppfVar17;
                    FUN_109d5ab08(pppppppfVar17,*(undefined8 *)*puVar8,0xffffffff,0xf);
                    *pppppppfVar17 = (float ******)pppppppfVar33;
                    pppppppfVar33 = pppppppfVar17;
                    FUN_109d5ab08(pppppppfVar17,*(undefined8 *)*puVar8,0xffffffff,0x24);
                    *pppppppfVar17 = (float ******)pppppppfVar33;
                    pppppppfVar33 = pppppppfVar17;
                    FUN_109d5ab08(pppppppfVar17,*(undefined8 *)*puVar8,0xffffffff,0x42);
                    *pppppppfVar17 = (float ******)pppppppfVar33;
                    *(uint *)(puVar8 + 4) = *(uint *)(puVar8 + 4) & 0xffffff3f | 0x40;
                  }
                  param_2 = param_2 + 2;
                  ppppppfVar32 = *param_2;
                  uStack_c0 = 0x101;
                  FUN_109d5ce48(ppppppfVar32,unaff_x23,puVar8,0,0,&pppppppfStack_e0,0);
                  *(ushort *)((long)ppppppfVar32 + 0x12) =
                       *(ushort *)((long)ppppppfVar32 + 0x12) & 0xfffc | 1;
                  ppppppfVar16 = ppppppfVar32 + 8;
                  FUN_109d5ab08(ppppppfVar16,**ppppppfVar32,0xffffffff,0x24);
                  ppppppfVar32[8] = (float *****)ppppppfVar16;
                  ppppppfVar16 = ppppppfVar32 + 8;
                  FUN_109d5ab08(ppppppfVar16,**ppppppfVar32,0xffffffff,0x42);
                  ppppppfVar32[8] = (float *****)ppppppfVar16;
                  ppppppfVar16 = *param_2;
                  pppppfVar23 = pppppfVar9;
                  FUN_109d38b9c(pppppfVar9,0);
                  uStack_c0 = 0x101;
                  FUN_109fab914(ppppppfVar16,pppppfVar23,&pppppppfStack_e0);
                  ppppppfVar16 = *param_2;
                  ppppppfVar16[6] = pppppfVar9;
                  ppppppfVar16[7] = pppppfVar9 + 5;
                  goto LAB_109fa0450;
                }
              }
              func_0x000107c31940(&uStack_130,&UNK_10f62b4cb);
              FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b964a0);
              goto LAB_109fa0950;
            }
            if (uVar22 == 0x112) {
              unaff_x26 = (float *******)*param_3[0x13];
              pppppppfVar33 = unaff_x26;
              while( true ) {
                if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
                if (*(int *)(pppppppfVar33 + 5) == 0) break;
                if (pppppppfVar33[10] == (float ******)0x0) goto LAB_109fa0450;
                pppppppfVar33 = (float *******)*pppppppfVar33[10];
                if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
                if (*(int *)(pppppppfVar33 + 3) != 1) goto LAB_109fa0450;
              }
              pppppppfVar17 = (float *******)pppppppfVar33[7];
              pppppppfStack_198 = pppppppfVar17;
              if (pppppppfVar17 == (float *******)0x0) goto LAB_109fa0450;
              unaff_x23 = (float *******)*param_2;
              ppppppfVar16 = unaff_x23[1];
              pppppppfVar33 = (float *******)param_2[2];
              ppppppfVar32 = pppppppfVar17[4];
              if (((uint)ppppppfVar32 >> 2 & 1) != 0) {
                ppppppfVar29 = param_2[0xb];
                FUN_109faa2a4(ppppppfVar29,param_2[0xc],pppppppfVar17);
                if (ppppppfVar29 != (float ******)0x0) goto LAB_109fa0880;
              }
              if (((ulong)ppppppfVar32 & 5) != 0) {
                ppppppfVar29 = param_2[0xb];
                FUN_109faa2a4(ppppppfVar29,param_2[0xc],pppppppfVar17);
                if (ppppppfVar29 != (float ******)0x0) goto LAB_109fa0880;
              }
              if (((ulong)ppppppfVar32 >> 0x27 & 1) != 0) {
                ppppppfVar29 = param_2[0xb];
                FUN_109faa2a4(ppppppfVar29,param_2[0xc],pppppppfVar17);
                if (ppppppfVar29 != (float ******)0x0) {
LAB_109fa0880:
                  ppppppfVar16 = (float ******)ppppppfVar29[3];
                  if (ppppppfVar16 == (float ******)0x0) goto LAB_109fa0450;
                  unaff_x28 = param_3 + 9;
                  pppppppfVar33 = param_2 + 6;
                  FUN_109fab460(pppppppfVar33,*(undefined4 *)unaff_x28,unaff_x28);
                  pppppppfVar33[3] = ppppppfVar16;
                  goto LAB_109fa0450;
                }
              }
              pppppppfStack_1c0 = pppppppfVar33;
              if ((((ulong)ppppppfVar32 & 0x1fffff) == 0x40000) &&
                 (pppppppfVar35 = param_2, FUN_109fa90d0(param_2,unaff_x26),
                 pppppppfVar35 != (float *******)0x0)) {
                pppppppfVar12 = (float *******)*unaff_x23;
                FUN_109f9f1c0(pppppppfVar12,unaff_x26[6],unaff_x23 + 0x38);
                if (pppppppfVar12 != (float *******)0x0) {
                  ppppppfVar16 = param_2[1] + 0x20;
                  FUN_109d73128(ppppppfVar16,pppppppfVar12,1);
                  uStack_c0 = 0x101;
                  FUN_109d5d1c0(pppppppfVar33,pppppppfVar12,pppppppfVar35,
                                (ulong)ppppppfVar16 & 0xff | 0x100,0,&pppppppfStack_e0);
                  unaff_x27 = pppppppfVar12;
                  if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
                  unaff_x28 = param_3 + 9;
                  pppppppfVar35 = param_2 + 6;
                  FUN_109fab460(pppppppfVar35,*(undefined4 *)unaff_x28,unaff_x28);
                  pppppppfVar12 = unaff_x23;
                  goto LAB_109fa044c;
                }
              }
              ppppppfVar32 = ppppppfVar16 + 0x81;
              pppppppfStack_e0 = pppppppfVar17;
              FUN_109f97eec(ppppppfVar32,&pppppppfStack_e0);
              if (ppppppfVar32 != (float ******)0x0) {
                pppppfVar23 = ppppppfVar16[0xd6];
                func_0x000107c31940(&pppppppuStack_1b0,&UNK_10f62b5e4);
                unaff_x27 = (float *******)ppppppfVar16[0x80];
                ppppppfStack_1c8 = unaff_x23[0x55];
                pppppppfStack_1d8 = unaff_x23 + 0x5b;
                pppppppfStack_1e0 = unaff_x23 + 0x65;
                ppppppfStack_1d0 = ppppppfVar16 + 0xc2;
                if ((pppppfVar23 != (float *****)0x0) &&
                   (pppppppfVar35 = (float *******)pppppppfVar17[3],
                   pppppppfVar35 != (float *******)0x0)) {
                  pppppppfStack_e0 = pppppppfVar35;
                  _strlen();
                  ppppppfVar32 = ppppppfVar16 + 0xda;
                  pppppppfStack_d8 = pppppppfVar35;
                  FUN_109f7f7d4(ppppppfVar32,&pppppppfStack_e0);
                  if (ppppppfVar32 != (float ******)0x0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&pppppppuStack_1b0,ppppppfVar32 + 4);
                  }
                  ppppppfVar32 = ppppppfVar16 + 0xd7;
                  FUN_109faa370(ppppppfVar32,&pppppppuStack_1b0);
                  if (ppppppfVar16 + 0xd8 != ppppppfVar32) {
                    unaff_x27 = (float *******)ppppppfVar32[7];
                  }
                  pppppppfVar35 = unaff_x23 + 0x6f;
                  FUN_109f9d808(pppppppfVar35,&pppppppuStack_1b0);
                  if (pppppppfVar35 != (float *******)0x0) {
                    ppppppfStack_1c8 = pppppppfVar35[5];
                  }
                  pppppppfVar35 = unaff_x23 + 0x74;
                  FUN_109faa3ec(pppppppfVar35,&pppppppuStack_1b0);
                  if (pppppppfVar35 != (float *******)0x0) {
                    pppppppfStack_1d8 = pppppppfVar35 + 5;
                  }
                  pppppppfVar35 = unaff_x23 + 0x79;
                  FUN_109faa3ec(pppppppfVar35,&pppppppuStack_1b0);
                  ppppppfVar32 = ppppppfVar16 + 0xd4;
                  FUN_109faa4d0(ppppppfVar32,&pppppppuStack_1b0);
                  if (pppppppfVar35 != (float *******)0x0) {
                    pppppppfStack_1e0 = pppppppfVar35 + 5;
                  }
                  if (ppppppfVar16 + 0xd5 != ppppppfVar32) {
                    ppppppfStack_1d0 = ppppppfVar32 + 7;
                  }
                }
                ppppppfVar32 = ppppppfVar16 + 0x7c;
                func_0x000109faa54c(ppppppfVar32,&pppppppuStack_1b0);
                if (ppppppfVar16 + 0x7d == ppppppfVar32) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = *(uint *)(ppppppfVar32 + 7);
                }
                ppppppfVar32 = param_2[0x18];
                for (ppppppfVar16 = ppppppfVar32; ppppppfVar16 != (float ******)0x0;
                    ppppppfVar16 = (float ******)*ppppppfVar16) {
                  if (*(uint *)(ppppppfVar16 + 4) <= uVar22) {
                    if (uVar22 <= *(uint *)(ppppppfVar16 + 4)) {
                      uStack_1e8 = (ulong)uVar22;
                      FUN_109fa940c();
                      pppppfVar23 = *ppppppfVar32;
                      if ((pppppfVar23 != (float *****)0x0) &&
                         (pppppppfVar35 = unaff_x23, FUN_109fa9458(unaff_x23,uVar22,unaff_x27),
                         -1 < (int)pppppppfVar35)) {
                        ppppppfVar16 = unaff_x23[0x58];
                        FUN_109fa9530(ppppppfVar16,uVar22);
                        pppppfVar31 = *ppppppfVar16;
                        pppppppfVar12 = (float *******)unaff_x23[0x43];
                        FUN_109d66880(pppppppfVar12,0,0);
                        pppppppfVar14 = (float *******)unaff_x23[0x42];
                        uStack_130 = pppppppfVar12;
                        FUN_109d66880(pppppppfVar14,(ulong)pppppppfVar35 & 0xffffffff,0);
                        uStack_c0 = 0x101;
                        pppppppfVar12 = pppppppfVar33;
                        pppppppfStack_128 = pppppppfVar14;
                        FUN_109faa5c8(pppppppfVar33,pppppfVar31,pppppfVar23,&uStack_130,2,
                                      &pppppppfStack_e0);
                        unaff_x27 = pppppppfVar35;
                        if (ppppppfStack_1c8 != (float ******)0x0) {
                          ppppppfVar16 = ppppppfStack_1c8;
                          func_0x000109da017c(ppppppfStack_1c8,2);
                          uStack_c0 = 0x101;
                          pppppppfStack_1f0 = pppppppfVar33;
                          FUN_109d5d1c0(pppppppfVar33,ppppppfVar16,pppppppfVar12,0x103,0,
                                        &pppppppfStack_e0);
                          pppppppfVar33 = unaff_x23 + 2;
                          FUN_109fa957c(pppppppfVar33,uVar22);
                          FUN_109d97dec(pppppppfStack_1f0,1,pppppppfVar33);
                          ppppppfVar16 = param_2[3];
                          if ((*(byte *)((long)ppppppfVar16 + 0x17) >> 4 & 1) == 0) {
                            unaff_x27 = (float *******)0x0;
                            ppppppfVar32 = (float ******)&UNK_10f5fa524;
                          }
                          else {
                            func_0x000109da271c();
                            ppppppfVar32 = ppppppfVar16 + 2;
                            unaff_x27 = (float *******)*ppppppfVar16;
                          }
                          ppppppfVar16 = param_2[0x1b];
                          FUN_109fa9db0(ppppppfVar16,uVar22);
                          pppppppfVar33 = unaff_x23 + 2;
                          FUN_109fa9650(pppppppfVar33,ppppppfVar32,unaff_x27,
                                        *(undefined4 *)ppppppfVar16);
                          FUN_109d97dec(pppppppfStack_1f0,7,pppppppfVar33);
                          pppppfVar23 = *ppppppfStack_1d0;
                          lVar25 = (long)ppppppfStack_1d0[1] - (long)pppppfVar23;
                          if (lVar25 != 0) {
                            uVar36 = 0;
                            goto LAB_109fa1108;
                          }
                        }
                      }
                      break;
                    }
                    ppppppfVar16 = ppppppfVar16 + 1;
                  }
                }
                goto LAB_109fa0e1c;
              }
              ppppppfVar32 = pppppppfVar17[4];
              if (((ulong)ppppppfVar32 & 0x280) == 0) {
                pppppppfStack_e0 = pppppppfVar17;
                FUN_109f97eec(ppppppfVar16 + 0x9f,&pppppppfStack_e0);
                goto LAB_109fa0450;
              }
              pppppppfVar35 = param_2 + 0xb;
              ppppppfVar29 = *pppppppfVar35;
              FUN_109faa2a4(ppppppfVar29,param_2[0xc],pppppppfVar17);
              if (ppppppfVar29 == (float ******)0x0) {
                lVar25 = 0x658;
                if (((ulong)ppppppfVar32 & 0x80) != 0) {
                  lVar25 = 0x640;
                }
                puVar8 = *(undefined8 **)((long)ppppppfVar16 + lVar25);
                puVar11 = (undefined8 *)((undefined8 *)((long)ppppppfVar16 + lVar25))[1];
                while( true ) {
                  if (puVar8 == puVar11) goto LAB_109fa0450;
                  unaff_x27 = (float *******)*puVar8;
                  if ((unaff_x27 == pppppppfVar17) ||
                     (((ppppppfVar32 = unaff_x27[3], ppppppfVar32 != (float ******)0x0 &&
                       (pppppppfVar17[3] != (float ******)0x0)) &&
                      (_strcmp(), (int)ppppppfVar32 == 0)))) break;
                  puVar8 = puVar8 + 1;
                }
                ppppppfVar32 = ppppppfVar16 + 0x9a;
                pppppppfStack_158 = unaff_x27;
                func_0x000109f7d384(ppppppfVar32,&pppppppfStack_158);
                if (ppppppfVar32 == (float ******)0x0) goto LAB_109fa0450;
                if (*(char *)(pppppppfVar17 + 4) < '\0') {
                  ppppppfVar16 = ppppppfVar16 + 0x77;
                  FUN_109faada8(ppppppfVar16,&pppppppfStack_158);
                  if (ppppppfVar16 != (float ******)0x0) {
                    unaff_x27 = (float *******)(ulong)*(uint *)(ppppppfVar16 + 3);
                    goto LAB_109fa11c8;
                  }
                }
                unaff_x27 = (float *******)0x0;
LAB_109fa11c8:
                ppppppfVar29 = param_2[0x18];
                ppppppfVar16 = ppppppfVar29;
                do {
                  if (ppppppfVar16 == (float ******)0x0) goto LAB_109fa0450;
                  if (*(uint *)(ppppppfVar16 + 4) <= (uint)unaff_x27) {
                    if ((uint)unaff_x27 <= *(uint *)(ppppppfVar16 + 4)) goto LAB_109fa12d8;
                    ppppppfVar16 = ppppppfVar16 + 1;
                  }
                  ppppppfVar16 = (float ******)*ppppppfVar16;
                } while( true );
              }
              goto LAB_109fa0d7c;
            }
          }
          else {
            if (uVar22 == 0x26f) {
              unaff_x23 = (float *******)*param_3[0x13];
              pppppppfVar33 = unaff_x23;
              while (pppppppfVar33 != (float *******)0x0) {
                if (*(float *)(pppppppfVar33 + 5) == 0.0) {
                  pppppppfVar33 = (float *******)pppppppfVar33[7];
                  pppppppfStack_158 = pppppppfVar33;
                  if (pppppppfVar33 != (float *******)0x0) {
                    if (param_3[0x17] != (float ******)0x0) {
                      pppppppfVar35 = param_2 + 6;
                      FUN_109fab870(pppppppfVar35,*(undefined4 *)(param_3[0x17] + 3));
                      if ((pppppppfVar35 != (float *******)0x0) &&
                         (ppppppfVar16 = pppppppfVar35[3], ppppppfVar16 != (float ******)0x0)) {
                        if ((*(uint *)(pppppppfVar33 + 4) & 0x1fffff) == 0x40000) {
                          pppppppfVar33 = param_2;
                          FUN_109fa90d0(param_2,unaff_x23);
                          if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
                          ppppppfVar32 = param_2[1] + 0x20;
                          FUN_109d73128(ppppppfVar32,*ppppppfVar16,1);
                          FUN_109d5c3c4(param_2[2],ppppppfVar16,pppppppfVar33,
                                        (ulong)ppppppfVar32 & 0xff | 0x100,0);
                          goto LAB_109fa0450;
                        }
                        if ((*(uint *)(pppppppfVar33 + 4) >> 3 & 1) == 0) goto LAB_109fa0450;
                        pppppppfVar33 = param_2 + 0x12;
                        FUN_109faada8(pppppppfVar33,&pppppppfStack_158);
                        if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
                        uVar22 = *(uint *)(pppppppfVar33 + 3);
                        pppppppfVar17 = (float *******)(ulong)uVar22;
                        fVar39 = *(float *)(unaff_x23 + 5);
                        if (((fVar39 == 1.4013e-45) &&
                            (*(char *)((long)pppppppfStack_158[2] + 4) == '\x13')) &&
                           (pppppfVar23 = *unaff_x23[0xe],
                           *(float *)(pppppfVar23 + 3) == 7.00649e-45)) {
                          uVar19 = (uint)*(byte *)((long)pppppfVar23 + 0x45);
                          func_0x000109faae80(*(byte *)((long)pppppfVar23 + 0x45),pppppfVar23[9]);
                          pppppppfVar17 = (float *******)(ulong)(uVar22 + uVar19);
                        }
                        uVar21 = SUB84(pppppppfVar17,0);
                        if ((*(int *)(param_2 + 5) == 0) &&
                           (pppppppfStack_158 == (float *******)(*param_2)[1][0xf9])) {
                          if ((fVar39 == 1.4013e-45) &&
                             (pppppfVar23 = *unaff_x23[0xe],
                             *(float *)(pppppfVar23 + 3) == 7.00649e-45)) {
                            uVar22 = (uint)*(byte *)((long)pppppfVar23 + 0x45);
                            func_0x000109faae80(*(byte *)((long)pppppfVar23 + 0x45),pppppfVar23[9]);
                          }
                          else {
                            uVar22 = 0;
                          }
                          ppppppfVar32 = param_2[0x10];
                          if (ppppppfVar32 == (float ******)0x0) {
                            ppppppfVar32 = (float ******)*param_2[3][3][2];
                            func_0x000109d677ec();
                            param_2[0x10] = ppppppfVar32;
                          }
                          ppppppfVar29 = param_2[2];
                          uStack_130 = (float *******)CONCAT44(uVar22,uVar21);
                          uStack_c0 = 0x101;
                          FUN_109d5d384(ppppppfVar29,ppppppfVar32,ppppppfVar16,&uStack_130,2,
                                        &pppppppfStack_e0);
                          param_2[0x10] = ppppppfVar29;
                          goto LAB_109fa0450;
                        }
                        if (param_2[0x10] == (float ******)0x0) {
                          ppppppfVar32 = (float ******)*param_2[3][3][2];
                          func_0x000109d677ec();
                          param_2[0x10] = ppppppfVar32;
                        }
                        unaff_x23 = (float *******)(*param_2[3][3][2])[2][(long)pppppppfVar17];
                        ppppppfVar32 = ppppppfVar16;
                        if ((float *******)*ppppppfVar16 != unaff_x23) {
                          ppppppfVar32 = param_2[2];
                          uStack_c0 = 0x101;
                          FUN_109d349d8(ppppppfVar32,0x31,ppppppfVar16,unaff_x23,&pppppppfStack_e0);
                        }
                        ppppppfVar16 = ppppppfVar32;
                        if (((ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(param_3 + 5) * 0x68] !=
                             0) && (*(char *)(unaff_x23 + 1) == '\x12')) {
                          fVar39 = *(float *)(unaff_x23 + 4);
                          uVar22 = *(uint *)((long)param_3 +
                                            ((ulong)(byte)(&UNK_110b671aa)
                                                          [(ulong)*(uint *)(param_3 + 5) * 0x68] +
                                            0x14) * 4);
                          if ((-1 << (ulong)((uint)fVar39 & 0x1f) ^ uVar22) != 0xffffffff) {
                            ppppppfVar16 = param_2[2];
                            uStack_130 = (float *******)CONCAT44(uStack_130._4_4_,uVar21);
                            uStack_c0 = 0x101;
                            func_0x000109d5ccf8(ppppppfVar16,param_2[0x10],&uStack_130,1,
                                                &pppppppfStack_e0);
                            if (fVar39 != 0.0) {
                              unaff_x23 = (float *******)0x0;
                              unaff_x26 = (float *******)0x101;
                              do {
                                ppppppfVar29 = ppppppfVar16;
                                if ((uVar22 >> (ulong)((uint)unaff_x23 & 0x1f) & 1) != 0) {
                                  unaff_x27 = param_2 + 2;
                                  ppppppfVar13 = *unaff_x27;
                                  uStack_c0 = 0x101;
                                  FUN_109d5c370(ppppppfVar13,ppppppfVar32,unaff_x23,
                                                &pppppppfStack_e0);
                                  ppppppfVar29 = *unaff_x27;
                                  uStack_c0 = 0x101;
                                  func_0x000109d5c530(ppppppfVar29,ppppppfVar16,ppppppfVar13,
                                                      unaff_x23,&pppppppfStack_e0);
                                }
                                unaff_x23 = (float *******)((long)unaff_x23 + 1);
                                ppppppfVar16 = ppppppfVar29;
                              } while ((float *******)(ulong)(uint)fVar39 != unaff_x23);
                            }
                          }
                        }
                        pppppppfVar33 = param_2 + 0x10;
                        ppppppfVar32 = param_2[2];
                        uStack_130 = (float *******)CONCAT44(uStack_130._4_4_,uVar21);
                        uStack_c0 = 0x101;
                        FUN_109d5d384(ppppppfVar32,*pppppppfVar33,ppppppfVar16,&uStack_130,1,
                                      &pppppppfStack_e0);
                        *pppppppfVar33 = ppppppfVar32;
                        param_2 = pppppppfVar33;
                        goto LAB_109fa0450;
                      }
                    }
                    func_0x000107c31940(&uStack_130,&UNK_10f62b78a);
                    FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b96518);
                    goto LAB_109fa0950;
                  }
                  break;
                }
                if (((pppppppfVar33[10] == (float ******)0x0) ||
                    (pppppppfVar33 = (float *******)*pppppppfVar33[10],
                    pppppppfVar33 == (float *******)0x0)) ||
                   (*(float *)(pppppppfVar33 + 3) != 1.4013e-45)) break;
              }
              func_0x000107c31940(&uStack_130,&UNK_10f62b6de);
              FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b96500);
              goto LAB_109fa0950;
            }
            if (uVar22 == 0x294) goto LAB_109fa02a0;
            if (uVar22 == 0x295) goto LAB_109f9ffac;
          }
        }
        FUN_109f97010(&uStack_130,&UNK_10f62b5be);
        FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b964d0);
LAB_109fa0950:
        pppppppfVar33 = pppppppfStack_d8;
        param_2 = (float *******)((ulong)pppppppfStack_e0 & 0xffffffff);
        uStack_190 = (undefined7)uStack_d0;
        cStack_189 = uStack_d0._7_1_;
        uStack_188 = uStack_c8;
        unaff_x23 = (float *******)CONCAT62(uStack_be,uStack_c0);
        if (-1 < (long)appppppfStack_120[0]) goto LAB_109fa097c;
        __ZdlPv(uStack_130);
        goto LAB_109fa097c;
      }
    }
  }
  else if (iVar20 < 7) {
    if (iVar20 == 5) {
      pppppfVar23 = **param_2;
      bVar4 = *(byte *)((long)param_3 + 0x44);
      uVar36 = (ulong)bVar4;
      cVar5 = *(char *)((long)param_3 + 0x45);
      if (bVar4 != 1) {
        pppppppfVar17 = param_3;
        if (cVar5 == '\x10') {
          ppppfVar24 = *pppppfVar23;
          pppppppfStack_e0 = (float *******)&uStack_d0;
          pppppppfStack_d8 = (float *******)0x400000000;
          if (bVar4 == 0) {
            uVar36 = 0;
          }
          else {
            pppppppfVar33 = param_3 + 9;
            do {
              unaff_x23 = pppppppfVar33 + 1;
              fVar39 = (float)(((int)*(short *)pppppppfVar33 & 0x7fffU) << 0xd) * 5.192297e+33;
              if (65536.0 <= fVar39) {
                fVar39 = (float)((uint)fVar39 | 0x7f800000);
              }
              ppppfVar10 = ppppfVar24 + 0xcf;
              FUN_109d67974((double)(float)((uint)fVar39 |
                                           (int)*(short *)pppppppfVar33 & 0x80000000U),ppppfVar10);
              FUN_109d31fec(&pppppppfStack_e0,ppppfVar10);
              uVar36 = uVar36 - 1;
              pppppppfVar33 = unaff_x23;
            } while (uVar36 != 0);
            uVar36 = (ulong)pppppppfStack_d8 & 0xffffffff;
          }
          pppppppfVar33 = pppppppfStack_e0;
          func_0x000109d67790(pppppppfStack_e0,uVar36);
          if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa080c;
          pppppppfVar35 = param_2 + 6;
          FUN_109fab460(pppppppfVar35,*(undefined4 *)(param_3 + 8));
        }
        else {
          if (cVar5 != ' ') goto LAB_109fa0450;
          ppppfVar24 = *pppppfVar23;
          pppppppfStack_e0 = (float *******)&uStack_d0;
          pppppppfStack_d8 = (float *******)0x400000000;
          if (bVar4 == 0) {
            uVar36 = 0;
          }
          else {
            pppppppfVar33 = param_3 + 9;
            do {
              unaff_x23 = pppppppfVar33 + 1;
              ppppfVar10 = ppppfVar24 + 0xcf;
              FUN_109d67974((double)*(float *)pppppppfVar33,ppppfVar10);
              FUN_109d31fec(&pppppppfStack_e0,ppppfVar10);
              uVar36 = uVar36 - 1;
              pppppppfVar33 = unaff_x23;
            } while (uVar36 != 0);
            uVar36 = (ulong)pppppppfStack_d8 & 0xffffffff;
          }
          pppppppfVar33 = pppppppfStack_e0;
          func_0x000109d67790(pppppppfStack_e0,uVar36);
          if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa080c;
          pppppppfVar35 = param_2 + 6;
          FUN_109fab460(pppppppfVar35,*(undefined4 *)(param_3 + 8));
        }
        pppppppfVar35[3] = (float ******)pppppppfVar33;
LAB_109fa080c:
        if (pppppppfStack_e0 == (float *******)&uStack_d0) goto LAB_109fa0450;
        _free();
        goto LAB_109fa0450;
      }
      if (cVar5 == '\x01') {
        pppppppfVar33 = (float *******)(*param_2)[0x3d];
        FUN_109d66880(pppppppfVar33,*(undefined1 *)(param_3 + 9),0);
      }
      else {
        if (cVar5 == '\x10') {
          ppppfVar24 = *pppppfVar23;
          fVar39 = (float)(((int)*(short *)(param_3 + 9) & 0x7fffU) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar39) {
            fVar39 = (float)((uint)fVar39 | 0x7f800000);
          }
          fVar39 = (float)((uint)fVar39 | (int)*(short *)(param_3 + 9) & 0x80000000U);
        }
        else {
          if (cVar5 != ' ') goto LAB_109fa0450;
          ppppfVar24 = *pppppfVar23;
          fVar39 = *(float *)(param_3 + 9);
        }
        pppppppfVar33 = (float *******)(ppppfVar24 + 0xcf);
        FUN_109d67974((double)fVar39);
      }
      goto joined_r0x000109fa0438;
    }
    if (iVar20 == 6) {
      if (*(int *)(param_3 + 5) == 3) {
        ppppppfVar16 = param_2[0x22];
        if (ppppppfVar16 == (float ******)0x0) goto LAB_109fa0450;
        param_2 = (float *******)param_2[2];
        FUN_109d38b9c(ppppppfVar16,0);
        uStack_c0 = 0x101;
        FUN_109fab914(param_2,ppppppfVar16,&pppppppfStack_e0);
        goto LAB_109fa0450;
      }
      if (*(int *)(param_3 + 5) != 2) goto LAB_109fa0450;
      ppppppfVar16 = param_2[0x23];
      if (ppppppfVar16 == (float ******)0x0) goto LAB_109fa0450;
      param_2 = (float *******)param_2[2];
      FUN_109d38b9c(ppppppfVar16,0);
      uStack_c0 = 0x101;
      FUN_109fab914(param_2,ppppppfVar16,&pppppppfStack_e0);
      goto LAB_109fa0450;
    }
  }
  else {
    if (iVar20 == 7) {
      pppppppfVar33 = (float *******)*param_2;
      func_0x000109f9a5dc(pppppppfVar33,*(undefined1 *)((long)param_3 + 0x44));
      func_0x000109d677ec();
joined_r0x000109fa0438:
      if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
      pppppppfVar35 = param_2 + 6;
      FUN_109fab460(pppppppfVar35,*(undefined4 *)(param_3 + 8));
      pppppppfVar12 = unaff_x23;
LAB_109fa044c:
      pppppppfVar35[3] = (float ******)pppppppfVar33;
      unaff_x23 = pppppppfVar12;
      goto LAB_109fa0450;
    }
    if (iVar20 == 8) {
      cVar5 = *(char *)((long)param_3 + 100);
      ppppppfVar16 = (float ******)*param_3[5];
      ppppppfVar32 = param_3[5];
      for (ppppppfVar29 = ppppppfVar16; ppppppfVar29 != (float ******)0x0;
          ppppppfVar29 = (float ******)*ppppppfVar29) {
        if (ppppppfVar32[6] != (float *****)0x0) {
          pppppppfVar33 = param_2 + 6;
          FUN_109fab870(pppppppfVar33,*(undefined4 *)(ppppppfVar32[6] + 3));
          if ((pppppppfVar33 != (float *******)0x0) && (pppppppfVar33[3] != (float ******)0x0)) {
            pppppppfVar33 = (float *******)*pppppppfVar33[3];
            if (pppppppfVar33 != (float *******)0x0) goto LAB_109f9fd04;
            break;
          }
        }
        ppppppfVar32 = ppppppfVar29;
      }
      if (cVar5 == '\x01') {
        pppppppfVar33 = (float *******)(***param_2 + 0xcf);
        if (*(char *)((long)param_3 + 0x65) == '\x01') {
          pppppppfVar33 = (float *******)(***param_2 + 0xea);
        }
      }
      else {
        pppppppfVar33 = (float *******)*param_2;
        func_0x000109f9a5dc(pppppppfVar33,cVar5);
        ppppppfVar16 = (float ******)*param_3[5];
      }
LAB_109f9fd04:
      iVar20 = 0;
      for (; ppppppfVar16 != (float ******)0x0; ppppppfVar16 = (float ******)*ppppppfVar16) {
        iVar20 = iVar20 + 1;
      }
      unaff_x23 = (float *******)param_2[2];
      uStack_c0 = 0x101;
      FUN_109d34584(unaff_x23,pppppppfVar33,iVar20,&pppppppfStack_e0);
      unaff_x28 = (float *******)param_3[5];
      if (*unaff_x28 != (float ******)0x0) {
        do {
          pppppppfVar35 = (float *******)param_2[0x1d];
          ppppppfVar16 = param_2[0x1e];
          FUN_109fab980(pppppppfVar35,ppppppfVar16,*(undefined4 *)(unaff_x28[2] + 8));
          if (pppppppfVar35 == (float *******)0x0) {
            ppppppfVar32 = param_2[0x25];
            if (ppppppfVar32 < param_2[0x26]) {
              *ppppppfVar32 = (float *****)unaff_x23;
              ppppppfVar32[1] = (float *****)unaff_x28;
              ppppppfVar16 = ppppppfVar32 + 3;
              ppppppfVar32[2] = (float *****)pppppppfVar33;
            }
            else {
              lVar25 = (long)ppppppfVar32 - (long)param_2[0x24];
              uVar36 = (lVar25 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar36) {
                FUN_109fab818();
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x109fa18bc);
                (*pcVar7)();
              }
              lVar26 = (long)param_2[0x26] - (long)param_2[0x24] >> 3;
              uVar28 = lVar26 * 0x5555555555555556;
              if (uVar28 < uVar36 || uVar28 - uVar36 == 0) {
                uVar28 = uVar36;
              }
              if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
                uVar28 = 0xaaaaaaaaaaaaaaa;
              }
              FUN_109fab82c();
              puVar8 = (undefined8 *)(uVar28 + lVar25);
              unaff_x26 = (float *******)(uVar28 + (long)ppppppfVar16 * 0x18);
              *puVar8 = unaff_x23;
              puVar8[1] = unaff_x28;
              puVar8[2] = pppppppfVar33;
              ppppppfVar16 = (float ******)(puVar8 + 3);
              pppppppfVar17 =
                   (float *******)((long)puVar8 - ((long)param_2[0x25] - (long)param_2[0x24]));
              _memcpy(pppppppfVar17);
              ppppppfVar32 = param_2[0x24];
              param_2[0x24] = (float ******)pppppppfVar17;
              param_2[0x25] = ppppppfVar16;
              param_2[0x26] = (float ******)unaff_x26;
              if (ppppppfVar32 != (float ******)0x0) {
                __ZdlPv();
              }
            }
            param_2[0x25] = ppppppfVar16;
          }
          else {
            if (unaff_x28[6] == (float ******)0x0) {
LAB_109f9fd8c:
              uVar22 = (uint)ppppppfVar16;
              unaff_x26 = pppppppfVar33;
              func_0x000109d677ec();
            }
            else {
              ppppppfVar16 = (float ******)(ulong)*(uint *)(unaff_x28[6] + 3);
              pppppppfVar17 = param_2 + 6;
              FUN_109fab870();
              uVar22 = (uint)ppppppfVar16;
              if ((pppppppfVar17 == (float *******)0x0) ||
                 (unaff_x26 = (float *******)pppppppfVar17[3], unaff_x26 == (float *******)0x0))
              goto LAB_109f9fd8c;
            }
            pppppppfVar17 = (float *******)*unaff_x26;
            if (pppppppfVar17 != pppppppfVar33) {
              FUN_109d9f594();
              pppppppfVar12 = pppppppfVar33;
              uVar19 = uVar22;
              FUN_109d9f594();
              unaff_x27 = pppppppfVar17;
              if ((pppppppfVar17 == pppppppfVar12) && ((uVar22 & 0xff) == (uVar19 & 0xff))) {
                puVar8 = (undefined8 *)0x60;
                __Znwm();
                pppppppfVar17 = (float *******)(puVar8 + 4);
                *(uint *)((long)puVar8 + 0x34) = *(uint *)((long)puVar8 + 0x34) & 0x38000000 | 1;
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[3] = pppppppfVar17;
                uStack_c0 = 0x101;
                ppppppfVar16 = (float ******)pppppppfVar35[3][5];
                if (ppppppfVar16 == pppppppfVar35[3] + 5) {
                  ppppppfVar32 = (float ******)0x0;
                }
                else {
                  ppppppfVar32 = ppppppfVar16 + -3;
                  if (10 < *(byte *)(ppppppfVar16 + -1) - 0x1d) {
                    ppppppfVar32 = (float ******)0x0;
                  }
                }
                FUN_109d8cf9c(pppppppfVar17,pppppppfVar33,0x31,unaff_x26,&pppppppfStack_e0,
                              ppppppfVar32);
                unaff_x26 = pppppppfVar17;
              }
              else {
                unaff_x26 = pppppppfVar33;
                func_0x000109d677ec();
              }
            }
            func_0x000109d34614(unaff_x23,unaff_x26,pppppppfVar35[3]);
            pppppppfVar17 = pppppppfVar35;
          }
          unaff_x28 = (float *******)*unaff_x28;
        } while (*unaff_x28 != (float ******)0x0);
      }
      pppppppfStack_1c0 = param_3;
      if (unaff_x23 == (float *******)0x0) goto LAB_109fa0450;
      pppppppfVar33 = param_2 + 6;
      FUN_109fab460(pppppppfVar33,*(undefined4 *)(param_3 + 0xc));
      pppppppfVar33[3] = (float ******)unaff_x23;
      pppppppfStack_1c0 = param_3;
      goto LAB_109fa0450;
    }
    if (iVar20 == 10) goto LAB_109fa0450;
  }
  FUN_109f97010(&uStack_130,&UNK_10f62b1e7);
  FUN_109f92740(&pppppppfStack_e0,&uStack_130,2,&PTR_DAT_110b96470);
  *(undefined4 *)param_1 = pppppppfStack_e0._0_4_;
  param_1[2] = CONCAT17(uStack_d0._7_1_,(undefined7)uStack_d0);
  param_1[1] = pppppppfStack_d8;
  param_1[3] = CONCAT17(uStack_c1,uStack_c8);
  param_1[4] = CONCAT62(uStack_be,uStack_c0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_3 = unaff_x28;
  if ((long)appppppfStack_120[0] < 0) {
    __ZdlPv(uStack_130);
  }
LAB_109fa0468:
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    uVar36 = uStack_1e8;
LAB_109fa1408:
    ppppppfVar16 = unaff_x23[0x42];
    FUN_109d66880(ppppppfVar16,uVar36 & 0xffffffff,0);
    func_0x000109d30100(&uStack_130,ppppppfVar16);
    if ((uint)pppppppfStack_d8 != 0) {
      uVar36 = 0;
      ppppppfVar16 = pppppppfVar17[2];
      do {
        ppppppfVar32 = pppppppfStack_e0[uVar36];
        if (*(float *)(ppppppfVar32 + 5) == 5.60519e-45) {
          ppppppfVar29 = unaff_x23[0x42];
          FUN_109d66880(ppppppfVar29,*(float *)(ppppppfVar32 + 0xb),0);
          func_0x000109d30100(&uStack_130,ppppppfVar29);
          if ((ppppppfVar16 == (float ******)0x0) || (*(char *)((long)ppppppfVar16 + 4) != '\x11'))
          goto LAB_109fa15dc;
          ppppppfVar16 = (float ******)
                         (ppppppfVar16[6] + (ulong)(uint)*(float *)(ppppppfVar32 + 0xb) * 6);
LAB_109fa158c:
          ppppppfVar16 = (float ******)*ppppppfVar16;
        }
        else if (*(float *)(ppppppfVar32 + 5) == 1.4013e-45) {
          ppppfVar24 = *ppppppfVar32[0xe];
          if (*(float *)(ppppfVar24 + 3) == 7.00649e-45) {
            pppfVar27 = ppppfVar24[9];
            uVar22 = (*(byte *)((long)ppppfVar24 + 0x45) & 0xaaaaaaaa) >> 1 |
                     (*(byte *)((long)ppppfVar24 + 0x45) & 0x55555555) << 1;
            uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2;
            uVar22 = (uint)LZCOUNT((uVar22 >> 4 | (uVar22 & 0xf0f0f0f) << 4) << 0x18);
            pppfVar2 = (float ***)(long)(int)pppfVar27;
            if (uVar22 != 5) {
              pppfVar2 = pppfVar27;
            }
            pppfVar3 = (float ***)(long)(short)pppfVar27;
            if (uVar22 != 4) {
              pppfVar3 = pppfVar2;
            }
            pppfVar2 = (float ***)-((ulong)pppfVar27 & 1);
            if (uVar22 != 0) {
              pppfVar2 = (float ***)(long)(char)pppfVar27;
            }
            if (uVar22 < 4) {
              pppfVar3 = pppfVar2;
            }
            pppppppfVar17 = (float *******)unaff_x23[0x43];
            FUN_109d66880(pppppppfVar17,pppfVar3,0);
LAB_109fa1564:
            pppppppfVar33 = pppppppfVar17;
            if (pppppppfVar17 == (float *******)0x0) break;
          }
          else {
            pppppppfVar33 = param_2 + 6;
            FUN_109fab870(pppppppfVar33,*(float *)(ppppppfVar32[0xe] + 3));
            if ((pppppppfVar33 == (float *******)0x0) ||
               (pppppppfVar17 = (float *******)pppppppfVar33[3], pppppppfVar17 == (float *******)0x0
               )) break;
            ppppppfVar32 = *pppppppfVar17;
            pppppppfVar33 = pppppppfVar17;
            if (*(char *)(ppppppfVar32 + 1) != '\r') {
              uStack_138 = 0x101;
              pppppppfVar33 = pppppppfStack_1c0;
              FUN_109d349d8(pppppppfStack_1c0,0x31,pppppppfVar17,unaff_x23[0x42],&pppppppfStack_158)
              ;
              ppppppfVar32 = *pppppppfVar33;
            }
            if (ppppppfVar32 != unaff_x23[0x43]) {
              uStack_138 = 0x101;
              pppppppfVar17 = pppppppfStack_1c0;
              func_0x000109d344c8(pppppppfStack_1c0,pppppppfVar33,unaff_x23[0x43],&pppppppfStack_158
                                 );
              goto LAB_109fa1564;
            }
          }
          pppppppfVar17 = pppppppfVar33;
          if (ppppppfVar16 != (float ******)0x0) {
            if (*(char *)((long)ppppppfVar16 + 4) == '\x13') {
              func_0x000109d30100(&uStack_130,pppppppfVar33);
              ppppppfVar16 = ppppppfVar16 + 6;
              goto LAB_109fa158c;
            }
            if (1 < *(byte *)((long)ppppppfVar16 + 0xe)) {
              ppppppfVar16 = unaff_x23[0x42];
              FUN_109d66880(ppppppfVar16,0,0);
              func_0x000109d30100(&uStack_130,ppppppfVar16);
              func_0x000109d30100(&uStack_130,pppppppfVar33);
              ppppppfVar16 = (float ******)0x0;
              goto LAB_109fa15dc;
            }
          }
          func_0x000109d30100(&uStack_130,pppppppfVar33);
        }
LAB_109fa15dc:
        uVar36 = uVar36 + 1;
      } while (uVar36 < ((ulong)pppppppfStack_d8 & 0xffffffff));
    }
    if (1 < (uint)pppppppfStack_128) {
      lVar25 = ((ulong)pppppppfStack_128 & 0xffffffff) - 1;
      ppppppfVar16 = ppppppfStack_1c8;
      pppppppfVar33 = uStack_130;
      do {
        pppppppfVar33 = pppppppfVar33 + 1;
        cVar5 = *(char *)(ppppppfVar16 + 1);
        if ((ppppppfVar16 != (float ******)0x0) && (cVar5 == '\x10')) {
          ppppppfVar32 = *pppppppfVar33;
          if (ppppppfVar32 != (float ******)0x0 && *(char *)(ppppppfVar32 + 2) == '\x10') {
            ppppppfVar29 = ppppppfVar32 + 3;
            if (0x40 < (uint)*(float *)(ppppppfVar32 + 4)) {
              ppppppfVar29 = (float ******)*ppppppfVar29;
            }
            if (*ppppppfVar29 < (float *****)(ulong)*(uint *)((long)ppppppfVar16 + 0xc)) {
              ppppppfVar16 = (float ******)(ppppppfVar16[2] + (long)*ppppppfVar29);
              goto LAB_109fa1678;
            }
          }
LAB_109fa1834:
          func_0x000107c31940(&ppppppfStack_170,&UNK_10f62b5f1);
          FUN_109f92740(&pppppppfStack_158,&ppppppfStack_170,2,&PTR_DAT_110b964e8);
          uVar34 = uStack_139;
          pppppppfVar33 = pppppppfStack_150;
          param_2 = (float *******)((ulong)pppppppfStack_158 & 0xffffffff);
          uStack_180 = uStack_148;
          cStack_179 = cStack_141;
          uStack_178 = uStack_140;
          unaff_x23 = (float *******)CONCAT62(uStack_136,uStack_138);
          if (cStack_159 < '\0') {
            __ZdlPv(ppppppfStack_170);
          }
          bVar30 = false;
          goto LAB_109fa188c;
        }
        if (((ppppppfVar16 == (float ******)0x0) || (cVar5 != '\x11')) &&
           ((ppppppfVar16 == (float ******)0x0 || (cVar5 != '\x12')))) goto LAB_109fa1834;
        ppppppfVar16 = ppppppfVar16 + 3;
LAB_109fa1678:
        ppppppfVar16 = (float ******)*ppppppfVar16;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uStack_138 = 0x101;
    pppppppfVar33 = pppppppfStack_1c0;
    FUN_109faa5c8(pppppppfStack_1c0,ppppppfStack_1c8,pppppppfStack_1f0,uStack_130,
                  (ulong)pppppppfStack_128 & 0xffffffff,&pppppppfStack_158);
    if ((uint)pppppppfStack_128 == 0) {
LAB_109fa16e4:
      cVar5 = *(char *)(ppppppfStack_1c8 + 1);
      while (pppppppfVar17 = pppppppfVar33, cVar5 == '\x11') {
        ppppppfVar16 = unaff_x23[0x43];
        FUN_109d66880(ppppppfVar16,0,0);
        ppppppfVar32 = unaff_x23[0x43];
        ppppppfStack_170 = ppppppfVar16;
        FUN_109d66880(ppppppfVar32,0,0);
        uStack_138 = 0x101;
        pppppppfVar17 = pppppppfStack_1c0;
        ppppppfStack_168 = ppppppfVar32;
        FUN_109faa5c8(pppppppfStack_1c0,ppppppfStack_1c8,pppppppfVar33,&ppppppfStack_170,2,
                      &pppppppfStack_158);
        ppppppfStack_1c8 = (float ******)ppppppfStack_1c8[3];
        if (ppppppfStack_1c8 == (float ******)0x0) break;
        pppppppfVar33 = pppppppfVar17;
        cVar5 = *(char *)(ppppppfStack_1c8 + 1);
      }
    }
    else {
      lVar25 = ((ulong)pppppppfStack_128 & 0xffffffff) * 8;
      pppppppfVar17 = uStack_130;
      do {
        lVar25 = lVar25 + -8;
        pppppppfVar17 = pppppppfVar17 + 1;
        if (lVar25 == 0) goto LAB_109fa16e4;
        func_0x000109d8bf3c(ppppppfStack_1c8,*pppppppfVar17);
      } while (ppppppfStack_1c8 != (float ******)0x0);
      ppppppfStack_1c8 = (float ******)0x0;
      pppppppfVar17 = pppppppfVar33;
    }
    if (unaff_x27 < (float *******)(ulong)(uint)*(float *)(pppppppfStack_1e0 + 1)) {
      uVar36 = (ulong)*(uint *)((long)*pppppppfStack_1e0 + (long)unaff_x27 * 4);
    }
    else {
      uVar36 = 4;
    }
    uStack_138 = 0x101;
    pppppppfVar35 = pppppppfStack_1c0;
    FUN_109d5d1c0(pppppppfStack_1c0,ppppppfStack_1c8,pppppppfVar17,
                  0x3fU - (int)LZCOUNT(uVar36) & 0xff | 0x100,0,&pppppppfStack_158);
    pppppppfVar33 = unaff_x23 + 0x7e;
    FUN_109faa6e8(pppppppfVar33,&pppppppuStack_1b0);
    if ((pppppppfVar33 != (float *******)0x0) && ((uint)pppppppfStack_d8 == 0)) {
      pppppppfVar12 = unaff_x23 + 2;
      FUN_109fa9e54(pppppppfVar12,&pppppppuStack_1b0,pppppppfVar33[5],*(float *)(pppppppfVar33 + 6),
                    ppppppfStack_1d0,uStack_1e8);
      FUN_109d97dec(pppppppfVar35,1,pppppppfVar12);
    }
    if (pppppppfVar35 != (float *******)0x0) {
      param_3 = param_3 + 9;
      param_2 = param_2 + 6;
      FUN_109fab460(param_2,*(undefined4 *)param_3,param_3);
      param_2[3] = (float ******)pppppppfVar35;
    }
    param_2 = (float *******)0x0;
    pppppppfVar33 = (float *******)0x0;
    uVar34 = 0;
    unaff_x23 = (float *******)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    cStack_179 = '\0';
    bVar30 = true;
LAB_109fa188c:
    if (uStack_130 != unaff_x26) {
      _free();
    }
    if (pppppppfStack_e0 != pppppppfStack_1f8) {
      _free();
    }
LAB_109fa0e38:
    if ((char)bStack_199 < '\0') {
      __ZdlPv(pppppppuStack_1b0);
    }
    unaff_x28 = param_3;
    if (bVar30) {
LAB_109fa0450:
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      param_3 = unaff_x28;
    }
    else {
      uStack_190 = uStack_180;
      cStack_189 = cStack_179;
      uStack_188 = uStack_178;
      uStack_c1 = uVar34;
LAB_109fa097c:
      *(int *)param_1 = (int)param_2;
      param_1[1] = pppppppfVar33;
      param_1[2] = CONCAT17(cStack_189,uStack_190);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_188,cStack_189);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_c1;
      param_1[4] = unaff_x23;
      *(undefined1 *)(param_1 + 5) = 0;
    }
  } while( true );
  while (uVar36 = uStack_1e8 + 1, lVar25 >> 3 != uStack_1e8 + 1) {
LAB_109fa1108:
    uStack_1e8 = uVar36;
    pppppppfVar33 = (float *******)pppppfVar23[uStack_1e8];
    if ((pppppppfVar33 == pppppppfVar17) ||
       (((ppppppfVar16 = pppppppfVar33[3], ppppppfVar16 != (float ******)0x0 &&
         (pppppppfVar17[3] != (float ******)0x0)) && (_strcmp(), (int)ppppppfVar16 == 0)))) {
      if (-1 < (int)uStack_1e8) {
        pppppppfStack_1f8 = (float *******)&uStack_d0;
        pppppppfStack_d8 = (float *******)0x800000000;
        pppppppfStack_e0 = pppppppfStack_1f8;
        goto LAB_109fa121c;
      }
      break;
    }
  }
LAB_109fa0e1c:
  param_2 = (float *******)0x0;
  pppppppfVar33 = (float *******)0x0;
  uVar34 = 0;
  unaff_x23 = (float *******)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  cStack_179 = '\0';
  bVar30 = true;
  goto LAB_109fa0e38;
LAB_109fa121c:
  if ((unaff_x26 == (float *******)0x0) || (*(int *)(unaff_x26 + 5) == 0)) {
LAB_109fa124c:
    if (1 < (uint)pppppppfStack_d8) {
      pppppppfVar33 = pppppppfStack_e0 + (((ulong)pppppppfStack_d8 & 0xffffffff) - 1);
      pppppppfVar35 = pppppppfStack_e0;
      do {
        pppppppfVar14 = pppppppfVar35 + 1;
        ppppppfVar16 = *pppppppfVar35;
        *pppppppfVar35 = *pppppppfVar33;
        pppppppfVar12 = pppppppfVar33 + -1;
        *pppppppfVar33 = ppppppfVar16;
        pppppppfVar33 = pppppppfVar12;
        pppppppfVar35 = pppppppfVar14;
      } while (pppppppfVar14 < pppppppfVar12);
    }
    unaff_x26 = appppppfStack_120;
    pppppppfStack_128 = (float *******)0x800000000;
    ppppppfVar16 = unaff_x23[0x43];
    uStack_130 = unaff_x26;
    FUN_109d66880(ppppppfVar16,0,0);
    func_0x000109d30100(&uStack_130,ppppppfVar16);
    unaff_x27 = (float *******)(uStack_1e8 & 0x7fffffff);
    uVar36 = uStack_1e8;
    if ((float *******)(ulong)(uint)*(float *)(pppppppfStack_1d8 + 1) <= unaff_x27)
    goto LAB_109fa1408;
    uVar36 = (ulong)*(uint *)((long)*pppppppfStack_1d8 + (long)unaff_x27 * 4);
    goto LAB_109fa1408;
  }
  FUN_109fa9dfc(&pppppppfStack_e0,unaff_x26);
  if ((unaff_x26[10] == (float ******)0x0) ||
     (unaff_x26 = (float *******)*unaff_x26[10], *(int *)(unaff_x26 + 3) != 1)) goto LAB_109fa124c;
  goto LAB_109fa121c;
LAB_109fa12d8:
  FUN_109fa940c(ppppppfVar29,unaff_x27);
  pppppfVar23 = *ppppppfVar29;
  if (pppppfVar23 == (float *****)0x0) goto LAB_109fa0450;
  pppppppfVar12 = unaff_x23;
  FUN_109fa9458(unaff_x23,unaff_x27,ppppppfVar32[3]);
  if ((int)pppppppfVar12 < 0) goto LAB_109fa0450;
  ppppppfVar16 = unaff_x23[0x58];
  FUN_109fa9530(ppppppfVar16,unaff_x27);
  pppppfVar31 = *ppppppfVar16;
  pppppppfVar14 = (float *******)unaff_x23[0x43];
  FUN_109d66880(pppppppfVar14,0,0);
  pppppppfVar15 = (float *******)unaff_x23[0x42];
  uStack_130 = pppppppfVar14;
  FUN_109d66880(pppppppfVar15,(ulong)pppppppfVar12 & 0xffffffff,0);
  uStack_c0 = 0x101;
  pppppppfVar12 = pppppppfVar33;
  pppppppfStack_128 = pppppppfVar15;
  FUN_109faa5c8(pppppppfVar33,pppppfVar31,pppppfVar23,&uStack_130,2,&pppppppfStack_e0);
  ppppppfVar16 = pppppppfStack_158[0x11];
  if (ppppppfVar16 == (float ******)0x0) {
    ppppppfVar16 = pppppppfStack_158[2];
  }
  ppppppfVar32 = *unaff_x23;
  FUN_109f9f1c0(ppppppfVar32,ppppppfVar16,unaff_x23 + 0x38);
  if (ppppppfVar32 == (float ******)0x0) goto LAB_109fa0450;
  uVar21 = 1;
  if (((ulong)pppppppfVar17[4] & 0x200) == 0) {
    uVar21 = 2;
  }
  ppppppfVar16 = ppppppfVar32;
  func_0x000109da017c(ppppppfVar32,uVar21);
  uStack_c0 = 0x101;
  pppppppfVar14 = pppppppfVar33;
  FUN_109d5d1c0(pppppppfVar33,ppppppfVar16,pppppppfVar12,0x103,0,&pppppppfStack_e0);
  pppppppfVar12 = unaff_x23 + 2;
  FUN_109fa957c(pppppppfVar12,unaff_x27);
  FUN_109d97dec(pppppppfVar14,1,pppppppfVar12);
  ppppppfVar16 = param_2[3];
  if ((*(byte *)((long)ppppppfVar16 + 0x17) >> 4 & 1) == 0) {
    ppppppfStack_1c8 = (float ******)0x0;
    ppppppfVar29 = (float ******)&UNK_10f5fa524;
  }
  else {
    func_0x000109da271c();
    ppppppfVar29 = ppppppfVar16 + 2;
    ppppppfStack_1c8 = (float ******)*ppppppfVar16;
  }
  ppppppfVar16 = param_2[0x1b];
  FUN_109fa9db0(ppppppfVar16,unaff_x27);
  pppppppfVar12 = unaff_x23 + 2;
  FUN_109fa9650(pppppppfVar12,ppppppfVar29,ppppppfStack_1c8,*(undefined4 *)ppppppfVar16);
  FUN_109d97dec(pppppppfVar14,7,pppppppfVar12);
  pppppppfVar12 = pppppppfVar17;
  FUN_109faa210();
  pppppppfVar15 = pppppppfVar14;
  if (-1 < (int)pppppppfVar12) {
    pppppppfVar15 = (float *******)unaff_x23[0x43];
    FUN_109d66880(pppppppfVar15,0,0);
    pppppppfVar18 = (float *******)unaff_x23[0x42];
    uStack_130 = pppppppfVar15;
    FUN_109d66880(pppppppfVar18,(ulong)pppppppfVar12 & 0xffffffff,0);
    uStack_c0 = 0x101;
    pppppppfVar15 = pppppppfVar33;
    pppppppfStack_128 = pppppppfVar18;
    FUN_109faa5c8(pppppppfVar33,ppppppfVar32,pppppppfVar14,&uStack_130,2,&pppppppfStack_e0);
    unaff_x27 = pppppppfVar12;
  }
  FUN_109f9ede0(pppppppfVar35,pppppppfVar17,&pppppppfStack_198);
  pppppppfVar35[3] = (float ******)pppppppfVar15;
LAB_109fa0d7c:
  pppppppfVar17 = param_2;
  FUN_109fa90d0(param_2,unaff_x26);
  if (pppppppfVar17 == (float *******)0x0) goto LAB_109fa0450;
  pppppppfVar12 = (float *******)*unaff_x23;
  FUN_109f9f1c0(pppppppfVar12,unaff_x26[6],unaff_x23 + 0x38);
  unaff_x23 = pppppppfVar12;
  if (pppppppfVar12 == (float *******)0x0) goto LAB_109fa0450;
  if (*(char *)(pppppppfVar12 + 1) == '\x12') {
    fVar39 = *(float *)(pppppppfVar12 + 4);
    ppppppfVar16 = pppppppfVar12[3];
    if (((ulong)ppppppfVar16[1] & 0xfe) == 0x12) {
      ppppppfVar16 = (float ******)*ppppppfVar16[2];
    }
    iVar20 = (int)ppppppfVar16;
    FUN_109d9f594();
    if ((uint)((int)fVar39 * iVar20) < 8) {
      uVar22 = 0;
    }
    else {
      uVar36 = (ulong)((uint)((int)fVar39 * iVar20) >> 3) - 1;
      uVar36 = uVar36 | uVar36 >> 1;
      uVar36 = uVar36 | uVar36 >> 2;
      uVar36 = uVar36 | uVar36 >> 4;
      uVar36 = uVar36 | uVar36 >> 8;
      uVar22 = ((uint)(uVar36 >> 0x10) | (uint)uVar36) + 1;
    }
    if (0xf < uVar22) {
      uVar22 = 0x10;
    }
    uVar36 = (ulong)uVar22;
  }
  else {
    uVar36 = 4;
  }
  uStack_c0 = 0x101;
  FUN_109d5d1c0(pppppppfVar33,pppppppfVar12,pppppppfVar17,
                0x3fU - (int)LZCOUNT(uVar36) & 0xff | 0x100,0,&pppppppfStack_e0);
  if (pppppppfVar33 == (float *******)0x0) goto LAB_109fa0450;
  unaff_x28 = param_3 + 9;
  pppppppfVar35 = param_2 + 6;
  FUN_109fab460(pppppppfVar35,*(undefined4 *)unaff_x28,unaff_x28);
  goto LAB_109fa044c;
}



/* Entry: 109fa1afc; end: 109fa511b;  */

/* WARNING: Removing unreachable block (ram,0x000109fa5918) */
/* WARNING: Removing unreachable block (ram,0x000109fa59e4) */

mach_header * FUN_109fa1afc(mach_header *param_1,mach_header *param_2,mach_header *param_3)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [8];
  long *plVar17;
  mach_header **ppmVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  mach_header *pmVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  dword *pdVar25;
  dword *pdVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  mach_header *pmVar39;
  undefined8 uVar40;
  mach_header *pmVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  mach_header *pmVar45;
  mach_header *pmVar46;
  uint uVar47;
  uint uVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  int iVar53;
  long *plVar54;
  mach_header *pmVar55;
  ulong uVar56;
  mach_header *pmVar57;
  undefined1 auVar58 [8];
  undefined8 uVar59;
  mach_header *pmVar60;
  mach_header **ppmVar61;
  mach_header *pmVar62;
  mach_header *unaff_x24;
  mach_header *pmVar63;
  long lVar64;
  long lVar65;
  mach_header *unaff_x25;
  mach_header *unaff_x26;
  long lVar66;
  undefined8 uVar67;
  mach_header *unaff_x27;
  long lVar68;
  mach_header *unaff_x28;
  undefined1 auStack_548 [32];
  undefined2 uStack_528;
  mach_header *pmStack_520;
  mach_header *pmStack_518;
  mach_header *pmStack_510;
  mach_header *pmStack_508;
  undefined1 ***pppuStack_500;
  code *pcStack_4f8;
  mach_header mStack_4f0;
  undefined2 uStack_4d0;
  mach_header *pmStack_4c8;
  ulong uStack_4c0;
  undefined1 auStack_4b8 [16];
  mach_header *pmStack_4a8;
  ulong uStack_4a0;
  long lStack_488;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  ulong uStack_420;
  mach_header **ppmStack_410;
  mach_header *pmStack_408;
  uint uStack_3fc;
  mach_header *pmStack_3f8;
  mach_header **ppmStack_3f0;
  mach_header *pmStack_3e8;
  mach_header *pmStack_3e0;
  mach_header *pmStack_3d8;
  mach_header *pmStack_3d0;
  mach_header *pmStack_3c8;
  long lStack_3c0;
  mach_header *pmStack_3b8;
  mach_header *pmStack_3b0;
  mach_header *pmStack_3a8;
  undefined1 auStack_39c [4];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [15];
  undefined1 uStack_371;
  undefined7 uStack_370;
  char cStack_369;
  undefined1 auStack_360 [16];
  mach_header *pmStack_350;
  mach_header *pmStack_348;
  mach_header *pmStack_340;
  dword *pdStack_338;
  mach_header *pmStack_330;
  mach_header *pmStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  mach_header **ppmStack_308;
  mach_header *pmStack_300;
  mach_header *pmStack_2f8;
  mach_header *pmStack_2f0;
  mach_header *pmStack_2e8;
  mach_header *pmStack_2e0;
  mach_header *pmStack_2d8;
  mach_header *pmStack_2d0;
  mach_header *pmStack_2c8;
  undefined1 auStack_2c0 [16];
  mach_header *apmStack_2b0 [2];
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  long lStack_268;
  mach_header *pmStack_250;
  mach_header *pmStack_248;
  mach_header *pmStack_240;
  mach_header *pmStack_238;
  mach_header *pmStack_230;
  mach_header *pmStack_228;
  mach_header *pmStack_220;
  mach_header *pmStack_218;
  mach_header *pmStack_210;
  mach_header *pmStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  mach_header *pmStack_1e8;
  mach_header *pmStack_1e0;
  mach_header *pmStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1b0;
  undefined *apuStack_1a8 [4];
  undefined2 uStack_188;
  undefined1 auStack_180 [16];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined1 auStack_158 [23];
  byte bStack_141;
  undefined2 uStack_138;
  undefined1 auStack_130 [23];
  byte bStack_119;
  mach_header **ppmStack_118;
  mach_header *pmStack_110;
  undefined1 *puStack_108;
  mach_header **ppmStack_100;
  mach_header **ppmStack_f8;
  mach_header *pmStack_f0;
  undefined1 *puStack_e8;
  mach_header **ppmStack_e0;
  mach_header **ppmStack_d8;
  mach_header *pmStack_d0;
  undefined1 *puStack_c8;
  mach_header **ppmStack_c0;
  mach_header *pmStack_b8;
  mach_header *pmStack_b0;
  mach_header *pmStack_a8;
  undefined1 uStack_99;
  undefined1 auStack_98 [16];
  mach_header *pmStack_88;
  mach_header *pmStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmVar60 = *(mach_header **)&param_2->ncmds;
  pmVar62 = *(mach_header **)param_2;
  plVar54 = *(long **)pmVar62;
  ppmStack_118 = &pmStack_b8;
  puStack_108 = &uStack_99;
  ppmStack_100 = &pmStack_a8;
  uVar47 = param_3[1].cpusubtype;
  pmVar21 = param_3;
  pmVar55 = pmVar60;
  pmVar46 = pmVar60;
  pmVar57 = pmVar60;
  pmVar41 = param_3;
  pmStack_1d8 = param_1;
  pmStack_110 = param_2;
  ppmStack_f8 = ppmStack_118;
  pmStack_f0 = param_2;
  puStack_e8 = puStack_108;
  ppmStack_e0 = ppmStack_100;
  ppmStack_d8 = ppmStack_118;
  pmStack_d0 = param_2;
  puStack_c8 = puStack_108;
  ppmStack_c0 = ppmStack_100;
  pmStack_b8 = pmVar60;
  pmStack_b0 = param_2;
  pmStack_a8 = pmVar60;
  if ((int)uVar47 < 0xe3) {
    if ((int)uVar47 < 0x9b) {
      if ((int)uVar47 < 0x66) {
        if ((int)uVar47 < 0x5a) {
          if (uVar47 == 0x1f) {
            pmVar21 = (mach_header *)0x0;
            pmVar60 = param_2;
            FUN_109fa7b9c();
            pmVar55 = (mach_header *)0x0;
            if (pmVar60 != (mach_header *)0x0) {
              unaff_x25 = *(mach_header **)pmVar60;
              cVar4 = (char)unaff_x25->cpusubtype;
              lVar14 = *(long *)param_2;
              if ((unaff_x25 == (mach_header *)0x0) || (cVar4 != '\x12')) {
                lVar14 = *(long *)(lVar14 + 0x208);
              }
              else {
                func_0x000109f9a5dc(lVar14,unaff_x25[1].magic);
                cVar4 = (char)unaff_x25->cpusubtype;
              }
              puStack_170 = &UNK_10f62b4a0;
              uStack_168._0_4_ = 3;
              uStack_168._4_4_ = 0;
              if ((unaff_x25 != (mach_header *)0x0) && (cVar4 == '\x12')) {
                uVar47 = unaff_x25[1].magic - 2;
                if (uVar47 < 3) {
                  puStack_170 = (&PTR_DAT_110b96820)[uVar47];
                  uStack_168._0_4_ = 5;
                  uStack_168._4_4_ = 0;
                }
                else {
                  puStack_170 = &UNK_10f62b4a0;
                  uStack_168._0_4_ = 3;
                  uStack_168._4_4_ = 0;
                }
              }
              uStack_160 = 0x503;
              auStack_180._0_8_ = &UNK_10f62b39d;
              apuStack_1a8[0] = &UNK_10f62b3b0;
              uStack_188 = 0x103;
              FUN_109d35b30(auStack_158,auStack_180,apuStack_1a8);
              if (((char)unaff_x25->cpusubtype == '\x12' && unaff_x25 != (mach_header *)0x0) &&
                 (uVar47 = unaff_x25[1].magic - 2, uVar47 < 3)) {
                puStack_1d0 = (&PTR_DAT_110b96808)[uVar47];
                uStack_1c8 = 4;
              }
              else {
                puStack_1d0 = &UNK_10f62b4b3;
                uStack_1c8 = 2;
              }
              uStack_1b0 = 0x105;
              FUN_109d35b30(auStack_98,auStack_158,&puStack_1d0);
              FUN_109e04498(auStack_130,auStack_98);
              bVar5 = bStack_119;
              unaff_x24 = (mach_header *)auStack_130._0_8_;
              pmVar63 = *(mach_header **)&param_2->cpusubtype;
              unaff_x26 = (mach_header *)(ulong)bStack_119;
              auStack_98._0_8_ = unaff_x25;
              FUN_109d9f92c(lVar14,auStack_98,1,0);
              pmVar57 = (mach_header *)auStack_130._8_8_;
              if (-1 < (char)bVar5) {
                unaff_x24 = (mach_header *)auStack_130;
                pmVar57 = unaff_x26;
              }
              FUN_109d9d3e8(pmVar63,unaff_x24,pmVar57,lVar14,0);
              FUN_109fa8aa8(unaff_x24);
              pmVar57 = pmStack_a8;
              pmVar45 = unaff_x24;
              auStack_98._0_8_ = pmVar60;
              func_0x000109fa8b88();
              goto LAB_109fa4bf0;
            }
          }
          else {
            if (uVar47 != 0x23) {
              if (uVar47 == 0x3e) goto LAB_109fa21ec;
              goto LAB_109fa31bc;
            }
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar45 = pmVar60;
            pmVar41 = param_2;
            FUN_109fa8968();
            pmVar55 = (mach_header *)0x0;
            pmVar62 = (mach_header *)0x0;
            if (pmVar45 != (mach_header *)0x0) {
              lVar14 = *(long *)pmVar45;
              if ((lVar14 != 0) && (*(char *)(lVar14 + 8) == '\x12')) {
                lVar66._0_4_ = param_2->magic;
                lVar66._4_4_ = param_2->cputype;
                FUN_109f9e68c(lVar66,*(undefined4 *)(lVar14 + 0x20));
              }
              uStack_78 = 0x101;
              pmVar63 = (mach_header *)0x27;
              FUN_109d349d8();
              pmVar46 = pmVar57;
              goto LAB_109fa2038;
            }
          }
          goto LAB_109fa2050;
        }
        if (uVar47 - 0x5a < 3) {
          uVar48 = 3;
          if (uVar47 != 0x5b) {
            uVar48 = 4;
          }
          uVar50 = 2;
          if (uVar47 != 0x5a) {
            uVar50 = uVar48;
          }
          unaff_x24 = (mach_header *)(ulong)uVar50;
          if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa287c:
            uVar40 = 0;
          }
          else {
            pdVar25 = &param_2[1].ncmds;
            FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[3].cpusubtype + 0x18));
            if (pdVar25 == (dword *)0x0) goto LAB_109fa287c;
            uVar40 = *(undefined8 *)(pdVar25 + 6);
          }
          pmVar62 = param_2;
          FUN_109fa8c20(param_2,uVar40,&param_3[2].ncmds,unaff_x24);
          if (*(long *)&param_3[4].flags == 0) {
LAB_109fa2934:
            pmVar41 = (mach_header *)0x0;
          }
          else {
            pdVar25 = &param_2[1].ncmds;
            FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[4].flags + 0x18));
            if (pdVar25 == (dword *)0x0) goto LAB_109fa2934;
            pmVar41 = *(mach_header **)(pdVar25 + 6);
          }
          pmVar21 = param_3 + 4;
          pmVar55 = param_2;
          FUN_109fa8c20();
          if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
            uStack_78 = 0x101;
            unaff_x25 = pmVar60;
            FUN_109d8a4b4(pmVar60,1,pmVar62,pmVar55,auStack_98,0,0);
            uStack_78 = 0x101;
            pmVar55 = pmVar60;
            FUN_109d5c370(pmVar60,unaff_x25,0,auStack_98);
            unaff_x26 = (mach_header *)0x1;
            do {
              uStack_78 = 0x101;
              lVar14 = **(long **)(pmVar60 + 2) + 0x7b0;
              FUN_109d678e8(lVar14,unaff_x26,0);
              pmVar45 = pmVar60;
              func_0x000109d5c6e0(pmVar60,unaff_x25,lVar14,auStack_98);
              uStack_138 = 0x101;
              pmVar57 = pmVar60;
              func_0x000109d5c4a8();
              unaff_x26 = (mach_header *)((long)&unaff_x26->magic + 1);
              pmVar63 = pmVar55;
              pmVar46 = pmVar57;
              pmVar55 = pmVar57;
            } while (unaff_x24 != unaff_x26);
            goto LAB_109fa2038;
          }
          goto LAB_109fa2050;
        }
        if (2 < uVar47 - 0x60) goto LAB_109fa31bc;
        uVar48 = 3;
        if (uVar47 != 0x61) {
          uVar48 = 4;
        }
        uVar50 = 2;
        if (uVar47 != 0x60) {
          uVar50 = uVar48;
        }
        unaff_x24 = (mach_header *)(ulong)uVar50;
        if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa2834:
          uVar40 = 0;
        }
        else {
          pdVar25 = &param_2[1].ncmds;
          FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[3].cpusubtype + 0x18));
          if (pdVar25 == (dword *)0x0) goto LAB_109fa2834;
          uVar40 = *(undefined8 *)(pdVar25 + 6);
        }
        pmVar57 = param_2;
        FUN_109fa8c20(param_2,uVar40,&param_3[2].ncmds,unaff_x24);
        pmVar62 = pmVar60;
        FUN_109fa8968(pmVar60,param_2,pmVar57);
        if (*(long *)&param_3[4].flags == 0) {
LAB_109fa2abc:
          uVar40 = 0;
        }
        else {
          pdVar25 = &param_2[1].ncmds;
          FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[4].flags + 0x18));
          if (pdVar25 == (dword *)0x0) goto LAB_109fa2abc;
          uVar40 = *(undefined8 *)(pdVar25 + 6);
        }
        pmVar21 = param_2;
        FUN_109fa8c20(param_2,uVar40,param_3 + 4,unaff_x24);
        pmVar41 = param_2;
        FUN_109fa8968();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          unaff_x25 = pmVar60;
          FUN_109d3488c(pmVar60,0x20,pmVar62,pmVar55,auStack_98);
          uStack_78 = 0x101;
          pmVar55 = pmVar60;
          FUN_109d5c370(pmVar60,unaff_x25,0,auStack_98);
          unaff_x26 = (mach_header *)0x1;
          do {
            uStack_78 = 0x101;
            lVar14 = **(long **)(pmVar60 + 2) + 0x7b0;
            FUN_109d678e8(lVar14,unaff_x26,0);
            pmVar45 = pmVar60;
            func_0x000109d5c6e0(pmVar60,unaff_x25,lVar14,auStack_98);
            uStack_138 = 0x101;
            pmVar57 = pmVar60;
            func_0x000109d5c4a8();
            unaff_x26 = (mach_header *)((long)&unaff_x26->magic + 1);
            pmVar63 = pmVar55;
            pmVar46 = pmVar57;
            pmVar55 = pmVar57;
          } while (unaff_x24 != unaff_x26);
          goto LAB_109fa2038;
        }
        goto LAB_109fa2050;
      }
      if (0x70 < (int)uVar47) {
        if ((int)uVar47 < 0x8c) {
          if (uVar47 == 0x71) {
LAB_109fa21ec:
            pmVar62 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar57 = param_2;
            FUN_109fa7b9c(param_2,param_3,1);
            pmVar21 = (mach_header *)0x2;
            pmVar55 = param_2;
            FUN_109fa7b9c();
            unaff_x24 = pmVar57;
            if (((pmVar62 == (mach_header *)0x0) || (pmVar57 == (mach_header *)0x0)) ||
               (unaff_x25 = pmVar55, pmVar55 == (mach_header *)0x0)) goto LAB_109fa2050;
            lVar14 = *(long *)pmVar62;
            pmVar21 = pmVar62;
            if (*(int *)(lVar14 + 8) != 0x10d) {
              FUN_109d666e0();
              uStack_78 = 0x101;
              pmVar21 = pmVar60;
              FUN_109d3488c(pmVar60,0x21,pmVar62,lVar14,auStack_98);
            }
            unaff_x26 = *(mach_header **)pmVar57;
            unaff_x27 = *(mach_header **)pmVar55;
            if (unaff_x26 != unaff_x27) {
              uVar47 = unaff_x26->cpusubtype & 0xff;
              uVar48 = unaff_x26->cpusubtype & 0xfe;
              uVar50 = uVar47;
              if (uVar48 == 0x12) {
                uVar50 = *(uint *)(**(long **)&unaff_x26->ncmds + 8);
              }
              if ((((uVar50 & 0xff) < 4) || ((uVar50 & 0xff) == 5)) || ((uVar50 & 0xfd) == 4)) {
                uVar50 = unaff_x27->cpusubtype & 0xff;
                uVar51 = uVar50;
                if ((unaff_x27->cpusubtype & 0xfe) == 0x12) {
                  uVar51 = (uint)*(byte *)(**(long **)&unaff_x27->ncmds + 8);
                }
                if (uVar51 == 0xd) {
                  uStack_78 = 0x101;
                  pmVar57 = pmVar60;
                  FUN_109d349d8(pmVar60,0x31,pmVar55,unaff_x26,auStack_98);
                  pmVar55 = pmVar57;
                  goto LAB_109fa4f18;
                }
              }
              else {
                uVar50 = (uint)(byte)unaff_x27->cpusubtype;
              }
              uVar51 = uVar50 & 0xfe;
              uVar52 = uVar50;
              if (uVar51 == 0x12) {
                uVar52 = *(uint *)(**(long **)&unaff_x27->ncmds + 8);
              }
              if ((((uVar52 & 0xff) < 4) || ((uVar52 & 0xff) == 5)) || ((uVar52 & 0xfd) == 4)) {
                uVar52 = uVar47;
                if (uVar48 == 0x12) {
                  uVar52 = (uint)*(byte *)(**(long **)&unaff_x26->ncmds + 8);
                }
                if (uVar52 == 0xd) {
                  uStack_78 = 0x101;
                  unaff_x24 = pmVar60;
                  FUN_109d349d8(pmVar60,0x31,pmVar57,unaff_x27,auStack_98);
                  goto LAB_109fa4f18;
                }
              }
              if (uVar48 == 0x12) {
                uVar47 = (uint)*(byte *)(**(long **)&unaff_x26->ncmds + 8);
              }
              if (uVar47 == 0xd) {
                if (uVar51 == 0x12) {
                  uVar50 = (uint)*(byte *)(**(long **)&unaff_x27->ncmds + 8);
                }
                if (uVar50 == 0xd) {
                  unaff_x28 = unaff_x26;
                  if (uVar48 == 0x12) {
                    unaff_x28 = (mach_header *)**(undefined8 **)&unaff_x26->ncmds;
                  }
                  FUN_109d9f594();
                  pmVar41 = unaff_x27;
                  if (uVar51 == 0x12) {
                    pmVar41 = (mach_header *)**(undefined8 **)&unaff_x27->ncmds;
                  }
                  uVar47 = (uint)pmVar41;
                  FUN_109d9f594();
                  if ((uint)unaff_x28 < uVar47) {
                    uStack_78 = 0x101;
                    unaff_x24 = pmVar60;
                    FUN_109d349d8(pmVar60,0x27,pmVar57,unaff_x27,auStack_98);
                  }
                  else {
                    uStack_78 = 0x101;
                    pmVar57 = pmVar60;
                    FUN_109d349d8(pmVar60,0x27,pmVar55,unaff_x26,auStack_98);
                    pmVar55 = pmVar57;
                  }
                }
              }
            }
LAB_109fa4f18:
            uStack_78 = 0x101;
            FUN_109d8a7f0(pmVar60,pmVar21,unaff_x24,pmVar55,auStack_98,0);
            unaff_x25 = pmVar55;
            goto LAB_109fa4f3c;
          }
          if ((uVar47 != 0x87) && (uVar47 != 0x8a)) goto LAB_109fa31bc;
        }
        else if (uVar47 != 0x8c) {
          if (uVar47 == 0x8f) {
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar60 = pmStack_b8;
            pmVar41 = pmStack_b0;
            FUN_109fa7c1c();
            pmVar55 = (mach_header *)0x0;
            if (pmVar60 != (mach_header *)0x0) {
              unaff_x25 = *(mach_header **)pmVar60;
              cVar4 = (char)unaff_x25->cpusubtype;
              lVar14 = *(long *)param_2;
              if ((unaff_x25 == (mach_header *)0x0) || (cVar4 != '\x12')) {
                lVar14 = *(long *)(lVar14 + 0x210);
              }
              else {
                FUN_109f9e68c(lVar14,unaff_x25[1].magic);
                cVar4 = (char)unaff_x25->cpusubtype;
              }
              puStack_170 = &UNK_10f62b48a;
              uStack_168._0_4_ = 3;
              uStack_168._4_4_ = 0;
              if ((unaff_x25 != (mach_header *)0x0) && (cVar4 == '\x12')) {
                uVar47 = unaff_x25[1].magic - 2;
                if (uVar47 < 3) {
                  puStack_170 = (&PTR_DAT_110b96838)[uVar47];
                  uStack_168._0_4_ = 5;
                  uStack_168._4_4_ = 0;
                }
                else {
                  puStack_170 = &UNK_10f62b48a;
                  uStack_168._0_4_ = 3;
                  uStack_168._4_4_ = 0;
                }
              }
              uStack_160 = 0x503;
              auStack_180._0_8_ = &UNK_10f62b37b;
              apuStack_1a8[0] = &UNK_10f62b38a;
              uStack_188 = 0x103;
              FUN_109d35b30(auStack_158,auStack_180,apuStack_1a8);
              if (((char)unaff_x25->cpusubtype == '\x12' && unaff_x25 != (mach_header *)0x0) &&
                 (uVar47 = unaff_x25[1].magic - 2, uVar47 < 3)) {
                puStack_1d0 = (&PTR_DAT_110b96820)[uVar47];
                uStack_1c8 = 5;
              }
              else {
                puStack_1d0 = &UNK_10f62b4a0;
                uStack_1c8 = 3;
              }
              uStack_1b0 = 0x105;
              FUN_109d35b30(auStack_98,auStack_158,&puStack_1d0);
              FUN_109e04498(auStack_130,auStack_98);
              bVar5 = bStack_119;
              unaff_x24 = (mach_header *)auStack_130._0_8_;
              pmVar63 = *(mach_header **)&param_2->cpusubtype;
              unaff_x26 = (mach_header *)(ulong)bStack_119;
              auStack_98._0_8_ = unaff_x25;
              FUN_109d9f92c(lVar14,auStack_98,1,0);
              pmVar57 = (mach_header *)auStack_130._8_8_;
              if (-1 < (char)bVar5) {
                unaff_x24 = (mach_header *)auStack_130;
                pmVar57 = unaff_x26;
              }
              FUN_109d9d3e8(pmVar63,unaff_x24,pmVar57,lVar14,0);
              FUN_109fa8aa8(unaff_x24);
              pmVar57 = pmStack_a8;
              pmVar45 = unaff_x24;
              auStack_98._0_8_ = pmVar60;
              func_0x000109fa8b88();
              goto LAB_109fa4bf0;
            }
          }
          else {
            if (uVar47 != 0x96) goto LAB_109fa31bc;
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar60 = pmStack_b8;
            pmVar41 = pmStack_b0;
            FUN_109fa7c1c();
            pmVar55 = (mach_header *)0x0;
            if (pmVar60 != (mach_header *)0x0) {
              unaff_x25 = *(mach_header **)pmVar60;
              cVar4 = (char)unaff_x25->cpusubtype;
              lVar14 = *(long *)param_2;
              if ((unaff_x25 == (mach_header *)0x0) || (cVar4 != '\x12')) {
                lVar14 = *(long *)(lVar14 + 0x210);
              }
              else {
                FUN_109f9e68c(lVar14,unaff_x25[1].magic);
                cVar4 = (char)unaff_x25->cpusubtype;
              }
              puStack_170 = &UNK_10f62b48a;
              uStack_168._0_4_ = 3;
              uStack_168._4_4_ = 0;
              if ((unaff_x25 != (mach_header *)0x0) && (cVar4 == '\x12')) {
                uVar47 = unaff_x25[1].magic - 2;
                if (uVar47 < 3) {
                  puStack_170 = (&PTR_DAT_110b96838)[uVar47];
                  uStack_168._0_4_ = 5;
                  uStack_168._4_4_ = 0;
                }
                else {
                  puStack_170 = &UNK_10f62b48a;
                  uStack_168._0_4_ = 3;
                  uStack_168._4_4_ = 0;
                }
              }
              uStack_160 = 0x503;
              auStack_180._0_8_ = &UNK_10f62b38e;
              apuStack_1a8[0] = &UNK_10f62b38a;
              uStack_188 = 0x103;
              FUN_109d35b30(auStack_158,auStack_180,apuStack_1a8);
              if (((char)unaff_x25->cpusubtype == '\x12' && unaff_x25 != (mach_header *)0x0) &&
                 (uVar47 = unaff_x25[1].magic - 2, uVar47 < 3)) {
                puStack_1d0 = (&PTR_DAT_110b96820)[uVar47];
                uStack_1c8 = 5;
              }
              else {
                puStack_1d0 = &UNK_10f62b4a0;
                uStack_1c8 = 3;
              }
              uStack_1b0 = 0x105;
              FUN_109d35b30(auStack_98,auStack_158,&puStack_1d0);
              FUN_109e04498(auStack_130,auStack_98);
              bVar5 = bStack_119;
              unaff_x24 = (mach_header *)auStack_130._0_8_;
              pmVar63 = *(mach_header **)&param_2->cpusubtype;
              unaff_x26 = (mach_header *)(ulong)bStack_119;
              auStack_98._0_8_ = unaff_x25;
              FUN_109d9f92c(lVar14,auStack_98,1,0);
              pmVar57 = (mach_header *)auStack_130._8_8_;
              if (-1 < (char)bVar5) {
                unaff_x24 = (mach_header *)auStack_130;
                pmVar57 = unaff_x26;
              }
              FUN_109d9d3e8(pmVar63,unaff_x24,pmVar57,lVar14,0);
              FUN_109fa8aa8(unaff_x24);
              pmVar57 = pmStack_a8;
              pmVar45 = unaff_x24;
              auStack_98._0_8_ = pmVar60;
              func_0x000109fa8b88();
              goto LAB_109fa4bf0;
            }
          }
          goto LAB_109fa2050;
        }
        pmVar55 = param_1;
        pmVar41 = param_2;
        if (*(long *)&param_3[3].cpusubtype != 0) {
          pmVar41 = (mach_header *)(ulong)*(uint *)(*(long *)&param_3[3].cpusubtype + 0x18);
          pmVar55 = (mach_header *)&param_2[1].ncmds;
          FUN_109fab870();
          if ((pmVar55 != (mach_header *)0x0) &&
             (pmVar41 = *(mach_header **)&pmVar55->flags, pmVar41 != (mach_header *)0x0)) {
            pmVar45 = (mach_header *)&param_3[2].ncmds;
            pmVar57 = param_2;
            FUN_109fa8c20();
            pmVar63 = pmVar41;
            pmVar46 = pmVar57;
            goto LAB_109fa2038;
          }
        }
        goto LAB_109fa2050;
      }
      if (uVar47 - 0x66 < 3) {
        uVar48 = 3;
        if (uVar47 != 0x67) {
          uVar48 = 4;
        }
        uVar50 = 2;
        if (uVar47 != 0x66) {
          uVar50 = uVar48;
        }
        unaff_x24 = (mach_header *)(ulong)uVar50;
        if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa28fc:
          uVar40 = 0;
        }
        else {
          pdVar25 = &param_2[1].ncmds;
          FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[3].cpusubtype + 0x18));
          if (pdVar25 == (dword *)0x0) goto LAB_109fa28fc;
          uVar40 = *(undefined8 *)(pdVar25 + 6);
        }
        pmVar62 = param_2;
        FUN_109fa8c20(param_2,uVar40,&param_3[2].ncmds,unaff_x24);
        if (*(long *)&param_3[4].flags == 0) {
LAB_109fa29f8:
          pmVar41 = (mach_header *)0x0;
        }
        else {
          pdVar25 = &param_2[1].ncmds;
          FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[4].flags + 0x18));
          if (pdVar25 == (dword *)0x0) goto LAB_109fa29f8;
          pmVar41 = *(mach_header **)(pdVar25 + 6);
        }
        pmVar21 = param_3 + 4;
        pmVar55 = param_2;
        FUN_109fa8c20();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          unaff_x25 = pmVar60;
          FUN_109d8a4b4(pmVar60,0xe,pmVar62,pmVar55,auStack_98,0,0);
          uStack_78 = 0x101;
          pmVar55 = pmVar60;
          FUN_109d5c370(pmVar60,unaff_x25,0,auStack_98);
          unaff_x26 = (mach_header *)0x1;
          do {
            uStack_78 = 0x101;
            lVar14 = **(long **)(pmVar60 + 2) + 0x7b0;
            FUN_109d678e8(lVar14,unaff_x26,0);
            pmVar45 = pmVar60;
            func_0x000109d5c6e0(pmVar60,unaff_x25,lVar14,auStack_98);
            uStack_138 = 0x101;
            pmVar57 = pmVar60;
            func_0x000109d5c5d0();
            unaff_x26 = (mach_header *)((long)&unaff_x26->magic + 1);
            pmVar63 = pmVar55;
            pmVar46 = pmVar57;
            pmVar55 = pmVar57;
          } while (unaff_x24 != unaff_x26);
          goto LAB_109fa2038;
        }
        goto LAB_109fa2050;
      }
      if (2 < uVar47 - 0x6c) goto LAB_109fa31bc;
      uVar48 = 3;
      if (uVar47 != 0x6d) {
        uVar48 = 4;
      }
      uVar50 = 2;
      if (uVar47 != 0x6c) {
        uVar50 = uVar48;
      }
      unaff_x24 = (mach_header *)(ulong)uVar50;
      if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa28b4:
        uVar40 = 0;
      }
      else {
        pdVar25 = &param_2[1].ncmds;
        FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[3].cpusubtype + 0x18));
        if (pdVar25 == (dword *)0x0) goto LAB_109fa28b4;
        uVar40 = *(undefined8 *)(pdVar25 + 6);
      }
      pmVar57 = param_2;
      FUN_109fa8c20(param_2,uVar40,&param_3[2].ncmds,unaff_x24);
      pmVar62 = pmVar60;
      FUN_109fa8968(pmVar60,param_2,pmVar57);
      if (*(long *)&param_3[4].flags == 0) {
LAB_109fa2b88:
        uVar40 = 0;
      }
      else {
        pdVar25 = &param_2[1].ncmds;
        FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[4].flags + 0x18));
        if (pdVar25 == (dword *)0x0) goto LAB_109fa2b88;
        uVar40 = *(undefined8 *)(pdVar25 + 6);
      }
      pmVar21 = param_2;
      FUN_109fa8c20(param_2,uVar40,param_3 + 4,unaff_x24);
      pmVar41 = param_2;
      FUN_109fa8968();
      if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
        uStack_78 = 0x101;
        unaff_x25 = pmVar60;
        FUN_109d3488c(pmVar60,0x21,pmVar62,pmVar55,auStack_98);
        uStack_78 = 0x101;
        pmVar55 = pmVar60;
        FUN_109d5c370(pmVar60,unaff_x25,0,auStack_98);
        unaff_x26 = (mach_header *)0x1;
        do {
          uStack_78 = 0x101;
          lVar14 = **(long **)(pmVar60 + 2) + 0x7b0;
          FUN_109d678e8(lVar14,unaff_x26,0);
          pmVar45 = pmVar60;
          func_0x000109d5c6e0(pmVar60,unaff_x25,lVar14,auStack_98);
          uStack_138 = 0x101;
          pmVar57 = pmVar60;
          func_0x000109d5c5d0();
          unaff_x26 = (mach_header *)((long)&unaff_x26->magic + 1);
          pmVar63 = pmVar55;
          pmVar55 = pmVar57;
          pmVar46 = pmVar57;
        } while (unaff_x24 != unaff_x26);
        goto LAB_109fa2038;
      }
    }
    else if ((int)uVar47 < 0xb6) {
      if ((int)uVar47 < 0xab) {
        if (uVar47 == 0x9b) {
          pmVar21 = (mach_header *)0x0;
          pmVar57 = param_2;
          FUN_109fa7b9c();
          pmVar55 = (mach_header *)0x0;
          if (pmVar57 != (mach_header *)0x0) {
            pmVar63 = (mach_header *)&DAT_10f62b282;
            pmVar57 = (mach_header *)&ppmStack_d8;
            pmVar45 = (mach_header *)0x9;
            FUN_109fa7cc0();
            pmVar46 = pmVar57;
            goto LAB_109fa2038;
          }
        }
        else if (uVar47 == 0x9c) {
          pmVar57 = param_2;
          FUN_109fa7b9c(param_2,param_3,0);
          pmVar62 = pmStack_b8;
          FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
          pmVar21 = param_2;
          FUN_109fa7b9c(param_2,param_3,1);
          pmVar55 = pmStack_b8;
          pmVar41 = pmStack_b0;
          FUN_109fa7c1c();
          if ((pmVar62 != (mach_header *)0x0) &&
             (pmVar21 = (mach_header *)0x0, pmVar55 != (mach_header *)0x0)) {
            uStack_78 = 0x101;
            func_0x000109d5c758(pmVar60,pmVar62,pmVar55,auStack_98,0);
            goto LAB_109fa4f3c;
          }
        }
        else {
          if (uVar47 != 0xa9) goto LAB_109fa31bc;
          pmVar21 = (mach_header *)0x0;
          pmVar57 = param_2;
          FUN_109fa7b9c();
          pmVar55 = (mach_header *)0x0;
          if (pmVar57 != (mach_header *)0x0) {
            pmVar63 = (mach_header *)&DAT_10f62b310;
            pmVar57 = (mach_header *)&ppmStack_d8;
            pmVar45 = (mach_header *)0x9;
            FUN_109fa7cc0();
            pmVar46 = pmVar57;
            goto LAB_109fa2038;
          }
        }
      }
      else if (uVar47 == 0xab) {
        pmVar21 = (mach_header *)0x0;
        pmVar57 = param_2;
        FUN_109fa7b9c();
        pmVar55 = (mach_header *)0x0;
        if (pmVar57 != (mach_header *)0x0) {
          pmVar63 = (mach_header *)&DAT_10f62b343;
          pmVar57 = (mach_header *)&ppmStack_d8;
          pmVar45 = (mach_header *)0x8;
          FUN_109fa7cc0();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
      }
      else {
        if (uVar47 != 0xb1) {
          if (uVar47 == 0xb4) goto LAB_109fa2c64;
          goto LAB_109fa31bc;
        }
        pmVar57 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmStack_b8;
        FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar55 = pmStack_b8;
        pmVar41 = pmStack_b0;
        FUN_109fa7c1c();
        if ((pmVar62 != (mach_header *)0x0) &&
           (pmVar21 = (mach_header *)0x0, pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          func_0x000109d5ca58(pmVar60,pmVar62,pmVar55,auStack_98,0);
          goto LAB_109fa4f3c;
        }
      }
    }
    else {
      switch(uVar47) {
      case 0xc0:
      case 0xc2:
        pmVar57 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmStack_b8;
        FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar55 = pmStack_b8;
        pmVar41 = pmStack_b0;
        FUN_109fa7c1c();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          FUN_109d8a4b4(pmVar60,1,pmVar62,pmVar55,auStack_98,0,0);
          goto LAB_109fa4f3c;
        }
        break;
      case 0xc1:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 0xcb:
      case 0xce:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xdc:
        goto LAB_109fa31bc;
      case 200:
        pmVar21 = (mach_header *)0x0;
        pmVar57 = param_2;
        FUN_109fa7b9c();
        pmVar55 = (mach_header *)0x0;
        if (pmVar57 != (mach_header *)0x0) {
          pmVar63 = (mach_header *)&DAT_10f62b339;
          pmVar57 = (mach_header *)&ppmStack_d8;
          pmVar45 = (mach_header *)0x9;
          FUN_109fa7cc0();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xc9:
        pmVar21 = (mach_header *)0x0;
        pmVar57 = param_2;
        FUN_109fa7b9c();
        pmVar55 = (mach_header *)0x0;
        if (pmVar57 != (mach_header *)0x0) {
          pmVar63 = (mach_header *)&DAT_10f62b305;
          pmVar57 = (mach_header *)&ppmStack_d8;
          pmVar45 = (mach_header *)0xa;
          FUN_109fa7cc0();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xca:
        pmVar60 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar21 = (mach_header *)0x2;
        pmVar55 = param_2;
        FUN_109fa7b9c();
        if (((pmVar60 != (mach_header *)0x0) && (pmVar62 != (mach_header *)0x0)) &&
           (pmVar55 != (mach_header *)0x0)) {
          pmVar63 = (mach_header *)&DAT_10f62b36a;
          pmVar57 = (mach_header *)&ppmStack_118;
          pmVar45 = (mach_header *)0x3;
          FUN_109fa8058();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xcc:
        pmVar21 = (mach_header *)0x0;
        pmVar57 = param_2;
        FUN_109fa7b9c();
        pmVar55 = (mach_header *)0x0;
        if (pmVar57 != (mach_header *)0x0) {
          pmVar63 = (mach_header *)&UNK_10f62b31a;
          pmVar57 = (mach_header *)&ppmStack_d8;
          pmVar45 = (mach_header *)0xa;
          FUN_109fa7cc0();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xcd:
      case 0xcf:
        pmVar57 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmStack_b8;
        FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar55 = pmStack_b8;
        pmVar41 = pmStack_b0;
        FUN_109fa7c1c();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          FUN_109d8a4b4(pmVar60,3,pmVar62,pmVar55,auStack_98,0,0);
          goto LAB_109fa4f3c;
        }
        break;
      case 0xd9:
        pmVar21 = (mach_header *)0x0;
        pmVar57 = param_2;
        FUN_109fa7b9c();
        pmVar55 = (mach_header *)0x0;
        if (pmVar57 != (mach_header *)0x0) {
          pmVar63 = (mach_header *)&DAT_10f62b32f;
          pmVar57 = (mach_header *)&ppmStack_d8;
          pmVar45 = (mach_header *)0x9;
          FUN_109fa7cc0();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xda:
        pmVar60 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar21 = (mach_header *)0x2;
        pmVar55 = param_2;
        FUN_109fa7b9c();
        if (((pmVar60 != (mach_header *)0x0) && (pmVar62 != (mach_header *)0x0)) &&
           (pmVar55 != (mach_header *)0x0)) {
          pmVar63 = (mach_header *)&UNK_10f62b36e;
          pmVar57 = (mach_header *)&ppmStack_118;
          pmVar45 = (mach_header *)0x3;
          FUN_109fa8058();
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        break;
      case 0xdb:
      case 0xdd:
        pmVar57 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmStack_b8;
        FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar55 = pmStack_b8;
        pmVar41 = pmStack_b0;
        FUN_109fa7c1c();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          FUN_109d8a4b4(pmVar60,4,pmVar62,pmVar55,auStack_98,0,0);
          goto LAB_109fa4f3c;
        }
        break;
      default:
        if ((uVar47 != 0xb6) && (uVar47 != 0xb8)) goto LAB_109fa31bc;
LAB_109fa2c64:
        uVar48 = 3;
        if (uVar47 != 0xb6) {
          uVar48 = 4;
        }
        uVar50 = 2;
        if (uVar47 != 0xb4) {
          uVar50 = uVar48;
        }
        pmVar62 = (mach_header *)(ulong)uVar50;
        pmVar55 = param_1;
        pmVar41 = param_2;
        if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa2c9c:
          pmVar60 = (mach_header *)0x0;
        }
        else {
          pmVar41 = (mach_header *)(ulong)*(uint *)(*(long *)&param_3[3].cpusubtype + 0x18);
          pmVar55 = (mach_header *)&param_2[1].ncmds;
          FUN_109fab870();
          if (pmVar55 == (mach_header *)0x0) goto LAB_109fa2c9c;
          pmVar60 = *(mach_header **)&pmVar55->flags;
        }
        if (*(long *)&param_3[4].flags != 0) {
          pmVar41 = (mach_header *)(ulong)*(uint *)(*(long *)&param_3[4].flags + 0x18);
          pmVar55 = (mach_header *)&param_2[1].ncmds;
          FUN_109fab870();
          if ((pmVar55 != (mach_header *)0x0) && (pmVar60 != (mach_header *)0x0)) {
            lVar14._0_4_ = pmVar55->flags;
            lVar14._4_4_ = pmVar55->reserved;
            unaff_x24 = (mach_header *)0x0;
            if (lVar14 != 0) {
              pmVar55 = param_2;
              FUN_109fa8c20(param_2,pmVar60,&param_3[2].ncmds,pmVar62);
              pmVar21 = param_2;
              FUN_109fa8c20(param_2,lVar14,param_3 + 4,pmVar62);
              auStack_98._8_8_ = *(undefined8 *)pmVar55;
              lVar14 = auStack_98._8_8_;
              if ((*(uint *)(auStack_98._8_8_ + 8) & 0xfe) == 0x12) {
                lVar14 = **(long **)(auStack_98._8_8_ + 0x10);
              }
              if (((*(uint *)(auStack_98._8_8_ + 8) & 0xff) == 0x12) &&
                 (uVar47 = *(int *)(auStack_98._8_8_ + 0x20) - 2, uVar47 < 3)) {
                pmStack_88 = (mach_header *)(&PTR_DAT_110b96820)[uVar47];
                pmStack_80 = (mach_header *)0x5;
              }
              else {
                pmStack_88 = (mach_header *)&UNK_10f62b4a0;
                pmStack_80 = (mach_header *)0x3;
              }
              uStack_78 = 0x503;
              auStack_98._0_8_ = &UNK_10f62b372;
              FUN_109e04498(auStack_158,auStack_98);
              bVar5 = bStack_141;
              unaff_x26 = (mach_header *)auStack_158._0_8_;
              unaff_x24 = *(mach_header **)&param_2->cpusubtype;
              unaff_x27 = (mach_header *)(ulong)bStack_141;
              auStack_98._0_8_ = auStack_98._8_8_;
              FUN_109d9f92c(lVar14,auStack_98,2,0);
              unaff_x25 = unaff_x26;
              pmVar57 = (mach_header *)auStack_158._8_8_;
              if (-1 < (char)bVar5) {
                unaff_x25 = (mach_header *)auStack_158;
                pmVar57 = unaff_x27;
              }
              FUN_109d9d3e8(unaff_x24,unaff_x25,pmVar57,lVar14,0);
              FUN_109fa8aa8(unaff_x25);
              pmVar57 = pmStack_a8;
              pmVar63 = unaff_x24;
              pmVar45 = unaff_x25;
              auStack_98._0_8_ = pmVar55;
              auStack_98._8_8_ = pmVar21;
              func_0x000109fa8b88();
              pmVar60 = pmVar55;
              pmVar46 = pmVar57;
              unaff_x28 = (mach_header *)auStack_158._8_8_;
              goto code_r0x000109fa4428;
            }
          }
        }
      }
    }
    goto LAB_109fa2050;
  }
  if (0x182 < (int)uVar47) {
    if ((int)uVar47 < 0x1a2) {
      if (0x196 < (int)uVar47) {
        if ((int)uVar47 < 0x19c) {
          if (uVar47 == 0x197) goto LAB_109fa259c;
          if (uVar47 == 0x19a) goto LAB_109fa252c;
        }
        else {
          if (uVar47 == 0x19c) {
LAB_109fa252c:
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar62 = pmVar60;
            FUN_109fa8968(pmVar60,param_2,pmVar21);
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,1);
            pmVar41 = param_2;
            FUN_109fa8968();
            if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
              uStack_78 = 0x101;
              pmVar63 = (mach_header *)0x24;
              FUN_109d3488c();
              pmVar45 = pmVar62;
              pmVar46 = pmVar57;
              goto LAB_109fa2038;
            }
            goto LAB_109fa2050;
          }
          if (uVar47 == 0x1a0) {
            pmVar57 = param_2;
            FUN_109fa7b9c(param_2,param_3,0);
            pmVar62 = pmVar60;
            FUN_109fa8968(pmVar60,param_2,pmVar57);
            pmVar21 = param_2;
            FUN_109fa7b9c(param_2,param_3,1);
            pmVar41 = param_2;
            FUN_109fa8968();
            if ((pmVar62 != (mach_header *)0x0) &&
               (pmVar60 = pmVar55, pmVar55 != (mach_header *)0x0)) {
              pmVar21 = *(mach_header **)pmVar62;
              pmVar57 = pmVar21;
              FUN_109fa8a5c();
              uStack_78 = 0x503;
              auStack_98._0_8_ = &UNK_10f62b2bb;
              pmStack_88 = pmVar57;
              pmStack_80 = pmVar41;
              FUN_109e04498(auStack_158,auStack_98);
              bVar5 = bStack_141;
              unaff_x25 = (mach_header *)auStack_158._0_8_;
              unaff_x24 = *(mach_header **)&param_2->cpusubtype;
              unaff_x26 = (mach_header *)(ulong)bStack_141;
              auStack_98._0_8_ = pmVar21;
              auStack_98._8_8_ = pmVar21;
              FUN_109d9f92c(pmVar21,auStack_98,2,0);
              pmVar57 = (mach_header *)auStack_158._8_8_;
              if (-1 < (char)bVar5) {
                unaff_x25 = (mach_header *)auStack_158;
                pmVar57 = unaff_x26;
              }
              FUN_109d9d3e8(unaff_x24,unaff_x25,pmVar57,pmVar21,0);
              FUN_109fa8aa8(unaff_x25);
              pmVar57 = pmStack_a8;
              pmVar63 = unaff_x24;
              pmVar45 = unaff_x25;
              auStack_98._0_8_ = pmVar62;
              auStack_98._8_8_ = pmVar55;
              func_0x000109fa8b88();
              pmVar46 = pmVar57;
              unaff_x27 = (mach_header *)auStack_158._8_8_;
              goto code_r0x000109fa4428;
            }
            goto LAB_109fa2050;
          }
        }
        goto LAB_109fa31bc;
      }
      if (uVar47 - 0x183 < 2) goto LAB_109fa1fb4;
      if (uVar47 == 0x18e) {
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmVar60;
        FUN_109fa8968(pmVar60,param_2,pmVar21);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar41 = param_2;
        FUN_109fa8968();
        if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
          uStack_78 = 0x101;
          FUN_109fa8f34();
          pmVar63 = pmVar62;
          pmVar45 = pmVar55;
          pmVar46 = pmVar57;
          goto LAB_109fa2038;
        }
        goto LAB_109fa2050;
      }
      if (uVar47 != 0x195) goto LAB_109fa31bc;
LAB_109fa259c:
      pmVar21 = param_2;
      FUN_109fa7b9c(param_2,param_3,0);
      pmVar62 = pmVar60;
      FUN_109fa8968(pmVar60,param_2,pmVar21);
      pmVar21 = param_2;
      FUN_109fa7b9c(param_2,param_3,1);
      pmVar41 = param_2;
      FUN_109fa8968();
      if ((pmVar62 == (mach_header *)0x0) || (pmVar55 == (mach_header *)0x0)) goto LAB_109fa2050;
      uStack_78 = 0x101;
      pmVar63 = (mach_header *)0x23;
      FUN_109d3488c();
      pmVar45 = pmVar62;
      pmVar46 = pmVar57;
    }
    else {
      if ((int)uVar47 < 0x1c0) {
        if (uVar47 == 0x1a2) {
          pmVar57 = param_2;
          FUN_109fa7b9c(param_2,param_3,0);
          pmVar62 = pmVar60;
          FUN_109fa8968(pmVar60,param_2,pmVar57);
          pmVar21 = param_2;
          FUN_109fa7b9c(param_2,param_3,1);
          pmVar41 = param_2;
          FUN_109fa8968();
          if ((pmVar62 != (mach_header *)0x0) && (pmVar60 = pmVar55, pmVar55 != (mach_header *)0x0))
          {
            pmVar21 = *(mach_header **)pmVar62;
            pmVar57 = pmVar21;
            FUN_109fa8a5c();
            uStack_78 = 0x503;
            auStack_98._0_8_ = &UNK_10f62b2b0;
            pmStack_88 = pmVar57;
            pmStack_80 = pmVar41;
            FUN_109e04498(auStack_158,auStack_98);
            bVar5 = bStack_141;
            unaff_x25 = (mach_header *)auStack_158._0_8_;
            unaff_x24 = *(mach_header **)&param_2->cpusubtype;
            unaff_x26 = (mach_header *)(ulong)bStack_141;
            auStack_98._0_8_ = pmVar21;
            auStack_98._8_8_ = pmVar21;
            FUN_109d9f92c(pmVar21,auStack_98,2,0);
            pmVar57 = (mach_header *)auStack_158._8_8_;
            if (-1 < (char)bVar5) {
              unaff_x25 = (mach_header *)auStack_158;
              pmVar57 = unaff_x26;
            }
            FUN_109d9d3e8(unaff_x24,unaff_x25,pmVar57,pmVar21,0);
            FUN_109fa8aa8(unaff_x25);
            pmVar57 = pmStack_a8;
            pmVar63 = unaff_x24;
            pmVar45 = unaff_x25;
            auStack_98._0_8_ = pmVar62;
            auStack_98._8_8_ = pmVar55;
            func_0x000109fa8b88();
            pmVar46 = pmVar57;
            unaff_x27 = (mach_header *)auStack_158._8_8_;
            goto code_r0x000109fa4428;
          }
        }
        else if (uVar47 == 0x1a4) {
          pmVar21 = param_2;
          FUN_109fa7b9c(param_2,param_3,0);
          pmVar62 = pmVar60;
          FUN_109fa8968(pmVar60,param_2,pmVar21);
          pmVar21 = param_2;
          FUN_109fa7b9c(param_2,param_3,1);
          pmVar41 = param_2;
          FUN_109fa8968();
          if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0))
          {
            uStack_78 = 0x101;
            func_0x000109fa9048();
            pmVar63 = pmVar62;
            pmVar45 = pmVar55;
            pmVar46 = pmVar57;
            goto LAB_109fa2038;
          }
        }
        else {
          if (uVar47 != 0x1b5) goto LAB_109fa31bc;
          pmVar55 = param_1;
          pmVar41 = param_2;
          if (*(long *)&param_3[3].cpusubtype != 0) {
            pmVar41 = (mach_header *)(ulong)*(uint *)(*(long *)&param_3[3].cpusubtype + 0x18);
            pmVar55 = (mach_header *)&param_2[1].ncmds;
            FUN_109fab870();
            if (pmVar55 != (mach_header *)0x0) {
              pmVar57 = *(mach_header **)&pmVar55->flags;
              pmVar21 = (mach_header *)0x0;
              if (pmVar57 != (mach_header *)0x0) {
                cVar4 = *(char *)(*(long *)pmVar57 + 8);
                pmVar55 = pmVar57;
                if (*(long *)pmVar57 != 0 && cVar4 == '\x12') {
                  uStack_78 = 0x101;
                  pmVar55 = pmVar60;
                  FUN_109d5c370(pmVar60,pmVar57,(char)param_3[3].ncmds,auStack_98);
                  cVar4 = *(char *)(*(long *)pmVar55 + 8);
                  pmVar62 = *(mach_header **)param_2;
                }
                pmVar57 = pmVar55;
                if (cVar4 == '\x02') {
                  uVar40._0_4_ = pmVar62[0x10].ncmds;
                  uVar40._4_4_ = pmVar62[0x10].sizeofcmds;
                  uStack_78 = 0x101;
                  pmVar57 = pmVar60;
                  FUN_109d349d8(pmVar60,0x31,pmVar55,uVar40,auStack_98);
                  pmVar62 = *(mach_header **)param_2;
                }
                lVar64._0_4_ = pmVar62[0x11].magic;
                lVar64._4_4_ = pmVar62[0x11].cputype;
                uStack_78 = 0x101;
                FUN_109d349d8(pmVar60,0x31,pmVar57,lVar64,auStack_98);
                pmVar63 = *(mach_header **)&param_2->cpusubtype;
                uVar40 = *(undefined8 *)(*(long *)param_2 + 0x228);
                auStack_98._0_8_ = *(undefined8 *)(*(long *)param_2 + 0x220);
                FUN_109d9f92c(uVar40,auStack_98,1,0);
                unaff_x24 = (mach_header *)&UNK_10f62b3d0;
                FUN_109d9d3e8(pmVar63,&UNK_10f62b3d0,0x1b,uVar40,0);
                FUN_109fa8aa8(unaff_x24);
                pmVar57 = pmStack_a8;
                pmVar45 = unaff_x24;
                auStack_98._0_8_ = pmVar60;
                func_0x000109fa8b88();
                pmVar46 = pmVar57;
                goto LAB_109fa2038;
              }
            }
          }
        }
        goto LAB_109fa2050;
      }
      if (uVar47 - 0x1c5 < 3) {
        uVar48 = 3;
        if (uVar47 != 0x1c6) {
          uVar48 = 4;
        }
        uVar50 = 2;
        if (uVar47 != 0x1c5) {
          uVar50 = uVar48;
        }
        unaff_x24 = (mach_header *)(ulong)uVar50;
        pmVar57 = (mach_header *)0x1;
        pmVar45 = param_3;
        pdVar25 = &param_3[3].cpusubtype;
        do {
          if (*(long *)pdVar25 == 0) {
LAB_109fa1e70:
            unaff_x25 = (mach_header *)0x0;
          }
          else {
            pdVar26 = &param_2[1].ncmds;
            FUN_109fab870(pdVar26,*(undefined4 *)(*(long *)pdVar25 + 0x18));
            if ((pdVar26 == (dword *)0x0) || (*(undefined8 **)(pdVar26 + 6) == (undefined8 *)0x0))
            goto LAB_109fa1e70;
            unaff_x25 = (mach_header *)**(undefined8 **)(pdVar26 + 6);
            if ((char)unaff_x25->cpusubtype != '\x12') goto LAB_109fa1e90;
            unaff_x25 = *(mach_header **)&unaff_x25->flags;
          }
        } while ((pmVar57 < unaff_x24) &&
                (pmVar57 = (mach_header *)((long)&pmVar57->magic + 1), pdVar25 = pdVar25 + 0xc,
                unaff_x25 == (mach_header *)0x0));
        if (unaff_x25 == (mach_header *)0x0) {
          unaff_x25 = (mach_header *)(*plVar54 + 0x678);
        }
LAB_109fa1e90:
        pmVar57 = unaff_x25;
        pmVar63 = unaff_x24;
        func_0x000109da00ec();
        func_0x000109d677ec();
        unaff_x26 = (mach_header *)0x0;
        unaff_x28 = (mach_header *)&param_3[3].ncmds;
        pmVar46 = pmVar57;
        do {
          if (*(long *)((long)unaff_x28 + -8) != 0) {
            pmVar63 = (mach_header *)(ulong)*(uint *)(*(long *)((long)unaff_x28 + -8) + 0x18);
            pmVar57 = (mach_header *)&param_2[1].ncmds;
            FUN_109fab870();
            if ((pmVar57 != (mach_header *)0x0) &&
               (unaff_x27 = *(mach_header **)&pmVar57->flags, unaff_x27 != (mach_header *)0x0)) {
              pmVar55 = *(mach_header **)unaff_x27;
              pmVar57 = unaff_x27;
              if (pmVar55 != (mach_header *)0x0 && (char)pmVar55->cpusubtype == '\x12') {
                uStack_78 = 0x101;
                lVar14 = **(long **)(pmVar60 + 2) + 0x7b0;
                FUN_109d678e8(lVar14,(char)unaff_x28->magic,0);
                pmVar57 = pmVar60;
                func_0x000109d5c6e0(pmVar60,unaff_x27,lVar14,auStack_98);
                pmVar55 = *(mach_header **)pmVar57;
              }
              unaff_x27 = pmVar57;
              if (pmVar55 != unaff_x25) {
                uStack_78 = 0x101;
                unaff_x27 = pmVar60;
                FUN_109d349d8(pmVar60,0x31,pmVar57,unaff_x25,auStack_98);
              }
              uStack_78 = 0x101;
              FUN_109d678e8(**(long **)(pmVar60 + 2) + 0x7b0,unaff_x26,0);
              pmVar57 = pmVar60;
              pmVar45 = unaff_x27;
              func_0x000109d5cb58();
              pmVar63 = pmVar46;
              pmVar46 = pmVar57;
            }
          }
          unaff_x26 = (mach_header *)((long)&unaff_x26->magic + 1);
          unaff_x28 = (mach_header *)((long)unaff_x28 + 0x30);
        } while (unaff_x24 != unaff_x26);
      }
      else {
        if (uVar47 != 0x1c0) goto LAB_109fa31bc;
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,0);
        pmVar62 = pmVar60;
        FUN_109fa8968(pmVar60,param_2,pmVar21);
        pmVar21 = param_2;
        FUN_109fa7b9c(param_2,param_3,1);
        pmVar41 = param_2;
        FUN_109fa8968();
        if ((pmVar62 == (mach_header *)0x0) || (pmVar21 = pmVar55, pmVar55 == (mach_header *)0x0))
        goto LAB_109fa2050;
        uStack_78 = 0x101;
        func_0x000109d8aff4();
        pmVar63 = pmVar62;
        pmVar45 = pmVar55;
        pmVar46 = pmVar57;
      }
    }
    goto LAB_109fa2038;
  }
  pmVar63 = pmVar60;
  switch(uVar47) {
  case 0xe3:
    pmVar60 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar21 = (mach_header *)0x1;
    pmVar55 = param_2;
    FUN_109fa7b9c();
    if ((pmVar60 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      pmVar63 = (mach_header *)&DAT_10f62b29c;
      pmVar57 = (mach_header *)&ppmStack_f8;
      pmVar45 = (mach_header *)0x9;
      FUN_109fa8538();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xe4:
  case 0xe6:
  case 0xe9:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xf0:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf8:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0x100:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x117:
  case 0x118:
  case 0x11a:
  case 0x11b:
  case 0x11e:
  case 0x11f:
  case 0x121:
  case 0x122:
  case 0x125:
  case 0x127:
  case 0x128:
  case 0x129:
  case 299:
  case 0x12d:
  case 0x12e:
  case 0x130:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x139:
  case 0x13a:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x142:
  case 0x144:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14c:
  case 0x151:
  case 0x153:
LAB_109fa31bc:
    puStack_1f0 = (&PTR_DAT_110b78538)[(ulong)uVar47 * 0xd];
    FUN_109f97010(auStack_158,&UNK_10f62b3ec);
    pmVar55 = (mach_header *)auStack_98;
    pmVar41 = (mach_header *)auStack_158;
    pmVar21 = (mach_header *)0x2;
    FUN_109f92740();
    pmStack_1d8->magic = auStack_98._0_4_;
    *(mach_header **)&pmStack_1d8->ncmds = pmStack_88;
    pmStack_1d8->cpusubtype = auStack_98._8_4_;
    pmStack_1d8->filetype = auStack_98._12_4_;
    *(mach_header **)&pmStack_1d8->flags = pmStack_80;
    pmStack_1d8[1].magic = (int)CONCAT62(uStack_76,uStack_78);
    pmStack_1d8[1].cputype = (int)((uint6)uStack_76 >> 0x10);
    *(undefined1 *)&pmStack_1d8[1].cpusubtype = 0;
    if ((char)bStack_141 < '\0') {
      pmVar55 = (mach_header *)auStack_158._0_8_;
      __ZdlPv();
    }
    goto LAB_109fa2068;
  case 0xe5:
    pmVar60 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar21 = (mach_header *)0x1;
    pmVar55 = param_2;
    FUN_109fa7b9c();
    if ((pmVar60 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      pmVar63 = (mach_header *)&DAT_10f62b2a6;
      pmVar57 = (mach_header *)&ppmStack_f8;
      pmVar45 = (mach_header *)0x9;
      FUN_109fa8538();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xe7:
    pmVar60 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar21 = (mach_header *)0x1;
    pmVar55 = param_2;
    FUN_109fa7b9c();
    if ((pmVar60 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      pmVar63 = (mach_header *)&UNK_10f62b325;
      pmVar57 = (mach_header *)&ppmStack_f8;
      pmVar45 = (mach_header *)0x9;
      FUN_109fa8538();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xe8:
    pmVar57 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmStack_b8;
    FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar55 = pmStack_b8;
    pmVar41 = pmStack_b0;
    FUN_109fa7c1c();
    if ((pmVar62 == (mach_header *)0x0) ||
       (pmVar21 = (mach_header *)0x0, pmVar55 == (mach_header *)0x0)) break;
    uStack_78 = 0x101;
    func_0x000109d5c958(pmVar60,pmVar62,pmVar55,auStack_98,0);
LAB_109fa4f3c:
    if ((pmVar46 != (mach_header *)0x0) && (0x1b < (byte)pmVar46->ncmds)) {
      *(byte *)((long)&pmVar46->ncmds + 1) = *(byte *)((long)&pmVar46->ncmds + 1) | 0xfe;
    }
    goto LAB_109fa203c;
  case 0xea:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar57 = pmStack_b8;
    pmVar41 = pmStack_b0;
    FUN_109fa7c1c();
    pmVar55 = (mach_header *)0x0;
    pmVar62 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      if (*(char *)(*(long *)param_2 + 0x45a) == '\x01') {
        uStack_78 = 0x101;
        func_0x000109d5cc3c(pmVar60,pmVar57,auStack_98,0);
      }
      else {
        lVar65._0_4_ = pmVar57->magic;
        lVar65._4_4_ = pmVar57->cputype;
        FUN_109d67c18(lVar65,1);
        uStack_78 = 0x101;
        func_0x000109d5c858(pmVar60,lVar65,pmVar57,auStack_98,0);
      }
      goto LAB_109fa4f3c;
    }
    break;
  case 0xef:
  case 0xf1:
    pmVar57 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmStack_b8;
    FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar55 = pmStack_b8;
    pmVar41 = pmStack_b0;
    FUN_109fa7c1c();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      FUN_109d8a4b4(pmVar60,0xe,pmVar62,pmVar55,auStack_98,0,0);
      goto LAB_109fa4f3c;
    }
    break;
  case 0xf7:
    pmVar60 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar21 = (mach_header *)0x1;
    pmVar55 = param_2;
    FUN_109fa7b9c();
    if ((pmVar60 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      pmVar63 = (mach_header *)&DAT_10f62b2fc;
      pmVar57 = (mach_header *)&ppmStack_f8;
      pmVar45 = (mach_header *)0x8;
      FUN_109fa8538();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xf9:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar57 = pmStack_b8;
    pmVar41 = pmStack_b0;
    FUN_109fa7c1c();
    pmVar55 = (mach_header *)0x0;
    pmVar62 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      lVar68._0_4_ = pmVar57->magic;
      lVar68._4_4_ = pmVar57->cputype;
      FUN_109d67974(0x3ff0000000000000,lVar68);
      uStack_78 = 0x101;
      func_0x000109d5ca58(pmVar60,lVar68,pmVar57,auStack_98,0);
      goto LAB_109fa4f3c;
    }
    break;
  case 0xfd:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&DAT_10f62b360;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0x9;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xfe:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&UNK_10f62b2f1;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0xa;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0xff:
    pmVar21 = (mach_header *)0x0;
    pmVar60 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar60 != (mach_header *)0x0) {
      lVar14 = *(long *)pmVar60;
      if (*(char *)(lVar14 + 8) == '\x12') {
        uVar2 = *(undefined4 *)(lVar14 + 0x20);
        uVar40 = *(undefined8 *)(*(long *)param_2 + 0x208);
        FUN_109d67974(0,uVar40);
        FUN_109d66c68(uVar2,uVar40);
      }
      else {
        FUN_109d67974(0,*(undefined8 *)(*(long *)param_2 + 0x208));
      }
      if (*(char *)(lVar14 + 8) == '\x12') {
        unaff_x24 = (mach_header *)(ulong)*(uint *)(lVar14 + 0x20);
        uVar40 = *(undefined8 *)(*(long *)param_2 + 0x208);
        FUN_109d67974(0x3ff0000000000000,uVar40);
        FUN_109d66c68(unaff_x24,uVar40);
      }
      else {
        FUN_109d67974(0x3ff0000000000000,*(undefined8 *)(*(long *)param_2 + 0x208));
      }
      pmVar63 = (mach_header *)&UNK_10f62b291;
      pmVar57 = (mach_header *)&ppmStack_118;
      pmVar45 = (mach_header *)0xa;
      FUN_109fa8058();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x101:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&UNK_10f62b28c;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0x4;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x102:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&DAT_10f62b34c;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0x8;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x106:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&DAT_10f62b2e7;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0x9;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x107:
    pmVar57 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmStack_b8;
    FUN_109fa7c1c(pmStack_b8,pmStack_b0,pmVar57);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar55 = pmStack_b8;
    pmVar41 = pmStack_b0;
    FUN_109fa7c1c();
    if ((pmVar62 != (mach_header *)0x0) &&
       (pmVar21 = (mach_header *)0x0, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109d5c858(pmVar60,pmVar62,pmVar55,auStack_98,0);
      goto LAB_109fa4f3c;
    }
    break;
  case 0x10b:
    pmVar21 = (mach_header *)0x0;
    pmVar57 = param_2;
    FUN_109fa7b9c();
    pmVar55 = (mach_header *)0x0;
    if (pmVar57 != (mach_header *)0x0) {
      pmVar63 = (mach_header *)&DAT_10f62b355;
      pmVar57 = (mach_header *)&ppmStack_d8;
      pmVar45 = (mach_header *)0xa;
      FUN_109fa7cc0();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x111:
code_r0x000109fa261c:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar55 = (mach_header *)0x0;
    if (pmVar60 != (mach_header *)0x0) {
      dVar1 = param_3[1].cpusubtype;
      unaff_x25 = *(mach_header **)pmVar60;
      cVar4 = (char)unaff_x25->cpusubtype;
      lVar14 = *(long *)param_2;
      if ((unaff_x25 == (mach_header *)0x0) || (cVar4 != '\x12')) {
        lVar14 = *(long *)(lVar14 + 0x208);
      }
      else {
        func_0x000109f9a5dc(lVar14,unaff_x25[1].magic);
        cVar4 = (char)unaff_x25->cpusubtype;
      }
      puStack_170 = &UNK_10f62b4a0;
      uStack_168._0_4_ = 3;
      uStack_168._4_4_ = 0;
      if ((unaff_x25 != (mach_header *)0x0) && (cVar4 == '\x12')) {
        uVar47 = unaff_x25[1].magic - 2;
        if (uVar47 < 3) {
          puStack_170 = (&PTR_DAT_110b96820)[uVar47];
          uStack_168._0_4_ = 5;
          uStack_168._4_4_ = 0;
        }
        else {
          puStack_170 = &UNK_10f62b4a0;
          uStack_168._0_4_ = 3;
          uStack_168._4_4_ = 0;
        }
      }
      if (dVar1 == 0x111) {
        uStack_160 = 0x503;
        auStack_180._0_8_ = &UNK_10f62b39d;
        apuStack_1a8[0] = &UNK_10f62b3ac;
        uStack_188 = 0x103;
        FUN_109d35b30(auStack_158,auStack_180,apuStack_1a8);
        if (((char)unaff_x25->cpusubtype == '\x12' && unaff_x25 != (mach_header *)0x0) &&
           (uVar47 = unaff_x25[1].magic - 2, uVar47 < 3)) {
          puStack_1d0 = (&PTR_DAT_110b96838)[uVar47];
          uStack_1c8 = 5;
        }
        else {
          puStack_1d0 = &UNK_10f62b48a;
          uStack_1c8 = 3;
        }
        uStack_1b0 = 0x105;
        FUN_109d35b30(auStack_98,auStack_158,&puStack_1d0);
      }
      else {
        uStack_160 = 0x503;
        auStack_180._0_8_ = &UNK_10f62b39d;
        apuStack_1a8[0] = &UNK_10f62b3b0;
        uStack_188 = 0x103;
        FUN_109d35b30(auStack_158,auStack_180,apuStack_1a8);
        if (((char)unaff_x25->cpusubtype == '\x12' && unaff_x25 != (mach_header *)0x0) &&
           (uVar47 = unaff_x25[1].magic - 2, uVar47 < 3)) {
          puStack_1d0 = (&PTR_DAT_110b96838)[uVar47];
          uStack_1c8 = 5;
        }
        else {
          puStack_1d0 = &UNK_10f62b48a;
          uStack_1c8 = 3;
        }
        uStack_1b0 = 0x105;
        FUN_109d35b30(auStack_98,auStack_158,&puStack_1d0);
      }
      FUN_109e04498(auStack_130,auStack_98);
      bVar5 = bStack_119;
      unaff_x24 = (mach_header *)auStack_130._0_8_;
      pmVar63 = *(mach_header **)&param_2->cpusubtype;
      unaff_x26 = (mach_header *)(ulong)bStack_119;
      auStack_98._0_8_ = unaff_x25;
      FUN_109d9f92c(lVar14,auStack_98,1,0);
      pmVar57 = (mach_header *)auStack_130._8_8_;
      if (-1 < (char)bVar5) {
        unaff_x24 = (mach_header *)auStack_130;
        pmVar57 = unaff_x26;
      }
      FUN_109d9d3e8(pmVar63,unaff_x24,pmVar57,lVar14,0);
      FUN_109fa8aa8(unaff_x24);
      pmVar57 = pmStack_a8;
      pmVar45 = unaff_x24;
      auStack_98._0_8_ = pmVar60;
      func_0x000109fa8b88();
LAB_109fa4bf0:
      pmVar55 = (mach_header *)auStack_130._0_8_;
      pmVar46 = pmVar57;
      unaff_x27 = (mach_header *)auStack_130._8_8_;
      if (-1 < (char)bStack_119) goto LAB_109fa2038;
LAB_109fa4c00:
      pmVar57 = pmVar55;
      __ZdlPv();
      goto LAB_109fa2038;
    }
    break;
  case 0x115:
  case 0x116:
  case 0x119:
LAB_109fa1fb4:
    if (*(long *)&param_3[3].cpusubtype == 0) {
LAB_109fa2024:
      pmVar45 = (mach_header *)0x0;
    }
    else {
      pdVar25 = &param_2[1].ncmds;
      FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)&param_3[3].cpusubtype + 0x18));
      if ((pdVar25 == (dword *)0x0) || (*(long *)(pdVar25 + 6) == 0)) goto LAB_109fa2024;
      pmVar45 = param_2;
      FUN_109fa8c20(param_2,*(long *)(pdVar25 + 6),&param_3[2].ncmds,(char)param_3[2].filetype);
    }
    pmVar63 = param_2;
    FUN_109fa8968();
    pmVar46 = pmVar57;
    goto LAB_109fa2038;
  case 0x11c:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar55 = (mach_header *)0x0;
    if (pmVar60 != (mach_header *)0x0) {
      pmVar55 = *(mach_header **)pmVar60;
      pmVar57 = pmVar55;
      FUN_109fa8a5c();
      uStack_78 = 0x503;
      auStack_98._0_8_ = &UNK_10f62b2dc;
      pmStack_88 = pmVar57;
      pmStack_80 = pmVar41;
      FUN_109e04498(auStack_158,auStack_98);
      bVar5 = bStack_141;
      unaff_x24 = (mach_header *)auStack_158._0_8_;
      pmVar63 = *(mach_header **)&param_2->cpusubtype;
      unaff_x25 = (mach_header *)(ulong)bStack_141;
      auStack_98._0_8_ = pmVar55;
      FUN_109d9f92c(pmVar55,auStack_98,1,0);
      pmVar57 = (mach_header *)auStack_158._8_8_;
      if (-1 < (char)bVar5) {
        unaff_x24 = (mach_header *)auStack_158;
        pmVar57 = unaff_x25;
      }
      FUN_109d9d3e8(pmVar63,unaff_x24,pmVar57,pmVar55,0);
      FUN_109fa8aa8(unaff_x24);
      pmVar57 = pmStack_a8;
      pmVar45 = unaff_x24;
      auStack_98._0_8_ = pmVar60;
      func_0x000109fa8b88();
      pmVar46 = pmVar57;
      unaff_x26 = (mach_header *)auStack_158._8_8_;
code_r0x000109fa4428:
      pmVar55 = (mach_header *)auStack_158._0_8_;
      if ((char)bStack_141 < '\0') goto LAB_109fa4c00;
      goto LAB_109fa2038;
    }
    break;
  case 0x11d:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar62 = pmVar63;
    if ((pmVar63 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109d3374c();
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x120:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar62 = pmVar63;
    if ((pmVar63 != (mach_header *)0x0) && (unaff_x24 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      unaff_x25 = *(mach_header **)pmVar63;
      unaff_x26 = *(mach_header **)pmVar55;
      if (unaff_x25 != unaff_x26) {
        if (unaff_x25->cpusubtype == 0x10d) {
          pmVar21 = unaff_x26;
          FUN_109d666e0(unaff_x26);
          uStack_78 = 0x101;
          unaff_x24 = pmVar60;
          FUN_109d3488c(pmVar60,0x21,pmVar55,pmVar21,auStack_98);
        }
        else {
          uVar47 = unaff_x26->cpusubtype;
          if (uVar47 == 0x10d) {
            pmVar55 = unaff_x25;
            FUN_109d666e0(unaff_x25);
            uStack_78 = 0x101;
            pmVar21 = pmVar60;
            FUN_109d3488c(pmVar60,0x21,pmVar63,pmVar55,auStack_98);
            pmVar63 = pmVar21;
          }
          else {
            unaff_x27 = unaff_x25;
            if ((unaff_x25->cpusubtype & 0xfe) == 0x12) {
              unaff_x27 = (mach_header *)**(undefined8 **)&unaff_x25->ncmds;
            }
            FUN_109d9f594();
            pmVar21 = unaff_x26;
            if ((uVar47 & 0xfe) == 0x12) {
              pmVar21 = (mach_header *)**(undefined8 **)&unaff_x26->ncmds;
            }
            uVar47 = (uint)pmVar21;
            FUN_109d9f594();
            if ((uint)unaff_x27 < uVar47) {
              uStack_78 = 0x101;
              pmVar55 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar63,unaff_x26,auStack_98);
              pmVar63 = pmVar55;
            }
            else {
              uStack_78 = 0x101;
              unaff_x24 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar55,unaff_x25,auStack_98);
            }
          }
        }
      }
      uStack_78 = 0x101;
      pmVar45 = unaff_x24;
      func_0x000109d5c4a8();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x123:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar62 = pmVar63;
    if ((pmVar63 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109d8af2c();
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x124:
  case 0x126:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      pmVar63 = (mach_header *)0x20;
      FUN_109d3488c();
      pmVar45 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x12a:
  case 300:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      pmVar63 = (mach_header *)0x27;
      FUN_109d3488c();
      pmVar45 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x12f:
  case 0x131:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      pmVar63 = (mach_header *)0x28;
      FUN_109d3488c();
      pmVar45 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x137:
    pmVar57 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar57);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar60 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      pmVar21 = *(mach_header **)pmVar62;
      pmVar57 = pmVar21;
      FUN_109fa8a5c();
      uStack_78 = 0x503;
      auStack_98._0_8_ = &UNK_10f62b2d1;
      pmStack_88 = pmVar57;
      pmStack_80 = pmVar41;
      FUN_109e04498(auStack_158,auStack_98);
      bVar5 = bStack_141;
      unaff_x25 = (mach_header *)auStack_158._0_8_;
      unaff_x24 = *(mach_header **)&param_2->cpusubtype;
      unaff_x26 = (mach_header *)(ulong)bStack_141;
      auStack_98._0_8_ = pmVar21;
      auStack_98._8_8_ = pmVar21;
      FUN_109d9f92c(pmVar21,auStack_98,2,0);
      pmVar57 = (mach_header *)auStack_158._8_8_;
      if (-1 < (char)bVar5) {
        unaff_x25 = (mach_header *)auStack_158;
        pmVar57 = unaff_x26;
      }
      FUN_109d9d3e8(unaff_x24,unaff_x25,pmVar57,pmVar21,0);
      FUN_109fa8aa8(unaff_x25);
      pmVar57 = pmStack_a8;
      pmVar63 = unaff_x24;
      pmVar45 = unaff_x25;
      auStack_98._0_8_ = pmVar62;
      auStack_98._8_8_ = pmVar55;
      func_0x000109fa8b88();
      pmVar46 = pmVar57;
      unaff_x27 = (mach_header *)auStack_158._8_8_;
      goto code_r0x000109fa4428;
    }
    break;
  case 0x138:
    pmVar57 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar57);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar60 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      pmVar21 = *(mach_header **)pmVar62;
      pmVar57 = pmVar21;
      FUN_109fa8a5c();
      uStack_78 = 0x503;
      auStack_98._0_8_ = &UNK_10f62b2c6;
      pmStack_88 = pmVar57;
      pmStack_80 = pmVar41;
      FUN_109e04498(auStack_158,auStack_98);
      bVar5 = bStack_141;
      unaff_x25 = (mach_header *)auStack_158._0_8_;
      unaff_x24 = *(mach_header **)&param_2->cpusubtype;
      unaff_x26 = (mach_header *)(ulong)bStack_141;
      auStack_98._0_8_ = pmVar21;
      auStack_98._8_8_ = pmVar21;
      FUN_109d9f92c(pmVar21,auStack_98,2,0);
      pmVar57 = (mach_header *)auStack_158._8_8_;
      if (-1 < (char)bVar5) {
        unaff_x25 = (mach_header *)auStack_158;
        pmVar57 = unaff_x26;
      }
      FUN_109d9d3e8(unaff_x24,unaff_x25,pmVar57,pmVar21,0);
      FUN_109fa8aa8(unaff_x25);
      pmVar57 = pmStack_a8;
      pmVar63 = unaff_x24;
      pmVar45 = unaff_x25;
      auStack_98._0_8_ = pmVar62;
      auStack_98._8_8_ = pmVar55;
      func_0x000109fa8b88();
      pmVar46 = pmVar57;
      unaff_x27 = (mach_header *)auStack_158._8_8_;
      goto code_r0x000109fa4428;
    }
    break;
  case 0x13b:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar62 = pmVar63;
    if ((pmVar63 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      FUN_109d336bc();
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x141:
  case 0x143:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      pmVar63 = (mach_header *)0x21;
      FUN_109d3488c();
      pmVar45 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x145:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    FUN_109fa8968(pmVar60,param_2);
    pmVar55 = (mach_header *)0x0;
    pmVar41 = pmVar63;
    if (pmVar63 != (mach_header *)0x0) {
      uStack_78 = 0x101;
      pmVar45 = (mach_header *)auStack_98;
      func_0x000109d5cd80();
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x146:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar55 = (mach_header *)0x0;
    pmVar62 = (mach_header *)0x0;
    if (pmVar63 != (mach_header *)0x0) {
      if (*(int *)(*(long *)pmVar63 + 8) == 0x80d) {
        FUN_109d66880(*(long *)pmVar63,0,0);
        uStack_78 = 0x101;
        pmVar55 = (mach_header *)0x20;
        pmVar45 = pmVar63;
        FUN_109d3488c();
        pmVar63 = pmVar55;
        pmVar46 = pmVar57;
      }
      else {
        uStack_78 = 0x101;
        pmVar45 = (mach_header *)auStack_98;
        func_0x000109d5c58c();
        pmVar46 = pmVar57;
      }
      goto LAB_109fa2038;
    }
    break;
  case 0x14a:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (unaff_x24 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      unaff_x25 = *(mach_header **)pmVar62;
      unaff_x26 = *(mach_header **)pmVar55;
      if (unaff_x25 != unaff_x26) {
        if (unaff_x25->cpusubtype == 0x10d) {
          pmVar21 = unaff_x26;
          FUN_109d666e0(unaff_x26);
          uStack_78 = 0x101;
          unaff_x24 = pmVar60;
          FUN_109d3488c(pmVar60,0x21,pmVar55,pmVar21,auStack_98);
        }
        else {
          uVar47 = unaff_x26->cpusubtype;
          if (uVar47 == 0x10d) {
            pmVar55 = unaff_x25;
            FUN_109d666e0(unaff_x25);
            uStack_78 = 0x101;
            pmVar21 = pmVar60;
            FUN_109d3488c(pmVar60,0x21,pmVar62,pmVar55,auStack_98);
            pmVar62 = pmVar21;
          }
          else {
            unaff_x27 = unaff_x25;
            if ((unaff_x25->cpusubtype & 0xfe) == 0x12) {
              unaff_x27 = (mach_header *)**(undefined8 **)&unaff_x25->ncmds;
            }
            FUN_109d9f594();
            pmVar21 = unaff_x26;
            if ((uVar47 & 0xfe) == 0x12) {
              pmVar21 = (mach_header *)**(undefined8 **)&unaff_x26->ncmds;
            }
            uVar47 = (uint)pmVar21;
            FUN_109d9f594();
            if ((uint)unaff_x27 < uVar47) {
              uStack_78 = 0x101;
              pmVar55 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar62,unaff_x26,auStack_98);
              pmVar62 = pmVar55;
            }
            else {
              uStack_78 = 0x101;
              unaff_x24 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar55,unaff_x25,auStack_98);
            }
          }
        }
      }
      uStack_78 = 0x101;
      pmVar45 = unaff_x24;
      func_0x000109d5c5d0();
      pmVar63 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x14b:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109fa8fc0();
      pmVar63 = pmVar62;
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x14d:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109d5d068();
      pmVar63 = pmVar62;
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x14e:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      func_0x000109d5d0f8();
      pmVar63 = pmVar62;
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x14f:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar41 = param_2;
    FUN_109fa8968();
    pmVar55 = (mach_header *)0x0;
    if (pmVar60 != (mach_header *)0x0) {
      pmVar21 = *(mach_header **)pmVar60;
      pmVar57 = pmVar21;
      FUN_109d66880(pmVar21,0xffffffffffffffff,1);
      pmVar41 = (mach_header *)0x1;
      pmVar55 = pmVar21;
      pmStack_1e0 = pmVar57;
      FUN_109d66880(pmVar21,1,1);
      pmVar57 = pmVar21;
      pmStack_1e8 = pmVar55;
      FUN_109fa8a5c();
      uStack_78 = 0x503;
      auStack_98._0_8_ = &UNK_10f62b2d1;
      pmStack_88 = pmVar57;
      pmStack_80 = pmVar41;
      FUN_109e04498(auStack_158,auStack_98);
      pmVar57 = pmVar21;
      FUN_109fa8a5c();
      uStack_78 = 0x503;
      auStack_98._0_8_ = &UNK_10f62b2c6;
      pmStack_88 = pmVar57;
      pmStack_80 = pmVar41;
      FUN_109e04498(auStack_180,auStack_98);
      bVar5 = bStack_141;
      unaff_x27 = (mach_header *)auStack_158._0_8_;
      unaff_x26 = *(mach_header **)&param_2->cpusubtype;
      pmVar55 = (mach_header *)(ulong)bStack_141;
      pmVar57 = pmVar21;
      auStack_98._0_8_ = pmVar21;
      auStack_98._8_8_ = pmVar21;
      FUN_109d9f92c(pmVar21,auStack_98,2,0);
      if (-1 < (char)bVar5) {
        unaff_x27 = (mach_header *)auStack_158;
        auStack_158._8_8_ = pmVar55;
      }
      FUN_109d9d3e8(unaff_x26,unaff_x27,auStack_158._8_8_,pmVar57,0);
      puVar13 = puStack_170;
      unaff_x28 = (mach_header *)auStack_180._0_8_;
      unaff_x25 = *(mach_header **)&param_2->cpusubtype;
      pmVar55 = (mach_header *)((ulong)puStack_170 >> 0x38);
      auStack_98._0_8_ = pmVar21;
      auStack_98._8_8_ = pmVar21;
      FUN_109d9f92c(pmVar21,auStack_98,2,0);
      pmVar57 = (mach_header *)auStack_180._8_8_;
      if (-1 < (long)puVar13) {
        unaff_x28 = (mach_header *)auStack_180;
        pmVar57 = pmVar55;
      }
      FUN_109d9d3e8(unaff_x25,unaff_x28,pmVar57,pmVar21,0);
      FUN_109fa8aa8(unaff_x27);
      FUN_109fa8aa8(unaff_x28);
      auStack_98._8_8_ = pmStack_1e0;
      pmVar57 = pmStack_a8;
      auStack_98._0_8_ = pmVar60;
      func_0x000109fa8b88(pmStack_a8,unaff_x26,unaff_x27,auStack_98,2);
      auStack_98._8_8_ = pmStack_1e8;
      pmVar46 = pmStack_a8;
      pmVar63 = unaff_x25;
      pmVar45 = unaff_x28;
      auStack_98._0_8_ = pmVar57;
      func_0x000109fa8b88();
      pmVar57 = pmVar46;
      unaff_x24 = (mach_header *)auStack_180._8_8_;
      if ((long)puStack_170 < 0) {
        pmVar57 = (mach_header *)auStack_180._0_8_;
        __ZdlPv();
      }
      goto code_r0x000109fa4428;
    }
    break;
  case 0x150:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (pmVar21 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      uStack_78 = 0x101;
      FUN_109d34438();
      pmVar63 = pmVar62;
      pmVar45 = pmVar55;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x152:
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,0);
    pmVar62 = pmVar60;
    FUN_109fa8968(pmVar60,param_2,pmVar21);
    pmVar21 = param_2;
    FUN_109fa7b9c(param_2,param_3,1);
    pmVar41 = param_2;
    FUN_109fa8968();
    if ((pmVar62 != (mach_header *)0x0) && (unaff_x24 = pmVar55, pmVar55 != (mach_header *)0x0)) {
      unaff_x25 = *(mach_header **)pmVar62;
      unaff_x26 = *(mach_header **)pmVar55;
      if (unaff_x25 != unaff_x26) {
        if (unaff_x25->cpusubtype == 0x10d) {
          pmVar21 = unaff_x26;
          FUN_109d666e0(unaff_x26);
          uStack_78 = 0x101;
          unaff_x24 = pmVar60;
          FUN_109d3488c(pmVar60,0x21,pmVar55,pmVar21,auStack_98);
        }
        else {
          uVar47 = unaff_x26->cpusubtype;
          if (uVar47 == 0x10d) {
            pmVar55 = unaff_x25;
            FUN_109d666e0(unaff_x25);
            uStack_78 = 0x101;
            pmVar21 = pmVar60;
            FUN_109d3488c(pmVar60,0x21,pmVar62,pmVar55,auStack_98);
            pmVar62 = pmVar21;
          }
          else {
            unaff_x27 = unaff_x25;
            if ((unaff_x25->cpusubtype & 0xfe) == 0x12) {
              unaff_x27 = (mach_header *)**(undefined8 **)&unaff_x25->ncmds;
            }
            FUN_109d9f594();
            pmVar21 = unaff_x26;
            if ((uVar47 & 0xfe) == 0x12) {
              pmVar21 = (mach_header *)**(undefined8 **)&unaff_x26->ncmds;
            }
            uVar47 = (uint)pmVar21;
            FUN_109d9f594();
            if ((uint)unaff_x27 < uVar47) {
              uStack_78 = 0x101;
              pmVar55 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar62,unaff_x26,auStack_98);
              pmVar62 = pmVar55;
            }
            else {
              uStack_78 = 0x101;
              unaff_x24 = pmVar60;
              FUN_109d349d8(pmVar60,0x27,pmVar55,unaff_x25,auStack_98);
            }
          }
        }
      }
      uStack_78 = 0x101;
      pmVar45 = unaff_x24;
      func_0x000109d5c658();
      pmVar63 = pmVar62;
      pmVar46 = pmVar57;
      goto LAB_109fa2038;
    }
    break;
  case 0x154:
    pmVar45 = (mach_header *)0x0;
    pmVar57 = param_2;
    pmVar63 = param_3;
    FUN_109fa7b9c();
    pmVar46 = pmVar57;
LAB_109fa2038:
    pmVar55 = pmVar57;
    pmVar41 = pmVar63;
    pmVar21 = pmVar45;
    pmVar62 = pmVar46;
    if (pmVar46 != (mach_header *)0x0) {
LAB_109fa203c:
      param_3 = (mach_header *)&param_3[2].cpusubtype;
      pmVar41 = (mach_header *)(ulong)*(uint *)param_3;
      pmVar55 = (mach_header *)&param_2[1].ncmds;
      pmVar21 = param_3;
      FUN_109fab460();
      *(mach_header **)&pmVar55->flags = pmVar46;
      pmVar62 = pmVar46;
    }
    break;
  default:
    if (uVar47 != 0x166) {
      if (uVar47 == 0x17f) goto code_r0x000109fa261c;
      goto LAB_109fa31bc;
    }
    pmVar55 = param_1;
    pmVar41 = param_2;
    if (*(long *)&param_3[3].cpusubtype != 0) {
      pmVar41 = (mach_header *)(ulong)*(uint *)(*(long *)&param_3[3].cpusubtype + 0x18);
      pmVar55 = (mach_header *)&param_2[1].ncmds;
      FUN_109fab870();
      if ((pmVar55 != (mach_header *)0x0) &&
         (pmVar46 = *(mach_header **)&pmVar55->flags, pmVar46 != (mach_header *)0x0)) {
        lVar14 = *(long *)pmVar46;
        pmVar55 = pmVar60;
        pmVar21 = param_2;
        if ((lVar14 != 0 && *(char *)(lVar14 + 8) == '\x12') && (2 < *(uint *)(lVar14 + 0x20))) {
          pmVar41 = param_2;
          FUN_109fa8c20(param_2,pmVar46,&param_3[2].ncmds,2);
          pmVar55 = pmStack_b8;
          pmVar21 = pmStack_b0;
          pmVar46 = pmVar41;
        }
        FUN_109fa7c1c(pmVar55,pmVar21,pmVar46);
        unaff_x24 = *(mach_header **)&param_2->cpusubtype;
        uVar40 = *(undefined8 *)(*(long *)param_2 + 0x220);
        auStack_98._0_8_ = *(undefined8 *)(*(long *)param_2 + 0x228);
        FUN_109d9f92c(uVar40,auStack_98,1,0);
        unaff_x25 = (mach_header *)&UNK_10f62b3b4;
        FUN_109d9d3e8(unaff_x24,&UNK_10f62b3b4,0x1b,uVar40,0);
        FUN_109fa8aa8(unaff_x25);
        pmVar45 = pmStack_a8;
        auStack_98._0_8_ = pmVar55;
        func_0x000109fa8b88(pmStack_a8,unaff_x24,unaff_x25,auStack_98,1);
        uStack_78 = 0x101;
        pmVar63 = (mach_header *)0x31;
        FUN_109d349d8();
        pmVar46 = pmVar57;
        goto LAB_109fa2038;
      }
    }
  }
LAB_109fa2050:
  pmStack_1d8->flags = 0;
  pmStack_1d8->reserved = 0;
  pmStack_1d8->ncmds = 0;
  pmStack_1d8->sizeofcmds = 0;
  pmStack_1d8[1].cpusubtype = 0;
  pmStack_1d8[1].filetype = 0;
  pmStack_1d8[1].magic = 0;
  pmStack_1d8[1].cputype = 0;
  pmStack_1d8->cpusubtype = 0;
  pmStack_1d8->filetype = 0;
  pmStack_1d8->magic = 0;
  pmStack_1d8->cputype = 0;
  *(undefined1 *)&pmStack_1d8[1].cpusubtype = 1;
LAB_109fa2068:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pmVar55;
  }
  ___stack_chk_fail();
  if ((char)bStack_141 < '\0') {
    __ZdlPv(auStack_158._0_8_);
  }
  pmVar57 = pmVar55;
  __Unwind_Resume();
  pmStack_250 = unaff_x28;
  pmStack_248 = unaff_x27;
  pmStack_240 = unaff_x26;
  pmStack_238 = unaff_x25;
  pmStack_230 = unaff_x24;
  pmStack_228 = pmVar62;
  pmStack_220 = pmVar60;
  pmStack_218 = param_2;
  pmStack_210 = param_3;
  pmStack_208 = pmVar55;
  puStack_200 = &stack0xfffffffffffffff0;
  pcStack_1f8 = FUN_109fa511c;
  pmStack_3a8 = pmVar41;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar47 = pmVar21[1].ncmds;
  if (uVar47 < 5) {
    uVar48 = pmVar21[3].magic;
    if (uVar48 != 0) {
      pmStack_3d8 = pmVar57;
      pmStack_3d0 = (mach_header *)0x0;
      uVar56 = 0;
      pmVar62 = (mach_header *)0x0;
      pmVar55 = (mach_header *)0x0;
      lVar66 = 0;
      pmStack_3c8 = (mach_header *)0x0;
      lStack_3c0 = 0;
      lVar68 = 0;
      pmStack_3b8 = *(mach_header **)pmVar41;
      lVar14 = *(long *)&pmStack_3b8->cpusubtype;
      ppmStack_3f0 = *(mach_header ***)pmStack_3b8;
      pmStack_3e8 = *(mach_header **)&pmVar41->ncmds;
      pmStack_3b0 = (mach_header *)0x0;
      pmStack_3e0 = pmVar21;
      lVar64 = *(long *)&pmVar21[2].flags;
      param_2 = (mach_header *)0x28;
      do {
        lVar65 = lVar64 + uVar56 * 0x28;
        iVar53 = *(int *)(lVar65 + 0x20);
        if (iVar53 < 9) {
          if (iVar53 == 0) {
            if (*(long *)(lVar65 + 0x18) != 0) {
              pdVar25 = &pmStack_3a8[1].ncmds;
              FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)(lVar65 + 0x18) + 0x18));
              if (pdVar25 != (dword *)0x0) {
                pmStack_3b0 = *(mach_header **)(pdVar25 + 6);
                goto LAB_109fa5364;
              }
            }
            pmStack_3b0 = (mach_header *)0x0;
          }
          else if (iVar53 == 4) {
            if (*(long *)(lVar65 + 0x18) != 0) {
              pdVar25 = &pmStack_3a8[1].ncmds;
              FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)(lVar65 + 0x18) + 0x18));
              if (pdVar25 != (dword *)0x0) {
                pmStack_3d0 = *(mach_header **)(pdVar25 + 6);
                goto LAB_109fa5364;
              }
            }
            pmStack_3d0 = (mach_header *)0x0;
          }
          else if (iVar53 == 5) {
            if (*(long *)(lVar65 + 0x18) != 0) {
              pdVar25 = &pmStack_3a8[1].ncmds;
              FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)(lVar65 + 0x18) + 0x18));
              if (pdVar25 != (dword *)0x0) {
                pmStack_3c8 = *(mach_header **)(pdVar25 + 6);
                goto LAB_109fa5364;
              }
            }
            pmStack_3c8 = (mach_header *)0x0;
          }
        }
        else if (iVar53 < 0xb) {
          if (iVar53 == 9) {
            if (*(long *)(lVar65 + 0x18) != 0) {
              pdVar25 = &pmStack_3a8[1].ncmds;
              FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)(lVar65 + 0x18) + 0x18));
              if (pdVar25 != (dword *)0x0) {
                lVar68 = *(long *)(pdVar25 + 6);
                goto LAB_109fa5364;
              }
            }
            lVar68 = 0;
          }
          else if (iVar53 == 10) {
            if (*(long *)(lVar65 + 0x18) != 0) {
              pdVar25 = &pmStack_3a8[1].ncmds;
              FUN_109fab870(pdVar25,*(undefined4 *)(*(long *)(lVar65 + 0x18) + 0x18));
              if (pdVar25 != (dword *)0x0) {
                lStack_3c0 = *(long *)(pdVar25 + 6);
                goto LAB_109fa5364;
              }
            }
            lStack_3c0 = 0;
          }
        }
        else if (iVar53 == 0xc) {
          lVar65 = **(long **)(lVar65 + 0x18);
          while (lVar65 != 0) {
            if (*(int *)(lVar65 + 0x28) == 0) {
              pmVar55 = *(mach_header **)(lVar65 + 0x38);
              goto LAB_109fa5364;
            }
            if (((*(long **)(lVar65 + 0x50) == (long *)0x0) ||
                (lVar65 = **(long **)(lVar65 + 0x50), lVar65 == 0)) ||
               (*(int *)(lVar65 + 0x18) != 1)) break;
          }
          pmVar55 = (mach_header *)0x0;
        }
        else if (iVar53 == 0xb) {
          lVar49 = **(long **)(lVar65 + 0x18);
          while (lVar66 = lVar65, lVar49 != 0) {
            if (*(int *)(lVar49 + 0x28) == 0) {
              pmVar62 = *(mach_header **)(lVar49 + 0x38);
              goto LAB_109fa5364;
            }
            if (((*(long **)(lVar49 + 0x50) == (long *)0x0) ||
                (lVar49 = **(long **)(lVar49 + 0x50), lVar49 == 0)) ||
               (*(int *)(lVar49 + 0x18) != 1)) break;
          }
          pmVar62 = (mach_header *)0x0;
        }
LAB_109fa5364:
        pmVar57 = pmStack_3d8;
        uVar56 = uVar56 + 1;
      } while (uVar56 != uVar48);
      if ((pmVar62 != (mach_header *)0x0) && (pmStack_3b0 != (mach_header *)0x0)) {
        if (uVar47 == 3) {
          uVar48 = pmStack_3e0[1].cpusubtype;
          if ((((lVar68 == 0) || (lStack_3c0 == 0)) || ((pmStack_3e0[3].cpusubtype & 1) != 0)) ||
             ((6 < uVar48 || ((1 << (ulong)(uVar48 & 0x1f) & 0x52U) == 0)))) {
            uStack_420 = (ulong)uVar48;
            FUN_109f97010(auStack_310,&UNK_10f62b86e);
            auVar58 = (undefined1  [8])auStack_2c0;
            pmVar21 = (mach_header *)auStack_310;
            pmVar55 = (mach_header *)0x2;
            FUN_109f92740();
            goto LAB_109fa54fc;
          }
        }
        param_2 = pmVar62;
        if (pmVar55 != (mach_header *)0x0) {
          param_2 = pmVar55;
        }
        lVar64 = *(long *)(lVar14 + 0x720);
        lVar14 = *(long *)(lVar14 + 0x728) - lVar64;
        if (lVar14 != 0) {
          lVar65 = 0;
          plVar54 = (long *)(lVar64 + 0x10);
          iVar53 = -1;
          pmVar57 = (mach_header *)0xffffffff;
          do {
            iVar3 = (int)plVar54[2];
            if (iVar3 == 4) {
              pmVar55 = (mach_header *)plVar54[-1];
              if ((pmVar55 != pmVar62) &&
                 ((((pmVar55 == (mach_header *)0x0 ||
                    (lVar15._0_4_ = pmVar55->flags, lVar15._4_4_ = pmVar55->reserved, lVar15 == 0))
                   || (lVar42._0_4_ = pmVar62->flags, lVar42._4_4_ = pmVar62->reserved, lVar42 == 0)
                   ) || (_strcmp(), (int)lVar15 != 0)))) goto LAB_109fa5474;
LAB_109fa5468:
              iVar53 = *(int *)(*(long *)&pmStack_3b8[0x21].ncmds + lVar65 * 4);
            }
            else {
              if (iVar3 == 6 && *plVar54 == lVar66) goto LAB_109fa5468;
              if (iVar3 == 5) {
                pmVar55 = (mach_header *)plVar54[-1];
                if ((pmVar55 == param_2) ||
                   (((pmVar55 != (mach_header *)0x0 &&
                     (lVar49._0_4_ = pmVar55->flags, lVar49._4_4_ = pmVar55->reserved, lVar49 != 0))
                    && ((lVar43._0_4_ = param_2->flags, lVar43._4_4_ = param_2->reserved,
                        lVar43 != 0 && (_strcmp(), (int)lVar49 == 0)))))) {
LAB_109fa5494:
                  pmVar57 = (mach_header *)
                            (ulong)*(uint *)(*(long *)&pmStack_3b8[0x21].ncmds + lVar65 * 4);
                }
              }
              else if (iVar3 == 7 && *plVar54 == lVar66) goto LAB_109fa5494;
            }
LAB_109fa5474:
            pmVar55 = pmStack_3b8;
            pmVar41 = pmStack_3d8;
            lVar65 = lVar65 + 1;
            plVar54 = plVar54 + 8;
          } while (lVar14 >> 6 != lVar65);
          if ((-1 < iVar53) && (uVar47 == 4 || -1 < (int)pmVar57)) {
            plVar17 = *(long **)(pmStack_3a8 + 6);
            for (plVar54 = plVar17; plVar54 != (long *)0x0; plVar54 = (long *)*plVar54) {
              if (*(int *)(plVar54 + 4) == 0) {
                FUN_109fa940c(plVar17,0);
                lVar14 = *plVar17;
                if (lVar14 != 0) {
                  pmStack_408 = (mach_header *)CONCAT44(pmStack_408._4_4_,pmStack_3e0[1].cpusubtype)
                  ;
                  uStack_3fc = (uint)(byte)pmStack_3e0[3].cpusubtype;
                  pmVar21 = pmVar55;
                  FUN_109f9cab0();
                  func_0x000109da017c();
                  pmStack_3f8 = pmVar21;
                  if (uVar47 == 4) {
                    ppmStack_410 = (mach_header **)0x0;
                  }
                  else {
                    ppmVar18 = *(mach_header ***)&pmVar55[0x14].flags;
                    func_0x000109da017c(ppmVar18,2);
                    ppmStack_410 = ppmVar18;
                  }
                  puVar19 = *(undefined8 **)&pmStack_3a8->flags;
                  if ((*(byte *)((long)puVar19 + 0x17) >> 4 & 1) == 0) {
                    uVar40 = 0;
                    puVar28 = (undefined8 *)&UNK_10f5fa524;
                  }
                  else {
                    func_0x000109da271c();
                    puVar28 = puVar19 + 2;
                    uVar40 = *puVar19;
                  }
                  puVar20 = *(undefined4 **)&pmStack_3a8[6].flags;
                  FUN_109fa9db0(puVar20,0);
                  pdVar25 = &pmVar55->ncmds;
                  FUN_109fa9650(pdVar25,puVar28,uVar40,*puVar20);
                  if (uVar47 == 4) {
                    pmVar57 = (mach_header *)0x0;
                    pmVar41 = pmStack_3e8;
                  }
                  else {
                    uVar59._0_4_ = pmVar55[0x15].ncmds;
                    uVar59._4_4_ = pmVar55[0x15].sizeofcmds;
                    pmVar21 = *(mach_header **)&pmVar55[0x10].flags;
                    FUN_109d66880(pmVar21,0,0);
                    ppmVar18 = *(mach_header ***)&pmVar55[0x10].ncmds;
                    auStack_310 = (undefined1  [8])pmVar21;
                    FUN_109d66880(ppmVar18,(long)(int)pmVar57,0);
                    pmVar57 = *(mach_header **)&pmVar55[0x10].ncmds;
                    ppmStack_308 = ppmVar18;
                    FUN_109d66880(pmVar57,0,0);
                    pmVar41 = pmStack_3e8;
                    uStack_2a0 = 0x101;
                    pmVar55 = pmStack_3e8;
                    pmStack_300 = pmVar57;
                    FUN_109faa5c8(pmStack_3e8,uVar59,lVar14,auStack_310,3,auStack_2c0);
                    uStack_2a0 = 0x101;
                    pmVar57 = pmVar41;
                    FUN_109d5d1c0(pmVar41,ppmStack_410,pmVar55,0x103,0,auStack_2c0);
                    pdVar26 = &pmStack_3b8->ncmds;
                    FUN_109faaebc(pdVar26);
                    FUN_109d97dec(pmVar57,5,pdVar26);
                    FUN_109d97dec(pmVar57,7,pdVar25);
                  }
                  uVar67._0_4_ = pmStack_3b8[0x15].ncmds;
                  uVar67._4_4_ = pmStack_3b8[0x15].sizeofcmds;
                  pmVar55 = *(mach_header **)&pmStack_3b8[0x10].flags;
                  FUN_109d66880(pmVar55,0,0);
                  ppmVar18 = *(mach_header ***)&pmStack_3b8[0x10].ncmds;
                  auStack_310 = (undefined1  [8])pmVar55;
                  FUN_109d66880(ppmVar18,iVar53,0);
                  pmVar21 = *(mach_header **)&pmStack_3b8[0x10].ncmds;
                  ppmStack_308 = ppmVar18;
                  FUN_109d66880(pmVar21,0,0);
                  uStack_2a0 = 0x101;
                  pmVar55 = pmVar41;
                  pmStack_300 = pmVar21;
                  FUN_109faa5c8(pmVar41,uVar67,lVar14,auStack_310,3,auStack_2c0);
                  uStack_2a0 = 0x101;
                  pmVar60 = pmVar41;
                  FUN_109d5d1c0(pmVar41,pmStack_3f8,pmVar55,0x103,0,auStack_2c0);
                  pdVar26 = &pmVar62->ncmds;
                  pmVar62 = (mach_header *)0x66;
                  if (*(long *)pdVar26 != 0) {
                    cVar4 = *(char *)(*(long *)pdVar26 + 5);
                    uVar48 = 0x69;
                    if (cVar4 != '\x01') {
                      uVar48 = 0x66;
                    }
                    uVar50 = 0x6a;
                    if (cVar4 != '\0') {
                      uVar50 = uVar48;
                    }
                    pmVar62 = (mach_header *)(ulong)uVar50;
                  }
                  func_0x000107c31940(auStack_310,&UNK_10f62af40);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (auStack_310,pmVar62);
                  auStack_2c0._8_8_ = ppmStack_308;
                  auStack_2c0._0_8_ = auStack_310;
                  apmStack_2b0[0] = pmStack_300;
                  ppmStack_308 = (mach_header **)0x0;
                  pmStack_300 = (mach_header *)0x0;
                  auStack_310 = (undefined1  [8])0x0;
                  puVar19 = (undefined8 *)auStack_2c0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar19,&UNK_10f62af57,0x11);
                  auStack_380._0_8_ = *puVar19;
                  uStack_370 = (undefined7)puVar19[2];
                  cStack_369 = (char)((ulong)puVar19[2] >> 0x38);
                  auStack_380._8_7_ = (undefined7)puVar19[1];
                  uStack_371 = (undefined1)((ulong)puVar19[1] >> 0x38);
                  puVar19[1] = 0;
                  puVar19[2] = 0;
                  *puVar19 = 0;
                  if ((long)pmStack_300 < 0) {
                    __ZdlPv(auStack_310);
                  }
                  if (((int)pmStack_408 == 1) && (uStack_3fc != 0)) {
                    func_0x000107c31940(auStack_310,&UNK_10f62af84);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_310,pmVar62);
                    auStack_2c0._8_8_ = ppmStack_308;
                    auStack_2c0._0_8_ = auStack_310;
                    apmStack_2b0[0] = pmStack_300;
                    ppmStack_308 = (mach_header **)0x0;
                    pmStack_300 = (mach_header *)0x0;
                    auStack_310 = (undefined1  [8])0x0;
                    puVar19 = (undefined8 *)auStack_2c0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (puVar19,&UNK_10f62af57,0x11);
                    pmVar55 = (mach_header *)*puVar19;
                    auStack_360._0_7_ = (undefined7)puVar19[1];
                    uVar40 = *(undefined8 *)((long)puVar19 + 0xf);
                    auStack_360[7] = (undefined1)uVar40;
                    auStack_360._8_4_ = (undefined4)((ulong)uVar40 >> 8);
                    auStack_360._12_3_ = (undefined3)((ulong)uVar40 >> 0x28);
                    cVar4 = *(char *)((long)puVar19 + 0x17);
                    puVar19[1] = 0;
                    puVar19[2] = 0;
                    *puVar19 = 0;
                    if (cStack_369 < '\0') {
                      __ZdlPv(auStack_380._0_8_);
                    }
                    auStack_380._8_7_ = auStack_360._0_7_;
                    uStack_371 = auStack_360[7];
                    uStack_370 = (undefined7)
                                 (CONCAT35(auStack_360._12_3_,
                                           CONCAT41(auStack_360._8_4_,auStack_360[7])) >> 8);
                    auStack_380._0_8_ = pmVar55;
                    cStack_369 = cVar4;
                    if ((long)pmStack_300 < 0) {
                      __ZdlPv(auStack_310);
                    }
                    param_2 = (mach_header *)&UNK_10f62af69;
                  }
                  else if ((int)pmStack_408 == 2) {
                    func_0x000107c31940(auStack_360,&UNK_10f62afe8);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_360,pmVar62);
                    ppmStack_308 = (mach_header **)CONCAT44(auStack_360._12_4_,auStack_360._8_4_);
                    auStack_310 = (undefined1  [8])CONCAT17(auStack_360[7],auStack_360._0_7_);
                    pmStack_300 = pmStack_350;
                    auStack_360._8_4_ = 0;
                    auStack_360._12_4_ = 0;
                    pmStack_350 = (mach_header *)0x0;
                    auStack_360._0_7_ = 0;
                    auStack_360[7] = 0;
                    func_0x000109259240(auStack_2c0,auStack_310,&UNK_10f62af57);
                    if (cStack_369 < '\0') {
                      __ZdlPv(auStack_380._0_8_);
                    }
                    auStack_380._8_7_ = (undefined7)auStack_2c0._8_8_;
                    uStack_371 = SUB81(auStack_2c0._8_8_,7);
                    auStack_380._0_8_ = auStack_2c0._0_8_;
                    uStack_370 = SUB87(apmStack_2b0[0],0);
                    cStack_369 = (char)((ulong)apmStack_2b0[0] >> 0x38);
                    apmStack_2b0[0] = (mach_header *)((ulong)apmStack_2b0[0] & 0xffffffffffffff);
                    auStack_2c0._0_8_ = auStack_2c0._0_8_ & 0xffffffffffffff00;
                    if ((long)pmStack_300 < 0) {
                      __ZdlPv(auStack_310);
                    }
                    if ((long)pmStack_350 < 0) {
                      __ZdlPv(CONCAT17(auStack_360[7],auStack_360._0_7_));
                    }
                    param_2 = (mach_header *)&UNK_10f62afd3;
                  }
                  else if ((int)pmStack_408 == 3) {
                    func_0x000107c31940(auStack_360,&UNK_10f62afb9);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_360,pmVar62);
                    ppmStack_308 = (mach_header **)CONCAT44(auStack_360._12_4_,auStack_360._8_4_);
                    auStack_310 = (undefined1  [8])CONCAT17(auStack_360[7],auStack_360._0_7_);
                    pmStack_300 = pmStack_350;
                    auStack_360._8_4_ = 0;
                    auStack_360._12_4_ = 0;
                    pmStack_350 = (mach_header *)0x0;
                    auStack_360._0_7_ = 0;
                    auStack_360[7] = 0;
                    func_0x000109259240(auStack_2c0,auStack_310,&UNK_10f62af57);
                    if (cStack_369 < '\0') {
                      __ZdlPv(auStack_380._0_8_);
                    }
                    auStack_380._8_7_ = (undefined7)auStack_2c0._8_8_;
                    uStack_371 = SUB81(auStack_2c0._8_8_,7);
                    auStack_380._0_8_ = auStack_2c0._0_8_;
                    uStack_370 = SUB87(apmStack_2b0[0],0);
                    cStack_369 = (char)((ulong)apmStack_2b0[0] >> 0x38);
                    apmStack_2b0[0] = (mach_header *)((ulong)apmStack_2b0[0] & 0xffffffffffffff);
                    auStack_2c0._0_8_ = auStack_2c0._0_8_ & 0xffffffffffffff00;
                    if ((long)pmStack_300 < 0) {
                      __ZdlPv(auStack_310);
                    }
                    if ((long)pmStack_350 < 0) {
                      __ZdlPv(CONCAT17(auStack_360[7],auStack_360._0_7_));
                    }
                    param_2 = (mach_header *)&UNK_10f62afa2;
                  }
                  else {
                    param_2 = (mach_header *)&UNK_10f62af2b;
                  }
                  if (cStack_369 < '\0') {
                    pmVar55 = (mach_header *)auStack_380._0_8_;
                    if ((mach_header *)auStack_380._0_8_ != (mach_header *)0x0) goto LAB_109fa5b84;
                    pmStack_408 = (mach_header *)0x0;
                  }
                  else {
                    pmVar55 = (mach_header *)auStack_380;
LAB_109fa5b84:
                    pmVar21 = pmVar55;
                    _strlen();
                    pmStack_408 = pmVar21;
                  }
                  pmVar21 = param_2;
                  _strlen(param_2);
                  pdVar26 = &pmStack_3b8->ncmds;
                  FUN_109fab018(pdVar26,pmVar55,pmStack_408,param_2,pmVar21);
                  FUN_109d97dec(pmVar60,1,pdVar26);
                  FUN_109d97dec(pmVar60,7,pdVar25);
                  uVar11 = auStack_360._12_4_;
                  uVar2 = auStack_360._8_4_;
                  uVar8 = auStack_360[7];
                  uVar6 = auStack_360._0_7_;
                  pmVar45 = pmStack_3b8;
                  pmVar55 = pmStack_3c8;
                  pmVar46 = pmStack_3d8;
                  uVar48 = pmStack_3e0[1].cpusubtype;
                  auStack_360[7] = (undefined1)((ulong)pmVar60 >> 0x38);
                  uVar9 = auStack_360[7];
                  auStack_360._0_7_ = SUB87(pmVar60,0);
                  uVar7 = auStack_360._0_7_;
                  auStack_360._0_7_ = uVar6;
                  auStack_360[7] = uVar8;
                  if (uVar47 == 4) {
                    if ((uVar48 < 7) && ((1 << (ulong)(uVar48 & 0x1f) & 0x52U) != 0)) {
                      ppmVar18 = *(mach_header ***)pmStack_3b0;
                      if ((ppmVar18 != (mach_header **)0x0) &&
                         ((*(char *)(ppmVar18 + 1) == '\x12' && (2 < *(uint *)(ppmVar18 + 4))))) {
                        auStack_310 = (undefined1  [8])&MACH_HEADER;
                        uStack_2a0 = 0x101;
                        pmVar57 = pmVar41;
                        FUN_109d37990(pmVar41,pmStack_3b0,pmStack_3b0,auStack_310,2,auStack_2c0);
                        ppmVar18 = *(mach_header ***)pmVar57;
                        pmStack_3b0 = pmVar57;
                      }
                      ppmVar61 = *(mach_header ***)(pmVar45 + 0x12);
                      if (((ppmVar18 != ppmVar61) && (ppmVar18 != (mach_header **)0x0)) &&
                         (*(char *)(ppmVar18 + 1) == '\x12')) {
                        uVar47 = ppmVar18[3]->cpusubtype & 0xff;
                        if (((uVar47 < 4) || (uVar47 == 5)) ||
                           ((ppmVar18[3]->cpusubtype & 0xfd) == 4)) {
                          uStack_2a0 = 0x101;
                          pmVar57 = pmVar41;
                          func_0x000109fab240(pmVar41,pmStack_3b0,ppmVar61,auStack_2c0);
                          pmStack_3b0 = pmVar57;
                        }
                      }
                      auStack_398._0_8_ = (mach_header *)0x0;
                      auStack_398._8_8_ = 0;
                      auStack_398._16_8_ = 0;
                      if ((int)pmVar62 == 0x69) {
                        pmVar57 = *(mach_header **)&pmVar45[0x12].ncmds;
                        func_0x000107c2c4d8(auStack_398,&UNK_10f62b90c,0x1b);
                      }
                      else if ((int)pmVar62 == 0x6a) {
                        pmVar57 = *(mach_header **)&pmVar45[0x12].ncmds;
                        func_0x000107c2c4d8(auStack_398,&UNK_10f62b8f0,0x1b);
                      }
                      else {
                        pmVar57 = *(mach_header **)&pmVar45[0x11].flags;
                        func_0x000107c2c4d8(auStack_398,&UNK_10f62b928,0x19);
                      }
                      auStack_2c0._8_8_ = *(undefined8 *)&pmVar45[0xf].ncmds;
                      ppmVar18 = ppmStack_3f0;
                      auStack_2c0._0_8_ = pmVar57;
                      FUN_109d9fa44(ppmStack_3f0,auStack_2c0,2,0);
                      auStack_310 = (undefined1  [8])pmStack_3f8;
                      pmStack_300 = *(mach_header **)&pmVar45[0x10].ncmds;
                      ppmStack_308 = ppmVar61;
                      pmStack_2f8 = pmStack_300;
                      FUN_109fab3a8(auStack_2c0,auStack_310,4);
                      FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0);
                      uVar32._0_4_ = pmStack_3a8->cpusubtype;
                      uVar32._4_4_ = pmStack_3a8->filetype;
                      pmVar57 = (mach_header *)auStack_398._0_8_;
                      if (-1 < (long)auStack_398[0x17]) {
                        pmVar57 = (mach_header *)auStack_398;
                      }
                      lVar14 = auStack_398._8_8_;
                      if (-1 < (long)auStack_398._16_8_) {
                        lVar14 = (long)auStack_398[0x17];
                      }
                      FUN_109d9d3e8(uVar32,pmVar57,lVar14,ppmVar18,0);
                      if ((pmVar57 != (mach_header *)0x0) && ((char)pmVar57->ncmds == '\0')) {
                        pdVar26 = &pmVar57[3].ncmds;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,0xffffffff,6);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,0xffffffff,0xf);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,0xffffffff,0x24);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,0xffffffff,0x42);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,0xffffffff,0x18);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        FUN_109d853ec(pmVar57,1);
                        pmVar57[1].magic = pmVar57[1].magic & 0xffffff3f | 0x40;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,1,0x15);
                        *(dword **)&pmVar57[3].ncmds = pdVar25;
                        pdVar25 = pdVar26;
                        FUN_109d5ab08(pdVar26,**(undefined8 **)pmVar57,1,0x2d);
                        *(dword **)pdVar26 = pdVar25;
                        pmVar55 = pmStack_3c8;
                      }
                      if (pmVar55 == (mach_header *)0x0) {
                        pmVar55 = *(mach_header **)&pmStack_3b8[0x10].ncmds;
                        FUN_109d66880(pmVar55,0,0);
                      }
                      pmVar21 = pmVar55;
                      if (*(char *)(*(long *)pmVar55 + 8) == '\x02') {
                        uVar44._0_4_ = pmStack_3b8[0x10].ncmds;
                        uVar44._4_4_ = pmStack_3b8[0x10].sizeofcmds;
                        pmStack_2f0 = (mach_header *)CONCAT62(pmStack_2f0._2_6_,0x101);
                        pmVar21 = pmVar41;
                        FUN_109d349d8(pmVar41,0x31,pmVar55,uVar44,auStack_310);
                      }
                      auStack_360._8_4_ = SUB84(pmStack_3b0,0);
                      auStack_360._12_4_ = (undefined4)((ulong)pmStack_3b0 >> 0x20);
                      pmVar55 = *(mach_header **)&pmStack_3b8[0x10].ncmds;
                      auStack_360._0_7_ = uVar7;
                      auStack_360[7] = uVar9;
                      pmStack_350 = pmVar21;
                      FUN_109d66880(pmVar55,0,0);
                      pmStack_348 = pmVar55;
                      FUN_109fab404(auStack_310,auStack_360,4);
                      pmStack_340._0_2_ = 0x101;
                      pmVar21 = pmVar41;
                      FUN_109d5ce48(pmVar41,uVar32,pmVar57,auStack_310,
                                    (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                      *(ushort *)((long)&pmVar21->ncmds + 2) =
                           *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                      pmVar45 = pmStack_3b8;
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      FUN_109d8b930(pmVar21,1);
                      auStack_39c = (undefined1  [4])0x0;
                      pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                      pmVar55 = (mach_header *)auStack_39c;
                      pmVar62 = pmVar41;
                      func_0x000109d5ccf8(pmVar41,pmVar21,pmVar55,1,auStack_360);
                      pmVar46 = pmStack_3d8;
                      if (auStack_310 != (undefined1  [8])&pmStack_300) {
                        _free();
                      }
                      auVar58 = (undefined1  [8])auStack_2c0._0_8_;
                      if ((mach_header *)auStack_2c0._0_8_ != (mach_header *)apmStack_2b0) {
                        _free();
                      }
                      if ((long)auStack_398._16_8_ < 0) {
                        auVar58 = (undefined1  [8])auStack_398._0_8_;
                        __ZdlPv();
                      }
                      goto LAB_109fa77e4;
                    }
                    uStack_420 = (ulong)uVar48;
                    FUN_109f97010(auStack_310,&UNK_10f62b942);
                    auVar58 = (undefined1  [8])auStack_2c0;
                    pmVar21 = (mach_header *)auStack_310;
                    pmVar55 = (mach_header *)0x2;
                    FUN_109f92740();
                    pmStack_3d8->magic = auStack_2c0._0_4_;
                    *(mach_header **)&pmStack_3d8->ncmds = apmStack_2b0[0];
                    pmStack_3d8->cpusubtype = auStack_2c0._8_4_;
                    pmStack_3d8->filetype = auStack_2c0._12_4_;
                    *(mach_header **)&pmStack_3d8->flags = apmStack_2b0[1];
                    *(mach_header ***)(pmStack_3d8 + 1) =
                         (mach_header **)CONCAT62(uStack_29e,uStack_2a0);
                    *(undefined1 *)&pmStack_3d8[1].cpusubtype = 0;
LAB_109fa72b4:
                    if ((long)pmStack_300 < 0) {
                      auVar58 = auStack_310;
                      __ZdlPv();
                    }
                  }
                  else {
                    auStack_360._8_4_ = SUB84(pmVar57,0);
                    uVar10 = auStack_360._8_4_;
                    auStack_360._12_4_ = (undefined4)((ulong)pmVar57 >> 0x20);
                    uVar12 = auStack_360._12_4_;
                    auStack_360._8_4_ = uVar2;
                    auStack_360._12_4_ = uVar11;
                    if ((uStack_3fc == 0) || (uVar48 != 1)) {
                      if ((int)uVar48 < 3) {
                        if (uVar48 == 1) goto LAB_109fa6400;
                        if (uVar48 != 2) goto LAB_109fa726c;
                        lVar14 = *(long *)pmStack_3b0;
                        if (((lVar14 != 0) && (*(char *)(lVar14 + 8) == '\x12')) &&
                           (3 < *(uint *)(lVar14 + 0x20))) {
                          auStack_310 = (undefined1  [8])&MACH_HEADER;
                          ppmStack_308 = (mach_header **)CONCAT44(ppmStack_308._4_4_,2);
                          uStack_2a0 = 0x101;
                          FUN_109d37990(pmVar41,pmStack_3b0,pmStack_3b0,auStack_310,3,auStack_2c0);
                          pmStack_3b0 = pmVar41;
                        }
                        auStack_2c0._0_8_ = *(undefined8 *)&pmVar45[0x11].flags;
                        auStack_2c0._8_8_ = *(undefined8 *)&pmVar45[0xf].ncmds;
                        ppmVar18 = ppmStack_3f0;
                        FUN_109d9fa44(ppmStack_3f0,auStack_2c0,2,0);
                        auStack_310 = (undefined1  [8])pmStack_3f8;
                        ppmStack_308 = ppmStack_410;
                        pmStack_300 = *(mach_header **)&pmVar45[0x11].ncmds;
                        pmStack_2f8 = *(mach_header **)&pmVar45[0xf].cpusubtype;
                        pmStack_2f0 = *(mach_header **)&pmVar45[0x12].cpusubtype;
                        pdVar25 = &pmVar45[0x10].cpusubtype;
                        pmStack_2d0 = *(mach_header **)&pmVar45[0x10].ncmds;
                        pmStack_2e0 = *(mach_header **)pdVar25;
                        pmStack_2e8 = pmStack_2f8;
                        pmStack_2d8 = pmStack_2e0;
                        FUN_109fab3a8(auStack_2c0,auStack_310,9);
                        FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0);
                        uVar27._0_4_ = pmStack_3a8->cpusubtype;
                        uVar27._4_4_ = pmStack_3a8->filetype;
                        puVar19 = (undefined8 *)&UNK_10f62ba06;
                        FUN_109d9d3e8(uVar27,&UNK_10f62ba06,0x1b,ppmVar18,0);
                        if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                          puVar24 = puVar19 + 0xe;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,6);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                          puVar19[0xe] = puVar28;
                          FUN_109d853ec(puVar19,1);
                          *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x15);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x2d);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x15);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x2d);
                          *puVar24 = puVar28;
                        }
                        pmVar57 = pmStack_3d0;
                        if (pmStack_3c8 != (mach_header *)0x0) {
                          pmVar57 = pmStack_3c8;
                        }
                        pmStack_350 = pmStack_3b0;
                        pmVar21 = *ppmStack_3f0;
                        pmVar55 = *(mach_header **)&pmVar21[0x30].cpusubtype;
                        auStack_360._0_7_ = uVar7;
                        auStack_360[7] = uVar9;
                        auStack_360._8_4_ = uVar10;
                        auStack_360._12_4_ = uVar12;
                        if (pmVar55 == (mach_header *)0x0) {
                          pmVar55 = (mach_header *)&pmVar21[0x3a].ncmds;
                          FUN_109d678e8(pmVar55,1,0);
                          *(mach_header **)&pmVar21[0x30].cpusubtype = pmVar55;
                        }
                        uVar29._0_4_ = pmVar45[0x12].cpusubtype;
                        uVar29._4_4_ = pmVar45[0x12].filetype;
                        pmStack_348 = pmVar55;
                        FUN_109d666e0();
                        pmVar55 = *ppmStack_3f0;
                        pmStack_340 = (mach_header *)uVar29;
                        if (pmStack_3c8 == (mach_header *)0x0) {
                          pdVar26 = *(dword **)&pmVar55[0x30].ncmds;
                          if (pdVar26 == (dword *)0x0) {
                            pdVar26 = &pmVar55[0x3a].ncmds;
                            FUN_109d678e8(pdVar26,0,0);
                            *(dword **)&pmVar55[0x30].ncmds = pdVar26;
                          }
                        }
                        else {
                          pdVar26 = *(dword **)&pmVar55[0x30].cpusubtype;
                          if (pdVar26 == (dword *)0x0) {
                            pdVar26 = &pmVar55[0x3a].ncmds;
                            FUN_109d678e8(pdVar26,1,0);
                            *(dword **)&pmVar55[0x30].cpusubtype = pdVar26;
                          }
                        }
                        pdStack_338 = pdVar26;
                        if (pmVar57 == (mach_header *)0x0) {
                          pmVar57 = *(mach_header **)pdVar25;
                          FUN_109d67974(0);
                        }
                        pmVar55 = *(mach_header **)pdVar25;
                        pmStack_330 = pmVar57;
                        FUN_109d67974(0);
                        uVar38._0_4_ = pmVar45[0x10].ncmds;
                        uVar38._4_4_ = pmVar45[0x10].sizeofcmds;
                        pmStack_328 = pmVar55;
                        FUN_109d66880(uVar38,0,0);
                        uStack_320 = uVar38;
                        FUN_109fab404(auStack_310,auStack_360,9);
                        pmStack_340._0_2_ = 0x101;
                        pmVar21 = pmStack_3e8;
                        FUN_109d5ce48(pmStack_3e8,uVar27,puVar19,auStack_310,
                                      (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                        *(ushort *)((long)&pmVar21->ncmds + 2) =
                             *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x15);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x2d);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        FUN_109d8b930(pmVar21,1);
                        pmVar41 = pmStack_3e8;
                        auStack_398._0_8_ = (ulong)(uint)auStack_398._4_4_ << 0x20;
                        pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                        pmVar55 = (mach_header *)auStack_398;
                        pmVar62 = pmStack_3e8;
                        func_0x000109d5ccf8(pmStack_3e8,pmVar21,pmVar55,1,auStack_360);
                      }
                      else if (uVar48 == 3) {
                        lVar14 = *(long *)pmStack_3b0;
                        if (((lVar14 != 0) && (*(char *)(lVar14 + 8) == '\x12')) &&
                           (3 < *(uint *)(lVar14 + 0x20))) {
                          auStack_310 = (undefined1  [8])&MACH_HEADER;
                          ppmStack_308 = (mach_header **)CONCAT44(ppmStack_308._4_4_,2);
                          uStack_2a0 = 0x101;
                          FUN_109d37990(pmVar41,pmStack_3b0,pmStack_3b0,auStack_310,3,auStack_2c0);
                          pmStack_3b0 = pmVar41;
                        }
                        auStack_2c0._0_8_ = *(undefined8 *)&pmVar45[0x11].flags;
                        auStack_2c0._8_8_ = *(undefined8 *)&pmVar45[0xf].ncmds;
                        ppmVar18 = ppmStack_3f0;
                        FUN_109d9fa44(ppmStack_3f0,auStack_2c0,2,0);
                        auStack_310 = (undefined1  [8])pmStack_3f8;
                        ppmStack_308 = ppmStack_410;
                        pmStack_300 = *(mach_header **)&pmVar45[0x11].ncmds;
                        pmStack_2f8 = *(mach_header **)&pmVar45[0xf].cpusubtype;
                        pdVar25 = &pmVar45[0x10].cpusubtype;
                        pmStack_2e0 = *(mach_header **)&pmVar45[0x10].ncmds;
                        pmStack_2f0 = *(mach_header **)pdVar25;
                        pmStack_2e8 = pmStack_2f0;
                        FUN_109fab3a8(auStack_2c0,auStack_310,7);
                        FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0);
                        uVar36._0_4_ = pmStack_3a8->cpusubtype;
                        uVar36._4_4_ = pmStack_3a8->filetype;
                        puVar19 = (undefined8 *)&UNK_10f62b9e8;
                        FUN_109d9d3e8(uVar36,&UNK_10f62b9e8,0x1d,ppmVar18,0);
                        if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                          puVar24 = puVar19 + 0xe;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,6);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                          puVar19[0xe] = puVar28;
                          FUN_109d853ec(puVar19,1);
                          *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x15);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x2d);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x15);
                          puVar19[0xe] = puVar28;
                          puVar28 = puVar24;
                          FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x2d);
                          *puVar24 = puVar28;
                        }
                        pmVar57 = pmStack_3d0;
                        if (pmStack_3c8 != (mach_header *)0x0) {
                          pmVar57 = pmStack_3c8;
                        }
                        pmStack_350 = pmStack_3b0;
                        pmVar55 = *ppmStack_3f0;
                        if (pmStack_3c8 == (mach_header *)0x0) {
                          pmVar21 = *(mach_header **)&pmVar55[0x30].ncmds;
                          auStack_360._0_7_ = uVar7;
                          auStack_360[7] = uVar9;
                          auStack_360._8_4_ = uVar10;
                          auStack_360._12_4_ = uVar12;
                          if (pmVar21 == (mach_header *)0x0) {
                            pmVar21 = (mach_header *)&pmVar55[0x3a].ncmds;
                            FUN_109d678e8(pmVar21,0,0);
                            *(mach_header **)&pmVar55[0x30].ncmds = pmVar21;
                          }
                        }
                        else {
                          pmVar21 = *(mach_header **)&pmVar55[0x30].cpusubtype;
                          auStack_360._0_7_ = uVar7;
                          auStack_360[7] = uVar9;
                          auStack_360._8_4_ = uVar10;
                          auStack_360._12_4_ = uVar12;
                          if (pmVar21 == (mach_header *)0x0) {
                            pmVar21 = (mach_header *)&pmVar55[0x3a].ncmds;
                            FUN_109d678e8(pmVar21,1,0);
                            *(mach_header **)&pmVar55[0x30].cpusubtype = pmVar21;
                          }
                        }
                        pmStack_348 = pmVar21;
                        if (pmVar57 == (mach_header *)0x0) {
                          pmVar57 = *(mach_header **)pdVar25;
                          FUN_109d67974(0);
                        }
                        pdVar25 = *(dword **)pdVar25;
                        pmStack_340 = pmVar57;
                        FUN_109d67974(0);
                        pmVar57 = *(mach_header **)&pmVar45[0x10].ncmds;
                        pdStack_338 = pdVar25;
                        FUN_109d66880(pmVar57,0,0);
                        pmStack_330 = pmVar57;
                        FUN_109fab404(auStack_310,auStack_360,7);
                        pmStack_340._0_2_ = 0x101;
                        pmVar21 = pmStack_3e8;
                        FUN_109d5ce48(pmStack_3e8,uVar36,puVar19,auStack_310,
                                      (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                        *(ushort *)((long)&pmVar21->ncmds + 2) =
                             *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x15);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        pmVar57 = pmVar21 + 2;
                        FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x2d);
                        *(mach_header **)(pmVar21 + 2) = pmVar57;
                        FUN_109d8b930(pmVar21,1);
                        pmVar41 = pmStack_3e8;
                        auStack_398._0_8_ = (ulong)(uint)auStack_398._4_4_ << 0x20;
                        pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                        pmVar55 = (mach_header *)auStack_398;
                        pmVar62 = pmStack_3e8;
                        func_0x000109d5ccf8(pmStack_3e8,pmVar21,pmVar55,1,auStack_360);
                      }
                      else {
                        if ((uVar48 != 6) && (uVar48 != 4)) {
LAB_109fa726c:
                          uStack_420 = (ulong)uVar48;
                          FUN_109f97010(auStack_310,&UNK_10f62ba22);
                          auVar58 = (undefined1  [8])auStack_2c0;
                          pmVar21 = (mach_header *)auStack_310;
                          pmVar55 = (mach_header *)0x2;
                          FUN_109f92740();
                          pmVar46->magic = auStack_2c0._0_4_;
                          *(mach_header **)&pmVar46->ncmds = apmStack_2b0[0];
                          pmVar46->cpusubtype = auStack_2c0._8_4_;
                          pmVar46->filetype = auStack_2c0._12_4_;
                          *(mach_header **)&pmVar46->flags = apmStack_2b0[1];
                          pmVar46[1].magic = (int)CONCAT62(uStack_29e,uStack_2a0);
                          pmVar46[1].cputype = SUB64(uStack_29e,2);
                          *(undefined1 *)&pmVar46[1].cpusubtype = 0;
                          param_2 = pmVar46;
                          goto LAB_109fa72b4;
                        }
LAB_109fa6400:
                        lVar14 = *(long *)pmStack_3b0;
                        if (((lVar14 != 0) && (*(char *)(lVar14 + 8) == '\x12')) &&
                           (2 < *(uint *)(lVar14 + 0x20))) {
                          auStack_310 = (undefined1  [8])&MACH_HEADER;
                          uStack_2a0 = 0x101;
                          pmVar57 = pmVar41;
                          FUN_109d37990(pmVar41,pmStack_3b0,pmStack_3b0,auStack_310,2,auStack_2c0);
                          pmStack_3b0 = pmVar57;
                        }
                        auStack_2c0._0_8_ = *(undefined8 *)&pmVar45[0x11].flags;
                        auStack_2c0._8_8_ = *(undefined8 *)&pmVar45[0xf].ncmds;
                        ppmVar18 = ppmStack_3f0;
                        FUN_109d9fa44(ppmStack_3f0,auStack_2c0,2,0);
                        if (pmStack_3e0[1].ncmds == 3) {
                          pmVar60 = pmVar41;
                          func_0x000109fab294(pmVar41,lVar68);
                          func_0x000109fab294(pmVar41,lStack_3c0);
                          auStack_310 = (undefined1  [8])pmStack_3f8;
                          ppmStack_308 = ppmStack_410;
                          pmStack_300 = *(mach_header **)&pmVar45[0x11].cpusubtype;
                          pmStack_2e8 = *(mach_header **)&pmVar45[0x10].cpusubtype;
                          pmStack_2e0 = *(mach_header **)&pmVar45[0xf].cpusubtype;
                          pmStack_2d8 = *(mach_header **)(pmVar45 + 0x12);
                          pmStack_2d0 = *(mach_header **)&pmVar45[0x10].ncmds;
                          pmStack_2f8 = pmStack_300;
                          pmStack_2f0 = pmStack_300;
                          FUN_109fab3a8(auStack_2c0,auStack_310,9);
                          FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0)
                          ;
                          uVar30._0_4_ = pmStack_3a8->cpusubtype;
                          uVar30._4_4_ = pmStack_3a8->filetype;
                          puVar19 = (undefined8 *)&UNK_10f62b9ab;
                          FUN_109d9d3e8(uVar30,&UNK_10f62b9ab,0x20,ppmVar18,0);
                          if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                            puVar24 = puVar19 + 0xe;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,6);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                            puVar19[0xe] = puVar28;
                            FUN_109d853ec(puVar19,1);
                            *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x15);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x2d);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x15);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x2d);
                            *puVar24 = puVar28;
                          }
                          pmStack_350 = pmStack_3b0;
                          pdVar25 = *(dword **)&pmStack_3b8[0x10].cpusubtype;
                          auStack_360._0_7_ = uVar7;
                          auStack_360[7] = uVar9;
                          auStack_360._8_4_ = uVar10;
                          auStack_360._12_4_ = uVar12;
                          pmStack_348 = pmVar60;
                          pmStack_340 = pmVar41;
                          FUN_109d67974(0);
                          pmVar41 = pmStack_3e8;
                          pmVar57 = *ppmStack_3f0;
                          pmStack_330 = *(mach_header **)&pmVar57[0x30].cpusubtype;
                          pdStack_338 = pdVar25;
                          if (pmStack_330 == (mach_header *)0x0) {
                            pmStack_330 = (mach_header *)&pmVar57[0x3a].ncmds;
                            FUN_109d678e8(pmStack_330,1,0);
                            *(mach_header **)&pmVar57[0x30].cpusubtype = pmStack_330;
                          }
                          pmVar57 = *(mach_header **)(pmStack_3b8 + 0x12);
                          FUN_109d666e0();
                          uVar31._0_4_ = pmStack_3b8[0x10].ncmds;
                          uVar31._4_4_ = pmStack_3b8[0x10].sizeofcmds;
                          pmStack_328 = pmVar57;
                          FUN_109d66880(uVar31,0,0);
                          uStack_320 = uVar31;
                          FUN_109fab404(auStack_310,auStack_360,9);
                          pmStack_340._0_2_ = 0x101;
                          pmVar21 = pmVar41;
                          FUN_109d5ce48(pmVar41,uVar30,puVar19,auStack_310,
                                        (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                          *(ushort *)((long)&pmVar21->ncmds + 2) =
                               *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                          pmVar45 = pmStack_3b8;
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x15);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x2d);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          FUN_109d8b930(pmVar21,1);
                          auStack_398._0_8_ = (ulong)(uint)auStack_398._4_4_ << 0x20;
                          pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                          pmVar55 = (mach_header *)auStack_398;
                          pmVar62 = pmVar41;
                          func_0x000109d5ccf8(pmVar41,pmVar21,pmVar55,1,auStack_360);
                        }
                        else {
                          auStack_310 = (undefined1  [8])pmStack_3f8;
                          ppmStack_308 = ppmStack_410;
                          pmStack_300 = *(mach_header **)&pmVar45[0x11].cpusubtype;
                          pmStack_2f8 = *(mach_header **)&pmVar45[0xf].cpusubtype;
                          pmStack_2f0 = *(mach_header **)(pmVar45 + 0x12);
                          pdVar25 = &pmVar45[0x10].cpusubtype;
                          pmStack_2d0 = *(mach_header **)&pmVar45[0x10].ncmds;
                          pmStack_2e0 = *(mach_header **)pdVar25;
                          pmStack_2e8 = pmStack_2f8;
                          pmStack_2d8 = pmStack_2e0;
                          FUN_109fab3a8(auStack_2c0,auStack_310,9);
                          FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0)
                          ;
                          uVar35._0_4_ = pmStack_3a8->cpusubtype;
                          uVar35._4_4_ = pmStack_3a8->filetype;
                          puVar19 = (undefined8 *)&UNK_10f62b9cc;
                          FUN_109d9d3e8(uVar35,&UNK_10f62b9cc,0x1b,ppmVar18,0);
                          if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                            puVar24 = puVar19 + 0xe;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,6);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                            puVar19[0xe] = puVar28;
                            FUN_109d853ec(puVar19,1);
                            *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x15);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x2d);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x15);
                            puVar19[0xe] = puVar28;
                            puVar28 = puVar24;
                            FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x2d);
                            *puVar24 = puVar28;
                          }
                          pmVar57 = pmStack_3d0;
                          if (pmStack_3c8 != (mach_header *)0x0) {
                            pmVar57 = pmStack_3c8;
                          }
                          pmStack_350 = pmStack_3b0;
                          pmVar21 = *ppmStack_3f0;
                          pmVar55 = *(mach_header **)&pmVar21[0x30].cpusubtype;
                          auStack_360._0_7_ = uVar7;
                          auStack_360[7] = uVar9;
                          auStack_360._8_4_ = uVar10;
                          auStack_360._12_4_ = uVar12;
                          if (pmVar55 == (mach_header *)0x0) {
                            pmVar55 = (mach_header *)&pmVar21[0x3a].ncmds;
                            FUN_109d678e8(pmVar55,1,0);
                            *(mach_header **)&pmVar21[0x30].cpusubtype = pmVar55;
                          }
                          ppmVar18 = *(mach_header ***)(pmVar45 + 0x12);
                          pmStack_348 = pmVar55;
                          FUN_109d666e0();
                          pmVar55 = *ppmStack_3f0;
                          pmStack_340 = (mach_header *)ppmVar18;
                          if (pmStack_3c8 == (mach_header *)0x0) {
                            pdVar26 = *(dword **)&pmVar55[0x30].ncmds;
                            if (pdVar26 == (dword *)0x0) {
                              pdVar26 = &pmVar55[0x3a].ncmds;
                              FUN_109d678e8(pdVar26,0,0);
                              *(dword **)&pmVar55[0x30].ncmds = pdVar26;
                            }
                          }
                          else {
                            pdVar26 = *(dword **)&pmVar55[0x30].cpusubtype;
                            if (pdVar26 == (dword *)0x0) {
                              pdVar26 = &pmVar55[0x3a].ncmds;
                              FUN_109d678e8(pdVar26,1,0);
                              *(dword **)&pmVar55[0x30].cpusubtype = pdVar26;
                            }
                          }
                          pdStack_338 = pdVar26;
                          if (pmVar57 == (mach_header *)0x0) {
                            pmVar57 = *(mach_header **)pdVar25;
                            FUN_109d67974(0);
                          }
                          pmVar55 = *(mach_header **)pdVar25;
                          pmStack_330 = pmVar57;
                          FUN_109d67974(0);
                          uVar37._0_4_ = pmVar45[0x10].ncmds;
                          uVar37._4_4_ = pmVar45[0x10].sizeofcmds;
                          pmStack_328 = pmVar55;
                          FUN_109d66880(uVar37,0,0);
                          uStack_320 = uVar37;
                          FUN_109fab404(auStack_310,auStack_360,9);
                          pmStack_340._0_2_ = 0x101;
                          pmVar21 = pmStack_3e8;
                          FUN_109d5ce48(pmStack_3e8,uVar35,puVar19,auStack_310,
                                        (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                          *(ushort *)((long)&pmVar21->ncmds + 2) =
                               *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x15);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          pmVar57 = pmVar21 + 2;
                          FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x2d);
                          *(mach_header **)(pmVar21 + 2) = pmVar57;
                          FUN_109d8b930(pmVar21,1);
                          pmVar41 = pmStack_3e8;
                          auStack_398._0_8_ = (ulong)(uint)auStack_398._4_4_ << 0x20;
                          pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                          pmVar55 = (mach_header *)auStack_398;
                          pmVar62 = pmStack_3e8;
                          func_0x000109d5ccf8(pmStack_3e8,pmVar21,pmVar55,1,auStack_360);
                        }
                      }
                    }
                    else {
                      lVar14 = *(long *)pmStack_3b0;
                      if (((lVar14 == 0) || (*(char *)(lVar14 + 8) != '\x12')) ||
                         (*(uint *)(lVar14 + 0x20) < 3)) {
LAB_109fa5c44:
                        pmVar41 = *(mach_header **)&pmVar45[0x10].cpusubtype;
                        FUN_109d67974(0);
                      }
                      else {
                        uStack_2a0 = 0x101;
                        FUN_109d5c370(pmVar41,pmStack_3b0,2,auStack_2c0);
                        if (pmVar41 == (mach_header *)0x0) goto LAB_109fa5c44;
                      }
                      uVar22._0_4_ = pmVar45[0x10].ncmds;
                      uVar22._4_4_ = pmVar45[0x10].sizeofcmds;
                      auStack_2c0._0_4_ = pmVar45[0x10].cpusubtype;
                      auStack_2c0._4_4_ = pmVar45[0x10].filetype;
                      FUN_109d9f92c(uVar22,auStack_2c0,1,0);
                      uVar23._0_4_ = pmStack_3a8->cpusubtype;
                      uVar23._4_4_ = pmStack_3a8->filetype;
                      puVar19 = (undefined8 *)&UNK_10f62b971;
                      FUN_109d9d3e8(uVar23,&UNK_10f62b971,0x17,uVar22,0);
                      if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                        puVar24 = puVar19 + 0xe;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                        puVar19[0xe] = puVar28;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                        puVar19[0xe] = puVar24;
                        FUN_109d853ec(puVar19,0);
                        *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                      }
                      uStack_2a0 = 0x101;
                      pmVar55 = pmStack_3e8;
                      auStack_310 = (undefined1  [8])pmVar41;
                      FUN_109d5ce48(pmStack_3e8,uVar23,puVar19,auStack_310,1,auStack_2c0,0);
                      *(ushort *)((long)&pmVar55->ncmds + 2) =
                           *(ushort *)((long)&pmVar55->ncmds + 2) & 0xfffc | 1;
                      pmVar57 = pmVar55 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar55,0xffffffff,0x24);
                      *(mach_header **)(pmVar55 + 2) = pmVar57;
                      pmVar57 = pmVar55 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar55,0xffffffff,0x42);
                      *(mach_header **)(pmVar55 + 2) = pmVar57;
                      lVar14 = *(long *)pmStack_3b0;
                      if (((lVar14 != 0) && (*(char *)(lVar14 + 8) == '\x12')) &&
                         (2 < *(uint *)(lVar14 + 0x20))) {
                        auStack_310 = (undefined1  [8])&MACH_HEADER;
                        uStack_2a0 = 0x101;
                        pmVar57 = pmStack_3e8;
                        FUN_109d37990(pmStack_3e8,pmStack_3b0,pmStack_3b0,auStack_310,2,auStack_2c0)
                        ;
                        pmStack_3b0 = pmVar57;
                      }
                      auStack_2c0._0_8_ = *(undefined8 *)&pmVar45[0x11].flags;
                      auStack_2c0._8_8_ = *(undefined8 *)&pmVar45[0xf].ncmds;
                      ppmVar18 = ppmStack_3f0;
                      FUN_109d9fa44(ppmStack_3f0,auStack_2c0,2,0);
                      auStack_310 = (undefined1  [8])pmStack_3f8;
                      ppmStack_308 = ppmStack_410;
                      pmStack_300 = *(mach_header **)&pmVar45[0x11].cpusubtype;
                      pmStack_2f8 = *(mach_header **)&pmVar45[0x10].ncmds;
                      pmStack_2f0 = *(mach_header **)&pmVar45[0xf].cpusubtype;
                      pmStack_2e8 = *(mach_header **)(pmVar45 + 0x12);
                      pmStack_2d8 = *(mach_header **)&pmVar45[0x10].cpusubtype;
                      pmStack_2e0 = pmStack_2f0;
                      pmStack_2d0 = pmStack_2d8;
                      pmStack_2c8 = pmStack_2f8;
                      FUN_109fab3a8(auStack_2c0,auStack_310,10);
                      FUN_109d9f92c(ppmVar18,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,0);
                      pmVar60 = *(mach_header **)&pmStack_3a8->cpusubtype;
                      puVar19 = (undefined8 *)&UNK_10f62b989;
                      FUN_109d9d3e8(pmVar60,&UNK_10f62b989,0x21,ppmVar18,0);
                      if ((puVar19 != (undefined8 *)0x0) && (*(char *)(puVar19 + 2) == '\0')) {
                        puVar24 = puVar19 + 0xe;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,6);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0xf);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x24);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x42);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,0xffffffff,0x18);
                        puVar19[0xe] = puVar28;
                        FUN_109d853ec(puVar19,1);
                        *(uint *)(puVar19 + 4) = *(uint *)(puVar19 + 4) & 0xffffff3f | 0x40;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x15);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,1,0x2d);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x15);
                        puVar19[0xe] = puVar28;
                        puVar28 = puVar24;
                        FUN_109d5ab08(puVar24,*(undefined8 *)*puVar19,2,0x2d);
                        *puVar24 = puVar28;
                      }
                      pmVar57 = pmStack_3d0;
                      if (pmStack_3c8 != (mach_header *)0x0) {
                        pmVar57 = pmStack_3c8;
                      }
                      pmStack_350 = pmStack_3b0;
                      pmVar21 = *ppmStack_3f0;
                      pdVar25 = *(dword **)&pmVar21[0x30].cpusubtype;
                      auStack_360._0_7_ = uVar7;
                      auStack_360[7] = uVar9;
                      auStack_360._8_4_ = uVar10;
                      auStack_360._12_4_ = uVar12;
                      pmStack_348 = pmVar55;
                      if (pdVar25 == (dword *)0x0) {
                        pdVar25 = &pmVar21[0x3a].ncmds;
                        FUN_109d678e8(pdVar25,1,0);
                        *(dword **)&pmVar21[0x30].cpusubtype = pdVar25;
                      }
                      pdVar26 = *(dword **)(pmVar45 + 0x12);
                      pmStack_340 = (mach_header *)pdVar25;
                      FUN_109d666e0();
                      pmVar55 = *ppmStack_3f0;
                      pdStack_338 = pdVar26;
                      if (pmStack_3c8 == (mach_header *)0x0) {
                        pmVar21 = *(mach_header **)&pmVar55[0x30].ncmds;
                        if (pmVar21 == (mach_header *)0x0) {
                          pmVar21 = (mach_header *)&pmVar55[0x3a].ncmds;
                          FUN_109d678e8(pmVar21,0,0);
                          *(mach_header **)&pmVar55[0x30].ncmds = pmVar21;
                        }
                      }
                      else {
                        pmVar21 = *(mach_header **)&pmVar55[0x30].cpusubtype;
                        if (pmVar21 == (mach_header *)0x0) {
                          pmVar21 = (mach_header *)&pmVar55[0x3a].ncmds;
                          FUN_109d678e8(pmVar21,1,0);
                          *(mach_header **)&pmVar55[0x30].cpusubtype = pmVar21;
                        }
                      }
                      pmStack_330 = pmVar21;
                      if (pmVar57 == (mach_header *)0x0) {
                        pmVar57 = *(mach_header **)&pmVar45[0x10].cpusubtype;
                        FUN_109d67974(0);
                      }
                      uVar33._0_4_ = pmVar45[0x10].cpusubtype;
                      uVar33._4_4_ = pmVar45[0x10].filetype;
                      pmStack_328 = pmVar57;
                      FUN_109d67974(0);
                      uVar34._0_4_ = pmVar45[0x10].ncmds;
                      uVar34._4_4_ = pmVar45[0x10].sizeofcmds;
                      uStack_320 = uVar33;
                      FUN_109d66880(uVar34,0,0);
                      uStack_318 = uVar34;
                      FUN_109fab404(auStack_310,auStack_360,10);
                      pmStack_340._0_2_ = 0x101;
                      pmVar21 = pmStack_3e8;
                      FUN_109d5ce48(pmStack_3e8,pmVar60,puVar19,auStack_310,
                                    (ulong)ppmStack_308 & 0xffffffff,auStack_360,0);
                      *(ushort *)((long)&pmVar21->ncmds + 2) =
                           *(ushort *)((long)&pmVar21->ncmds + 2) & 0xfffc | 1;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,6);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x24);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,0xffffffff,0x42);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x15);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,1,0x2d);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x15);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      pmVar57 = pmVar21 + 2;
                      FUN_109d5ab08(pmVar57,**(undefined8 **)pmVar21,2,0x2d);
                      *(mach_header **)(pmVar21 + 2) = pmVar57;
                      FUN_109d8b930(pmVar21,1);
                      pmVar41 = pmStack_3e8;
                      auStack_398._0_8_ = (ulong)(uint)auStack_398._4_4_ << 0x20;
                      pmStack_340 = (mach_header *)CONCAT62(pmStack_340._2_6_,0x101);
                      pmVar55 = (mach_header *)auStack_398;
                      pmVar62 = pmStack_3e8;
                      func_0x000109d5ccf8(pmStack_3e8,pmVar21,pmVar55,1,auStack_360);
                    }
                    if (auStack_310 != (undefined1  [8])&pmStack_300) {
                      _free();
                    }
                    auVar58 = (undefined1  [8])auStack_2c0._0_8_;
                    if ((mach_header *)auStack_2c0._0_8_ != (mach_header *)apmStack_2b0) {
                      _free();
                    }
LAB_109fa77e4:
                    pmVar57 = (mach_header *)auStack_360;
                    bVar5 = (byte)pmStack_3e0[2].sizeofcmds;
                    pmVar21 = (mach_header *)(ulong)bVar5;
                    pmVar63 = pmVar62;
                    if (bVar5 < 4) {
                      pmVar55 = pmVar45;
                      func_0x000109f9a5dc();
                      if (pmVar55 == *(mach_header **)&pmVar45[0x10].cpusubtype) {
                        uStack_2a0 = 0x101;
                        pmVar55 = (mach_header *)0x0;
                        FUN_109d5c370();
                        auVar58 = (undefined1  [8])pmVar41;
                        pmVar21 = pmVar62;
                        pmVar63 = pmVar41;
                      }
                      else {
                        FUN_109fab328(auStack_360,pmStack_3e0);
                        pmStack_2f0 = (mach_header *)CONCAT62(pmStack_2f0._2_6_,0x101);
                        pmVar55 = pmVar62;
                        FUN_109d37990();
                        auVar58 = (undefined1  [8])CONCAT17(auStack_360[7],auStack_360._0_7_);
                        pmVar21 = pmVar62;
                        pmVar63 = pmVar41;
                        if (auVar58 != (undefined1  [8])&pmStack_350) {
                          _free();
                          pmVar21 = pmVar62;
                        }
                      }
                    }
                    if (pmVar63 != (mach_header *)0x0) {
                      pmVar55 = (mach_header *)&pmStack_3e0[2].ncmds;
                      pmVar21 = (mach_header *)(ulong)*(uint *)pmVar55;
                      auVar58 = (undefined1  [8])&pmStack_3a8[1].ncmds;
                      FUN_109fab460();
                      *(mach_header **)&((mach_header *)auVar58)->flags = pmVar63;
                    }
                    pmVar46->flags = 0;
                    pmVar46->reserved = 0;
                    pmVar46->ncmds = 0;
                    pmVar46->sizeofcmds = 0;
                    pmVar46[1].cpusubtype = 0;
                    pmVar46[1].filetype = 0;
                    *(mach_header ***)(pmVar46 + 1) = (mach_header **)0x0;
                    pmVar46->cpusubtype = 0;
                    pmVar46->filetype = 0;
                    *(mach_header ***)pmVar46 = (mach_header **)0x0;
                    *(undefined1 *)&pmVar46[1].cpusubtype = 1;
                    param_2 = pmVar46;
                    pmVar62 = pmVar60;
                  }
                  auVar16 = (undefined1  [8])auStack_380._0_8_;
                  if (-1 < cStack_369) goto LAB_109fa5528;
                  goto LAB_109fa5524;
                }
                break;
              }
            }
            FUN_109f97010(auStack_310,&UNK_10f62b8d0);
            auVar58 = (undefined1  [8])auStack_2c0;
            pmVar21 = (mach_header *)auStack_310;
            pmVar55 = (mach_header *)0x2;
            FUN_109f92740();
            pmVar41->magic = auStack_2c0._0_4_;
            *(mach_header **)&pmVar41->ncmds = apmStack_2b0[0];
            pmVar41->cpusubtype = auStack_2c0._8_4_;
            pmVar41->filetype = auStack_2c0._12_4_;
            *(mach_header **)&pmVar41->flags = apmStack_2b0[1];
            pmVar41[1].magic = (int)CONCAT62(uStack_29e,uStack_2a0);
            pmVar41[1].cputype = SUB64(uStack_29e,2);
            *(undefined1 *)&pmVar41[1].cpusubtype = 0;
            param_2 = pmVar41;
            goto LAB_109fa5518;
          }
        }
        FUN_109f97010(auStack_310,&UNK_10f62b89a);
        auVar58 = (undefined1  [8])auStack_2c0;
        pmVar21 = (mach_header *)auStack_310;
        pmVar55 = (mach_header *)0x2;
        FUN_109f92740();
        pmStack_3d8->magic = auStack_2c0._0_4_;
        *(mach_header **)&pmStack_3d8->ncmds = apmStack_2b0[0];
        pmStack_3d8->cpusubtype = auStack_2c0._8_4_;
        pmStack_3d8->filetype = auStack_2c0._12_4_;
        *(mach_header **)&pmStack_3d8->flags = apmStack_2b0[1];
        pmStack_3d8[1].magic = (int)CONCAT62(uStack_29e,uStack_2a0);
        pmStack_3d8[1].cputype = SUB64(uStack_29e,2);
        *(undefined1 *)&pmStack_3d8[1].cpusubtype = 0;
        goto LAB_109fa5518;
      }
    }
    FUN_109f97010(auStack_310,&UNK_10f62b83e);
    auVar58 = (undefined1  [8])auStack_2c0;
    pmVar21 = (mach_header *)auStack_310;
    pmVar55 = (mach_header *)0x2;
    FUN_109f92740();
  }
  else {
    uStack_420 = (ulong)uVar47;
    FUN_109f97010(auStack_310,&UNK_10f62b7b1);
    auVar58 = (undefined1  [8])auStack_2c0;
    pmVar21 = (mach_header *)auStack_310;
    pmVar55 = (mach_header *)0x2;
    FUN_109f92740();
  }
LAB_109fa54fc:
  pmVar57->magic = auStack_2c0._0_4_;
  *(mach_header **)&pmVar57->ncmds = apmStack_2b0[0];
  pmVar57->cpusubtype = auStack_2c0._8_4_;
  pmVar57->filetype = auStack_2c0._12_4_;
  *(mach_header **)&pmVar57->flags = apmStack_2b0[1];
  pmVar57[1].magic = (int)CONCAT62(uStack_29e,uStack_2a0);
  pmVar57[1].cputype = SUB64(uStack_29e,2);
  *(undefined1 *)&pmVar57[1].cpusubtype = 0;
LAB_109fa5518:
  auVar16 = auStack_310;
  if ((long)pmStack_300 < 0) {
LAB_109fa5524:
    __ZdlPv();
    auVar58 = auVar16;
  }
LAB_109fa5528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return (mach_header *)auVar58;
  }
  ___stack_chk_fail();
  if (cStack_369 < '\0') {
    __ZdlPv(auStack_380._0_8_);
  }
  __Unwind_Resume();
  ppuStack_430 = &puStack_200;
  pcStack_428 = FUN_109fa7b9c;
  lVar14 = *(long *)((long)pmVar21 + (((ulong)pmVar55 & 0xffffffff) * 6 + 0xd) * 8);
  if (lVar14 != 0) {
    pdVar25 = &((mach_header *)((long)auVar58 + 0x20))->ncmds;
    FUN_109fab870(pdVar25,*(undefined4 *)(lVar14 + 0x18));
    if ((pdVar25 != (dword *)0x0) &&
       (pmVar41 = *(mach_header **)(pdVar25 + 6), pmVar41 != (mach_header *)0x0)) {
      uVar56 = (ulong)pmVar55 & 0xffffffff;
      bVar5 = (byte)pmVar21[2].filetype;
      pmVar45 = (mach_header *)(ulong)bVar5;
      pmVar55 = (mach_header *)((long)pmVar21 + (uVar56 * 6 + 10) * 8);
      pmVar63 = &mStack_4f0;
      lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pmVar46 = pmVar41;
      pmVar60 = pmVar45;
      if (pmVar41 == (mach_header *)0x0) {
        pmVar39 = (mach_header *)auVar58;
        auVar58 = (undefined1  [8])pmVar57;
        pmVar57 = (mach_header *)0x0;
      }
      else {
        pmVar39 = *(mach_header **)pmVar41;
        uVar47 = (uint)bVar5;
        if (pmVar39 == (mach_header *)0x0 || (char)pmVar39->cpusubtype != '\x12') {
          uVar48 = 1;
        }
        else {
          uVar48 = pmVar39[1].magic;
        }
        param_2 = pmVar45;
        if (uVar47 != 0) {
          pmVar57 = (mach_header *)0x0;
          do {
            if (pmVar57 !=
                (mach_header *)
                (ulong)*(byte *)((long)((long)pmVar21 + (uVar56 * 6 + 0xe) * 8) + (long)pmVar57))
            goto LAB_109fa8cc4;
            pmVar57 = (mach_header *)((long)&pmVar57->magic + 1);
          } while (pmVar45 != pmVar57);
        }
        pmVar57 = pmVar41;
        if (uVar48 != uVar47) {
LAB_109fa8cc4:
          uVar50 = (uint)bVar5;
          if ((uVar50 == 1) && (1 < uVar48)) {
            auVar58 = *(undefined1 (*) [8])&((mach_header *)auVar58)->ncmds;
            uStack_4d0 = 0x101;
            pmVar55 = (mach_header *)(**(long **)((long)auVar58 + 0x40) + 0x7b0);
            FUN_109d678e8(pmVar55,(char)*(dword *)((long)pmVar21 + (uVar56 * 6 + 0xe) * 8),0);
            pmVar39 = (mach_header *)auVar58;
            func_0x000109d5c6e0(auVar58,pmVar41,pmVar55,&mStack_4f0);
            pmVar46 = pmVar41;
            pmVar60 = pmVar63;
            pmVar57 = pmVar39;
          }
          else if ((uVar50 < 2) || (uVar48 != 1)) {
            pmVar62 = (mach_header *)&stack0xfffffffffffffb68;
            uStack_4a0 = 0x400000000;
            pmStack_4a8 = pmVar62;
            if (uVar47 != 0) {
              pdVar25 = (dword *)((long)pmVar21 + (uVar56 * 6 + 0xe) * 8);
              uVar56 = (ulong)uVar50;
              do {
                FUN_109d3785c(&pmStack_4a8,(char)*pdVar25);
                uVar56 = uVar56 - 1;
                pdVar25 = (dword *)((long)pdVar25 + 1);
              } while (uVar56 != 0);
              if (1 < uVar50) {
                lVar14 = (ulong)uVar50 - 1;
                pmVar57 = pmStack_4a8;
                do {
                  pmVar57 = (mach_header *)&pmVar57->cputype;
                  if (*(dword *)pmVar57 != pmStack_4a8->magic) goto LAB_109fa8e64;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
            }
            if (uVar48 < 2) {
LAB_109fa8e64:
              auVar58 = *(undefined1 (*) [8])&((mach_header *)auVar58)->ncmds;
              pmVar55 = *(mach_header **)pmVar41;
              FUN_109d67e38(pmVar55);
              uStack_4d0 = 0x101;
              pmVar57 = (mach_header *)auVar58;
              pmVar60 = pmStack_4a8;
              FUN_109d37990(auVar58,pmVar41,pmVar55,pmStack_4a8,uStack_4a0 & 0xffffffff,&mStack_4f0)
              ;
            }
            else {
              uStack_4c0 = 0x400000000;
              pmStack_4c8 = (mach_header *)auStack_4b8;
              FUN_109d378b8(&pmStack_4c8,pmVar45,pmStack_4a8->magic);
              auVar58 = *(undefined1 (*) [8])&((mach_header *)auVar58)->ncmds;
              pmVar55 = *(mach_header **)pmVar41;
              FUN_109d67e38(pmVar55);
              uStack_4d0 = 0x101;
              pmVar57 = (mach_header *)auVar58;
              pmVar60 = pmStack_4c8;
              FUN_109d37990(auVar58,pmVar41,pmVar55,pmStack_4c8,uStack_4c0 & 0xffffffff,&mStack_4f0)
              ;
              pmVar45 = (mach_header *)auStack_4b8;
              if (pmStack_4c8 != (mach_header *)auStack_4b8) {
                _free();
              }
            }
            pmVar39 = pmStack_4a8;
            pmVar46 = pmVar41;
            param_2 = pmVar45;
            if (pmStack_4a8 != pmVar62) {
              _free();
              pmVar46 = pmVar41;
            }
          }
          else {
            func_0x000109da00ec(pmVar39,pmVar45);
            FUN_109d67e38();
            pmVar62 = (mach_header *)0x0;
            pmVar57 = pmVar39;
            do {
              param_2 = *(mach_header **)&((mach_header *)auVar58)->ncmds;
              uStack_4d0 = 0x101;
              pmVar60 = (mach_header *)(**(long **)(param_2 + 2) + 0x7b0);
              FUN_109d678e8(pmVar60,pmVar62,0);
              pmVar39 = param_2;
              pmVar55 = pmVar41;
              func_0x000109d5cb58(param_2,pmVar57,pmVar41,pmVar60,&mStack_4f0);
              pmVar62 = (mach_header *)((long)&pmVar62->magic + 1);
              pmVar46 = pmVar57;
              pmVar57 = pmVar39;
            } while (pmVar45 != pmVar62);
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
        ___stack_chk_fail();
        if (pmStack_4c8 != param_2) {
          _free();
        }
        if (pmStack_4a8 != pmVar62) {
          _free();
        }
        pmVar21 = pmVar39;
        __Unwind_Resume();
        pcStack_4f8 = FUN_109fa8f34;
        pmVar41 = *(mach_header **)&pmVar21[2].cpusubtype;
        pmStack_520 = pmVar57;
        pmStack_518 = param_2;
        pmStack_510 = (mach_header *)auVar58;
        pmStack_508 = pmVar39;
        pppuStack_500 = &ppuStack_430;
        (*(code *)(*(mach_header ***)pmVar41)[3])(pmVar41,0x13,pmVar46,pmVar55,0);
        if (pmVar41 == (mach_header *)0x0) {
          uStack_528 = 0x101;
          uVar40 = 0x13;
          FUN_109d8c8c0(0x13,pmVar46,pmVar55,auStack_548,0);
          func_0x000109d33940(pmVar21,uVar40,pmVar60);
          pmVar41 = pmVar21;
        }
        return pmVar41;
      }
      return pmVar57;
    }
  }
  return (mach_header *)0x0;
}



/* Entry: 109fa511c; end: 109fa7b9b;  */

/* WARNING: Removing unreachable block (ram,0x000109fa5918) */
/* WARNING: Removing unreachable block (ram,0x000109fa59e4) */

undefined1  [8] FUN_109fa511c(mach_header *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 auVar13 [8];
  long *plVar14;
  mach_header *pmVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  dword *pdVar18;
  dword *pdVar19;
  mach_header *pmVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  mach_header *pmVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  mach_header *pmVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  mach_header *pmVar80;
  long lVar81;
  long *plVar82;
  mach_header *pmVar83;
  mach_header *pmVar84;
  uint uVar85;
  long lVar86;
  long lVar87;
  int iVar88;
  mach_header *pmVar89;
  ulong uVar90;
  undefined1 auVar91 [8];
  uint uVar92;
  uint uVar93;
  mach_header *unaff_x21;
  mach_header *pmVar94;
  mach_header *unaff_x23;
  long lVar95;
  mach_header **ppmVar96;
  long lVar97;
  undefined8 uVar98;
  long lVar99;
  undefined1 auStack_358 [32];
  undefined2 uStack_338;
  mach_header *pmStack_330;
  mach_header *pmStack_328;
  mach_header *pmStack_320;
  mach_header *pmStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  mach_header mStack_300;
  undefined2 uStack_2e0;
  mach_header *pmStack_2d8;
  ulong uStack_2d0;
  undefined1 auStack_2c8 [16];
  mach_header *pmStack_2b8;
  ulong uStack_2b0;
  long lStack_298;
  undefined1 *puStack_240;
  code *pcStack_238;
  ulong uStack_230;
  mach_header *pmStack_220;
  mach_header *pmStack_218;
  uint uStack_20c;
  mach_header *pmStack_208;
  mach_header *pmStack_200;
  mach_header *pmStack_1f8;
  long lStack_1f0;
  mach_header *pmStack_1e8;
  mach_header *pmStack_1e0;
  mach_header *pmStack_1d8;
  long lStack_1d0;
  mach_header *pmStack_1c8;
  mach_header *pmStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 auStack_1ac [4];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [15];
  undefined1 uStack_181;
  undefined7 uStack_180;
  char cStack_179;
  undefined1 auStack_170 [16];
  mach_header *pmStack_160;
  mach_header *pmStack_158;
  mach_header *pmStack_150;
  mach_header *pmStack_148;
  mach_header *pmStack_140;
  mach_header *pmStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  mach_header *pmStack_118;
  mach_header *pmStack_110;
  mach_header *pmStack_108;
  mach_header *pmStack_100;
  mach_header *pmStack_f8;
  mach_header *pmStack_f0;
  mach_header *pmStack_e8;
  mach_header *pmStack_e0;
  mach_header *pmStack_d8;
  undefined1 auStack_d0 [16];
  mach_header *apmStack_c0 [2];
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar92 = *(uint *)(param_3 + 0x30);
  puStack_1b8 = param_2;
  if (uVar92 < 5) {
    uVar85 = *(uint *)(param_3 + 0x60);
    if (uVar85 != 0) {
      pmStack_1e0 = (mach_header *)0x0;
      uVar90 = 0;
      unaff_x23 = (mach_header *)0x0;
      pmVar89 = (mach_header *)0x0;
      lVar97 = 0;
      pmStack_1d8 = (mach_header *)0x0;
      lStack_1d0 = 0;
      lVar99 = 0;
      pmStack_1c8 = (mach_header *)*param_2;
      pmStack_1f8 = (mach_header *)param_2[2];
      pmStack_200 = *(mach_header **)pmStack_1c8;
      lVar87 = *(long *)&pmStack_1c8->cpusubtype;
      pmStack_1c0 = (mach_header *)0x0;
      lVar95 = *(long *)(param_3 + 0x58);
      unaff_x21 = (mach_header *)0x28;
      lStack_1f0 = param_3;
      pmStack_1e8 = param_1;
      do {
        lVar81 = lVar95 + uVar90 * 0x28;
        iVar88 = *(int *)(lVar81 + 0x20);
        if (iVar88 < 9) {
          if (iVar88 == 0) {
            if (*(long *)(lVar81 + 0x18) != 0) {
              puVar16 = puStack_1b8 + 6;
              FUN_109fab870(puVar16,*(undefined4 *)(*(long *)(lVar81 + 0x18) + 0x18));
              if (puVar16 != (undefined8 *)0x0) {
                pmStack_1c0 = (mach_header *)puVar16[3];
                goto LAB_109fa5364;
              }
            }
            pmStack_1c0 = (mach_header *)0x0;
          }
          else if (iVar88 == 4) {
            if (*(long *)(lVar81 + 0x18) != 0) {
              puVar16 = puStack_1b8 + 6;
              FUN_109fab870(puVar16,*(undefined4 *)(*(long *)(lVar81 + 0x18) + 0x18));
              if (puVar16 != (undefined8 *)0x0) {
                pmStack_1e0 = (mach_header *)puVar16[3];
                goto LAB_109fa5364;
              }
            }
            pmStack_1e0 = (mach_header *)0x0;
          }
          else if (iVar88 == 5) {
            if (*(long *)(lVar81 + 0x18) != 0) {
              puVar16 = puStack_1b8 + 6;
              FUN_109fab870(puVar16,*(undefined4 *)(*(long *)(lVar81 + 0x18) + 0x18));
              if (puVar16 != (undefined8 *)0x0) {
                pmStack_1d8 = (mach_header *)puVar16[3];
                goto LAB_109fa5364;
              }
            }
            pmStack_1d8 = (mach_header *)0x0;
          }
        }
        else if (iVar88 < 0xb) {
          if (iVar88 == 9) {
            if (*(long *)(lVar81 + 0x18) != 0) {
              puVar16 = puStack_1b8 + 6;
              FUN_109fab870(puVar16,*(undefined4 *)(*(long *)(lVar81 + 0x18) + 0x18));
              if (puVar16 != (undefined8 *)0x0) {
                lVar99 = puVar16[3];
                goto LAB_109fa5364;
              }
            }
            lVar99 = 0;
          }
          else if (iVar88 == 10) {
            if (*(long *)(lVar81 + 0x18) != 0) {
              puVar16 = puStack_1b8 + 6;
              FUN_109fab870(puVar16,*(undefined4 *)(*(long *)(lVar81 + 0x18) + 0x18));
              if (puVar16 != (undefined8 *)0x0) {
                lStack_1d0 = puVar16[3];
                goto LAB_109fa5364;
              }
            }
            lStack_1d0 = 0;
          }
        }
        else if (iVar88 == 0xc) {
          lVar81 = **(long **)(lVar81 + 0x18);
          while (lVar81 != 0) {
            if (*(int *)(lVar81 + 0x28) == 0) {
              pmVar89 = *(mach_header **)(lVar81 + 0x38);
              goto LAB_109fa5364;
            }
            if (((*(long **)(lVar81 + 0x50) == (long *)0x0) ||
                (lVar81 = **(long **)(lVar81 + 0x50), lVar81 == 0)) ||
               (*(int *)(lVar81 + 0x18) != 1)) break;
          }
          pmVar89 = (mach_header *)0x0;
        }
        else if (iVar88 == 0xb) {
          lVar86 = **(long **)(lVar81 + 0x18);
          while (lVar97 = lVar81, lVar86 != 0) {
            if (*(int *)(lVar86 + 0x28) == 0) {
              unaff_x23 = *(mach_header **)(lVar86 + 0x38);
              goto LAB_109fa5364;
            }
            if (((*(long **)(lVar86 + 0x50) == (long *)0x0) ||
                (lVar86 = **(long **)(lVar86 + 0x50), lVar86 == 0)) ||
               (*(int *)(lVar86 + 0x18) != 1)) break;
          }
          unaff_x23 = (mach_header *)0x0;
        }
LAB_109fa5364:
        param_1 = pmStack_1e8;
        uVar90 = uVar90 + 1;
      } while (uVar90 != uVar85);
      if ((unaff_x23 != (mach_header *)0x0) && (pmStack_1c0 != (mach_header *)0x0)) {
        if (uVar92 == 3) {
          uVar85 = *(uint *)(lStack_1f0 + 0x28);
          if ((((lVar99 == 0) || (lStack_1d0 == 0)) || ((*(byte *)(lStack_1f0 + 0x68) & 1) != 0)) ||
             ((6 < uVar85 || ((1 << (ulong)(uVar85 & 0x1f) & 0x52U) == 0)))) {
            uStack_230 = (ulong)uVar85;
            FUN_109f97010(auStack_120,&UNK_10f62b86e);
            auVar91 = (undefined1  [8])auStack_d0;
            pmVar15 = (mach_header *)auStack_120;
            pmVar89 = (mach_header *)0x2;
            FUN_109f92740();
            goto LAB_109fa54fc;
          }
        }
        unaff_x21 = unaff_x23;
        if (pmVar89 != (mach_header *)0x0) {
          unaff_x21 = pmVar89;
        }
        lVar95 = *(long *)(lVar87 + 0x720);
        lVar87 = *(long *)(lVar87 + 0x728) - lVar95;
        if (lVar87 != 0) {
          lVar81 = 0;
          plVar82 = (long *)(lVar95 + 0x10);
          iVar88 = -1;
          param_1 = (mach_header *)0xffffffff;
          do {
            iVar1 = (int)plVar82[2];
            if (iVar1 == 4) {
              pmVar89 = (mach_header *)plVar82[-1];
              if ((pmVar89 != unaff_x23) &&
                 ((((pmVar89 == (mach_header *)0x0 ||
                    (lVar12._0_4_ = pmVar89->flags, lVar12._4_4_ = pmVar89->reserved, lVar12 == 0))
                   || (lVar34._0_4_ = unaff_x23->flags, lVar34._4_4_ = unaff_x23->reserved,
                      lVar34 == 0)) || (_strcmp(), (int)lVar12 != 0)))) goto LAB_109fa5474;
LAB_109fa5468:
              iVar88 = *(int *)(*(long *)&pmStack_1c8[0x21].ncmds + lVar81 * 4);
            }
            else {
              if (iVar1 == 6 && *plVar82 == lVar97) goto LAB_109fa5468;
              if (iVar1 == 5) {
                pmVar89 = (mach_header *)plVar82[-1];
                if ((pmVar89 == unaff_x21) ||
                   (((pmVar89 != (mach_header *)0x0 &&
                     (lVar95._0_4_ = pmVar89->flags, lVar95._4_4_ = pmVar89->reserved, lVar95 != 0))
                    && ((lVar86._0_4_ = unaff_x21->flags, lVar86._4_4_ = unaff_x21->reserved,
                        lVar86 != 0 && (_strcmp(), (int)lVar95 == 0)))))) {
LAB_109fa5494:
                  param_1 = (mach_header *)
                            (ulong)*(uint *)(*(long *)&pmStack_1c8[0x21].ncmds + lVar81 * 4);
                }
              }
              else if (iVar1 == 7 && *plVar82 == lVar97) goto LAB_109fa5494;
            }
LAB_109fa5474:
            pmVar89 = pmStack_1c8;
            pmVar83 = pmStack_1e8;
            lVar81 = lVar81 + 1;
            plVar82 = plVar82 + 8;
          } while (lVar87 >> 6 != lVar81);
          if ((-1 < iVar88) && (uVar92 == 4 || -1 < (int)param_1)) {
            plVar14 = (long *)puStack_1b8[0x18];
            for (plVar82 = plVar14; plVar82 != (long *)0x0; plVar82 = (long *)*plVar82) {
              if (*(int *)(plVar82 + 4) == 0) {
                FUN_109fa940c(plVar14,0);
                lVar87 = *plVar14;
                if (lVar87 != 0) {
                  pmStack_218 = (mach_header *)
                                CONCAT44(pmStack_218._4_4_,*(undefined4 *)(lStack_1f0 + 0x28));
                  uStack_20c = (uint)*(byte *)(lStack_1f0 + 0x68);
                  pmVar15 = pmVar89;
                  FUN_109f9cab0();
                  func_0x000109da017c();
                  pmStack_208 = pmVar15;
                  if (uVar92 == 4) {
                    pmStack_220 = (mach_header *)0x0;
                  }
                  else {
                    pmVar15 = *(mach_header **)&pmVar89[0x14].flags;
                    func_0x000109da017c(pmVar15,2);
                    pmStack_220 = pmVar15;
                  }
                  puVar16 = (undefined8 *)puStack_1b8[3];
                  if ((*(byte *)((long)puVar16 + 0x17) >> 4 & 1) == 0) {
                    uVar33 = 0;
                    puVar23 = (undefined8 *)&UNK_10f5fa524;
                  }
                  else {
                    func_0x000109da271c();
                    puVar23 = puVar16 + 2;
                    uVar33 = *puVar16;
                  }
                  puVar17 = (undefined4 *)puStack_1b8[0x1b];
                  FUN_109fa9db0(puVar17,0);
                  pdVar18 = &pmVar89->ncmds;
                  FUN_109fa9650(pdVar18,puVar23,uVar33,*puVar17);
                  if (uVar92 == 4) {
                    param_1 = (mach_header *)0x0;
                    pmVar83 = pmStack_1f8;
                  }
                  else {
                    uVar33._0_4_ = pmVar89[0x15].ncmds;
                    uVar33._4_4_ = pmVar89[0x15].sizeofcmds;
                    pmVar15 = *(mach_header **)&pmVar89[0x10].flags;
                    FUN_109d66880(pmVar15,0,0);
                    pmVar83 = *(mach_header **)&pmVar89[0x10].ncmds;
                    auStack_120 = (undefined1  [8])pmVar15;
                    FUN_109d66880(pmVar83,(long)(int)param_1,0);
                    pmVar15 = *(mach_header **)&pmVar89[0x10].ncmds;
                    pmStack_118 = pmVar83;
                    FUN_109d66880(pmVar15,0,0);
                    pmVar83 = pmStack_1f8;
                    uStack_b0 = 0x101;
                    pmVar89 = pmStack_1f8;
                    pmStack_110 = pmVar15;
                    FUN_109faa5c8(pmStack_1f8,uVar33,lVar87,auStack_120,3,auStack_d0);
                    uStack_b0 = 0x101;
                    param_1 = pmVar83;
                    FUN_109d5d1c0(pmVar83,pmStack_220,pmVar89,0x103,0,auStack_d0);
                    pdVar19 = &pmStack_1c8->ncmds;
                    FUN_109faaebc(pdVar19);
                    FUN_109d97dec(param_1,5,pdVar19);
                    FUN_109d97dec(param_1,7,pdVar18);
                  }
                  uVar98._0_4_ = pmStack_1c8[0x15].ncmds;
                  uVar98._4_4_ = pmStack_1c8[0x15].sizeofcmds;
                  pmVar89 = *(mach_header **)&pmStack_1c8[0x10].flags;
                  FUN_109d66880(pmVar89,0,0);
                  pmVar15 = *(mach_header **)&pmStack_1c8[0x10].ncmds;
                  auStack_120 = (undefined1  [8])pmVar89;
                  FUN_109d66880(pmVar15,iVar88,0);
                  pmVar20 = *(mach_header **)&pmStack_1c8[0x10].ncmds;
                  pmStack_118 = pmVar15;
                  FUN_109d66880(pmVar20,0,0);
                  uStack_b0 = 0x101;
                  pmVar89 = pmVar83;
                  pmStack_110 = pmVar20;
                  FUN_109faa5c8(pmVar83,uVar98,lVar87,auStack_120,3,auStack_d0);
                  uStack_b0 = 0x101;
                  pmVar20 = pmVar83;
                  FUN_109d5d1c0(pmVar83,pmStack_208,pmVar89,0x103,0,auStack_d0);
                  pdVar19 = &unaff_x23->ncmds;
                  unaff_x23 = (mach_header *)0x66;
                  if (*(long *)pdVar19 != 0) {
                    cVar2 = *(char *)(*(long *)pdVar19 + 5);
                    uVar85 = 0x69;
                    if (cVar2 != '\x01') {
                      uVar85 = 0x66;
                    }
                    uVar93 = 0x6a;
                    if (cVar2 != '\0') {
                      uVar93 = uVar85;
                    }
                    unaff_x23 = (mach_header *)(ulong)uVar93;
                  }
                  func_0x000107c31940(auStack_120,&UNK_10f62af40);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (auStack_120,unaff_x23);
                  auStack_d0._8_8_ = pmStack_118;
                  auStack_d0._0_8_ = auStack_120;
                  apmStack_c0[0] = pmStack_110;
                  pmStack_118 = (mach_header *)0x0;
                  pmStack_110 = (mach_header *)0x0;
                  auStack_120 = (undefined1  [8])0x0;
                  puVar16 = (undefined8 *)auStack_d0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar16,&UNK_10f62af57,0x11);
                  auStack_190._0_8_ = *puVar16;
                  uStack_180 = (undefined7)puVar16[2];
                  cStack_179 = (char)((ulong)puVar16[2] >> 0x38);
                  auStack_190._8_7_ = (undefined7)puVar16[1];
                  uStack_181 = (undefined1)((ulong)puVar16[1] >> 0x38);
                  puVar16[1] = 0;
                  puVar16[2] = 0;
                  *puVar16 = 0;
                  if ((long)pmStack_110 < 0) {
                    __ZdlPv(auStack_120);
                  }
                  if (((int)pmStack_218 == 1) && (uStack_20c != 0)) {
                    func_0x000107c31940(auStack_120,&UNK_10f62af84);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_120,unaff_x23);
                    auStack_d0._8_8_ = pmStack_118;
                    auStack_d0._0_8_ = auStack_120;
                    apmStack_c0[0] = pmStack_110;
                    pmStack_118 = (mach_header *)0x0;
                    pmStack_110 = (mach_header *)0x0;
                    auStack_120 = (undefined1  [8])0x0;
                    puVar16 = (undefined8 *)auStack_d0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (puVar16,&UNK_10f62af57,0x11);
                    pmVar89 = (mach_header *)*puVar16;
                    auStack_170._0_7_ = (undefined7)puVar16[1];
                    uVar33 = *(undefined8 *)((long)puVar16 + 0xf);
                    auStack_170[7] = (undefined1)uVar33;
                    auStack_170._8_4_ = (undefined4)((ulong)uVar33 >> 8);
                    auStack_170._12_3_ = (undefined3)((ulong)uVar33 >> 0x28);
                    cVar2 = *(char *)((long)puVar16 + 0x17);
                    puVar16[1] = 0;
                    puVar16[2] = 0;
                    *puVar16 = 0;
                    if (cStack_179 < '\0') {
                      __ZdlPv(auStack_190._0_8_);
                    }
                    auStack_190._8_7_ = auStack_170._0_7_;
                    uStack_181 = auStack_170[7];
                    uStack_180 = (undefined7)
                                 (CONCAT35(auStack_170._12_3_,
                                           CONCAT41(auStack_170._8_4_,auStack_170[7])) >> 8);
                    auStack_190._0_8_ = pmVar89;
                    cStack_179 = cVar2;
                    if ((long)pmStack_110 < 0) {
                      __ZdlPv(auStack_120);
                    }
                    unaff_x21 = (mach_header *)&UNK_10f62af69;
                  }
                  else if ((int)pmStack_218 == 2) {
                    func_0x000107c31940(auStack_170,&UNK_10f62afe8);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_170,unaff_x23);
                    pmStack_118 = (mach_header *)CONCAT44(auStack_170._12_4_,auStack_170._8_4_);
                    auStack_120 = (undefined1  [8])CONCAT17(auStack_170[7],auStack_170._0_7_);
                    pmStack_110 = pmStack_160;
                    auStack_170._8_4_ = 0;
                    auStack_170._12_4_ = 0;
                    pmStack_160 = (mach_header *)0x0;
                    auStack_170._0_7_ = 0;
                    auStack_170[7] = 0;
                    func_0x000109259240(auStack_d0,auStack_120,&UNK_10f62af57);
                    if (cStack_179 < '\0') {
                      __ZdlPv(auStack_190._0_8_);
                    }
                    auStack_190._8_7_ = (undefined7)auStack_d0._8_8_;
                    uStack_181 = SUB81(auStack_d0._8_8_,7);
                    auStack_190._0_8_ = auStack_d0._0_8_;
                    uStack_180 = SUB87(apmStack_c0[0],0);
                    cStack_179 = (char)((ulong)apmStack_c0[0] >> 0x38);
                    apmStack_c0[0] = (mach_header *)((ulong)apmStack_c0[0] & 0xffffffffffffff);
                    auStack_d0._0_8_ = auStack_d0._0_8_ & 0xffffffffffffff00;
                    if ((long)pmStack_110 < 0) {
                      __ZdlPv(auStack_120);
                    }
                    if ((long)pmStack_160 < 0) {
                      __ZdlPv(CONCAT17(auStack_170[7],auStack_170._0_7_));
                    }
                    unaff_x21 = (mach_header *)&UNK_10f62afd3;
                  }
                  else if ((int)pmStack_218 == 3) {
                    func_0x000107c31940(auStack_170,&UNK_10f62afb9);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (auStack_170,unaff_x23);
                    pmStack_118 = (mach_header *)CONCAT44(auStack_170._12_4_,auStack_170._8_4_);
                    auStack_120 = (undefined1  [8])CONCAT17(auStack_170[7],auStack_170._0_7_);
                    pmStack_110 = pmStack_160;
                    auStack_170._8_4_ = 0;
                    auStack_170._12_4_ = 0;
                    pmStack_160 = (mach_header *)0x0;
                    auStack_170._0_7_ = 0;
                    auStack_170[7] = 0;
                    func_0x000109259240(auStack_d0,auStack_120,&UNK_10f62af57);
                    if (cStack_179 < '\0') {
                      __ZdlPv(auStack_190._0_8_);
                    }
                    auStack_190._8_7_ = (undefined7)auStack_d0._8_8_;
                    uStack_181 = SUB81(auStack_d0._8_8_,7);
                    auStack_190._0_8_ = auStack_d0._0_8_;
                    uStack_180 = SUB87(apmStack_c0[0],0);
                    cStack_179 = (char)((ulong)apmStack_c0[0] >> 0x38);
                    apmStack_c0[0] = (mach_header *)((ulong)apmStack_c0[0] & 0xffffffffffffff);
                    auStack_d0._0_8_ = auStack_d0._0_8_ & 0xffffffffffffff00;
                    if ((long)pmStack_110 < 0) {
                      __ZdlPv(auStack_120);
                    }
                    if ((long)pmStack_160 < 0) {
                      __ZdlPv(CONCAT17(auStack_170[7],auStack_170._0_7_));
                    }
                    unaff_x21 = (mach_header *)&UNK_10f62afa2;
                  }
                  else {
                    unaff_x21 = (mach_header *)&UNK_10f62af2b;
                  }
                  if (cStack_179 < '\0') {
                    pmVar89 = (mach_header *)auStack_190._0_8_;
                    if ((mach_header *)auStack_190._0_8_ != (mach_header *)0x0) goto LAB_109fa5b84;
                    pmStack_218 = (mach_header *)0x0;
                  }
                  else {
                    pmVar89 = (mach_header *)auStack_190;
LAB_109fa5b84:
                    pmVar15 = pmVar89;
                    _strlen();
                    pmStack_218 = pmVar15;
                  }
                  pmVar15 = unaff_x21;
                  _strlen(unaff_x21);
                  pdVar19 = &pmStack_1c8->ncmds;
                  FUN_109fab018(pdVar19,pmVar89,pmStack_218,unaff_x21,pmVar15);
                  FUN_109d97dec(pmVar20,1,pdVar19);
                  FUN_109d97dec(pmVar20,7,pdVar18);
                  uVar10 = auStack_170._12_4_;
                  uVar8 = auStack_170._8_4_;
                  uVar6 = auStack_170[7];
                  uVar4 = auStack_170._0_7_;
                  pmVar80 = pmStack_1c8;
                  pmVar89 = pmStack_1d8;
                  pmVar94 = pmStack_1e8;
                  uVar85 = *(uint *)(lStack_1f0 + 0x28);
                  auStack_170[7] = (undefined1)((ulong)pmVar20 >> 0x38);
                  uVar7 = auStack_170[7];
                  auStack_170._0_7_ = SUB87(pmVar20,0);
                  uVar5 = auStack_170._0_7_;
                  auStack_170._0_7_ = uVar4;
                  auStack_170[7] = uVar6;
                  if (uVar92 == 4) {
                    if ((uVar85 < 7) && ((1 << (ulong)(uVar85 & 0x1f) & 0x52U) != 0)) {
                      pmVar15 = *(mach_header **)pmStack_1c0;
                      if ((pmVar15 != (mach_header *)0x0) &&
                         (((char)pmVar15->cpusubtype == '\x12' && (2 < pmVar15[1].magic)))) {
                        auStack_120 = (undefined1  [8])&MACH_HEADER;
                        uStack_b0 = 0x101;
                        pmVar94 = pmVar83;
                        FUN_109d37990(pmVar83,pmStack_1c0,pmStack_1c0,auStack_120,2,auStack_d0);
                        pmVar15 = *(mach_header **)pmVar94;
                        pmStack_1c0 = pmVar94;
                      }
                      pmVar94 = *(mach_header **)(pmVar80 + 0x12);
                      if (((pmVar15 != pmVar94) && (pmVar15 != (mach_header *)0x0)) &&
                         ((char)pmVar15->cpusubtype == '\x12')) {
                        uVar85 = *(uint *)(*(long *)&pmVar15->flags + 8);
                        uVar92 = uVar85 & 0xff;
                        if (((uVar92 < 4) || (uVar92 == 5)) || ((uVar85 & 0xfd) == 4)) {
                          uStack_b0 = 0x101;
                          pmVar15 = pmVar83;
                          func_0x000109fab240(pmVar83,pmStack_1c0,pmVar94,auStack_d0);
                          pmStack_1c0 = pmVar15;
                        }
                      }
                      auStack_1a8._0_8_ = (mach_header *)0x0;
                      auStack_1a8._8_8_ = 0;
                      auStack_1a8._16_8_ = 0;
                      if ((int)unaff_x23 == 0x69) {
                        pmVar15 = *(mach_header **)&pmVar80[0x12].ncmds;
                        func_0x000107c2c4d8(auStack_1a8,&UNK_10f62b90c,0x1b);
                      }
                      else if ((int)unaff_x23 == 0x6a) {
                        pmVar15 = *(mach_header **)&pmVar80[0x12].ncmds;
                        func_0x000107c2c4d8(auStack_1a8,&UNK_10f62b8f0,0x1b);
                      }
                      else {
                        pmVar15 = *(mach_header **)&pmVar80[0x11].flags;
                        func_0x000107c2c4d8(auStack_1a8,&UNK_10f62b928,0x19);
                      }
                      auStack_d0._8_8_ = *(undefined8 *)&pmVar80[0xf].ncmds;
                      pmVar26 = pmStack_200;
                      auStack_d0._0_8_ = pmVar15;
                      FUN_109d9fa44(pmStack_200,auStack_d0,2,0);
                      auStack_120 = (undefined1  [8])pmStack_208;
                      pmStack_110 = *(mach_header **)&pmVar80[0x10].ncmds;
                      pmStack_118 = pmVar94;
                      pmStack_108 = pmStack_110;
                      FUN_109fab3a8(auStack_d0,auStack_120,4);
                      FUN_109d9f92c(pmVar26,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                      uVar33 = puStack_1b8[1];
                      pmVar15 = (mach_header *)auStack_1a8._0_8_;
                      if (-1 < (long)auStack_1a8[0x17]) {
                        pmVar15 = (mach_header *)auStack_1a8;
                      }
                      lVar87 = auStack_1a8._8_8_;
                      if (-1 < (long)auStack_1a8._16_8_) {
                        lVar87 = (long)auStack_1a8[0x17];
                      }
                      FUN_109d9d3e8(uVar33,pmVar15,lVar87,pmVar26,0);
                      if ((pmVar15 != (mach_header *)0x0) && ((char)pmVar15->ncmds == '\0')) {
                        pdVar19 = &pmVar15[3].ncmds;
                        uVar44._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar44._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar44,0xffffffff,6);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        uVar45._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar45._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar45,0xffffffff,0xf);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        uVar46._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar46._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar46,0xffffffff,0x24);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        uVar47._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar47._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar47,0xffffffff,0x42);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        uVar48._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar48._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar48,0xffffffff,0x18);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        FUN_109d853ec(pmVar15,1);
                        pmVar15[1].magic = pmVar15[1].magic & 0xffffff3f | 0x40;
                        uVar49._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar49._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar49,1,0x15);
                        *(dword **)&pmVar15[3].ncmds = pdVar18;
                        uVar50._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar50._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pdVar18 = pdVar19;
                        FUN_109d5ab08(pdVar19,uVar50,1,0x2d);
                        *(dword **)pdVar19 = pdVar18;
                        pmVar89 = pmStack_1d8;
                      }
                      if (pmVar89 == (mach_header *)0x0) {
                        pmVar89 = *(mach_header **)&pmStack_1c8[0x10].ncmds;
                        FUN_109d66880(pmVar89,0,0);
                      }
                      pmVar94 = pmVar89;
                      if ((char)(*(mach_header **)pmVar89)->cpusubtype == '\x02') {
                        uVar79._0_4_ = pmStack_1c8[0x10].ncmds;
                        uVar79._4_4_ = pmStack_1c8[0x10].sizeofcmds;
                        pmStack_100 = (mach_header *)CONCAT62(pmStack_100._2_6_,0x101);
                        pmVar94 = pmVar83;
                        FUN_109d349d8(pmVar83,0x31,pmVar89,uVar79,auStack_120);
                      }
                      auStack_170._8_4_ = SUB84(pmStack_1c0,0);
                      auStack_170._12_4_ = (undefined4)((ulong)pmStack_1c0 >> 0x20);
                      pmVar89 = *(mach_header **)&pmStack_1c8[0x10].ncmds;
                      auStack_170._0_7_ = uVar5;
                      auStack_170[7] = uVar7;
                      pmStack_160 = pmVar94;
                      FUN_109d66880(pmVar89,0,0);
                      pmStack_158 = pmVar89;
                      FUN_109fab404(auStack_120,auStack_170,4);
                      pmStack_150._0_2_ = 0x101;
                      pmVar94 = pmVar83;
                      FUN_109d5ce48(pmVar83,uVar33,pmVar15,auStack_120,
                                    (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                      *(ushort *)((long)&pmVar94->ncmds + 2) =
                           *(ushort *)((long)&pmVar94->ncmds + 2) & 0xfffc | 1;
                      pmVar89 = pmVar94 + 2;
                      FUN_109d5ab08(pmVar89,**(undefined8 **)pmVar94,0xffffffff,6);
                      pmVar80 = pmStack_1c8;
                      *(mach_header **)(pmVar94 + 2) = pmVar89;
                      pmVar89 = pmVar94 + 2;
                      FUN_109d5ab08(pmVar89,**(undefined8 **)pmVar94,0xffffffff,0x24);
                      *(mach_header **)(pmVar94 + 2) = pmVar89;
                      pmVar89 = pmVar94 + 2;
                      FUN_109d5ab08(pmVar89,**(undefined8 **)pmVar94,0xffffffff,0x42);
                      *(mach_header **)(pmVar94 + 2) = pmVar89;
                      pmVar89 = pmVar94 + 2;
                      FUN_109d5ab08(pmVar89,**(undefined8 **)pmVar94,1,0x15);
                      *(mach_header **)(pmVar94 + 2) = pmVar89;
                      pmVar89 = pmVar94 + 2;
                      FUN_109d5ab08(pmVar89,**(undefined8 **)pmVar94,1,0x2d);
                      *(mach_header **)(pmVar94 + 2) = pmVar89;
                      FUN_109d8b930(pmVar94,1);
                      auStack_1ac = (undefined1  [4])0x0;
                      pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                      pmVar89 = (mach_header *)auStack_1ac;
                      pmVar26 = pmVar83;
                      func_0x000109d5ccf8(pmVar83,pmVar94,pmVar89,1,auStack_170);
                      pmVar94 = pmStack_1e8;
                      if (auStack_120 != (undefined1  [8])&pmStack_110) {
                        _free();
                      }
                      auVar91 = (undefined1  [8])auStack_d0._0_8_;
                      if ((mach_header *)auStack_d0._0_8_ != (mach_header *)apmStack_c0) {
                        _free();
                      }
                      if ((long)auStack_1a8._16_8_ < 0) {
                        auVar91 = (undefined1  [8])auStack_1a8._0_8_;
                        __ZdlPv();
                      }
                      goto LAB_109fa77e4;
                    }
                    uStack_230 = (ulong)uVar85;
                    FUN_109f97010(auStack_120,&UNK_10f62b942);
                    auVar91 = (undefined1  [8])auStack_d0;
                    pmVar15 = (mach_header *)auStack_120;
                    pmVar89 = (mach_header *)0x2;
                    FUN_109f92740();
                    pmStack_1e8->magic = auStack_d0._0_4_;
                    *(mach_header **)&pmStack_1e8->ncmds = apmStack_c0[0];
                    pmStack_1e8->cpusubtype = auStack_d0._8_4_;
                    pmStack_1e8->filetype = auStack_d0._12_4_;
                    *(mach_header **)&pmStack_1e8->flags = apmStack_c0[1];
                    *(mach_header **)(pmStack_1e8 + 1) =
                         (mach_header *)CONCAT62(uStack_ae,uStack_b0);
                    *(undefined1 *)&pmStack_1e8[1].cpusubtype = 0;
LAB_109fa72b4:
                    if ((long)pmStack_110 < 0) {
                      auVar91 = auStack_120;
                      __ZdlPv();
                    }
                  }
                  else {
                    auStack_170._8_4_ = SUB84(param_1,0);
                    uVar9 = auStack_170._8_4_;
                    auStack_170._12_4_ = (undefined4)((ulong)param_1 >> 0x20);
                    uVar11 = auStack_170._12_4_;
                    auStack_170._8_4_ = uVar8;
                    auStack_170._12_4_ = uVar10;
                    if ((uStack_20c == 0) || (uVar85 != 1)) {
                      if ((int)uVar85 < 3) {
                        if (uVar85 == 1) goto LAB_109fa6400;
                        if (uVar85 != 2) goto LAB_109fa726c;
                        pmVar89 = *(mach_header **)pmStack_1c0;
                        if (((pmVar89 != (mach_header *)0x0) &&
                            ((char)pmVar89->cpusubtype == '\x12')) && (3 < pmVar89[1].magic)) {
                          auStack_120 = (undefined1  [8])&MACH_HEADER;
                          pmStack_118 = (mach_header *)CONCAT44(pmStack_118._4_4_,2);
                          uStack_b0 = 0x101;
                          FUN_109d37990(pmVar83,pmStack_1c0,pmStack_1c0,auStack_120,3,auStack_d0);
                          pmStack_1c0 = pmVar83;
                        }
                        auStack_d0._0_8_ = *(undefined8 *)&pmVar80[0x11].flags;
                        auStack_d0._8_8_ = *(undefined8 *)&pmVar80[0xf].ncmds;
                        pmVar89 = pmStack_200;
                        FUN_109d9fa44(pmStack_200,auStack_d0,2,0);
                        auStack_120 = (undefined1  [8])pmStack_208;
                        pmStack_118 = pmStack_220;
                        pmStack_110 = *(mach_header **)&pmVar80[0x11].ncmds;
                        pmStack_108 = *(mach_header **)&pmVar80[0xf].cpusubtype;
                        pmStack_100 = *(mach_header **)&pmVar80[0x12].cpusubtype;
                        pdVar18 = &pmVar80[0x10].cpusubtype;
                        pmStack_e0 = *(mach_header **)&pmVar80[0x10].ncmds;
                        pmStack_f0 = *(mach_header **)pdVar18;
                        pmStack_f8 = pmStack_108;
                        pmStack_e8 = pmStack_f0;
                        FUN_109fab3a8(auStack_d0,auStack_120,9);
                        FUN_109d9f92c(pmVar89,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                        uVar33 = puStack_1b8[1];
                        puVar16 = (undefined8 *)&UNK_10f62ba06;
                        FUN_109d9d3e8(uVar33,&UNK_10f62ba06,0x1b,pmVar89,0);
                        if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                          puVar22 = puVar16 + 0xe;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,6);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                          puVar16[0xe] = puVar23;
                          FUN_109d853ec(puVar16,1);
                          *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x15);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x2d);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x15);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x2d);
                          *puVar22 = puVar23;
                        }
                        pmVar89 = pmStack_1e0;
                        if (pmStack_1d8 != (mach_header *)0x0) {
                          pmVar89 = pmStack_1d8;
                        }
                        pmStack_160 = pmStack_1c0;
                        lVar87 = *(long *)pmStack_200;
                        pmVar15 = *(mach_header **)(lVar87 + 0x608);
                        auStack_170._0_7_ = uVar5;
                        auStack_170[7] = uVar7;
                        auStack_170._8_4_ = uVar9;
                        auStack_170._12_4_ = uVar11;
                        if (pmVar15 == (mach_header *)0x0) {
                          pmVar15 = (mach_header *)(lVar87 + 0x750);
                          FUN_109d678e8(pmVar15,1,0);
                          *(mach_header **)(lVar87 + 0x608) = pmVar15;
                        }
                        uVar24._0_4_ = pmVar80[0x12].cpusubtype;
                        uVar24._4_4_ = pmVar80[0x12].filetype;
                        pmStack_158 = pmVar15;
                        FUN_109d666e0();
                        lVar87 = *(long *)pmStack_200;
                        pmStack_150 = (mach_header *)uVar24;
                        if (pmStack_1d8 == (mach_header *)0x0) {
                          lVar97 = *(long *)(lVar87 + 0x610);
                          if (lVar97 == 0) {
                            lVar97 = lVar87 + 0x750;
                            FUN_109d678e8(lVar97,0,0);
                            *(long *)(lVar87 + 0x610) = lVar97;
                          }
                        }
                        else {
                          lVar97 = *(long *)(lVar87 + 0x608);
                          if (lVar97 == 0) {
                            lVar97 = lVar87 + 0x750;
                            FUN_109d678e8(lVar97,1,0);
                            *(long *)(lVar87 + 0x608) = lVar97;
                          }
                        }
                        pmStack_148 = (mach_header *)lVar97;
                        if (pmVar89 == (mach_header *)0x0) {
                          pmVar89 = *(mach_header **)pdVar18;
                          FUN_109d67974(0);
                        }
                        pmVar15 = *(mach_header **)pdVar18;
                        pmStack_140 = pmVar89;
                        FUN_109d67974(0);
                        uVar31._0_4_ = pmVar80[0x10].ncmds;
                        uVar31._4_4_ = pmVar80[0x10].sizeofcmds;
                        pmStack_138 = pmVar15;
                        FUN_109d66880(uVar31,0,0);
                        uStack_130 = uVar31;
                        FUN_109fab404(auStack_120,auStack_170,9);
                        pmStack_150._0_2_ = 0x101;
                        pmVar15 = pmStack_1f8;
                        FUN_109d5ce48(pmStack_1f8,uVar33,puVar16,auStack_120,
                                      (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                        *(ushort *)((long)&pmVar15->ncmds + 2) =
                             *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                        pmVar89 = pmVar15 + 2;
                        uVar72._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar72._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        FUN_109d5ab08(pmVar89,uVar72,0xffffffff,6);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar73._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar73._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar73,0xffffffff,0x24);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar74._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar74._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar74,0xffffffff,0x42);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar75._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar75._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar75,1,0x15);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar76._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar76._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar76,1,0x2d);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar77._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar77._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar77,2,0x15);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar78._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar78._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar78,2,0x2d);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        FUN_109d8b930(pmVar15,1);
                        pmVar83 = pmStack_1f8;
                        auStack_1a8._0_8_ = (ulong)(uint)auStack_1a8._4_4_ << 0x20;
                        pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                        pmVar89 = (mach_header *)auStack_1a8;
                        pmVar26 = pmStack_1f8;
                        func_0x000109d5ccf8(pmStack_1f8,pmVar15,pmVar89,1,auStack_170);
                      }
                      else if (uVar85 == 3) {
                        pmVar89 = *(mach_header **)pmStack_1c0;
                        if (((pmVar89 != (mach_header *)0x0) &&
                            ((char)pmVar89->cpusubtype == '\x12')) && (3 < pmVar89[1].magic)) {
                          auStack_120 = (undefined1  [8])&MACH_HEADER;
                          pmStack_118 = (mach_header *)CONCAT44(pmStack_118._4_4_,2);
                          uStack_b0 = 0x101;
                          FUN_109d37990(pmVar83,pmStack_1c0,pmStack_1c0,auStack_120,3,auStack_d0);
                          pmStack_1c0 = pmVar83;
                        }
                        auStack_d0._0_8_ = *(undefined8 *)&pmVar80[0x11].flags;
                        auStack_d0._8_8_ = *(undefined8 *)&pmVar80[0xf].ncmds;
                        pmVar89 = pmStack_200;
                        FUN_109d9fa44(pmStack_200,auStack_d0,2,0);
                        auStack_120 = (undefined1  [8])pmStack_208;
                        pmStack_118 = pmStack_220;
                        pmStack_110 = *(mach_header **)&pmVar80[0x11].ncmds;
                        pmStack_108 = *(mach_header **)&pmVar80[0xf].cpusubtype;
                        pmStack_f0 = *(mach_header **)&pmVar80[0x10].ncmds;
                        pmStack_100 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                        pmStack_f8 = pmStack_100;
                        FUN_109fab3a8(auStack_d0,auStack_120,7);
                        FUN_109d9f92c(pmVar89,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                        uVar33 = puStack_1b8[1];
                        puVar16 = (undefined8 *)&UNK_10f62b9e8;
                        FUN_109d9d3e8(uVar33,&UNK_10f62b9e8,0x1d,pmVar89,0);
                        if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                          puVar22 = puVar16 + 0xe;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,6);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                          puVar16[0xe] = puVar23;
                          FUN_109d853ec(puVar16,1);
                          *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x15);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x2d);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x15);
                          puVar16[0xe] = puVar23;
                          puVar23 = puVar22;
                          FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x2d);
                          *puVar22 = puVar23;
                        }
                        pmVar89 = pmStack_1e0;
                        if (pmStack_1d8 != (mach_header *)0x0) {
                          pmVar89 = pmStack_1d8;
                        }
                        pmStack_160 = pmStack_1c0;
                        lVar87 = *(long *)pmStack_200;
                        if (pmStack_1d8 == (mach_header *)0x0) {
                          pmVar15 = *(mach_header **)(lVar87 + 0x610);
                          auStack_170._0_7_ = uVar5;
                          auStack_170[7] = uVar7;
                          auStack_170._8_4_ = uVar9;
                          auStack_170._12_4_ = uVar11;
                          if (pmVar15 == (mach_header *)0x0) {
                            pmVar15 = (mach_header *)(lVar87 + 0x750);
                            FUN_109d678e8(pmVar15,0,0);
                            *(mach_header **)(lVar87 + 0x610) = pmVar15;
                          }
                        }
                        else {
                          pmVar15 = *(mach_header **)(lVar87 + 0x608);
                          auStack_170._0_7_ = uVar5;
                          auStack_170[7] = uVar7;
                          auStack_170._8_4_ = uVar9;
                          auStack_170._12_4_ = uVar11;
                          if (pmVar15 == (mach_header *)0x0) {
                            pmVar15 = (mach_header *)(lVar87 + 0x750);
                            FUN_109d678e8(pmVar15,1,0);
                            *(mach_header **)(lVar87 + 0x608) = pmVar15;
                          }
                        }
                        pmStack_158 = pmVar15;
                        if (pmVar89 == (mach_header *)0x0) {
                          pmVar89 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                          FUN_109d67974(0);
                        }
                        lVar87._0_4_ = pmVar80[0x10].cpusubtype;
                        lVar87._4_4_ = pmVar80[0x10].filetype;
                        pmStack_150 = pmVar89;
                        FUN_109d67974(0);
                        pmVar89 = *(mach_header **)&pmVar80[0x10].ncmds;
                        pmStack_148 = (mach_header *)lVar87;
                        FUN_109d66880(pmVar89,0,0);
                        pmStack_140 = pmVar89;
                        FUN_109fab404(auStack_120,auStack_170,7);
                        pmStack_150._0_2_ = 0x101;
                        pmVar15 = pmStack_1f8;
                        FUN_109d5ce48(pmStack_1f8,uVar33,puVar16,auStack_120,
                                      (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                        *(ushort *)((long)&pmVar15->ncmds + 2) =
                             *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                        pmVar89 = pmVar15 + 2;
                        uVar65._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar65._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        FUN_109d5ab08(pmVar89,uVar65,0xffffffff,6);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar66._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar66._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar66,0xffffffff,0x24);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar67._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar67._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar67,0xffffffff,0x42);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar68._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar68._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar68,1,0x15);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar69._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar69._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar69,1,0x2d);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar70._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar70._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar70,2,0x15);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        uVar71._0_4_ = (*(mach_header **)pmVar15)->magic;
                        uVar71._4_4_ = (*(mach_header **)pmVar15)->cputype;
                        pmVar89 = pmVar15 + 2;
                        FUN_109d5ab08(pmVar89,uVar71,2,0x2d);
                        *(mach_header **)(pmVar15 + 2) = pmVar89;
                        FUN_109d8b930(pmVar15,1);
                        pmVar83 = pmStack_1f8;
                        auStack_1a8._0_8_ = (ulong)(uint)auStack_1a8._4_4_ << 0x20;
                        pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                        pmVar89 = (mach_header *)auStack_1a8;
                        pmVar26 = pmStack_1f8;
                        func_0x000109d5ccf8(pmStack_1f8,pmVar15,pmVar89,1,auStack_170);
                      }
                      else {
                        if ((uVar85 != 6) && (uVar85 != 4)) {
LAB_109fa726c:
                          uStack_230 = (ulong)uVar85;
                          FUN_109f97010(auStack_120,&UNK_10f62ba22);
                          auVar91 = (undefined1  [8])auStack_d0;
                          pmVar15 = (mach_header *)auStack_120;
                          pmVar89 = (mach_header *)0x2;
                          FUN_109f92740();
                          pmVar94->magic = auStack_d0._0_4_;
                          *(mach_header **)&pmVar94->ncmds = apmStack_c0[0];
                          pmVar94->cpusubtype = auStack_d0._8_4_;
                          pmVar94->filetype = auStack_d0._12_4_;
                          *(mach_header **)&pmVar94->flags = apmStack_c0[1];
                          *(mach_header **)(pmVar94 + 1) =
                               (mach_header *)CONCAT62(uStack_ae,uStack_b0);
                          *(undefined1 *)&pmVar94[1].cpusubtype = 0;
                          unaff_x21 = pmVar94;
                          goto LAB_109fa72b4;
                        }
LAB_109fa6400:
                        pmVar89 = *(mach_header **)pmStack_1c0;
                        if (((pmVar89 != (mach_header *)0x0) &&
                            ((char)pmVar89->cpusubtype == '\x12')) && (2 < pmVar89[1].magic)) {
                          auStack_120 = (undefined1  [8])&MACH_HEADER;
                          uStack_b0 = 0x101;
                          pmVar89 = pmVar83;
                          FUN_109d37990(pmVar83,pmStack_1c0,pmStack_1c0,auStack_120,2,auStack_d0);
                          pmStack_1c0 = pmVar89;
                        }
                        auStack_d0._0_8_ = *(undefined8 *)&pmVar80[0x11].flags;
                        auStack_d0._8_8_ = *(undefined8 *)&pmVar80[0xf].ncmds;
                        pmVar89 = pmStack_200;
                        FUN_109d9fa44(pmStack_200,auStack_d0,2,0);
                        if (*(int *)(lStack_1f0 + 0x30) == 3) {
                          pmVar20 = pmVar83;
                          func_0x000109fab294(pmVar83,lVar99);
                          func_0x000109fab294(pmVar83,lStack_1d0);
                          auStack_120 = (undefined1  [8])pmStack_208;
                          pmStack_118 = pmStack_220;
                          pmStack_110 = *(mach_header **)&pmVar80[0x11].cpusubtype;
                          pmStack_f8 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                          pmStack_f0 = *(mach_header **)&pmVar80[0xf].cpusubtype;
                          pmStack_e8 = *(mach_header **)(pmVar80 + 0x12);
                          pmStack_e0 = *(mach_header **)&pmVar80[0x10].ncmds;
                          pmStack_108 = pmStack_110;
                          pmStack_100 = pmStack_110;
                          FUN_109fab3a8(auStack_d0,auStack_120,9);
                          FUN_109d9f92c(pmVar89,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                          uVar33 = puStack_1b8[1];
                          puVar16 = (undefined8 *)&UNK_10f62b9ab;
                          FUN_109d9d3e8(uVar33,&UNK_10f62b9ab,0x20,pmVar89,0);
                          if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                            puVar22 = puVar16 + 0xe;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,6);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                            puVar16[0xe] = puVar23;
                            FUN_109d853ec(puVar16,1);
                            *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x15);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x2d);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x15);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x2d);
                            *puVar22 = puVar23;
                          }
                          pmStack_160 = pmStack_1c0;
                          lVar97._0_4_ = pmStack_1c8[0x10].cpusubtype;
                          lVar97._4_4_ = pmStack_1c8[0x10].filetype;
                          auStack_170._0_7_ = uVar5;
                          auStack_170[7] = uVar7;
                          auStack_170._8_4_ = uVar9;
                          auStack_170._12_4_ = uVar11;
                          pmStack_158 = pmVar20;
                          pmStack_150 = pmVar83;
                          FUN_109d67974(0);
                          pmVar83 = pmStack_1f8;
                          lVar87 = *(long *)pmStack_200;
                          pmStack_140 = *(mach_header **)(lVar87 + 0x608);
                          pmStack_148 = (mach_header *)lVar97;
                          if (pmStack_140 == (mach_header *)0x0) {
                            pmStack_140 = (mach_header *)(lVar87 + 0x750);
                            FUN_109d678e8(pmStack_140,1,0);
                            *(mach_header **)(lVar87 + 0x608) = pmStack_140;
                          }
                          pmVar89 = *(mach_header **)(pmStack_1c8 + 0x12);
                          FUN_109d666e0();
                          uVar25._0_4_ = pmStack_1c8[0x10].ncmds;
                          uVar25._4_4_ = pmStack_1c8[0x10].sizeofcmds;
                          pmStack_138 = pmVar89;
                          FUN_109d66880(uVar25,0,0);
                          uStack_130 = uVar25;
                          FUN_109fab404(auStack_120,auStack_170,9);
                          pmStack_150._0_2_ = 0x101;
                          pmVar15 = pmVar83;
                          FUN_109d5ce48(pmVar83,uVar33,puVar16,auStack_120,
                                        (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                          *(ushort *)((long)&pmVar15->ncmds + 2) =
                               *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                          pmVar89 = pmVar15 + 2;
                          uVar37._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar37._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          FUN_109d5ab08(pmVar89,uVar37,0xffffffff,6);
                          pmVar80 = pmStack_1c8;
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar38._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar38._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar38,0xffffffff,0x24);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar39._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar39._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar39,0xffffffff,0x42);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar40._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar40._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar40,1,0x15);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar41._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar41._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar41,1,0x2d);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar42._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar42._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar42,2,0x15);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar43._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar43._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar43,2,0x2d);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          FUN_109d8b930(pmVar15,1);
                          auStack_1a8._0_8_ = (ulong)(uint)auStack_1a8._4_4_ << 0x20;
                          pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                          pmVar89 = (mach_header *)auStack_1a8;
                          pmVar26 = pmVar83;
                          func_0x000109d5ccf8(pmVar83,pmVar15,pmVar89,1,auStack_170);
                        }
                        else {
                          auStack_120 = (undefined1  [8])pmStack_208;
                          pmStack_118 = pmStack_220;
                          pmStack_110 = *(mach_header **)&pmVar80[0x11].cpusubtype;
                          pmStack_108 = *(mach_header **)&pmVar80[0xf].cpusubtype;
                          pmStack_100 = *(mach_header **)(pmVar80 + 0x12);
                          pdVar18 = &pmVar80[0x10].cpusubtype;
                          pmStack_e0 = *(mach_header **)&pmVar80[0x10].ncmds;
                          pmStack_f0 = *(mach_header **)pdVar18;
                          pmStack_f8 = pmStack_108;
                          pmStack_e8 = pmStack_f0;
                          FUN_109fab3a8(auStack_d0,auStack_120,9);
                          FUN_109d9f92c(pmVar89,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                          uVar33 = puStack_1b8[1];
                          puVar16 = (undefined8 *)&UNK_10f62b9cc;
                          FUN_109d9d3e8(uVar33,&UNK_10f62b9cc,0x1b,pmVar89,0);
                          if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                            puVar22 = puVar16 + 0xe;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,6);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                            puVar16[0xe] = puVar23;
                            FUN_109d853ec(puVar16,1);
                            *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x15);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x2d);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x15);
                            puVar16[0xe] = puVar23;
                            puVar23 = puVar22;
                            FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x2d);
                            *puVar22 = puVar23;
                          }
                          pmVar89 = pmStack_1e0;
                          if (pmStack_1d8 != (mach_header *)0x0) {
                            pmVar89 = pmStack_1d8;
                          }
                          pmStack_160 = pmStack_1c0;
                          lVar87 = *(long *)pmStack_200;
                          pmVar15 = *(mach_header **)(lVar87 + 0x608);
                          auStack_170._0_7_ = uVar5;
                          auStack_170[7] = uVar7;
                          auStack_170._8_4_ = uVar9;
                          auStack_170._12_4_ = uVar11;
                          if (pmVar15 == (mach_header *)0x0) {
                            pmVar15 = (mach_header *)(lVar87 + 0x750);
                            FUN_109d678e8(pmVar15,1,0);
                            *(mach_header **)(lVar87 + 0x608) = pmVar15;
                          }
                          uVar29._0_4_ = pmVar80[0x12].magic;
                          uVar29._4_4_ = pmVar80[0x12].cputype;
                          pmStack_158 = pmVar15;
                          FUN_109d666e0();
                          lVar87 = *(long *)pmStack_200;
                          pmStack_150 = (mach_header *)uVar29;
                          if (pmStack_1d8 == (mach_header *)0x0) {
                            lVar97 = *(long *)(lVar87 + 0x610);
                            if (lVar97 == 0) {
                              lVar97 = lVar87 + 0x750;
                              FUN_109d678e8(lVar97,0,0);
                              *(long *)(lVar87 + 0x610) = lVar97;
                            }
                          }
                          else {
                            lVar97 = *(long *)(lVar87 + 0x608);
                            if (lVar97 == 0) {
                              lVar97 = lVar87 + 0x750;
                              FUN_109d678e8(lVar97,1,0);
                              *(long *)(lVar87 + 0x608) = lVar97;
                            }
                          }
                          pmStack_148 = (mach_header *)lVar97;
                          if (pmVar89 == (mach_header *)0x0) {
                            pmVar89 = *(mach_header **)pdVar18;
                            FUN_109d67974(0);
                          }
                          pmVar15 = *(mach_header **)pdVar18;
                          pmStack_140 = pmVar89;
                          FUN_109d67974(0);
                          uVar30._0_4_ = pmVar80[0x10].ncmds;
                          uVar30._4_4_ = pmVar80[0x10].sizeofcmds;
                          pmStack_138 = pmVar15;
                          FUN_109d66880(uVar30,0,0);
                          uStack_130 = uVar30;
                          FUN_109fab404(auStack_120,auStack_170,9);
                          pmStack_150._0_2_ = 0x101;
                          pmVar15 = pmStack_1f8;
                          FUN_109d5ce48(pmStack_1f8,uVar33,puVar16,auStack_120,
                                        (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                          *(ushort *)((long)&pmVar15->ncmds + 2) =
                               *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                          pmVar89 = pmVar15 + 2;
                          uVar58._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar58._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          FUN_109d5ab08(pmVar89,uVar58,0xffffffff,6);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar59._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar59._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar59,0xffffffff,0x24);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar60._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar60._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar60,0xffffffff,0x42);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar61._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar61._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar61,1,0x15);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar62._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar62._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar62,1,0x2d);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar63._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar63._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar63,2,0x15);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          uVar64._0_4_ = (*(mach_header **)pmVar15)->magic;
                          uVar64._4_4_ = (*(mach_header **)pmVar15)->cputype;
                          pmVar89 = pmVar15 + 2;
                          FUN_109d5ab08(pmVar89,uVar64,2,0x2d);
                          *(mach_header **)(pmVar15 + 2) = pmVar89;
                          FUN_109d8b930(pmVar15,1);
                          pmVar83 = pmStack_1f8;
                          auStack_1a8._0_8_ = (ulong)(uint)auStack_1a8._4_4_ << 0x20;
                          pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                          pmVar89 = (mach_header *)auStack_1a8;
                          pmVar26 = pmStack_1f8;
                          func_0x000109d5ccf8(pmStack_1f8,pmVar15,pmVar89,1,auStack_170);
                        }
                      }
                    }
                    else {
                      pmVar89 = *(mach_header **)pmStack_1c0;
                      if (((pmVar89 == (mach_header *)0x0) || ((char)pmVar89->cpusubtype != '\x12'))
                         || (pmVar89[1].magic < 3)) {
LAB_109fa5c44:
                        pmVar83 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                        FUN_109d67974(0);
                      }
                      else {
                        uStack_b0 = 0x101;
                        FUN_109d5c370(pmVar83,pmStack_1c0,2,auStack_d0);
                        if (pmVar83 == (mach_header *)0x0) goto LAB_109fa5c44;
                      }
                      uVar21._0_4_ = pmVar80[0x10].ncmds;
                      uVar21._4_4_ = pmVar80[0x10].sizeofcmds;
                      auStack_d0._0_4_ = pmVar80[0x10].cpusubtype;
                      auStack_d0._4_4_ = pmVar80[0x10].filetype;
                      FUN_109d9f92c(uVar21,auStack_d0,1,0);
                      uVar33 = puStack_1b8[1];
                      puVar16 = (undefined8 *)&UNK_10f62b971;
                      FUN_109d9d3e8(uVar33,&UNK_10f62b971,0x17,uVar21,0);
                      if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                        puVar22 = puVar16 + 0xe;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                        puVar16[0xe] = puVar23;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                        puVar16[0xe] = puVar22;
                        FUN_109d853ec(puVar16,0);
                        *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                      }
                      uStack_b0 = 0x101;
                      pmVar15 = pmStack_1f8;
                      auStack_120 = (undefined1  [8])pmVar83;
                      FUN_109d5ce48(pmStack_1f8,uVar33,puVar16,auStack_120,1,auStack_d0,0);
                      *(ushort *)((long)&pmVar15->ncmds + 2) =
                           *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                      pmVar89 = pmVar15 + 2;
                      uVar35._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar35._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      FUN_109d5ab08(pmVar89,uVar35,0xffffffff,0x24);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar36._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar36._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar36,0xffffffff,0x42);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      pmVar89 = *(mach_header **)pmStack_1c0;
                      if (((pmVar89 != (mach_header *)0x0) && ((char)pmVar89->cpusubtype == '\x12'))
                         && (2 < pmVar89[1].magic)) {
                        auStack_120 = (undefined1  [8])&MACH_HEADER;
                        uStack_b0 = 0x101;
                        pmVar89 = pmStack_1f8;
                        FUN_109d37990(pmStack_1f8,pmStack_1c0,pmStack_1c0,auStack_120,2,auStack_d0);
                        pmStack_1c0 = pmVar89;
                      }
                      auStack_d0._0_8_ = *(undefined8 *)&pmVar80[0x11].flags;
                      auStack_d0._8_8_ = *(undefined8 *)&pmVar80[0xf].ncmds;
                      pmVar89 = pmStack_200;
                      FUN_109d9fa44(pmStack_200,auStack_d0,2,0);
                      auStack_120 = (undefined1  [8])pmStack_208;
                      pmStack_118 = pmStack_220;
                      pmStack_110 = *(mach_header **)&pmVar80[0x11].cpusubtype;
                      pmStack_108 = *(mach_header **)&pmVar80[0x10].ncmds;
                      pmStack_100 = *(mach_header **)&pmVar80[0xf].cpusubtype;
                      pmStack_f8 = *(mach_header **)(pmVar80 + 0x12);
                      pmStack_e8 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                      pmStack_f0 = pmStack_100;
                      pmStack_e0 = pmStack_e8;
                      pmStack_d8 = pmStack_108;
                      FUN_109fab3a8(auStack_d0,auStack_120,10);
                      FUN_109d9f92c(pmVar89,auStack_d0._0_8_,auStack_d0._8_8_ & 0xffffffff,0);
                      pmVar20 = (mach_header *)puStack_1b8[1];
                      puVar16 = (undefined8 *)&UNK_10f62b989;
                      FUN_109d9d3e8(pmVar20,&UNK_10f62b989,0x21,pmVar89,0);
                      if ((puVar16 != (undefined8 *)0x0) && (*(char *)(puVar16 + 2) == '\0')) {
                        puVar22 = puVar16 + 0xe;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,6);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0xf);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x24);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x42);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,0xffffffff,0x18);
                        puVar16[0xe] = puVar23;
                        FUN_109d853ec(puVar16,1);
                        *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) & 0xffffff3f | 0x40;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x15);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,1,0x2d);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x15);
                        puVar16[0xe] = puVar23;
                        puVar23 = puVar22;
                        FUN_109d5ab08(puVar22,*(undefined8 *)*puVar16,2,0x2d);
                        *puVar22 = puVar23;
                      }
                      pmVar89 = pmStack_1e0;
                      if (pmStack_1d8 != (mach_header *)0x0) {
                        pmVar89 = pmStack_1d8;
                      }
                      pmStack_160 = pmStack_1c0;
                      lVar97 = *(long *)pmStack_200;
                      lVar87 = *(long *)(lVar97 + 0x608);
                      auStack_170._0_7_ = uVar5;
                      auStack_170[7] = uVar7;
                      auStack_170._8_4_ = uVar9;
                      auStack_170._12_4_ = uVar11;
                      pmStack_158 = pmVar15;
                      if (lVar87 == 0) {
                        lVar87 = lVar97 + 0x750;
                        FUN_109d678e8(lVar87,1,0);
                        *(long *)(lVar97 + 0x608) = lVar87;
                      }
                      lVar99._0_4_ = pmVar80[0x12].magic;
                      lVar99._4_4_ = pmVar80[0x12].cputype;
                      pmStack_150 = (mach_header *)lVar87;
                      FUN_109d666e0();
                      lVar87 = *(long *)pmStack_200;
                      pmStack_148 = (mach_header *)lVar99;
                      if (pmStack_1d8 == (mach_header *)0x0) {
                        pmVar15 = *(mach_header **)(lVar87 + 0x610);
                        if (pmVar15 == (mach_header *)0x0) {
                          pmVar15 = (mach_header *)(lVar87 + 0x750);
                          FUN_109d678e8(pmVar15,0,0);
                          *(mach_header **)(lVar87 + 0x610) = pmVar15;
                        }
                      }
                      else {
                        pmVar15 = *(mach_header **)(lVar87 + 0x608);
                        if (pmVar15 == (mach_header *)0x0) {
                          pmVar15 = (mach_header *)(lVar87 + 0x750);
                          FUN_109d678e8(pmVar15,1,0);
                          *(mach_header **)(lVar87 + 0x608) = pmVar15;
                        }
                      }
                      pmStack_140 = pmVar15;
                      if (pmVar89 == (mach_header *)0x0) {
                        pmVar89 = *(mach_header **)&pmVar80[0x10].cpusubtype;
                        FUN_109d67974(0);
                      }
                      uVar27._0_4_ = pmVar80[0x10].cpusubtype;
                      uVar27._4_4_ = pmVar80[0x10].filetype;
                      pmStack_138 = pmVar89;
                      FUN_109d67974(0);
                      uVar28._0_4_ = pmVar80[0x10].ncmds;
                      uVar28._4_4_ = pmVar80[0x10].sizeofcmds;
                      uStack_130 = uVar27;
                      FUN_109d66880(uVar28,0,0);
                      uStack_128 = uVar28;
                      FUN_109fab404(auStack_120,auStack_170,10);
                      pmStack_150._0_2_ = 0x101;
                      pmVar15 = pmStack_1f8;
                      FUN_109d5ce48(pmStack_1f8,pmVar20,puVar16,auStack_120,
                                    (ulong)pmStack_118 & 0xffffffff,auStack_170,0);
                      *(ushort *)((long)&pmVar15->ncmds + 2) =
                           *(ushort *)((long)&pmVar15->ncmds + 2) & 0xfffc | 1;
                      pmVar89 = pmVar15 + 2;
                      uVar51._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar51._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      FUN_109d5ab08(pmVar89,uVar51,0xffffffff,6);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar52._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar52._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar52,0xffffffff,0x24);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar53._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar53._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar53,0xffffffff,0x42);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar54._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar54._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar54,1,0x15);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar55._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar55._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar55,1,0x2d);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar56._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar56._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar56,2,0x15);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      uVar57._0_4_ = (*(mach_header **)pmVar15)->magic;
                      uVar57._4_4_ = (*(mach_header **)pmVar15)->cputype;
                      pmVar89 = pmVar15 + 2;
                      FUN_109d5ab08(pmVar89,uVar57,2,0x2d);
                      *(mach_header **)(pmVar15 + 2) = pmVar89;
                      FUN_109d8b930(pmVar15,1);
                      pmVar83 = pmStack_1f8;
                      auStack_1a8._0_8_ = (ulong)(uint)auStack_1a8._4_4_ << 0x20;
                      pmStack_150 = (mach_header *)CONCAT62(pmStack_150._2_6_,0x101);
                      pmVar89 = (mach_header *)auStack_1a8;
                      pmVar26 = pmStack_1f8;
                      func_0x000109d5ccf8(pmStack_1f8,pmVar15,pmVar89,1,auStack_170);
                    }
                    if (auStack_120 != (undefined1  [8])&pmStack_110) {
                      _free();
                    }
                    auVar91 = (undefined1  [8])auStack_d0._0_8_;
                    if ((mach_header *)auStack_d0._0_8_ != (mach_header *)apmStack_c0) {
                      _free();
                    }
LAB_109fa77e4:
                    param_1 = (mach_header *)auStack_170;
                    pmVar15 = (mach_header *)(ulong)*(byte *)(lStack_1f0 + 0x54);
                    pmVar84 = pmVar26;
                    if (*(byte *)(lStack_1f0 + 0x54) < 4) {
                      pmVar89 = pmVar80;
                      func_0x000109f9a5dc();
                      if (pmVar89 == *(mach_header **)&pmVar80[0x10].cpusubtype) {
                        uStack_b0 = 0x101;
                        pmVar89 = (mach_header *)0x0;
                        FUN_109d5c370();
                        auVar91 = (undefined1  [8])pmVar83;
                        pmVar15 = pmVar26;
                        pmVar84 = pmVar83;
                      }
                      else {
                        FUN_109fab328(auStack_170,lStack_1f0);
                        pmStack_100 = (mach_header *)CONCAT62(pmStack_100._2_6_,0x101);
                        pmVar89 = pmVar26;
                        FUN_109d37990();
                        auVar91 = (undefined1  [8])CONCAT17(auStack_170[7],auStack_170._0_7_);
                        pmVar15 = pmVar26;
                        pmVar84 = pmVar83;
                        if (auVar91 != (undefined1  [8])&pmStack_160) {
                          _free();
                          pmVar15 = pmVar26;
                        }
                      }
                    }
                    if (pmVar84 != (mach_header *)0x0) {
                      pmVar89 = (mach_header *)(lStack_1f0 + 0x50);
                      pmVar15 = (mach_header *)(ulong)pmVar89->magic;
                      auVar91 = (undefined1  [8])(puStack_1b8 + 6);
                      FUN_109fab460();
                      *(mach_header **)&((mach_header *)auVar91)->flags = pmVar84;
                    }
                    pmVar94->flags = 0;
                    pmVar94->reserved = 0;
                    pmVar94->ncmds = 0;
                    pmVar94->sizeofcmds = 0;
                    pmVar94[1].cpusubtype = 0;
                    pmVar94[1].filetype = 0;
                    *(mach_header **)(pmVar94 + 1) = (mach_header *)0x0;
                    pmVar94->cpusubtype = 0;
                    pmVar94->filetype = 0;
                    *(mach_header **)pmVar94 = (mach_header *)0x0;
                    *(undefined1 *)&pmVar94[1].cpusubtype = 1;
                    unaff_x21 = pmVar94;
                    unaff_x23 = pmVar20;
                  }
                  auVar13 = (undefined1  [8])auStack_190._0_8_;
                  if (-1 < cStack_179) goto LAB_109fa5528;
                  goto LAB_109fa5524;
                }
                break;
              }
            }
            FUN_109f97010(auStack_120,&UNK_10f62b8d0);
            auVar91 = (undefined1  [8])auStack_d0;
            pmVar15 = (mach_header *)auStack_120;
            pmVar89 = (mach_header *)0x2;
            FUN_109f92740();
            pmVar83->magic = auStack_d0._0_4_;
            *(mach_header **)&pmVar83->ncmds = apmStack_c0[0];
            pmVar83->cpusubtype = auStack_d0._8_4_;
            pmVar83->filetype = auStack_d0._12_4_;
            *(mach_header **)&pmVar83->flags = apmStack_c0[1];
            *(mach_header **)(pmVar83 + 1) = (mach_header *)CONCAT62(uStack_ae,uStack_b0);
            *(undefined1 *)&pmVar83[1].cpusubtype = 0;
            unaff_x21 = pmVar83;
            goto LAB_109fa5518;
          }
        }
        FUN_109f97010(auStack_120,&UNK_10f62b89a);
        auVar91 = (undefined1  [8])auStack_d0;
        pmVar15 = (mach_header *)auStack_120;
        pmVar89 = (mach_header *)0x2;
        FUN_109f92740();
        pmStack_1e8->magic = auStack_d0._0_4_;
        *(mach_header **)&pmStack_1e8->ncmds = apmStack_c0[0];
        pmStack_1e8->cpusubtype = auStack_d0._8_4_;
        pmStack_1e8->filetype = auStack_d0._12_4_;
        *(mach_header **)&pmStack_1e8->flags = apmStack_c0[1];
        *(mach_header **)(pmStack_1e8 + 1) = (mach_header *)CONCAT62(uStack_ae,uStack_b0);
        *(undefined1 *)&pmStack_1e8[1].cpusubtype = 0;
        goto LAB_109fa5518;
      }
    }
    FUN_109f97010(auStack_120,&UNK_10f62b83e);
    auVar91 = (undefined1  [8])auStack_d0;
    pmVar15 = (mach_header *)auStack_120;
    pmVar89 = (mach_header *)0x2;
    FUN_109f92740();
  }
  else {
    uStack_230 = (ulong)uVar92;
    FUN_109f97010(auStack_120,&UNK_10f62b7b1);
    auVar91 = (undefined1  [8])auStack_d0;
    pmVar15 = (mach_header *)auStack_120;
    pmVar89 = (mach_header *)0x2;
    FUN_109f92740();
  }
LAB_109fa54fc:
  param_1->magic = auStack_d0._0_4_;
  *(mach_header **)&param_1->ncmds = apmStack_c0[0];
  param_1->cpusubtype = auStack_d0._8_4_;
  param_1->filetype = auStack_d0._12_4_;
  *(mach_header **)&param_1->flags = apmStack_c0[1];
  *(mach_header **)(param_1 + 1) = (mach_header *)CONCAT62(uStack_ae,uStack_b0);
  *(undefined1 *)&param_1[1].cpusubtype = 0;
LAB_109fa5518:
  auVar13 = auStack_120;
  if ((long)pmStack_110 < 0) {
LAB_109fa5524:
    __ZdlPv();
    auVar91 = auVar13;
  }
LAB_109fa5528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return auVar91;
  }
  ___stack_chk_fail();
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190._0_8_);
  }
  __Unwind_Resume();
  puStack_240 = &stack0xfffffffffffffff0;
  pcStack_238 = FUN_109fa7b9c;
  pmVar83 = *(mach_header **)((long)pmVar15 + (((ulong)pmVar89 & 0xffffffff) * 6 + 0xd) * 8);
  if (pmVar83 != (mach_header *)0x0) {
    pdVar18 = &((mach_header *)((long)auVar91 + 0x20))->ncmds;
    FUN_109fab870(pdVar18,pmVar83->flags);
    if ((pdVar18 != (dword *)0x0) &&
       (pmVar83 = *(mach_header **)(pdVar18 + 6), pmVar83 != (mach_header *)0x0)) {
      uVar90 = (ulong)pmVar89 & 0xffffffff;
      bVar3 = (byte)pmVar15[2].filetype;
      pmVar80 = (mach_header *)(ulong)bVar3;
      pmVar89 = (mach_header *)((long)pmVar15 + (uVar90 * 6 + 10) * 8);
      pmVar26 = &mStack_300;
      lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pmVar94 = pmVar83;
      pmVar20 = pmVar80;
      if (pmVar83 == (mach_header *)0x0) {
        pmVar32 = (mach_header *)auVar91;
        auVar91 = (undefined1  [8])param_1;
        pmVar84 = (mach_header *)0x0;
      }
      else {
        pmVar32 = *(mach_header **)pmVar83;
        uVar92 = (uint)bVar3;
        if (pmVar32 == (mach_header *)0x0 || (char)pmVar32->cpusubtype != '\x12') {
          uVar85 = 1;
        }
        else {
          uVar85 = pmVar32[1].magic;
        }
        unaff_x21 = pmVar80;
        if (uVar92 != 0) {
          pmVar84 = (mach_header *)0x0;
          do {
            if (pmVar84 !=
                (mach_header *)
                (ulong)*(byte *)((long)((long)pmVar15 + (uVar90 * 6 + 0xe) * 8) + (long)pmVar84))
            goto LAB_109fa8cc4;
            pmVar84 = (mach_header *)((long)&pmVar84->magic + 1);
          } while (pmVar80 != pmVar84);
        }
        pmVar84 = pmVar83;
        if (uVar85 != uVar92) {
LAB_109fa8cc4:
          uVar93 = (uint)bVar3;
          if ((uVar93 == 1) && (1 < uVar85)) {
            auVar91 = *(undefined1 (*) [8])&((mach_header *)auVar91)->ncmds;
            uStack_2e0 = 0x101;
            pmVar89 = (mach_header *)(*(long *)*(mach_header **)((long)auVar91 + 0x40) + 0x7b0);
            FUN_109d678e8(pmVar89,*(undefined1 *)((long)pmVar15 + (uVar90 * 6 + 0xe) * 8),0);
            pmVar32 = (mach_header *)auVar91;
            func_0x000109d5c6e0(auVar91,pmVar83,pmVar89,&mStack_300);
            pmVar94 = pmVar83;
            pmVar20 = pmVar26;
            pmVar84 = pmVar32;
          }
          else if ((uVar93 < 2) || (uVar85 != 1)) {
            unaff_x23 = (mach_header *)&stack0xfffffffffffffd58;
            uStack_2b0 = 0x400000000;
            pmStack_2b8 = unaff_x23;
            if (uVar92 != 0) {
              ppmVar96 = (mach_header **)((long)pmVar15 + (uVar90 * 6 + 0xe) * 8);
              uVar90 = (ulong)uVar93;
              do {
                FUN_109d3785c(&pmStack_2b8,*(undefined1 *)ppmVar96);
                uVar90 = uVar90 - 1;
                ppmVar96 = (mach_header **)((long)ppmVar96 + 1);
              } while (uVar90 != 0);
              if (1 < uVar93) {
                lVar87 = (ulong)uVar93 - 1;
                pmVar89 = pmStack_2b8;
                do {
                  pmVar89 = (mach_header *)&pmVar89->cputype;
                  if (*(dword *)pmVar89 != pmStack_2b8->magic) goto LAB_109fa8e64;
                  lVar87 = lVar87 + -1;
                } while (lVar87 != 0);
              }
            }
            if (uVar85 < 2) {
LAB_109fa8e64:
              auVar91 = *(undefined1 (*) [8])&((mach_header *)auVar91)->ncmds;
              pmVar89 = *(mach_header **)pmVar83;
              FUN_109d67e38(pmVar89);
              uStack_2e0 = 0x101;
              pmVar84 = (mach_header *)auVar91;
              pmVar20 = pmStack_2b8;
              FUN_109d37990(auVar91,pmVar83,pmVar89,pmStack_2b8,uStack_2b0 & 0xffffffff,&mStack_300)
              ;
            }
            else {
              uStack_2d0 = 0x400000000;
              pmStack_2d8 = (mach_header *)auStack_2c8;
              FUN_109d378b8(&pmStack_2d8,pmVar80,pmStack_2b8->magic);
              auVar91 = *(undefined1 (*) [8])&((mach_header *)auVar91)->ncmds;
              pmVar89 = *(mach_header **)pmVar83;
              FUN_109d67e38(pmVar89);
              uStack_2e0 = 0x101;
              pmVar84 = (mach_header *)auVar91;
              pmVar20 = pmStack_2d8;
              FUN_109d37990(auVar91,pmVar83,pmVar89,pmStack_2d8,uStack_2d0 & 0xffffffff,&mStack_300)
              ;
              pmVar80 = (mach_header *)auStack_2c8;
              if (pmStack_2d8 != (mach_header *)auStack_2c8) {
                _free();
              }
            }
            pmVar32 = pmStack_2b8;
            pmVar94 = pmVar83;
            unaff_x21 = pmVar80;
            if (pmStack_2b8 != unaff_x23) {
              _free();
              pmVar94 = pmVar83;
            }
          }
          else {
            func_0x000109da00ec(pmVar32,pmVar80);
            FUN_109d67e38();
            unaff_x23 = (mach_header *)0x0;
            pmVar15 = pmVar32;
            do {
              unaff_x21 = *(mach_header **)&((mach_header *)auVar91)->ncmds;
              uStack_2e0 = 0x101;
              pmVar20 = (mach_header *)(*(long *)*(mach_header **)(unaff_x21 + 2) + 0x7b0);
              FUN_109d678e8(pmVar20,unaff_x23,0);
              pmVar32 = unaff_x21;
              pmVar89 = pmVar83;
              func_0x000109d5cb58(unaff_x21,pmVar15,pmVar83,pmVar20,&mStack_300);
              unaff_x23 = (mach_header *)((long)&unaff_x23->magic + 1);
              pmVar94 = pmVar15;
              pmVar15 = pmVar32;
              pmVar84 = pmVar32;
            } while (pmVar80 != unaff_x23);
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
        ___stack_chk_fail();
        if (pmStack_2d8 != unaff_x21) {
          _free();
        }
        if (pmStack_2b8 != unaff_x23) {
          _free();
        }
        pmVar15 = pmVar32;
        __Unwind_Resume();
        pcStack_308 = FUN_109fa8f34;
        pmVar83 = *(mach_header **)&pmVar15[2].cpusubtype;
        pmStack_330 = pmVar84;
        pmStack_328 = unaff_x21;
        pmStack_320 = (mach_header *)auVar91;
        pmStack_318 = pmVar32;
        ppuStack_310 = &puStack_240;
        (**(code **)&(*(mach_header **)pmVar83)->flags)(pmVar83,0x13,pmVar94,pmVar89,0);
        if (pmVar83 == (mach_header *)0x0) {
          uStack_338 = 0x101;
          uVar33 = 0x13;
          FUN_109d8c8c0(0x13,pmVar94,pmVar89,auStack_358,0);
          func_0x000109d33940(pmVar15,uVar33,pmVar20);
          pmVar83 = pmVar15;
        }
        return (undefined1  [8])pmVar83;
      }
      return (undefined1  [8])pmVar84;
    }
  }
  return (undefined1  [8])(mach_header *)0x0;
}



/* Entry: 109fa7b9c; end: 109fa7c1b;  */

long * FUN_109fa7b9c(long *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x20;
  uint uVar12;
  uint uVar13;
  long *unaff_x21;
  uint uVar14;
  long *unaff_x23;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auStack_128 [32];
  undefined2 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_d0 [4];
  undefined2 uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long alStack_98 [2];
  long *plStack_88;
  ulong uStack_80;
  long alStack_78 [2];
  long lStack_68;
  
  lVar9 = *(long *)(param_2 + (param_3 & 0xffffffff) * 0x30 + 0x68);
  if (lVar9 != 0) {
    plVar5 = param_1 + 6;
    FUN_109fab870(plVar5,*(undefined4 *)(lVar9 + 0x18));
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)plVar5[3], plVar5 != (long *)0x0)) {
      bVar1 = *(byte *)(param_2 + 0x4c);
      plVar8 = (long *)(ulong)bVar1;
      param_2 = param_2 + (param_3 & 0xffffffff) * 0x30;
      plVar11 = (long *)(param_2 + 0x50);
      plVar6 = alStack_d0;
      lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar7 = plVar5;
      plVar3 = plVar8;
      if (plVar5 == (long *)0x0) {
        plVar2 = param_1;
        param_1 = unaff_x20;
        plVar10 = (long *)0x0;
      }
      else {
        plVar2 = (long *)*plVar5;
        uVar12 = (uint)bVar1;
        if (plVar2 == (long *)0x0 || (char)plVar2[1] != '\x12') {
          uVar14 = 1;
        }
        else {
          uVar14 = *(uint *)(plVar2 + 4);
        }
        unaff_x21 = plVar8;
        if (uVar12 != 0) {
          plVar10 = (long *)0x0;
          do {
            if (plVar10 != (long *)(ulong)*(byte *)(param_2 + 0x70 + (long)plVar10))
            goto LAB_109fa8cc4;
            plVar10 = (long *)((long)plVar10 + 1);
          } while (plVar8 != plVar10);
        }
        plVar10 = plVar5;
        if (uVar14 != uVar12) {
LAB_109fa8cc4:
          uVar13 = (uint)bVar1;
          if ((uVar13 == 1) && (1 < uVar14)) {
            param_1 = (long *)param_1[2];
            uStack_b0 = 0x101;
            plVar11 = (long *)(*(long *)param_1[8] + 0x7b0);
            FUN_109d678e8(plVar11,*(undefined1 *)(param_2 + 0x70),0);
            plVar2 = param_1;
            func_0x000109d5c6e0(param_1,plVar5,plVar11,alStack_d0);
            plVar7 = plVar5;
            plVar3 = plVar6;
            plVar10 = plVar2;
          }
          else if ((uVar13 < 2) || (uVar14 != 1)) {
            unaff_x23 = alStack_78;
            uStack_80 = 0x400000000;
            plStack_88 = unaff_x23;
            if (uVar12 != 0) {
              puVar15 = (undefined1 *)(param_2 + 0x70);
              uVar16 = (ulong)uVar13;
              do {
                FUN_109d3785c(&plStack_88,*puVar15);
                uVar16 = uVar16 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar16 != 0);
              if (1 < uVar13) {
                lVar9 = (ulong)uVar13 - 1;
                plVar11 = plStack_88;
                do {
                  plVar11 = (long *)((long)plVar11 + 4);
                  if (*(int *)plVar11 != (int)*plStack_88) goto LAB_109fa8e64;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
            }
            if (uVar14 < 2) {
LAB_109fa8e64:
              param_1 = (long *)param_1[2];
              plVar11 = (long *)*plVar5;
              FUN_109d67e38(plVar11);
              uStack_b0 = 0x101;
              plVar10 = param_1;
              plVar3 = plStack_88;
              FUN_109d37990(param_1,plVar5,plVar11,plStack_88,uStack_80 & 0xffffffff,alStack_d0);
            }
            else {
              uStack_a0 = 0x400000000;
              plStack_a8 = alStack_98;
              FUN_109d378b8(&plStack_a8,plVar8,(int)*plStack_88);
              param_1 = (long *)param_1[2];
              plVar11 = (long *)*plVar5;
              FUN_109d67e38(plVar11);
              uStack_b0 = 0x101;
              plVar10 = param_1;
              plVar3 = plStack_a8;
              FUN_109d37990(param_1,plVar5,plVar11,plStack_a8,uStack_a0 & 0xffffffff,alStack_d0);
              plVar8 = alStack_98;
              if (plStack_a8 != alStack_98) {
                _free();
              }
            }
            plVar2 = plStack_88;
            plVar7 = plVar5;
            unaff_x21 = plVar8;
            if (plStack_88 != unaff_x23) {
              _free();
              plVar7 = plVar5;
            }
          }
          else {
            func_0x000109da00ec(plVar2,plVar8);
            FUN_109d67e38();
            unaff_x23 = (long *)0x0;
            plVar6 = plVar2;
            do {
              unaff_x21 = (long *)param_1[2];
              uStack_b0 = 0x101;
              plVar3 = (long *)(*(long *)unaff_x21[8] + 0x7b0);
              FUN_109d678e8(plVar3,unaff_x23,0);
              plVar2 = unaff_x21;
              plVar11 = plVar5;
              func_0x000109d5cb58(unaff_x21,plVar6,plVar5,plVar3,alStack_d0);
              unaff_x23 = (long *)((long)unaff_x23 + 1);
              plVar7 = plVar6;
              plVar6 = plVar2;
              plVar10 = plVar2;
            } while (plVar8 != unaff_x23);
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar10;
      }
      ___stack_chk_fail();
      if (plStack_a8 != unaff_x21) {
        _free();
      }
      if (plStack_88 != unaff_x23) {
        _free();
      }
      plVar5 = plVar2;
      __Unwind_Resume();
      pcStack_d8 = FUN_109fa8f34;
      plVar8 = (long *)plVar5[9];
      plStack_100 = plVar10;
      plStack_f8 = unaff_x21;
      plStack_f0 = param_1;
      plStack_e8 = plVar2;
      puStack_e0 = &stack0xfffffffffffffff0;
      (**(code **)(*plVar8 + 0x18))(plVar8,0x13,plVar7,plVar11,0);
      if (plVar8 == (long *)0x0) {
        uStack_108 = 0x101;
        uVar4 = 0x13;
        FUN_109d8c8c0(0x13,plVar7,plVar11,auStack_128,0);
        func_0x000109d33940(plVar5,uVar4,plVar3);
        plVar8 = plVar5;
      }
      return plVar8;
    }
  }
  return (long *)0x0;
}



/* Entry: 109fa7c1c; end: 109fa7cbf;  */

long * FUN_109fa7c1c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [32];
  undefined2 uStack_28;
  
  plVar3 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    lVar2 = *param_3;
    if (*(uint *)(lVar2 + 8) == 0x200d) {
      lVar1 = *(long *)(*param_2 + 0x208);
    }
    else {
      if ((*(uint *)(lVar2 + 8) & 0xff) != 0x12) {
        return param_3;
      }
      if (*(int *)(*(long *)(lVar2 + 0x18) + 8) != 0x200d) {
        return param_3;
      }
      lVar1 = *param_2;
      func_0x000109f9a5dc(lVar1,*(undefined4 *)(lVar2 + 0x20));
    }
    uStack_28 = 0x101;
    FUN_109d349d8(param_1,0x31,param_3,lVar1,auStack_48);
    plVar3 = param_1;
  }
  return plVar3;
}



/* Entry: 109fa7cc0; end: 109fa8057;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_109fa7cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long **param_4)

{
  uint uVar1;
  byte bVar2;
  long **pplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *****ppppplVar6;
  long *******ppppppplVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  long *******ppppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  undefined8 *puVar16;
  long ******pppppplVar17;
  long *plVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  long *****ppppplVar21;
  ulong uVar22;
  undefined1 auStack_338 [32];
  undefined2 uStack_318;
  long *****ppppplStack_310;
  long *****ppppplStack_308;
  long *****ppppplStack_300;
  long *******ppppppplStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  long ***appplStack_2d8 [2];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined2 uStack_2b8;
  long *******ppppppplStack_2b0;
  ulong uStack_2a8;
  byte bStack_299;
  long *****ppppplStack_298;
  long *****ppppplStack_290;
  undefined *puStack_288;
  undefined2 uStack_278;
  long *****ppppplStack_270;
  long ****pppplStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined2 uStack_250;
  long lStack_248;
  ulong uStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *****ppppplStack_228;
  long *****ppppplStack_220;
  long *****ppppplStack_218;
  long *****ppppplStack_210;
  long *******ppppppplStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  long ****apppplStack_1e8 [2];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  long *******ppppppplStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  long *****ppppplStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  undefined2 uStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  long lStack_158;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *aplStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  long *******ppppppplStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  long ***appplStack_a8 [2];
  undefined *puStack_98;
  undefined2 uStack_88;
  long ****apppplStack_80 [2];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined8 *)*param_1;
  plVar18 = *param_4;
  if (*(uint *)(plVar18 + 1) == 0x200d) {
    pplVar3 = (long **)*puVar16;
    uStack_60 = 0x101;
    FUN_109d349d8(pplVar3,0x31,param_4,*(undefined8 *)(*(long *)puVar16[1] + 0x208),apppplStack_80);
  }
  else {
    pplVar3 = param_4;
    if (((*(uint *)(plVar18 + 1) & 0xff) == 0x12) && (*(int *)(plVar18[3] + 8) == 0x200d)) {
      pplVar3 = (long **)*puVar16;
      uVar19 = *(undefined8 *)puVar16[1];
      func_0x000109f9a5dc(uVar19,(int)plVar18[4]);
      uStack_60 = 0x101;
      FUN_109d349d8(pplVar3,0x31,param_4,uVar19,apppplStack_80);
    }
  }
  pppplVar20 = (long ****)*pplVar3;
  uStack_c8 = 0x503;
  aplStack_e8[0] = (long *)&UNK_10f62b473;
  appplStack_a8[0] = (long ***)aplStack_e8;
  puStack_98 = &DAT_10f62a9de;
  puStack_70 = &UNK_10f62b4a0;
  uStack_68 = 3;
  uStack_88 = 0x302;
  if ((pppplVar20 != (long ****)0x0) && (*(char *)(pppplVar20 + 1) == '\x12')) {
    if (*(int *)(pppplVar20 + 4) - 2U < 3) {
      puStack_70 = (&PTR_DAT_110b96820)[*(int *)(pppplVar20 + 4) - 2U];
      uStack_68 = 5;
    }
    else {
      puStack_70 = &UNK_10f62b4a0;
      uStack_68 = 3;
    }
  }
  apppplStack_80[0] = appplStack_a8;
  uStack_60 = 0x502;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  FUN_109e04498(&ppppppplStack_c0,apppplStack_80);
  bVar2 = bStack_a9;
  ppppppplVar5 = ppppppplStack_c0;
  uVar19 = *(undefined8 *)(param_1[1] + 8);
  uVar22 = (ulong)bStack_a9;
  apppplStack_80[0] = pppplVar20;
  FUN_109d9f92c(pppplVar20,apppplStack_80,1,0);
  if (-1 < (char)bVar2) {
    ppppppplVar5 = (long *******)&ppppppplStack_c0;
    uStack_b8 = uVar22;
  }
  FUN_109d9d3e8(uVar19,ppppppplVar5,uStack_b8,pppplVar20,0);
  if (((ppppppplVar5 != (long *******)0x0) && (*(char *)(ppppppplVar5 + 2) == '\0')) &&
     ((long *******)ppppppplVar5[9] == ppppppplVar5 + 9)) {
    ppppppplVar10 = ppppppplVar5 + 0xe;
    ppppppplVar4 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0xf);
    ppppppplVar5[0xe] = (long ******)ppppppplVar4;
    ppppppplVar4 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x18);
    ppppppplVar5[0xe] = (long ******)ppppppplVar4;
    ppppppplVar4 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x22);
    ppppppplVar5[0xe] = (long ******)ppppppplVar4;
    ppppppplVar4 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x24);
    ppppppplVar5[0xe] = (long ******)ppppppplVar4;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x42);
    ppppppplVar5[0xe] = (long ******)ppppppplVar10;
    FUN_109d853ec(ppppppplVar5,0);
    *(uint *)(ppppppplVar5 + 4) = *(uint *)(ppppppplVar5 + 4) & 0xffffff3f | 0x40;
  }
  ppppppplVar4 = *(long ********)param_1[3];
  uStack_60 = 0x101;
  ppppplVar21 = apppplStack_80;
  ppppplVar14 = (long *****)0x1;
  appplStack_a8[0] = (long ***)pplVar3;
  FUN_109d5ce48(ppppppplVar4,uVar19,ppppppplVar5,appplStack_a8,1,ppppplVar21,0);
  *(ushort *)((long)ppppppplVar4 + 0x12) = *(ushort *)((long)ppppppplVar4 + 0x12) & 0xfffc | 1;
  *(byte *)((long)ppppppplVar4 + 0x11) = *(byte *)((long)ppppppplVar4 + 0x11) | 0xfe;
  ppppppplVar5 = ppppppplVar4 + 8;
  FUN_109d5ab08(ppppppplVar5,**ppppppplVar4,0xffffffff,0x24);
  ppppppplVar4[8] = (long ******)ppppppplVar5;
  ppppppplVar5 = ppppppplVar4 + 8;
  uVar9 = 0xffffffff;
  ppppplVar11 = (long *****)0x42;
  FUN_109d5ab08(ppppppplVar5,**ppppppplVar4);
  ppppppplVar4[8] = (long ******)ppppppplVar5;
  uVar19 = 0;
  ppppppplVar5 = ppppppplVar4;
  FUN_109d8b930();
  if ((char)bStack_a9 < '\0') {
    ppppppplVar5 = ppppppplStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppplVar4;
  }
  ___stack_chk_fail();
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppppppplStack_c0);
  }
  __Unwind_Resume();
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_109fa8058;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar17 = *ppppppplVar5;
  pppplVar20 = *ppppplVar11;
  if (*(uint *)(pppplVar20 + 1) == 0x200d) {
    ppppplVar6 = *pppppplVar17;
    uStack_160 = 0x101;
    FUN_109d349d8(ppppplVar6,0x31,ppppplVar11,(*pppppplVar17[1])[0x41],&ppppppplStack_180);
  }
  else {
    ppppplVar6 = ppppplVar11;
    if (((*(uint *)(pppplVar20 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar20[3] + 1) == 0x200d)) {
      ppppplVar6 = *pppppplVar17;
      pppplVar8 = *pppppplVar17[1];
      func_0x000109f9a5dc(pppplVar8,*(undefined4 *)(pppplVar20 + 4));
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar6,0x31,ppppplVar11,pppplVar8,&ppppppplStack_180);
    }
  }
  ppppplVar11 = ppppplVar14;
  if (ppppplVar14 != (long *****)0x0) {
    pppppplVar17 = *ppppppplVar5;
    pppplVar20 = *ppppplVar14;
    if (*(uint *)(pppplVar20 + 1) == 0x200d) {
      ppppplVar11 = *pppppplVar17;
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar11,0x31,ppppplVar14,(*pppppplVar17[1])[0x41],&ppppppplStack_180);
    }
    else if (((*(uint *)(pppplVar20 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar20[3] + 1) == 0x200d)
            ) {
      ppppplVar11 = *pppppplVar17;
      pppplVar8 = *pppppplVar17[1];
      func_0x000109f9a5dc(pppplVar8,*(undefined4 *)(pppplVar20 + 4));
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar11,0x31,ppppplVar14,pppplVar8,&ppppppplStack_180);
    }
  }
  ppppplVar14 = ppppplVar21;
  if (ppppplVar21 != (long *****)0x0) {
    pppppplVar17 = *ppppppplVar5;
    pppplVar20 = *ppppplVar21;
    if (*(uint *)(pppplVar20 + 1) == 0x200d) {
      ppppplVar14 = *pppppplVar17;
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar14,0x31,ppppplVar21,(*pppppplVar17[1])[0x41],&ppppppplStack_180);
    }
    else if (((*(uint *)(pppplVar20 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar20[3] + 1) == 0x200d)
            ) {
      ppppplVar14 = *pppppplVar17;
      pppplVar8 = *pppppplVar17[1];
      func_0x000109f9a5dc(pppplVar8,*(undefined4 *)(pppplVar20 + 4));
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar14,0x31,ppppplVar21,pppplVar8,&ppppppplStack_180);
    }
  }
  ppppppplVar4 = (long *******)*ppppplVar6;
  uStack_1c8 = 0x503;
  apppplStack_1e8[0] = (long ****)&UNK_10f62b473;
  ppppplStack_1a8 = apppplStack_1e8;
  ppppplStack_198 = (long *****)&DAT_10f62a9de;
  ppppppplStack_170 = (long *******)&UNK_10f62b4a0;
  uStack_168 = 3;
  uStack_188 = 0x302;
  if ((ppppppplVar4 != (long *******)0x0) && (*(char *)(ppppppplVar4 + 1) == '\x12')) {
    if (*(int *)(ppppppplVar4 + 4) - 2U < 3) {
      ppppppplStack_170 = (long *******)(&PTR_DAT_110b96820)[*(int *)(ppppppplVar4 + 4) - 2U];
      uStack_168 = 5;
    }
    else {
      ppppppplStack_170 = (long *******)&UNK_10f62b4a0;
      uStack_168 = 3;
    }
  }
  ppppppplStack_180 = (long *******)&ppppplStack_1a8;
  uStack_160 = 0x502;
  uStack_1d8 = uVar19;
  uStack_1d0 = uVar9;
  FUN_109e04498(&ppppppplStack_1c0,&ppppppplStack_180);
  bVar2 = bStack_1a9;
  ppppppplVar10 = ppppppplStack_1c0;
  ppppplVar21 = ppppppplVar5[1][1];
  uVar22 = (ulong)bStack_1a9;
  ppppppplVar7 = ppppppplVar4;
  ppppppplStack_180 = ppppppplVar4;
  ppppppplStack_178 = ppppppplVar4;
  ppppppplStack_170 = ppppppplVar4;
  FUN_109d9f92c(ppppppplVar4,&ppppppplStack_180,3,0);
  if (-1 < (char)bVar2) {
    ppppppplVar10 = (long *******)&ppppppplStack_1c0;
    uStack_1b8 = uVar22;
  }
  FUN_109d9d3e8(ppppplVar21,ppppppplVar10,uStack_1b8,ppppppplVar7,0);
  if (((ppppppplVar10 != (long *******)0x0) && (*(char *)(ppppppplVar10 + 2) == '\0')) &&
     ((long *******)ppppppplVar10[9] == ppppppplVar10 + 9)) {
    ppppppplVar4 = ppppppplVar10 + 0xe;
    ppppppplVar7 = ppppppplVar4;
    FUN_109d5ab08(ppppppplVar4,**ppppppplVar10,0xffffffff,0xf);
    ppppppplVar10[0xe] = (long ******)ppppppplVar7;
    ppppppplVar7 = ppppppplVar4;
    FUN_109d5ab08(ppppppplVar4,**ppppppplVar10,0xffffffff,0x18);
    ppppppplVar10[0xe] = (long ******)ppppppplVar7;
    ppppppplVar7 = ppppppplVar4;
    FUN_109d5ab08(ppppppplVar4,**ppppppplVar10,0xffffffff,0x22);
    ppppppplVar10[0xe] = (long ******)ppppppplVar7;
    ppppppplVar7 = ppppppplVar4;
    FUN_109d5ab08(ppppppplVar4,**ppppppplVar10,0xffffffff,0x24);
    ppppppplVar10[0xe] = (long ******)ppppppplVar7;
    ppppppplVar7 = ppppppplVar4;
    FUN_109d5ab08(ppppppplVar4,**ppppppplVar10,0xffffffff,0x42);
    ppppppplVar10[0xe] = (long ******)ppppppplVar7;
    FUN_109d853ec(ppppppplVar10,0);
    *(uint *)(ppppppplVar10 + 4) = *(uint *)(ppppppplVar10 + 4) & 0xffffff3f | 0x40;
  }
  ppppppplVar7 = (long *******)*ppppppplVar5[3];
  uStack_160 = 0x101;
  ppppplVar15 = (long *****)0x3;
  ppppplStack_1a8 = ppppplVar6;
  ppppplStack_1a0 = ppppplVar11;
  ppppplStack_198 = ppppplVar14;
  FUN_109d5ce48(ppppppplVar7,ppppplVar21,ppppppplVar10,&ppppplStack_1a8,3,&ppppppplStack_180,0);
  *(ushort *)((long)ppppppplVar7 + 0x12) = *(ushort *)((long)ppppppplVar7 + 0x12) & 0xfffc | 1;
  *(byte *)((long)ppppppplVar7 + 0x11) = *(byte *)((long)ppppppplVar7 + 0x11) | 0xfe;
  ppppppplVar5 = ppppppplVar7 + 8;
  FUN_109d5ab08(ppppppplVar5,**ppppppplVar7,0xffffffff,0x24);
  ppppppplVar7[8] = (long ******)ppppppplVar5;
  ppppppplVar5 = ppppppplVar7 + 8;
  uVar9 = 0xffffffff;
  ppppplVar12 = (long *****)0x42;
  FUN_109d5ab08(ppppppplVar5,**ppppppplVar7);
  ppppppplVar7[8] = (long ******)ppppppplVar5;
  uVar19 = 0;
  ppppppplVar5 = ppppppplVar7;
  FUN_109d8b930();
  if ((char)bStack_1a9 < '\0') {
    ppppppplVar5 = ppppppplStack_1c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    if ((char)bStack_1a9 < '\0') {
      __ZdlPv(ppppppplStack_1c0);
    }
    ppppppplVar7 = ppppppplVar5;
    __Unwind_Resume();
    pcStack_1f8 = FUN_109fa8538;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar17 = *ppppppplVar7;
    pppplVar20 = *ppppplVar12;
    uStack_240 = uVar22;
    ppppppplStack_238 = ppppppplVar4;
    ppppppplStack_230 = ppppppplVar10;
    ppppplStack_228 = ppppplVar21;
    ppppplStack_220 = ppppplVar11;
    ppppplStack_218 = ppppplVar6;
    ppppplStack_210 = ppppplVar14;
    ppppppplStack_208 = ppppppplVar5;
    ppuStack_200 = &puStack_100;
    if (*(uint *)(pppplVar20 + 1) == 0x200d) {
      ppppplVar21 = *pppppplVar17;
      uStack_250 = 0x101;
      FUN_109d349d8(ppppplVar21,0x31,ppppplVar12,(*pppppplVar17[1])[0x41],&ppppplStack_270);
    }
    else {
      ppppplVar21 = ppppplVar12;
      if (((*(uint *)(pppplVar20 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar20[3] + 1) == 0x200d)) {
        ppppplVar21 = *pppppplVar17;
        pppplVar8 = *pppppplVar17[1];
        func_0x000109f9a5dc(pppplVar8,*(undefined4 *)(pppplVar20 + 4));
        uStack_250 = 0x101;
        FUN_109d349d8(ppppplVar21,0x31,ppppplVar12,pppplVar8,&ppppplStack_270);
      }
    }
    pppppplVar17 = *ppppppplVar7;
    pppplVar20 = *ppppplVar15;
    if (*(uint *)(pppplVar20 + 1) == 0x200d) {
      ppppplVar11 = *pppppplVar17;
      uStack_250 = 0x101;
      FUN_109d349d8(ppppplVar11,0x31,ppppplVar15,(*pppppplVar17[1])[0x41],&ppppplStack_270);
    }
    else {
      ppppplVar11 = ppppplVar15;
      if (((*(uint *)(pppplVar20 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar20[3] + 1) == 0x200d)) {
        ppppplVar11 = *pppppplVar17;
        pppplVar8 = *pppppplVar17[1];
        func_0x000109f9a5dc(pppplVar8,*(undefined4 *)(pppplVar20 + 4));
        uStack_250 = 0x101;
        FUN_109d349d8(ppppplVar11,0x31,ppppplVar15,pppplVar8,&ppppplStack_270);
      }
    }
    pppplVar20 = *ppppplVar21;
    uStack_2b8 = 0x503;
    appplStack_2d8[0] = (long ***)&UNK_10f62b473;
    ppppplStack_298 = (long *****)appplStack_2d8;
    puStack_288 = &DAT_10f62a9de;
    puStack_260 = &UNK_10f62b4a0;
    uStack_258 = 3;
    uStack_278 = 0x302;
    if ((pppplVar20 != (long ****)0x0) && (*(char *)(pppplVar20 + 1) == '\x12')) {
      if (*(int *)(pppplVar20 + 4) - 2U < 3) {
        puStack_260 = (&PTR_DAT_110b96820)[*(int *)(pppplVar20 + 4) - 2U];
        uStack_258 = 5;
      }
      else {
        puStack_260 = &UNK_10f62b4a0;
        uStack_258 = 3;
      }
    }
    ppppplStack_270 = (long *****)&ppppplStack_298;
    uStack_250 = 0x502;
    uStack_2c8 = uVar19;
    uStack_2c0 = uVar9;
    FUN_109e04498(&ppppppplStack_2b0,&ppppplStack_270);
    bVar2 = bStack_299;
    ppppppplVar5 = ppppppplStack_2b0;
    ppppplVar14 = ppppppplVar7[1][1];
    uVar22 = (ulong)bStack_299;
    ppppplStack_270 = (long *****)pppplVar20;
    pppplStack_268 = pppplVar20;
    FUN_109d9f92c(pppplVar20,&ppppplStack_270,2,0);
    if (-1 < (char)bVar2) {
      ppppppplVar5 = (long *******)&ppppppplStack_2b0;
      uStack_2a8 = uVar22;
    }
    FUN_109d9d3e8(ppppplVar14,ppppppplVar5,uStack_2a8,pppplVar20,0);
    if (((ppppppplVar5 != (long *******)0x0) && (*(char *)(ppppppplVar5 + 2) == '\0')) &&
       ((long *******)ppppppplVar5[9] == ppppppplVar5 + 9)) {
      ppppppplVar10 = ppppppplVar5 + 0xe;
      ppppppplVar4 = ppppppplVar10;
      FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0xf);
      ppppppplVar5[0xe] = (long ******)ppppppplVar4;
      ppppppplVar4 = ppppppplVar10;
      FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x18);
      ppppppplVar5[0xe] = (long ******)ppppppplVar4;
      ppppppplVar4 = ppppppplVar10;
      FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x22);
      ppppppplVar5[0xe] = (long ******)ppppppplVar4;
      ppppppplVar4 = ppppppplVar10;
      FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x24);
      ppppppplVar5[0xe] = (long ******)ppppppplVar4;
      FUN_109d5ab08(ppppppplVar10,**ppppppplVar5,0xffffffff,0x42);
      ppppppplVar5[0xe] = (long ******)ppppppplVar10;
      FUN_109d853ec(ppppppplVar5,0);
      *(uint *)(ppppppplVar5 + 4) = *(uint *)(ppppppplVar5 + 4) & 0xffffff3f | 0x40;
    }
    ppppppplVar4 = (long *******)*ppppppplVar7[3];
    uStack_250 = 0x101;
    ppppplStack_298 = ppppplVar21;
    ppppplStack_290 = ppppplVar11;
    FUN_109d5ce48(ppppppplVar4,ppppplVar14,ppppppplVar5,&ppppplStack_298,2,&ppppplStack_270,0);
    *(ushort *)((long)ppppppplVar4 + 0x12) = *(ushort *)((long)ppppppplVar4 + 0x12) & 0xfffc | 1;
    *(byte *)((long)ppppppplVar4 + 0x11) = *(byte *)((long)ppppppplVar4 + 0x11) | 0xfe;
    ppppppplVar5 = ppppppplVar4 + 8;
    FUN_109d5ab08(ppppppplVar5,**ppppppplVar4,0xffffffff,0x24);
    ppppppplVar4[8] = (long ******)ppppppplVar5;
    ppppppplVar5 = ppppppplVar4 + 8;
    ppppppplVar10 = (long *******)0xffffffff;
    FUN_109d5ab08(ppppppplVar5,**ppppppplVar4,0xffffffff,0x42);
    ppppppplVar4[8] = (long ******)ppppppplVar5;
    plVar18 = (long *)0x0;
    ppppppplVar5 = ppppppplVar4;
    FUN_109d8b930();
    if ((char)bStack_299 < '\0') {
      ppppppplVar5 = ppppppplStack_2b0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return ppppppplVar4;
    }
    ___stack_chk_fail();
    if ((char)bStack_299 < '\0') {
      __ZdlPv(ppppppplStack_2b0);
    }
    ppppppplVar4 = ppppppplVar5;
    __Unwind_Resume();
    pcStack_2e8 = FUN_109fa8968;
    ppppppplVar7 = (long *******)0x0;
    if (ppppppplVar10 != (long *******)0x0) {
      pppppplVar17 = *ppppppplVar10;
      bVar2 = *(byte *)(pppppplVar17 + 1);
      ppppplStack_310 = ppppplVar14;
      ppppplStack_308 = ppppplVar21;
      ppppplStack_300 = ppppplVar11;
      ppppppplStack_2f8 = ppppppplVar5;
      pppuStack_2f0 = &ppuStack_200;
      if (bVar2 == 2) {
        pppppplVar13 = *(long *******)(*plVar18 + 0x210);
      }
      else if ((bVar2 < 4 || bVar2 == 5) || (bVar2 & 0xfd) == 4) {
        FUN_109d9f594();
        if (((ulong)plVar18 & 1) != 0) {
          FUN_109e0486c(&UNK_10f602449);
        }
        pppppplVar13 = ppppppplVar4[8];
        FUN_109d9f850(pppppplVar13,pppppplVar17);
      }
      else {
        if (bVar2 != 0x12) {
          return ppppppplVar10;
        }
        uVar1 = *(uint *)(pppppplVar17[3] + 1) & 0xff;
        if ((3 < uVar1 && uVar1 != 5) && (*(uint *)(pppppplVar17[3] + 1) & 0xfd) != 4) {
          return ppppppplVar10;
        }
        pppppplVar13 = *(long *******)(*plVar18 + 0x210);
        func_0x000109da00ec(pppppplVar13,*(undefined4 *)(pppppplVar17 + 4));
      }
      uStack_318 = 0x101;
      FUN_109d349d8(ppppppplVar4,0x31,ppppppplVar10,pppppplVar13,auStack_338);
      ppppppplVar7 = ppppppplVar4;
    }
    return ppppppplVar7;
  }
  return ppppppplVar7;
}



/* Entry: 109fa8058; end: 109fa8537;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_109fa8058(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *****param_4,
             long *param_5,long *param_6)

{
  uint uVar1;
  byte bVar2;
  long *****ppppplVar3;
  long *******ppppppplVar4;
  long ****pppplVar5;
  long *******ppppppplVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *******ppppppplVar10;
  long *****ppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long ******pppppplVar17;
  long ****pppplVar18;
  long lVar19;
  undefined8 uVar20;
  long *******ppppppplVar21;
  ulong uVar22;
  undefined1 auStack_248 [32];
  undefined2 uStack_228;
  long *****ppppplStack_220;
  long *****ppppplStack_218;
  long *****ppppplStack_210;
  long *******ppppppplStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  long ***appplStack_1e8 [2];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  long *******ppppppplStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  long *****ppppplStack_1a8;
  long *****ppppplStack_1a0;
  undefined *puStack_198;
  undefined2 uStack_188;
  long *****ppppplStack_180;
  long ****pppplStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  long lStack_158;
  ulong uStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *****ppppplStack_128;
  long *plStack_120;
  long *******ppppppplStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long ****apppplStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  long *******ppppppplStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  long *****ppppplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined2 uStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined8 *)*param_1;
  pppplVar18 = *param_4;
  if (*(uint *)(pppplVar18 + 1) == 0x200d) {
    ppppplVar3 = (long *****)*puVar14;
    uStack_70 = 0x101;
    FUN_109d349d8(ppppplVar3,0x31,param_4,*(undefined8 *)(*(long *)puVar14[1] + 0x208),
                  &ppppppplStack_90);
  }
  else {
    ppppplVar3 = param_4;
    if (((*(uint *)(pppplVar18 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar18[3] + 1) == 0x200d)) {
      ppppplVar3 = (long *****)*puVar14;
      uVar20 = *(undefined8 *)puVar14[1];
      func_0x000109f9a5dc(uVar20,*(undefined4 *)(pppplVar18 + 4));
      uStack_70 = 0x101;
      FUN_109d349d8(ppppplVar3,0x31,param_4,uVar20,&ppppppplStack_90);
    }
  }
  plVar8 = param_5;
  if (param_5 != (long *)0x0) {
    plVar15 = (long *)*param_1;
    lVar19 = *param_5;
    if (*(uint *)(lVar19 + 8) == 0x200d) {
      plVar8 = (long *)*plVar15;
      uStack_70 = 0x101;
      FUN_109d349d8(plVar8,0x31,param_5,*(undefined8 *)(*(long *)plVar15[1] + 0x208),
                    &ppppppplStack_90);
    }
    else if (((*(uint *)(lVar19 + 8) & 0xff) == 0x12) &&
            (*(int *)(*(long *)(lVar19 + 0x18) + 8) == 0x200d)) {
      plVar8 = (long *)*plVar15;
      uVar20 = *(undefined8 *)plVar15[1];
      func_0x000109f9a5dc(uVar20,*(undefined4 *)(lVar19 + 0x20));
      uStack_70 = 0x101;
      FUN_109d349d8(plVar8,0x31,param_5,uVar20,&ppppppplStack_90);
    }
  }
  plVar15 = param_6;
  if (param_6 != (long *)0x0) {
    plVar16 = (long *)*param_1;
    lVar19 = *param_6;
    if (*(uint *)(lVar19 + 8) == 0x200d) {
      plVar15 = (long *)*plVar16;
      uStack_70 = 0x101;
      FUN_109d349d8(plVar15,0x31,param_6,*(undefined8 *)(*(long *)plVar16[1] + 0x208),
                    &ppppppplStack_90);
    }
    else if (((*(uint *)(lVar19 + 8) & 0xff) == 0x12) &&
            (*(int *)(*(long *)(lVar19 + 0x18) + 8) == 0x200d)) {
      plVar15 = (long *)*plVar16;
      uVar20 = *(undefined8 *)plVar16[1];
      func_0x000109f9a5dc(uVar20,*(undefined4 *)(lVar19 + 0x20));
      uStack_70 = 0x101;
      FUN_109d349d8(plVar15,0x31,param_6,uVar20,&ppppppplStack_90);
    }
  }
  ppppppplVar21 = (long *******)*ppppplVar3;
  uStack_d8 = 0x503;
  apppplStack_f8[0] = (long ****)&UNK_10f62b473;
  ppppplStack_b8 = apppplStack_f8;
  plStack_a8 = (long *)&DAT_10f62a9de;
  ppppppplStack_80 = (long *******)&UNK_10f62b4a0;
  uStack_78 = 3;
  uStack_98 = 0x302;
  if ((ppppppplVar21 != (long *******)0x0) && (*(char *)(ppppppplVar21 + 1) == '\x12')) {
    if (*(int *)(ppppppplVar21 + 4) - 2U < 3) {
      ppppppplStack_80 = (long *******)(&PTR_DAT_110b96820)[*(int *)(ppppppplVar21 + 4) - 2U];
      uStack_78 = 5;
    }
    else {
      ppppppplStack_80 = (long *******)&UNK_10f62b4a0;
      uStack_78 = 3;
    }
  }
  ppppppplStack_90 = (long *******)&ppppplStack_b8;
  uStack_70 = 0x502;
  uStack_e8 = param_2;
  uStack_e0 = param_3;
  FUN_109e04498(&ppppppplStack_d0,&ppppppplStack_90);
  bVar2 = bStack_b9;
  ppppppplVar6 = ppppppplStack_d0;
  uVar20 = *(undefined8 *)(param_1[1] + 8);
  uVar22 = (ulong)bStack_b9;
  ppppppplVar10 = ppppppplVar21;
  ppppppplStack_90 = ppppppplVar21;
  ppppppplStack_88 = ppppppplVar21;
  ppppppplStack_80 = ppppppplVar21;
  FUN_109d9f92c(ppppppplVar21,&ppppppplStack_90,3,0);
  if (-1 < (char)bVar2) {
    ppppppplVar6 = (long *******)&ppppppplStack_d0;
    uStack_c8 = uVar22;
  }
  FUN_109d9d3e8(uVar20,ppppppplVar6,uStack_c8,ppppppplVar10,0);
  if (((ppppppplVar6 != (long *******)0x0) && (*(char *)(ppppppplVar6 + 2) == '\0')) &&
     ((long *******)ppppppplVar6[9] == ppppppplVar6 + 9)) {
    ppppppplVar21 = ppppppplVar6 + 0xe;
    ppppppplVar10 = ppppppplVar21;
    FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0xf);
    ppppppplVar6[0xe] = (long ******)ppppppplVar10;
    ppppppplVar10 = ppppppplVar21;
    FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x18);
    ppppppplVar6[0xe] = (long ******)ppppppplVar10;
    ppppppplVar10 = ppppppplVar21;
    FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x22);
    ppppppplVar6[0xe] = (long ******)ppppppplVar10;
    ppppppplVar10 = ppppppplVar21;
    FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x24);
    ppppppplVar6[0xe] = (long ******)ppppppplVar10;
    ppppppplVar10 = ppppppplVar21;
    FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x42);
    ppppppplVar6[0xe] = (long ******)ppppppplVar10;
    FUN_109d853ec(ppppppplVar6,0);
    *(uint *)(ppppppplVar6 + 4) = *(uint *)(ppppppplVar6 + 4) & 0xffffff3f | 0x40;
  }
  ppppppplVar4 = *(long ********)param_1[3];
  uStack_70 = 0x101;
  ppppplVar13 = (long *****)0x3;
  ppppplStack_b8 = ppppplVar3;
  plStack_b0 = plVar8;
  plStack_a8 = plVar15;
  FUN_109d5ce48(ppppppplVar4,uVar20,ppppppplVar6,&ppppplStack_b8,3,&ppppppplStack_90,0);
  *(ushort *)((long)ppppppplVar4 + 0x12) = *(ushort *)((long)ppppppplVar4 + 0x12) & 0xfffc | 1;
  *(byte *)((long)ppppppplVar4 + 0x11) = *(byte *)((long)ppppppplVar4 + 0x11) | 0xfe;
  ppppppplVar10 = ppppppplVar4 + 8;
  FUN_109d5ab08(ppppppplVar10,**ppppppplVar4,0xffffffff,0x24);
  ppppppplVar4[8] = (long ******)ppppppplVar10;
  ppppppplVar10 = ppppppplVar4 + 8;
  uVar9 = 0xffffffff;
  ppppplVar11 = (long *****)0x42;
  FUN_109d5ab08(ppppppplVar10,**ppppppplVar4);
  ppppppplVar4[8] = (long ******)ppppppplVar10;
  uVar7 = 0;
  ppppppplVar10 = ppppppplVar4;
  FUN_109d8b930();
  if ((char)bStack_b9 < '\0') {
    ppppppplVar10 = ppppppplStack_d0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppppplVar4;
  }
  ___stack_chk_fail();
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(ppppppplStack_d0);
  }
  ppppppplVar4 = ppppppplVar10;
  __Unwind_Resume();
  pcStack_108 = FUN_109fa8538;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar17 = *ppppppplVar4;
  pppplVar18 = *ppppplVar11;
  uStack_150 = uVar22;
  ppppppplStack_148 = ppppppplVar21;
  ppppppplStack_140 = ppppppplVar6;
  uStack_138 = uVar20;
  plStack_130 = plVar8;
  ppppplStack_128 = ppppplVar3;
  plStack_120 = plVar15;
  ppppppplStack_118 = ppppppplVar10;
  puStack_110 = &stack0xfffffffffffffff0;
  if (*(uint *)(pppplVar18 + 1) == 0x200d) {
    ppppplVar3 = *pppppplVar17;
    uStack_160 = 0x101;
    FUN_109d349d8(ppppplVar3,0x31,ppppplVar11,(*pppppplVar17[1])[0x41],&ppppplStack_180);
  }
  else {
    ppppplVar3 = ppppplVar11;
    if (((*(uint *)(pppplVar18 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar18[3] + 1) == 0x200d)) {
      ppppplVar3 = *pppppplVar17;
      pppplVar5 = *pppppplVar17[1];
      func_0x000109f9a5dc(pppplVar5,*(undefined4 *)(pppplVar18 + 4));
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar3,0x31,ppppplVar11,pppplVar5,&ppppplStack_180);
    }
  }
  pppppplVar17 = *ppppppplVar4;
  pppplVar18 = *ppppplVar13;
  if (*(uint *)(pppplVar18 + 1) == 0x200d) {
    ppppplVar11 = *pppppplVar17;
    uStack_160 = 0x101;
    FUN_109d349d8(ppppplVar11,0x31,ppppplVar13,(*pppppplVar17[1])[0x41],&ppppplStack_180);
  }
  else {
    ppppplVar11 = ppppplVar13;
    if (((*(uint *)(pppplVar18 + 1) & 0xff) == 0x12) && (*(int *)(pppplVar18[3] + 1) == 0x200d)) {
      ppppplVar11 = *pppppplVar17;
      pppplVar5 = *pppppplVar17[1];
      func_0x000109f9a5dc(pppplVar5,*(undefined4 *)(pppplVar18 + 4));
      uStack_160 = 0x101;
      FUN_109d349d8(ppppplVar11,0x31,ppppplVar13,pppplVar5,&ppppplStack_180);
    }
  }
  pppplVar18 = *ppppplVar3;
  uStack_1c8 = 0x503;
  appplStack_1e8[0] = (long ***)&UNK_10f62b473;
  ppppplStack_1a8 = (long *****)appplStack_1e8;
  puStack_198 = &DAT_10f62a9de;
  puStack_170 = &UNK_10f62b4a0;
  uStack_168 = 3;
  uStack_188 = 0x302;
  if ((pppplVar18 != (long ****)0x0) && (*(char *)(pppplVar18 + 1) == '\x12')) {
    if (*(int *)(pppplVar18 + 4) - 2U < 3) {
      puStack_170 = (&PTR_DAT_110b96820)[*(int *)(pppplVar18 + 4) - 2U];
      uStack_168 = 5;
    }
    else {
      puStack_170 = &UNK_10f62b4a0;
      uStack_168 = 3;
    }
  }
  ppppplStack_180 = (long *****)&ppppplStack_1a8;
  uStack_160 = 0x502;
  uStack_1d8 = uVar7;
  uStack_1d0 = uVar9;
  FUN_109e04498(&ppppppplStack_1c0,&ppppplStack_180);
  bVar2 = bStack_1a9;
  ppppppplVar21 = ppppppplStack_1c0;
  ppppplVar13 = ppppppplVar4[1][1];
  uVar22 = (ulong)bStack_1a9;
  ppppplStack_180 = (long *****)pppplVar18;
  pppplStack_178 = pppplVar18;
  FUN_109d9f92c(pppplVar18,&ppppplStack_180,2,0);
  if (-1 < (char)bVar2) {
    ppppppplVar21 = (long *******)&ppppppplStack_1c0;
    uStack_1b8 = uVar22;
  }
  FUN_109d9d3e8(ppppplVar13,ppppppplVar21,uStack_1b8,pppplVar18,0);
  if (((ppppppplVar21 != (long *******)0x0) && (*(char *)(ppppppplVar21 + 2) == '\0')) &&
     ((long *******)ppppppplVar21[9] == ppppppplVar21 + 9)) {
    ppppppplVar10 = ppppppplVar21 + 0xe;
    ppppppplVar6 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar21,0xffffffff,0xf);
    ppppppplVar21[0xe] = (long ******)ppppppplVar6;
    ppppppplVar6 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar21,0xffffffff,0x18);
    ppppppplVar21[0xe] = (long ******)ppppppplVar6;
    ppppppplVar6 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar21,0xffffffff,0x22);
    ppppppplVar21[0xe] = (long ******)ppppppplVar6;
    ppppppplVar6 = ppppppplVar10;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar21,0xffffffff,0x24);
    ppppppplVar21[0xe] = (long ******)ppppppplVar6;
    FUN_109d5ab08(ppppppplVar10,**ppppppplVar21,0xffffffff,0x42);
    ppppppplVar21[0xe] = (long ******)ppppppplVar10;
    FUN_109d853ec(ppppppplVar21,0);
    *(uint *)(ppppppplVar21 + 4) = *(uint *)(ppppppplVar21 + 4) & 0xffffff3f | 0x40;
  }
  ppppppplVar6 = (long *******)*ppppppplVar4[3];
  uStack_160 = 0x101;
  ppppplStack_1a8 = ppppplVar3;
  ppppplStack_1a0 = ppppplVar11;
  FUN_109d5ce48(ppppppplVar6,ppppplVar13,ppppppplVar21,&ppppplStack_1a8,2,&ppppplStack_180,0);
  *(ushort *)((long)ppppppplVar6 + 0x12) = *(ushort *)((long)ppppppplVar6 + 0x12) & 0xfffc | 1;
  *(byte *)((long)ppppppplVar6 + 0x11) = *(byte *)((long)ppppppplVar6 + 0x11) | 0xfe;
  ppppppplVar21 = ppppppplVar6 + 8;
  FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x24);
  ppppppplVar6[8] = (long ******)ppppppplVar21;
  ppppppplVar21 = ppppppplVar6 + 8;
  ppppppplVar10 = (long *******)0xffffffff;
  FUN_109d5ab08(ppppppplVar21,**ppppppplVar6,0xffffffff,0x42);
  ppppppplVar6[8] = (long ******)ppppppplVar21;
  plVar8 = (long *)0x0;
  ppppppplVar21 = ppppppplVar6;
  FUN_109d8b930();
  if ((char)bStack_1a9 < '\0') {
    ppppppplVar21 = ppppppplStack_1c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(ppppppplStack_1c0);
  }
  ppppppplVar6 = ppppppplVar21;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109fa8968;
  ppppppplVar4 = (long *******)0x0;
  if (ppppppplVar10 != (long *******)0x0) {
    pppppplVar17 = *ppppppplVar10;
    bVar2 = *(byte *)(pppppplVar17 + 1);
    ppppplStack_220 = ppppplVar13;
    ppppplStack_218 = ppppplVar3;
    ppppplStack_210 = ppppplVar11;
    ppppppplStack_208 = ppppppplVar21;
    ppuStack_200 = &puStack_110;
    if (bVar2 == 2) {
      pppppplVar12 = *(long *******)(*plVar8 + 0x210);
    }
    else if ((bVar2 < 4 || bVar2 == 5) || (bVar2 & 0xfd) == 4) {
      FUN_109d9f594();
      if (((ulong)plVar8 & 1) != 0) {
        FUN_109e0486c(&UNK_10f602449);
      }
      pppppplVar12 = ppppppplVar6[8];
      FUN_109d9f850(pppppplVar12,pppppplVar17);
    }
    else {
      if (bVar2 != 0x12) {
        return ppppppplVar10;
      }
      uVar1 = *(uint *)(pppppplVar17[3] + 1) & 0xff;
      if ((3 < uVar1 && uVar1 != 5) && (*(uint *)(pppppplVar17[3] + 1) & 0xfd) != 4) {
        return ppppppplVar10;
      }
      pppppplVar12 = *(long *******)(*plVar8 + 0x210);
      func_0x000109da00ec(pppppplVar12,*(undefined4 *)(pppppplVar17 + 4));
    }
    uStack_228 = 0x101;
    FUN_109d349d8(ppppppplVar6,0x31,ppppppplVar10,pppppplVar12,auStack_248);
    ppppppplVar4 = ppppppplVar6;
  }
  return ppppppplVar4;
}



/* Entry: 109fa8538; end: 109fa8967;  */

long *******
FUN_109fa8538(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             long *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  long *plVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  undefined1 auStack_148 [32];
  undefined2 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  long ******pppppplStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *apuStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  long ******pppppplStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined2 uStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined8 *)*param_1;
  puVar12 = *param_4;
  if (*(uint *)(puVar12 + 8) == 0x200d) {
    ppuVar3 = (undefined **)*puVar11;
    uStack_60 = 0x101;
    FUN_109d349d8(ppuVar3,0x31,param_4,*(undefined8 *)(*(long *)puVar11[1] + 0x208),&pppuStack_80);
  }
  else {
    ppuVar3 = param_4;
    if (((*(uint *)(puVar12 + 8) & 0xff) == 0x12) &&
       (*(int *)(*(long *)(puVar12 + 0x18) + 8) == 0x200d)) {
      ppuVar3 = (undefined **)*puVar11;
      uVar15 = *(undefined8 *)puVar11[1];
      func_0x000109f9a5dc(uVar15,*(undefined4 *)(puVar12 + 0x20));
      uStack_60 = 0x101;
      FUN_109d349d8(ppuVar3,0x31,param_4,uVar15,&pppuStack_80);
    }
  }
  puVar11 = (undefined8 *)*param_1;
  lVar13 = *param_5;
  if (*(uint *)(lVar13 + 8) == 0x200d) {
    plVar4 = (long *)*puVar11;
    uStack_60 = 0x101;
    FUN_109d349d8(plVar4,0x31,param_5,*(undefined8 *)(*(long *)puVar11[1] + 0x208),&pppuStack_80);
  }
  else {
    plVar4 = param_5;
    if (((*(uint *)(lVar13 + 8) & 0xff) == 0x12) &&
       (*(int *)(*(long *)(lVar13 + 0x18) + 8) == 0x200d)) {
      plVar4 = (long *)*puVar11;
      uVar15 = *(undefined8 *)puVar11[1];
      func_0x000109f9a5dc(uVar15,*(undefined4 *)(lVar13 + 0x20));
      uStack_60 = 0x101;
      FUN_109d349d8(plVar4,0x31,param_5,uVar15,&pppuStack_80);
    }
  }
  pppuVar16 = (undefined ***)*ppuVar3;
  uStack_c8 = 0x503;
  apuStack_e8[0] = &UNK_10f62b473;
  ppuStack_a8 = apuStack_e8;
  puStack_98 = &DAT_10f62a9de;
  puStack_70 = &UNK_10f62b4a0;
  uStack_68 = 3;
  uStack_88 = 0x302;
  if ((pppuVar16 != (undefined ***)0x0) && (*(char *)(pppuVar16 + 1) == '\x12')) {
    if (*(int *)(pppuVar16 + 4) - 2U < 3) {
      puStack_70 = (&PTR_DAT_110b96820)[*(int *)(pppuVar16 + 4) - 2U];
      uStack_68 = 5;
    }
    else {
      puStack_70 = &UNK_10f62b4a0;
      uStack_68 = 3;
    }
  }
  pppuStack_80 = &ppuStack_a8;
  uStack_60 = 0x502;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  FUN_109e04498(&pppppplStack_c0,&pppuStack_80);
  bVar2 = bStack_a9;
  ppppppplVar6 = (long *******)pppppplStack_c0;
  uVar15 = *(undefined8 *)(param_1[1] + 8);
  uVar17 = (ulong)bStack_a9;
  pppuStack_80 = pppuVar16;
  pppuStack_78 = pppuVar16;
  FUN_109d9f92c(pppuVar16,&pppuStack_80,2,0);
  if (-1 < (char)bVar2) {
    ppppppplVar6 = &pppppplStack_c0;
    uStack_b8 = uVar17;
  }
  FUN_109d9d3e8(uVar15,ppppppplVar6,uStack_b8,pppuVar16,0);
  if (((ppppppplVar6 != (long *******)0x0) && (*(char *)(ppppppplVar6 + 2) == '\0')) &&
     ((long *******)ppppppplVar6[9] == ppppppplVar6 + 9)) {
    ppppppplVar9 = ppppppplVar6 + 0xe;
    ppppppplVar5 = ppppppplVar9;
    FUN_109d5ab08(ppppppplVar9,**ppppppplVar6,0xffffffff,0xf);
    ppppppplVar6[0xe] = (long ******)ppppppplVar5;
    ppppppplVar5 = ppppppplVar9;
    FUN_109d5ab08(ppppppplVar9,**ppppppplVar6,0xffffffff,0x18);
    ppppppplVar6[0xe] = (long ******)ppppppplVar5;
    ppppppplVar5 = ppppppplVar9;
    FUN_109d5ab08(ppppppplVar9,**ppppppplVar6,0xffffffff,0x22);
    ppppppplVar6[0xe] = (long ******)ppppppplVar5;
    ppppppplVar5 = ppppppplVar9;
    FUN_109d5ab08(ppppppplVar9,**ppppppplVar6,0xffffffff,0x24);
    ppppppplVar6[0xe] = (long ******)ppppppplVar5;
    FUN_109d5ab08(ppppppplVar9,**ppppppplVar6,0xffffffff,0x42);
    ppppppplVar6[0xe] = (long ******)ppppppplVar9;
    FUN_109d853ec(ppppppplVar6,0);
    *(uint *)(ppppppplVar6 + 4) = *(uint *)(ppppppplVar6 + 4) & 0xffffff3f | 0x40;
  }
  ppppppplVar5 = *(long ********)param_1[3];
  uStack_60 = 0x101;
  ppuStack_a8 = ppuVar3;
  plStack_a0 = plVar4;
  FUN_109d5ce48(ppppppplVar5,uVar15,ppppppplVar6,&ppuStack_a8,2,&pppuStack_80,0);
  *(ushort *)((long)ppppppplVar5 + 0x12) = *(ushort *)((long)ppppppplVar5 + 0x12) & 0xfffc | 1;
  *(byte *)((long)ppppppplVar5 + 0x11) = *(byte *)((long)ppppppplVar5 + 0x11) | 0xfe;
  ppppppplVar6 = ppppppplVar5 + 8;
  FUN_109d5ab08(ppppppplVar6,**ppppppplVar5,0xffffffff,0x24);
  ppppppplVar5[8] = (long ******)ppppppplVar6;
  ppppppplVar6 = ppppppplVar5 + 8;
  ppppppplVar9 = (long *******)0xffffffff;
  FUN_109d5ab08(ppppppplVar6,**ppppppplVar5,0xffffffff,0x42);
  ppppppplVar5[8] = (long ******)ppppppplVar6;
  plVar8 = (long *)0x0;
  ppppppplVar6 = ppppppplVar5;
  FUN_109d8b930();
  if ((char)bStack_a9 < '\0') {
    ppppppplVar6 = (long *******)pppppplStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppplVar5;
  }
  ___stack_chk_fail();
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppppplStack_c0);
  }
  ppppppplVar5 = ppppppplVar6;
  __Unwind_Resume();
  pcStack_f8 = FUN_109fa8968;
  ppppppplVar14 = (long *******)0x0;
  if (ppppppplVar9 != (long *******)0x0) {
    pppppplVar7 = *ppppppplVar9;
    bVar2 = *(byte *)(pppppplVar7 + 1);
    uStack_120 = uVar15;
    ppuStack_118 = ppuVar3;
    plStack_110 = plVar4;
    pppppplStack_108 = (long ******)ppppppplVar6;
    puStack_100 = &stack0xfffffffffffffff0;
    if (bVar2 == 2) {
      pppppplVar10 = *(long *******)(*plVar8 + 0x210);
    }
    else if ((bVar2 < 4 || bVar2 == 5) || (bVar2 & 0xfd) == 4) {
      FUN_109d9f594();
      if (((ulong)plVar8 & 1) != 0) {
        FUN_109e0486c(&UNK_10f602449);
      }
      pppppplVar10 = ppppppplVar5[8];
      FUN_109d9f850(pppppplVar10,pppppplVar7);
    }
    else {
      if (bVar2 != 0x12) {
        return ppppppplVar9;
      }
      uVar1 = *(uint *)(pppppplVar7[3] + 1) & 0xff;
      if ((3 < uVar1 && uVar1 != 5) && (*(uint *)(pppppplVar7[3] + 1) & 0xfd) != 4) {
        return ppppppplVar9;
      }
      pppppplVar10 = *(long *******)(*plVar8 + 0x210);
      func_0x000109da00ec(pppppplVar10,*(undefined4 *)(pppppplVar7 + 4));
    }
    uStack_128 = 0x101;
    FUN_109d349d8(ppppppplVar5,0x31,ppppppplVar9,pppppplVar10,auStack_148);
    ppppppplVar14 = ppppppplVar5;
  }
  return ppppppplVar14;
}



/* Entry: 109fa8968; end: 109fa8a5b;  */

long * FUN_109fa8968(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  plVar6 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    lVar4 = *param_3;
    bVar3 = *(byte *)(lVar4 + 8);
    if (bVar3 == 2) {
      lVar5 = *(long *)(*param_2 + 0x210);
    }
    else if ((bVar3 < 4 || bVar3 == 5) || (bVar3 & 0xfd) == 4) {
      FUN_109d9f594();
      if (((ulong)param_2 & 1) != 0) {
        FUN_109e0486c(&UNK_10f602449);
      }
      lVar5 = param_1[8];
      FUN_109d9f850(lVar5,lVar4);
    }
    else {
      if (bVar3 != 0x12) {
        return param_3;
      }
      uVar2 = *(uint *)(*(long *)(lVar4 + 0x18) + 8);
      uVar1 = uVar2 & 0xff;
      if ((3 < uVar1 && uVar1 != 5) && (uVar2 & 0xfd) != 4) {
        return param_3;
      }
      lVar5 = *(long *)(*param_2 + 0x210);
      func_0x000109da00ec(lVar5,*(undefined4 *)(lVar4 + 0x20));
    }
    uStack_38 = 0x101;
    FUN_109d349d8(param_1,0x31,param_3,lVar5,auStack_58);
    plVar6 = param_1;
  }
  return plVar6;
}



/* Entry: 109fa8a5c; end: 109fa8aa7;  */

undefined1  [16] FUN_109fa8a5c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar2 = &UNK_10f62b48a;
  uVar3 = 3;
  if ((param_1 != 0) && (*(char *)(param_1 + 8) == '\x12')) {
    uVar1 = *(int *)(param_1 + 0x20) - 2;
    if (2 < uVar1) {
      auVar5._8_8_ = 3;
      auVar5._0_8_ = &UNK_10f62b48a;
      return auVar5;
    }
    puVar2 = (&PTR_DAT_110b96838)[uVar1];
    uVar3 = 5;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 109fa8aa8; end: 109fa8c1f;  */

void FUN_109fa8aa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (((param_1 != (undefined8 *)0x0) && (*(char *)(param_1 + 2) == '\0')) &&
     ((undefined8 *)param_1[9] == param_1 + 9)) {
    puVar1 = param_1 + 0xe;
    FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0xf);
    param_1[0xe] = puVar1;
    puVar1 = param_1 + 0xe;
    FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x18);
    param_1[0xe] = puVar1;
    puVar1 = param_1 + 0xe;
    FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x22);
    param_1[0xe] = puVar1;
    puVar1 = param_1 + 0xe;
    FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x24);
    param_1[0xe] = puVar1;
    puVar1 = param_1 + 0xe;
    FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x42);
    param_1[0xe] = puVar1;
    FUN_109d853ec(param_1,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff3f | 0x40;
  }
  return;
}



/* Entry: 109fa8c20; end: 109fa8f33;  */

long * FUN_109fa8c20(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x20;
  uint uVar10;
  long *unaff_x21;
  uint uVar11;
  long *unaff_x23;
  undefined1 auStack_128 [32];
  undefined2 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_d0 [4];
  undefined2 uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long alStack_98 [2];
  long *plStack_88;
  ulong uStack_80;
  long alStack_78 [2];
  long lStack_68;
  
  plVar3 = alStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_2;
  plVar8 = param_4;
  if (param_2 == (long *)0x0) {
    plVar1 = param_1;
    param_1 = unaff_x20;
    param_4 = unaff_x21;
    plVar2 = (long *)0x0;
  }
  else {
    plVar1 = (long *)*param_2;
    uVar10 = (uint)param_4;
    if (plVar1 == (long *)0x0 || (char)plVar1[1] != '\x12') {
      uVar11 = 1;
    }
    else {
      uVar11 = *(uint *)(plVar1 + 4);
    }
    if (uVar10 != 0) {
      uVar6 = 0;
      do {
        if (uVar6 != *(byte *)((long)param_3 + uVar6 + 0x20)) goto LAB_109fa8cc4;
        uVar6 = uVar6 + 1;
      } while (((ulong)param_4 & 0xffffffff) != uVar6);
    }
    plVar2 = param_2;
    if (uVar11 != uVar10) {
LAB_109fa8cc4:
      if ((uVar10 == 1) && (1 < uVar11)) {
        param_1 = (long *)param_1[2];
        plVar8 = param_3 + 4;
        uStack_b0 = 0x101;
        param_3 = (long *)(*(long *)param_1[8] + 0x7b0);
        FUN_109d678e8(param_3,(char)*plVar8,0);
        plVar1 = param_1;
        func_0x000109d5c6e0(param_1,param_2,param_3,alStack_d0);
        plVar7 = param_2;
        plVar8 = plVar3;
        plVar2 = plVar1;
      }
      else if ((uVar10 < 2) || (uVar11 != 1)) {
        unaff_x23 = alStack_78;
        uStack_80 = 0x400000000;
        plStack_88 = unaff_x23;
        if (uVar10 != 0) {
          plVar8 = param_3 + 4;
          uVar6 = (ulong)param_4 & 0xffffffff;
          do {
            FUN_109d3785c(&plStack_88,(char)*plVar8);
            uVar6 = uVar6 - 1;
            plVar8 = (long *)((long)plVar8 + 1);
          } while (uVar6 != 0);
          if (1 < uVar10) {
            lVar9 = ((ulong)param_4 & 0xffffffff) - 1;
            plVar8 = plStack_88;
            do {
              plVar8 = (long *)((long)plVar8 + 4);
              if (*(int *)plVar8 != (int)*plStack_88) goto LAB_109fa8e64;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        if (uVar11 < 2) {
LAB_109fa8e64:
          param_1 = (long *)param_1[2];
          param_3 = (long *)*param_2;
          FUN_109d67e38(param_3);
          uStack_b0 = 0x101;
          plVar2 = param_1;
          plVar8 = plStack_88;
          FUN_109d37990(param_1,param_2,param_3,plStack_88,uStack_80 & 0xffffffff,alStack_d0);
        }
        else {
          uVar6 = (ulong)param_4 & 0xffffffff;
          param_4 = alStack_98;
          uStack_a0 = 0x400000000;
          plStack_a8 = param_4;
          FUN_109d378b8(&plStack_a8,uVar6,(int)*plStack_88);
          param_1 = (long *)param_1[2];
          param_3 = (long *)*param_2;
          FUN_109d67e38(param_3);
          uStack_b0 = 0x101;
          plVar2 = param_1;
          plVar8 = plStack_a8;
          FUN_109d37990(param_1,param_2,param_3,plStack_a8,uStack_a0 & 0xffffffff,alStack_d0);
          if (plStack_a8 != param_4) {
            _free();
          }
        }
        plVar1 = plStack_88;
        plVar7 = param_2;
        if (plStack_88 != unaff_x23) {
          _free();
          plVar7 = param_2;
        }
      }
      else {
        func_0x000109da00ec(plVar1,param_4);
        FUN_109d67e38();
        unaff_x23 = (long *)0x0;
        plVar4 = (long *)((ulong)param_4 & 0xffffffff);
        plVar3 = plVar1;
        do {
          param_4 = (long *)param_1[2];
          uStack_b0 = 0x101;
          plVar8 = (long *)(*(long *)param_4[8] + 0x7b0);
          FUN_109d678e8(plVar8,unaff_x23,0);
          plVar1 = param_4;
          param_3 = param_2;
          func_0x000109d5cb58(param_4,plVar3,param_2,plVar8,alStack_d0);
          unaff_x23 = (long *)((long)unaff_x23 + 1);
          plVar7 = plVar3;
          plVar3 = plVar1;
          plVar2 = plVar1;
        } while (plVar4 != unaff_x23);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (plStack_a8 != param_4) {
    _free();
  }
  if (plStack_88 != unaff_x23) {
    _free();
  }
  plVar3 = plVar1;
  __Unwind_Resume();
  pcStack_d8 = FUN_109fa8f34;
  plVar4 = (long *)plVar3[9];
  plStack_100 = plVar2;
  plStack_f8 = param_4;
  plStack_f0 = param_1;
  plStack_e8 = plVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar4 + 0x18))(plVar4,0x13,plVar7,param_3,0);
  if (plVar4 == (long *)0x0) {
    uStack_108 = 0x101;
    uVar5 = 0x13;
    FUN_109d8c8c0(0x13,plVar7,param_3,auStack_128,0);
    func_0x000109d33940(plVar3,uVar5,plVar8);
    plVar4 = plVar3;
  }
  return plVar4;
}



/* Entry: 109fa8f34; end: 109fa90cf;  */

void FUN_109fa8f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,0x13,param_2,param_3,0);
  if (plVar1 == (long *)0x0) {
    uStack_38 = 0x101;
    uVar2 = 0x13;
    FUN_109d8c8c0(0x13,param_2,param_3,auStack_58,0);
    func_0x000109d33940(param_1,uVar2,param_4);
  }
  return;
}



/* Entry: 109fa90d0; end: 109fa940b;  */

char * FUN_109fa90d0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_88 [32];
  undefined2 uStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  if (param_2 == 0) goto LAB_109fa9388;
  iVar3 = *(int *)(param_2 + 0x28);
  puVar7 = param_1;
  if (iVar3 == 4) {
    lVar12 = **(long **)(param_2 + 0x50);
    FUN_109fa90d0();
    uVar11 = (uint)lVar12;
    pcVar4 = (char *)0x0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_109fa938c;
    if (**(long **)(param_2 + 0x50) != 0) {
      lVar9 = *(long *)(**(long **)(param_2 + 0x50) + 0x30);
      lVar12 = 0;
      if (lVar9 != 0) {
        plVar15 = *(long **)*param_1;
        FUN_109f9f1c0(plVar15,lVar9,(long *)*param_1 + 0x38);
        uVar11 = (uint)lVar9;
        pcVar4 = (char *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_109fa938c;
        pcVar4 = (char *)param_1[2];
        lVar12 = **(long **)*param_1 + 0x7b0;
        FUN_109d678e8(lVar12,0,0);
        plVar14 = (long *)(**(long **)*param_1 + 0x798);
        lStack_60 = lVar12;
        FUN_109d678e8(plVar14,*(undefined4 *)(param_2 + 0x58),0);
        plStack_58 = plVar14;
        goto LAB_109fa93f8;
      }
    }
LAB_109fa9388:
    uVar11 = (uint)lVar12;
    pcVar4 = (char *)0x0;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        lVar12 = param_1[0xb];
        uVar8 = param_1[0xc];
        FUN_109faa2a4(lVar12,uVar8,*(undefined8 *)(param_2 + 0x38));
        uVar11 = (uint)uVar8;
        pcVar4 = (char *)0x0;
        if (lVar12 != 0) {
          pcVar4 = *(char **)(lVar12 + 0x18);
        }
        goto LAB_109fa938c;
      }
      goto LAB_109fa9388;
    }
    uVar11 = (uint)**(undefined8 **)(param_2 + 0x50);
    FUN_109fa90d0();
    pcVar4 = (char *)0x0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_109fa938c;
    plVar15 = *(long **)(param_2 + 0x70);
    if (plVar15 == (long *)0x0) {
LAB_109fa916c:
      uVar13 = *(ulong *)(*plVar15 + 0x48);
      uVar11 = (uint)*(byte *)(*plVar15 + 0x45);
      uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
      uVar1 = (long)(int)uVar13;
      if (uVar11 != 5) {
        uVar1 = uVar13;
      }
      uVar2 = (long)(short)uVar13;
      if (uVar11 != 4) {
        uVar2 = uVar1;
      }
      uVar1 = -(uVar13 & 1);
      if (uVar11 != 0) {
        uVar1 = (long)(char)uVar13;
      }
      if (uVar11 < 4) {
        uVar2 = uVar1;
      }
      plVar14 = (long *)(**(long **)*param_1 + 0x7b0);
      FUN_109d678e8(plVar14,uVar2,0);
    }
    else {
      puVar5 = param_1 + 6;
      FUN_109fab870(puVar5,(int)plVar15[3]);
      if ((puVar5 == (undefined8 *)0x0) || (plVar14 = (long *)puVar5[3], plVar14 == (long *)0x0))
      goto LAB_109fa916c;
    }
    lVar12 = *plVar14;
    plVar6 = plVar14;
    if (*(char *)(lVar12 + 8) != '\r') {
      plVar6 = (long *)param_1[2];
      uStack_68 = 0x101;
      FUN_109d349d8(plVar6,0x31,plVar14,**(long **)*param_1 + 0x798,auStack_88);
      lVar12 = *plVar6;
    }
    plVar10 = (long *)*param_1;
    plVar15 = (long *)*plVar10;
    plVar14 = plVar6;
    if (lVar12 != *plVar15 + 0x7b0) {
      plVar14 = (long *)param_1[2];
      uStack_68 = 0x101;
      func_0x000109d344c8(plVar14,plVar6,*plVar15 + 0x7b0,auStack_88);
      plVar10 = (long *)*param_1;
      plVar15 = (long *)*plVar10;
    }
    lVar12 = **(long **)(param_2 + 0x50);
    uVar8 = *(undefined8 *)(lVar12 + 0x30);
    FUN_109f9f1c0(plVar15,uVar8,plVar10 + 0x38);
    uVar11 = (uint)uVar8;
    pcVar4 = (char *)0x0;
    if (plVar15 == (long *)0x0) goto LAB_109fa938c;
    lVar12 = *(long *)(lVar12 + 0x30);
    if ((lVar12 == 0) || (*(byte *)(lVar12 + 0xe) < 2)) {
      pcVar4 = (char *)param_1[2];
      lVar12 = **(long **)*param_1 + 0x7b0;
      FUN_109d678e8(lVar12,0,0);
      lStack_60 = lVar12;
      plStack_58 = plVar14;
LAB_109fa93f8:
      uVar8 = 2;
    }
    else {
      pcVar4 = (char *)param_1[2];
      lVar12 = **(long **)*param_1 + 0x7b0;
      FUN_109d678e8(lVar12,0,0);
      plVar6 = (long *)(**(long **)*param_1 + 0x798);
      lStack_60 = lVar12;
      FUN_109d678e8(plVar6,0,0);
      uVar8 = 3;
      plStack_58 = plVar6;
      plStack_50 = plVar14;
    }
    uStack_68 = 0x101;
    FUN_109faa5c8(pcVar4,plVar15,puVar7,&lStack_60,uVar8,auStack_88);
    uVar11 = (uint)plVar15;
  }
LAB_109fa938c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar4;
  }
  ___stack_chk_fail();
  for (; pcVar4 != (char *)0x0; pcVar4 = *(char **)(pcVar4 + 8)) {
    while (uVar11 < *(uint *)(pcVar4 + 0x20)) {
      pcVar4 = *(char **)pcVar4;
      if (pcVar4 == (char *)0x0) goto LAB_109fa9440;
    }
    if (uVar11 <= *(uint *)(pcVar4 + 0x20)) goto LAB_109fa944c;
  }
LAB_109fa9440:
  pcVar4 = "map::at:  key not found";
  func_0x000109262df8("map::at:  key not found");
LAB_109fa944c:
  return pcVar4 + 0x28;
}



/* Entry: 109fa940c; end: 109fa9457;  */

char * FUN_109fa940c(char *param_1,uint param_2)

{
  for (; param_1 != (char *)0x0; param_1 = *(char **)(param_1 + 8)) {
    while (param_2 < *(uint *)(param_1 + 0x20)) {
      param_1 = *(char **)param_1;
      if (param_1 == (char *)0x0) goto LAB_109fa9440;
    }
    if (param_2 <= *(uint *)(param_1 + 0x20)) goto LAB_109fa944c;
  }
LAB_109fa9440:
  param_1 = "map::at:  key not found";
  func_0x000109262df8("map::at:  key not found");
LAB_109fa944c:
  return param_1 + 0x28;
}



/* Entry: 109fa9458; end: 109fa952f;  */

undefined4 FUN_109fa9458(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  lVar3 = *(long *)(param_1 + 0x420);
  if (lVar3 != 0) {
    lVar7 = param_1 + 0x420;
    do {
      lVar1 = 8;
      if (param_2 <= *(uint *)(lVar3 + 0x20)) {
        lVar1 = 0;
        lVar7 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + lVar1);
    } while (lVar3 != 0);
    if (((lVar7 != param_1 + 0x420) && (*(uint *)(lVar7 + 0x20) <= param_2)) &&
       (uVar4 = *(ulong *)(lVar7 + 0x30), uVar4 != 0)) {
      uVar5 = uVar4 - 1;
      if ((uVar4 & uVar5) == 0) {
        uVar6 = uVar5 & param_3;
      }
      else {
        uVar6 = param_3;
        if (uVar4 <= param_3) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = param_3 / uVar4;
          }
          uVar6 = param_3 - uVar6 * uVar4;
        }
      }
      plVar8 = *(long **)(*(long *)(lVar7 + 0x28) + uVar6 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return 0xffffffff;
            }
            uVar9 = plVar8[1];
            if (uVar9 != param_3) break;
            if (plVar8[2] == param_3) {
              return *(undefined4 *)(plVar8 + 3);
            }
          }
          if ((uVar4 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
        } while (uVar9 == uVar6);
      }
    }
  }
  return 0xffffffff;
}



/* Entry: 109fa9530; end: 109fa957b;  */

char * FUN_109fa9530(char *param_1,uint param_2)

{
  for (; param_1 != (char *)0x0; param_1 = *(char **)(param_1 + 8)) {
    while (param_2 < *(uint *)(param_1 + 0x20)) {
      param_1 = *(char **)param_1;
      if (param_1 == (char *)0x0) goto LAB_109fa9564;
    }
    if (param_2 <= *(uint *)(param_1 + 0x20)) goto LAB_109fa9570;
  }
LAB_109fa9564:
  param_1 = "map::at:  key not found";
  func_0x000109262df8("map::at:  key not found");
LAB_109fa9570:
  return param_1 + 0x28;
}



/* Entry: 109fa957c; end: 109fa964f;  */

long * FUN_109fa957c(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined **ppuVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 ****ppppuStack_138;
  long lStack_130;
  char cStack_121;
  undefined *puStack_120;
  undefined8 uStack_118;
  char *pcStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined7 uStack_e8;
  char cStack_e1;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  undefined2 uStack_b0;
  long lStack_a8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar5 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_1 + 0x29;
  puVar15 = (undefined8 *)param_1[0x29];
  puVar14 = puVar12;
  if (puVar15 == (undefined8 *)0x0) {
LAB_109fa95dc:
    puVar14 = puVar12;
  }
  else {
    do {
      lVar11 = 8;
      if (param_2 <= *(uint *)(puVar15 + 4)) {
        lVar11 = 0;
        puVar14 = puVar15;
      }
      puVar15 = *(undefined8 **)((long)puVar15 + lVar11);
    } while (puVar15 != (undefined8 *)0x0);
    if ((puVar14 == puVar12) || (param_2 < *(uint *)(puVar14 + 4))) goto LAB_109fa95dc;
  }
  plVar20 = (long *)*param_1;
  uStack_40 = puVar14[5];
  uStack_38 = param_1[3];
  lVar11 = *plVar20 + 0x7b0;
  FUN_109d678e8(lVar11,0,0);
  FUN_109d94e24();
  uVar7 = 3;
  uVar8 = 0;
  lStack_30 = lVar11;
  FUN_109d974c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar20;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = 0x305;
  pcStack_110 = ":";
  ppuStack_d0 = &puStack_120;
  uStack_b0 = 0x802;
  puStack_120 = (undefined *)puVar5;
  uStack_118 = uVar7;
  pcStack_c0 = (char *)(uVar8 & 0xffffffff);
  FUN_109e04498(&lStack_f8,&ppuStack_d0);
  plVar3 = plVar20 + 0x23;
  func_0x000107c31944(plVar3,&lStack_f8);
  plVar23 = (long *)plVar20[0x24];
  if (plVar23 != (long *)0x0) {
    uVar24 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar24) == 0) {
      plVar25 = (long *)(uVar24 & (ulong)plVar3);
    }
    else {
      plVar25 = plVar3;
      if (plVar23 <= plVar3) {
        uVar1 = 0;
        if (plVar23 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar23;
        }
        plVar25 = (long *)((long)plVar3 - uVar1 * (long)plVar23);
      }
    }
    plVar9 = *(long **)(plVar20[0x23] + (long)plVar25 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        plVar10 = (long *)plVar9[1];
        if (plVar10 == plVar3) {
          plVar10 = plVar20 + 0x23;
          func_0x000104c4fbc4(plVar10,plVar9 + 2,&lStack_f8);
          if (((ulong)plVar10 & 1) != 0) {
            plVar3 = (long *)plVar9[5];
            goto LAB_109fa9ca4;
          }
        }
        else {
          if (((ulong)plVar23 & uVar24) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar24);
          }
          else if (plVar23 <= plVar10) {
            uVar1 = 0;
            if (plVar23 != (long *)0x0) {
              uVar1 = (ulong)plVar10 / (ulong)plVar23;
            }
            plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar23);
          }
          if (plVar10 != plVar25) break;
        }
      }
    }
  }
  plVar25 = (long *)*plVar20;
  uStack_e0 = 0;
  uStack_100 = 0x503;
  puStack_120 = &UNK_10f62b6b7;
  ppuStack_d0 = &puStack_120;
  pcStack_c0 = ")";
  uStack_b0 = 0x302;
  pcStack_110 = (char *)puVar5;
  uStack_108 = uVar7;
  FUN_109e04498(&ppppuStack_138,&ppuStack_d0);
  pppppuVar6 = (undefined8 *****)ppppuStack_138;
  if (-1 < (long)cStack_121) {
    pppppuVar6 = &ppppuStack_138;
  }
  lVar11 = lStack_130;
  if (-1 < cStack_121) {
    lVar11 = (long)cStack_121;
  }
  plVar3 = (long *)(*plVar25 + 0x108);
  FUN_109d956b4(plVar3,pppppuVar6,lVar11);
  lStack_d8 = *plVar3;
  if (((ulong)pppppuVar6 & 1) != 0) {
    *(long *)(lStack_d8 + 0x10) = lStack_d8;
  }
  lStack_d8 = lStack_d8 + 8;
  FUN_109d974c0(plVar25,&uStack_e0,2,1,1);
  if (cStack_121 < '\0') {
    __ZdlPv(ppppuStack_138);
  }
  FUN_109d976d8(plVar25,0,plVar25);
  puStack_120 = &UNK_10f62b6c9;
  uStack_100 = 0x803;
  ppuStack_d0 = &puStack_120;
  pcStack_c0 = ")";
  uStack_b0 = 0x302;
  pcStack_110 = (char *)(uVar8 & 0xffffffff);
  FUN_109e04498(&ppppuStack_138,&ppuStack_d0);
  ppuVar21 = (undefined **)*plVar20;
  pppppuVar6 = (undefined8 *****)ppppuStack_138;
  if (-1 < (long)cStack_121) {
    pppppuVar6 = &ppppuStack_138;
  }
  lVar11 = lStack_130;
  if (-1 < cStack_121) {
    lVar11 = (long)cStack_121;
  }
  plVar3 = (long *)(*ppuVar21 + 0x108);
  FUN_109d956b4(plVar3,pppppuVar6,lVar11);
  lVar11 = *plVar3;
  if (((ulong)pppppuVar6 & 1) != 0) {
    *(long *)(lVar11 + 0x10) = lVar11;
  }
  ppuStack_d0 = (undefined **)(lVar11 + 8);
  pppppuVar6 = (undefined8 *****)ppppuStack_138;
  if (-1 < (long)cStack_121) {
    pppppuVar6 = &ppppuStack_138;
  }
  if (-1 < cStack_121) {
    lStack_130 = (long)cStack_121;
  }
  plVar3 = (long *)(*(long *)*plVar20 + 0x108);
  plStack_c8 = plVar25;
  FUN_109d956b4(plVar3,pppppuVar6,lStack_130);
  lVar11 = *plVar3;
  if (((ulong)pppppuVar6 & 1) != 0) {
    *(long *)(lVar11 + 0x10) = lVar11;
  }
  pcStack_c0 = (char *)(lVar11 + 8);
  FUN_109d974c0(ppuVar21,&ppuStack_d0,3,1,1);
  FUN_109d976d8();
  plVar3 = (long *)*plVar20;
  ppuStack_d0 = ppuVar21;
  FUN_109d974c0(plVar3,&ppuStack_d0,1,0,1);
  plVar9 = plVar20 + 0x23;
  func_0x000107c31944(plVar9,&lStack_f8);
  plVar10 = (long *)plVar20[0x24];
  if (plVar10 != (long *)0x0) {
    uVar8 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar8) == 0) {
      plVar23 = (long *)(uVar8 & (ulong)plVar9);
    }
    else {
      plVar23 = plVar9;
      if (plVar10 <= plVar9) {
        uVar24 = 0;
        if (plVar10 != (long *)0x0) {
          uVar24 = (ulong)plVar9 / (ulong)plVar10;
        }
        plVar23 = (long *)((long)plVar9 - uVar24 * (long)plVar10);
      }
    }
    puVar12 = *(undefined8 **)(plVar20[0x23] + (long)plVar23 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar12; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar13 = (long *)plVar22[1];
        if (plVar13 == plVar9) {
          plVar13 = plVar20 + 0x23;
          func_0x000104c4fbc4(plVar13,plVar22 + 2,&lStack_f8);
          if (((ulong)plVar13 & 1) != 0) goto LAB_109fa9c90;
        }
        else {
          if (((ulong)plVar10 & uVar8) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar8);
          }
          else if (plVar10 <= plVar13) {
            uVar24 = 0;
            if (plVar10 != (long *)0x0) {
              uVar24 = (ulong)plVar13 / (ulong)plVar10;
            }
            plVar13 = (long *)((long)plVar13 - uVar24 * (long)plVar10);
          }
          if (plVar13 != plVar23) break;
        }
      }
    }
  }
  plVar22 = (long *)0x38;
  __Znwm();
  *plVar22 = 0;
  plVar22[1] = (long)plVar9;
  if (cStack_e1 < '\0') {
    func_0x000107c3192c(plVar22 + 2,lStack_f8,lStack_f0);
  }
  else {
    plVar22[3] = lStack_f0;
    plVar22[2] = lStack_f8;
    plVar22[4] = CONCAT17(cStack_e1,uStack_e8);
  }
  plVar22[5] = 0;
  plVar22[6] = 0;
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(plVar20 + 0x27) * (float)plVar10 < (float)(plVar20[0x26] + 1))) {
    uVar8 = 1;
    if ((long *)0x2 < plVar10) {
      uVar8 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    plVar23 = (long *)(uVar8 | (long)plVar10 << 1);
    plVar10 = (long *)(long)((float)(plVar20[0x26] + 1) / *(float *)(plVar20 + 0x27));
    if (plVar23 <= plVar10) {
      plVar23 = plVar10;
    }
    if ((long)plVar23 - 1U == 0) {
      plVar23 = (long *)0x2;
    }
    else if (((ulong)plVar23 & (long)plVar23 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar10 = (long *)plVar20[0x24];
    if (plVar10 < plVar23) {
LAB_109fa9a9c:
      if ((ulong)plVar23 >> 0x3d != 0) goto LAB_109fa9d30;
      lVar11 = (long)plVar23 << 3;
      __Znwm();
      lVar4 = plVar20[0x23];
      plVar20[0x23] = lVar11;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar10 = (long *)0x0;
      plVar20[0x24] = (long)plVar23;
      do {
        *(undefined8 *)(plVar20[0x23] + (long)plVar10 * 8) = 0;
        plVar10 = (long *)((long)plVar10 + 1);
      } while (plVar23 != plVar10);
      plVar13 = (long *)plVar20[0x25];
      plVar10 = plVar23;
      if (plVar13 != (long *)0x0) {
        plVar16 = (long *)plVar13[1];
        uVar8 = (long)plVar23 - 1;
        if (((ulong)plVar23 & uVar8) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar8);
        }
        else if (plVar23 <= plVar16) {
          uVar24 = 0;
          if (plVar23 != (long *)0x0) {
            uVar24 = (ulong)plVar16 / (ulong)plVar23;
          }
          plVar16 = (long *)((long)plVar16 - uVar24 * (long)plVar23);
        }
        *(long **)(plVar20[0x23] + (long)plVar16 * 8) = plVar20 + 0x25;
        plVar17 = (long *)*plVar13;
        while (plVar17 != (long *)0x0) {
          plVar19 = (long *)plVar17[1];
          if (((ulong)plVar23 & uVar8) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar8);
          }
          else if (plVar23 <= plVar19) {
            uVar24 = 0;
            if (plVar23 != (long *)0x0) {
              uVar24 = (ulong)plVar19 / (ulong)plVar23;
            }
            plVar19 = (long *)((long)plVar19 - uVar24 * (long)plVar23);
          }
          plVar18 = plVar17;
          if (plVar19 != plVar16) {
            lVar11 = plVar20[0x23];
            if (*(long *)(lVar11 + (long)plVar19 * 8) == 0) {
              *(long **)(lVar11 + (long)plVar19 * 8) = plVar13;
              plVar16 = plVar19;
            }
            else {
              *plVar13 = *plVar17;
              *plVar17 = **(undefined8 **)(lVar11 + (long)plVar19 * 8);
              **(long **)(lVar11 + (long)plVar19 * 8) = (long)plVar17;
              plVar18 = plVar13;
            }
          }
          plVar13 = plVar18;
          plVar17 = (long *)*plVar18;
        }
      }
    }
    else if (plVar23 < plVar10) {
      plVar13 = (long *)(long)((float)(ulong)plVar20[0x26] / *(float *)(plVar20 + 0x27));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar13) {
        plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
      }
      if (plVar23 <= plVar13) {
        plVar23 = plVar13;
      }
      if (plVar23 < plVar10) {
        if (plVar23 != (long *)0x0) goto LAB_109fa9a9c;
        lVar11 = plVar20[0x23];
        plVar20[0x23] = 0;
        if (lVar11 != 0) {
          __ZdlPv();
        }
        plVar20[0x24] = 0;
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)plVar20[0x24];
      }
    }
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      plVar23 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
    }
    else {
      plVar23 = plVar9;
      if (plVar10 <= plVar9) {
        uVar8 = 0;
        if (plVar10 != (long *)0x0) {
          uVar8 = (ulong)plVar9 / (ulong)plVar10;
        }
        plVar23 = (long *)((long)plVar9 - uVar8 * (long)plVar10);
      }
    }
  }
  lVar11 = plVar20[0x23];
  plVar9 = *(long **)(lVar11 + (long)plVar23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar22 = plVar20[0x25];
    plVar20[0x25] = (long)plVar22;
    *(long **)(lVar11 + (long)plVar23 * 8) = plVar20 + 0x25;
    if (*plVar22 != 0) {
      plVar23 = *(long **)(*plVar22 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar23 = (long *)((ulong)plVar23 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar23) {
        uVar8 = 0;
        if (plVar10 != (long *)0x0) {
          uVar8 = (ulong)plVar23 / (ulong)plVar10;
        }
        plVar23 = (long *)((long)plVar23 - uVar8 * (long)plVar10);
      }
      *(long **)(plVar20[0x23] + (long)plVar23 * 8) = plVar22;
    }
  }
  else {
    *plVar22 = *plVar9;
    *plVar9 = (long)plVar22;
  }
  plVar20[0x26] = plVar20[0x26] + 1;
LAB_109fa9c90:
  plVar22[5] = (long)plVar3;
  plVar22[6] = (long)plVar25;
  if (cStack_121 < '\0') {
    __ZdlPv(ppppuStack_138);
  }
LAB_109fa9ca4:
  if (cStack_e1 < '\0') {
    __ZdlPv(lStack_f8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar3;
  }
  ___stack_chk_fail();
LAB_109fa9d30:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fa9d38);
  (*pcVar2)();
}



/* Entry: 109fa9650; end: 109fa9daf;  */

long FUN_109fa9650(long *param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 ****ppppuStack_f8;
  long lStack_f0;
  char cStack_e1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  char *pcStack_80;
  undefined2 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0x305;
  pcStack_d0 = ":";
  ppuStack_90 = &puStack_e0;
  uStack_70 = 0x802;
  puStack_e0 = param_2;
  uStack_d8 = param_3;
  pcStack_80 = (char *)(param_4 & 0xffffffff);
  FUN_109e04498(&lStack_b8,&ppuStack_90);
  plVar16 = param_1 + 0x23;
  func_0x000107c31944(plVar16,&lStack_b8);
  plVar17 = (long *)param_1[0x24];
  if (plVar17 != (long *)0x0) {
    uVar18 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar18) == 0) {
      plVar19 = (long *)(uVar18 & (ulong)plVar16);
    }
    else {
      plVar19 = plVar16;
      if (plVar17 <= plVar16) {
        uVar1 = 0;
        if (plVar17 != (long *)0x0) {
          uVar1 = (ulong)plVar16 / (ulong)plVar17;
        }
        plVar19 = (long *)((long)plVar16 - uVar1 * (long)plVar17);
      }
    }
    plVar6 = *(long **)(param_1[0x23] + (long)plVar19 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar16) {
          plVar7 = param_1 + 0x23;
          func_0x000104c4fbc4(plVar7,plVar6 + 2,&lStack_b8);
          if (((ulong)plVar7 & 1) != 0) {
            lVar8 = plVar6[5];
            goto LAB_109fa9ca4;
          }
        }
        else {
          if (((ulong)plVar17 & uVar18) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar18);
          }
          else if (plVar17 <= plVar7) {
            uVar1 = 0;
            if (plVar17 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar17;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar17);
          }
          if (plVar7 != plVar19) break;
        }
      }
    }
  }
  plVar16 = (long *)*param_1;
  uStack_a0 = 0;
  uStack_c0 = 0x503;
  puStack_e0 = &UNK_10f62b6b7;
  ppuStack_90 = &puStack_e0;
  pcStack_80 = ")";
  uStack_70 = 0x302;
  pcStack_d0 = param_2;
  uStack_c8 = param_3;
  FUN_109e04498(&ppppuStack_f8,&ppuStack_90);
  pppppuVar5 = (undefined8 *****)ppppuStack_f8;
  if (-1 < (long)cStack_e1) {
    pppppuVar5 = &ppppuStack_f8;
  }
  lVar8 = lStack_f0;
  if (-1 < cStack_e1) {
    lVar8 = (long)cStack_e1;
  }
  plVar19 = (long *)(*plVar16 + 0x108);
  FUN_109d956b4(plVar19,pppppuVar5,lVar8);
  lStack_98 = *plVar19;
  if (((ulong)pppppuVar5 & 1) != 0) {
    *(long *)(lStack_98 + 0x10) = lStack_98;
  }
  lStack_98 = lStack_98 + 8;
  FUN_109d974c0(plVar16,&uStack_a0,2,1,1);
  if (cStack_e1 < '\0') {
    __ZdlPv(ppppuStack_f8);
  }
  FUN_109d976d8(plVar16,0,plVar16);
  puStack_e0 = &UNK_10f62b6c9;
  uStack_c0 = 0x803;
  ppuStack_90 = &puStack_e0;
  pcStack_80 = ")";
  uStack_70 = 0x302;
  pcStack_d0 = (char *)(param_4 & 0xffffffff);
  FUN_109e04498(&ppppuStack_f8,&ppuStack_90);
  ppuVar15 = (undefined **)*param_1;
  pppppuVar5 = (undefined8 *****)ppppuStack_f8;
  if (-1 < (long)cStack_e1) {
    pppppuVar5 = &ppppuStack_f8;
  }
  lVar8 = lStack_f0;
  if (-1 < cStack_e1) {
    lVar8 = (long)cStack_e1;
  }
  plVar19 = (long *)(*ppuVar15 + 0x108);
  FUN_109d956b4(plVar19,pppppuVar5,lVar8);
  lVar8 = *plVar19;
  if (((ulong)pppppuVar5 & 1) != 0) {
    *(long *)(lVar8 + 0x10) = lVar8;
  }
  ppuStack_90 = (undefined **)(lVar8 + 8);
  pppppuVar5 = (undefined8 *****)ppppuStack_f8;
  if (-1 < (long)cStack_e1) {
    pppppuVar5 = &ppppuStack_f8;
  }
  if (-1 < cStack_e1) {
    lStack_f0 = (long)cStack_e1;
  }
  plVar19 = (long *)(*(long *)*param_1 + 0x108);
  plStack_88 = plVar16;
  FUN_109d956b4(plVar19,pppppuVar5,lStack_f0);
  lVar8 = *plVar19;
  if (((ulong)pppppuVar5 & 1) != 0) {
    *(long *)(lVar8 + 0x10) = lVar8;
  }
  pcStack_80 = (char *)(lVar8 + 8);
  FUN_109d974c0(ppuVar15,&ppuStack_90,3,1,1);
  FUN_109d976d8();
  lVar8 = *param_1;
  ppuStack_90 = ppuVar15;
  FUN_109d974c0(lVar8,&ppuStack_90,1,0,1);
  plVar19 = param_1 + 0x23;
  func_0x000107c31944(plVar19,&lStack_b8);
  plVar6 = (long *)param_1[0x24];
  if (plVar6 != (long *)0x0) {
    uVar18 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar18) == 0) {
      plVar17 = (long *)(uVar18 & (ulong)plVar19);
    }
    else {
      plVar17 = plVar19;
      if (plVar6 <= plVar19) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar19 / (ulong)plVar6;
        }
        plVar17 = (long *)((long)plVar19 - uVar1 * (long)plVar6);
      }
    }
    puVar9 = *(undefined8 **)(param_1[0x23] + (long)plVar17 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar9; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar10 = (long *)plVar7[1];
        if (plVar10 == plVar19) {
          plVar10 = param_1 + 0x23;
          func_0x000104c4fbc4(plVar10,plVar7 + 2,&lStack_b8);
          if (((ulong)plVar10 & 1) != 0) goto LAB_109fa9c90;
        }
        else {
          if (((ulong)plVar6 & uVar18) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar18);
          }
          else if (plVar6 <= plVar10) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar10 / (ulong)plVar6;
            }
            plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar6);
          }
          if (plVar10 != plVar17) break;
        }
      }
    }
  }
  plVar7 = (long *)0x38;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar19;
  if (cStack_a1 < '\0') {
    func_0x000107c3192c(plVar7 + 2,lStack_b8,lStack_b0);
  }
  else {
    plVar7[3] = lStack_b0;
    plVar7[2] = lStack_b8;
    plVar7[4] = CONCAT17(cStack_a1,uStack_a8);
  }
  plVar7[5] = 0;
  plVar7[6] = 0;
  if ((plVar6 == (long *)0x0) ||
     (*(float *)(param_1 + 0x27) * (float)plVar6 < (float)(param_1[0x26] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar6) {
      uVar18 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    plVar17 = (long *)(uVar18 | (long)plVar6 << 1);
    plVar6 = (long *)(long)((float)(param_1[0x26] + 1) / *(float *)(param_1 + 0x27));
    if (plVar17 <= plVar6) {
      plVar17 = plVar6;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)0x2;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar6 = (long *)param_1[0x24];
    if (plVar6 < plVar17) {
LAB_109fa9a9c:
      if ((ulong)plVar17 >> 0x3d != 0) goto LAB_109fa9d30;
      lVar3 = (long)plVar17 << 3;
      __Znwm();
      lVar4 = param_1[0x23];
      param_1[0x23] = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[0x24] = (long)plVar17;
      do {
        *(undefined8 *)(param_1[0x23] + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (plVar17 != plVar6);
      plVar10 = (long *)param_1[0x25];
      plVar6 = plVar17;
      if (plVar10 != (long *)0x0) {
        plVar11 = (long *)plVar10[1];
        uVar18 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar18) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar18);
        }
        else if (plVar17 <= plVar11) {
          uVar1 = 0;
          if (plVar17 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar17;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar17);
        }
        *(long **)(param_1[0x23] + (long)plVar11 * 8) = param_1 + 0x25;
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          plVar14 = (long *)plVar12[1];
          if (((ulong)plVar17 & uVar18) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar18);
          }
          else if (plVar17 <= plVar14) {
            uVar1 = 0;
            if (plVar17 != (long *)0x0) {
              uVar1 = (ulong)plVar14 / (ulong)plVar17;
            }
            plVar14 = (long *)((long)plVar14 - uVar1 * (long)plVar17);
          }
          plVar13 = plVar12;
          if (plVar14 != plVar11) {
            lVar3 = param_1[0x23];
            if (*(long *)(lVar3 + (long)plVar14 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar14 * 8) = plVar10;
              plVar11 = plVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + (long)plVar14 * 8);
              **(long **)(lVar3 + (long)plVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (plVar17 < plVar6) {
      plVar10 = (long *)(long)((float)(ulong)param_1[0x26] / *(float *)(param_1 + 0x27));
      if ((plVar6 < (long *)0x3) || (((ulong)plVar6 & (long)plVar6 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar10) {
        plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
      }
      if (plVar17 <= plVar10) {
        plVar17 = plVar10;
      }
      if (plVar17 < plVar6) {
        if (plVar17 != (long *)0x0) goto LAB_109fa9a9c;
        lVar3 = param_1[0x23];
        param_1[0x23] = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[0x24] = 0;
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)param_1[0x24];
      }
    }
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      plVar17 = (long *)((long)plVar6 - 1U & (ulong)plVar19);
    }
    else {
      plVar17 = plVar19;
      if (plVar6 <= plVar19) {
        uVar18 = 0;
        if (plVar6 != (long *)0x0) {
          uVar18 = (ulong)plVar19 / (ulong)plVar6;
        }
        plVar17 = (long *)((long)plVar19 - uVar18 * (long)plVar6);
      }
    }
  }
  lVar3 = param_1[0x23];
  plVar19 = *(long **)(lVar3 + (long)plVar17 * 8);
  if (plVar19 == (long *)0x0) {
    *plVar7 = param_1[0x25];
    param_1[0x25] = (long)plVar7;
    *(long **)(lVar3 + (long)plVar17 * 8) = param_1 + 0x25;
    if (*plVar7 != 0) {
      plVar17 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar17) {
        uVar18 = 0;
        if (plVar6 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar6;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar6);
      }
      *(long **)(param_1[0x23] + (long)plVar17 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar19;
    *plVar19 = (long)plVar7;
  }
  param_1[0x26] = param_1[0x26] + 1;
LAB_109fa9c90:
  plVar7[5] = lVar8;
  plVar7[6] = (long)plVar16;
  if (cStack_e1 < '\0') {
    __ZdlPv(ppppuStack_f8);
  }
LAB_109fa9ca4:
  if (cStack_a1 < '\0') {
    __ZdlPv(lStack_b8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar8;
  }
  ___stack_chk_fail();
LAB_109fa9d30:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fa9d38);
  (*pcVar2)();
}



/* Entry: 109fa9db0; end: 109fa9dfb;  */

char * FUN_109fa9db0(char *param_1,uint param_2)

{
  for (; param_1 != (char *)0x0; param_1 = *(char **)(param_1 + 8)) {
    while (param_2 < *(uint *)(param_1 + 0x1c)) {
      param_1 = *(char **)param_1;
      if (param_1 == (char *)0x0) goto LAB_109fa9de4;
    }
    if (param_2 <= *(uint *)(param_1 + 0x1c)) goto LAB_109fa9df0;
  }
LAB_109fa9de4:
  param_1 = "map::at:  key not found";
  func_0x000109262df8("map::at:  key not found");
LAB_109fa9df0:
  return param_1 + 0x20;
}



/* Entry: 109fa9dfc; end: 109fa9e53;  */

void FUN_109fa9dfc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,8);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined8 *)(*param_1 + uVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109fa9e54; end: 109faa20f;  */

long * FUN_109fa9e54(long *param_1,undefined8 *param_2,long param_3,ulong param_4,long *param_5,
                    ulong param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long **pplVar3;
  undefined8 *******pppppppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long alStack_1b8 [2];
  char cStack_1a1;
  undefined8 ******ppppppuStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long *plStack_180;
  long *plStack_178;
  long alStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1 + 0x31;
  FUN_109faa894();
  if (plVar8 == (long *)0x0) {
    uVar11 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    __ZNSt3__19to_stringEm(alStack_1b8,uVar11);
    plVar8 = alStack_1b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar8,0,&UNK_10f62af26,4);
    plStack_178 = (long *)plVar8[1];
    plStack_180 = (long *)*plVar8;
    alStack_170[0] = plVar8[2];
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = 0;
    uVar11 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    pplVar3 = &plStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar3,puVar2,uVar11);
    plStack_198 = pplVar3[1];
    ppppppuStack_1a0 = (undefined8 ******)*pplVar3;
    uStack_190 = pplVar3[2];
    pplVar3[1] = (long *)0x0;
    pplVar3[2] = (long *)0x0;
    *pplVar3 = (long *)0x0;
    if (alStack_170[0] < 0) {
      __ZdlPv(plStack_180);
    }
    if (cStack_1a1 < '\0') {
      __ZdlPv(alStack_1b8[0]);
    }
    plStack_178 = (long *)0x2000000000;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
    if (-1 < (long)uStack_190._7_1_) {
      pppppppuVar4 = &ppppppuStack_1a0;
    }
    plVar8 = plStack_198;
    if (-1 < (long)uStack_190) {
      plVar8 = (long *)(long)uStack_190._7_1_;
    }
    plVar10 = (long *)(*(long *)*param_1 + 0x108);
    plStack_180 = alStack_170;
    FUN_109d956b4(plVar10,pppppppuVar4,plVar8);
    lVar6 = *plVar10;
    if (((ulong)pppppppuVar4 & 1) != 0) {
      *(long *)(lVar6 + 0x10) = lVar6;
    }
    func_0x000109d33e60(&plStack_180,lVar6 + 8);
    lVar6 = *param_5;
    if ((param_5[1] != lVar6) && (param_4 != 0)) {
      uVar11 = 0;
      do {
        lVar6 = *(long *)(*(long *)(lVar6 + uVar11 * 8) + 0x10);
        if ((((lVar6 == 0) || (1 < *(byte *)(lVar6 + 0xd))) || (1 < *(byte *)(lVar6 + 0xe))) ||
           (0xb < *(byte *)(lVar6 + 4) || (1 << (ulong)(*(byte *)(lVar6 + 4) & 0x1f) & 0x807U) == 0)
           ) {
          plVar8 = (long *)param_1[3];
        }
        else {
          plVar8 = param_1;
          FUN_109faa7cc(param_1);
        }
        func_0x000109d33e60(&plStack_180,plVar8);
        lVar6 = *(long *)*param_1 + 0x7b0;
        FUN_109d678e8(lVar6,*(undefined8 *)(param_3 + uVar11 * 8),0);
        FUN_109d94e24();
        func_0x000109d33e60(&plStack_180,lVar6);
        uVar11 = uVar11 + 1;
        lVar6 = *param_5;
      } while ((uVar11 < (ulong)(param_5[1] - lVar6 >> 3)) && (uVar11 < param_4));
    }
    plVar10 = (long *)*param_1;
    FUN_109d974c0(plVar10,plStack_180,(ulong)plStack_178 & 0xffffffff,0,1);
    plVar8 = param_1 + 0x31;
    FUN_109faa978(plVar8,param_2,param_2);
    plVar8[5] = (long)plVar10;
    if (plStack_180 != alStack_170) {
      _free();
    }
    if ((long)uStack_190 < 0) {
      __ZdlPv(ppppppuStack_1a0);
    }
  }
  else {
    plVar10 = (long *)plVar8[5];
  }
  param_6 = param_6 & 0xffffffff;
  if (((param_6 < (ulong)(param_5[1] - *param_5 >> 3)) &&
      (lVar6 = *(long *)(*(long *)(*param_5 + param_6 * 8) + 0x10), lVar6 != 0)) &&
     ((*(byte *)(lVar6 + 0xd) < 2 &&
      ((*(byte *)(lVar6 + 0xe) < 2 &&
       (*(byte *)(lVar6 + 4) < 0xc && (1 << (ulong)(*(byte *)(lVar6 + 4) & 0x1f) & 0x807U) != 0)))))
     ) {
    plVar8 = param_1;
    FUN_109faa7cc();
  }
  else {
    plVar8 = (long *)param_1[3];
  }
  if (param_6 < param_4) {
    uVar5 = *(undefined8 *)(param_3 + param_6 * 8);
  }
  else {
    uVar5 = 0;
  }
  param_1 = (long *)*param_1;
  lVar6 = *param_1 + 0x7b0;
  plStack_180 = plVar10;
  plStack_178 = plVar8;
  FUN_109d678e8(lVar6,uVar5,0);
  FUN_109d94e24();
  alStack_170[0] = lVar6;
  FUN_109d974c0(param_1,&plStack_180,3,0,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (alStack_170[0] < 0) {
    __ZdlPv(plStack_180);
  }
  if (cStack_1a1 < '\0') {
    __ZdlPv(alStack_1b8[0]);
  }
  __Unwind_Resume();
  if ((param_1 != (long *)0x0) && (lVar6 = param_1[0x11], lVar6 != 0)) {
    lVar9 = param_1[2];
    do {
      lVar7 = lVar9;
      if (*(char *)(lVar7 + 4) != '\x13') break;
      lVar9 = *(long *)(lVar7 + 0x30);
    } while (*(long *)(lVar7 + 0x30) != 0);
    if (((lVar7 != lVar6) && (lVar9 = param_1[3], lVar9 != 0)) &&
       (uVar1 = *(uint *)(lVar6 + 0x10), uVar1 != 0)) {
      plVar8 = (long *)0x0;
      plVar10 = (long *)(*(long *)(lVar6 + 0x30) + 8);
      do {
        lVar6 = *plVar10;
        if ((lVar6 != 0) && (_strcmp(lVar6,lVar9), (int)lVar6 == 0)) {
          return plVar8;
        }
        plVar8 = (long *)((long)plVar8 + 1);
        plVar10 = plVar10 + 6;
      } while ((long *)(ulong)uVar1 != plVar8);
    }
  }
  return (long *)0xffffffff;
}



/* Entry: 109faa210; end: 109faa2a3;  */

ulong FUN_109faa210(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x88), lVar2 != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      lVar3 = lVar5;
      if (*(char *)(lVar3 + 4) != '\x13') break;
      lVar5 = *(long *)(lVar3 + 0x30);
    } while (*(long *)(lVar3 + 0x30) != 0);
    if (((lVar3 != lVar2) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) &&
       (uVar1 = *(uint *)(lVar2 + 0x10), uVar1 != 0)) {
      uVar4 = 0;
      plVar6 = (long *)(*(long *)(lVar2 + 0x30) + 8);
      do {
        lVar2 = *plVar6;
        if ((lVar2 != 0) && (_strcmp(lVar2,lVar5), (int)lVar2 == 0)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        plVar6 = plVar6 + 6;
      } while (uVar1 != uVar4);
    }
  }
  return 0xffffffff;
}



/* Entry: 109faa2a4; end: 109faa36f;  */

long * FUN_109faa2a4(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109faa370; end: 109faa3eb;  */

long * FUN_109faa370(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109faa3ec; end: 109faa4cf;  */

long FUN_109faa3ec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109faa4d0; end: 109faa5c7;  */

long * FUN_109faa4d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109faa5c8; end: 109faa6b3;  */

long * FUN_109faa5c8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 uStack_58;
  
  plVar2 = (long *)param_1[9];
  (**(code **)(*plVar2 + 0x40))();
  if (plVar2 == (long *)0x0) {
    uStack_58 = 0x101;
    FUN_109d368f4(param_2,param_3,param_4,param_5,auStack_78,0);
    *(byte *)((long)param_2 + 0x11) = *(byte *)((long)param_2 + 0x11) | 2;
    (**(code **)(*(long *)param_1[10] + 0x10))
              ((long *)param_1[10],param_2,param_6,param_1[6],param_1[7]);
    plVar2 = param_2;
    if (*(uint *)(param_1 + 1) != 0) {
      puVar3 = (undefined4 *)*param_1;
      puVar1 = puVar3 + (ulong)*(uint *)(param_1 + 1) * 4;
      do {
        FUN_109d97dec(param_2,*puVar3,*(undefined8 *)(puVar3 + 2));
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar1);
    }
  }
  return plVar2;
}



/* Entry: 109faa6b4; end: 109faa6e7;  */

void FUN_109faa6b4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109faa6e8; end: 109faa7cb;  */

long FUN_109faa6e8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109faa7cc; end: 109faa893;  */

long * FUN_109faa7cc(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)param_1[0x30];
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)*param_1;
    uVar8 = 0;
    plVar7 = (long *)(*plVar2 + 0x108);
    FUN_109d956b4(plVar7,&DAT_10f33a2d8,5);
    lStack_40 = *plVar7;
    if ((uVar8 & 1) != 0) {
      *(long *)(lStack_40 + 0x10) = lStack_40;
    }
    lStack_40 = lStack_40 + 8;
    uStack_38 = param_1[2];
    lVar3 = *(long *)*param_1 + 0x7b0;
    FUN_109d678e8(lVar3,0,0);
    FUN_109d94e24();
    lStack_30 = lVar3;
    FUN_109d974c0(plVar2,&lStack_40,3,0,1);
    param_1[0x30] = (ulong)plVar2;
    param_2 = (undefined1 *)plVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar4 = plVar2;
  func_0x000107c31944();
  plVar7 = (long *)plVar2[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)(uVar8 & (ulong)plVar4);
    }
    else {
      plVar9 = plVar4;
      if (plVar7 <= plVar4) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)plVar4 - uVar1 * (long)plVar7);
      }
    }
    plVar5 = *(long **)(*plVar2 + (long)plVar9 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar4) {
          plVar6 = plVar2;
          func_0x000104c4fbc4(plVar2,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar8);
          }
          else if (plVar7 <= plVar6) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar7;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
          }
          if (plVar6 != plVar9) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109faa894; end: 109faa977;  */

long FUN_109faa894(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109faa978; end: 109faad73;  */

long * FUN_109faa978(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_109faac78;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_109faab00:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109faad4c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_109faab00;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_109faac78:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109faad74; end: 109faada7;  */

void FUN_109faad74(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109faada8; end: 109faaebb;  */

long * FUN_109faada8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109faaebc; end: 109fab017;  */

long ******* FUN_109faaebc(undefined8 *param_1)

{
  long *******ppppppplVar1;
  long lVar2;
  long *******ppppppplVar3;
  long ******pppppplVar4;
  ulong uVar5;
  long *****ppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  undefined8 uVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long ******unaff_x22;
  undefined1 auStack_148 [24];
  long *****ppppplStack_130;
  long ****pppplStack_128;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long ****pppplStack_100;
  long ******pppppplStack_f8;
  char *pcStack_f0;
  undefined2 uStack_e0;
  long ******apppppplStack_d8 [2];
  char cStack_c1;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *****ppppplStack_50;
  long ****pppplStack_48;
  long *plStack_40;
  long lStack_38;
  
  pppppplVar14 = &ppppplStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar15 = (long *****)*param_1;
  uVar5 = 0;
  pppplVar13 = *ppppplVar15 + 0x21;
  FUN_109d956b4(pppplVar13,&UNK_10f62b014,0x11);
  ppplVar12 = *pppplVar13;
  if ((uVar5 & 1) != 0) {
    ppplVar12[2] = (long **)ppplVar12;
  }
  ppppplStack_50 = (long *****)(ppplVar12 + 1);
  pppplStack_48 = (long ****)param_1[2];
  lVar2 = *(long *)*param_1 + 0x7b0;
  FUN_109d678e8(lVar2,0,0);
  FUN_109d94e24();
  plStack_40 = (long *)lVar2;
  FUN_109d974c0(ppppplVar15,&ppppplStack_50,3,0,1);
  plVar16 = (long *)*param_1;
  lVar2 = *plVar16 + 0x7b0;
  ppppplStack_50 = ppppplVar15;
  pppplStack_48 = (long ****)ppppplVar15;
  FUN_109d678e8(lVar2,0,0);
  FUN_109d94e24();
  plStack_40 = (long *)lVar2;
  FUN_109d974c0(plVar16,&ppppplStack_50,3,0,1);
  ppppppplVar17 = (long *******)*param_1;
  pppppplVar9 = *ppppppplVar17 + 0xf6;
  FUN_109d678e8(pppppplVar9,0,0);
  FUN_109d94e24();
  lVar2 = *(long *)*param_1 + 0x7b0;
  ppppplStack_50 = (long *****)pppppplVar9;
  FUN_109d678e8(lVar2,8,0);
  FUN_109d94e24();
  ppppppplVar7 = (long *******)0x3;
  pppppplVar9 = (long ******)0x0;
  uVar11 = 1;
  pppplStack_48 = (long ****)lVar2;
  plStack_40 = plVar16;
  FUN_109d974c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppppplVar17;
  }
  ___stack_chk_fail();
  ppppplStack_c0 = &pppplStack_100;
  pcStack_58 = FUN_109fab018;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = 0x305;
  pcStack_f0 = ":";
  uStack_a0 = 0x502;
  ppppppplVar8 = ppppppplVar7;
  pppppplVar10 = pppppplVar9;
  pppplStack_100 = (long ****)pppppplVar14;
  pppppplStack_f8 = (long ******)ppppppplVar7;
  ppppplStack_b0 = (long *****)pppppplVar9;
  uStack_a8 = uVar11;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_109e04498(apppppplStack_d8,&ppppplStack_c0);
  ppppppplVar3 = ppppppplVar17 + 0x2b;
  ppppppplVar1 = apppppplStack_d8;
  FUN_109faa894();
  if (ppppppplVar3 == (long *******)0x0) {
    unaff_x22 = *ppppppplVar17;
    ppppplVar15 = *unaff_x22 + 0x21;
    FUN_109d956b4(ppppplVar15,pppppplVar9,uVar11);
    pppplVar13 = *ppppplVar15;
    if (((ulong)pppppplVar9 & 1) != 0) {
      pppplVar13[2] = (long ***)pppplVar13;
    }
    ppppplStack_c0 = (long *****)(pppplVar13 + 1);
    ppppplStack_b8 = (long *****)ppppppplVar17[2];
    ppppplVar15 = **ppppppplVar17 + 0xf6;
    FUN_109d678e8(ppppplVar15,0,0);
    FUN_109d94e24();
    ppppplStack_b0 = ppppplVar15;
    FUN_109d974c0(unaff_x22,&ppppplStack_c0,3,0,1);
    pppppplVar9 = *ppppppplVar17;
    ppppplVar15 = *pppppplVar9 + 0x21;
    ppppplVar6 = (long *****)pppppplVar14;
    FUN_109d956b4(ppppplVar15,pppppplVar14,ppppppplVar7);
    pppplVar13 = *ppppplVar15;
    if (((ulong)ppppplVar6 & 1) != 0) {
      pppplVar13[2] = (long ***)pppplVar13;
    }
    ppppplStack_c0 = (long *****)(pppplVar13 + 1);
    ppppplVar15 = **ppppppplVar17 + 0xf6;
    ppppplStack_b8 = (long *****)unaff_x22;
    FUN_109d678e8(ppppplVar15,0,0);
    FUN_109d94e24();
    ppppplStack_b0 = ppppplVar15;
    FUN_109d974c0(pppppplVar9,&ppppplStack_c0,3,0,1);
    ppppppplVar7 = (long *******)*ppppppplVar17;
    pppppplVar4 = *ppppppplVar7 + 0xf6;
    ppppplStack_c0 = (long *****)pppppplVar9;
    ppppplStack_b8 = (long *****)unaff_x22;
    FUN_109d678e8(pppppplVar4,0,0);
    FUN_109d94e24();
    pppppplVar10 = (long ******)0x0;
    ppppplStack_b0 = (long *****)pppppplVar4;
    FUN_109d974c0(ppppppplVar7,&ppppplStack_c0,3,0,1);
    ppppppplVar3 = ppppppplVar17 + 0x2b;
    ppppppplVar1 = apppppplStack_d8;
    ppppppplVar8 = apppppplStack_d8;
    FUN_109faa978();
    ppppppplVar3[5] = (long ******)ppppppplVar7;
  }
  else {
    ppppppplVar7 = (long *******)ppppppplVar3[5];
  }
  if (cStack_c1 < '\0') {
    ppppppplVar3 = (long *******)apppppplStack_d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return ppppppplVar7;
  }
  ___stack_chk_fail();
  if (cStack_c1 < '\0') {
    __ZdlPv(apppppplStack_d8[0]);
  }
  ppppppplVar17 = ppppppplVar3;
  __Unwind_Resume();
  ppuStack_110 = &puStack_60;
  if (*(char *)((long)ppppppplVar17 + 100) == '\x01') {
    pcStack_108 = FUN_109fab240;
    pppppplStack_120 = (long ******)0x0;
    FUN_109d8a2ac();
    return ppppppplVar17;
  }
  pcStack_108 = FUN_109fab240;
  if ((long *******)*ppppppplVar1 != ppppppplVar8) {
    pppppplStack_120 = (long ******)ppppppplVar7;
    pppppplStack_118 = (long ******)ppppppplVar3;
    if (*(byte *)(ppppppplVar1 + 2) < 0x15) {
      ppppppplVar1 = (long *******)ppppppplVar17[9];
      (*(code *)(*ppppppplVar1)[0xf])();
      if (ppppppplVar1 != (long *******)0x0 && 0x1b < *(byte *)(ppppppplVar1 + 2)) {
        ppppplStack_130 = (long *****)unaff_x22;
        pppplStack_128 = (long ****)pppppplVar14;
        (*(code *)(*ppppppplVar17[10])[2])
                  (ppppppplVar17[10],ppppppplVar1,pppppplVar10,ppppppplVar17[6],ppppppplVar17[7]);
        if (*(uint *)(ppppppplVar17 + 1) != 0) {
          pppppplVar14 = *ppppppplVar17;
          pppppplVar9 = pppppplVar14 + (ulong)*(uint *)(ppppppplVar17 + 1) * 2;
          do {
            FUN_109d97dec(ppppppplVar1,*(undefined4 *)pppppplVar14,pppppplVar14[1]);
            pppppplVar14 = pppppplVar14 + 2;
          } while (pppppplVar14 != pppppplVar9);
        }
        return ppppppplVar1;
      }
    }
    else {
      pppplStack_128 = (long ****)CONCAT62(pppplStack_128._2_6_,0x101);
      uVar11 = 0x2a;
      FUN_109d8cd3c(0x2a,ppppppplVar1,ppppppplVar8,auStack_148,0);
      FUN_109d337dc(ppppppplVar17,uVar11,pppppplVar10);
      ppppppplVar1 = ppppppplVar17;
    }
  }
  return ppppppplVar1;
}



/* Entry: 109fab018; end: 109fab23f;  */

long *****
FUN_109fab018(undefined8 *param_1,ulong param_2,long *****param_3,long ****param_4,
             undefined8 param_5)

{
  long *****ppppplVar1;
  undefined8 uVar2;
  long *****ppppplVar3;
  long *plVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  ulong uVar7;
  long *****ppppplVar8;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *unaff_x22;
  long *plVar12;
  undefined1 auStack_f8 [24];
  long *plStack_e0;
  ulong uStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  long ****pppplStack_a8;
  char *pcStack_a0;
  undefined2 uStack_90;
  long ****apppplStack_88 [2];
  char cStack_71;
  long *plStack_70;
  long *plStack_68;
  long ***ppplStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  long lStack_48;
  
  plStack_70 = (long *)&uStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0x305;
  pcStack_a0 = ":";
  uStack_50 = 0x502;
  ppppplVar8 = param_3;
  pppplVar10 = param_4;
  uStack_b0 = param_2;
  pppplStack_a8 = (long ****)param_3;
  ppplStack_60 = (long ***)param_4;
  uStack_58 = param_5;
  FUN_109e04498(apppplStack_88,&plStack_70);
  ppppplVar3 = (long *****)(param_1 + 0x2b);
  ppppplVar1 = apppplStack_88;
  FUN_109faa894();
  if (ppppplVar3 == (long *****)0x0) {
    unaff_x22 = (long *)*param_1;
    plVar4 = (long *)(*unaff_x22 + 0x108);
    FUN_109d956b4(plVar4,param_4,param_5);
    lVar9 = *plVar4;
    if (((ulong)param_4 & 1) != 0) {
      *(long *)(lVar9 + 0x10) = lVar9;
    }
    plStack_70 = (long *)(lVar9 + 8);
    plStack_68 = (long *)param_1[2];
    lVar9 = *(long *)*param_1 + 0x7b0;
    FUN_109d678e8(lVar9,0,0);
    FUN_109d94e24();
    ppplStack_60 = (long ***)lVar9;
    FUN_109d974c0(unaff_x22,&plStack_70,3,0,1);
    plVar12 = (long *)*param_1;
    plVar4 = (long *)(*plVar12 + 0x108);
    uVar7 = param_2;
    FUN_109d956b4(plVar4,param_2,param_3);
    lVar9 = *plVar4;
    if ((uVar7 & 1) != 0) {
      *(long *)(lVar9 + 0x10) = lVar9;
    }
    plStack_70 = (long *)(lVar9 + 8);
    lVar9 = *(long *)*param_1 + 0x7b0;
    plStack_68 = unaff_x22;
    FUN_109d678e8(lVar9,0,0);
    FUN_109d94e24();
    ppplStack_60 = (long ***)lVar9;
    FUN_109d974c0(plVar12,&plStack_70,3,0,1);
    ppppplVar11 = (long *****)*param_1;
    pppplVar5 = *ppppplVar11 + 0xf6;
    plStack_70 = plVar12;
    plStack_68 = unaff_x22;
    FUN_109d678e8(pppplVar5,0,0);
    FUN_109d94e24();
    pppplVar10 = (long ****)0x0;
    ppplStack_60 = (long ***)pppplVar5;
    FUN_109d974c0(ppppplVar11,&plStack_70,3,0,1);
    ppppplVar3 = (long *****)(param_1 + 0x2b);
    ppppplVar1 = apppplStack_88;
    ppppplVar8 = apppplStack_88;
    FUN_109faa978();
    ppppplVar3[5] = (long ****)ppppplVar11;
  }
  else {
    ppppplVar11 = (long *****)ppppplVar3[5];
  }
  if (cStack_71 < '\0') {
    ppppplVar3 = (long *****)apppplStack_88[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar11;
  }
  ___stack_chk_fail();
  if (cStack_71 < '\0') {
    __ZdlPv(apppplStack_88[0]);
  }
  ppppplVar6 = ppppplVar3;
  __Unwind_Resume();
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppppplVar6 + 100) == '\x01') {
    pcStack_b8 = FUN_109fab240;
    pppplStack_d0 = (long ****)0x0;
    FUN_109d8a2ac();
    return ppppplVar6;
  }
  pcStack_b8 = FUN_109fab240;
  if ((long *****)*ppppplVar1 != ppppplVar8) {
    pppplStack_d0 = (long ****)ppppplVar11;
    pppplStack_c8 = (long ****)ppppplVar3;
    if (*(byte *)(ppppplVar1 + 2) < 0x15) {
      ppppplVar1 = (long *****)ppppplVar6[9];
      (*(code *)(*ppppplVar1)[0xf])();
      if (ppppplVar1 != (long *****)0x0 && 0x1b < *(byte *)(ppppplVar1 + 2)) {
        plStack_e0 = unaff_x22;
        uStack_d8 = param_2;
        (*(code *)(*ppppplVar6[10])[2])
                  (ppppplVar6[10],ppppplVar1,pppplVar10,ppppplVar6[6],ppppplVar6[7]);
        if (*(uint *)(ppppplVar6 + 1) != 0) {
          pppplVar10 = *ppppplVar6;
          pppplVar5 = pppplVar10 + (ulong)*(uint *)(ppppplVar6 + 1) * 2;
          do {
            FUN_109d97dec(ppppplVar1,*(undefined4 *)pppplVar10,pppplVar10[1]);
            pppplVar10 = pppplVar10 + 2;
          } while (pppplVar10 != pppplVar5);
        }
        return ppppplVar1;
      }
    }
    else {
      uStack_d8 = CONCAT62(uStack_d8._2_6_,0x101);
      uVar2 = 0x2a;
      FUN_109d8cd3c(0x2a,ppppplVar1,ppppplVar8,auStack_f8,0);
      FUN_109d337dc(ppppplVar6,uVar2,pppplVar10);
      ppppplVar1 = ppppplVar6;
    }
  }
  return ppppplVar1;
}



/* Entry: 109fab240; end: 109fab327;  */

long * FUN_109fab240(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)((long)param_1 + 100) == '\x01') {
    FUN_109d8a2ac(param_1,0x5d,param_2,param_3,0,param_4,0,0);
    return param_1;
  }
  if (*param_2 != param_3) {
    if (*(byte *)(param_2 + 2) < 0x15) {
      param_2 = (long *)param_1[9];
      (**(code **)(*param_2 + 0x78))();
      if (param_2 != (long *)0x0 && 0x1b < *(byte *)(param_2 + 2)) {
        (**(code **)(*(long *)param_1[10] + 0x10))
                  ((long *)param_1[10],param_2,param_4,param_1[6],param_1[7]);
        if (*(uint *)(param_1 + 1) != 0) {
          puVar3 = (undefined4 *)*param_1;
          puVar1 = puVar3 + (ulong)*(uint *)(param_1 + 1) * 4;
          do {
            FUN_109d97dec(param_2,*puVar3,*(undefined8 *)(puVar3 + 2));
            puVar3 = puVar3 + 4;
          } while (puVar3 != puVar1);
        }
        return param_2;
      }
    }
    else {
      uVar2 = 0x2a;
      FUN_109d8cd3c(0x2a,param_2,param_3,auStack_48,0);
      FUN_109d337dc(param_1,uVar2,param_4);
      param_2 = param_1;
    }
  }
  return param_2;
}



/* Entry: 109fab328; end: 109fab3a7;  */

void FUN_109fab328(long *param_1,long param_2)

{
  uint uVar1;
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x400000000;
  if (*(char *)(param_2 + 0x54) != '\0') {
    uVar1 = 0;
    do {
      FUN_109d3785c(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_2 + 0x54));
  }
  return;
}



/* Entry: 109fab3a8; end: 109fab403;  */

long * FUN_109fab3a8(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x800000000;
  func_0x000109d374a0(param_1,param_2,param_2 + param_3 * 8);
  return param_1;
}



/* Entry: 109fab404; end: 109fab45f;  */

long * FUN_109fab404(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x800000000;
  FUN_109d37910(param_1,param_2,param_2 + param_3 * 8);
  return param_1;
}



/* Entry: 109fab460; end: 109fab817;  */

long * FUN_109fab460(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[3] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_109fab5c0:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109fab804);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_109fab5c0;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_109fab79c;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_109fab79c:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 109fab818; end: 109fab82b;  */

undefined1  [16] FUN_109fab818(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar11 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar11 < (long *)0xaaaaaaaaaaaaaab) {
    lVar4 = (long)plVar11 * 0x18;
    __Znwm(lVar4);
    auVar13._8_8_ = plVar11;
    auVar13._0_8_ = lVar4;
    return auVar13;
  }
  func_0x000104c4f740();
  uVar7 = plVar11[1];
  if (uVar7 != 0) {
    uVar8 = param_2 & 0xffffffff;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    uVar5 = (uint)param_2;
    if ((uVar7 & uVar9) == 0) {
      uVar10 = uVar6 - 1 & uVar8;
    }
    else {
      uVar10 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar10 = (ulong)(uVar5 - uVar1 * uVar6);
      }
    }
    plVar11 = *(long **)(*plVar11 + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar12 = plVar11[1];
        if (uVar12 == uVar8) {
          if (*(uint *)(plVar11 + 2) == uVar5) break;
        }
        else {
          if ((uVar7 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar10) goto LAB_109fab90c;
        }
      }
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
  }
LAB_109fab90c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 109fab82c; end: 109fab86f;  */

undefined1  [16] FUN_109fab82c(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_1 < (long *)0xaaaaaaaaaaaaaab) {
    lVar4 = (long)param_1 * 0x18;
    __Znwm(lVar4);
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = lVar4;
    return auVar13;
  }
  func_0x000104c4f740();
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = param_2 & 0xffffffff;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    uVar5 = (uint)param_2;
    if ((uVar7 & uVar9) == 0) {
      uVar10 = uVar6 - 1 & uVar8;
    }
    else {
      uVar10 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar10 = (ulong)(uVar5 - uVar1 * uVar6);
      }
    }
    plVar11 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar12 = plVar11[1];
        if (uVar12 == uVar8) {
          if (*(uint *)(plVar11 + 2) == uVar5) break;
        }
        else {
          if ((uVar7 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar10) goto LAB_109fab90c;
        }
      }
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
  }
LAB_109fab90c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 109fab870; end: 109fab913;  */

long * FUN_109fab870(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (ulong)param_2;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109fab914; end: 109fab97f;  */

undefined8 FUN_109fab914(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(long *)param_1[10] + 0x10))();
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 4;
    do {
      FUN_109d97dec(param_2,*puVar2,*(undefined8 *)(puVar2 + 2));
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  return param_2;
}



/* Entry: 109fab980; end: 109faba1b;  */

long * FUN_109fab980(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = (uint)param_2;
  if (param_2 != 0) {
    uVar4 = (ulong)param_3;
    uVar5 = param_2 - 1;
    if ((param_2 & uVar5) == 0) {
      uVar6 = (ulong)(uVar3 - 1 & param_3);
    }
    else {
      uVar6 = uVar4;
      if (param_2 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
        uVar6 = (ulong)(param_3 - uVar1 * uVar3);
      }
    }
    plVar7 = *(long **)(param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_3) {
            return plVar7;
          }
        }
        else {
          if ((param_2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (param_2 <= uVar8) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar2 * param_2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109faba1c; end: 109faba87;  */

undefined8 FUN_109faba1c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(long *)param_1[10] + 0x10))();
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 4;
    do {
      FUN_109d97dec(param_2,*puVar2,*(undefined8 *)(puVar2 + 2));
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  return param_2;
}



/* Entry: 109faba88; end: 109fabb5f;  */

long * FUN_109faba88(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109fabb60; end: 109fad783;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_109fabb60(long *******param_1,long *******param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long ***ppplVar5;
  long *******ppppppplVar6;
  long *****ppppplVar7;
  long *******ppppppplVar9;
  long *plVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  undefined *puVar13;
  char cVar14;
  uint uVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long ******pppppplVar20;
  long lVar21;
  ulong uVar22;
  long *******ppppppplVar23;
  ulong unaff_x20;
  long *****ppppplVar24;
  ulong uVar25;
  long ******pppppplVar26;
  long ***ppplVar27;
  long *plVar28;
  long ***ppplVar29;
  long **pplVar30;
  long *****ppppplVar31;
  long lVar32;
  long lVar33;
  long ******pppppplVar34;
  long *******ppppppplStack_410;
  ulong uStack_408;
  undefined7 uStack_400;
  byte bStack_3f9;
  undefined1 uStack_3f1;
  ulong uStack_3f0;
  long *******ppppppplStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  long *******ppppppplStack_3d0;
  long ******pppppplStack_3c8;
  long *******ppppppplStack_3c0;
  long ******pppppplStack_3b8;
  uint uStack_3ac;
  long ******pppppplStack_3a8;
  long *******ppppppplStack_3a0;
  long *****ppppplStack_398;
  long *****ppppplStack_390;
  long lStack_388;
  long *****ppppplStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  long ****pppplStack_368;
  undefined8 uStack_360;
  long *******ppppppplStack_350;
  long ******pppppplStack_348;
  undefined8 uStack_340;
  long *******ppppppplStack_330;
  long ******pppppplStack_328;
  undefined8 uStack_320;
  long *****ppppplStack_318;
  long *****ppppplStack_310;
  long ******pppppplStack_308;
  long ******pppppplStack_300;
  long *****ppppplStack_2f8;
  long ******pppppplStack_2f0;
  long ******pppppplStack_2e8;
  long ******pppppplStack_2e0;
  long *****ppppplStack_2d8;
  long ******pppppplStack_2d0;
  long *****ppppplStack_2c8;
  long ******pppppplStack_2c0;
  long ****pppplStack_2b8;
  long ******pppppplStack_2b0;
  long ****pppplStack_2a8;
  long *******ppppppplStack_2a0;
  undefined8 uStack_298;
  long ******apppppplStack_290 [32];
  long *******ppppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long ******pppppplStack_168;
  long ******pppppplStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  long ****pppplStack_148;
  long lStack_80;
  long ***ppplVar8;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar34 = param_1[1];
  ppppppplStack_3c0 = apppppplStack_290;
  uStack_298 = 0x2000000000;
  ppppplVar31 = pppppplVar34[0xe4];
  ppppplVar24 = pppppplVar34[0xe5];
  ppppppplStack_2a0 = ppppppplStack_3c0;
  if (ppppplVar31 == ppppplVar24) {
    ppppppplVar23 = (long *******)0x0;
  }
  else {
    lStack_388 = 0;
    ppppppplVar23 = &pppppplStack_180;
    pppppplStack_3a8 = pppppplVar34 + 0xc2;
    ppppppplStack_3a0 = &pppppplStack_180;
    uStack_3ac = (uint)param_2;
    ppppppplVar9 = param_1;
    ppppppplStack_3d0 = ppppppplVar23;
    pppppplStack_3b8 = pppppplVar34;
    ppppplStack_398 = ppppplVar24;
    ppppppplStack_378 = param_1;
    do {
      param_1 = (long *******)(pppppplVar34 + 0x6b);
      FUN_109f9ca04(param_1,ppppplVar31);
      if ((int)param_1 == (int)param_2) {
        iVar4 = *(int *)(ppppplVar31 + 4);
        if (iVar4 < 4) {
          if (iVar4 != 1) {
            if (iVar4 == 2) {
              if (ppppplVar31[1] != (long ****)0x0) {
                ppplVar5 = ppppplVar31[1][0x11];
                param_1 = (long *******)0x0;
                if (ppplVar5 != (long ***)0x0) {
                  if ((*(byte *)((long)ppplVar5 + 0xc) >> 1 & 1) == 0) {
                    FUN_109eca058();
                  }
                  else {
                    ppplVar5 = (long ***)(&UNK_10e05bf38 + (long)ppplVar5[3]);
                  }
                  func_0x000107c31940(&ppppppplStack_190,ppplVar5);
                  ppppppplVar9 = (long *******)&ppppppplStack_190;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppppplVar9,&DAT_10f62bbec,1);
                  pppppplStack_348 = ppppppplVar9[1];
                  ppppppplStack_350 = (long *******)*ppppppplVar9;
                  uStack_340 = ppppppplVar9[2];
                  ppppppplVar9[1] = (long ******)0x0;
                  ppppppplVar9[2] = (long ******)0x0;
                  *ppppppplVar9 = (long ******)0x0;
                  if ((long)pppppplStack_180 < 0) {
                    __ZdlPv(ppppppplStack_190);
                  }
                  pppplVar16 = ppppplVar31[1];
                  if (pppplVar16[2] == pppplVar16[0x11]) {
                    ppplVar5 = pppplVar16[3];
                  }
                  ppplVar27 = (long ***)&UNK_10f62bbee;
                  if (ppplVar5 != (long ***)0x0) {
                    ppplVar27 = ppplVar5;
                  }
                  func_0x000107c31940(&ppppppplStack_370,ppplVar27);
                  ppplVar5 = ppppplVar31[1][0x11];
                  uVar25 = (ulong)*(uint *)(ppplVar5 + 2);
                  if (*(uint *)(ppplVar5 + 2) == 0) {
                    unaff_x20 = 0;
                    uVar22 = 1;
                  }
                  else {
                    unaff_x20 = 0;
                    uVar22 = 1;
                    pplVar30 = ppplVar5[6];
                    do {
                      plVar28 = *pplVar30;
                      if (2 < *(byte *)((long)plVar28 + 4) - 0xd) {
                        plVar10 = plVar28;
                        FUN_109f48594();
                        uVar18 = (ulong)plVar10 & 0xffffffff;
                        if (uVar22 <= ((ulong)plVar10 & 0xffffffff)) {
                          uVar22 = uVar18;
                        }
                        if ((int)plVar10 != 0) {
                          uVar3 = 0;
                          if (uVar18 != 0) {
                            uVar3 = ((unaff_x20 + uVar18) - 1) / uVar18;
                          }
                          unaff_x20 = uVar3 * uVar18;
                        }
                        FUN_109f48674();
                        unaff_x20 = unaff_x20 + ((ulong)plVar28 & 0xffffffff);
                      }
                      uVar25 = uVar25 - 1;
                      pplVar30 = pplVar30 + 6;
                    } while (uVar25 != 0);
                  }
                  ppppppplVar9 = ppppppplStack_378;
                  ppppppplVar11 = ppppppplStack_378;
                  FUN_109fada04(ppppppplStack_378,ppplVar5);
                  ppppppplVar6 = (long *******)(**ppppppplVar9 + 0xf3);
                  FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
                  ppppplVar24 = ppppplStack_398;
                  FUN_109d94e24();
                  pppppplStack_328 = ppppppplVar9[10];
                  uStack_320 = ppppppplVar9[0xd];
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  ppppppplStack_330 = ppppppplVar6;
                  FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
                  FUN_109d94e24();
                  ppppplVar12 = **ppppppplVar9 + 0xf3;
                  ppppplStack_318 = ppppplVar7;
                  FUN_109d678e8(ppppplVar12,1,0);
                  FUN_109d94e24();
                  pppppplStack_308 = ppppppplVar9[0x13];
                  pppppplStack_300 = ppppppplVar9[0x15];
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  ppppplStack_310 = ppppplVar12;
                  FUN_109d678e8(ppppplVar7,2,0);
                  FUN_109d94e24();
                  ppppplStack_2f8 = ppppplVar7;
                  FUN_109fadd4c(&ppppppplStack_190,&ppppppplStack_330,8);
                  if (ppppppplVar11 != (long *******)0x0) {
                    func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x12]);
                    func_0x000109d33e60(&ppppppplStack_190,ppppppplVar11);
                  }
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x10]);
                  iVar4 = 0;
                  if (uVar22 != 0) {
                    iVar4 = (int)(((unaff_x20 + uVar22) - 1) / uVar22);
                  }
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  FUN_109d678e8(ppppplVar7,(long)(iVar4 * (int)uVar22),0);
                  FUN_109d94e24();
                  func_0x000109d33e60(&ppppppplStack_190,ppppplVar7);
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x11]);
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  FUN_109d678e8(ppppplVar7,(long)(int)uVar22,0);
                  FUN_109d94e24();
                  func_0x000109d33e60(&ppppppplStack_190,ppppplVar7);
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0xe]);
                  ppppppplVar6 = ppppppplStack_350;
                  if (-1 < (long)uStack_340._7_1_) {
                    ppppppplVar6 = (long *******)&ppppppplStack_350;
                  }
                  pppppplVar26 = pppppplStack_348;
                  if (-1 < (long)uStack_340) {
                    pppppplVar26 = (long ******)(long)uStack_340._7_1_;
                  }
                  ppppplVar7 = **ppppppplVar9 + 0x21;
                  FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar26);
                  pppplVar16 = *ppppplVar7;
                  if (((ulong)ppppppplVar6 & 1) != 0) {
                    pppplVar16[2] = (long ***)pppplVar16;
                  }
                  func_0x000109d33e60(&ppppppplStack_190,pppplVar16 + 1);
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0xf]);
                  ppppppplVar6 = ppppppplStack_370;
                  if (-1 < (long)uStack_360._7_1_) {
                    ppppppplVar6 = (long *******)&ppppppplStack_370;
                  }
                  pppplVar16 = pppplStack_368;
                  if (-1 < (long)uStack_360) {
                    pppplVar16 = (long ****)(long)uStack_360._7_1_;
                  }
                  ppppplVar7 = **ppppppplVar9 + 0x21;
                  FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
                  pppplVar16 = *ppppplVar7;
                  if (((ulong)ppppppplVar6 & 1) != 0) {
                    pppplVar16[2] = (long ***)pppplVar16;
                  }
                  func_0x000109d33e60(&ppppppplStack_190,pppplVar16 + 1);
                  pppppplVar26 = *ppppppplVar9;
                  FUN_109d974c0(pppppplVar26,ppppppplStack_190,(ulong)pppppplStack_188 & 0xffffffff,
                                0,1);
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
                  FUN_109d94e24();
                  func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  FUN_109d678e8(ppppplVar7,8,0);
                  FUN_109d94e24();
                  func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                  ppppplVar7 = **ppppppplVar9 + 0xf3;
                  FUN_109d678e8(ppppplVar7,0,0);
                  FUN_109d94e24();
                  func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                  ppppppplVar6 = ppppppplStack_350;
                  if (-1 < (long)uStack_340._7_1_) {
                    ppppppplVar6 = (long *******)&ppppppplStack_350;
                  }
                  pppppplVar20 = pppppplStack_348;
                  if (-1 < (long)uStack_340) {
                    pppppplVar20 = (long ******)(long)uStack_340._7_1_;
                  }
                  ppppplVar7 = **ppppppplVar9 + 0x21;
                  FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
                  pppplVar16 = *ppppplVar7;
                  if (((ulong)ppppppplVar6 & 1) != 0) {
                    pppplVar16[2] = (long ***)pppplVar16;
                  }
                  func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                  ppppppplVar6 = ppppppplStack_370;
                  if (-1 < (long)uStack_360._7_1_) {
                    ppppppplVar6 = (long *******)&ppppppplStack_370;
                  }
                  pppplVar16 = pppplStack_368;
                  if (-1 < (long)uStack_360) {
                    pppplVar16 = (long ****)(long)uStack_360._7_1_;
                  }
                  ppppplVar7 = **ppppppplVar9 + 0x21;
                  FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
                  pppplVar16 = *ppppplVar7;
                  if (((ulong)ppppppplVar6 & 1) != 0) {
                    pppplVar16[2] = (long ***)pppplVar16;
                  }
                  func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                  func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
                  func_0x000109d33e60(&ppppppplStack_2a0,pppppplVar26);
                  goto LAB_109fad558;
                }
              }
            }
            else if ((iVar4 == 3) && (ppppplVar31[1] != (long ****)0x0)) {
              ppplVar5 = ppppplVar31[1][0x11];
              param_1 = (long *******)0x0;
              if (ppplVar5 != (long ***)0x0) {
                if ((*(byte *)((long)ppplVar5 + 0xc) >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                else {
                  ppplVar5 = (long ***)(&UNK_10e05bf38 + (long)ppplVar5[3]);
                }
                func_0x000107c31940(&ppppppplStack_190,ppplVar5);
                ppppppplVar9 = (long *******)&ppppppplStack_190;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppplVar9,&DAT_10f62bbec,1);
                pppppplStack_348 = ppppppplVar9[1];
                ppppppplStack_350 = (long *******)*ppppppplVar9;
                uStack_340 = ppppppplVar9[2];
                ppppppplVar9[1] = (long ******)0x0;
                ppppppplVar9[2] = (long ******)0x0;
                *ppppppplVar9 = (long ******)0x0;
                if ((long)pppppplStack_180 < 0) {
                  __ZdlPv(ppppppplStack_190);
                }
                ppplVar5 = (long ***)&UNK_10f62bbf2;
                if (ppppplVar31[1][3] != (long ***)0x0) {
                  ppplVar5 = ppppplVar31[1][3];
                }
                func_0x000107c31940(&ppppppplStack_370,ppplVar5);
                ppplVar5 = ppppplVar31[1][0x11];
                uVar25 = (ulong)*(uint *)(ppplVar5 + 2);
                if (*(uint *)(ppplVar5 + 2) == 0) {
                  unaff_x20 = 0;
                  uVar22 = 1;
                }
                else {
                  unaff_x20 = 0;
                  uVar22 = 1;
                  pplVar30 = ppplVar5[6];
                  do {
                    plVar28 = *pplVar30;
                    if (2 < *(byte *)((long)plVar28 + 4) - 0xd) {
                      plVar10 = plVar28;
                      FUN_109f48594();
                      uVar18 = (ulong)plVar10 & 0xffffffff;
                      if (uVar22 <= ((ulong)plVar10 & 0xffffffff)) {
                        uVar22 = uVar18;
                      }
                      if ((int)plVar10 != 0) {
                        uVar3 = 0;
                        if (uVar18 != 0) {
                          uVar3 = ((unaff_x20 + uVar18) - 1) / uVar18;
                        }
                        unaff_x20 = uVar3 * uVar18;
                      }
                      FUN_109f48674();
                      unaff_x20 = unaff_x20 + ((ulong)plVar28 & 0xffffffff);
                    }
                    uVar25 = uVar25 - 1;
                    pplVar30 = pplVar30 + 6;
                  } while (uVar25 != 0);
                }
                ppppppplVar9 = ppppppplStack_378;
                ppppppplVar11 = ppppppplStack_378;
                FUN_109fada04(ppppppplStack_378,ppplVar5);
                ppppppplVar6 = (long *******)(**ppppppplVar9 + 0xf3);
                FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
                ppppplVar24 = ppppplStack_398;
                FUN_109d94e24();
                pppppplStack_328 = ppppppplVar9[10];
                uStack_320 = ppppppplVar9[0xd];
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                ppppppplStack_330 = ppppppplVar6;
                FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
                FUN_109d94e24();
                ppppplVar12 = **ppppppplVar9 + 0xf3;
                ppppplStack_318 = ppppplVar7;
                FUN_109d678e8(ppppplVar12,1,0);
                FUN_109d94e24();
                pppppplStack_300 = ppppppplVar9[0x15];
                pppppplStack_308 = ppppppplVar9[0x14];
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                ppppplStack_310 = ppppplVar12;
                FUN_109d678e8(ppppplVar7,1,0);
                FUN_109d94e24();
                ppppplStack_2f8 = ppppplVar7;
                FUN_109fadd4c(&ppppppplStack_190,&ppppppplStack_330,8);
                if (ppppppplVar11 != (long *******)0x0) {
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x12]);
                  func_0x000109d33e60(&ppppppplStack_190,ppppppplVar11);
                }
                func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x10]);
                iVar4 = 0;
                if (uVar22 != 0) {
                  iVar4 = (int)(((uVar22 + unaff_x20) - 1) / uVar22);
                }
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,(long)(iVar4 * (int)uVar22),0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_190,ppppplVar7);
                func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0x11]);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,(long)(int)uVar22,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_190,ppppplVar7);
                func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0xe]);
                ppppppplVar6 = ppppppplStack_350;
                if (-1 < (long)uStack_340._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_350;
                }
                pppppplVar26 = pppppplStack_348;
                if (-1 < (long)uStack_340) {
                  pppppplVar26 = (long ******)(long)uStack_340._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar26);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_190,pppplVar16 + 1);
                func_0x000109d33e60(&ppppppplStack_190,ppppppplVar9[0xf]);
                ppppppplVar6 = ppppppplStack_370;
                if (-1 < (long)uStack_360._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_370;
                }
                pppplVar16 = pppplStack_368;
                if (-1 < (long)uStack_360) {
                  pppplVar16 = (long ****)(long)uStack_360._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_190,pppplVar16 + 1);
                pppppplVar26 = *ppppppplVar9;
                FUN_109d974c0(pppppplVar26,ppppppplStack_190,(ulong)pppppplStack_188 & 0xffffffff,0,
                              1);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,8,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,0,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppppplVar6 = ppppppplStack_350;
                if (-1 < (long)uStack_340._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_350;
                }
                pppppplVar20 = pppppplStack_348;
                if (-1 < (long)uStack_340) {
                  pppppplVar20 = (long ******)(long)uStack_340._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                ppppppplVar6 = ppppppplStack_370;
                if (-1 < (long)uStack_360._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_370;
                }
                pppplVar16 = pppplStack_368;
                if (-1 < (long)uStack_360) {
                  pppplVar16 = (long ****)(long)uStack_360._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
                func_0x000109d33e60(&ppppppplStack_2a0,pppppplVar26);
LAB_109fad558:
                param_1 = ppppppplStack_190;
                if (ppppppplStack_190 != ppppppplVar23) {
                  _free();
                }
                ppppppplVar6 = ppppppplStack_350;
                pppppplVar26 = uStack_340;
                if ((long)uStack_360 < 0) {
                  param_1 = ppppppplStack_370;
                  __ZdlPv();
                  ppppppplVar6 = ppppppplStack_350;
                  pppppplVar26 = uStack_340;
                }
                goto joined_r0x000109faca60;
              }
            }
            goto LAB_109facd04;
          }
          if (*(char *)((long)ppppplVar31 + 0x3f) < '\0') {
            if (ppppplVar31[6] == (long ****)0x0) goto LAB_109fac274;
            func_0x000107c3192c(&ppppppplStack_370,ppppplVar31[5]);
          }
          else if (*(char *)((long)ppppplVar31 + 0x3f) == '\0') {
LAB_109fac274:
            func_0x000107c31940(&ppppppplStack_370,&UNK_10f62b5e4);
          }
          else {
            pppplStack_368 = ppppplVar31[6];
            ppppppplStack_370 = (long *******)ppppplVar31[5];
            uStack_360 = (long ******)ppppplVar31[7];
          }
          pppppplVar26 = pppppplStack_3a8;
          if (pppppplVar34[0xd6] != (long *****)0x0) {
            pppppplVar26 = pppppplVar34 + 0xd4;
            FUN_109f9ca74(pppppplVar26,&ppppppplStack_370);
          }
          ppppplVar24 = *pppppplVar26;
          ppppplVar7 = pppppplVar26[1];
          ppppplStack_390 = ppppplVar31;
          if (ppppplVar24 == ppppplVar7) {
            lVar32 = 0;
            unaff_x20 = 1;
          }
          else {
            lVar32 = 0;
            unaff_x20 = 1;
            do {
              ppplVar27 = (*ppppplVar24)[2];
              ppplVar5 = ppplVar27;
              FUN_109f48594();
              uVar25 = (ulong)ppplVar5 & 0xffffffff;
              if (unaff_x20 <= ((ulong)ppplVar5 & 0xffffffff)) {
                unaff_x20 = uVar25;
              }
              if ((int)ppplVar5 != 0) {
                uVar22 = 0;
                if (uVar25 != 0) {
                  uVar22 = ((lVar32 + uVar25) - 1) / uVar25;
                }
                lVar32 = uVar22 * uVar25;
              }
              FUN_109f48674(ppplVar27);
              lVar32 = lVar32 + ((ulong)ppplVar27 & 0xffffffff);
              ppppplVar24 = ppppplVar24 + 1;
            } while (ppppplVar24 != ppppplVar7);
          }
          pppppplVar20 = *ppppppplVar9;
          ppppppplVar6 = (long *******)(*pppppplVar20 + 0xf3);
          FUN_109d678e8(ppppppplVar6,0,0);
          ppppplVar24 = ppppplStack_398;
          FUN_109d94e24();
          pppppplStack_328 = ppppppplVar9[10];
          uStack_320 = ppppppplVar9[0xd];
          ppppplVar31 = **ppppppplVar9 + 0xf3;
          ppppppplStack_330 = ppppppplVar6;
          FUN_109d678e8(ppppplVar31,(long)*(int *)ppppplStack_390,0);
          FUN_109d94e24();
          ppppplVar7 = **ppppppplVar9 + 0xf3;
          ppppplStack_318 = ppppplVar31;
          FUN_109d678e8(ppppplVar7,1,0);
          FUN_109d94e24();
          pppppplStack_308 = ppppppplVar9[0x13];
          pppppplStack_300 = ppppppplVar9[0x15];
          ppppplVar31 = **ppppppplVar9 + 0xf3;
          ppppplStack_310 = ppppplVar7;
          FUN_109d678e8(ppppplVar31,2,0);
          FUN_109d94e24();
          pppppplStack_2f0 = ppppppplVar9[0x12];
          ppppplVar7 = *pppppplVar26;
          ppppplStack_380 = pppppplVar26[1];
          ppppppplStack_190 = ppppppplStack_3a0;
          pppppplStack_188 = (long ******)0x2000000000;
          ppppplStack_2f8 = ppppplVar31;
          if (ppppplVar7 == ppppplStack_380) {
            uVar25 = 0;
          }
          else {
            lVar21 = 0;
            pppppplStack_3c8 = pppppplVar20;
            do {
              pppplVar16 = *ppppplVar7;
              ppplVar27 = pppplVar16[2];
              ppplVar5 = ppplVar27;
              FUN_109f48594();
              if ((int)ppplVar5 != 0) {
                uVar22 = (ulong)ppplVar5 & 0xffffffff;
                uVar25 = 0;
                if (uVar22 != 0) {
                  uVar25 = ((lVar21 + ((ulong)ppplVar5 & 0xffffffff)) - 1) / uVar22;
                }
                lVar21 = uVar25 * uVar22;
              }
              ppplVar5 = ppplVar27;
              FUN_109f48674(ppplVar27);
              cVar14 = *(char *)((long)ppplVar27 + 4);
              if ((cVar14 == '\x13') &&
                 (ppplVar29 = (long ***)ppplVar27[6], ppplVar29 != (long ***)0x0)) {
                ppplVar8 = ppplVar29;
                FUN_109f48674(ppplVar29);
                iVar4 = (int)ppplVar8;
                lVar33 = (long)*(int *)(ppplVar27 + 2);
                cVar14 = *(char *)((long)ppplVar29 + 4);
                ppplVar27 = ppplVar29;
              }
              else {
                lVar33 = 0;
                iVar4 = (int)ppplVar5;
              }
              if ((cVar14 == '\x11') &&
                 (ppppppplVar23 = ppppppplStack_378, FUN_109fada04(ppppppplStack_378,ppplVar27),
                 ppppppplVar23 != (long *******)0x0)) {
                func_0x000109d33e60(&ppppppplStack_190,ppppppplStack_378[0x12]);
                func_0x000109d33e60(&ppppppplStack_190,ppppppplVar23);
              }
              FUN_109f9c150(&ppppppplStack_350,ppplVar27);
              ppppppplVar9 = ppppppplStack_378;
              ppppplVar31 = **ppppppplStack_378 + 0xf3;
              FUN_109d678e8(ppppplVar31,(long)(int)lVar21,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_190,ppppplVar31);
              ppppplVar31 = **ppppppplVar9 + 0xf3;
              FUN_109d678e8(ppppplVar31,(long)iVar4,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_190,ppppplVar31);
              ppppplVar31 = **ppppppplVar9 + 0xf3;
              FUN_109d678e8(ppppplVar31,lVar33,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_190,ppppplVar31);
              ppppppplVar23 = ppppppplStack_350;
              if (-1 < (long)uStack_340._7_1_) {
                ppppppplVar23 = (long *******)&ppppppplStack_350;
              }
              pppppplVar34 = pppppplStack_348;
              if (-1 < (long)uStack_340) {
                pppppplVar34 = (long ******)(long)uStack_340._7_1_;
              }
              ppppplVar31 = **ppppppplVar9 + 0x21;
              FUN_109d956b4(ppppplVar31,ppppppplVar23,pppppplVar34);
              pppplVar17 = *ppppplVar31;
              if (((ulong)ppppppplVar23 & 1) != 0) {
                pppplVar17[2] = (long ***)pppplVar17;
              }
              func_0x000109d33e60(&ppppppplStack_190,pppplVar17 + 1);
              pppppplVar34 = *ppppppplVar9;
              ppplVar27 = pppplVar16[3];
              if (ppplVar27 == (long ***)0x0) {
                ppplVar29 = (long ***)0x0;
              }
              else {
                ppplVar29 = ppplVar27;
                _strlen(ppplVar27);
              }
              ppppplVar31 = *pppppplVar34 + 0x21;
              FUN_109d956b4(ppppplVar31,ppplVar27,ppplVar29);
              ppppppplVar9 = ppppppplStack_378;
              pppplVar16 = *ppppplVar31;
              if (((ulong)ppplVar27 & 1) != 0) {
                pppplVar16[2] = (long ***)pppplVar16;
              }
              func_0x000109d33e60(&ppppppplStack_190,pppplVar16 + 1);
              if ((long)uStack_340 < 0) {
                __ZdlPv(ppppppplStack_350);
              }
              lVar21 = lVar21 + ((ulong)ppplVar5 & 0xffffffff);
              ppppplVar7 = ppppplVar7 + 1;
            } while (ppppplVar7 != ppppplStack_380);
            uVar25 = (ulong)pppppplStack_188 & 0xffffffff;
            pppppplVar20 = pppppplStack_3c8;
            ppppplVar24 = ppppplStack_398;
            ppppppplVar23 = ppppppplStack_3d0;
          }
          pppppplVar26 = *ppppppplVar9;
          FUN_109d974c0(pppppplVar26,ppppppplStack_190,uVar25,0,1);
          pppppplVar34 = pppppplStack_3b8;
          param_2 = (long *******)(ulong)uStack_3ac;
          if (ppppppplStack_190 != ppppppplStack_3a0) {
            _free();
          }
          iVar4 = 0;
          if (unaff_x20 != 0) {
            iVar4 = (int)(((lVar32 + unaff_x20) - 1) / unaff_x20);
          }
          pppppplStack_2e0 = ppppppplVar9[0x10];
          ppppplVar31 = **ppppppplVar9 + 0xf3;
          pppppplStack_2e8 = pppppplVar26;
          FUN_109d678e8(ppppplVar31,(long)(iVar4 * (int)unaff_x20),0);
          FUN_109d94e24();
          pppppplStack_2d0 = ppppppplVar9[0x11];
          ppppplVar7 = **ppppppplVar9 + 0xf3;
          ppppplStack_2d8 = ppppplVar31;
          FUN_109d678e8(ppppplVar7,(long)(int)unaff_x20,0);
          FUN_109d94e24();
          pppppplStack_2c0 = ppppppplVar9[0xe];
          ppppppplVar6 = ppppppplStack_370;
          if (-1 < (long)uStack_360._7_1_) {
            ppppppplVar6 = (long *******)&ppppppplStack_370;
          }
          pppplVar16 = pppplStack_368;
          if (-1 < (long)uStack_360) {
            pppplVar16 = (long ****)(long)uStack_360._7_1_;
          }
          ppppplVar31 = **ppppppplVar9 + 0x21;
          ppppplStack_2c8 = ppppplVar7;
          FUN_109d956b4(ppppplVar31,ppppppplVar6,pppplVar16);
          pppplStack_2b8 = *ppppplVar31;
          if (((ulong)ppppppplVar6 & 1) != 0) {
            pppplStack_2b8[2] = (long ***)pppplStack_2b8;
          }
          pppplStack_2b8 = pppplStack_2b8 + 1;
          pppppplStack_2b0 = ppppppplVar9[0xf];
          ppppppplVar6 = ppppppplStack_370;
          if (-1 < (long)uStack_360._7_1_) {
            ppppppplVar6 = (long *******)&ppppppplStack_370;
          }
          pppplVar16 = pppplStack_368;
          if (-1 < (long)uStack_360) {
            pppplVar16 = (long ****)(long)uStack_360._7_1_;
          }
          ppppplVar31 = **ppppppplVar9 + 0x21;
          FUN_109d956b4(ppppplVar31,ppppppplVar6,pppplVar16);
          pppplStack_2a8 = *ppppplVar31;
          if (((ulong)ppppppplVar6 & 1) != 0) {
            pppplStack_2a8[2] = (long ***)pppplStack_2a8;
          }
          pppplStack_2a8 = pppplStack_2a8 + 1;
          FUN_109d974c0(pppppplVar20,&ppppppplStack_330,0x12,0,1);
          ppppplVar7 = **ppppppplVar9 + 0xf3;
          FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
          ppppplVar31 = ppppplStack_390;
          FUN_109d94e24();
          func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
          ppppplVar7 = **ppppppplVar9 + 0xf3;
          FUN_109d678e8(ppppplVar7,8,0);
          FUN_109d94e24();
          func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
          ppppplVar7 = **ppppppplVar9 + 0xf3;
          FUN_109d678e8(ppppplVar7,0,0);
          FUN_109d94e24();
          func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
          ppppppplVar6 = ppppppplStack_370;
          if (-1 < (long)uStack_360._7_1_) {
            ppppppplVar6 = (long *******)&ppppppplStack_370;
          }
          pppplVar16 = pppplStack_368;
          if (-1 < (long)uStack_360) {
            pppplVar16 = (long ****)(long)uStack_360._7_1_;
          }
          ppppplVar7 = **ppppppplVar9 + 0x21;
          FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
          pppplVar16 = *ppppplVar7;
          if (((ulong)ppppppplVar6 & 1) != 0) {
            pppplVar16[2] = (long ***)pppplVar16;
          }
          func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
          ppppppplVar6 = ppppppplStack_370;
          if (-1 < (long)uStack_360._7_1_) {
            ppppppplVar6 = (long *******)&ppppppplStack_370;
          }
          pppplVar16 = pppplStack_368;
          if (-1 < (long)uStack_360) {
            pppplVar16 = (long ****)(long)uStack_360._7_1_;
          }
          ppppplVar7 = **ppppppplVar9 + 0x21;
          FUN_109d956b4(ppppplVar7,ppppppplVar6,pppplVar16);
          pppplVar16 = *ppppplVar7;
          if (((ulong)ppppppplVar6 & 1) != 0) {
            pppplVar16[2] = (long ***)pppplVar16;
          }
          func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
          func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
          param_1 = (long *******)&ppppppplStack_2a0;
          func_0x000109d33e60(param_1,pppppplVar20);
          ppppppplVar6 = ppppppplStack_370;
          pppppplVar26 = uStack_360;
        }
        else {
          if (iVar4 < 6) {
            if (iVar4 != 4) {
              if (iVar4 != 5) goto LAB_109facd04;
              func_0x000107c31940(&ppppppplStack_190,ppppplVar31[1][3]);
              ppppppplVar6 = (long *******)&ppppppplStack_190;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppppplVar6,&UNK_10f629a5c,5);
              pppppplStack_328 = ppppppplVar6[1];
              ppppppplStack_330 = (long *******)*ppppppplVar6;
              uStack_320 = ppppppplVar6[2];
              ppppppplVar6[1] = (long ******)0x0;
              ppppppplVar6[2] = (long ******)0x0;
              *ppppppplVar6 = (long ******)0x0;
              if ((long)pppppplStack_180 < 0) {
                __ZdlPv(ppppppplStack_190);
              }
              pppppplVar26 = *ppppppplVar9;
              ppppppplVar6 = (long *******)(*pppppplVar26 + 0xf3);
              FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
              FUN_109d94e24();
              pppppplStack_188 = ppppppplVar9[8];
              pppppplStack_180 = ppppppplVar9[0xd];
              ppppplVar7 = **ppppppplVar9 + 0xf3;
              ppppppplStack_190 = ppppppplVar6;
              FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
              FUN_109d94e24();
              ppppplVar12 = **ppppppplVar9 + 0xf3;
              ppppplStack_178 = ppppplVar7;
              FUN_109d678e8(ppppplVar12,1,0);
              FUN_109d94e24();
              pppppplStack_168 = ppppppplVar9[0xe];
              ppppplVar7 = **ppppppplVar9 + 0x21;
              uVar25 = 0;
              ppppplStack_170 = ppppplVar12;
              FUN_109d956b4(ppppplVar7,&DAT_10f638aa0,7);
              pppplVar16 = *ppppplVar7;
              if ((uVar25 & 1) != 0) {
                pppplVar16[2] = (long ***)pppplVar16;
              }
              pppppplStack_160 = (long ******)(pppplVar16 + 1);
              pppppplStack_158 = ppppppplVar9[0xf];
              ppppppplVar6 = ppppppplStack_330;
              if (-1 < (long)uStack_320._7_1_) {
                ppppppplVar6 = (long *******)&ppppppplStack_330;
              }
              pppppplVar20 = pppppplStack_328;
              if (-1 < (long)uStack_320) {
                pppppplVar20 = (long ******)(long)uStack_320._7_1_;
              }
              ppppplVar7 = **ppppppplVar9 + 0x21;
              FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
              pppplVar16 = *ppppplVar7;
              if (((ulong)ppppppplVar6 & 1) != 0) {
                pppplVar16[2] = (long ***)pppplVar16;
              }
              pppppplStack_150 = (long ******)(pppplVar16 + 1);
              FUN_109d974c0(pppppplVar26,&ppppppplStack_190,9,0,1);
              ppppplVar7 = **ppppppplVar9 + 0xf3;
              FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
              ppppplVar7 = **ppppppplVar9 + 0xf3;
              FUN_109d678e8(ppppplVar7,8,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
              ppppplVar7 = **ppppppplVar9 + 0xf3;
              FUN_109d678e8(ppppplVar7,0,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
              ppppplVar7 = **ppppppplVar9 + 0x21;
              uVar25 = 0;
              FUN_109d956b4(ppppplVar7,&DAT_10f638aa0,7);
              pppplVar16 = *ppppplVar7;
              if ((uVar25 & 1) != 0) {
                pppplVar16[2] = (long ***)pppplVar16;
              }
              func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
              ppppppplVar6 = ppppppplStack_330;
              if (-1 < (long)uStack_320._7_1_) {
                ppppppplVar6 = (long *******)&ppppppplStack_330;
              }
              pppppplVar20 = pppppplStack_328;
              if (-1 < (long)uStack_320) {
                pppppplVar20 = (long ******)(long)uStack_320._7_1_;
              }
              ppppplVar7 = **ppppppplVar9 + 0x21;
              FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
              pppplVar16 = *ppppplVar7;
              if (((ulong)ppppppplVar6 & 1) != 0) {
                pppplVar16[2] = (long ***)pppplVar16;
              }
              func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
              func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
              param_1 = (long *******)&ppppppplStack_2a0;
              func_0x000109d33e60(param_1,pppppplVar26);
              ppppppplVar6 = ppppppplStack_330;
              pppppplVar26 = uStack_320;
              goto joined_r0x000109faca60;
            }
            func_0x000107c31940(&ppppppplStack_330,ppppplVar31[1][3]);
            ppppplVar7 = ppppplVar31 + 3;
            if (ppppplVar31[1] != (long ****)0x0) {
              ppppplVar7 = (long *****)(ppppplVar31[1] + 2);
            }
            FUN_109fad784(&ppppppplStack_350,*ppppplVar7);
            pppppplVar26 = *ppppppplVar9;
            ppppppplVar6 = (long *******)(*pppppplVar26 + 0xf3);
            FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
            FUN_109d94e24();
            pppppplStack_188 = ppppppplVar9[7];
            pppppplStack_180 = ppppppplVar9[0xd];
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            ppppppplStack_190 = ppppppplVar6;
            FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
            FUN_109d94e24();
            ppppplVar12 = **ppppppplVar9 + 0xf3;
            ppppplStack_178 = ppppplVar7;
            FUN_109d678e8(ppppplVar12,1,0);
            FUN_109d94e24();
            pppppplStack_168 = ppppppplVar9[9];
            pppppplStack_160 = ppppppplVar9[0xe];
            ppppppplVar6 = ppppppplStack_350;
            if (-1 < (long)uStack_340._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_350;
            }
            pppppplVar20 = pppppplStack_348;
            if (-1 < (long)uStack_340) {
              pppppplVar20 = (long ******)(long)uStack_340._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            ppppplStack_170 = ppppplVar12;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            pppppplStack_158 = (long ******)(pppplVar16 + 1);
            pppppplStack_150 = ppppppplVar9[0xf];
            ppppppplVar6 = ppppppplStack_330;
            if (-1 < (long)uStack_320._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_330;
            }
            pppppplVar20 = pppppplStack_328;
            if (-1 < (long)uStack_320) {
              pppppplVar20 = (long ******)(long)uStack_320._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplStack_148 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplStack_148[2] = (long ***)pppplStack_148;
            }
            pppplStack_148 = pppplStack_148 + 1;
            FUN_109d974c0(pppppplVar26,&ppppppplStack_190,10,0,1);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,8,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,0,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppppplVar6 = ppppppplStack_350;
            if (-1 < (long)uStack_340._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_350;
            }
            pppppplVar20 = pppppplStack_348;
            if (-1 < (long)uStack_340) {
              pppppplVar20 = (long ******)(long)uStack_340._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
            ppppppplVar6 = ppppppplStack_330;
            if (-1 < (long)uStack_320._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_330;
            }
            pppppplVar20 = pppppplStack_328;
            if (-1 < (long)uStack_320) {
              pppppplVar20 = (long ******)(long)uStack_320._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
            func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
            param_1 = (long *******)&ppppppplStack_2a0;
            func_0x000109d33e60(param_1,pppppplVar26);
          }
          else {
            if (iVar4 != 6) {
              if (iVar4 == 7) {
                pppppplVar26 = pppppplVar34 + 0xb3;
                FUN_109f7b06c(pppppplVar26,ppppplVar31 + 2);
                if (pppppplVar26 == (long ******)0x0) {
                  func_0x000107c31940(&ppppppplStack_330,&UNK_10f62bbde);
                }
                else {
                  ppppplVar7 = pppppplVar26[7];
                  if (-1 < (char)*(byte *)((long)pppppplVar26 + 0x47)) {
                    ppppplVar7 = (long *****)(ulong)*(byte *)((long)pppppplVar26 + 0x47);
                  }
                  func_0x000104c4f768(&ppppppplStack_330,(long)ppppplVar7 + 5,&ppppppplStack_190);
                  ppppppplVar9 = ppppppplStack_330;
                  if (-1 < (long)uStack_320) {
                    ppppppplVar9 = (long *******)&ppppppplStack_330;
                  }
                  if (ppppplVar7 != (long *****)0x0) {
                    pppppplVar20 = (long ******)pppppplVar26[6];
                    if (-1 < *(char *)((long)pppppplVar26 + 0x47)) {
                      pppppplVar20 = pppppplVar26 + 6;
                    }
                    _memmove(ppppppplVar9,pppppplVar20,ppppplVar7);
                  }
                  *(undefined4 *)((long)ppppppplVar9 + (long)ppppplVar7) = 0x53706d53;
                  *(undefined2 *)((undefined4 *)((long)ppppppplVar9 + (long)ppppplVar7) + 1) = 0x43;
                  ppppppplVar9 = ppppppplStack_378;
                }
                pppppplVar26 = *ppppppplVar9;
                ppppppplVar6 = (long *******)(*pppppplVar26 + 0xf3);
                FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
                FUN_109d94e24();
                pppppplStack_188 = ppppppplVar9[8];
                pppppplStack_180 = ppppppplVar9[0xd];
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                ppppppplStack_190 = ppppppplVar6;
                FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
                FUN_109d94e24();
                ppppplVar12 = **ppppppplVar9 + 0xf3;
                ppppplStack_178 = ppppplVar7;
                FUN_109d678e8(ppppplVar12,1,0);
                FUN_109d94e24();
                pppppplStack_168 = ppppppplVar9[0xe];
                ppppplVar7 = **ppppppplVar9 + 0x21;
                uVar25 = 0;
                ppppplStack_170 = ppppplVar12;
                FUN_109d956b4(ppppplVar7,&DAT_10f638aa0,7);
                pppplVar16 = *ppppplVar7;
                if ((uVar25 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                pppppplStack_160 = (long ******)(pppplVar16 + 1);
                pppppplStack_158 = ppppppplVar9[0xf];
                ppppppplVar6 = ppppppplStack_330;
                if (-1 < (long)uStack_320._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_330;
                }
                pppppplVar20 = pppppplStack_328;
                if (-1 < (long)uStack_320) {
                  pppppplVar20 = (long ******)(long)uStack_320._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                pppppplStack_150 = (long ******)(pppplVar16 + 1);
                FUN_109d974c0(pppppplVar26,&ppppppplStack_190,9,0,1);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,8,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppplVar7 = **ppppppplVar9 + 0xf3;
                FUN_109d678e8(ppppplVar7,0,0);
                FUN_109d94e24();
                func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
                ppppplVar7 = **ppppppplVar9 + 0x21;
                uVar25 = 0;
                FUN_109d956b4(ppppplVar7,&DAT_10f638aa0,7);
                pppplVar16 = *ppppplVar7;
                if ((uVar25 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                ppppppplVar6 = ppppppplStack_330;
                if (-1 < (long)uStack_320._7_1_) {
                  ppppppplVar6 = (long *******)&ppppppplStack_330;
                }
                pppppplVar20 = pppppplStack_328;
                if (-1 < (long)uStack_320) {
                  pppppplVar20 = (long ******)(long)uStack_320._7_1_;
                }
                ppppplVar7 = **ppppppplVar9 + 0x21;
                FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
                pppplVar16 = *ppppplVar7;
                if (((ulong)ppppppplVar6 & 1) != 0) {
                  pppplVar16[2] = (long ***)pppplVar16;
                }
                func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
                func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
                param_1 = (long *******)&ppppppplStack_2a0;
                func_0x000109d33e60(param_1,pppppplVar26);
                ppppppplVar6 = ppppppplStack_330;
                pppppplVar26 = uStack_320;
                goto joined_r0x000109faca60;
              }
              goto LAB_109facd04;
            }
            pppppplVar26 = pppppplVar34 + 0xb3;
            FUN_109f7b06c(pppppplVar26,ppppplVar31 + 2);
            if (pppppplVar26 == (long ******)0x0) {
              func_0x000107c31940(&ppppppplStack_330,&UNK_10f62bbd5);
            }
            else if (*(char *)((long)pppppplVar26 + 0x47) < '\0') {
              func_0x000107c3192c(&ppppppplStack_330,pppppplVar26[6],pppppplVar26[7]);
            }
            else {
              pppppplStack_328 = (long ******)pppppplVar26[7];
              ppppppplStack_330 = (long *******)pppppplVar26[6];
              uStack_320 = (long ******)pppppplVar26[8];
            }
            ppppplVar7 = ppppplVar31 + 3;
            if (ppppplVar31[1] != (long ****)0x0) {
              ppppplVar7 = (long *****)(ppppplVar31[1] + 2);
            }
            FUN_109fad784(&ppppppplStack_350,*ppppplVar7);
            pppppplVar26 = *ppppppplVar9;
            ppppppplVar6 = (long *******)(*pppppplVar26 + 0xf3);
            FUN_109d678e8(ppppppplVar6,(long)*(int *)ppppplVar31,0);
            FUN_109d94e24();
            pppppplStack_188 = ppppppplVar9[7];
            pppppplStack_180 = ppppppplVar9[0xd];
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            ppppppplStack_190 = ppppppplVar6;
            FUN_109d678e8(ppppplVar7,(long)*(int *)ppppplVar31,0);
            FUN_109d94e24();
            ppppplVar12 = **ppppppplVar9 + 0xf3;
            ppppplStack_178 = ppppplVar7;
            FUN_109d678e8(ppppplVar12,1,0);
            FUN_109d94e24();
            pppppplStack_168 = ppppppplVar9[9];
            pppppplStack_160 = ppppppplVar9[0xe];
            ppppppplVar6 = ppppppplStack_350;
            if (-1 < (long)uStack_340._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_350;
            }
            pppppplVar20 = pppppplStack_348;
            if (-1 < (long)uStack_340) {
              pppppplVar20 = (long ******)(long)uStack_340._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            ppppplStack_170 = ppppplVar12;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            pppppplStack_158 = (long ******)(pppplVar16 + 1);
            pppppplStack_150 = ppppppplVar9[0xf];
            ppppppplVar6 = ppppppplStack_330;
            if (-1 < (long)uStack_320._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_330;
            }
            pppppplVar20 = pppppplStack_328;
            if (-1 < (long)uStack_320) {
              pppppplVar20 = (long ******)(long)uStack_320._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplStack_148 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplStack_148[2] = (long ***)pppplStack_148;
            }
            pppplStack_148 = pppplStack_148 + 1;
            FUN_109d974c0(pppppplVar26,&ppppppplStack_190,10,0,1);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,(long)(int)lStack_388,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,8,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppplVar7 = **ppppppplVar9 + 0xf3;
            FUN_109d678e8(ppppplVar7,0,0);
            FUN_109d94e24();
            func_0x000109d33e60(&ppppppplStack_2a0,ppppplVar7);
            ppppppplVar6 = ppppppplStack_350;
            if (-1 < (long)uStack_340._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_350;
            }
            pppppplVar20 = pppppplStack_348;
            if (-1 < (long)uStack_340) {
              pppppplVar20 = (long ******)(long)uStack_340._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
            ppppppplVar6 = ppppppplStack_330;
            if (-1 < (long)uStack_320._7_1_) {
              ppppppplVar6 = (long *******)&ppppppplStack_330;
            }
            pppppplVar20 = pppppplStack_328;
            if (-1 < (long)uStack_320) {
              pppppplVar20 = (long ******)(long)uStack_320._7_1_;
            }
            ppppplVar7 = **ppppppplVar9 + 0x21;
            FUN_109d956b4(ppppplVar7,ppppppplVar6,pppppplVar20);
            pppplVar16 = *ppppplVar7;
            if (((ulong)ppppppplVar6 & 1) != 0) {
              pppplVar16[2] = (long ***)pppplVar16;
            }
            func_0x000109d33e60(&ppppppplStack_2a0,pppplVar16 + 1);
            func_0x000109d33e60(&ppppppplStack_2a0,ppppppplVar9[0xc]);
            param_1 = (long *******)&ppppppplStack_2a0;
            func_0x000109d33e60(param_1,pppppplVar26);
          }
          ppppppplVar6 = ppppppplStack_330;
          pppppplVar26 = uStack_320;
          if ((long)uStack_340 < 0) {
            param_1 = ppppppplStack_350;
            __ZdlPv();
            ppppppplVar6 = ppppppplStack_330;
            pppppplVar26 = uStack_320;
          }
        }
joined_r0x000109faca60:
        if ((long)pppppplVar26 < 0) {
          __ZdlPv();
          param_1 = ppppppplVar6;
        }
        lStack_388 = lStack_388 + 8;
      }
LAB_109facd04:
      ppppplVar31 = ppppplVar31 + 8;
    } while (ppppplVar31 != ppppplVar24);
    if ((int)uStack_298 == 0) {
      ppppppplVar23 = (long *******)0x0;
    }
    else {
      param_1 = (long *******)*ppppppplVar9;
      FUN_109d974c0();
      ppppppplVar23 = param_1;
    }
    param_2 = ppppppplStack_2a0;
    if (ppppppplStack_2a0 != ppppppplStack_3c0) {
      param_1 = ppppppplStack_2a0;
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppppplVar23;
  }
  ___stack_chk_fail();
  if (ppppppplStack_2a0 != ppppppplStack_3c0) {
    _free();
  }
  ppppppplVar23 = param_1;
  __Unwind_Resume();
  pcStack_3d8 = FUN_109fad784;
  ppppppplStack_410 = (long *******)0x0;
  uStack_408 = 0;
  puVar13 = &DAT_10f62bc20;
  uStack_400 = 0;
  bStack_3f9 = 0;
  ppppppplVar9 = ppppppplVar23;
  uStack_3f0 = unaff_x20;
  ppppppplStack_3e8 = param_1;
  puStack_3e0 = &stack0xfffffffffffffff0;
  if (param_2 == (long *******)0x0) {
LAB_109fad804:
    func_0x000107c2c4dc(&ppppppplStack_410,puVar13);
    if (param_2 != (long *******)0x0) {
      uVar15 = *(uint *)((long)param_2 + 4);
      goto LAB_109fad83c;
    }
  }
  else {
    uVar15 = *(uint *)((long)param_2 + 4);
    uVar2 = uVar15 >> 0x10 & 0xf;
    if ((uVar15 & 0x200000) != 0) {
      puVar13 = &DAT_10f62bc0f;
    }
    if (uVar2 == 2) {
      uStack_400 = 0;
      bStack_3f9 = 10;
      ppppppplStack_410 = (long *******)0x3365727574786574;
      uStack_408 = 0x3c64;
    }
    else {
      if (uVar2 != 3) goto LAB_109fad804;
      uStack_400 = 0;
      bStack_3f9 = 0xc;
      ppppppplStack_410 = (long *******)0x6365727574786574;
      uStack_408 = 0x3c656275;
    }
LAB_109fad83c:
    uVar15 = uVar15 >> 8 & 0xff;
    if (uVar15 == 1) {
      uVar25 = uStack_408;
      if (-1 < (char)bStack_3f9) {
        uVar25 = (ulong)bStack_3f9;
      }
      func_0x000104c4f768(ppppppplVar23,uVar25 + 0xc,&uStack_3f1);
      ppppppplVar6 = (long *******)*ppppppplVar23;
      if (-1 < *(char *)((long)ppppppplVar23 + 0x17)) {
        ppppppplVar6 = ppppppplVar23;
      }
      if (uVar25 != 0) {
        ppppppplVar23 = ppppppplStack_410;
        if (-1 < (char)bStack_3f9) {
          ppppppplVar23 = (long *******)&ppppppplStack_410;
        }
        ppppppplVar9 = ppppppplVar6;
        _memmove(ppppppplVar6,ppppppplVar23,uVar25);
      }
      puVar1 = (undefined8 *)((long)ppppppplVar6 + uVar25);
      *puVar1 = 0x6d6173202c746e69;
      *(undefined4 *)(puVar1 + 1) = 0x3e656c70;
      puVar19 = (undefined1 *)((long)puVar1 + 0xc);
      goto LAB_109fad9c0;
    }
    if (uVar15 == 0) {
      uVar25 = uStack_408;
      if (-1 < (char)bStack_3f9) {
        uVar25 = (ulong)bStack_3f9;
      }
      func_0x000104c4f768(ppppppplVar23,uVar25 + 0xd,&uStack_3f1);
      ppppppplVar6 = (long *******)*ppppppplVar23;
      if (-1 < *(char *)((long)ppppppplVar23 + 0x17)) {
        ppppppplVar6 = ppppppplVar23;
      }
      if (uVar25 != 0) {
        ppppppplVar23 = ppppppplStack_410;
        if (-1 < (char)bStack_3f9) {
          ppppppplVar23 = (long *******)&ppppppplStack_410;
        }
        ppppppplVar9 = ppppppplVar6;
        _memmove(ppppppplVar6,ppppppplVar23,uVar25);
      }
      puVar1 = (undefined8 *)((long)ppppppplVar6 + uVar25);
      *puVar1 = 0x6173202c746e6975;
      *(undefined8 *)((long)puVar1 + 5) = 0x3e656c706d617320;
      puVar19 = (undefined1 *)((long)puVar1 + 0xd);
      goto LAB_109fad9c0;
    }
  }
  uVar25 = uStack_408;
  if (-1 < (char)bStack_3f9) {
    uVar25 = (ulong)bStack_3f9;
  }
  func_0x000104c4f768(ppppppplVar23,uVar25 + 0xe,&uStack_3f1);
  ppppppplVar6 = (long *******)*ppppppplVar23;
  if (-1 < *(char *)((long)ppppppplVar23 + 0x17)) {
    ppppppplVar6 = ppppppplVar23;
  }
  if (uVar25 != 0) {
    ppppppplVar23 = ppppppplStack_410;
    if (-1 < (char)bStack_3f9) {
      ppppppplVar23 = (long *******)&ppppppplStack_410;
    }
    ppppppplVar9 = ppppppplVar6;
    _memmove(ppppppplVar6,ppppppplVar23,uVar25);
  }
  puVar1 = (undefined8 *)((long)ppppppplVar6 + uVar25);
  *puVar1 = 0x73202c74616f6c66;
  *(undefined8 *)((long)puVar1 + 6) = 0x3e656c706d617320;
  puVar19 = (undefined1 *)((long)puVar1 + 0xe);
LAB_109fad9c0:
  *puVar19 = 0;
  if ((char)bStack_3f9 < '\0') {
    __ZdlPv(ppppppplStack_410);
    ppppppplVar9 = ppppppplStack_410;
  }
  return ppppppplVar9;
}



/* Entry: 109fad784; end: 109fada03;  */

void FUN_109fad784(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puStack_40;
  ulong uStack_38;
  undefined7 uStack_30;
  byte bStack_29;
  undefined1 uStack_21;
  
  puStack_40 = (undefined1 *)0x0;
  uStack_38 = 0;
  puVar6 = &DAT_10f62bc20;
  uStack_30 = 0;
  bStack_29 = 0;
  if (param_2 == 0) {
LAB_109fad804:
    func_0x000107c2c4dc(&puStack_40,puVar6);
    if (param_2 != 0) {
      uVar7 = *(uint *)(param_2 + 4);
      goto LAB_109fad83c;
    }
  }
  else {
    uVar7 = *(uint *)(param_2 + 4);
    uVar5 = uVar7 >> 0x10 & 0xf;
    if ((uVar7 & 0x200000) != 0) {
      puVar6 = &DAT_10f62bc0f;
    }
    if (uVar5 == 2) {
      uStack_30 = 0;
      bStack_29 = 10;
      puStack_40 = (undefined1 *)0x3365727574786574;
      uStack_38 = 0x3c64;
    }
    else {
      if (uVar5 != 3) goto LAB_109fad804;
      uStack_30 = 0;
      bStack_29 = 0xc;
      puStack_40 = (undefined1 *)0x6365727574786574;
      uStack_38 = 0x3c656275;
    }
LAB_109fad83c:
    uVar7 = uVar7 >> 8 & 0xff;
    if (uVar7 == 1) {
      uVar2 = uStack_38;
      if (-1 < (char)bStack_29) {
        uVar2 = (ulong)bStack_29;
      }
      func_0x000104c4f768(param_1,uVar2 + 0xc,&uStack_21);
      plVar3 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar3 = param_1;
      }
      if (uVar2 != 0) {
        ppuVar4 = (undefined1 **)puStack_40;
        if (-1 < (char)bStack_29) {
          ppuVar4 = &puStack_40;
        }
        _memmove(plVar3,ppuVar4,uVar2);
      }
      puVar1 = (undefined8 *)((long)plVar3 + uVar2);
      *puVar1 = 0x6d6173202c746e69;
      *(undefined4 *)(puVar1 + 1) = 0x3e656c70;
      puVar8 = (undefined1 *)((long)puVar1 + 0xc);
      goto LAB_109fad9c0;
    }
    if (uVar7 == 0) {
      uVar2 = uStack_38;
      if (-1 < (char)bStack_29) {
        uVar2 = (ulong)bStack_29;
      }
      func_0x000104c4f768(param_1,uVar2 + 0xd,&uStack_21);
      plVar3 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar3 = param_1;
      }
      if (uVar2 != 0) {
        ppuVar4 = (undefined1 **)puStack_40;
        if (-1 < (char)bStack_29) {
          ppuVar4 = &puStack_40;
        }
        _memmove(plVar3,ppuVar4,uVar2);
      }
      puVar1 = (undefined8 *)((long)plVar3 + uVar2);
      *puVar1 = 0x6173202c746e6975;
      *(undefined8 *)((long)puVar1 + 5) = 0x3e656c706d617320;
      puVar8 = (undefined1 *)((long)puVar1 + 0xd);
      goto LAB_109fad9c0;
    }
  }
  uVar2 = uStack_38;
  if (-1 < (char)bStack_29) {
    uVar2 = (ulong)bStack_29;
  }
  func_0x000104c4f768(param_1,uVar2 + 0xe,&uStack_21);
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  if (uVar2 != 0) {
    ppuVar4 = (undefined1 **)puStack_40;
    if (-1 < (char)bStack_29) {
      ppuVar4 = &puStack_40;
    }
    _memmove(plVar3,ppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)plVar3 + uVar2);
  *puVar1 = 0x73202c74616f6c66;
  *(undefined8 *)((long)puVar1 + 6) = 0x3e656c706d617320;
  puVar8 = (undefined1 *)((long)puVar1 + 0xe);
LAB_109fad9c0:
  *puVar8 = 0;
  if ((char)bStack_29 < '\0') {
    __ZdlPv(puStack_40);
  }
  return;
}



/* Entry: 109fada04; end: 109fadd4b;  */

long * FUN_109fada04(long *param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long *unaff_x20;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 **ppuStack_198;
  long lStack_190;
  char cStack_181;
  long *plStack_180;
  ulong uStack_178;
  long alStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 0) || (1 < *(byte *)(param_2 + 4) - 0x11)) {
    plVar9 = (long *)0x0;
  }
  else {
    unaff_x20 = alStack_170;
    uStack_178 = 0x2000000000;
    uVar6 = (ulong)*(uint *)(param_2 + 0x10);
    plStack_180 = unaff_x20;
    if (*(uint *)(param_2 + 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      lVar15 = 0;
      uVar16 = 0;
      lVar14 = 0;
      do {
        puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + lVar15);
        uVar12 = *puVar1;
        bVar8 = *(byte *)(uVar12 + 4);
        if (2 < bVar8 - 0xd) {
          pcVar10 = (char *)puVar1[1];
          uVar6 = uVar12;
          FUN_109f48594();
          if ((int)uVar6 != 0) {
            uVar7 = uVar6 & 0xffffffff;
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = ((lVar14 + (uVar6 & 0xffffffff)) - 1) / uVar7;
            }
            lVar14 = uVar13 * uVar7;
          }
          uVar6 = uVar12;
          FUN_109f48674();
          iVar2 = (int)uVar6;
          if (bVar8 == 0x13) {
            uVar13 = *(ulong *)(uVar12 + 0x30);
            if (uVar13 == 0) {
              lVar11 = 0;
            }
            else {
              uVar7 = uVar13;
              FUN_109f48674(uVar13);
              iVar2 = (int)uVar7;
              lVar11 = (long)*(int *)(uVar12 + 0x10);
              bVar8 = *(byte *)(uVar13 + 4);
              uVar12 = uVar13;
            }
          }
          else {
            lVar11 = 0;
          }
          if ((bVar8 == 0x11) &&
             (plVar9 = param_1, FUN_109fada04(param_1,uVar12), plVar9 != (long *)0x0)) {
            func_0x000109d33e60(&plStack_180,param_1[0x12]);
            func_0x000109d33e60(&plStack_180,plVar9);
          }
          FUN_109f9c150(&ppuStack_198,uVar12);
          lVar3 = *(long *)*param_1 + 0x798;
          FUN_109d678e8(lVar3,(long)(int)lVar14,0);
          FUN_109d94e24();
          func_0x000109d33e60(&plStack_180,lVar3);
          lVar3 = *(long *)*param_1 + 0x798;
          FUN_109d678e8(lVar3,(long)iVar2,0);
          FUN_109d94e24();
          func_0x000109d33e60(&plStack_180,lVar3);
          lVar3 = *(long *)*param_1 + 0x798;
          FUN_109d678e8(lVar3,lVar11,0);
          FUN_109d94e24();
          func_0x000109d33e60(&plStack_180,lVar3);
          pppuVar4 = (undefined8 ***)ppuStack_198;
          if (-1 < (long)cStack_181) {
            pppuVar4 = &ppuStack_198;
          }
          lVar11 = lStack_190;
          if (-1 < cStack_181) {
            lVar11 = (long)cStack_181;
          }
          plVar9 = (long *)(*(long *)*param_1 + 0x108);
          FUN_109d956b4(plVar9,pppuVar4,lVar11);
          lVar11 = *plVar9;
          if (((ulong)pppuVar4 & 1) != 0) {
            *(long *)(lVar11 + 0x10) = lVar11;
          }
          func_0x000109d33e60(&plStack_180,lVar11 + 8);
          plVar9 = (long *)*param_1;
          pcVar5 = "";
          if (pcVar10 != (char *)0x0) {
            pcVar5 = pcVar10;
          }
          pcVar10 = pcVar5;
          _strlen(pcVar5);
          plVar9 = (long *)(*plVar9 + 0x108);
          FUN_109d956b4(plVar9,pcVar5,pcVar10);
          lVar11 = *plVar9;
          if (((ulong)pcVar5 & 1) != 0) {
            *(long *)(lVar11 + 0x10) = lVar11;
          }
          func_0x000109d33e60(&plStack_180,lVar11 + 8);
          if (cStack_181 < '\0') {
            __ZdlPv(ppuStack_198);
          }
          lVar14 = lVar14 + (uVar6 & 0xffffffff);
          uVar6 = (ulong)*(uint *)(param_2 + 0x10);
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x30;
      } while (uVar16 < uVar6);
      uVar6 = uStack_178 & 0xffffffff;
    }
    plVar9 = (long *)*param_1;
    FUN_109d974c0(plVar9,plStack_180,uVar6,0,1);
    param_1 = plStack_180;
    if (plStack_180 != unaff_x20) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar9;
  }
  ___stack_chk_fail();
  if (plStack_180 != unaff_x20) {
    _free();
  }
  __Unwind_Resume();
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x1000000000;
  func_0x000109d738cc();
  return param_1;
}



/* Entry: 109fadd4c; end: 109fadda7;  */

long * FUN_109fadd4c(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x1000000000;
  func_0x000109d738cc(param_1,param_2,param_2 + param_3 * 8);
  return param_1;
}



/* Entry: 109fadda8; end: 109fadeb7;  */

long * FUN_109fadda8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fadeb8; end: 109fadf8f;  */

long * FUN_109fadeb8(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    puVar3 = plVar2 + (ulong)uVar1 * 4 + -3;
    lVar4 = (ulong)uVar1 * -0x20;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109fadf90; end: 109fae033;  */

long * FUN_109fadf90(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)*param_2;
  param_1[0xf] = (long)&PTR_FUN_110b57990;
  param_1[0x10] = (long)&PTR_FUN_110b57a80;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x200000000;
  param_1[8] = lVar1;
  param_1[9] = (long)(param_1 + 0xf);
  param_1[10] = (long)(param_1 + 0x10);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 100) = 0x200;
  *(undefined1 *)((long)param_1 + 0x66) = 7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_109d343bc();
  return param_1;
}



/* Entry: 109fae034; end: 109fae07b;  */

undefined8 * FUN_109fae034(undefined8 *param_1)

{
  FUN_109fae7ac(param_1 + 8);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109fae07c; end: 109fae123;  */

undefined8 * FUN_109fae07c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *(undefined1 *)(param_2 + 3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 3) = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = param_2[7];
  FUN_109fae820(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 109fae124; end: 109fae137;  */

void FUN_109fae124(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uVar1 = *(uint *)(plVar2 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -0x20;
    pcVar4 = (char *)(*plVar2 + (ulong)uVar1 * 0x20 + -9);
    do {
      if (*pcVar4 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
      }
      lVar3 = lVar3 + 0x20;
      pcVar4 = pcVar4 + -0x20;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(plVar2 + 1) = 0;
  return;
}



/* Entry: 109fae138; end: 109fae197;  */

void FUN_109fae138(long *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 * -0x20;
    pcVar3 = (char *)(*param_1 + (ulong)uVar1 * 0x20 + -9);
    do {
      if (*pcVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
      }
      lVar2 = lVar2 + 0x20;
      pcVar3 = pcVar3 + -0x20;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 109fae198; end: 109fae27f;  */

void FUN_109fae198(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 auStack_48 [2];
  
  puVar3 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x20,auStack_48);
  puVar4 = (undefined8 *)*param_1;
  if (*(uint *)(param_1 + 1) != 0) {
    puVar1 = puVar4 + (ulong)*(uint *)(param_1 + 1) * 4;
    puVar5 = puVar3;
    do {
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      puVar5[2] = puVar4[2];
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      *(undefined2 *)(puVar5 + 3) = *(undefined2 *)(puVar4 + 3);
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
    puVar4 = (undefined8 *)*param_1;
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      lVar6 = (ulong)uVar2 * -0x20;
      pcVar7 = (char *)((long)puVar4 + (ulong)uVar2 * 0x20 + -9);
      do {
        if (*pcVar7 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
        }
        lVar6 = lVar6 + 0x20;
        pcVar7 = pcVar7 + -0x20;
      } while (lVar6 != 0);
      puVar4 = (undefined8 *)*param_1;
    }
  }
  if (puVar4 != param_1 + 2) {
    _free();
  }
  *param_1 = puVar3;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_48[0];
  return;
}



/* Entry: 109fae280; end: 109fae317;  */

void FUN_109fae280(undefined8 *param_1)

{
  FUN_109fae7ac(param_1 + 8);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109fae318; end: 109fae4cb;  */

long * FUN_109fae318(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    uVar14 = param_2[1];
    uVar13 = *param_2;
    puVar12[2] = param_2[2];
    puVar12[1] = uVar14;
    *puVar12 = uVar13;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    uVar13 = param_2[3];
    puVar12[4] = param_2[4];
    puVar12[3] = uVar13;
    puVar12[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar12 = puVar12 + 6;
    plVar4 = param_1;
LAB_109fae4ac:
    param_1[1] = (long)puVar12;
    return plVar4;
  }
  lVar11 = (long)puVar12 - *param_1;
  uVar5 = (lVar11 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar8 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar9 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 < 0x555555555555556) {
      plVar4 = (long *)(uVar9 * 0x30);
      __Znwm();
      uVar13 = *param_2;
      puVar12 = (undefined8 *)((long)plVar4 + lVar11);
      puVar12[1] = param_2[1];
      *puVar12 = uVar13;
      plVar1 = plVar4 + uVar9 * 6;
      puVar12[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      uVar13 = param_2[3];
      puVar12[4] = param_2[4];
      puVar12[3] = uVar13;
      puVar12[5] = param_2[5];
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      plVar10 = (long *)*param_1;
      plVar3 = (long *)param_1[1];
      plVar2 = (long *)((long)puVar12 + ((long)plVar10 - (long)plVar3));
      plVar6 = plVar10;
      plVar7 = plVar2;
      if ((long)plVar10 - (long)plVar3 != 0) {
        do {
          lVar8 = plVar6[1];
          lVar11 = *plVar6;
          plVar7[2] = plVar6[2];
          plVar7[1] = lVar8;
          *plVar7 = lVar11;
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          lVar11 = plVar6[3];
          plVar7[4] = plVar6[4];
          plVar7[3] = lVar11;
          plVar7[5] = plVar6[5];
          plVar6[3] = 0;
          plVar6[4] = 0;
          plVar6[5] = 0;
          plVar6 = plVar6 + 6;
          plVar7 = plVar7 + 6;
        } while (plVar6 != plVar3);
        do {
          plVar4 = plVar10;
          FUN_109fae520(plVar10);
          plVar10 = plVar10 + 6;
        } while (plVar10 != plVar3);
        plVar10 = (long *)*param_1;
      }
      puVar12 = puVar12 + 6;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)plVar1;
      if (plVar10 != (long *)0x0) {
        __ZdlPv(plVar10);
        plVar4 = plVar10;
      }
      goto LAB_109fae4ac;
    }
  }
  else {
    FUN_109fae50c();
  }
  func_0x000104c4f740();
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109fae4cc; end: 109fae50b;  */

undefined8 * FUN_109fae4cc(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109fae50c; end: 109fae51f;  */

void FUN_109fae50c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1[3] != 0) {
    puVar1[4] = puVar1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 109fae520; end: 109fae563;  */

void FUN_109fae520(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109fae564; end: 109fae633;  */

void FUN_109fae564(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_109fae520(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109fae634; end: 109fae7ab;  */

long FUN_109fae634(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_109d3ade8(param_1,0);
  }
  else if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 109fae7ac; end: 109fae81f;  */

long * FUN_109fae7ac(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -0x20;
    pcVar4 = (char *)((long)plVar2 + (ulong)uVar1 * 0x20 + -9);
    do {
      if (*pcVar4 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
      }
      lVar3 = lVar3 + 0x20;
      pcVar4 = pcVar4 + -0x20;
    } while (lVar3 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}


