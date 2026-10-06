/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10890132c; end: 108901387;  */

void FUN_10890132c(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901bec();
  }
  else {
    func_0x0001089019b8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e428);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108901a00();
  }
  func_0x000108901e10();
  return;
}



/* Entry: 108901388; end: 1089013c3;  */

undefined8 * FUN_108901388(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  func_0x000108901b74();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    param_2 = 0x48;
    func_0x00010b4d80e0();
  }
  func_0x000108901e48();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110a98e70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x20 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)(unaff_x20 + 8) = *(undefined4 *)(param_3 + 0x40);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  unaff_x20[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010890161c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  unaff_x20[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10892aa80(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  unaff_x20[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010890161c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  unaff_x20[6] = param_2;
  if (*(int *)(unaff_x20 + 8) == 3) {
    unaff_x20[7] = *(undefined8 *)(param_3 + 0x38);
  }
  return unaff_x20;
}



/* Entry: 1089013c4; end: 108901413;  */

long FUN_1089013c4(long param_1)

{
  func_0x000108901c8c();
  if (param_1 == 0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  func_0x000108901c28(&PTR_DAT_110a8e018);
  FUN_1088fc9f8();
  return param_1;
}



/* Entry: 108901414; end: 1089014cb;  */

void FUN_108901414(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901bec();
  }
  else {
    func_0x0001089019b8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e158);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108901a00();
  }
  func_0x000108901e10();
  return;
}



/* Entry: 1089014cc; end: 10890151b;  */

long FUN_1089014cc(long param_1)

{
  func_0x000108901c8c();
  if (param_1 == 0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  func_0x000108901c28(&PTR_FUN_110a8ded8);
  FUN_1088fc01c();
  return param_1;
}



/* Entry: 10890151c; end: 1089015df;  */

undefined8 * FUN_10890151c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    func_0x00010b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110a8eb58;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    FUN_1089015e0();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000108901f50();
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_1088f0114();
  }
  puVar2[5] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined2 *)(puVar2 + 7) = *(undefined2 *)(unaff_x19 + 0x38);
  puVar2[6] = uVar4;
  return puVar2;
}



/* Entry: 1089015e0; end: 10890164b;  */

long FUN_1089015e0(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108901b74();
  if (param_1 == 0) {
    unaff_x20 = 0x50;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000108901e48();
  func_0x000108901b60();
  func_0x000108901ec4(&PTR_FUN_110a8ea68);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901c68();
  func_0x000108900070();
  uVar1 = *(undefined4 *)(unaff_x21 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000108901b8c();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x48);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x21 + 0x38);
  switch(uVar1) {
  case 3:
    func_0x000108901b04();
    FUN_1089006ac();
    break;
  case 4:
    func_0x000108901b04();
    FUN_108901278();
    break;
  case 5:
    func_0x000108901b04();
    FUN_10890132c();
    break;
  case 6:
    func_0x000108901b04();
    func_0x00010890085c();
    break;
  case 7:
    func_0x000108901b04();
    FUN_108901388();
    break;
  default:
    goto LAB_1088fc380;
  case 9:
    func_0x000108901b04();
    FUN_1089013c4();
    break;
  case 0xb:
    func_0x000108901b04();
    func_0x000108901414();
    break;
  case 0xc:
    func_0x000108901b04();
    func_0x000108901470();
    break;
  case 0xd:
    func_0x000108901b04();
    FUN_1089014cc();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
LAB_1088fc380:
  return unaff_x19;
}



/* Entry: 10890164c; end: 1089016c7;  */

void FUN_10890164c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901db4();
  }
  else {
    func_0x000108901bf4();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_FUN_110a8dfc8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000107c2a448(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  lVar1 = unaff_x20 + 0x28;
  func_0x000108901f48();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 1089016c8; end: 108901787;  */

void FUN_1089016c8(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901ca0();
  }
  else {
    func_0x000108901c00();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e928);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  FUN_1088f7e8c(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 108901788; end: 10890203b;  */

void FUN_108901788(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  ulong uVar6;
  long ******apppppplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  pppppplVar5 = *(long *******)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 2) goto code_r0x0001002a929c;
  }
  else {
    pppppplVar5 = (long ******)pppppplVar5[-1];
    if ((int)param_2 < 2) {
code_r0x0001002a929c:
      uVar6 = 2;
      goto code_r0x0001002a92b4;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar6 = 0x7fffffff;
      goto code_r0x0001002a92b4;
    }
  }
  uVar1 = uVar1 * 2 + 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar1 = param_2;
  }
  uVar6 = (ulong)uVar1;
code_r0x0001002a92b4:
  ppppppplVar4 = (long *******)(uVar6 * 4 + 8);
  if (pppppplVar5 == (long ******)0x0) {
    uVar6 = (ulong)uVar2;
    func_0x000100064708();
    uVar6 = uVar6 - 8 >> 2;
    if (0x7ffffffe < uVar6) {
      uVar6 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    ppppppplVar3 = apppppplStack_58;
    apppppplStack_58[0] = (long ******)ppppppplVar4;
    func_0x0001053abb00(ppppppplVar3,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppppppplVar3 != (long *******)0x0) {
      pppppplVar5 = (long ******)(long)*(char *)((long)ppppppplVar3 + 0x17);
      ppppppplVar4 = ppppppplVar3;
      if ((long)pppppplVar5 < 0) {
        ppppppplVar4 = (long *******)*ppppppplVar3;
        pppppplVar5 = ppppppplVar3[1];
      }
      func_0x000107c2b940(apppppplStack_58,&UNK_10f317bd9,0x10a,ppppppplVar4,pppppplVar5);
      func_0x0001053abb1c(apppppplStack_58,"Requested size is too large to fit into size_t.");
      func_0x000107c2b948(apppppplStack_58);
      return;
    }
    func_0x000107c327ac();
    func_0x0001053abb54();
    ppppppplVar4 = ppppppplVar3;
  }
  *ppppppplVar4 = pppppplVar5;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      func_0x000107c610b4(ppppppplVar4 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 2);
    }
    func_0x0001004a04b0(param_1);
  }
  param_1[1] = (uint)uVar6;
  *(long ********)(param_1 + 2) = ppppppplVar4 + 1;
  return;
}



