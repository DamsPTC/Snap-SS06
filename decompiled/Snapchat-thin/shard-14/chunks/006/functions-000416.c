/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b53db00; end: 10b53db63;  */

void FUN_10b53db00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110d022e0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  return;
}



/* Entry: 10b53db64; end: 10b53dbbb;  */

ulong * FUN_10b53db64(void)

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



/* Entry: 10b53dbbc; end: 10b53dbfb;  */

long FUN_10b53dbbc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53d570();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b53dbfc; end: 10b53dbff;  */

long FUN_10b53dbfc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53d570();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b53dc00; end: 10b53dc13;  */

void FUN_10b53dc00(void)

{
  FUN_10b53dbbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53dc14; end: 10b53dc1f;  */

undefined ** FUN_10b53dc14(void)

{
  return &PTR_DAT_110d02428;
}



/* Entry: 10b53dc20; end: 10b53ddc7;  */

void FUN_10b53dc20(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b53d610(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b53ddc8; end: 10b53dea7;  */

void FUN_10b53ddc8(long param_1,long param_2)

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
      func_0x00010b53c5e4(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b53d984();
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b53dea8; end: 10b53df07;  */

undefined8 * FUN_10b53dea8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d023e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b53e168(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b53df08; end: 10b53df37;  */

long FUN_10b53df08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e194(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53df38; end: 10b53df3b;  */

long FUN_10b53df38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e194(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53df3c; end: 10b53df4f;  */

void FUN_10b53df3c(void)

{
  FUN_10b53df08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53df50; end: 10b53df5b;  */

undefined ** FUN_10b53df50(void)

{
  return &PTR_DAT_110d02480;
}



/* Entry: 10b53df5c; end: 10b53df9f;  */

void FUN_10b53df5c(long param_1)

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



/* Entry: 10b53dfa0; end: 10b53e057;  */

long * FUN_10b53dfa0(long param_1,long *param_2,long *param_3)

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
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
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



/* Entry: 10b53e058; end: 10b53e0cf;  */

long FUN_10b53e058(long param_1)

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
    FUN_10b53e0d0();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b53e0d0; end: 10b53e0fb;  */

long FUN_10b53e0d0(long param_1)

{
  func_0x00010b53dd24();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b53e0fc; end: 10b53e0ff;  */

void FUN_10b53e0fc(long param_1,long param_2)

{
  FUN_10b53e148(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53e100; end: 10b53e147;  */

void FUN_10b53e100(long param_1,long param_2)

{
  FUN_10b53e148(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53e148; end: 10b53e167;  */

void FUN_10b53e148(long *param_1,long param_2)

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



/* Entry: 10b53e168; end: 10b53e193;  */

undefined8 * FUN_10b53e168(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b53e148(param_1,param_3);
  return param_1;
}



/* Entry: 10b53e194; end: 10b53e1c3;  */

long * FUN_10b53e194(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b53e1c4; end: 10b53e253;  */

void FUN_10b53e1c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b53e270();
  }
  *puVar1 = &PTR_FUN_110d02398;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b53e254; end: 10b53e27b;  */

void FUN_10b53e254(void)

{
  return;
}



/* Entry: 10b53e27c; end: 10b53e2f3;  */

undefined8 * FUN_10b53e27c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d02510;
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
    func_0x00010b53c4f4(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b53e2f4; end: 10b53e323;  */

long FUN_10b53e2f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e324(param_1);
  return param_1;
}



/* Entry: 10b53e324; end: 10b53e33f;  */

void FUN_10b53e324(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b536530();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53e340; end: 10b53e343;  */

long FUN_10b53e340(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e324(param_1);
  return param_1;
}



/* Entry: 10b53e344; end: 10b53e357;  */

void FUN_10b53e344(void)

{
  FUN_10b53e2f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53e358; end: 10b53e363;  */

undefined ** FUN_10b53e358(void)

{
  return &PTR_DAT_110d02550;
}



/* Entry: 10b53e364; end: 10b53e477;  */

void FUN_10b53e364(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5365bc(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b53e478; end: 10b53e47b;  */

void FUN_10b53e478(long param_1,long param_2)

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
      func_0x00010b53c4f4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b53687c(*(long *)(param_1 + 0x18));
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



/* Entry: 10b53e47c; end: 10b53e50f;  */

void FUN_10b53e47c(long param_1,long param_2)

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
      func_0x00010b53c4f4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b53687c(*(long *)(param_1 + 0x18));
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



/* Entry: 10b53e510; end: 10b53e517;  */

void FUN_10b53e510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d02510;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b53e518; end: 10b53e55b;  */

void FUN_10b53e518(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d02510;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b53e55c; end: 10b53e57f;  */

void FUN_10b53e55c(void)

{
  return;
}



/* Entry: 10b53e580; end: 10b53e5a7;  */

long FUN_10b53e580(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53e5a8; end: 10b53e5ef;  */

undefined8 * FUN_10b53e5a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d025c0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  func_0x00010b53e564(param_1,param_3);
  return param_1;
}



/* Entry: 10b53e5f0; end: 10b53e5f3;  */

long FUN_10b53e5f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53e5f4; end: 10b53e607;  */

void FUN_10b53e5f4(void)

{
  FUN_10b53e580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53e608; end: 10b53e693;  */

undefined ** FUN_10b53e608(void)

{
  return &PTR_DAT_110d02600;
}



/* Entry: 10b53e694; end: 10b53e6d7;  */

void FUN_10b53e694(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d025c0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b53e6d8; end: 10b53e6df;  */

void FUN_10b53e6d8(void)

{
  return;
}



/* Entry: 10b53e6e0; end: 10b53e753;  */

undefined8 * FUN_10b53e6e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d02670;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b53eb50();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b53eb50();
  param_1[3] = lVar1;
  param_3 = param_3 + 0x20;
  func_0x00010b53eb50();
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b53e754; end: 10b53e783;  */

long FUN_10b53e754(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e784(param_1);
  return param_1;
}



/* Entry: 10b53e784; end: 10b53e7b3;  */

/* WARNING: Possible PIC construction at 0x00010b53e798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b53e79c) */

void FUN_10b53e784(long param_1)

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



/* Entry: 10b53e7b4; end: 10b53e7b7;  */

long FUN_10b53e7b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53e784(param_1);
  return param_1;
}



/* Entry: 10b53e7b8; end: 10b53e7cb;  */

void FUN_10b53e7b8(void)

{
  FUN_10b53e754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53e7cc; end: 10b53e7d7;  */

undefined ** FUN_10b53e7cc(void)

{
  return &PTR_DAT_110d026b0;
}



/* Entry: 10b53e7d8; end: 10b53e823;  */

void FUN_10b53e7d8(long param_1)

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



/* Entry: 10b53e824; end: 10b53e94f;  */

long * FUN_10b53e824(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b53e868;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b53e868:
    func_0x00010b53eb48(puVar5,lVar1,param_3,&UNK_10f778228);
    param_2 = param_3;
    func_0x00010b53eb34(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b53e8ac;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b53e8ac:
    func_0x00010b53eb48(puVar5);
    param_2 = param_3;
    func_0x00010b53eb34(param_3,2);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b53e90c;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b53e90c;
  func_0x00010b53eb48(puVar5);
  param_2 = param_3;
  func_0x00010b53eb34(param_3,3);
LAB_10b53e90c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b53e950; end: 10b53ea03;  */

long FUN_10b53e950(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b53e988;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b53e988:
    lVar3 = 0;
    goto LAB_10b53e98c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b53e98c:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b53ea04; end: 10b53ea07;  */

void FUN_10b53ea04(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
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



/* Entry: 10b53ea08; end: 10b53ead7;  */

void FUN_10b53ea08(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
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



/* Entry: 10b53ead8; end: 10b53eadf;  */

void FUN_10b53ead8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110d02670;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b53eae0; end: 10b53eb33;  */

void FUN_10b53eae0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d02670;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b53eb34; end: 10b53eb63;  */

long * FUN_10b53eb34(long *param_1,undefined8 param_2)

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



/* Entry: 10b53eb64; end: 10b53ebdf;  */

undefined8 * FUN_10b53eb64(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d02720;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  FUN_10b53f034();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  FUN_10b53f034();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  FUN_10b53f034();
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b53ebe0; end: 10b53ec0f;  */

long FUN_10b53ebe0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53ec10(param_1);
  return param_1;
}



/* Entry: 10b53ec10; end: 10b53ec3f;  */

/* WARNING: Possible PIC construction at 0x00010b53ec24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b53ec28) */

void FUN_10b53ec10(long param_1)

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



/* Entry: 10b53ec40; end: 10b53ec43;  */

long FUN_10b53ec40(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53ec10(param_1);
  return param_1;
}



/* Entry: 10b53ec44; end: 10b53ec57;  */

void FUN_10b53ec44(void)

{
  FUN_10b53ebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53ec58; end: 10b53ec63;  */

undefined ** FUN_10b53ec58(void)

{
  return &PTR_DAT_110d02760;
}



/* Entry: 10b53ec64; end: 10b53ecb3;  */

void FUN_10b53ec64(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
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



/* Entry: 10b53ecb4; end: 10b53ee0b;  */

long * FUN_10b53ecb4(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  plVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b53ed1c;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b53ed1c;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f7782af);
  param_2 = param_3;
  func_0x00010b53f048(param_3,1,puVar9);
  plVar2 = param_2;
LAB_10b53ed1c:
  lVar4 = (long)*(char *)((param_1[3] & 0xfffffffffffffffcU) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)((param_1[3] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x00010b53f048(param_3,2);
    param_2 = plVar2;
  }
  lVar4 = (long)*(char *)((param_1[4] & 0xfffffffffffffffcU) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)((param_1[4] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x00010b53f048(param_3,3);
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if ((char)param_1[5] == '\x01') {
    func_0x00010b53f050();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 5);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280a8(plVar7,uVar3);
    param_2 = plVar7;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b53f050();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar7);
    func_0x000107c280b8(param_2,uVar3);
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



/* Entry: 10b53ee0c; end: 10b53eee7;  */

void FUN_10b53ee0c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b53ee44;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b53ee44:
    iVar1 = 0;
    goto LAB_10b53ee48;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b53ee48:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  return;
}



/* Entry: 10b53eee8; end: 10b53eeeb;  */

void FUN_10b53eee8(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b53eeec; end: 10b53efd7;  */

void FUN_10b53eeec(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b53efd8; end: 10b53efdf;  */

void FUN_10b53efd8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d02720;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b53efe0; end: 10b53f033;  */

void FUN_10b53efe0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d02720;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b53f034; end: 10b53f063;  */

ulong FUN_10b53f034(ulong *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long unaff_x21;
  
  if ((*param_1 & 3) == 0) {
    return *param_1;
  }
  puVar2 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (unaff_x21 != 0) {
    puVar1 = &stack0xffffffffffffffe8;
    FUN_10b4bf19c(puVar1,&stack0xffffffffffffffe0,&stack0xffffffffffffffd8);
    return (ulong)puVar1 | 3;
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  func_0x000100063c9c();
  func_0x000107c60c50();
  return (ulong)puVar2 | 2;
}



/* Entry: 10b53f064; end: 10b53f0af;  */

long FUN_10b53f064(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b51cf0c();
  }
  __ZdlPv();
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b53f0b0; end: 10b53f0b3;  */

long FUN_10b53f0b0(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b51cf0c();
  }
  __ZdlPv();
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b53f0b4; end: 10b53f0c7;  */

void FUN_10b53f0b4(void)

{
  FUN_10b53f064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53f0c8; end: 10b53f0d3;  */

undefined ** FUN_10b53f0c8(void)

{
  return &PTR_DAT_110d03358;
}



/* Entry: 10b53f0d4; end: 10b53f133;  */

void FUN_10b53f0d4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b51cfa4(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b53f134; end: 10b53f2db;  */

undefined8 * FUN_10b53f134(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  long lVar5;
  long lStack_78;
  undefined8 *puStack_70;
  
  func_0x00010b547e44();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_1 = (undefined8 *)0x1;
    func_0x00010b547fac(1);
    unaff_x20 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_1 = (undefined8 *)0x2;
    func_0x00010b547fac(2,*(long *)(unaff_x21 + 0x40),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x40) + 0x18),unaff_x20);
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    if ((*(int *)(unaff_x21 + 0x18) == 1) || ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0)) {
      func_0x00010b548324();
      while (lStack_78 != 0) {
        lVar5 = lStack_78 + 8;
        param_1 = (undefined8 *)(lStack_78 + 0x20);
        unaff_x20 = (undefined8 *)0x3;
        func_0x00010b547f24(3);
        lVar3 = (long)*(char *)(lStack_78 + 0x1f);
        if (lVar3 < 0) {
          lVar5 = *(long *)(lStack_78 + 8);
          lVar3 = *(long *)(lStack_78 + 0x10);
        }
        func_0x00010b547ecc(lVar5,lVar3);
        lVar5 = (long)*(char *)(lStack_78 + 0x37);
        if (lVar5 < 0) {
          param_1 = *(undefined8 **)(lStack_78 + 0x20);
          lVar5 = *(long *)(lStack_78 + 0x28);
        }
        func_0x00010b547ecc(param_1,lVar5);
        func_0x00010b54831c();
      }
    }
    else {
      func_0x00010b5484b4();
      for (lVar5 = lStack_78 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        puVar4 = (undefined8 *)*puStack_70;
        param_1 = puVar4 + 3;
        unaff_x20 = (undefined8 *)0x3;
        func_0x00010b547f24(3);
        lVar3 = (long)*(char *)((long)puVar4 + 0x17);
        puVar2 = puVar4;
        if (lVar3 < 0) {
          lVar3 = puVar4[1];
          puVar2 = (undefined8 *)*puVar4;
        }
        func_0x00010b547ecc(puVar2,lVar3);
        lVar3 = (long)*(char *)((long)puVar4 + 0x2f);
        if (lVar3 < 0) {
          param_1 = (undefined8 *)puVar4[3];
          lVar3 = puVar4[4];
        }
        func_0x00010b547ecc(param_1,lVar3);
        puStack_70 = puStack_70 + 1;
      }
      func_0x00010b548304();
    }
  }
  puVar2 = param_1;
  if (*(char *)(unaff_x21 + 0x48) == '\x01') {
    func_0x00010b547e94();
    puVar2 = (undefined8 *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b548194();
    unaff_x20 = puVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    func_0x00010b548118();
    func_0x0001053930c4();
    unaff_x20 = puVar2;
  }
  return unaff_x20;
}



/* Entry: 10b53f2dc; end: 10b53f37f;  */

void FUN_10b53f2dc(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  ulong uVar4;
  undefined8 uStack_48;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x00010b548324();
  while (uStack_48 != 0) {
    func_0x00010b5484a0();
    uVar4 = lVar3 + uVar4;
    func_0x00010b54831c();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5371f0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010b5480ac();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b51d064(*(undefined8 *)(param_1 + 0x40));
      func_0x00010b547ca8();
    }
  }
  iVar2 = (int)uVar4 + (uint)*(byte *)(param_1 + 0x48) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b53f380; end: 10b53f383;  */

void FUN_10b53f380(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  func_0x0001059929d4();
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5484f4();
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x00010b537450();
        *(ulong **)(unaff_x21 + 0x38) = puVar1;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar1 == (ulong *)0x0) {
        func_0x00010b546bbc();
        *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        func_0x00010b51ced8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53f384; end: 10b53f42b;  */

void FUN_10b53f384(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  func_0x0001059929d4();
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5484f4();
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x00010b537450();
        *(ulong **)(unaff_x21 + 0x38) = puVar1;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar1 == (ulong *)0x0) {
        func_0x00010b546bbc();
        *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        func_0x00010b51ced8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53f42c; end: 10b53f45b;  */

long FUN_10b53f42c(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b5482d4();
  FUN_10b5461fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53f45c; end: 10b53f45f;  */

long FUN_10b53f45c(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b5482d4();
  FUN_10b5461fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53f460; end: 10b53f473;  */

void FUN_10b53f460(void)

{
  FUN_10b53f42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53f474; end: 10b53f47f;  */

undefined ** FUN_10b53f474(void)

{
  return &PTR_DAT_110d033a8;
}



/* Entry: 10b53f480; end: 10b53f4c3;  */

void FUN_10b53f480(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x00010b5482dc();
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



/* Entry: 10b53f4c4; end: 10b53f57b;  */

long * FUN_10b53f4c4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547e44();
  func_0x00010b548038(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_10b53f514;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b53f514;
  param_4 = (long *)&UNK_10f77831e;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b53f514:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010b5482b8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x2;
    func_0x00010b547fac();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b548118();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b53f57c; end: 10b53f5fb;  */

long FUN_10b53f57c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010b548448();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b53f5fc();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b548010(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b53f5fc; end: 10b53f617;  */

long FUN_10b53f5fc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b57523c();
  func_0x00010b547cec();
  return param_1 + extraout_x8;
}



/* Entry: 10b53f618; end: 10b53f61b;  */

void FUN_10b53f618(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548080();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  FUN_10b53f678();
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b53f61c; end: 10b53f677;  */

void FUN_10b53f61c(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548080();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  FUN_10b53f678();
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b53f678; end: 10b53f687;  */

void FUN_10b53f678(long *param_1,long param_2)

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



/* Entry: 10b53f688; end: 10b53f6db;  */

long FUN_10b53f688(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b53f42c();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x60);
  func_0x00010598e0e4(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b53f6dc; end: 10b53f6df;  */

long FUN_10b53f6dc(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b53f42c();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x60);
  func_0x00010598e0e4(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b53f6e0; end: 10b53f6f3;  */

void FUN_10b53f6e0(void)

{
  FUN_10b53f688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53f6f4; end: 10b53f6ff;  */

undefined ** FUN_10b53f6f4(void)

{
  return &PTR_DAT_110d03410;
}



/* Entry: 10b53f700; end: 10b53f74f;  */

void FUN_10b53f700(ulong *param_1)

{
  ulong extraout_x8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  func_0x000107c282c0(param_1 + 0xc);
  if ((param_1[2] & 1) != 0) {
    FUN_10b53f480(param_1[0xf]);
  }
  func_0x00010b54856c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b53f750; end: 10b53f9e3;  */

long * FUN_10b53f750(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  int *piVar3;
  ulong *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar8;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  int *piVar10;
  ulong *puVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  
  func_0x00010b547f8c();
  uVar5 = *(uint *)(param_1 + 5);
  if (uVar5 != 0) {
    func_0x00010b547db0();
    *(undefined1 *)param_1 = 10;
    plVar14 = param_1;
    while (0x7f < uVar5) {
      func_0x00010b5481bc();
    }
    *(char *)((long)param_1 + 1) = (char)uVar5;
    piVar10 = *(int **)(unaff_x20 + 0x20);
    piVar3 = piVar10 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x00010b547db0();
      uVar7 = (ulong)*piVar10;
      unaff_x21 = (long *)((long)plVar14 + 1);
      param_1 = plVar14;
      while (0x7f < uVar7) {
        func_0x00010b5481a0();
        uVar7 = extraout_x8;
      }
      piVar10 = piVar10 + 1;
      *(char *)plVar14 = (char)uVar7;
      plVar14 = param_1;
    } while (piVar10 < piVar3);
  }
  uVar5 = *(uint *)(unaff_x20 + 0x40);
  if (uVar5 != 0) {
    func_0x00010b547db0();
    *(undefined1 *)param_1 = 0x12;
    plVar14 = param_1;
    while (0x7f < uVar5) {
      func_0x00010b5481bc();
    }
    *(char *)((long)param_1 + 1) = (char)uVar5;
    piVar10 = *(int **)(unaff_x20 + 0x38);
    piVar3 = piVar10 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x00010b547db0();
      uVar7 = (ulong)*piVar10;
      unaff_x21 = (long *)((long)plVar14 + 1);
      param_1 = plVar14;
      while (0x7f < uVar7) {
        func_0x00010b5481a0();
        uVar7 = extraout_x8_00;
      }
      piVar10 = piVar10 + 1;
      *(char *)plVar14 = (char)uVar7;
      plVar14 = param_1;
    } while (piVar10 < piVar3);
  }
  uVar5 = *(uint *)(unaff_x20 + 0x58);
  if (0 < (int)uVar5) {
    func_0x00010b547db0();
    *(undefined1 *)param_1 = 0x1a;
    plVar14 = param_1;
    while (0x7f < uVar5) {
      func_0x00010b5481bc();
    }
    *(char *)((long)param_1 + 1) = (char)uVar5;
    puVar11 = *(ulong **)(unaff_x20 + 0x50);
    puVar4 = puVar11 + *(int *)(unaff_x20 + 0x48);
    do {
      func_0x00010b547db0();
      uVar7 = *puVar11;
      unaff_x21 = (long *)((long)plVar14 + 1);
      param_1 = plVar14;
      while (0x7f < uVar7) {
        func_0x00010b5481a0();
        uVar7 = extraout_x8_01;
      }
      puVar11 = puVar11 + 1;
      *(char *)plVar14 = (char)uVar7;
      plVar14 = param_1;
    } while (puVar11 < puVar4);
  }
  lVar15 = 8;
  for (uVar7 = (ulong)(*(uint *)(unaff_x20 + 0x68) &
                      ((int)*(uint *)(unaff_x20 + 0x68) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    uVar8 = *(ulong *)(unaff_x20 + 0x60);
    puVar11 = (ulong *)(unaff_x20 + 0x60);
    if ((uVar8 & 1) != 0) {
      puVar11 = (ulong *)(uVar8 + lVar15 + -1);
    }
    param_3 = (long *)*puVar11;
    lVar6 = (long)*(char *)((long)param_3 + 0x17);
    param_1 = param_3;
    if (lVar6 < 0) {
      lVar6 = param_3[1];
      param_1 = (long *)*param_3;
    }
    func_0x00010b547ecc(param_1,lVar6);
    plVar14 = (long *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)plVar14 < 0) && (plVar14 = (long *)param_3[1], 0x7f < (long)plVar14)) ||
       ((*unaff_x19 - (long)unaff_x21) + 0xe < (long)plVar14)) {
      func_0x00010b548430();
      func_0x00010b4d5120();
      plVar14 = param_1;
    }
    else {
      *(undefined1 *)unaff_x21 = 0x22;
      *(char *)((long)unaff_x21 + 1) = (char)plVar14;
      plVar12 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        plVar12 = (long *)*param_3;
      }
      plVar2 = (long *)((long)unaff_x21 + 2);
      param_1 = plVar2;
      param_3 = plVar14;
      _memcpy(plVar2,plVar12);
      unaff_x21 = param_4;
      plVar14 = (long *)((long)plVar2 + (long)plVar14);
    }
    lVar15 = lVar15 + 8;
    param_4 = unaff_x21;
    unaff_x21 = plVar14;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x30);
    param_1 = (long *)0x5;
    func_0x00010b547f38();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8_02 + 0x10);
  }
  func_0x00010b548254();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar13 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar9 = (int)param_3;
    param_3 = (long *)(ulong)(uint)(iVar9 - iVar13);
    if (iVar9 - iVar13 == 0 || iVar9 < iVar13) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_4 + (long)iVar13);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar9);
}



/* Entry: 10b53f9e4; end: 10b53fb73;  */

void FUN_10b53f9e4(long param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = 0;
  lVar3 = 0;
  for (lVar6 = (long)*(int *)(param_1 + 0x18); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar3;
    lVar5 = lVar5 + 0x100000000;
  }
  lVar5 = 0;
  if (lVar3 != 0) {
    lVar5 = lVar3 + (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
  }
  lVar7 = 0;
  lVar6 = 0;
  *(int *)(param_1 + 0x28) = (int)lVar3;
  for (lVar3 = (long)*(int *)(param_1 + 0x30); lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar6 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x38) + (lVar7 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar6;
    lVar7 = lVar7 + 0x100000000;
  }
  *(int *)(param_1 + 0x40) = (int)lVar6;
  iVar2 = (int)param_1 + 0x48;
  func_0x00010b4d3eb0(lVar6 + lVar5);
  *(int *)(param_1 + 0x58) = iVar2;
  lVar3 = 8;
  for (uVar8 = (ulong)(*(uint *)(param_1 + 0x68) &
                      ((int)*(uint *)(param_1 + 0x68) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x60);
    puVar1 = (ulong *)(param_1 + 0x60);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar3 + -1);
    }
    func_0x000107c282a0(*puVar1);
    lVar3 = lVar3 + 8;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b53f57c(*(undefined8 *)(param_1 + 0x78));
    FUN_10b547ca8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b54812c();
  }
  func_0x00010b548388();
  return;
}



/* Entry: 10b53fb74; end: 10b53fb77;  */

void FUN_10b53fb74(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c282d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x00010598be78(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar1 = (ulong *)(unaff_x21 + 0x60);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x78);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b546bec();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b53f61c();
    }
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547eb0();
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



/* Entry: 10b53fb78; end: 10b53fc0b;  */

void FUN_10b53fb78(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c282d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x00010598be78(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar1 = (ulong *)(unaff_x21 + 0x60);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x78);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b546bec();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b53f61c();
    }
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547eb0();
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


