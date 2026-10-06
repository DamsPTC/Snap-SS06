/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b53524c; end: 10b5352eb;  */

undefined ** FUN_10b53524c(void)

{
  return &PTR_DAT_110d00fd8;
}



/* Entry: 10b5352ec; end: 10b53542b;  */

void FUN_10b5352ec(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b535468();
  }
  else {
    func_0x00010b53543c();
  }
  func_0x00010b535500(&PTR_FUN_110d00ca0);
  return;
}



/* Entry: 10b53542c; end: 10b53557f;  */

void FUN_10b53542c(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b535580; end: 10b5355a7;  */

long FUN_10b535580(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5355a8; end: 10b5355ab;  */

long FUN_10b5355a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5355ac; end: 10b5355bf;  */

void FUN_10b5355ac(void)

{
  FUN_10b535580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5355c0; end: 10b5355df;  */

undefined ** FUN_10b5355c0(void)

{
  return &PTR_DAT_110d01150;
}



/* Entry: 10b5355e0; end: 10b535683;  */

long * FUN_10b5355e0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b535b7c();
    func_0x000107c282e4();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b535b7c();
    func_0x00010598f43c();
    param_2 = plVar1;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b535b7c();
    func_0x000107c282ac();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b535b7c();
    func_0x0001088bdd44();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b535684; end: 10b53572b;  */

ulong FUN_10b535684(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b53572c; end: 10b5357a3;  */

undefined8 * FUN_10b53572c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01110;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b535aec(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b5357a4; end: 10b5357d3;  */

long FUN_10b5357a4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5357d4(param_1);
  return param_1;
}



/* Entry: 10b5357d4; end: 10b5357ef;  */

void FUN_10b5357d4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5357f0; end: 10b5357f3;  */

long FUN_10b5357f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5357d4(param_1);
  return param_1;
}



/* Entry: 10b5357f4; end: 10b535807;  */

void FUN_10b5357f4(void)

{
  FUN_10b5357a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b535808; end: 10b535813;  */

undefined ** FUN_10b535808(void)

{
  return &PTR_DAT_110d01198;
}



/* Entry: 10b535814; end: 10b53585f;  */

void FUN_10b535814(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5355cc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b535860; end: 10b53590f;  */

long * FUN_10b535860(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar1,uVar3);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar1 + (long)iVar8;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar7);
    }
    _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar5);
  }
  return plVar1;
}



/* Entry: 10b535910; end: 10b53598b;  */