/* Entry: 10890203c; end: 108902067;  */

undefined8 * FUN_10890203c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90128;
  param_1[1] = param_2;
  FUN_108902068();
  return param_1;
}



/* Entry: 108902068; end: 10890208f;  */

void FUN_108902068(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 108902090; end: 1089020bb;  */

undefined8 FUN_108902090(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_1089020bc(param_1);
  return param_1;
}



/* Entry: 1089020bc; end: 10890210b;  */

long FUN_1089020bc(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x000107c2a500();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1089026e8();
  }
  __ZdlPv();
  FUN_108904a8c(param_1 + 0x48);
  FUN_1088f2648(param_1 + 0x30);
  FUN_108904a30(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10890210c; end: 10890210f;  */

undefined8 FUN_10890210c(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_1089020bc(param_1);
  return param_1;
}



/* Entry: 108902110; end: 108902123;  */

void FUN_108902110(void)

{
  FUN_108902090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108902124; end: 10890212f;  */

undefined ** FUN_108902124(void)

{
  return &PTR_DAT_110a90168;
}



/* Entry: 108902130; end: 108902203;  */

void FUN_108902130(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10890c718(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001089021d0(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 108902204; end: 108902527;  */

byte * FUN_108902204(byte *param_1,byte *param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  
  func_0x000108905054();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(byte **)(unaff_x20 + 0x60);
    func_0x000108904fec();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x000108904fe0();
    param_2 = param_1;
    func_0x0001089051d8();
    func_0x00010890502c();
    param_4 = param_1;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  while (iVar8 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x3;
    func_0x000108905074();
    func_0x000108905148();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(byte **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x4;
    func_0x000108905074();
    param_4 = param_1;
  }
  uVar6 = *(uint *)(unaff_x20 + 0x40);
  if (0 < (int)uVar6) {
    func_0x000108904fe0();
    pbVar4 = param_1 + 2;
    *param_1 = 0x2a;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      pbVar4[-1] = (byte)uVar6 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar6;
    puVar7 = *(ulong **)(unaff_x20 + 0x38);
    puVar1 = puVar7 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x000108904fe0();
      uVar5 = *puVar7;
      pbVar4 = param_1;
      while( true ) {
        param_4 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_4;
      }
      puVar7 = puVar7 + 1;
      *pbVar4 = (byte)uVar5;
    } while (puVar7 < puVar1);
  }
  iVar8 = *(int *)(unaff_x20 + 0x50);
  while (iVar8 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (byte *)0x6;
    func_0x000108905074();
    func_0x000108905148();
  }
  if ((*(byte *)(unaff_x20 + 0x80) & 1) != 0) {
    func_0x000108904fe0();
    param_4 = (byte *)0x38;
    func_0x000107c280a8(0x38,param_1);
    func_0x00010890507c();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    param_4 = (byte *)0x8;
    func_0x000108905074();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890513c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)param_3;
        uVar2 = iVar8 - iVar9;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar8;
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 108902528; end: 10890255f;  */

long FUN_108902528(long param_1)

{
  long extraout_x8;
  
  func_0x000108907824();
  FUN_108904fa0();
  return param_1 + extraout_x8;
}



/* Entry: 108902560; end: 10890267f;  */

void FUN_108902560(void)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x000108905044();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c303c4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  FUN_1088f1584();
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c303c4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108905124();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a468();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10890cd64();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_108904d30();
        *(ulong **)(unaff_x21 + 0x70) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108902680();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  func_0x0001089050c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108902680; end: 1089026e7;  */

void FUN_108902680(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108905044();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x000108905290();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 1089026e8; end: 108902713;  */

undefined8 FUN_1089026e8(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_108902714(param_1);
  return param_1;
}



/* Entry: 108902714; end: 10890272f;  */

void FUN_108902714(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108902730; end: 108902733;  */

undefined8 FUN_108902730(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_108902714(param_1);
  return param_1;
}



/* Entry: 108902734; end: 108902747;  */

void FUN_108902734(void)

{
  FUN_1089026e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108902748; end: 108902753;  */

undefined ** FUN_108902748(void)

{
  return &PTR_DAT_110a901b8;
}



/* Entry: 108902754; end: 1089027fb;  */

long * FUN_108902754(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108905054();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x000108904fec();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010890513c();
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



/* Entry: 1089027fc; end: 1089027ff;  */

void FUN_1089027fc(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108905044();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x000108905290();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 108902800; end: 10890284f;  */

void FUN_108902800(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001089050f0();
  func_0x00010890517c(&PTR_FUN_110a900d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905038();
  }
  FUN_108904ab4(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 108902850; end: 10890287b;  */

long FUN_108902850(long param_1)

{
  func_0x0001089050d4();
  FUN_108904ad4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10890287c; end: 10890287f;  */

long FUN_10890287c(long param_1)

{
  func_0x0001089050d4();
  FUN_108904ad4(param_1 + 0x10);
  return param_1;
}



/* Entry: 108902880; end: 108902893;  */

void FUN_108902880(void)

{
  FUN_108902850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108902894; end: 10890289f;  */

undefined ** FUN_108902894(void)

{
  return &PTR_DAT_110a90210;
}



/* Entry: 1089028a0; end: 1089028e3;  */

void FUN_1089028a0(long param_1)

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



/* Entry: 1089028e4; end: 108902a33;  */

long * FUN_1089028e4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x000108905054();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000108904fe0();
    param_4 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010890502c();
  }
  iVar5 = *(int *)(unaff_x20 + 0x18);
  while (iVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    puVar1 = (ulong *)(unaff_x20 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    func_0x000108905074(2);
    func_0x000108905148();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890513c();
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



/* Entry: 108902a34; end: 108902a83;  */

void FUN_108902a34(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108905240();
  FUN_108902a84(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 108902a84; end: 108902a93;  */

void FUN_108902a84(long *param_1,long param_2)

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



/* Entry: 108902a94; end: 108902b77;  */

void FUN_108902a94(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089051ac();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108902b3c;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_108903c88();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089051ac();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108902b3c;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_1089037f0();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089051ac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108902b3c;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_108904420();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089051ac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108902b3c;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_108904794();
    }
    break;
  default:
    goto LAB_108902b3c;
  }
  __ZdlPv();
LAB_108902b3c:
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 108902b78; end: 108902c0b;  */

long FUN_108902b78(long param_1)

{
  func_0x0001089050d4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a5e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2cc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c2a298();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_108902a94(param_1);
  }
  return param_1;
}



/* Entry: 108902c0c; end: 108902c0f;  */

long FUN_108902c0c(long param_1)

{
  func_0x0001089050d4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a5e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2cc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c2a298();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_108902a94(param_1);
  }
  return param_1;
}



/* Entry: 108902c10; end: 108902c23;  */

void FUN_108902c10(void)

{
  FUN_108902b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108902c24; end: 108902c3f;  */

undefined8 FUN_108902c24(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_108903cb4(param_1);
  return param_1;
}



/* Entry: 108902c40; end: 108902ce3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108902c40(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010890520c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088b9464(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1089193d8(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088bec64(param_1[6]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b51f4e4(param_1[7]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_1088bb7b8(param_1[8]);
    }
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_108902a94(param_1);
  func_0x000108905188();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 108902ce4; end: 108903033;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108902ce4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x000108905054();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000108904fec();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    func_0x000108904fe0();
    func_0x0001089051d8();
    func_0x00010890507c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x3;
    func_0x000108905074();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    func_0x000108904fe0();
    func_0x00010890522c();
    func_0x00010890507c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x000108904fe0();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x00010890502c();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x000108904fe0();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010890502c();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x000108904fe0();
    param_4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x0001089051e0();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x8;
    func_0x000108905074();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x9;
    func_0x000108905074();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0xa;
    func_0x000108905074();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x20);
    param_4 = (long *)0xb;
    func_0x000108905074();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x68);
  if ((*(uint *)(unaff_x20 + 0x68) & 0xfffffffc) == 0xc) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    func_0x000108905074();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890513c();
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
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108903034; end: 10890306b;  */

long FUN_108903034(long param_1)

{
  long extraout_x8;
  
  func_0x0001089226e0();
  FUN_108904fa0();
  return param_1 + extraout_x8;
}



/* Entry: 10890306c; end: 1089036f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10890306c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x000108905044();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        func_0x000108905124();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        FUN_1088f0114();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088b981c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[5];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x000107c2a46c();
        unaff_x21[5] = (ulong)param_1;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[6];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x000107c2a378();
        unaff_x21[6] = (ulong)param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[7];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        FUN_108904da8();
        unaff_x21[7] = (ulong)param_1;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[8];
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a2f0();
        unaff_x21[8] = (ulong)puVar4;
        param_1 = puVar4;
      }
      else {
        FUN_1088bb9c8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 9) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x49) = 1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)((long)unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(ulong *)(unaff_x20 + 0x58) != 0) {
    unaff_x21[0xb] = *(ulong *)(unaff_x20 + 0x58);
  }
  func_0x0001089050c4();
  iVar2 = *(int *)(unaff_x20 + 0x68);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0xd];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_108902a94();
      }
      *(int *)(unaff_x21 + 0xd) = iVar2;
    }
    switch(iVar2) {
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x00010890512c();
        func_0x00010890330c();
        goto LAB_1089032f0;
      }
      func_0x000108905264();
      func_0x000108904de4();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x00010890512c();
        func_0x00010890350c();
        goto LAB_1089032f0;
      }
      func_0x000108905264();
      func_0x000108904e20();
      break;
    case 0xe:
      if (iVar3 == iVar2) {
        func_0x00010890512c();
        func_0x0001089035e0();
        goto LAB_1089032f0;
      }
      func_0x000108905264();
      func_0x000108904e50();
      break;
    case 0xf:
      if (iVar3 == iVar2) {
        func_0x00010890512c();
        FUN_1089036f8();
        goto LAB_1089032f0;
      }
      func_0x000108905264();
      func_0x000108904e84();
      break;
    default:
      goto LAB_1089032f0;
    }
    unaff_x21[0xc] = (ulong)param_1;
  }
LAB_1089032f0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089036f8; end: 1089037ef;  */

void FUN_1089036f8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108905044();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x000108905290();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 1089037f0; end: 10890381b;  */

undefined8 FUN_1089037f0(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_10890381c(param_1);
  return param_1;
}



/* Entry: 10890381c; end: 108903857;  */

void FUN_10890381c(void)

{
  long unaff_x19;
  
  func_0x0001089051b8();
  func_0x000107c30258();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10890492c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108903858; end: 10890386b;  */

void FUN_108903858(void)

{
  FUN_1089037f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890386c; end: 108903877;  */

undefined ** FUN_10890386c(void)

{
  return &PTR_DAT_110a902b0;
}



/* Entry: 108903878; end: 1089038cb;  */

void FUN_108903878(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001089051b8();
  func_0x000107c3025c();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1089038cc(unaff_x19[5]);
    }
  }
  func_0x000108905188();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1089038cc; end: 1089038db;  */

void FUN_1089038cc(long param_1)

{
  ulong *puVar1;
  
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



/* Entry: 1089038dc; end: 108903a0b;  */

long * FUN_1089038dc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108905054();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000108904fec();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x10);
    param_4 = (long *)0x3;
    func_0x000108905074();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890513c();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 108903a0c; end: 108903a27;  */

void FUN_108903a0c(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108905044();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108905124();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_108904eb8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_108903a0c();
      }
    }
  }
  func_0x0001089050c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108903a28; end: 108903a57;  */

void FUN_108903a28(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34950();
  FUN_108903878();
  func_0x00010890524c();
  func_0x000108905044();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108905124();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_108904eb8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_108903a0c();
      }
    }
  }
  func_0x0001089050c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108903a58; end: 108903a7f;  */

undefined1  [16] FUN_108903a58(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x0001089050a0();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x30);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x30);
  return auVar6;
}



/* Entry: 108903a80; end: 108903aab;  */

undefined8 * FUN_108903a80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90038;
  param_1[1] = param_2;
  FUN_108903aac();
  return param_1;
}



/* Entry: 108903aac; end: 108903ae7;  */

void FUN_108903aac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 108903ae8; end: 108903c87;  */

void FUN_108903ae8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  
  func_0x0001089050f0();
  func_0x00010890517c(&PTR_FUN_110a90038);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905038();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_108904afc(unaff_x19 + 0x18);
  func_0x000107c2a45c(unaff_x19 + 0x30);
  func_0x000108900070(unaff_x19 + 0x48);
  lVar2 = unaff_x19 + 0x60;
  func_0x000108900070();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001089051d0();
  }
  *(long *)(unaff_x19 + 0x78) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a46c();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a378();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a2f0();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_108901388();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000108904f3c();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088b6ce4();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000108904f6c();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined4 *)(unaff_x19 + 200) = *(undefined4 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  return;
}



/* Entry: 108903c88; end: 108903cb3;  */

undefined8 FUN_108903c88(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_108903cb4(param_1);
  return param_1;
}



/* Entry: 108903cb4; end: 108903d6b;  */

undefined8 FUN_108903cb4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x000107c2a5e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x000107c2a2cc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x000107c2a298();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10892a544();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10890b684();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1089058f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10891a890();
  }
  __ZdlPv();
  FUN_1089000b0(param_1 + 0x60);
  FUN_1089000b0(param_1 + 0x48);
  func_0x000107c2a460(param_1 + 0x30);
  func_0x000100690ee0(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000100690fac();
  }
  return unaff_x19;
}



/* Entry: 108903d6c; end: 108903d7f;  */

void FUN_108903d6c(void)

{
  FUN_108903c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108903d80; end: 108903d8b;  */

undefined ** FUN_108903d80(void)

{
  return &PTR_DAT_110a90300;
}



/* Entry: 108903d8c; end: 108903e67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108903d8c(void)

{
  byte bVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001089051b8();
  FUN_108904f28();
  FUN_1087cd16c(unaff_x19 + 0x30);
  FUN_10879ee7c(unaff_x19 + 0x48);
  FUN_10879ee7c(unaff_x19 + 0x60);
  bVar1 = *(byte *)(unaff_x19 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x0001089193d8(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_1088bec64(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((bVar1 >> 3 & 1) != 0) {
      FUN_1088bb7b8(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_10892a600(*(undefined8 *)(unaff_x19 + 0x98));
    }
    if ((bVar1 >> 5 & 1) != 0) {
      FUN_10890b6d4(*(undefined8 *)(unaff_x19 + 0xa0));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_108905998(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    if ((char)bVar1 < '\0') {
      func_0x000108919518(*(undefined8 *)(unaff_x19 + 0xb0));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined4 *)(unaff_x19 + 200) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 108903e68; end: 108904083;  */

long * FUN_108903e68(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108905054();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x78);
    func_0x000108904fec();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    func_0x000108904fe0();
    param_2 = param_1;
    func_0x0001089051d8();
    func_0x00010890502c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    func_0x000108904fe0();
    plVar2 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010890502c();
    param_2 = param_1;
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    func_0x000108904fe0();
    param_2 = plVar2;
    func_0x00010890522c();
    func_0x0001089051e0();
    param_4 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x80);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0x5;
    func_0x000108905074();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0x6;
    func_0x000108905074();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108905074(7);
    func_0x000108905148();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x90);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_4 = (long *)0x8;
    func_0x000108905074();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x98);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0x9;
    func_0x000108905074();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  while (iVar4 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108905074(0xf);
    func_0x000108905148();
  }
  iVar4 = *(int *)(unaff_x20 + 0x50);
  while (iVar4 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108905074(0x11);
    func_0x000108905148();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0xa0);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_4 = (long *)0x12;
    func_0x000108905074();
  }
  iVar4 = *(int *)(unaff_x20 + 0x68);
  while (iVar4 != 0) {
    func_0x000108904fb8();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108905074(0x13);
    func_0x000108905148();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa8) + 0x14);
    param_4 = (long *)0x14;
    func_0x000108905074();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb0) + 0x30);
    param_4 = (long *)0x15;
    func_0x000108905074();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890513c();
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



/* Entry: 108904084; end: 108904247;  */

/* WARNING: Removing unreachable block (ram,0x0001089040f8) */
/* WARNING: Removing unreachable block (ram,0x0001089040d0) */
/* WARNING: Removing unreachable block (ram,0x000108904120) */
/* WARNING: Type propagation algorithm not settling */

void FUN_108904084(long param_1)

{
  byte bVar1;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108905164();
  while (unaff_x22 != 0) {
    func_0x000108903050(*unaff_x21);
    func_0x000108905284();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000108905110();
  func_0x000108905110();
  func_0x000108905110();
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x78));
      func_0x0001089050dc();
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x000108903034(*(undefined8 *)(param_1 + 0x80));
      func_0x0001089050dc();
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_1088ec204(*(undefined8 *)(param_1 + 0x88));
      func_0x0001089050dc();
    }
    if ((bVar1 >> 3 & 1) != 0) {
      FUN_1088c4c70(*(undefined8 *)(param_1 + 0x90));
      func_0x0001089050dc();
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_1088fc678(*(undefined8 *)(param_1 + 0x98));
      func_0x0001089050dc();
    }
    if ((bVar1 >> 5 & 1) != 0) {
      func_0x000108904264(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_1088b6b30(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((char)bVar1 < '\0') {
      func_0x000108904280(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x000108905194(0xfffffff7);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x000108905194();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000108905234();
  }
  func_0x000108905258();
  return;
}



/* Entry: 108904248; end: 10890429b;  */

long FUN_108904248(long param_1)

{
  long extraout_x8;
  
  FUN_108910e24();
  FUN_108904fa0();
  return param_1 + extraout_x8;
}



/* Entry: 10890429c; end: 10890429f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10890429c(void)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x000108905044();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c2a454(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c2a458(unaff_x21 + 0x30,unaff_x20 + 0x30);
  FUN_1088f92f8(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar2 = (ulong *)(unaff_x21 + 0x60);
  func_0x0001088f92fc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108905124();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a46c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a2f0();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_1088bb9c8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_108901388();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_10892a898();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000108904f3c();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x0001088b6ce4();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_108905d54();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108904f6c();
        *(ulong **)(unaff_x21 + 0xb0) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108919d70();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(long *)(unaff_x21 + 0xc0) = *(long *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    *(int *)(unaff_x21 + 200) = *(int *)(unaff_x20 + 200);
  }
  func_0x0001089050c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089042a0; end: 108904327;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1089042a0(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34950();
  FUN_108903d8c();
  func_0x00010890524c();
  func_0x000108905044();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c2a454(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c2a458(unaff_x21 + 0x30,unaff_x20 + 0x30);
  FUN_1088f92f8(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar2 = (ulong *)(unaff_x21 + 0x60);
  func_0x0001088f92fc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108905124();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a46c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c2a2f0();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_1088bb9c8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_108901388();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_10892a898();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000108904f3c();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x0001088b6ce4();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_108905d54();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x000108904f6c();
        *(ulong **)(unaff_x21 + 0xb0) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108919d70();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(long *)(unaff_x21 + 0xc0) = *(long *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    *(int *)(unaff_x21 + 200) = *(int *)(unaff_x20 + 200);
  }
  func_0x0001089050c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108905064();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108904328; end: 108904333;  */

undefined1  [16] FUN_108904328(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x54;
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



/* Entry: 108904334; end: 108904383;  */

void FUN_108904334(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089051ac();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        func_0x000107c2a2e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 108904384; end: 10890441f;  */

void FUN_108904384(void)

{
  long lVar1;
  int iVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001089050f0();
  func_0x00010890517c(&PTR_DAT_110a8ff48);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905038();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  *(int *)(unaff_x19 + 0x30) = iVar2;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001089051d0();
    iVar2 = *(int *)(unaff_x19 + 0x30);
  }
  *(long *)(unaff_x19 + 0x20) = lVar1;
  if (iVar2 == 4) {
    *(undefined1 *)(unaff_x19 + 0x28) = *(undefined1 *)(unaff_x20 + 0x28);
  }
  else if (iVar2 == 3) {
    func_0x0001089051d0();
    *(long *)(unaff_x19 + 0x28) = lVar1;
  }
  return;
}



/* Entry: 108904420; end: 10890444b;  */

undefined8 FUN_108904420(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_10890444c(param_1);
  return param_1;
}



/* Entry: 10890444c; end: 10890448f;  */

void FUN_10890444c(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001089051b8();
  func_0x000107c30258();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == 3) {
      uVar1 = *(ulong *)(unaff_x19 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x0001089051ac();
        uVar1 = extraout_x8;
      }
      if (uVar1 == 0) {
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          func_0x000107c2a2e0();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 108904490; end: 1089044a3;  */

void FUN_108904490(void)

{
  FUN_108904420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089044a4; end: 1089044af;  */

undefined ** FUN_1089044a4(void)

{
  return &PTR_DAT_110a90358;
}



/* Entry: 1089044b0; end: 1089044f7;  */

void FUN_1089044b0(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001089051b8();
  func_0x000107c3025c();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088bf358(unaff_x19[4]);
  }
  FUN_108904334();
  func_0x000108905188();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1089044f8; end: 10890461b;  */

long * FUN_1089044f8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  int iVar6;
  
  plVar5 = (long *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar5 + 0x17);
  plVar3 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar5[1];
    if (lVar2 == 0) goto LAB_108904564;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_108904564;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f4ec293);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar3 = plVar5;
  param_2 = plVar1;
LAB_108904564:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x18);
    param_2 = (long *)0x2;
    func_0x000108905074();
  }
  if (*(int *)(param_1 + 0x30) == 4) {
    plVar5 = param_3;
    func_0x000107c28094(param_3,param_2);
    func_0x00010890522c();
    func_0x00010890507c();
  }
  else {
    plVar5 = param_2;
    if (*(int *)(param_1 + 0x30) == 3) {
      plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x18);
      plVar5 = (long *)0x3;
      func_0x000108905074();
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar5;
  }
  func_0x00010890513c();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)plVar3 <= *param_3 - (long)plVar5) {
    _memcpy(plVar5,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)plVar5 + (long)(int)plVar3);
  }
  while( true ) {
    iVar6 = ((int)*param_3 - (int)plVar5) + 0x10;
    iVar4 = (int)plVar3;
    plVar3 = (long *)(ulong)(uint)(iVar4 - iVar6);
    if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
    func_0x00010b4d5738();
    lVar2 = (long)plVar5 + (long)iVar6;
    plVar5 = param_3;
    func_0x000107c303e4(param_3,lVar2);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar5 + (long)iVar4);
}



