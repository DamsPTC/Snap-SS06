/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0048c628; end: 0048c6ab;  */

void FUN_0048c628(undefined8 param_1)

{
  ulong uVar1;
  dword *pdVar2;
  int unaff_w19;
  
  FUN_0048c9f4();
  pdVar2 = &MACH_HEADER.ncmds;
  func_0x00487cbc(0x10,param_1);
  for (uVar1 = (ulong)unaff_w19; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *(byte *)pdVar2 = (byte)uVar1 | 0x80;
    pdVar2 = (dword *)((long)pdVar2 + 1);
  }
  *(byte *)pdVar2 = (byte)uVar1;
  return;
}



/* Entry: 0048c6ac; end: 0048c7b7;  */

void FUN_0048c6ac(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  lVar5 = (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_0048c7b8();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
    FUN_0048c7b8();
    iVar3 = iVar3 + iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x44) * 2;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 0048c7b8; end: 0048c7e3;  */

long FUN_0048c7b8(long param_1)

{
  func_0x0049ae10();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0048c7e4; end: 0048c7e7;  */

void FUN_0048c7e4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_0048c8d4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_0048c9b0(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_0049ae7c();
    }
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
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048c7e8; end: 0048c8d3;  */

void FUN_0048c7e8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_0048c8d4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_0048c9b0(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_0049ae7c();
    }
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
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048c8d4; end: 0048c8eb;  */

void FUN_0048c8d4(long *param_1,long param_2)

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
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0048c8ec; end: 0048c917;  */

undefined8 * FUN_0048c8ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_0048c8d4(param_1,param_3);
  return param_1;
}



/* Entry: 0048c918; end: 0048c947;  */

long * FUN_0048c918(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0048c948; end: 0048c99b;  */

void FUN_0048c948(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009e93a0;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = 0;
  pqVar1[4] = 0;
  pqVar1[5] = (qword)param_1;
  pqVar1[7] = 0;
  pqVar1[8] = 0;
  pqVar1[6] = 0;
  *(undefined4 *)(pqVar1 + 9) = 0;
  return;
}



/* Entry: 0048c99c; end: 0048c9af;  */

void FUN_0048c99c(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0048c9b0; end: 0048c9f3;  */

segment_command * FUN_0048c9b0(segment_command *param_1,long param_2)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(segment_command **)psVar1->segname = param_1;
  *(undefined ***)psVar1 = &PTR_FUN_009eba58;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0054a3dc(psVar1->segname,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_2 = param_2 + 0x10;
  func_0x00487c6c(param_2,param_1);
  *(long *)(psVar1->segname + 8) = param_2;
  *(undefined4 *)&psVar1->vmaddr = 0;
  return psVar1;
}



/* Entry: 0048c9f4; end: 0048ca27;  */

ulong * FUN_0048c9f4(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_3 < (ulong *)*param_1) {
    return param_3;
  }
  do {
    if ((char)param_1[7] == '\x01') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    puVar2 = param_1;
    FUN_0054ec3c();
    param_3 = (ulong *)((long)puVar2 + (long)((int)param_3 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_3);
  return param_3;
}



/* Entry: 0048ca28; end: 0048cac3;  */

undefined8 * FUN_0048ca28(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e9450;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_0048cf2c(param_1 + 2,param_2,param_3 + 0x10);
  lVar1 = param_3 + 0x28;
  func_0x00487c6c(lVar1,param_2);
  param_1[5] = lVar1;
  param_3 = param_3 + 0x30;
  func_0x00487c6c(param_3,param_2);
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 0048cac4; end: 0048caf3;  */

long FUN_0048cac4(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0048caf4(param_1);
  return param_1;
}



/* Entry: 0048caf4; end: 0048cb23;  */

long * FUN_0048caf4(long param_1)

{
  long *plVar1;
  
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    FUN_00437b48(plVar1);
  }
  return plVar1;
}



/* Entry: 0048cb24; end: 0048cb27;  */

long FUN_0048cb24(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0048caf4(param_1);
  return param_1;
}



/* Entry: 0048cb28; end: 0048cb3b;  */

void FUN_0048cb28(void)

{
  FUN_0048cac4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048cb3c; end: 0048cb47;  */

undefined ** FUN_0048cb3c(void)

{
  return &PTR_DAT_009e9490;
}



/* Entry: 0048cb48; end: 0048cb93;  */

void FUN_0048cb48(long param_1)

{
  ulong *puVar1;
  
  FUN_0048cfec(param_1 + 0x10);
  FUN_00532fa8(param_1 + 0x28);
  FUN_00532fa8(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0048cb94; end: 0048cd87;  */

long * FUN_0048cb94(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_0048cbe4;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_0048cbe4:
    FUN_0054ddb8(puVar8,lVar4,1,"snapchat.notification.LocalizationString.key");
    param_2 = param_3;
    func_0x0048d024(param_3,1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_0048cc4c;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_0048cc4c;
  FUN_0054ddb8(puVar8,lVar4,1,"snapchat.notification.LocalizationString.defaultString");
  param_2 = param_3;
  func_0x0048d024(param_3,2);
LAB_0048cc4c:
  lVar4 = 8;
  for (uVar11 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar4 + -1);
    }
    puVar9 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    puVar8 = puVar9;
    if (lVar5 < 0) {
      lVar5 = puVar9[1];
      puVar8 = (undefined8 *)*puVar9;
    }
    FUN_0054ddb8(puVar8,lVar5,1,"snapchat.notification.LocalizationString.args");
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar9[1], 0x7f < lVar5)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar5)) {
      plVar3 = param_3;
      func_0x0054f030(param_3,3,puVar9,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x1a;
      *(char *)((long)param_2 + 1) = (char)lVar5;
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        puVar9 = (undefined8 *)*puVar9;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar9,lVar5);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar5);
    }
    lVar4 = lVar4 + 8;
    param_2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar11 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar11 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,uVar11 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar11);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar7 - iVar10);
    if (iVar7 - iVar10 == 0 || iVar7 < iVar10) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar10);
    param_2 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (long *)((long)param_2 + (long)iVar7);
}



/* Entry: 0048cd88; end: 0048ce63;  */

ulong FUN_0048cd88(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    FUN_0048910c();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    FUN_0048910c();
    uVar4 = uVar4 + uVar5 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    FUN_0048910c();
    uVar4 = uVar4 + uVar5 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x38) = (int)uVar4;
  return uVar4;
}



/* Entry: 0048ce64; end: 0048ce67;  */

void FUN_0048ce64(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_0048cf14(param_1 + 0x10,param_2 + 0x10);
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
    func_0x00532e08(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x30,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048ce68; end: 0048cf13;  */

void FUN_0048ce68(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_0048cf14(param_1 + 0x10,param_2 + 0x10);
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
    func_0x00532e08(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x30,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048cf14; end: 0048cf2b;  */

void FUN_0048cf14(dword *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *unaff_x19;
  int unaff_w20;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lStack_58;
  
  if ((int)param_2[1] != 0) {
    FUN_0054d5a8();
    puVar1 = param_2;
    if ((*param_2 & 1) != 0) {
      puVar1 = (ulong *)(*param_2 + 7);
    }
    uVar2 = param_2[1];
    pdVar4 = param_1;
    func_0x0054d6a8();
    iVar3 = (int)param_2[1];
    if ((int)pdVar4 <= (int)param_2[1]) {
      iVar3 = (int)pdVar4;
    }
    for (puVar7 = puVar1; puVar7 < puVar1 + iVar3; puVar7 = puVar7 + 1) {
      pdVar4 = *(dword **)param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pdVar4,*puVar7);
      param_1 = param_1 + 2;
    }
    lVar6 = unaff_x19[2];
    if (lVar6 == 0) {
      lVar6 = 0;
      while( true ) {
        iVar3 = (int)pdVar4;
        if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar6)) break;
        pdVar5 = &MACH_HEADER.flags;
        __Znwm();
        pdVar4 = pdVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
        *(dword **)((long)param_1 + lVar6) = pdVar5;
        lVar6 = lVar6 + 8;
      }
    }
    else {
      lVar8 = 0;
      while( true ) {
        iVar3 = (int)pdVar4;
        if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar8)) break;
        pdVar4 = (dword *)&lStack_58;
        lStack_58 = lVar6;
        FUN_0054d544(pdVar4,*(ulong *)((long)puVar7 + lVar8));
        *(dword **)((long)param_1 + lVar8) = pdVar4;
        lVar8 = lVar8 + 8;
      }
    }
    func_0x0054d60c();
    if (iVar3 < unaff_w20) {
      *(int *)(*unaff_x19 + -1) = unaff_w20;
    }
    return;
  }
  return;
}



