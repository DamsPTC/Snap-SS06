/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b588020; end: 10b58804f;  */

long FUN_10b588020(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b588050(param_1);
  return param_1;
}



/* Entry: 10b588050; end: 10b588077;  */

long * FUN_10b588050(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b588078; end: 10b58807b;  */

long FUN_10b588078(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b588050(param_1);
  return param_1;
}



/* Entry: 10b58807c; end: 10b58808f;  */

void FUN_10b58807c(void)

{
  FUN_10b588020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b588090; end: 10b58809b;  */

undefined ** FUN_10b588090(void)

{
  return &PTR_DAT_110d0ef30;
}



/* Entry: 10b58809c; end: 10b5880e7;  */

void FUN_10b58809c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10b5880e8; end: 10b5881eb;  */

long * FUN_10b5880e8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b58814c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b58814c;
  func_0x00010b588478(puVar7,lVar3,param_3,&UNK_10f77cb88);
  param_2 = param_3;
  func_0x00010b588458(param_3,1);
LAB_10b58814c:
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
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



/* Entry: 10b5881ec; end: 10b588287;  */

long FUN_10b5881ec(long param_1)

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
    FUN_10b588288();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b588288; end: 10b5882b3;  */

long FUN_10b588288(long param_1)

{
  FUN_10b587e70();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5882b4; end: 10b5882b7;  */

void FUN_10b5882b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b588330(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5882b8; end: 10b58832f;  */

void FUN_10b5882b8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b588330(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b588330; end: 10b58834f;  */

void FUN_10b588330(long *param_1,long param_2)

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



/* Entry: 10b588350; end: 10b58837b;  */

undefined8 * FUN_10b588350(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b588330(param_1,param_3);
  return param_1;
}



/* Entry: 10b58837c; end: 10b5883ab;  */

long * FUN_10b58837c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5883ac; end: 10b58844f;  */

void FUN_10b5883ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0ee50;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b588450; end: 10b58847f;  */

void FUN_10b588450(void)

{
  return;
}



/* Entry: 10b588480; end: 10b58849b;  */

long FUN_10b588480(long param_1)

{
  long extraout_x8;
  
  FUN_10b58cbd0();
  FUN_10b5884d8();
  return param_1 + extraout_x8;
}



/* Entry: 10b58849c; end: 10b5884d7;  */

undefined8 * FUN_10b58849c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5884f0();
  }
  else {
    func_0x00010b5884f8();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0f880;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b58cd18(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10b5884d8; end: 10b58852f;  */

void FUN_10b5884d8(void)

{
  return;
}



/* Entry: 10b588530; end: 10b58855b;  */

undefined8 FUN_10b588530(undefined8 param_1)

{
  func_0x00010b589930();
  FUN_10b58855c(param_1);
  return param_1;
}



/* Entry: 10b58855c; end: 10b5885a3;  */

void FUN_10b58855c(void)

{
  long unaff_x19;
  
  func_0x00010b589a54();
  func_0x000107c30258(unaff_x19 + 0x20);
  func_0x000107c30258(unaff_x19 + 0x28);
  func_0x000107c30258(unaff_x19 + 0x30);
  func_0x000107c30258(unaff_x19 + 0x38);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_10b57423c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5885a4; end: 10b5885a7;  */

undefined8 FUN_10b5885a4(undefined8 param_1)

{
  func_0x00010b589930();
  FUN_10b58855c(param_1);
  return param_1;
}



/* Entry: 10b5885a8; end: 10b5885bb;  */

void FUN_10b5885a8(void)

{
  FUN_10b588530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5885bc; end: 10b5885c7;  */

undefined ** FUN_10b5885bc(void)

{
  return &PTR_DAT_110d0f098;
}



/* Entry: 10b5885c8; end: 10b58862f;  */

void FUN_10b5885c8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b589a48();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5742d0(*(undefined8 *)(unaff_x19 + 0x40));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10b588630; end: 10b58884b;  */

long * FUN_10b588630(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar1 = param_1;
  plVar5 = param_3;
  plVar3 = param_2;
  if ((int)param_1[9] != 0) {
    func_0x00010b589878();
    param_2 = plVar1;
    func_0x00010b5899f0();
    func_0x00010b5898e4();
    plVar3 = plVar1;
  }
  func_0x00010b5898fc(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588690;
  }
  else if ((int)param_2 != 0) {
LAB_10b588690:
    func_0x00010b5898bc();
    param_2 = (long *)0x3;
    plVar1 = param_3;
    func_0x00010b589854();
    plVar3 = plVar1;
  }
  func_0x00010b5898fc(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5886d0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5886d0:
    func_0x00010b5898bc();
    param_2 = (long *)0x4;
    plVar1 = param_3;
    func_0x00010b589854();
    plVar3 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    func_0x00010b589878();
    plVar2 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b5899a0();
    param_2 = plVar1;
    plVar3 = plVar2;
  }
  func_0x00010b5898fc(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588738;
  }
  else if ((int)param_2 != 0) {
LAB_10b588738:
    func_0x00010b5898bc();
    param_2 = (long *)0x6;
    plVar2 = param_3;
    func_0x00010b589854();
    plVar3 = plVar2;
  }
  if ((int)param_1[10] != 0) {
    func_0x00010b589878();
    plVar3 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010b5898e4();
    param_2 = plVar2;
  }
  func_0x00010b5898fc(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58879c;
  }
  else if ((int)param_2 != 0) {
LAB_10b58879c:
    func_0x00010b5898bc();
    param_2 = (long *)0x8;
    plVar3 = param_3;
    func_0x00010b589854();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = (long *)param_1[8];
    plVar5 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar3 = (long *)0x9;
    func_0x00010b58995c();
  }
  func_0x00010b5898fc(param_1[7]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b588814;
  }
  else if ((int)param_2 == 0) goto LAB_10b588814;
  func_0x00010b5898bc();
  plVar3 = param_3;
  func_0x00010b589854(param_3,10);
LAB_10b588814:
  if ((param_1[1] & 1U) == 0) {
    return plVar3;
  }
  func_0x00010b5899c8();
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



/* Entry: 10b58884c; end: 10b58897b;  */

void FUN_10b58884c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b589938();
  }
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b589938();
  }
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b589938();
  }
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b589938();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5744fc(*(undefined8 *)(param_1 + 0x40));
    func_0x00010b589938();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x4c) * 2;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5899d4();
    lVar3 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b58897c; end: 10b588adb;  */

void FUN_10b58897c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b58994c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b589914();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    param_1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x40);
    if (param_1 == (ulong *)0x0) {
      FUN_10b575774();
      *(ulong **)(unaff_x21 + 0x40) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b574200();
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4c) = 1;
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  func_0x00010b58998c();
  if ((extraout_x8_04 & 1) != 0) {
    func_0x00010b5899ac();
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



/* Entry: 10b588adc; end: 10b588b07;  */

undefined8 * FUN_10b588adc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d0f058;
  param_1[1] = param_2;
  FUN_10b588b08();
  return param_1;
}



/* Entry: 10b588b08; end: 10b588b2f;  */

void FUN_10b588b08(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x38) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10b588b30; end: 10b588c27;  */

void FUN_10b588b30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b589a6c();
  *unaff_x19 = &PTR_FUN_110d0f058;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5899bc();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
  unaff_x19[5] = unaff_x21;
  FUN_10b589450(unaff_x19 + 3,unaff_x20 + 0x18);
  lVar1 = unaff_x20 + 0x30;
  func_0x00010b589928();
  unaff_x19[6] = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x00010b589928();
  unaff_x19[7] = lVar1;
  lVar1 = unaff_x20 + 0x40;
  func_0x00010b589928();
  unaff_x19[8] = lVar1;
  lVar1 = unaff_x20 + 0x48;
  func_0x00010b589928();
  unaff_x19[9] = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010b589928();
  unaff_x19[10] = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010b589928();
  unaff_x19[0xb] = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00010b589928();
  unaff_x19[0xc] = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00010b589928();
  unaff_x19[0xd] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b58849c();
  }
  unaff_x19[0xe] = unaff_x21;
  unaff_x19[0xf] = *(undefined8 *)(unaff_x20 + 0x78);
  return;
}



/* Entry: 10b588c28; end: 10b588c53;  */

undefined8 FUN_10b588c28(undefined8 param_1)

{
  func_0x00010b589930();
  FUN_10b588c54(param_1);
  return param_1;
}



/* Entry: 10b588c54; end: 10b588cc3;  */

long * FUN_10b588c54(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b588cc4; end: 10b588cc7;  */

undefined8 FUN_10b588cc4(undefined8 param_1)

{
  func_0x00010b589930();
  FUN_10b588c54(param_1);
  return param_1;
}



/* Entry: 10b588cc8; end: 10b588cdb;  */

void FUN_10b588cc8(void)

{
  FUN_10b588c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b588cdc; end: 10b588ce7;  */

undefined ** FUN_10b588cdc(void)

{
  return &PTR_DAT_110d0f0d8;
}



/* Entry: 10b588ce8; end: 10b588d7f;  */

void FUN_10b588ce8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b58cad4(*(undefined8 *)(param_1 + 0x70));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10b588d80; end: 10b589267;  */

long * FUN_10b588d80(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  long unaff_x22;
  undefined8 *puVar9;
  int iVar10;
  
  plVar3 = param_1;
  plVar4 = param_2;
  plVar6 = param_3;
  func_0x00010b5898fc(param_1[6]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588dc4;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588dc4:
    func_0x00010b5898bc();
    plVar4 = (long *)0x1;
    plVar3 = param_3;
    func_0x00010b589854();
    param_2 = plVar3;
  }
  func_0x00010b5898fc(param_1[7]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588e04;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588e04:
    func_0x00010b5898bc();
    plVar4 = (long *)0x2;
    plVar3 = param_3;
    func_0x00010b589854();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((char)param_1[0xf] == '\x01') {
    func_0x00010b589878();
    plVar2 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010b5899a0();
    plVar4 = plVar3;
    param_2 = plVar2;
  }
  func_0x00010b5898fc(param_1[8]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588e6c;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588e6c:
    func_0x00010b5898bc();
    plVar4 = (long *)0xb;
    plVar2 = param_3;
    func_0x00010b589854();
    param_2 = plVar2;
  }
  func_0x00010b5898fc(param_1[9]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588eac;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588eac:
    func_0x00010b5898bc();
    plVar4 = (long *)0xc;
    plVar2 = param_3;
    func_0x00010b589854();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x79) == '\x01') {
    func_0x00010b589878();
    plVar3 = (long *)0x68;
    func_0x000107c280a8();
    func_0x00010b5899a0();
    plVar4 = plVar2;
    param_2 = plVar3;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar4 = (long *)param_1[0xe];
    plVar6 = (long *)(ulong)*(uint *)(plVar4 + 5);
    plVar3 = (long *)0xe;
    func_0x00010b58995c();
    param_2 = plVar3;
  }
  func_0x00010b5898fc(param_1[10]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588f30;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588f30:
    func_0x00010b5898bc();
    plVar4 = (long *)0xf;
    plVar3 = param_3;
    func_0x00010b589854();
    param_2 = plVar3;
  }
  func_0x00010b5898fc(param_1[0xb]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588f70;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588f70:
    func_0x00010b5898bc();
    plVar4 = (long *)0x10;
    plVar3 = param_3;
    func_0x00010b589854();
    param_2 = plVar3;
  }
  func_0x00010b5898fc(param_1[0xc]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b588fb0;
  }
  else if ((int)plVar4 != 0) {
LAB_10b588fb0:
    func_0x00010b5898bc();
    plVar4 = (long *)0x11;
    plVar3 = param_3;
    func_0x00010b589854();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    func_0x00010b589878();
    param_2 = (long *)0x90;
    func_0x000107c280a8();
    func_0x00010b5898e4();
    plVar4 = plVar3;
  }
  lVar5 = param_1[4];
  puVar9 = (undefined8 *)0x0;
  while (iVar8 = (int)puVar9, (int)lVar5 != iVar8) {
    uVar7 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar8 * 8 + 7);
    }
    plVar4 = (long *)*puVar1;
    plVar6 = (long *)(ulong)*(uint *)((long)plVar4 + 0x1c);
    param_2 = (long *)0x13;
    func_0x00010b58995c();
    puVar9 = (undefined8 *)(ulong)(iVar8 + 1);
  }
  func_0x00010b5898fc(param_1[0xd]);
  if ((long)plVar4 < 0) {
    if (puVar9[1] == 0) goto LAB_10b589074;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if ((int)plVar4 == 0) goto LAB_10b589074;
  func_0x00010b5898bc(puVar9);
  param_2 = param_3;
  func_0x00010b589854(param_3,0x14);
LAB_10b589074:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b5899c8();
  if ((long)plVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar5,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 10b589268; end: 10b58926b;  */

void FUN_10b589268(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b58994c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b589450();
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x58));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x70);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b58849c();
      *(ulong **)(unaff_x21 + 0x70) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10b58cc78();
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  func_0x00010b58998c();
  if ((extraout_x8_07 & 1) != 0) {
    func_0x00010b5899ac();
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



/* Entry: 10b58926c; end: 10b58944f;  */

void FUN_10b58926c(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b58994c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b589450();
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x58));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x70);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b58849c();
      *(ulong **)(unaff_x21 + 0x70) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10b58cc78();
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  func_0x00010b58998c();
  if ((extraout_x8_07 & 1) != 0) {
    func_0x00010b5899ac();
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



/* Entry: 10b589450; end: 10b58945f;  */

void FUN_10b589450(long *param_1,long param_2)

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



/* Entry: 10b589460; end: 10b58956b;  */

void FUN_10b589460(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b588ce8();
  func_0x00010b58994c(param_1,param_2);
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b589450();
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x58));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5898f0(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b589914();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x70);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b58849c();
      *(ulong **)(unaff_x21 + 0x70) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10b58cc78();
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  func_0x00010b58998c();
  if ((extraout_x8_07 & 1) != 0) {
    func_0x00010b5899ac();
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



/* Entry: 10b58956c; end: 10b589593;  */

undefined8 FUN_10b58956c(undefined8 param_1)

{
  func_0x00010b589930();
  func_0x00010b589a40();
  return param_1;
}



/* Entry: 10b589594; end: 10b589597;  */

undefined8 FUN_10b589594(undefined8 param_1)

{
  func_0x00010b589930();
  func_0x00010b589a40();
  return param_1;
}



/* Entry: 10b589598; end: 10b5895ab;  */

void FUN_10b589598(void)

{
  FUN_10b58956c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5895ac; end: 10b5895b7;  */

undefined ** FUN_10b5895ac(void)

{
  return &PTR_DAT_110d0f118;
}



/* Entry: 10b5895b8; end: 10b5895e7;  */

void FUN_10b5895b8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b589980();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b5895e8; end: 10b58968b;  */

long * FUN_10b5895e8(long *param_1,long *param_2,ulong param_3)

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
  
  func_0x00010b5899f8();
  if ((int)param_1[3] != 0) {
    func_0x00010b589968();
    param_2 = param_1;
    func_0x00010b5899f0();
    func_0x00010b589a60();
    unaff_x20 = param_1;
  }
  func_0x00010b5898fc(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b589654;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b589654;
  func_0x00010b5898bc();
  func_0x00010b589884();
  unaff_x20 = unaff_x22;
LAB_10b589654:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5899c8();
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



/* Entry: 10b58968c; end: 10b58975b;  */

void FUN_10b58968c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b589908(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010b5898a0();
    iVar1 = extraout_w8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5899d4();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b58975c; end: 10b589773;  */

void FUN_10b58975c(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x00010b589a28();
  }
  else {
    func_0x00010b589974();
  }
  func_0x00010b589a08(&PTR_FUN_110d0efb8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10b589774; end: 10b5897a3;  */

long * FUN_10b589774(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5897a4; end: 10b589853;  */

void FUN_10b5897a4(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010b589a28();
  }
  else {
    func_0x00010b589974();
  }
  func_0x00010b589a08(&PTR_FUN_110d0efb8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b589854; end: 10b589a7f;  */

long * FUN_10b589854(long *param_1,undefined8 param_2)

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
  long *unaff_x21;
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
    if (lVar7 <= lVar10 + ~((long)unaff_x21 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x21 + 2;
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
     ((*param_1 - (long)unaff_x21) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x21);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x21 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x21) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x21 + (long)iVar9;
      unaff_x21 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar8);
  }
  _memcpy(unaff_x21);
  return (long *)((long)unaff_x21 + (long)iVar8);
}



/* Entry: 10b589a80; end: 10b589aab;  */

undefined8 FUN_10b589a80(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b589aac(param_1);
  return param_1;
}



/* Entry: 10b589aac; end: 10b589ac7;  */

void FUN_10b589aac(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b574ae0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b589ac8; end: 10b589acb;  */

undefined8 FUN_10b589ac8(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b589aac(param_1);
  return param_1;
}



/* Entry: 10b589acc; end: 10b589adf;  */

void FUN_10b589acc(void)

{
  FUN_10b589a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b589ae0; end: 10b589aeb;  */

undefined ** FUN_10b589ae0(void)

{
  return &PTR_DAT_110d0f338;
}



/* Entry: 10b589aec; end: 10b589b33;  */

void FUN_10b589aec(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b574b68(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b589b34; end: 10b589beb;  */

long * FUN_10b589b34(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b58abf8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_1 = (long *)0x1;
    func_0x00010b58aba4();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b58ab98();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    plVar2 = (long *)0x11;
    func_0x000107c280a8(0x11,param_1);
    param_4 = plVar2 + 1;
    *plVar2 = lVar4;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x00010b58ab98();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x28);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280a8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58ac28();
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



/* Entry: 10b589bec; end: 10b589c57;  */

void FUN_10b589bec(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010b57531c();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58ac60();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b589c58; end: 10b589cfb;  */

void FUN_10b589c58(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b58ac18();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x00010b575908();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b574cc0();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58ac08();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b589cfc; end: 10b589d33;  */

void FUN_10b589cfc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 10b589d34; end: 10b589d57;  */

undefined8 FUN_10b589d34(undefined8 param_1)

{
  func_0x00010b58abc0();
  return param_1;
}



/* Entry: 10b589d58; end: 10b589d5b;  */

undefined8 FUN_10b589d58(undefined8 param_1)

{
  func_0x00010b58abc0();
  return param_1;
}



/* Entry: 10b589d5c; end: 10b589d6f;  */

void FUN_10b589d5c(void)

{
  FUN_10b589d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b589d70; end: 10b589d8f;  */

undefined ** FUN_10b589d70(void)

{
  return &PTR_DAT_110d0f388;
}



/* Entry: 10b589d90; end: 10b589e27;  */

long * FUN_10b589d90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b58abf8();
  plVar6 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b58ab98();
    plVar6 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar3 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280b8(plVar6,uVar3);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b58ab98();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
    puVar4 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,plVar6);
    param_4 = (long *)(puVar4 + 1);
    *puVar4 = uVar1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58ac28();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b589e28; end: 10b589e87;  */

long FUN_10b589e28(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b589e88; end: 10b589ebf;  */

void FUN_10b589e88(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b589d7c();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 10b589ec0; end: 10b589eeb;  */

undefined8 FUN_10b589ec0(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b589eec(param_1);
  return param_1;
}



/* Entry: 10b589eec; end: 10b589f1b;  */

void FUN_10b589eec(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b589f1c; end: 10b589f1f;  */

undefined8 FUN_10b589f1c(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b589eec(param_1);
  return param_1;
}



/* Entry: 10b589f20; end: 10b589f33;  */

void FUN_10b589f20(void)

{
  FUN_10b589ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b589f34; end: 10b589f3f;  */

undefined ** FUN_10b589f34(void)

{
  return &PTR_DAT_110d0f3c8;
}



/* Entry: 10b589f40; end: 10b589f87;  */

void FUN_10b589f40(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b589f88; end: 10b58a04b;  */

long * FUN_10b589f88(long param_1,long *param_2,long *param_3)

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
    if (lVar2 == 0) goto LAB_10b589ff4;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_10b589ff4;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f77ce22);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar3 = plVar5;
  param_2 = plVar1;
LAB_10b589ff4:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x20);
    param_2 = (long *)0x2;
    func_0x00010b58aba4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b58ac28();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b58a04c; end: 10b58a0cb;  */

long FUN_10b58a04c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b58a084;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b58a084:
    lVar3 = 0;
    goto LAB_10b58a088;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b58a088:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000108c6cd50();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58ac60();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b58a0cc; end: 10b58a0cf;  */

void FUN_10b58a0cc(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b58ac18();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b58ac4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b58ac08();
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



/* Entry: 10b58a0d0; end: 10b58a16f;  */

void FUN_10b58a0d0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b58ac18();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b58ac4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b58ac08();
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



/* Entry: 10b58a170; end: 10b58a1a7;  */

void FUN_10b58a170(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b589f40();
  func_0x00010b58ac18(param_1,param_2);
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b58ac4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b58ac08();
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



/* Entry: 10b58a1a8; end: 10b58a1d3;  */

long FUN_10b58a1a8(long param_1)

{
  func_0x00010b58abc0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58a1d4; end: 10b58a1d7;  */

long FUN_10b58a1d4(long param_1)

{
  func_0x00010b58abc0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58a1d8; end: 10b58a1eb;  */

void FUN_10b58a1d8(void)

{
  FUN_10b58a1a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58a1ec; end: 10b58a1f7;  */

undefined ** FUN_10b58a1ec(void)

{
  return &PTR_DAT_110d0f408;
}



/* Entry: 10b58a1f8; end: 10b58a22b;  */

void FUN_10b58a1f8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 10b58a22c; end: 10b58a2cf;  */

long * FUN_10b58a22c(long param_1,long *param_2,long *param_3)

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
    if (lVar2 == 0) goto LAB_10b58a298;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_10b58a298;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f77ce55);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_10b58a298:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b58ac28();
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



/* Entry: 10b58a2d0; end: 10b58a333;  */

void FUN_10b58a2d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b58a308;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b58a308:
    iVar1 = 0;
    goto LAB_10b58a30c;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b58a30c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58ac60();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b58a334; end: 10b58a337;  */

void FUN_10b58a334(long param_1,long param_2)

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



/* Entry: 10b58a338; end: 10b58a3a3;  */

void FUN_10b58a338(long param_1,long param_2)

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



/* Entry: 10b58a3a4; end: 10b58a3cf;  */

undefined8 FUN_10b58a3a4(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b58a3d0(param_1);
  return param_1;
}



/* Entry: 10b58a3d0; end: 10b58a437;  */

void FUN_10b58a3d0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b589d34();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5d8a40();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b589ec0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b58a1a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58a438; end: 10b58a43b;  */

undefined8 FUN_10b58a438(undefined8 param_1)

{
  func_0x00010b58abc0();
  FUN_10b58a3d0(param_1);
  return param_1;
}



/* Entry: 10b58a43c; end: 10b58a44f;  */

void FUN_10b58a43c(void)

{
  FUN_10b58a3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58a450; end: 10b58a45b;  */

undefined ** FUN_10b58a450(void)

{
  return &PTR_DAT_110d0f458;
}



/* Entry: 10b58a45c; end: 10b58a4eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b58a45c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b589d7c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b58cad4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5d8a94(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b589f40(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b58a1f8(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b58a4ec; end: 10b58a6db;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b58a4ec(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b58abf8();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x1;
    func_0x00010b58aba4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)0x2;
    func_0x00010b58aba4();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)0x3;
    func_0x00010b58aba4();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b58aba4();
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282c4();
    param_3 = param_4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    plVar2 = (long *)0x6;
    func_0x00010b58aba4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58ac28();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10b58a6dc; end: 10b58a6f7;  */

long FUN_10b58a6dc(long param_1)

{
  long extraout_x8;
  
  FUN_10b5d8b94();
  func_0x00010b58ab6c();
  return param_1 + extraout_x8;
}



/* Entry: 10b58a6f8; end: 10b58a82b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b58a6f8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b58ac18();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b58a9b8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b589cfc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b58849c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b58cc78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b58aa28();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5d8c20();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b58aa68();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b58a0d0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b58aaf8();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b58a338();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x00010b58ac4c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b58ac08();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b58a82c; end: 10b58a853;  */

void FUN_10b58a82c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b58abc8();
  }
  else {
    func_0x00010b58abac();
  }
  *puVar1 = &PTR_FUN_110d0f1b8;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}


