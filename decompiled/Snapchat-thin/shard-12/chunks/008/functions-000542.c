/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098c8300; end: 1098c8303;  */

long FUN_1098c8300(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098c8304; end: 1098c8317;  */

void FUN_1098c8304(void)

{
  FUN_1098c82c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c8318; end: 1098c8323;  */

undefined ** FUN_1098c8318(void)

{
  return &PTR_DAT_110b181f0;
}



/* Entry: 1098c8324; end: 1098c8367;  */

void FUN_1098c8324(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1098c8368; end: 1098c84c3;  */

byte * FUN_1098c8368(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar10 + 0x17);
  pbVar3 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar10[1];
    if (lVar4 == 0) goto LAB_1098c83d8;
    puVar2 = (undefined8 *)*puVar10;
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_1098c83d8;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f586bfd);
  pbVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar10,param_2);
  param_2 = pbVar3;
LAB_1098c83d8:
  if (*(int *)(param_1 + 0x30) != 0) {
    pbVar3 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x30),param_2);
    param_2 = pbVar3;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar8) {
    FUN_1098c8678();
    pbVar7 = pbVar3 + 2;
    *pbVar3 = 0x1a;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar7[-1] = (byte)uVar8 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    pbVar7[-1] = (byte)uVar8;
    piVar11 = *(int **)(param_1 + 0x18);
    piVar1 = piVar11 + *(int *)(param_1 + 0x10);
    do {
      FUN_1098c8678();
      uVar5 = (ulong)*piVar11;
      pbVar7 = pbVar3;
      while( true ) {
        param_2 = pbVar7 + 1;
        if (uVar5 < 0x80) break;
        *pbVar7 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar7 = param_2;
      }
      piVar11 = piVar11 + 1;
      *pbVar7 = (byte)uVar5;
    } while (piVar11 < piVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar12 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar12);
        if (iVar9 - iVar12 == 0 || iVar9 < iVar12) break;
        func_0x00010b4d5738();
        pbVar3 = param_2 + iVar12;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar3);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 1098c84c4; end: 1098c8583;  */

long FUN_1098c84c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x10;
  func_0x00010b4d3e0c();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  lVar4 = lVar4 + lVar2;
  if (lVar3 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x34) = (int)lVar4;
  return lVar4;
}



/* Entry: 1098c8584; end: 1098c860b;  */