/* Entry: 0048cf2c; end: 0048cf57;  */

undefined8 * FUN_0048cf2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_0048cf14(param_1,param_3);
  return param_1;
}



/* Entry: 0048cf58; end: 0048cf73;  */

uint FUN_0048cf58(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    return (uint)(uVar1 != 0);
  }
  return *(uint *)(uVar1 - 1);
}



/* Entry: 0048cf74; end: 0048cf93;  */

void FUN_0048cf74(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  if (param_1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048cf94; end: 0048cfeb;  */

void FUN_0048cf94(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  *pqVar1 = (qword)&PTR_FUN_009e9450;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = 0;
  pqVar1[4] = (qword)param_1;
  pqVar1[5] = (qword)&DAT_00b69408;
  pqVar1[6] = (qword)&DAT_00b69408;
  *(undefined4 *)(pqVar1 + 7) = 0;
  return;
}



/* Entry: 0048cfec; end: 0048d037;  */

void FUN_0048cfec(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      puVar4 = (undefined8 *)*puVar2;
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        *(undefined1 *)*puVar4 = 0;
        puVar4[1] = 0;
      }
      else {
        *(undefined1 *)puVar4 = 0;
        *(undefined1 *)((long)puVar4 + 0x17) = 0;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0048d038; end: 0048d0bb;  */

undefined8 * FUN_0048d038(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e95a8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0048dc54();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_0048c9b0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0048da6c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 0048d0bc; end: 0048d0e7;  */

undefined8 FUN_0048d0bc(undefined8 param_1)

{
  func_0x0048dcd8();
  FUN_0048d0e8(param_1);
  return param_1;
}



/* Entry: 0048d0e8; end: 0048d11f;  */

void FUN_0048d0e8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048d764();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048d120; end: 0048d123;  */

undefined8 FUN_0048d120(undefined8 param_1)

{
  func_0x0048dcd8();
  FUN_0048d0e8(param_1);
  return param_1;
}



/* Entry: 0048d124; end: 0048d137;  */

void FUN_0048d124(void)

{
  FUN_0048d0bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048d138; end: 0048d143;  */

undefined ** FUN_0048d138(void)

{
  return &PTR_DAT_009e95e8;
}



/* Entry: 0048d144; end: 0048d213;  */

void FUN_0048d144(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0049ad58(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0048d198(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0048d214; end: 0048d313;  */

long * FUN_0048d214(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *in_x3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  int iVar6;
  
  func_0x0048dcf4();
  if ((unaff_w21 & 1) != 0) {
    in_x3 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0048dc44(1,*(long *)(unaff_x20 + 0x18),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18));
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    in_x3 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0048dc44(2,*(long *)(unaff_x20 + 0x20),
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
    if (*unaff_x19 - (long)in_x3 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)in_x3) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        in_x3 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)in_x3 + (long)iVar5);
    }
    _memcpy(in_x3,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)in_x3 + (long)(int)uVar3);
  }
  return in_x3;
}



/* Entry: 0048d314; end: 0048d32b;  */

void FUN_0048d314(void)

{
  func_0x0048d8c8();
  func_0x0048dc08();
  return;
}



/* Entry: 0048d32c; end: 0048d32f;  */

void FUN_0048d32c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0048dcac();
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
        FUN_0048c9b0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_0049ae7c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_0048da6c();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0048d3cc();
      }
    }
  }
  func_0x0048dc60();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0048dc9c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0048d330; end: 0048d4b7;  */

void FUN_0048d330(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0048dcac();
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
        FUN_0048c9b0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_0049ae7c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_0048da6c();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0048d3cc();
      }
    }
  }
  func_0x0048dc60();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0048dc9c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0048d4b8; end: 0048d4f3;  */

long FUN_0048d4b8(long param_1)

{
  func_0x0048dcd8();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0048d4f4; end: 0048d4f7;  */

long FUN_0048d4f4(long param_1)

{
  func_0x0048dcd8();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0048d4f8; end: 0048d50b;  */

void FUN_0048d4f8(void)

{
  FUN_0048d4b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048d50c; end: 0048d517;  */

undefined ** FUN_0048d50c(void)

{
  return &PTR_DAT_009e9638;
}



/* Entry: 0048d518; end: 0048d55f;  */

void FUN_0048d518(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0048cb48(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0048d560; end: 0048d627;  */

long * FUN_0048d560(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_0048d5cc;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_0048d5cc;
  }
  FUN_0054ddb8(puVar2,lVar4,1,"snapchat.notification.Templates.Template.template_string");
  plVar3 = param_3;
  FUN_00435e9c(param_3,1,puVar8,param_2);
  param_2 = plVar3;
LAB_0048d5cc:
  plVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0048dc44(2,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38),
                    param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)plVar3 + (long)iVar9);
      plVar3 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)plVar3 + (long)iVar7);
  }
  _memcpy(plVar3,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar3 + (long)(int)uVar5);
}



/* Entry: 0048d628; end: 0048d6a7;  */

long FUN_0048d628(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_0048d660;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_0048d660:
    lVar3 = 0;
    goto LAB_0048d664;
  }
  FUN_0048910c();
  lVar3 = uVar1 + 1;
LAB_0048d664:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0048d6a8(*(undefined8 *)(param_1 + 0x20));
    func_0x0048dcbc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 0048d6a8; end: 0048d6bf;  */

void FUN_0048d6a8(void)

{
  FUN_0048cd88();
  func_0x0048dc08();
  return;
}



/* Entry: 0048d6c0; end: 0048d6c3;  */