/* Entry: 10890461c; end: 1089046af;  */

void FUN_10890461c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0001089052a4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x0001089050dc();
  }
  if ((*(int *)(unaff_x19 + 0x30) != 4) && (*(int *)(unaff_x19 + 0x30) == 3)) {
    func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001089050dc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108905234();
  }
  func_0x000108905258();
  return;
}



/* Entry: 1089046b0; end: 1089046b3;  */

void FUN_1089046b0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x000108905044();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248(param_1,uVar3,uVar4);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      func_0x000108905124();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001089050c4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[6];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_108904334();
      }
      *(int *)(unaff_x21 + 6) = iVar1;
    }
    if (iVar1 == 4) {
      *(undefined1 *)(unaff_x21 + 5) = *(undefined1 *)(unaff_x20 + 0x28);
    }
    else if (iVar1 == 3) {
      if (iVar2 == 3) {
        param_1 = (ulong *)unaff_x21[5];
        FUN_1088bf398();
      }
      else {
        func_0x000108905124();
        unaff_x21[5] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 1089046b4; end: 1089046e3;  */

void FUN_1089046b4(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34950();
  FUN_1089044b0();
  func_0x00010890524c();
  func_0x000108905044();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248(param_1,uVar3,uVar4);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      func_0x000108905124();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001089050c4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[6];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_108904334();
      }
      *(int *)(unaff_x21 + 6) = iVar1;
    }
    if (iVar1 == 4) {
      *(undefined1 *)(unaff_x21 + 5) = *(undefined1 *)(unaff_x20 + 0x28);
    }
    else if (iVar1 == 3) {
      if (iVar2 == 3) {
        param_1 = (ulong *)unaff_x21[5];
        FUN_1088bf398();
      }
      else {
        func_0x000108905124();
        unaff_x21[5] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 1089046e4; end: 108904733;  */

void FUN_1089046e4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  func_0x0001089050a0();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  return;
}



/* Entry: 108904734; end: 108904793;  */

void FUN_108904734(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108905240();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010890517c(&PTR_DAT_110a8ff98);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905038();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  return;
}



/* Entry: 108904794; end: 1089047bf;  */

undefined8 FUN_108904794(undefined8 param_1)

{
  func_0x0001089050d4();
  FUN_1089047c0(param_1);
  return param_1;
}



/* Entry: 1089047c0; end: 1089047ef;  */

void FUN_1089047c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089047f0; end: 1089047fb;  */

undefined ** FUN_1089047f0(void)

{
  return &PTR_DAT_110a903a8;
}



/* Entry: 1089047fc; end: 1089048d7;  */

void FUN_1089047fc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001089052b8();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010890520c();
  }
  func_0x000108905188();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1089048d8; end: 1089048db;  */

void FUN_1089048d8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108905044();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x000108905290();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 1089048dc; end: 10890490b;  */

void FUN_1089048dc(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34950();
  FUN_1089047fc();
  func_0x00010890524c();
  func_0x000108905044();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x000108905290();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905064();
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



/* Entry: 10890490c; end: 10890492b;  */

void FUN_10890490c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001089050a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  return;
}



/* Entry: 10890492c; end: 10890494f;  */

undefined8 FUN_10890492c(undefined8 param_1)

{
  func_0x0001089050d4();
  return param_1;
}



/* Entry: 108904950; end: 108904953;  */

undefined8 FUN_108904950(undefined8 param_1)

{
  func_0x0001089050d4();
  return param_1;
}



/* Entry: 108904954; end: 108904967;  */

void FUN_108904954(void)

{
  FUN_10890492c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108904968; end: 108904a2f;  */

undefined ** FUN_108904968(void)

{
  return &PTR_DAT_110a903f8;
}



/* Entry: 108904a30; end: 108904a57;  */

void FUN_108904a30(void)

{
  long extraout_x8;
  
  func_0x000107c34960();
  if (extraout_x8 != 0) {
    func_0x000107c3495c();
  }
  return;
}



/* Entry: 108904a58; end: 108904a8b;  */

long FUN_108904a58(long param_1)

{
  FUN_108904a8c(param_1 + 0x38);
  FUN_1088f2648(param_1 + 0x20);
  FUN_108904a30(param_1 + 8);
  return param_1;
}



/* Entry: 108904a8c; end: 108904ab3;  */

void FUN_108904a8c(void)

{
  long extraout_x8;
  
  func_0x000107c34960();
  if (extraout_x8 != 0) {
    func_0x000107c3495c();
  }
  return;
}



/* Entry: 108904ab4; end: 108904ad3;  */

void FUN_108904ab4(void)

{
  func_0x000107c34958();
  FUN_108902a84();
  return;
}