void FUN_1098c8584(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1098c860c; end: 1098c8613;  */

void FUN_1098c860c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110b181b0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 1098c8614; end: 1098c8677;  */

void FUN_1098c8614(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b181b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 1098c8678; end: 1098c8683;  */

ulong * FUN_1098c8678(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  if (unaff_x20 < (ulong *)*unaff_x19) {
    return unaff_x20;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x20 = (ulong *)((long)puVar2 + (long)((int)unaff_x20 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x20);
  return unaff_x20;
}



/* Entry: 1098c8684; end: 1098c86f3;  */

undefined8 * FUN_1098c8684(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b18260;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 1098c86f4; end: 1098c8723;  */

long FUN_1098c86f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098c8724; end: 1098c8727;  */

long FUN_1098c8724(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098c8728; end: 1098c873b;  */

void FUN_1098c8728(void)

{
  FUN_1098c86f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c873c; end: 1098c8747;  */

undefined ** FUN_1098c873c(void)

{
  return &PTR_DAT_110b182f0;
}



/* Entry: 1098c8748; end: 1098c8787;  */

void FUN_1098c8748(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
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



/* Entry: 1098c8788; end: 1098c88ab;  */

long * FUN_1098c8788(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  plVar3 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_1098c87f4;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_1098c87f4;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f586c2f);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar3;
LAB_1098c87f4:
  plVar7 = plVar3;
  if ((int)param_1[3] != 0) {
    FUN_1098c8d20();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar3);
    func_0x000107c280b8(plVar7,uVar2);
    param_2 = plVar7;
  }
  plVar3 = plVar7;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_1098c8d20();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x0001098c8d68();
    param_2 = plVar3;
  }
  if ((int)param_1[4] != 0) {
    FUN_1098c8d20();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x0001098c8d68();
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
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar10;
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



/* Entry: 1098c88ac; end: 1098c894f;  */

void FUN_1098c88ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1098c88e4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1098c88e4:
    iVar1 = 0;
    goto LAB_1098c88e8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_1098c88e8:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001098c8d4c();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x0001098c8d4c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 1098c8950; end: 1098c8953;  */

void FUN_1098c8950(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 1098c8954; end: 1098c8a1b;  */

void FUN_1098c8954(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 1098c8a1c; end: 1098c8a4b;  */

long FUN_1098c8a1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098c8c54(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098c8a4c; end: 1098c8a4f;  */

long FUN_1098c8a4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098c8c54(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098c8a50; end: 1098c8a63;  */

void FUN_1098c8a50(void)

{
  FUN_1098c8a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c8a64; end: 1098c8a6f;  */

undefined ** FUN_1098c8a64(void)

{
  return &PTR_DAT_110b18348;
}



/* Entry: 1098c8a70; end: 1098c8ab3;  */

void FUN_1098c8a70(long param_1)

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



/* Entry: 1098c8ab4; end: 1098c8bf3;  */

long * FUN_1098c8ab4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x24),param_2,param_3);
    param_2 = plVar2;
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



/* Entry: 1098c8bf4; end: 1098c8c43;  */

void FUN_1098c8bf4(long param_1,long param_2)

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



/* Entry: 1098c8c44; end: 1098c8c53;  */

void FUN_1098c8c44(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b18260;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 1098c8c54; end: 1098c8c83;  */

long * FUN_1098c8c54(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098c8c84; end: 1098c8d1f;  */

void FUN_1098c8c84(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b18260;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 1098c8d20; end: 1098c8dcf;  */

ulong * FUN_1098c8d20(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 1098c8dd0; end: 1098c8df3;  */

undefined8 FUN_1098c8dd0(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c8df4; end: 1098c8df7;  */

undefined8 FUN_1098c8df4(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c8df8; end: 1098c8e0b;  */

void FUN_1098c8df8(void)

{
  FUN_1098c8dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c8e0c; end: 1098c8e33;  */

undefined ** FUN_1098c8e0c(void)

{
  return &PTR_DAT_110b187d8;
}



/* Entry: 1098c8e34; end: 1098c8efb;  */

long * FUN_1098c8e34(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001098ccf40();
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001098ccf7c();
    lVar2 = 9;
    func_0x000107c280a8(9,param_1);
    func_0x0001098cd3b0();
  }
  lVar3 = lVar2;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098ccf7c();
    lVar3 = 0x11;
    func_0x000107c280a8(0x11,lVar2);
    func_0x0001098cd3b0();
  }
  lVar2 = lVar3;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098ccf7c();
    lVar2 = 0x19;
    func_0x000107c280a8(0x19,lVar3);
    func_0x0001098cd3b0();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001098ccf7c();
    func_0x000107c280a8(0x21,lVar2);
    func_0x0001098cd3b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098c8efc; end: 1098c8f5f;  */

long FUN_1098c8efc(long param_1)

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



/* Entry: 1098c8f60; end: 1098c8fa3;  */

long FUN_1098c8f60(long param_1)

{
  func_0x0001098cd01c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098c8dd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098c8dd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098c8fa4; end: 1098c8fa7;  */

long FUN_1098c8fa4(long param_1)

{
  func_0x0001098cd01c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098c8dd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098c8dd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098c8fa8; end: 1098c8fbb;  */

void FUN_1098c8fa8(void)

{
  FUN_1098c8f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c8fbc; end: 1098c8fc7;  */

undefined ** FUN_1098c8fbc(void)

{
  return &PTR_DAT_110b18830;
}



/* Entry: 1098c8fc8; end: 1098c901b;  */

void FUN_1098c8fc8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098c8e18(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098c8e18(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 1098c901c; end: 1098c9117;  */

long * FUN_1098c901c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    param_4 = (long *)0x1;
    func_0x0001098cd090();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x30);
    param_4 = (long *)0x2;
    func_0x0001098cd090();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
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



/* Entry: 1098c9118; end: 1098c9133;  */

long FUN_1098c9118(long param_1)

{
  long extraout_x8;
  
  FUN_1098c8efc();
  func_0x0001098ccea4();
  return param_1 + extraout_x8;
}



/* Entry: 1098c9134; end: 1098c9137;  */

void FUN_1098c9134(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1098cc634();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098c8d80();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1098cc634();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x0001098c8d80();
      }
    }
  }
  func_0x0001098cd144();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001098cd1cc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098c9138; end: 1098c91cb;  */

void FUN_1098c9138(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1098cc634();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001098c8d80();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1098cc634();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x0001098c8d80();
      }
    }
  }
  func_0x0001098cd144();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001098cd1cc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098c91cc; end: 1098c91e7;  */

void FUN_1098c91cc(long param_1,long param_2)

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



/* Entry: 1098c91e8; end: 1098c920b;  */

undefined8 FUN_1098c91e8(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c920c; end: 1098c920f;  */

undefined8 FUN_1098c920c(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9210; end: 1098c9223;  */

void FUN_1098c9210(void)

{
  FUN_1098c91e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c9224; end: 1098c9243;  */

undefined ** FUN_1098c9224(void)

{
  return &PTR_DAT_110b18880;
}



/* Entry: 1098c9244; end: 1098c92a3;  */

long * FUN_1098c9244(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccf7c();
    func_0x0001098cd2a4();
    func_0x0001098ccfc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cd0a0();
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



/* Entry: 1098c92a4; end: 1098c92f3;  */

long FUN_1098c92a4(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001098cd424();
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



/* Entry: 1098c92f4; end: 1098c9317;  */

undefined8 FUN_1098c92f4(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9318; end: 1098c931b;  */

undefined8 FUN_1098c9318(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c931c; end: 1098c932f;  */

void FUN_1098c931c(void)

{
  FUN_1098c92f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c9330; end: 1098c934f;  */

undefined ** FUN_1098c9330(void)

{
  return &PTR_DAT_110b188d8;
}



/* Entry: 1098c9350; end: 1098c93af;  */

long * FUN_1098c9350(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccf7c();
    func_0x0001098cd2a4();
    func_0x0001098ccfc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cd0a0();
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



/* Entry: 1098c93b0; end: 1098c93ff;  */

long FUN_1098c93b0(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001098cd424();
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



/* Entry: 1098c9400; end: 1098c9423;  */

undefined8 FUN_1098c9400(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9424; end: 1098c9427;  */

undefined8 FUN_1098c9424(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9428; end: 1098c943b;  */

void FUN_1098c9428(void)

{
  FUN_1098c9400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c943c; end: 1098c945b;  */

undefined ** FUN_1098c943c(void)

{
  return &PTR_DAT_110b18930;
}



/* Entry: 1098c945c; end: 1098c94b3;  */

long * FUN_1098c945c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cd0a0();
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



/* Entry: 1098c94b4; end: 1098c9587;  */

ulong FUN_1098c94b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 1098c9588; end: 1098c95ab;  */

undefined8 FUN_1098c9588(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c95ac; end: 1098c95af;  */

undefined8 FUN_1098c95ac(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c95b0; end: 1098c95c3;  */

void FUN_1098c95b0(void)

{
  FUN_1098c9588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c95c4; end: 1098c95ef;  */

undefined ** FUN_1098c95c4(void)

{
  return &PTR_DAT_110b18988;
}



/* Entry: 1098c95f0; end: 1098c96fb;  */

long * FUN_1098c95f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088bdd44();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088b96ec();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53c8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f468();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b32050();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b3207c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53f0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
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



/* Entry: 1098c96fc; end: 1098c988f;  */

ulong FUN_1098c96fc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_00;
    iVar2 = extraout_w9_00;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_01;
    iVar2 = extraout_w9_01;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_02;
    iVar2 = extraout_w9_02;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_03;
    iVar2 = extraout_w9_03;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_04;
    iVar2 = extraout_w9_04;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_05;
    iVar2 = extraout_w9_05;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_06;
    iVar2 = extraout_w9_06;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * iVar2 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x38) = (int)uVar1;
  return uVar1;
}



/* Entry: 1098c9890; end: 1098c98b3;  */

undefined8 FUN_1098c9890(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c98b4; end: 1098c98b7;  */

undefined8 FUN_1098c98b4(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c98b8; end: 1098c98cb;  */

void FUN_1098c98b8(void)

{
  FUN_1098c9890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c98cc; end: 1098c98f7;  */

undefined ** FUN_1098c98cc(void)

{
  return &PTR_DAT_110b189e8;
}



/* Entry: 1098c98f8; end: 1098c9a03;  */

long * FUN_1098c98f8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088bdd44();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088b96ec();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53c8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f468();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b32050();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b3207c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53f0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
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



/* Entry: 1098c9a04; end: 1098c9b97;  */

ulong FUN_1098c9a04(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_00;
    iVar2 = extraout_w9_00;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_01;
    iVar2 = extraout_w9_01;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_02;
    iVar2 = extraout_w9_02;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_03;
    iVar2 = extraout_w9_03;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_04;
    iVar2 = extraout_w9_04;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_05;
    iVar2 = extraout_w9_05;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_06;
    iVar2 = extraout_w9_06;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * iVar2 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x38) = (int)uVar1;
  return uVar1;
}



/* Entry: 1098c9b98; end: 1098c9bbb;  */

undefined8 FUN_1098c9b98(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9bbc; end: 1098c9bbf;  */

undefined8 FUN_1098c9bbc(undefined8 param_1)

{
  func_0x0001098cd01c();
  return param_1;
}



/* Entry: 1098c9bc0; end: 1098c9bd3;  */

void FUN_1098c9bc0(void)

{
  FUN_1098c9b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c9bd4; end: 1098c9bff;  */

undefined ** FUN_1098c9bd4(void)

{
  return &PTR_DAT_110b18a48;
}



/* Entry: 1098c9c00; end: 1098c9d0b;  */

long * FUN_1098c9c00(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098ccf40();
  if ((int)param_1[2] != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098ccfdc();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088bdd44();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098ccfdc();
    func_0x0001088b96ec();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53c8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001098ccfdc();
    func_0x00010598f468();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b32050();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001098ccfdc();
    func_0x000108b3207c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x0001098ccfdc();
    func_0x0001089f53f0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
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



/* Entry: 1098c9d0c; end: 1098c9e17;  */

ulong FUN_1098c9d0c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_00;
    iVar2 = extraout_w9_00;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_01;
    iVar2 = extraout_w9_01;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_02;
    iVar2 = extraout_w9_02;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_03;
    iVar2 = extraout_w9_03;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_04;
    iVar2 = extraout_w9_04;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_05;
    iVar2 = extraout_w9_05;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001098cd0bc();
    uVar1 = extraout_x8_06;
    iVar2 = extraout_w9_06;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * iVar2 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x38) = (int)uVar1;
  return uVar1;
}



/* Entry: 1098c9e18; end: 1098c9e53;  */

long FUN_1098c9e18(long param_1)

{
  func_0x0001098cd01c();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1098c9e54; end: 1098c9e57;  */

long FUN_1098c9e54(long param_1)

{
  func_0x0001098cd01c();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1098c9e58; end: 1098c9e6b;  */

void FUN_1098c9e58(void)

{
  FUN_1098c9e18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c9e6c; end: 1098c9e77;  */

undefined ** FUN_1098c9e6c(void)

{
  return &PTR_DAT_110b18aa8;
}



/* Entry: 1098c9e78; end: 1098c9ebb;  */

void FUN_1098c9e78(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
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



/* Entry: 1098c9ebc; end: 1098c9fc7;  */

long * FUN_1098c9ebc(long param_1,long param_2,ulong param_3)

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
  
  func_0x0001098cd328();
  func_0x0001098cd298(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098c9ef4;
  }
  else if ((int)param_2 != 0) {
LAB_1098c9ef4:
    func_0x0001098cd120();
    param_2 = 1;
    unaff_x20 = unaff_x19;
    func_0x0001098cd030();
  }
  func_0x0001098cd298(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098c9f34;
  }
  else if ((int)param_2 != 0) {
LAB_1098c9f34:
    func_0x0001098cd120();
    param_2 = 2;
    unaff_x20 = unaff_x19;
    func_0x0001098cd030();
  }
  func_0x0001098cd298(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1098c9f90;
  }
  else if ((int)param_2 == 0) goto LAB_1098c9f90;
  func_0x0001098cd120();
  unaff_x20 = unaff_x19;
  func_0x0001098cd030();
LAB_1098c9f90:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098cd0a0();
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



/* Entry: 1098c9fc8; end: 1098ca113;  */

long FUN_1098c9fc8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001098cd31c();
  }
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001098cd31c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098cd308();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098ca114; end: 1098ca16f;  */

void FUN_1098ca114(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  func_0x0001098cd344();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001098cd300();
  if (unaff_x20 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001098cd1e4();
    }
    if (uVar2 != uVar1) {
      func_0x0001098cd350();
      unaff_x20 = param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 2;
    *(long *)(unaff_x19 + 0x28) = unaff_x20;
  }
  return;
}



/* Entry: 1098ca170; end: 1098ca1f7;  */

void FUN_1098ca170(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x34) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098ca1cc;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_1098c9890();
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 2) goto LAB_1098ca1cc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1098ca1cc;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_1098c9588();
    }
  }
  __ZdlPv();
LAB_1098ca1cc:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 1098ca1f8; end: 1098ca2df;  */

void FUN_1098ca1f8(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  func_0x0001098cd344();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001098cd300();
  if (unaff_x20 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001098cd1e4();
    }
    if (uVar2 != uVar1) {
      func_0x0001098cd350();
      unaff_x20 = param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 3;
    *(long *)(unaff_x19 + 0x28) = unaff_x20;
  }
  return;
}



/* Entry: 1098ca2e0; end: 1098ca30b;  */

undefined8 FUN_1098ca2e0(undefined8 param_1)

{
  func_0x0001098cd01c();
  FUN_1098ca30c(param_1);
  return param_1;
}



/* Entry: 1098ca30c; end: 1098ca337;  */

long * FUN_1098ca30c(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x0001098cd300();
  }
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 1098ca338; end: 1098ca33b;  */

undefined8 FUN_1098ca338(undefined8 param_1)

{
  func_0x0001098cd01c();
  FUN_1098ca30c(param_1);
  return param_1;
}



/* Entry: 1098ca33c; end: 1098ca34f;  */

void FUN_1098ca33c(void)

{
  FUN_1098ca2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ca350; end: 1098ca35b;  */

undefined ** FUN_1098ca350(void)

{
  return &PTR_DAT_110b18b08;
}



/* Entry: 1098ca35c; end: 1098ca39f;  */

void FUN_1098ca35c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x0001098cd300();
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



/* Entry: 1098ca3a0; end: 1098ca517;  */

long * FUN_1098ca3a0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001098ccf40();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x28);
    param_4 = (long *)0x1;
    func_0x0001098cd090();
  }
  plVar3 = (long *)(ulong)*(uint *)(unaff_x20 + 0x34);
  if ((*(uint *)(unaff_x20 + 0x34) & 0xfffffffe) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x38);
    func_0x0001098cd090();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}


