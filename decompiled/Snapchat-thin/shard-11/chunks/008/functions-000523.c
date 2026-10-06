/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108904ad4; end: 108904afb;  */

void FUN_108904ad4(void)

{
  long extraout_x8;
  
  func_0x000107c34960();
  if (extraout_x8 != 0) {
    func_0x000107c3495c();
  }
  return;
}



/* Entry: 108904afc; end: 108904d2f;  */

void FUN_108904afc(void)

{
  func_0x000107c34958();
  func_0x000107c2a454();
  return;
}



/* Entry: 108904d30; end: 108904da7;  */

undefined8 * FUN_108904d30(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000108905240();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001089051ec();
  }
  else {
    param_1 = unaff_x19;
    func_0x0001089051f4();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110a8ffe8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108905038();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2a26c();
  }
  param_1[3] = unaff_x19;
  return param_1;
}



/* Entry: 108904da8; end: 108904eb7;  */

undefined8 * FUN_108904da8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c34950();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    param_2 = 0x50;
    func_0x00010b4d80e0();
  }
  func_0x000107c34954();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_DAT_110cfc0d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)unaff_x20 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b51f9c0();
  unaff_x20[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b51f9c0();
  unaff_x20[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b51f9c0();
  unaff_x20[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b51f9c0();
  unaff_x20[6] = lVar1;
  if ((*(byte *)(unaff_x20 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b51f928(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  unaff_x20[7] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  unaff_x20[9] = *(undefined8 *)(param_3 + 0x48);
  unaff_x20[8] = uVar2;
  return unaff_x20;
}



/* Entry: 108904eb8; end: 108904f27;  */

undefined8 * FUN_108904eb8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110a8fea8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_108903a0c();
  return puVar1;
}



/* Entry: 108904f28; end: 108904f3b;  */

void FUN_108904f28(ulong *param_1)

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



/* Entry: 108904f3c; end: 108904f9f;  */

long FUN_108904f3c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c34950();
  if (param_1 == 0) {
    func_0x0001089051fc();
  }
  else {
    func_0x0001089051c4();
  }
  func_0x000107c34954();
  func_0x000107c349e8();
  func_0x000107c34a08(&PTR_FUN_110a920e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  FUN_108911158(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 108904fa0; end: 1089052c3;  */

void FUN_108904fa0(void)

{
  return;
}



/* Entry: 1089052c4; end: 1089052ef;  */

undefined8 FUN_1089052c4(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_1089052f0(param_1);
  return param_1;
}



/* Entry: 1089052f0; end: 108905337;  */

void FUN_1089052f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108905338; end: 10890533b;  */

undefined8 FUN_108905338(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_1089052f0(param_1);
  return param_1;
}



/* Entry: 10890533c; end: 10890534f;  */

void FUN_10890533c(void)

{
  FUN_1089052c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108905350; end: 10890535b;  */

undefined ** FUN_108905350(void)

{
  return &PTR_DAT_110a907f0;
}



/* Entry: 10890535c; end: 1089053cb;  */

void FUN_10890535c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108907698();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 1089053cc; end: 1089055d3;  */

long * FUN_1089053cc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  func_0x0001089074c8();
  plVar2 = param_1;
  if (param_1[6] != 0) {
    func_0x00010890744c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x0001089074a0();
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    plVar2 = (long *)0x2;
    func_0x000108907564();
    param_4 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    plVar2 = (long *)0x4;
    func_0x000108907564();
    param_4 = plVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    plVar2 = (long *)0x6;
    func_0x000108907564();
    param_4 = plVar2;
  }
  plVar5 = plVar2;
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x00010890744c();
    plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0x38);
    uVar3 = 0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x000107c280b8(plVar5,uVar3);
    param_4 = plVar5;
  }
  plVar2 = plVar5;
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    func_0x00010890744c();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar5);
    func_0x00010890756c();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    func_0x00010890744c();
    param_4 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010890756c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001089075b0();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar6 = (int)param_3;
    uVar1 = iVar6 - iVar7;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 1089055d4; end: 1089055d7;  */

void FUN_1089055d4(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108907500();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3d) = 1;
  }
  func_0x0001089075a0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010890754c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089055d8; end: 1089056cf;  */

void FUN_1089055d8(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108907500();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3d) = 1;
  }
  func_0x0001089075a0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010890754c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089056d0; end: 108905703;  */

void FUN_1089056d0(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108907594();
  FUN_10890535c();
  puVar2 = unaff_x20;
  func_0x000108907500();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  uVar1 = (uint)unaff_x20[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x18);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x20);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x28);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (unaff_x20[6] != 0) {
    *(ulong *)(unaff_x21 + 0x30) = unaff_x20[6];
  }
  if ((int)unaff_x20[7] != 0) {
    *(int *)(unaff_x21 + 0x38) = (int)unaff_x20[7];
  }
  if (*(char *)((long)unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3c) = 1;
  }
  if (*(char *)((long)unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x3d) = 1;
  }
  func_0x0001089075a0();
  if ((unaff_x20[1] & 1) == 0) {
    return;
  }
  func_0x00010890754c();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108905704; end: 10890571f;  */

undefined1  [16] FUN_108905704(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x0001089075e8();
  puVar1 = param_1 + 0x26;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 108905720; end: 1089057ef;  */

void FUN_108905720(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x70) == 8) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108907614();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10890577c;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_1088f5d84();
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) != 3) goto LAB_10890577c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108907614();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10890577c;
    if (*(long *)(param_1 + 0x60) != 0) {
      func_0x000107c2a3a8();
    }
  }
  __ZdlPv();