void FUN_0048d6c0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048dcac();
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
    func_0x00532e08(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_0048db2c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_0048ce68();
    }
  }
  func_0x0048dc60();
  if ((extraout_x8 & 1) != 0) {
    func_0x0048dc9c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048d6c4; end: 0048d763;  */

void FUN_0048d6c4(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048dcac();
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
    func_0x00532e08(param_1,uVar2,puVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_0048db2c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_0048ce68();
    }
  }
  func_0x0048dc60();
  if ((extraout_x8 & 1) != 0) {
    func_0x0048dc9c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048d764; end: 0048d78f;  */

undefined8 FUN_0048d764(undefined8 param_1)

{
  func_0x0048dcd8();
  FUN_0048d790(param_1);
  return param_1;
}



/* Entry: 0048d790; end: 0048d7e7;  */

void FUN_0048d790(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0048d4b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048d4b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0048d4b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0048d4b8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048d7e8; end: 0048d7eb;  */

undefined8 FUN_0048d7e8(undefined8 param_1)

{
  func_0x0048dcd8();
  FUN_0048d790(param_1);
  return param_1;
}



/* Entry: 0048d7ec; end: 0048d7ff;  */

void FUN_0048d7ec(void)

{
  FUN_0048d764();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048d800; end: 0048d80b;  */

undefined ** FUN_0048d800(void)

{
  return &PTR_DAT_009e9688;
}



/* Entry: 0048d80c; end: 0048d973;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_0048d80c(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  dword *in_x3;
  ulong uVar4;
  dword *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  int iVar6;
  
  func_0x0048dcf4();
  if ((unaff_w21 & 1) != 0) {
    in_x3 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x0048dc44(2,*(long *)(unaff_x20 + 0x18),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    in_x3 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x0048dc44(3,*(long *)(unaff_x20 + 0x20),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    in_x3 = &MACH_HEADER.cputype;
    func_0x0048dc44(4,*(long *)(unaff_x20 + 0x28),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x14));
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    in_x3 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x0048dc44(5,*(long *)(unaff_x20 + 0x30),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x14));
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
    if (*(long *)unaff_x19 - (long)in_x3 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*(undefined8 *)unaff_x19 - (int)in_x3) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        in_x3 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)in_x3 + (long)iVar5);
    }
    _memcpy(in_x3,lVar2,uVar3 & 0xffffffff);
    return (dword *)((long)in_x3 + (long)(int)uVar3);
  }
  return in_x3;
}



/* Entry: 0048d974; end: 0048d98b;  */

void FUN_0048d974(void)

{
  FUN_0048d628();
  func_0x0048dc08();
  return;
}



/* Entry: 0048d98c; end: 0048d9a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048d98c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048dcac();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0048dc8c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_0048d6c4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0048dc8c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_0048d6c4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0048dc8c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_0048d6c4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0048dc8c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_0048d6c4();
      }
    }
  }
  func_0x0048dc60();
  if ((extraout_x8 & 1) != 0) {
    func_0x0048dc9c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048d9a8; end: 0048da6b;  */

void FUN_0048d9a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048dce0();
  }
  else {
    func_0x0048dc80();
  }
  *puVar1 = &PTR_FUN_009e9508;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_00b69408;
  puVar1[4] = 0;
  return;
}



/* Entry: 0048da6c; end: 0048db2b;  */

qword * FUN_0048da6c(qword *param_1,long param_2)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x0048dce8();
  }
  pqVar3 = pqVar2 + 1;
  *pqVar3 = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_009e9558;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0048dc54();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(pqVar2 + 2) = uVar1;
  *(undefined4 *)((long)pqVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    func_0x0048dc94();
  }
  pqVar2[3] = (qword)pqVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    func_0x0048dc94();
  }
  pqVar2[4] = (qword)pqVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    func_0x0048dc94();
  }
  pqVar2[5] = (qword)pqVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    func_0x0048dc94();
  }
  pqVar2[6] = (qword)pqVar3;
  return pqVar2;
}



/* Entry: 0048db2c; end: 0048db6f;  */

qword * FUN_0048db2c(qword *param_1,long param_2)

{
  long lVar1;
  qword *pqVar2;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  pqVar2[1] = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_009e9450;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0054a3dc(pqVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_0048cf2c(pqVar2 + 2,param_1,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  func_0x00487c6c(lVar1,param_1);
  pqVar2[5] = lVar1;
  param_2 = param_2 + 0x30;
  func_0x00487c6c(param_2,param_1);
  pqVar2[6] = param_2;
  *(undefined4 *)(pqVar2 + 7) = 0;
  return pqVar2;
}



/* Entry: 0048db70; end: 0048dbfb;  */

undefined8 * FUN_0048db70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048dce0();
  }
  else {
    func_0x0048dc80();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_009e9508;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0048dc54();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00487c6c(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_0048db2c(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 0048dbfc; end: 0048dd07;  */

void FUN_0048dbfc(void)

{
  return;
}



/* Entry: 0048dd08; end: 0048dd7f;  */

undefined1 *
FUN_0048dd08(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar5;
  uint extraout_w10_00;
  long lVar6;
  dword *pdVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  plVar2 = param_5;
  func_0x00487c24(param_5,param_4);
  func_0x00487cbc(param_1 << 3 | 2,plVar2);
  FUN_0048fb64(param_2,param_3);
  func_0x00487cbc();
  func_0x00490cd0();
  plVar2 = (long *)((long)&MACH_HEADER.magic + 2);
  func_0x00490dcc(2,param_3,param_2);
  lVar6 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar6) || (lVar6 = param_3[1], lVar6 < 0x80)) {
    lVar10 = *param_5;
    iVar8 = 0x10;
    func_0x00487c84();
    if (lVar6 <= (long)(lVar10 + ~(ulong)((long)plVar2 + (long)iVar8) + 0x10)) {
      pdVar7 = (dword *)((long)plVar2 + 2);
      bVar3 = 0x12;
      while (0x7f < bVar3) {
        *(byte *)((long)pdVar7 + -2) = bVar3 | 0x80;
        pdVar7 = (dword *)((long)pdVar7 + 1);
        bVar3 = 0;
      }
      *(byte *)((long)pdVar7 + -2) = bVar3;
      *(char *)((long)pdVar7 + -1) = (char)lVar6;
      plVar2 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar2 = param_3;
      }
      _memcpy(pdVar7,plVar2,lVar6);
      return (undefined1 *)((long)pdVar7 + lVar6);
    }
  }
  func_0x0054f58c(param_5,2);
  func_0x0054f618();
  uVar5 = extraout_w10;
  while (0x7f < uVar5) {
    func_0x0054f6c4();
    uVar5 = extraout_w10_00;
  }
  func_0x0054f600();
  uVar4 = extraout_x8;
  while (0x7f < (uint)uVar4) {
    func_0x0054f69c();
    uVar4 = extraout_x8_00;
  }
  func_0x0054f5b0();
  if (*param_5 - (long)plVar2 < (long)(int)param_3) {
    while( true ) {
      iVar9 = ((int)*param_5 - (int)plVar2) + 0x10;
      iVar8 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)plVar2 + (long)iVar9);
      plVar2 = param_5;
      func_0x0054ed58(param_5,puVar1);
    }
    func_0x0054f690();
    return (undefined1 *)((long)plVar2 + (long)iVar8);
  }
  _memcpy(plVar2);
  return (undefined1 *)((long)plVar2 + (long)(int)param_3);
}



/* Entry: 0048dd80; end: 0048ddb3;  */

long FUN_0048dd80(int param_1)

{
  int extraout_w8;
  ulong extraout_x9;
  int unaff_w20;
  
  FUN_0048910c();
  func_0x00490dd8();
  func_0x00490de4(unaff_w20 + param_1 + 2);
  return (extraout_x9 >> 6 & 0x3ffffff) + (long)extraout_w8;
}



/* Entry: 0048ddb4; end: 0048ddbf;  */

undefined1  [16] FUN_0048ddb4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x18;
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



/* Entry: 0048ddc0; end: 0048dddb;  */

long FUN_0048ddc0(long param_1)

{
  long extraout_x8;
  
  FUN_00494abc();
  func_0x004907f8();
  return param_1 + extraout_x8;
}



/* Entry: 0048dddc; end: 0048de07;  */

undefined8 * FUN_0048dddc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009e9770;
  param_1[1] = param_2;
  FUN_0048de08();
  return param_1;
}



/* Entry: 0048de08; end: 0048de4b;  */

void FUN_0048de08(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x20) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x28) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x30) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x38) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x40) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x48) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x50) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x58) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x60) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
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
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  return;
}



/* Entry: 0048de4c; end: 0048de77;  */