void FUN_10b535910(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b53598c();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10b53598c; end: 10b5359b7;  */

long FUN_10b53598c(long param_1)

{
  FUN_10b535684();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5359b8; end: 10b5359bb;  */

void FUN_10b5359b8(long param_1,long param_2)

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
      FUN_10b535aec(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535534(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b5359bc; end: 10b535a5b;  */

void FUN_10b5359bc(long param_1,long param_2)

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
      FUN_10b535aec(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535534(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b535a5c; end: 10b535a6b;  */

void FUN_10b535a5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b535b6c();
  }
  else {
    func_0x00010b535b74();
  }
  *puVar1 = &PTR_FUN_110d010c0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b535a6c; end: 10b535aeb;  */

void FUN_10b535a6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b535b6c();
  }
  else {
    func_0x00010b535b74();
  }
  *puVar1 = &PTR_FUN_110d010c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b535aec; end: 10b535b57;  */

undefined8 * FUN_10b535aec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b535b6c();
  }
  else {
    func_0x00010b535b74();
  }
  *puVar1 = &PTR_FUN_110d010c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b535534();
  return puVar1;
}



/* Entry: 10b535b58; end: 10b535bd3;  */

void FUN_10b535b58(void)

{
  return;
}



/* Entry: 10b535bd4; end: 10b535bfb;  */

long FUN_10b535bd4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b535bfc; end: 10b535c47;  */

undefined8 * FUN_10b535bfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d01218;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b535b88(param_1,param_3);
  return param_1;
}



/* Entry: 10b535c48; end: 10b535c4b;  */

long FUN_10b535c48(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b535c4c; end: 10b535c5f;  */

void FUN_10b535c4c(void)

{
  FUN_10b535bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b535c60; end: 10b535c7f;  */

undefined ** FUN_10b535c60(void)

{
  return &PTR_DAT_110d01258;
}



/* Entry: 10b535c80; end: 10b535d23;  */

long * FUN_10b535c80(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b535e24();
    func_0x000107c282e4();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b535e24();
    func_0x00010598f43c();
    param_2 = plVar1;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b535e24();
    func_0x000107c282ac();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b535e24();
    func_0x0001088bdd44();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b535d24; end: 10b535dd3;  */

ulong FUN_10b535d24(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b535dd4; end: 10b535e1b;  */

void FUN_10b535dd4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d01218;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b535e1c; end: 10b535e63;  */

void FUN_10b535e1c(void)

{
  return;
}



/* Entry: 10b535e64; end: 10b535e8b;  */

long FUN_10b535e64(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b535e8c; end: 10b535ed7;  */

undefined8 * FUN_10b535e8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d012b8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b535e30(param_1,param_3);
  return param_1;
}



/* Entry: 10b535ed8; end: 10b535edb;  */

long FUN_10b535ed8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b535edc; end: 10b535eef;  */

void FUN_10b535edc(void)

{
  FUN_10b535e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b535ef0; end: 10b535f0f;  */

undefined ** FUN_10b535ef0(void)

{
  return &PTR_DAT_110d012f8;
}



/* Entry: 10b535f10; end: 10b535fbb;  */

long * FUN_10b535f10(undefined8 *param_1,long *param_2,long *param_3)

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
    func_0x00010b536060();
    uVar6 = param_1[2];
    puVar1 = (undefined8 *)0x9;
    func_0x000107c280a8(9,puVar2);
    param_2 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  if (param_1[3] != 0) {
    func_0x00010b536060();
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



/* Entry: 10b535fbc; end: 10b53600f;  */

long FUN_10b535fbc(long param_1)

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



/* Entry: 10b536010; end: 10b536057;  */

void FUN_10b536010(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d012b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b536058; end: 10b536087;  */

void FUN_10b536058(void)

{
  return;
}



/* Entry: 10b536088; end: 10b5360af;  */

long FUN_10b536088(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5360b0; end: 10b5360f7;  */

undefined8 * FUN_10b5360b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d01358;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  func_0x00010b53606c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5360f8; end: 10b5360fb;  */

long FUN_10b5360f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5360fc; end: 10b53610f;  */

void FUN_10b5360fc(void)

{
  FUN_10b536088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b536110; end: 10b53619b;  */

undefined ** FUN_10b536110(void)

{
  return &PTR_DAT_110d01398;
}



/* Entry: 10b53619c; end: 10b5361df;  */

void FUN_10b53619c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d01358;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5361e0; end: 10b5361e7;  */

void FUN_10b5361e0(void)

{
  return;
}



/* Entry: 10b5361e8; end: 10b536217;  */

long FUN_10b5361e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536218(param_1);
  return param_1;
}



/* Entry: 10b536218; end: 10b53623f;  */

/* WARNING: Possible PIC construction at 0x00010b53622c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b536230) */

void FUN_10b536218(long param_1)

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



/* Entry: 10b536240; end: 10b536243;  */

long FUN_10b536240(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536218(param_1);
  return param_1;
}



/* Entry: 10b536244; end: 10b536257;  */

void FUN_10b536244(void)

{
  FUN_10b5361e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b536258; end: 10b536263;  */

undefined ** FUN_10b536258(void)

{
  return &PTR_DAT_110d014a0;
}



/* Entry: 10b536264; end: 10b5362a3;  */

void FUN_10b536264(long param_1)

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



/* Entry: 10b5362a4; end: 10b53637b;  */

long * FUN_10b5362a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b536b48(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5362e4;
  }
  else if ((int)plVar1 != 0) {
LAB_10b5362e4:
    func_0x00010b536ae4();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b536b18();
  }
  func_0x00010b536b48(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b536340;
  }
  else if ((int)plVar1 == 0) goto LAB_10b536340;
  func_0x00010b536ae4();
  param_2 = param_3;
  func_0x00010b536b18(param_3,2);
LAB_10b536340:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b53637c; end: 10b536403;  */

long FUN_10b53637c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b536b54(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b536b54(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b536404; end: 10b536407;  */

void FUN_10b536404(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x18);
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



/* Entry: 10b536408; end: 10b536493;  */

void FUN_10b536408(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x18);
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



/* Entry: 10b536494; end: 10b53652f;  */

undefined8 * FUN_10b536494(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01460;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b536b24();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b536a48(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(undefined2 *)((long)param_1 + 0x34) = *(undefined2 *)(param_3 + 0x34);
  *(undefined4 *)(param_1 + 6) = uVar1;
  return param_1;
}



/* Entry: 10b536530; end: 10b53655f;  */

long FUN_10b536530(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536560(param_1);
  return param_1;
}



/* Entry: 10b536560; end: 10b536597;  */

void FUN_10b536560(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5361e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b536598; end: 10b53659b;  */

long FUN_10b536598(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536560(param_1);
  return param_1;
}



/* Entry: 10b53659c; end: 10b5365af;  */

void FUN_10b53659c(void)

{
  FUN_10b536530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5365b0; end: 10b5365bb;  */

undefined ** FUN_10b5365b0(void)

{
  return &PTR_DAT_110d01500;
}



/* Entry: 10b5365bc; end: 10b536617;  */

void FUN_10b5365bc(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b536264(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b536618; end: 10b53678f;  */

long * FUN_10b536618(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  plVar1 = param_1;
  plVar2 = param_2;
  func_0x00010b536b48(param_1[3]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b536658;
  }
  else if ((int)plVar2 != 0) {
LAB_10b536658:
    func_0x00010b536ae4();
    plVar2 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010b536b0c();
    param_2 = plVar1;
  }
  plVar6 = plVar1;
  if ((int)param_1[6] != 0) {
    func_0x00010b536ad8();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 6);
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280b8();
    param_2 = plVar6;
  }
  plVar1 = plVar6;
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    func_0x00010b536ad8();
    plVar1 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b536aec();
    plVar2 = plVar6;
    param_2 = plVar1;
  }
  func_0x00010b536b48(param_1[4]);
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b536708;
  }
  else if ((int)plVar2 == 0) goto LAB_10b536708;
  func_0x00010b536ae4();
  plVar1 = param_3;
  func_0x00010b536b0c(param_3,4);
  param_2 = plVar1;
LAB_10b536708:
  if (*(char *)((long)param_1 + 0x35) == '\x01') {
    func_0x00010b536ad8();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x00010b536aec();
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar2 = (long *)0x6;
    func_0x000107c303cc(6,param_1[5],*(undefined4 *)(param_1[5] + 0x20),param_2,param_3);
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



/* Entry: 10b536790; end: 10b536877;  */

void FUN_10b536790(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1;
  func_0x00010b536b54(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar2 = (int)lVar4 + 1;
  }
  func_0x00010b536b54(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar2 = iVar2 + (int)lVar4 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    FUN_10b53637c();
    iVar2 = iVar2 + iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x34) * 2 + (uint)*(byte *)(param_1 + 0x35) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b536878; end: 10b53687b;  */

void FUN_10b536878(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_10b536a48(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b536408();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 1;
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



/* Entry: 10b53687c; end: 10b53699b;  */

void FUN_10b53687c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b536b3c(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b536b60();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_10b536a48(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b536408();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 1;
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



/* Entry: 10b53699c; end: 10b5369ab;  */

void FUN_10b53699c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b536b00();
  }
  *puVar1 = &PTR_FUN_110d01410;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5369ac; end: 10b536a47;  */

void FUN_10b5369ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b536b00();
  }
  *puVar1 = &PTR_FUN_110d01410;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b536a48; end: 10b536ac3;  */

undefined8 * FUN_10b536a48(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b536b00();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d01410;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b536b24();
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,param_1);
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 10b536ac4; end: 10b536b6b;  */

void FUN_10b536ac4(void)

{
  return;
}



/* Entry: 10b536b6c; end: 10b536c87;  */

undefined8 * FUN_10b536b6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01590;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000107c282d4(param_1 + 3,param_2,param_3 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b504dcc(param_1 + 6,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x50;
  func_0x000107c2809c(lVar2,param_2);
  param_1[10] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537494(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5374d8(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x78);
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x80);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return param_1;
}



/* Entry: 10b536c88; end: 10b536cb7;  */

long FUN_10b536c88(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536cb8(param_1);
  return param_1;
}



/* Entry: 10b536cb8; end: 10b536d0f;  */

long FUN_10b536cb8(long param_1)

{
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5047f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b506a34();
  }
  __ZdlPv();
  FUN_10b504e1c(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b536d10; end: 10b536d13;  */

long FUN_10b536d10(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b536cb8(param_1);
  return param_1;
}



/* Entry: 10b536d14; end: 10b536d27;  */

void FUN_10b536d14(void)

{
  FUN_10b536c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b536d28; end: 10b536d33;  */

undefined ** FUN_10b536d28(void)

{
  return &PTR_DAT_110d015d0;
}



/* Entry: 10b536d34; end: 10b536dc3;  */

void FUN_10b536d34(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x00010b504e9c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b50488c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b506aac(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10b536dc4; end: 10b537043;  */

byte * FUN_10b536dc4(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  pbVar2 = param_1;
  if (*(long *)(param_1 + 0x70) != 0) {
    pbVar2 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x70),param_2);
    param_2 = pbVar2;
  }
  uVar9 = *(uint *)(param_1 + 0x28);
  if (uVar9 != 0) {
    func_0x00010b537540();
    pbVar8 = pbVar2 + 2;
    *pbVar2 = 0x12;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      pbVar8[-1] = (byte)uVar9 | 0x80;
      pbVar8 = pbVar8 + 1;
    }
    pbVar8[-1] = (byte)uVar9;
    piVar10 = *(int **)(param_1 + 0x20);
    piVar1 = piVar10 + *(int *)(param_1 + 0x18);
    do {
      func_0x00010b537540();
      uVar7 = (ulong)*piVar10;
      pbVar8 = pbVar2;
      while( true ) {
        param_2 = pbVar8 + 1;
        if (uVar7 < 0x80) break;
        *pbVar8 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar8 = param_2;
      }
      piVar10 = piVar10 + 1;
      *pbVar8 = (byte)uVar7;
    } while (piVar10 < piVar1);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    pbVar2 = (byte *)0x3;
    func_0x00010b537534(3,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x30));
    param_2 = pbVar2;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    pbVar2 = (byte *)0x4;
    func_0x00010b537534(4,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x1c));
    param_2 = pbVar2;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    pbVar2 = param_3;
    func_0x000107c282c4(param_3,*(long *)(param_1 + 0x78),param_2);
    param_2 = pbVar2;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    pbVar2 = (byte *)0x6;
    func_0x00010b537534(6,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x4c));
    param_2 = pbVar2;
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar11[1];
    if (lVar5 == 0) goto LAB_10b536f30;
    puVar3 = (undefined8 *)*puVar11;
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b536f30;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f777e95);
  pbVar2 = param_3;
  func_0x000107c280a0(param_3,7,puVar11,param_2);
  param_2 = pbVar2;
LAB_10b536f30:
  if (*(int *)(param_1 + 0x80) != 0) {
    func_0x00010b537540();
    param_2 = (byte *)(ulong)*(uint *)(param_1 + 0x80);
    uVar4 = 0x40;
    func_0x000107c280a8(0x40,pbVar2);
    func_0x000107c280b8(param_2,uVar4);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(int *)(param_1 + 0x30) == 1) || ((param_3[0x3a] & 1) == 0)) {
      pbVar2 = (byte *)&lStack_58;
      func_0x00010564c19c(pbVar2);
      while (pbVar8 = pbVar2, lStack_58 != 0) {
        func_0x00010b53754c();
        pbVar2 = (byte *)&lStack_58;
        func_0x000107c27d54(pbVar2);
        param_2 = pbVar8;
      }
    }
    else {
      pbVar2 = (byte *)&lStack_58;
      FUN_10b504ec0(pbVar2);
      for (lStack_58 = lStack_58 << 4; lStack_58 != 0; lStack_58 = lStack_58 + -0x10) {
        func_0x00010b53754c();
        param_2 = pbVar2;
      }
      FUN_10b504e60(auStack_50);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar5 < 0) {
      lVar6 = *(long *)(uVar7 + 8);
      lVar5 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar6 = uVar7 + 8;
    }
    func_0x0001053930c4(param_3,lVar6,lVar5,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b537044; end: 10b5371ef;  */

long FUN_10b537044(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long alStack_48 [3];
  
  lVar4 = 0;
  lVar3 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar4 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar3;
    lVar4 = lVar4 + 0x100000000;
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = lVar3 + (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  lVar4 = lVar4 + (ulong)*(uint *)(param_1 + 0x30);
  func_0x00010564c19c(alStack_48);
  while (alStack_48[0] != 0) {
    lVar3 = alStack_48[0] + 8;
    FUN_10b504d78(lVar3,alStack_48[0] + 0x10);
    lVar4 = lVar3 + lVar4;
    func_0x000107c27d54(alStack_48);
  }
  uVar2 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x58);
      func_0x00010b5371f0();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010b53720c();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x68);
      func_0x00010b506c9c();
      FUN_10b53751c();
      lVar4 = lVar4 + lVar3 + extraout_x8 + 1;
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010b53755c();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010b53755c();
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b5371f0; end: 10b537227;  */

long FUN_10b5371f0(long param_1)

{
  long extraout_x8;
  
  FUN_10b54a590();
  FUN_10b53751c();
  return param_1 + extraout_x8;
}



/* Entry: 10b537228; end: 10b53722b;  */

void FUN_10b537228(long param_1,long param_2)

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
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b505080(param_1 + 0x30,param_2 + 0x30);
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
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b537450(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010b537494(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        func_0x00010b5047b8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        func_0x00010b5374d8(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_10b506d8c();
      }
    }
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
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



/* Entry: 10b53722c; end: 10b53739b;  */

void FUN_10b53722c(long param_1,long param_2)

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
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b505080(param_1 + 0x30,param_2 + 0x30);
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
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b537450(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010b537494(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        func_0x00010b5047b8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        func_0x00010b5374d8(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_10b506d8c();
      }
    }
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
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



/* Entry: 10b53739c; end: 10b5373a3;  */

void FUN_10b53739c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d01590;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0x100000000;
  puVar1[6] = 0x100000000;
  puVar1[8] = &DAT_10e5b4a18;
  puVar1[9] = param_2;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* Entry: 10b5373a4; end: 10b53751b;  */

long FUN_10b5373a4(long param_1)

{
  FUN_10b504e1c(param_1 + 0x20);
  func_0x000107c282dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b53751c; end: 10b53757b;  */

void FUN_10b53751c(void)

{
  return;
}



/* Entry: 10b53757c; end: 10b537633;  */

undefined8 * FUN_10b53757c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01640;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 10b537634; end: 10b537667;  */

long FUN_10b537634(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b537668(param_1);
  return param_1;
}



/* Entry: 10b537668; end: 10b5376af;  */

void FUN_10b537668(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5376b0; end: 10b5376b3;  */

long FUN_10b5376b0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b537668(param_1);
  return param_1;
}



/* Entry: 10b5376b4; end: 10b5376c7;  */

void FUN_10b5376b4(void)

{
  FUN_10b537634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5376c8; end: 10b5376d3;  */

undefined ** FUN_10b5376c8(void)

{
  return &PTR_DAT_110d01680;
}



/* Entry: 10b5376d4; end: 10b537743;  */

void FUN_10b5376d4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b537744; end: 10b5379c7;  */

long * FUN_10b537744(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  plVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b537788;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b537788:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f777ecb);
    param_2 = param_3;
    func_0x00010b537bd8(param_3,1);
    plVar2 = param_2;
  }
  puVar8 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b5377f0;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b5377f0;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f777f03);
  plVar2 = param_3;
  func_0x00010b537bd8(param_3,2);
  param_2 = plVar2;
LAB_10b5377f0:
  if (param_1[7] != 0) {
    plVar2 = param_3;
    func_0x00010599ccb0(param_3,param_1[7],param_2);
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x00010b537bcc(4,param_1[5],*(undefined4 *)(param_1[5] + 0x30));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x00010b537bcc(5,param_1[6],*(undefined4 *)(param_1[6] + 0x20));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[8] != 0) {
    func_0x00010b537bb4();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b537bc0();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010b537bb4();
    param_2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b537bc0();
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
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
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



/* Entry: 10b5379c8; end: 10b5379cb;  */

void FUN_10b5379c8(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 10b5379cc; end: 10b537b23;  */

void FUN_10b5379cc(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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


