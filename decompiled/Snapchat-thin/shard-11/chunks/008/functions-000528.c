/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108910d24; end: 108910d37;  */

void FUN_108910d24(void)

{
  FUN_108910cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910d38; end: 108910d43;  */

undefined ** FUN_108910d38(void)

{
  return &PTR_DAT_110a930e8;
}



/* Entry: 108910d44; end: 108910d7f;  */

void FUN_108910d44(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912a58();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 108910d80; end: 108910e23;  */

long * FUN_108910d80(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((int)param_1[4] != 0) {
    func_0x000108912508();
    func_0x000108912820();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)0x2;
    func_0x00010891270c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x000108912508();
    func_0x000108912aa4();
    func_0x0001089125d8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
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



/* Entry: 108910e24; end: 108910e9f;  */

void FUN_108910e24(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108912a70();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108912618((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001089125e4((int)LZCOUNT(*(int *)(unaff_x19 + 0x24)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 108910ea0; end: 108910f13;  */

void FUN_108910ea0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      FUN_108911c78();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912af0();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
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



/* Entry: 108910f14; end: 108910f17;  */

undefined8 FUN_108910f14(undefined8 param_1)

{
  func_0x000100690ae4();
  func_0x00010069b390(param_1);
  return param_1;
}



/* Entry: 108910f18; end: 108910f2b;  */

void FUN_108910f18(void)

{
  func_0x000107c2a544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910f2c; end: 108910f37;  */

undefined ** FUN_108910f2c(void)

{
  return &PTR_DAT_110a93130;
}



/* Entry: 108910f38; end: 108910fa7;  */

long * FUN_108910f38(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x000108912558();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000108912508();
    func_0x000108912808();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
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



/* Entry: 108910fa8; end: 10891100b;  */

void FUN_108910fa8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108912a60();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108912618((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10891100c; end: 108911157;  */

void FUN_10891100c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
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



/* Entry: 108911158; end: 108911177;  */

void FUN_108911158(void)

{
  func_0x000108912b58();
  FUN_10890b820();
  return;
}



/* Entry: 108911178; end: 10891119f;  */

void FUN_108911178(void)

{
  long extraout_x8;
  
  func_0x000107c34a18();
  if (extraout_x8 != 0) {
    func_0x0001089129dc();
  }
  return;
}



/* Entry: 1089111a0; end: 1089111c7;  */

void FUN_1089111a0(void)

{
  long extraout_x8;
  
  func_0x000107c34a18();
  if (extraout_x8 != 0) {
    func_0x0001089129dc();
  }
  return;
}



/* Entry: 1089111c8; end: 1089111e7;  */

void FUN_1089111c8(void)

{
  func_0x000108912b58();
  FUN_108910b04();
  return;
}



/* Entry: 1089111e8; end: 10891120f;  */

void FUN_1089111e8(void)

{
  long extraout_x8;
  
  func_0x000107c34a18();
  if (extraout_x8 != 0) {
    func_0x0001089129dc();
  }
  return;
}



/* Entry: 108911210; end: 1089116e7;  */

void FUN_108911210(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891258c();
  }
  *puVar1 = &PTR_DAT_110a91410;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1089116e8; end: 1089118c7;  */

void FUN_1089116e8(long param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c34a04();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x0001089126d0();
  }
  func_0x000107c34a1c();
  func_0x000107c34a14(&PTR_DAT_110a92040);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  func_0x000107c349f4();
  switch(extraout_w8) {
  case 1:
    func_0x000107c349d8();
    FUN_108912038();
    break;
  case 2:
    func_0x000107c349d8();
    FUN_10891208c();
    break;
  case 3:
    func_0x000107c349d8();
    FUN_1089120e4();
    break;
  case 4:
    func_0x000107c349d8();
    FUN_108912134();
    break;
  case 5:
    func_0x000107c349d8();
    FUN_108912184();
    break;
  case 6:
    func_0x000107c349d8();
    FUN_1089121d4();
    break;
  case 7:
    func_0x000107c349d8();
    FUN_108912240();
    break;
  case 8:
    func_0x000107c349d8();
    FUN_108912290();
    break;
  case 9:
    func_0x000107c349d8();
    FUN_1089122e0();
    break;
  case 10:
    func_0x000107c349d8();
    FUN_108912330();
    break;
  case 0xb:
    func_0x000107c349d8();
    FUN_108912384();
    break;
  case 0xc:
    func_0x000107c349d8();
    FUN_1089123d8();
    break;
  default:
    goto code_r0x00010068fcb4;
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
code_r0x00010068fcb4:
  return;
}



/* Entry: 1089118c8; end: 108911923;  */

undefined8 * FUN_1089118c8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c349e0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c349cc();
  }
  else {
    func_0x000108912a78();
  }
  *param_1 = &PTR_FUN_110a91b40;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10890c0dc();
  return param_1;
}



/* Entry: 108911924; end: 10891197b;  */

long FUN_108911924(long param_1)

{
  long unaff_x21;
  
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x000108912790();
    param_1 = unaff_x21;
  }
  func_0x0001089129e4(&PTR_FUN_110a91aa0);
  FUN_10890c1d0();
  return param_1;
}



/* Entry: 10891197c; end: 1089119f3;  */

void FUN_10891197c(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c349e0();
  if (param_1 == 0) {
    func_0x000108912844();
  }
  else {
    func_0x00010891284c();
  }
  func_0x000108912b1c();
  func_0x000108912b28(&PTR_FUN_110a91fa0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1089119f4; end: 108911a4f;  */

undefined8 * FUN_1089119f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c349e0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c349cc();
  }
  else {
    func_0x000108912a78();
  }
  *param_1 = &PTR_FUN_110a919b0;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10890d250();
  return param_1;
}



/* Entry: 108911a50; end: 108911ac3;  */

void FUN_108911a50(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c34a04();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x0001089126d0();
  }
  func_0x000107c34a1c();
  func_0x000107c34a14(&PTR_DAT_110a91f50);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  func_0x000107c349f4();
  if (extraout_w8 == 2) {
    func_0x000107c349d8();
    FUN_108911924();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x000107c349d8();
    FUN_1089118c8();
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 108911ac4; end: 108911af7;  */

long FUN_108911ac4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  
  func_0x000107c349e0();
  if (param_1 == 0) {
    func_0x000108912844();
  }
  else {
    func_0x00010891284c();
    param_1 = unaff_x20;
  }
  func_0x000107c34a10();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010068f86c(&PTR_FUN_110a91e60);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010068e734(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 108911af8; end: 108911b6f;  */

void FUN_108911af8(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c349e0();
  if (param_1 == 0) {
    func_0x000108912844();
  }
  else {
    func_0x00010891284c();
  }
  func_0x000108912b1c();
  func_0x000108912b28(&PTR_FUN_110a92220);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_108912428();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x20;
  *(undefined1 *)(unaff_x21 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 108911b70; end: 108911bc7;  */

long FUN_108911b70(long param_1)

{
  long unaff_x21;
  
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x000108912790();
    param_1 = unaff_x21;
  }
  func_0x0001089129e4(&PTR_DAT_110a91780);
  FUN_10890d338();
  return param_1;
}



/* Entry: 108911bc8; end: 108911c1b;  */

long FUN_108911bc8(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x000108912b34(&PTR_DAT_110a91870);
  func_0x00010890d360();
  return param_1;
}



/* Entry: 108911c1c; end: 108911c77;  */

void FUN_108911c1c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x000108912798();
  if (param_1 == 0) {
    func_0x0001089129d4();
  }
  else {
    func_0x0001089128c8();
  }
  func_0x000108912930();
  func_0x00010891293c(&PTR_DAT_110a91dc0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  func_0x000107c296d0(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 108911c78; end: 108911ca7;  */

undefined8 * FUN_108911c78(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c349e0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c349e4();
  }
  else {
    func_0x0001089126d0();
  }
  func_0x000107c34a10();
  *param_1 = &PTR_DAT_110d17b40;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5b9228();
  return param_1;
}



/* Entry: 108911ca8; end: 108911cf7;  */

void FUN_108911ca8(long param_1)

{
  ulong extraout_x8;
  
  func_0x000108912798();
  if (param_1 == 0) {
    func_0x000108912844();
  }
  else {
    func_0x0001089126ec();
  }
  func_0x000108912930();
  func_0x00010891293c(&PTR_FUN_110a91a50);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  func_0x0001089127ec();
  func_0x0001089126c0();
  func_0x000108912a04();
  return;
}



/* Entry: 108911cf8; end: 108911da3;  */

void FUN_108911cf8(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c349e0();
  if (param_1 == 0) {
    __Znwm(0x50);
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000108912b1c();
  func_0x000108912b28(&PTR_DAT_110a92090);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  FUN_10890e8b0((undefined8 *)(unaff_x21 + 0x10),unaff_x19 + 0x10);
  lVar1 = unaff_x19 + 0x28;
  func_0x000107c349fc();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  lVar1 = unaff_x19 + 0x30;
  func_0x000107c349fc();
  *(long *)(unaff_x21 + 0x30) = lVar1;
  lVar1 = unaff_x19 + 0x38;
  func_0x000107c349fc();
  *(long *)(unaff_x21 + 0x38) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x48) = 0;
  *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 108911da4; end: 108911f3b;  */

void FUN_108911da4(long param_1)

{
  ulong extraout_x8;
  
  func_0x000108912798();
  if (param_1 == 0) {
    func_0x000108912844();
  }
  else {
    func_0x0001089126ec();
  }
  func_0x000108912930();
  func_0x00010891293c(&PTR_DAT_110a91be0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  func_0x0001089127ec();
  func_0x0001089126c0();
  func_0x000108912a04();
  return;
}



/* Entry: 108911f3c; end: 108911f8b;  */

long FUN_108911f3c(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_FUN_110a91960);
  FUN_10890f56c();
  return param_1;
}



/* Entry: 108911f8c; end: 108911fdb;  */

long FUN_108911f8c(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a91910);
  func_0x00010890f57c();
  return param_1;
}



/* Entry: 108911fdc; end: 108912037;  */

undefined8 * FUN_108911fdc(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000107c349ec();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  *param_1 = &PTR_FUN_110a91820;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_10890f71c();
  return param_1;
}



/* Entry: 108912038; end: 10891208b;  */

long FUN_108912038(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x000108912b34(&PTR_FUN_110a91460);
  FUN_10890fdc4();
  return param_1;
}



/* Entry: 10891208c; end: 1089120e3;  */

long FUN_10891208c(long param_1)

{
  long unaff_x21;
  
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x000108912790();
    param_1 = unaff_x21;
  }
  func_0x0001089129e4(&PTR_DAT_110a91730);
  func_0x00010890fde4();
  return param_1;
}



/* Entry: 1089120e4; end: 108912133;  */

long FUN_1089120e4(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a915a0);
  func_0x00010890fe0c();
  return param_1;
}



/* Entry: 108912134; end: 108912183;  */

long FUN_108912134(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a915f0);
  func_0x00010890fe18();
  return param_1;
}



/* Entry: 108912184; end: 1089121d3;  */

long FUN_108912184(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a914b0);
  func_0x00010890fe24();
  return param_1;
}



/* Entry: 1089121d4; end: 10891223f;  */

void FUN_1089121d4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108912798();
  if (param_1 == 0) {
    func_0x000107c349e4();
  }
  else {
    func_0x000108912680();
  }
  func_0x000108912930();
  func_0x00010891293c(&PTR_DAT_110a91d20);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 108912240; end: 10891228f;  */

long FUN_108912240(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a91690);
  FUN_10890fe8c();
  return param_1;
}



/* Entry: 108912290; end: 1089122df;  */

long FUN_108912290(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a91550);
  func_0x00010890fe98();
  return param_1;
}



/* Entry: 1089122e0; end: 10891232f;  */

long FUN_1089122e0(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a91640);
  func_0x00010890fea4();
  return param_1;
}



/* Entry: 108912330; end: 108912383;  */

long FUN_108912330(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x000108912b34(&PTR_DAT_110a916e0);
  func_0x00010890feb0();
  return param_1;
}



/* Entry: 108912384; end: 1089123d7;  */

long FUN_108912384(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x000108912b34(&PTR_DAT_110a91410);
  func_0x00010890fecc();
  return param_1;
}



/* Entry: 1089123d8; end: 108912427;  */

long FUN_1089123d8(long param_1)

{
  func_0x000107c349ec();
  if (param_1 == 0) {
    func_0x000107c349cc();
  }
  else {
    func_0x00010891254c();
  }
  func_0x0001089126b0(&PTR_DAT_110a91500);
  func_0x00010890fee8();
  return param_1;
}



/* Entry: 108912428; end: 10891245f;  */

long FUN_108912428(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c349e0();
  if (param_1 == 0) {
    func_0x0001089129d4();
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000107c34a10();
  func_0x000107c349e8();
  func_0x000107c34a08(&PTR_FUN_110a91ff0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  FUN_1089111c8(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 108912460; end: 108912b83;  */

void FUN_108912460(void)

{
  return;
}



/* Entry: 108912b84; end: 108912edb;  */

void FUN_108912b84(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001089160f0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108912bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df705b0)[extraout_x8] * 4 + 0x108912bb0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 108912edc; end: 108912f07;  */

undefined8 FUN_108912edc(undefined8 param_1)

{
  func_0x000108915dec();
  FUN_108912f08(param_1);
  return param_1;
}



/* Entry: 108912f08; end: 108912f1b;  */

void FUN_108912f08(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001089160f0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108912bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df705b0)[extraout_x8] * 4 + 0x108912bb0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 108912f1c; end: 108912f2f;  */

void FUN_108912f1c(void)

{
  FUN_108912edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108912f30; end: 108912f7f;  */

undefined8 FUN_108912f30(undefined8 param_1)

{
  func_0x000108915dec();
  func_0x000108915ffc();
  return param_1;
}



/* Entry: 108912f80; end: 108913183;  */

void FUN_108912f80(long param_1)

{
  ulong *puVar1;
  
  FUN_108912b84();
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



/* Entry: 108913184; end: 1089131bb;  */

long FUN_108913184(long param_1)

{
  long extraout_x8;
  
  FUN_1089142d4();
  func_0x000108915d2c();
  return param_1 + extraout_x8;
}



/* Entry: 1089131bc; end: 1089131bf;  */

void FUN_1089131bc(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  puVar3 = param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_108912b84();
      }
      *(int *)((long)param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913630();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915674();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bcd28();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088c67b0();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913678();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089156c0();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913698();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_10891571c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089136f4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915788();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891372c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089157bc();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bb37c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088dc334();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913748();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915820();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913760();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915878();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_10891377c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001089158cc();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089137ec();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x00010891594c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913834();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915998();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913850();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089159ec();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108927928();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a40();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891386c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a74();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089138bc();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915ab0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913910();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b24();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913968();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b90();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139b0();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915bdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139e4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915c3c();
      break;
    default:
      goto LAB_1089135fc;
    }
    param_1[2] = (ulong)puVar3;
  }
LAB_1089135fc:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 1089131c0; end: 10891362f;  */

void FUN_1089131c0(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  puVar3 = param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_108912b84();
      }
      *(int *)((long)param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913630();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915674();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bcd28();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088c67b0();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913678();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089156c0();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913698();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_10891571c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089136f4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915788();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891372c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089157bc();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bb37c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088dc334();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913748();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915820();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913760();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915878();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_10891377c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001089158cc();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089137ec();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x00010891594c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913834();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915998();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913850();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089159ec();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108927928();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a40();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891386c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a74();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089138bc();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915ab0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913910();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b24();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913968();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b90();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139b0();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915bdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139e4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915c3c();
      break;
    default:
      goto LAB_1089135fc;
    }
    param_1[2] = (ulong)puVar3;
  }
LAB_1089135fc:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 108913630; end: 108913677;  */

void FUN_108913630(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 108913678; end: 108913697;  */

void FUN_108913678(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 108913698; end: 1089136f3;  */

void FUN_108913698(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108915c90();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010b5a0460();
    }
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 1089136f4; end: 10891372b;  */

void FUN_1089136f4(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000108915f54();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x000107c296d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 10891372c; end: 10891377b;  */

void FUN_10891372c(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
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



/* Entry: 10891377c; end: 1089137eb;  */

void FUN_10891377c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 1089137ec; end: 108913833;  */

void FUN_1089137ec(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 108913834; end: 10891386b;  */

void FUN_108913834(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 10891386c; end: 10891390f;  */

void FUN_10891386c(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915f54();
  FUN_108915114(param_1 + 0x10,param_2 + 0x10);
  FUN_1088c9edc(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x000107c296d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 108913910; end: 108913967;  */

void FUN_108913910(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 108913968; end: 1089139af;  */

void FUN_108913968(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 1089139b0; end: 1089139ff;  */

void FUN_1089139b0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 108913a00; end: 108913a33;  */

void FUN_108913a00(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x19;
  ulong *unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108915f84();
  FUN_108912f80();
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  puVar3 = unaff_x20;
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x20 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_108912b84();
      }
      *(int *)((long)unaff_x20 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913630();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915674();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bcd28();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088c67b0();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913678();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089156c0();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913698();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_10891571c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089136f4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915788();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891372c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089157bc();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1088bb37c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001088dc334();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913748();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915820();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913760();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915878();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_10891377c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x0001089158cc();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_1089137ec();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x00010891594c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913834();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915998();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x000108913850();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_1089159ec();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108927928();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a40();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x00010891386c();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915a74();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089138bc();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915ab0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913910();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b24();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        FUN_108913968();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      func_0x000108915b90();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139b0();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915bdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108915ce8();
        func_0x0001089139e4();
        goto LAB_1089135fc;
      }
      func_0x000108915e80();
      FUN_108915c3c();
      break;
    default:
      goto LAB_1089135fc;
    }
    unaff_x20[2] = (ulong)puVar3;
  }
LAB_1089135fc:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108915f14();
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



/* Entry: 108913a34; end: 108913a67;  */

void FUN_108913a34(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 108913a68; end: 108913a8b;  */

undefined8 FUN_108913a68(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108913a8c; end: 108913a9f;  */

void FUN_108913a8c(void)

{
  FUN_108913a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108913aa0; end: 108913abf;  */

undefined ** FUN_108913aa0(void)

{
  return &PTR_DAT_110a93c20;
}



/* Entry: 108913ac0; end: 108913b1f;  */

long * FUN_108913ac0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((int)param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915da8();
    func_0x000108915de0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
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



/* Entry: 108913b20; end: 108913b4f;  */

long FUN_108913b20(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108915f2c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108913b50; end: 108913b73;  */

undefined8 FUN_108913b50(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108913b74; end: 108913b87;  */

void FUN_108913b74(void)

{
  FUN_108913b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108913b88; end: 108913ba7;  */

undefined ** FUN_108913b88(void)

{
  return &PTR_DAT_110a93c68;
}



/* Entry: 108913ba8; end: 108913c07;  */

long * FUN_108913ba8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((int)param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915da8();
    func_0x000108915de0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
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



/* Entry: 108913c08; end: 108913c37;  */

long FUN_108913c08(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108915f2c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108913c38; end: 108913c5b;  */

undefined8 FUN_108913c38(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108913c5c; end: 108913c6f;  */

void FUN_108913c5c(void)

{
  FUN_108913c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108913c70; end: 108913cfb;  */

undefined ** FUN_108913c70(void)

{
  return &PTR_DAT_110a93cb0;
}



/* Entry: 108913cfc; end: 108913d1f;  */

undefined8 FUN_108913cfc(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108913d20; end: 108913d33;  */

void FUN_108913d20(void)

{
  FUN_108913cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108913d34; end: 108913d53;  */

undefined ** FUN_108913d34(void)

{
  return &PTR_DAT_110a93cf0;
}



/* Entry: 108913d54; end: 108913dbb;  */

long * FUN_108913d54(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if (param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915f7c();
    func_0x000108915fa4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
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



/* Entry: 108913dbc; end: 108913e03;  */

ulong FUN_108913dbc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
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



/* Entry: 108913e04; end: 108913e2b;  */

undefined8 FUN_108913e04(undefined8 param_1)

{
  func_0x000108915dec();
  func_0x000108915ffc();
  return param_1;
}



/* Entry: 108913e2c; end: 108913e3f;  */

void FUN_108913e2c(void)

{
  FUN_108913e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108913e40; end: 108913e4b;  */

undefined ** FUN_108913e40(void)

{
  return &PTR_DAT_110a93d38;
}



/* Entry: 108913e4c; end: 108913e77;  */

void FUN_108913e4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915ee8();
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



/* Entry: 108913e78; end: 108913ef3;  */

long * FUN_108913e78(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000108915df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108913ebc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_108913ebc;
  func_0x000108915fec();
  func_0x000108915dc0();
  unaff_x19 = unaff_x22;
LAB_108913ebc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 108913ef4; end: 108913f4b;  */

void FUN_108913ef4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915e6c();
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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 108913f4c; end: 108913f4f;  */

void FUN_108913f4c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
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



/* Entry: 108913f50; end: 108913f73;  */

undefined8 FUN_108913f50(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108913f74; end: 108913f87;  */

void FUN_108913f74(void)

{
  FUN_108913f50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