undefined8 FUN_0048de4c(undefined8 param_1)

{
  func_0x00490a64();
  FUN_0048de78(param_1);
  return param_1;
}



/* Entry: 0048de78; end: 0048df27;  */

void FUN_0048de78(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  func_0x00490b88();
  func_0x00490b90();
  func_0x00490c24();
  func_0x00490b3c();
  func_0x00490bb0();
  func_0x00490d24();
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  func_0x00532f74(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00653080();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048df28; end: 0048df2b;  */

undefined8 FUN_0048df28(undefined8 param_1)

{
  func_0x00490a64();
  FUN_0048de78(param_1);
  return param_1;
}



/* Entry: 0048df2c; end: 0048df3f;  */

void FUN_0048df2c(void)

{
  FUN_0048de4c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048df40; end: 0048df4b;  */

undefined ** FUN_0048df40(void)

{
  return &PTR_DAT_009e97b0;
}



/* Entry: 0048df4c; end: 0048e027;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048df4c(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00490978();
  func_0x00490b80();
  func_0x00490bf4();
  func_0x00490c1c();
  func_0x00490b34();
  func_0x00490ba8();
  func_0x00490d1c();
  FUN_00532fa8(unaff_x19 + 0x50);
  FUN_00532fa8(unaff_x19 + 0x58);
  FUN_00532fa8(unaff_x19 + 0x60);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(unaff_x19 + 0x90));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0xca) = 0;
  *(undefined8 *)(unaff_x19 + 0xc2) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0048e028; end: 0048e523;  */

qword * FUN_0048e028(qword *param_1,qword *param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  qword *pqVar3;
  qword *pqVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  qword *unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x0049094c();
  func_0x00490a90(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e064;
  }
  else if ((int)param_2 != 0) {
LAB_0048e064:
    param_4 = "snapchat.notification.AckNotificationRequest.notificationID";
    func_0x00490a54();
    param_2 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    param_1 = unaff_x19;
    func_0x00490878();
    unaff_x21 = param_1;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e0a4;
  }
  else if ((int)param_2 != 0) {
LAB_0048e0a4:
    param_4 = "snapchat.notification.AckNotificationRequest.senderUserName";
    func_0x00490a54();
    param_2 = (qword *)&MACH_HEADER.sizeofcmds;
    param_1 = unaff_x19;
    func_0x00490878();
    unaff_x21 = param_1;
  }
  pqVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    func_0x004908a4();
    pqVar3 = (qword *)&section_000000b8.reloff;
    func_0x00487cbc();
    func_0x00490abc();
    param_2 = param_1;
    unaff_x21 = pqVar3;
  }
  pqVar4 = pqVar3;
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    func_0x004908a4();
    pqVar4 = (qword *)&section_00000108.reloff;
    func_0x00487cbc();
    func_0x00490abc();
    param_2 = pqVar3;
    unaff_x21 = pqVar4;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)(segment_command_00000020.segname + 10);
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e148;
  }
  else if ((int)param_2 != 0) {
LAB_0048e148:
    param_4 = "snapchat.notification.AckNotificationRequest.pushType";
    func_0x00490a54();
    param_2 = (qword *)((long)&segment_command_00000020.vmaddr + 4);
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e188;
  }
  else if ((int)param_2 != 0) {
LAB_0048e188:
    param_4 = "snapchat.notification.AckNotificationRequest.trackingData";
    func_0x00490a54();
    param_2 = (qword *)((long)&segment_command_00000020.vmsize + 6);
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  func_0x004909cc();
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e1c4;
  }
  else if ((int)param_2 != 0) {
LAB_0048e1c4:
    param_4 = "snapchat.notification.AckNotificationRequest.userAgent";
    func_0x00490a54();
    param_2 = &segment_command_00000020.filesize;
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x70);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)((long)&segment_command_00000020.maxprot + 2);
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x78);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)&segment_command_00000020.flags;
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x004908a4();
    pqVar3 = (qword *)&section_00000338.reloff;
    func_0x00487cbc();
    func_0x004908b0();
    param_2 = pqVar4;
    unaff_x21 = pqVar3;
  }
  pqVar4 = pqVar3;
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    func_0x004908a4();
    pqVar4 = (qword *)&section_00000388.reloff;
    func_0x00487cbc();
    func_0x00490abc();
    param_2 = pqVar3;
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e27c;
  }
  else if ((int)param_2 != 0) {
LAB_0048e27c:
    param_4 = "snapchat.notification.AckNotificationRequest.displayDelayReason";
    func_0x00490a54();
    param_2 = (qword *)(section_00000068.segname + 10);
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x80);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)((long)&section_00000068.addr + 4);
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)((long)&section_00000068.size + 6);
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x90);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)&section_00000068.reloff;
    func_0x004908bc();
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e310;
  }
  else if ((int)param_2 != 0) {
LAB_0048e310:
    param_4 = "snapchat.notification.AckNotificationRequest.sessionId";
    func_0x00490a54();
    param_2 = (qword *)((long)&section_00000068.flags + 2);
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e350;
  }
  else if ((int)param_2 != 0) {
LAB_0048e350:
    param_4 = "snapchat.notification.AckNotificationRequest.deviceId";
    func_0x00490a54();
    param_2 = (qword *)&section_00000068.reserved3;
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0048e390;
  }
  else if ((int)param_2 != 0) {
LAB_0048e390:
    param_4 = "snapchat.notification.AckNotificationRequest.deviceToken";
    func_0x00490a54();
    param_2 = (qword *)(section_000000b8.sectname + 6);
    pqVar4 = unaff_x19;
    func_0x00490878();
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(int *)(unaff_x20 + 0xb4) != 0) {
    func_0x004908a4();
    pqVar3 = (qword *)&section_00000608.reloff;
    func_0x00487cbc();
    func_0x004908b0();
    param_2 = pqVar4;
    unaff_x21 = pqVar3;
  }
  pqVar4 = pqVar3;
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    func_0x004908a4();
    pqVar4 = (qword *)&section_00000658.reloff;
    func_0x00487cbc();
    func_0x004908b0();
    param_2 = pqVar3;
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    func_0x004908a4();
    pqVar3 = (qword *)&section_000006a8.reloff;
    func_0x00487cbc();
    func_0x00490abc();
    param_2 = pqVar4;
    unaff_x21 = pqVar3;
  }
  pqVar4 = pqVar3;
  if (*(long *)(unaff_x20 + 200) != 0) {
    func_0x004908a4();
    pqVar4 = (qword *)&section_000006f8.reloff;
    func_0x00487cbc();
    func_0x00490abc();
    param_2 = pqVar3;
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(int *)(unaff_x20 + 0xc4) != 0) {
    func_0x004908a4();
    pqVar3 = (qword *)&section_00000748.reloff;
    func_0x00487cbc();
    func_0x004908b0();
    param_2 = pqVar4;
    unaff_x21 = pqVar3;
  }
  func_0x00490a90(*(undefined8 *)(unaff_x20 + 0x60));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0048e4a0;
  }
  else if ((int)param_2 == 0) goto LAB_0048e4a0;
  param_4 = "snapchat.notification.AckNotificationRequest.suppressionReason";
  func_0x00490a54();
  func_0x00490878();
  pqVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_0048e4a0:
  pqVar4 = pqVar3;
  if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
    func_0x004908a4();
    pqVar4 = (qword *)&section_000007e8.reloff;
    func_0x00487cbc(0x820,pqVar3);
    func_0x004908d4();
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(char *)(unaff_x20 + 0xd1) == '\x01') {
    func_0x004908a4();
    pqVar3 = (qword *)&section_00000838.reloff;
    func_0x00487cbc(0x870,pqVar4);
    func_0x004908d4();
    unaff_x21 = pqVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00490aa4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00490b74();
  if ((long)(*pqVar3 - (long)param_4) < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*pqVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar6);
      param_4 = (char *)pqVar3;
      func_0x0054ed58(pqVar3,pcVar1);
    }
    func_0x0054f690();
    return (qword *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (qword *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0048e524; end: 0048e7a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048e524(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long unaff_x19;
  
  func_0x0049091c();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_0048910c();
    lVar5 = param_1 + 1;
  }
  func_0x004909dc();
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a1c();
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a84(*(undefined8 *)(unaff_x19 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x004909a0();
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a3c();
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a84(*(undefined8 *)(unaff_x19 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a84(*(undefined8 *)(unaff_x19 + 0x50));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a84(*(undefined8 *)(unaff_x19 + 0x58));
  lVar4 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  func_0x00490a84(*(undefined8 *)(unaff_x19 + 0x60));
  lVar4 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00490ac8();
  }
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x78);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x80);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x88);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x90);
      FUN_0048e7a8();
      func_0x00490ac8();
    }
  }
  iVar3 = -9;
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9 + 2;
    iVar3 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_00 + 2;
    iVar3 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_01 + 2;
    iVar3 = extraout_w8_01;
  }
  if (*(int *)(unaff_x19 + 0xb0) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_02 + 2;
    iVar3 = extraout_w8_02;
  }
  if (*(int *)(unaff_x19 + 0xb4) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_03 + 2;
    iVar3 = extraout_w8_03;
  }
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_04 + 2;
    iVar3 = extraout_w8_04;
  }
  if (*(int *)(unaff_x19 + 0xc0) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_05 + 2;
    iVar3 = extraout_w8_05;
  }
  if (*(int *)(unaff_x19 + 0xc4) != 0) {
    func_0x00490810();
    lVar5 = extraout_x9_06 + 2;
    iVar3 = extraout_w8_06;
  }
  if (*(long *)(unaff_x19 + 200) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 200)) * iVar3 + 0x280U >> 6) + 2;
  }
  lVar4 = lVar5 + 3;
  if (*(char *)(unaff_x19 + 0xd0) == '\0') {
    lVar4 = lVar5;
  }
  func_0x00490cac(lVar4);
  if ((extraout_x8_09 & 1) != 0) {
    func_0x00490b00();
    lVar5 = extraout_x8_10;
    if (extraout_x8_10 < 0) {
      lVar5 = *(long *)(extraout_x9_07 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 0048e7a8; end: 0048e7c3;  */

long FUN_0048e7a8(long param_1)

{
  long extraout_x8;
  
  FUN_006531a0();
  func_0x004907f8();
  return param_1 + extraout_x8;
}



/* Entry: 0048e7c4; end: 0048eaeb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048e7c4(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004908ec();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x00490c88();
  }
  func_0x0049095c();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490b98();
  }
  func_0x004909ec();
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490ca4();
  }
  func_0x004909fc();
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490c9c();
  }
  func_0x00490a78(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490d14();
  }
  func_0x004909b0();
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490ba0();
  }
  func_0x00490a0c();
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490bfc();
  }
  func_0x00490a78(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    func_0x00490d64();
  }
  func_0x00490a78(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x50);
    func_0x00532e08();
  }
  func_0x00490a78(*(undefined8 *)(unaff_x20 + 0x58));
  lVar3 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x58);
    func_0x00532e08();
  }
  func_0x00490a78(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00490a6c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        func_0x00490c94();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        func_0x00653114();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    *(long *)(unaff_x21 + 0xa0) = *(long *)(unaff_x20 + 0xa0);
  }
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    *(long *)(unaff_x21 + 0xa8) = *(long *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0xb0) = *(int *)(unaff_x20 + 0xb0);
  }
  if (*(int *)(unaff_x20 + 0xb4) != 0) {
    *(int *)(unaff_x21 + 0xb4) = *(int *)(unaff_x20 + 0xb4);
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    *(int *)(unaff_x21 + 0xc0) = *(int *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 0xc4) != 0) {
    *(int *)(unaff_x21 + 0xc4) = *(int *)(unaff_x20 + 0xc4);
  }
  if (*(long *)(unaff_x20 + 200) != 0) {
    *(long *)(unaff_x21 + 200) = *(long *)(unaff_x20 + 200);
  }
  if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xd0) = 1;
  }
  if (*(char *)(unaff_x20 + 0xd1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xd1) = 1;
  }
  func_0x00490858();
  if ((extraout_x8_09 & 1) == 0) {
    return;
  }
  func_0x004908fc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0048eaec; end: 0048eb0f;  */

undefined8 FUN_0048eaec(undefined8 param_1)

{
  func_0x00490a64();
  return param_1;
}



/* Entry: 0048eb10; end: 0048eb13;  */

undefined8 FUN_0048eb10(undefined8 param_1)

{
  func_0x00490a64();
  return param_1;
}



/* Entry: 0048eb14; end: 0048eb27;  */

void FUN_0048eb14(void)

{
  FUN_0048eaec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048eb28; end: 0048eb47;  */

undefined ** FUN_0048eb28(void)

{
  return &PTR_DAT_009e9800;
}



/* Entry: 0048eb48; end: 0048eba7;  */

long * FUN_0048eb48(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0049090c();
  if ((int)param_1[2] != 0) {
    func_0x004908e0();
    func_0x0049093c();
    func_0x004908b0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00490aa4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0048eba8; end: 0048ebf3;  */

long FUN_0048eba8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x00490b44();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 0048ebf4; end: 0048ec53;  */

undefined1  [16] FUN_0048ebf4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_004907dc(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 0048ec54; end: 0048ec6f;  */

undefined1  [16] FUN_0048ec54(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x30;
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



/* Entry: 0048ec70; end: 0048eca7;  */

void FUN_0048ec70(void)

{
  undefined1 in_ZR;
  
  func_0x00490d6c();
  if (!(bool)in_ZR) {
    func_0x00490dc4();
  }
  return;
}



/* Entry: 0048eca8; end: 0048eccb;  */

undefined8 FUN_0048eca8(undefined8 param_1)

{
  FUN_0048eccc(param_1,0);
  return param_1;
}



/* Entry: 0048eccc; end: 0048ece3;  */

void FUN_0048eccc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_0099c618)();
    return;
  }
  return;
}



/* Entry: 0048ece4; end: 0048ed37;  */

int * FUN_0048ece4(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    func_0x00437928(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_0048ed38(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 0048ed38; end: 0048ed63;  */

undefined1  [16] FUN_0048ed38(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (0 < param_2) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 0048ed64; end: 0048ed8f;  */

void FUN_0048ed64(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00490d6c();
  if (in_NG == in_OV) {
    FUN_0048ed90();
  }
  return;
}



/* Entry: 0048ed90; end: 0048eda3;  */

void FUN_0048ed90(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048eda4; end: 0048ee13;  */

void FUN_0048eda4(long param_1)

{
  if (param_1 == 0) {
    func_0x00490af8();
  }
  else {
    func_0x0049096c();
  }
  func_0x00490c10(&PTR_FUN_009e9720);
  return;
}



/* Entry: 0048ee14; end: 0048ee37;  */

/* WARNING: Removing unreachable block (ram,0x004904c8) */
/* WARNING: Removing unreachable block (ram,0x004904d8) */
/* WARNING: Removing unreachable block (ram,0x0048b264) */
/* WARNING: Removing unreachable block (ram,0x00437a68) */
/* WARNING: Removing unreachable block (ram,0x00437ab8) */
/* WARNING: Removing unreachable block (ram,0x00437adc) */
/* WARNING: Removing unreachable block (ram,0x00437ac0) */
/* WARNING: Removing unreachable block (ram,0x00437ae0) */
/* WARNING: Removing unreachable block (ram,0x00437af4) */
/* WARNING: Removing unreachable block (ram,0x00437afc) */
/* WARNING: Removing unreachable block (ram,0x00437b08) */
/* WARNING: Removing unreachable block (ram,0x00437a98) */
/* WARNING: Removing unreachable block (ram,0x00437aa8) */
/* WARNING: Removing unreachable block (ram,0x0048b29c) */

void FUN_0048ee14(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    puVar2 = param_1;
    func_0x005496c0(param_1,0x10300380020,0);
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      puVar4 = *(undefined8 **)(unaff_x22 + unaff_x23 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x005496a0();
        puVar4 = puVar2;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 1);
        puVar2 = (undefined8 *)((long)puVar4 + unaff_x24);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x005496f0();
        puVar4 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = (ulong)uVar1;
  while (0 < (long)uVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 0048ee38; end: 0048eecb;  */

ulong * FUN_0048ee38(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x00490d7c(alStack_48);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x00490ae0();
      plVar2 = plVar2 + 1;
    }
    FUN_0048eecc(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}



/* Entry: 0048eecc; end: 0048eeeb;  */

void FUN_0048eecc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0048eeec(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 0048eeec; end: 0048ef13;  */

/* WARNING: Possible PIC construction at 0x0048f2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0048f290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0048f2e8) */
/* WARNING: Removing unreachable block (ram,0x0048f2f0) */
/* WARNING: Removing unreachable block (ram,0x0048f30c) */
/* WARNING: Removing unreachable block (ram,0x0048f314) */
/* WARNING: Removing unreachable block (ram,0x0048f31c) */
/* WARNING: Removing unreachable block (ram,0x0048f320) */
/* WARNING: Removing unreachable block (ram,0x00490828) */
/* WARNING: Removing unreachable block (ram,0x0048f294) */
/* WARNING: Removing unreachable block (ram,0x0048f2a0) */
/* WARNING: Removing unreachable block (ram,0x0048f2a8) */
/* WARNING: Removing unreachable block (ram,0x0048f2b0) */
/* WARNING: Removing unreachable block (ram,0x0048f2b4) */
/* WARNING: Removing unreachable block (ram,0x00490930) */

long * FUN_0048eeec(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 *unaff_x29;
  long *unaff_x30;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar11 = LZCOUNT((long)param_2 - (long)param_1 >> 3) << 1 ^ 0x7e;
  plVar3 = (long *)auStack_70;
  puVar2 = auStack_70;
  uVar16 = 1;
  plVar14 = param_2;
LAB_0048ef44:
  plVar15 = plVar14 + -1;
  plStack_68 = plVar14 + -2;
LAB_0048ef58:
  lVar12 = -uVar11;
  plVar7 = param_1;
LAB_0048ef60:
  param_1 = plVar7;
  lVar12 = lVar12 + 1;
  uVar11 = (long)plVar14 - (long)param_1 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto LAB_0048f0dc;
  case 2:
    lVar12 = plVar14[-1];
    func_0x004278bc(lVar12,*param_1);
    if (((uint)lVar12 >> 7 & 1) != 0) {
      lVar12 = *param_1;
      *param_1 = plVar14[-1];
      plVar14[-1] = lVar12;
    }
    goto LAB_0048f0dc;
  case 3:
    plVar7 = param_1 + 1;
    plVar8 = plVar15;
    func_0x00490c6c(param_1,plVar7,plVar15,param_3);
    goto FUN_0048f1c0;
  case 4:
    plVar7 = param_1 + 1;
    plVar10 = param_1 + 2;
    plVar9 = plVar15;
    func_0x00490c6c(param_1);
    break;
  case 5:
    plVar7 = param_1 + 1;
    plVar8 = param_1 + 2;
    plVar6 = param_1 + 3;
    func_0x00490c6c(param_1);
    plVar3 = &lStack_b0;
    unaff_x29 = auStack_80;
    plVar10 = plVar8;
    plVar9 = plVar6;
    lStack_b0 = lVar12;
    uStack_a8 = uVar16;
    plStack_a0 = param_1;
    plStack_98 = plVar15;
    plStack_90 = plVar14;
    plStack_88 = param_3;
    func_0x00490b18();
    unaff_x30 = (long *)0x48f2e8;
    plVar15 = plVar8;
    param_1 = plVar6;
    break;
  default:
    if ((long)uVar11 < 0x18) {
      plVar7 = param_1;
      func_0x00490b68();
      if ((int)uVar16 == 0) {
        func_0x00490c6c();
        plVar8 = plVar7;
        lStack_b0 = lVar12;
        uStack_a8 = uVar16;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        if (plVar7 != param_2) {
          while( true ) {
            plVar8 = plVar8 + 1;
            plVar14 = plVar7 + 1;
            if (plVar14 == param_2) break;
            lVar12 = plVar7[1];
            func_0x004278bc(lVar12,*plVar7);
            plVar7 = plVar14;
            if (((uint)lVar12 >> 7 & 1) != 0) {
              lVar12 = *plVar14;
              plVar14 = plVar8;
              do {
                plVar15 = plVar14 + -1;
                *plVar14 = *plVar15;
                lVar13 = lVar12;
                func_0x004278bc(lVar12,plVar14[-2]);
                plVar14 = plVar15;
              } while (((uint)lVar13 >> 7 & 1) != 0);
              *plVar15 = lVar12;
            }
          }
        }
        return plVar7;
      }
      func_0x00490c6c();
      if (plVar7 == param_2) {
        return plVar7;
      }
      lStack_b0 = lVar12;
      uStack_a8 = uVar16;
      plStack_a0 = param_1;
      plStack_98 = plVar15;
      plStack_90 = plVar14;
      plStack_88 = param_3;
      func_0x00490b18();
      lVar12 = 0;
      plVar15 = plVar7;
      goto LAB_0048f350;
    }
    if (lVar12 == 1) {
      plVar8 = param_1;
      plVar7 = plVar14;
      plVar6 = plVar14;
      plVar10 = param_3;
      func_0x00490c6c();
      if (plVar8 == plVar7) {
        return plVar6;
      }
      if (plVar8 != plVar7) {
        plVar9 = plVar8;
        lStack_b0 = lVar12;
        uStack_a8 = uVar16;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        func_0x0048f824();
        lVar12 = (long)plVar7 - (long)plVar8;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          func_0x00490d84();
          if (((uint)plVar9 >> 7 & 1) != 0) {
            lVar13 = *plVar7;
            *plVar7 = *plVar8;
            *plVar8 = lVar13;
            plVar9 = plVar8;
            FUN_0048f884(plVar8,plVar10,lVar12 >> 3,plVar8);
          }
        }
        func_0x00490b68(plVar8);
        FUN_0048f994();
        plVar6 = plVar7;
      }
      return plVar6;
    }
    plVar7 = param_1 + (uVar11 >> 1);
    if (uVar11 < 0x81) {
      param_2 = param_1;
      func_0x00490cc8(plVar7,param_1,plVar15);
    }
    else {
      func_0x00490cc8(param_1,plVar7,plVar15);
      func_0x00490cc8(param_1 + 1,plVar7 + -1,plStack_68);
      func_0x00490cc8(param_1 + 2,plVar7 + 1,plVar14 + -3);
      param_2 = plVar7;
      func_0x00490cc8(plVar7 + -1,plVar7,plVar7 + 1);
      lVar13 = *param_1;
      *param_1 = *plVar7;
      *plVar7 = lVar13;
    }
    if ((int)uVar16 == 0) {
      uVar4 = (uint)param_1[-1];
      param_2 = (long *)*param_1;
      func_0x004278bc();
      if ((uVar4 >> 7 & 1) == 0) {
        func_0x00490b68();
        func_0x0048f464();
        goto LAB_0048f088;
      }
    }
    plVar8 = param_1;
    func_0x00490b68();
    func_0x0048f530();
    if (((ulong)param_2 & 1) != 0) {
      plVar6 = param_1;
      param_2 = plVar8;
      FUN_0048f604(param_1,plVar8,param_3);
      plVar7 = plVar8 + 1;
      func_0x00490b68();
      iVar5 = (int)plVar7;
      FUN_0048f604();
      if (iVar5 == 0) goto code_r0x0048f050;
      uVar11 = -lVar12;
      plVar14 = plVar8;
      if (((ulong)plVar6 & 1) != 0) goto LAB_0048f0dc;
      goto LAB_0048ef44;
    }
    goto LAB_0048f058;
  }
  puVar2 = (undefined1 *)((long)plVar3 + -0x30);
  *(long **)((long)plVar3 + -0x30) = param_1;
  *(long **)((long)plVar3 + -0x28) = plVar15;
  *(long **)((long)plVar3 + -0x20) = plVar14;
  *(long **)((long)plVar3 + -0x18) = param_3;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(long **)((long)plVar3 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)plVar3 + -0x10);
  plVar8 = plVar10;
  func_0x00490b18();
  unaff_x30 = (long *)0x48f294;
  plVar15 = plVar10;
  param_1 = plVar9;
FUN_0048f1c0:
  *(long **)(puVar2 + -0x30) = param_1;
  *(long **)(puVar2 + -0x28) = plVar15;
  *(long **)(puVar2 + -0x20) = plVar14;
  *(long **)(puVar2 + -0x18) = param_3;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(long **)(puVar2 + -8) = unaff_x30;
  func_0x00490b0c();
  uVar4 = (uint)*plVar7;
  func_0x00490c64();
  lVar12 = *plVar8;
  func_0x004278bc(lVar12,*param_3);
  if ((uVar4 >> 7 & 1) == 0) {
    if (-1 < (char)lVar12) {
      return (long *)0x0;
    }
    func_0x00490e0c();
    uVar4 = (uint)*param_3;
    func_0x00490c64();
    if ((uVar4 >> 7 & 1) != 0) {
      lVar12 = *plVar15;
      *plVar15 = *param_3;
      *param_3 = lVar12;
    }
  }
  else {
    lVar13 = *plVar15;
    if ((char)lVar12 < '\0') {
      *plVar15 = *plVar8;
      *plVar8 = lVar13;
    }
    else {
      *plVar15 = *param_3;
      *param_3 = lVar13;
      uVar4 = (uint)*plVar8;
      func_0x004278bc();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x00490e0c();
      }
    }
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
LAB_0048f350:
  plVar8 = plVar15 + 1;
  if (plVar8 == param_3) {
    return plVar7;
  }
  plVar7 = (long *)plVar15[1];
  func_0x004278bc(plVar7,*plVar15);
  if (((uint)plVar7 >> 7 & 1) != 0) {
    plVar15 = (long *)*plVar8;
    lVar13 = lVar12;
    do {
      lVar17 = lVar13;
      puVar1 = (undefined8 *)((long)plVar14 + lVar17);
      puVar1[1] = *puVar1;
      plVar6 = plVar14;
      if (lVar17 == 0) goto LAB_0048f3a4;
      plVar7 = plVar15;
      func_0x004278bc(plVar15,puVar1[-1]);
      lVar13 = lVar17 + -8;
    } while (((uint)plVar7 >> 7 & 1) != 0);
    plVar6 = (long *)((long)plVar14 + lVar17);
LAB_0048f3a4:
    *plVar6 = (long)plVar15;
  }
  lVar12 = lVar12 + 8;
  plVar15 = plVar8;
  goto LAB_0048f350;
code_r0x0048f050:
  plVar7 = plVar8 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_0048f058;
  goto LAB_0048ef60;
LAB_0048f058:
  param_2 = plVar8;
  FUN_0048ef14(param_1,plVar8,param_3,-lVar12,uVar16);
  param_1 = plVar8 + 1;
LAB_0048f088:
  uVar16 = 0;
  uVar11 = -lVar12;
  goto LAB_0048ef58;
LAB_0048f0dc:
  func_0x00490c6c(unaff_x30);
  return unaff_x30;
}



/* Entry: 0048ef14; end: 0048f1bf;  */

/* WARNING: Possible PIC construction at 0x0048f2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0048f290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0048f2e8) */
/* WARNING: Removing unreachable block (ram,0x0048f2f0) */
/* WARNING: Removing unreachable block (ram,0x0048f30c) */
/* WARNING: Removing unreachable block (ram,0x0048f314) */
/* WARNING: Removing unreachable block (ram,0x0048f31c) */
/* WARNING: Removing unreachable block (ram,0x0048f320) */
/* WARNING: Removing unreachable block (ram,0x00490828) */
/* WARNING: Removing unreachable block (ram,0x0048f294) */
/* WARNING: Removing unreachable block (ram,0x0048f2a0) */
/* WARNING: Removing unreachable block (ram,0x0048f2a8) */
/* WARNING: Removing unreachable block (ram,0x0048f2b0) */
/* WARNING: Removing unreachable block (ram,0x0048f2b4) */
/* WARNING: Removing unreachable block (ram,0x00490930) */

long * FUN_0048ef14(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 *unaff_x29;
  long *unaff_x30;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  plVar3 = (long *)auStack_70;
  puVar2 = auStack_70;
  plVar14 = param_2;
LAB_0048ef44:
  plVar15 = plVar14 + -1;
  plStack_68 = plVar14 + -2;
LAB_0048ef58:
  param_4 = -param_4;
  plVar7 = param_1;
LAB_0048ef60:
  param_1 = plVar7;
  param_4 = param_4 + 1;
  uVar11 = (long)plVar14 - (long)param_1 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto LAB_0048f0dc;
  case 2:
    lVar12 = plVar14[-1];
    func_0x004278bc(lVar12,*param_1);
    if (((uint)lVar12 >> 7 & 1) != 0) {
      lVar12 = *param_1;
      *param_1 = plVar14[-1];
      plVar14[-1] = lVar12;
    }
    goto LAB_0048f0dc;
  case 3:
    plVar7 = param_1 + 1;
    plVar8 = plVar15;
    func_0x00490c6c(param_1,plVar7,plVar15,param_3);
    goto FUN_0048f1c0;
  case 4:
    plVar7 = param_1 + 1;
    plVar10 = param_1 + 2;
    plVar9 = plVar15;
    func_0x00490c6c(param_1);
    break;
  case 5:
    plVar7 = param_1 + 1;
    plVar8 = param_1 + 2;
    plVar6 = param_1 + 3;
    func_0x00490c6c(param_1);
    plVar3 = &lStack_b0;
    unaff_x29 = auStack_80;
    plVar10 = plVar8;
    plVar9 = plVar6;
    lStack_b0 = param_4;
    uStack_a8 = param_5;
    plStack_a0 = param_1;
    plStack_98 = plVar15;
    plStack_90 = plVar14;
    plStack_88 = param_3;
    func_0x00490b18();
    unaff_x30 = (long *)0x48f2e8;
    plVar15 = plVar8;
    param_1 = plVar6;
    break;
  default:
    if ((long)uVar11 < 0x18) {
      plVar7 = param_1;
      func_0x00490b68();
      if ((param_5 & 1) == 0) {
        func_0x00490c6c();
        plVar8 = plVar7;
        lStack_b0 = param_4;
        uStack_a8 = param_5;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        if (plVar7 != param_2) {
          while( true ) {
            plVar8 = plVar8 + 1;
            plVar14 = plVar7 + 1;
            if (plVar14 == param_2) break;
            lVar12 = plVar7[1];
            func_0x004278bc(lVar12,*plVar7);
            plVar7 = plVar14;
            if (((uint)lVar12 >> 7 & 1) != 0) {
              lVar12 = *plVar14;
              plVar14 = plVar8;
              do {
                plVar15 = plVar14 + -1;
                *plVar14 = *plVar15;
                lVar13 = lVar12;
                func_0x004278bc(lVar12,plVar14[-2]);
                plVar14 = plVar15;
              } while (((uint)lVar13 >> 7 & 1) != 0);
              *plVar15 = lVar12;
            }
          }
        }
        return plVar7;
      }
      func_0x00490c6c();
      if (plVar7 == param_2) {
        return plVar7;
      }
      lStack_b0 = param_4;
      uStack_a8 = param_5;
      plStack_a0 = param_1;
      plStack_98 = plVar15;
      plStack_90 = plVar14;
      plStack_88 = param_3;
      func_0x00490b18();
      lVar12 = 0;
      plVar15 = plVar7;
      goto LAB_0048f350;
    }
    if (param_4 == 1) {
      plVar8 = param_1;
      plVar7 = plVar14;
      plVar6 = plVar14;
      plVar10 = param_3;
      func_0x00490c6c();
      if (plVar8 == plVar7) {
        return plVar6;
      }
      if (plVar8 != plVar7) {
        plVar9 = plVar8;
        lStack_b0 = param_4;
        uStack_a8 = param_5;
        plStack_a0 = param_1;
        plStack_98 = plVar15;
        plStack_90 = plVar14;
        plStack_88 = param_3;
        func_0x0048f824();
        lVar12 = (long)plVar7 - (long)plVar8;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          func_0x00490d84();
          if (((uint)plVar9 >> 7 & 1) != 0) {
            lVar13 = *plVar7;
            *plVar7 = *plVar8;
            *plVar8 = lVar13;
            plVar9 = plVar8;
            FUN_0048f884(plVar8,plVar10,lVar12 >> 3,plVar8);
          }
        }
        func_0x00490b68(plVar8);
        FUN_0048f994();
        plVar6 = plVar7;
      }
      return plVar6;
    }
    plVar7 = param_1 + (uVar11 >> 1);
    if (uVar11 < 0x81) {
      param_2 = param_1;
      func_0x00490cc8(plVar7,param_1,plVar15);
    }
    else {
      func_0x00490cc8(param_1,plVar7,plVar15);
      func_0x00490cc8(param_1 + 1,plVar7 + -1,plStack_68);
      func_0x00490cc8(param_1 + 2,plVar7 + 1,plVar14 + -3);
      param_2 = plVar7;
      func_0x00490cc8(plVar7 + -1,plVar7,plVar7 + 1);
      lVar12 = *param_1;
      *param_1 = *plVar7;
      *plVar7 = lVar12;
    }
    if ((param_5 & 1) == 0) {
      uVar4 = (uint)param_1[-1];
      param_2 = (long *)*param_1;
      func_0x004278bc();
      if ((uVar4 >> 7 & 1) == 0) {
        func_0x00490b68();
        func_0x0048f464();
        goto LAB_0048f088;
      }
    }
    plVar8 = param_1;
    func_0x00490b68();
    func_0x0048f530();
    if (((ulong)param_2 & 1) != 0) {
      plVar6 = param_1;
      param_2 = plVar8;
      FUN_0048f604(param_1,plVar8,param_3);
      plVar7 = plVar8 + 1;
      func_0x00490b68();
      iVar5 = (int)plVar7;
      FUN_0048f604();
      if (iVar5 == 0) goto code_r0x0048f050;
      param_4 = -param_4;
      plVar14 = plVar8;
      if (((ulong)plVar6 & 1) != 0) goto LAB_0048f0dc;
      goto LAB_0048ef44;
    }
    goto LAB_0048f058;
  }
  puVar2 = (undefined1 *)((long)plVar3 + -0x30);
  *(long **)((long)plVar3 + -0x30) = param_1;
  *(long **)((long)plVar3 + -0x28) = plVar15;
  *(long **)((long)plVar3 + -0x20) = plVar14;
  *(long **)((long)plVar3 + -0x18) = param_3;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(long **)((long)plVar3 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)plVar3 + -0x10);
  plVar8 = plVar10;
  func_0x00490b18();
  unaff_x30 = (long *)0x48f294;
  plVar15 = plVar10;
  param_1 = plVar9;
FUN_0048f1c0:
  *(long **)(puVar2 + -0x30) = param_1;
  *(long **)(puVar2 + -0x28) = plVar15;
  *(long **)(puVar2 + -0x20) = plVar14;
  *(long **)(puVar2 + -0x18) = param_3;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(long **)(puVar2 + -8) = unaff_x30;
  func_0x00490b0c();
  uVar4 = (uint)*plVar7;
  func_0x00490c64();
  lVar12 = *plVar8;
  func_0x004278bc(lVar12,*param_3);
  if ((uVar4 >> 7 & 1) == 0) {
    if (-1 < (char)lVar12) {
      return (long *)0x0;
    }
    func_0x00490e0c();
    uVar4 = (uint)*param_3;
    func_0x00490c64();
    if ((uVar4 >> 7 & 1) != 0) {
      lVar12 = *plVar15;
      *plVar15 = *param_3;
      *param_3 = lVar12;
    }
  }
  else {
    lVar13 = *plVar15;
    if ((char)lVar12 < '\0') {
      *plVar15 = *plVar8;
      *plVar8 = lVar13;
    }
    else {
      *plVar15 = *param_3;
      *param_3 = lVar13;
      uVar4 = (uint)*plVar8;
      func_0x004278bc();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x00490e0c();
      }
    }
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
LAB_0048f350:
  plVar8 = plVar15 + 1;
  if (plVar8 == param_3) {
    return plVar7;
  }
  plVar7 = (long *)plVar15[1];
  func_0x004278bc(plVar7,*plVar15);
  if (((uint)plVar7 >> 7 & 1) != 0) {
    plVar15 = (long *)*plVar8;
    lVar13 = lVar12;
    do {
      lVar16 = lVar13;
      puVar1 = (undefined8 *)((long)plVar14 + lVar16);
      puVar1[1] = *puVar1;
      plVar6 = plVar14;
      if (lVar16 == 0) goto LAB_0048f3a4;
      plVar7 = plVar15;
      func_0x004278bc(plVar15,puVar1[-1]);
      lVar13 = lVar16 + -8;
    } while (((uint)plVar7 >> 7 & 1) != 0);
    plVar6 = (long *)((long)plVar14 + lVar16);
LAB_0048f3a4:
    *plVar6 = (long)plVar15;
  }
  lVar12 = lVar12 + 8;
  plVar15 = plVar8;
  goto LAB_0048f350;
code_r0x0048f050:
  plVar7 = plVar8 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_0048f058;
  goto LAB_0048ef60;
LAB_0048f058:
  param_2 = plVar8;
  FUN_0048ef14(param_1,plVar8,param_3,-param_4,(uint)param_5 & 1);
  param_1 = plVar8 + 1;
LAB_0048f088:
  param_5 = 0;
  param_4 = -param_4;
  goto LAB_0048ef58;
LAB_0048f0dc:
  func_0x00490c6c(unaff_x30);
  return unaff_x30;
}