LAB_10890577c:
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1089057f0; end: 1089058f7;  */

undefined8 * FUN_1089057f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a90710;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000108900070(param_1 + 3,param_2,param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x70);
  *(int *)(param_1 + 0xe) = iVar2;
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_3 + 0x74);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    FUN_1089071e4(param_2,*(undefined8 *)(param_3 + 0x30));
    iVar2 = *(int *)(param_1 + 0xe);
  }
  param_1[6] = uVar1;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_3 + 0x58);
  param_1[10] = uVar5;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[7] = uVar1;
  uVar1 = param_2;
  if (iVar2 == 8) {
    func_0x000108907278(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  else {
    if (iVar2 != 3) goto LAB_1089058bc;
    FUN_108900670(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar1;
LAB_1089058bc:
  if (*(int *)((long)param_1 + 0x74) == 7) {
    param_1[0xd] = *(undefined8 *)(param_3 + 0x68);
  }
  else if (*(int *)((long)param_1 + 0x74) == 6) {
    func_0x0001089072b0(param_2,*(undefined8 *)(param_3 + 0x68));
    param_1[0xd] = param_2;
  }
  return param_1;
}



/* Entry: 1089058f8; end: 108905923;  */

undefined8 FUN_1089058f8(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108905924(param_1);
  return param_1;
}



/* Entry: 108905924; end: 108905973;  */

long * FUN_108905924(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10890604c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_108905720(param_1);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    func_0x0001089057a0(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108901f58();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 108905974; end: 108905977;  */

undefined8 FUN_108905974(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108905924(param_1);
  return param_1;
}



/* Entry: 108905978; end: 10890598b;  */

void FUN_108905978(void)

{
  FUN_1089058f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890598c; end: 108905997;  */

undefined ** FUN_10890598c(void)

{
  return &PTR_DAT_110a90838;
}



/* Entry: 108905998; end: 108905a3b;  */

void FUN_108905998(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001089076b0();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001089059f8(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  FUN_108905720();
  func_0x0001089057a0();
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



/* Entry: 108905a3c; end: 108905c1b;  */

long * FUN_108905a3c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001089074c8();
  plVar2 = param_1;
  if (param_1[7] != 0) {
    func_0x00010890744c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x0001089074a0();
    param_2 = param_1;
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010890744c();
    plVar3 = (long *)0x10;
    func_0x000107c280a8();
    func_0x0001089074a0();
    param_2 = plVar2;
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x70) == 3) {
    param_2 = *(long **)(unaff_x20 + 0x60);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar3 = (long *)0x3;
    func_0x000108907564();
    param_4 = plVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (iVar5 != 0) {
    func_0x0001089074ac();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar3 = (long *)0x4;
    func_0x000108907564();
    func_0x0001089076e8();
  }
  plVar2 = plVar3;
  if ((*(byte *)(unaff_x20 + 0x58) & 1) != 0) {
    func_0x00010890744c();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010890756c();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x74) == 7) {
    func_0x00010890744c();
    plVar3 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x0001089074a0();
    param_4 = plVar3;
  }
  else {
    plVar3 = plVar2;
    if (*(int *)(unaff_x20 + 0x74) == 6) {
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
      plVar3 = (long *)0x6;
      func_0x000108907564();
      param_4 = plVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x70) == 8) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    plVar3 = (long *)0x8;
    func_0x000108907564();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010890744c();
    plVar2 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar3);
    func_0x0001089074a0();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x00010890744c();
    param_4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar2);
    func_0x0001089074a0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0xb;
    func_0x000108907564();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001089075b0();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 108905c1c; end: 108905d4f;  */

long FUN_108905c1c(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001089076dc();
  func_0x000108907514();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_1088f34c8();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_1089061d8();
    func_0x000108907458();
    unaff_x20 = unaff_x20 + lVar1 + extraout_x8 + 1;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x0001089074e8();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x0001089074e8();
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    func_0x0001089074e8();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    func_0x0001089074e8();
  }
  lVar1 = unaff_x20 + (ulong)*(byte *)(unaff_x19 + 0x58) * 2;
  if (*(int *)(unaff_x19 + 0x70) == 8) {
    lVar2 = *(long *)(unaff_x19 + 0x60);
    FUN_1088f5f30();
    func_0x000108907458();
    lVar1 = lVar1 + lVar2 + extraout_x8_00;
  }
  else {
    if (*(int *)(unaff_x19 + 0x70) != 3) goto LAB_108905ce8;
    lVar2 = *(long *)(unaff_x19 + 0x60);
    func_0x0001088f92dc();
    lVar1 = lVar1 + lVar2;
  }
  lVar1 = lVar1 + 1;
LAB_108905ce8:
  if (*(int *)(unaff_x19 + 0x74) == 7) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(unaff_x19 + 0x68)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  else if (*(int *)(unaff_x19 + 0x74) == 6) {
    FUN_1088ea97c(*(undefined8 *)(unaff_x19 + 0x68));
    func_0x0001089076bc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001089075d4();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108905d50; end: 108905d53;  */

void FUN_108905d50(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  func_0x00010890768c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_1089071e4();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      func_0x000108905f28();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  if (*(ulong *)(unaff_x20 + 0x48) != 0) {
    unaff_x21[9] = *(ulong *)(unaff_x20 + 0x48);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x0001089075a0();
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 == 0) goto LAB_108905e90;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_108905720();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_1088f5fd8();
      goto LAB_108905e90;
    }
    param_1 = unaff_x22;
    func_0x000108907278();
  }
  else {
    if (iVar1 != 3) goto LAB_108905e90;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_1088f5078();
      goto LAB_108905e90;
    }
    param_1 = unaff_x22;
    FUN_108900670();
  }
  unaff_x21[0xc] = (ulong)param_1;
LAB_108905e90:
  iVar1 = *(int *)(unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x0001089057a0();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = *(ulong *)(unaff_x20 + 0x68);
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        param_1 = (ulong *)unaff_x21[0xd];
        FUN_1088ec278();
      }
      else {
        func_0x0001089072b0();
        unaff_x21[0xd] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890754c();
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



/* Entry: 108905d54; end: 108905fab;  */

void FUN_108905d54(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  func_0x00010890768c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_1089071e4();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      func_0x000108905f28();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  if (*(ulong *)(unaff_x20 + 0x48) != 0) {
    unaff_x21[9] = *(ulong *)(unaff_x20 + 0x48);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x0001089075a0();
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 == 0) goto LAB_108905e90;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_108905720();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_1088f5fd8();
      goto LAB_108905e90;
    }
    param_1 = unaff_x22;
    func_0x000108907278();
  }
  else {
    if (iVar1 != 3) goto LAB_108905e90;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_1088f5078();
      goto LAB_108905e90;
    }
    param_1 = unaff_x22;
    FUN_108900670();
  }
  unaff_x21[0xc] = (ulong)param_1;
LAB_108905e90:
  iVar1 = *(int *)(unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x0001089057a0();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = *(ulong *)(unaff_x20 + 0x68);
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        param_1 = (ulong *)unaff_x21[0xd];
        FUN_1088ec278();
      }
      else {
        func_0x0001089072b0();
        unaff_x21[0xd] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890754c();
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



/* Entry: 108905fac; end: 10890604b;  */

void FUN_108905fac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108907594();
  FUN_108905998();
  puVar3 = unaff_x20;
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  func_0x00010890768c();
  if ((unaff_x20[2] & 1) != 0) {
    puVar3 = (ulong *)unaff_x21[6];
    if (puVar3 == (ulong *)0x0) {
      puVar3 = unaff_x22;
      FUN_1089071e4();
      unaff_x21[6] = (ulong)puVar3;
    }
    else {
      func_0x000108905f28();
    }
  }
  if (unaff_x20[7] != 0) {
    unaff_x21[7] = unaff_x20[7];
  }
  if (unaff_x20[8] != 0) {
    unaff_x21[8] = unaff_x20[8];
  }
  if (unaff_x20[9] != 0) {
    unaff_x21[9] = unaff_x20[9];
  }
  if (unaff_x20[10] != 0) {
    unaff_x21[10] = unaff_x20[10];
  }
  if ((char)unaff_x20[0xb] == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x0001089075a0();
  iVar1 = (int)unaff_x20[0xe];
  if (iVar1 == 0) goto LAB_108905e90;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_108905720();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      puVar3 = (ulong *)unaff_x21[0xc];
      FUN_1088f5fd8();
      goto LAB_108905e90;
    }
    puVar3 = unaff_x22;
    func_0x000108907278();
  }
  else {
    if (iVar1 != 3) goto LAB_108905e90;
    if (iVar2 == 3) {
      puVar3 = (ulong *)unaff_x21[0xc];
      FUN_1088f5078();
      goto LAB_108905e90;
    }
    puVar3 = unaff_x22;
    FUN_108900670();
  }
  unaff_x21[0xc] = (ulong)puVar3;
LAB_108905e90:
  iVar1 = *(int *)((long)unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        func_0x0001089057a0();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = unaff_x20[0xd];
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        puVar3 = (ulong *)unaff_x21[0xd];
        FUN_1088ec278();
      }
      else {
        func_0x0001089072b0();
        unaff_x21[0xd] = (ulong)unaff_x22;
        puVar3 = unaff_x22;
      }
    }
  }
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00010890754c();
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



/* Entry: 10890604c; end: 108906077;  */

undefined8 FUN_10890604c(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108906078(param_1);
  return param_1;
}



/* Entry: 108906078; end: 1089060a7;  */

long * FUN_108906078(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_108906338();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108901f58();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 1089060a8; end: 1089060ab;  */

undefined8 FUN_1089060a8(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108906078(param_1);
  return param_1;
}



/* Entry: 1089060ac; end: 1089060bf;  */

void FUN_1089060ac(void)

{
  FUN_10890604c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089060c0; end: 1089060cb;  */

undefined ** FUN_1089060c0(void)

{
  return &PTR_DAT_110a90880;
}



/* Entry: 1089060cc; end: 1089060ff;  */

void FUN_1089060cc(long param_1)

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



/* Entry: 108906100; end: 1089061d7;  */

long * FUN_108906100(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001089074c8();
  lVar3 = param_1[4];
  while ((int)lVar3 != 0) {
    func_0x0001089074ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000108907538();
    func_0x0001089076e8();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_1 = (long *)0x2;
    func_0x000108907564();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x00010890744c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001089074a0();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010890744c();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x0001089074a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089075b0();
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



/* Entry: 1089061d8; end: 108906283;  */

long FUN_1089061d8(void)

{
  long lVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001089076dc();
  func_0x000108907514();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_1088f34c8();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_10890642c();
    func_0x000108907458();
    unaff_x20 = unaff_x20 + lVar1 + extraout_x8 + 1;
  }
  iVar2 = -9;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x000108907650();
    iVar2 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * iVar2 + 0x2c0U >> 6) + unaff_x20
    ;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001089075d4();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 108906284; end: 108906287;  */

void FUN_108906284(ulong *param_1)

{
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  func_0x00010890768c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x0001089072f0();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_108906288();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x0001089075a0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890754c();
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



/* Entry: 108906288; end: 1089062e3;  */

void FUN_108906288(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108907674();
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
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108907630();
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



/* Entry: 1089062e4; end: 108906337;  */

void FUN_1089062e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x000108907674();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110a90530;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c();
  unaff_x19[2] = param_3;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 108906338; end: 108906363;  */

long FUN_108906338(long param_1)

{
  func_0x00010890758c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108906364; end: 108906367;  */

long FUN_108906364(long param_1)

{
  func_0x00010890758c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108906368; end: 10890637b;  */

void FUN_108906368(void)

{
  FUN_108906338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890637c; end: 108906387;  */

undefined ** FUN_10890637c(void)

{
  return &PTR_DAT_110a908d0;
}



/* Entry: 108906388; end: 10890642b;  */

long * FUN_108906388(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_1089063f4;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_1089063f4;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f4ec2d0);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_1089063f4:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001089075b0();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 10890642c; end: 10890648f;  */

void FUN_10890642c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_108906464;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_108906464:
    iVar1 = 0;
    goto LAB_108906468;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_108906468:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001089075d4();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 108906490; end: 108906493;  */

void FUN_108906490(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108907674();
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
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108907630();
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



/* Entry: 108906494; end: 1089064c7;  */

void FUN_108906494(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  ulong *unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108907594();
  FUN_1089060cc();
  puVar1 = unaff_x20;
  lVar4 = unaff_x19;
  func_0x000108907674();
  uVar2 = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((unaff_x20[1] & 1) != 0) {
    func_0x000108907630();
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



/* Entry: 1089064c8; end: 1089064f3;  */

long FUN_1089064c8(long param_1)

{
  func_0x00010890758c();
  FUN_108907058(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089064f4; end: 1089064f7;  */

long FUN_1089064f4(long param_1)

{
  func_0x00010890758c();
  FUN_108907058(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089064f8; end: 10890650b;  */

void FUN_1089064f8(void)

{
  FUN_1089064c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890650c; end: 108906517;  */

undefined ** FUN_10890650c(void)

{
  return &PTR_DAT_110a90918;
}



/* Entry: 108906518; end: 108906557;  */

void FUN_108906518(long param_1)

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



/* Entry: 108906558; end: 108906647;  */

long * FUN_108906558(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089074c8();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001089074ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000108907538();
    func_0x0001089076e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089075b0();
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



/* Entry: 108906648; end: 108906687;  */

void FUN_108906648(ulong *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108907674();
  if (*(int *)(param_2 + 0x18) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c303c4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108907630();
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



/* Entry: 108906688; end: 1089066b3;  */

long FUN_108906688(long param_1)

{
  func_0x00010890758c();
  FUN_1088f259c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089066b4; end: 1089066b7;  */

long FUN_1089066b4(long param_1)

{
  func_0x00010890758c();
  FUN_1088f259c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089066b8; end: 1089066cb;  */

void FUN_1089066b8(void)

{
  FUN_108906688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089066cc; end: 1089066d7;  */

undefined ** FUN_1089066cc(void)

{
  return &PTR_DAT_110a90968;
}



/* Entry: 1089066d8; end: 10890670b;  */

void FUN_1089066d8(long param_1)

{
  ulong *puVar1;
  
  FUN_1088f27dc(param_1 + 0x10);
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



/* Entry: 10890670c; end: 10890677f;  */

long * FUN_10890670c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089074c8();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001089074ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000108907538();
    func_0x0001089076e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089075b0();
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



/* Entry: 108906780; end: 1089067df;  */

long FUN_108906780(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001089076dc();
  func_0x000108907514();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_1088f0f0c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001089075d4();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1089067e0; end: 1089068c7;  */

void FUN_1089067e0(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000108907674();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088f0f60();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108907630();
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



/* Entry: 1089068c8; end: 1089068fb;  */

long FUN_1089068c8(long param_1)

{
  func_0x00010890758c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000108906818(param_1);
  }
  return param_1;
}



/* Entry: 1089068fc; end: 1089068ff;  */

long FUN_1089068fc(long param_1)

{
  func_0x00010890758c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000108906818(param_1);
  }
  return param_1;
}



/* Entry: 108906900; end: 108906913;  */

void FUN_108906900(void)

{
  FUN_1089068c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108906914; end: 108906927;  */

undefined8 FUN_108906914(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108906ce8(param_1);
  return param_1;
}



/* Entry: 108906928; end: 108906a3f;  */

void FUN_108906928(long param_1)

{
  ulong *puVar1;
  
  func_0x000108906818();
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



/* Entry: 108906a40; end: 108906a77;  */

long FUN_108906a40(long param_1)

{
  long extraout_x8;
  
  func_0x000108906e34();
  func_0x000108907458();
  return param_1 + extraout_x8;
}



/* Entry: 108906a78; end: 108906c2f;  */

void FUN_108906a78(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_108906b70;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000108906818();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x000108907640();
      FUN_108906c30();
      goto LAB_108906b70;
    }
    func_0x0001089073cc();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x000108907640();
      func_0x000108906b8c();
      goto LAB_108906b70;
    }
    FUN_10890732c();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_108906b70;
    if (iVar2 == 1) {
      func_0x000108907640();
      FUN_108905d54();
      goto LAB_108906b70;
    }
    func_0x0001088b6ce4();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_108906b70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890754c();
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



/* Entry: 108906c30; end: 108906cbb;  */

void FUN_108906c30(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_1088bf398();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010890754c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 108906cbc; end: 108906ce7;  */

undefined8 FUN_108906cbc(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108906ce8(param_1);
  return param_1;
}



/* Entry: 108906ce8; end: 108906d1f;  */

void FUN_108906ce8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b93c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108906d20; end: 108906d33;  */

void FUN_108906d20(void)

{
  FUN_108906cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108906d34; end: 108906d3f;  */

undefined ** FUN_108906d34(void)

{
  return &PTR_DAT_110a90a08;
}



/* Entry: 108906d40; end: 108906d93;  */

void FUN_108906d40(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108907698();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088b9464(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
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



/* Entry: 108906d94; end: 108906eb3;  */

long * FUN_108906d94(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089074c8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000108907538();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x2;
    func_0x000108907564();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x00010890744c();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010890756c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089075b0();
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



/* Entry: 108906eb4; end: 108906eb7;  */

void FUN_108906eb4(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x000108907620();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1088f0114();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  func_0x0001089075a0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010890754c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108906eb8; end: 108906ee3;  */

undefined8 FUN_108906eb8(undefined8 param_1)

{
  func_0x00010890758c();
  FUN_108906ee4(param_1);
  return param_1;
}



/* Entry: 108906ee4; end: 108906f13;  */

void FUN_108906ee4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108906f14; end: 108906f1f;  */

undefined ** FUN_108906f14(void)

{
  return &PTR_DAT_110a90a58;
}



/* Entry: 108906f20; end: 10890700b;  */

void FUN_108906f20(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000108907698();
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



/* Entry: 10890700c; end: 108907057;  */

void FUN_10890700c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_1088bf398();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010890754c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 108907058; end: 108907087;  */

long * FUN_108907058(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108907088; end: 1089071e3;  */

void FUN_108907088(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001089075e0();
  }
  else {
    func_0x000108907578();
  }
  *puVar1 = &PTR_FUN_110a90530;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1089071e4; end: 108907277;  */

undefined8 * FUN_1089071e4(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  func_0x000108907594();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    func_0x000108907680();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110a906c0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000108900070(param_1 + 3);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001089072f0();
  }
  param_1[6] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  param_1[8] = *(undefined8 *)(unaff_x19 + 0x40);
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 108907278; end: 10890732b;  */

long FUN_108907278(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000108907594();
  if (param_1 == 0) {
    param_1 = 0x48;
    __Znwm();
  }
  else {
    func_0x000108907680();
  }
  func_0x000107c348d8();
  func_0x000107c34930(&PTR_FUN_110a8d468);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  func_0x000107c3492c();
  FUN_1088f7e44();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c3490c();
  }
  *(long *)(unaff_x19 + 0x30) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a378();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  return unaff_x19;
}



/* Entry: 10890732c; end: 10890743f;  */

undefined8 * FUN_10890732c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108907594();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108907628();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110a90670;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    func_0x000107c2a26c();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_1088f0114();
  }
  param_1[4] = unaff_x20;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 108907440; end: 1089076f3;  */

void FUN_108907440(void)

{
  return;
}



/* Entry: 1089076f4; end: 10890771f;  */

void FUN_1089076f4(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34980();
  if (param_1 != 0) {
    FUN_108908960();
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) & 0xfffffffe;
  return;
}



/* Entry: 108907720; end: 108907723;  */

undefined8 FUN_108907720(undefined8 param_1)

{
  func_0x0001006907a0();
  func_0x0001006907e0(param_1);
  return param_1;
}



/* Entry: 108907724; end: 108907737;  */

void FUN_108907724(void)

{
  func_0x000107c2a484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108907738; end: 108907753;  */

undefined8 FUN_108907738(undefined8 param_1)

{
  func_0x0001006907a0();
  func_0x000100690aa0(param_1);
  return param_1;
}



/* Entry: 108907754; end: 1089078d3;  */

void FUN_108907754(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108908898();
  if ((extraout_x8 & 1) != 0) {
    FUN_108908960(*(undefined8 *)(unaff_x19 + 0x18));
  }
  func_0x000107c2a47c();
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



/* Entry: 1089078d4; end: 10890795f;  */

long FUN_1089078d4(long param_1)

{
  long extraout_x8;
  
  func_0x000108908a04();
  FUN_108908768();
  return param_1 + extraout_x8;
}



/* Entry: 108907960; end: 108907963;  */

void FUN_108907960(ulong param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  func_0x0001089087dc();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x21 + 0x18);
    if (param_1 == 0) {
      func_0x000107c2a49c();
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
      param_1 = uVar3;
    }
    else {
      FUN_108908ac4();
    }
  }
  func_0x000108908810();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x000107c2a47c();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ae0();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000107c2a4a0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ba4();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908598();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907c50();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908634();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907cbc();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x0001089086a8();
      break;
    default:
      goto LAB_108907ac0;
    }
    *(ulong *)(unaff_x21 + 0x20) = param_1;
  }
LAB_108907ac0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089087fc();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 108907964; end: 108907c4f;  */

void FUN_108907964(ulong param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  func_0x0001089087dc();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x21 + 0x18);
    if (param_1 == 0) {
      func_0x000107c2a49c();
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
      param_1 = uVar3;
    }
    else {
      FUN_108908ac4();
    }
  }
  func_0x000108908810();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x000107c2a47c();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ae0();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000107c2a4a0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ba4();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908598();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907c50();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908634();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907cbc();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x0001089086a8();
      break;
    default:
      goto LAB_108907ac0;
    }
    *(ulong *)(unaff_x21 + 0x20) = param_1;
  }
LAB_108907ac0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089087fc();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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


