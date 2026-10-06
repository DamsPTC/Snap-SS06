/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108927ce0; end: 108927d27;  */

ulong * FUN_108927ce0(void)

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



/* Entry: 108927d28; end: 108927d3b;  */

void FUN_108927d28(void)

{
  func_0x000107c2a608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108927d3c; end: 108927d7b;  */

void FUN_108927d3c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 108927d7c; end: 108927e0f;  */

void FUN_108927d7c(long param_1,long param_2)

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
      func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 108927e10; end: 108927e63;  */

void FUN_108927e10(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c2a2e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 108927e64; end: 108927e97;  */

long FUN_108927e64(long param_1)

{
  func_0x000107c34a78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_108927e10(param_1);
  }
  return param_1;
}



/* Entry: 108927e98; end: 108927e9b;  */

long FUN_108927e98(long param_1)

{
  func_0x000107c34a78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_108927e10(param_1);
  }
  return param_1;
}



/* Entry: 108927e9c; end: 108927eaf;  */

void FUN_108927e9c(void)

{
  FUN_108927e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108927eb0; end: 108927ebb;  */

undefined ** FUN_108927eb0(void)

{
  return &PTR_DAT_110a988c8;
}



/* Entry: 108927ebc; end: 108927fab;  */

void FUN_108927ebc(long param_1)

{
  ulong *puVar1;
  
  FUN_108927e10();
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



/* Entry: 108927fac; end: 10892806b;  */

void FUN_108927fac(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_1088bf398(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_108927e10(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
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



/* Entry: 10892806c; end: 10892806f;  */

long FUN_10892806c(long param_1)

{
  func_0x00010061dd38();
  func_0x00010084feb8(param_1 + 0x10);
  return param_1;
}



/* Entry: 108928070; end: 108928083;  */

void FUN_108928070(void)

{
  func_0x000107c2a60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108928084; end: 1089281af;  */

long * FUN_108928084(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x000107c34a74();
  lVar2 = param_1[3];
  for (iVar5 = 0; (int)lVar2 != iVar5; iVar5 = iVar5 + 1) {
    func_0x000107c34a68();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
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



/* Entry: 1089281b0; end: 1089281b3;  */

void FUN_1089281b0(long param_1,long param_2)

{
  func_0x000107c2a614(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1089281b4; end: 108928233;  */

void FUN_1089281b4(long param_1,long param_2)

{
  func_0x000107c2a614(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 108928234; end: 10892824b;  */

void FUN_108928234(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x000108928328();
  }
  *puVar1 = &PTR_FUN_110a987a0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10892824c; end: 10892830f;  */

void FUN_10892824c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x000108928328();
  }
  *puVar1 = &PTR_FUN_110a987a0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 108928310; end: 108928333;  */

void FUN_108928310(void)

{
  return;
}



/* Entry: 108928334; end: 108928363;  */

long FUN_108928334(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108928364(param_1);
  return param_1;
}



/* Entry: 108928364; end: 10892839b;  */

void FUN_108928364(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892839c; end: 10892839f;  */

long FUN_10892839c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108928364(param_1);
  return param_1;
}



/* Entry: 1089283a0; end: 1089283b3;  */

void FUN_1089283a0(void)

{
  FUN_108928334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089283b4; end: 1089283bf;  */

undefined ** FUN_1089283b4(void)

{
  return &PTR_DAT_110a98a50;
}



/* Entry: 1089283c0; end: 108928423;  */

void FUN_1089283c0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 108928424; end: 1089285db;  */

long * FUN_108928424(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,param_1[3],*(undefined4 *)(param_1[3] + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,param_1[4],*(undefined4 *)(param_1[4] + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if (param_1[5] != 0) {
    func_0x000108928854();
    plVar7 = (long *)param_1[5];
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280ac(plVar7,uVar3);
    param_2 = plVar7;
  }
  if ((int)param_1[6] != 0) {
    func_0x000108928854();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 6);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar7);
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
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
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



/* Entry: 1089285dc; end: 1089286c3;  */

void FUN_1089285dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089286c4; end: 1089286eb;  */

long FUN_1089286c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1089286ec; end: 1089286ef;  */

long FUN_1089286ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1089286f0; end: 108928703;  */

void FUN_1089286f0(void)

{
  FUN_1089286c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108928704; end: 1089287af;  */

undefined ** FUN_108928704(void)

{
  return &PTR_DAT_110a98aa8;
}



/* Entry: 1089287b0; end: 10892883f;  */

void FUN_1089287b0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110a989c0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 108928840; end: 10892885f;  */

void FUN_108928840(void)

{
  return;
}



/* Entry: 108928860; end: 10892890f;  */

undefined8 * FUN_108928860(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98b90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001089292bc();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1088b9100(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1089291c0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)(param_3 + 0x34);
  *(undefined4 *)(param_1 + 6) = uVar2;
  return param_1;
}



/* Entry: 108928910; end: 10892893f;  */

long FUN_108928910(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108928940(param_1);
  return param_1;
}



/* Entry: 108928940; end: 108928987;  */

void FUN_108928940(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a27c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_108928e38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108928988; end: 10892898b;  */

long FUN_108928988(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108928940(param_1);
  return param_1;
}



/* Entry: 10892898c; end: 10892899f;  */

void FUN_10892898c(void)

{
  FUN_108928910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089289a0; end: 1089289ab;  */

undefined ** FUN_1089289a0(void)

{
  return &PTR_DAT_110a98bd0;
}



/* Entry: 1089289ac; end: 108928a5f;  */

void FUN_1089289ac(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088b8778(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000108928a24(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 108928a60; end: 108928c17;  */

long * FUN_108928a60(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x0001089292e0(1,param_1[3],*(undefined4 *)(param_1[3] + 0x18));
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if ((int)param_1[6] != 0) {
    func_0x0001089292d4();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 6);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar7,uVar3);
    param_2 = plVar7;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar7 = (long *)0x3;
    func_0x0001089292e0(3,param_1[4],*(undefined4 *)(param_1[4] + 0x20));
    param_2 = plVar7;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar7 = (long *)0x4;
    func_0x0001089292e0(4,param_1[5],*(undefined4 *)(param_1[5] + 0x28));
    param_2 = plVar7;
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    func_0x0001089292d4();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar7);
    func_0x000108929268();
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
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
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



/* Entry: 108928c18; end: 108928c43;  */

long FUN_108928c18(long param_1)

{
  FUN_108929048();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 108928c44; end: 108928c47;  */

void FUN_108928c44(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001089292e8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        FUN_1088b9100(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x0001088b8a94();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        FUN_1089291c0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
      }
      else {
        func_0x000108928d44();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x34) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108928c48; end: 108928e37;  */

void FUN_108928c48(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001089292e8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        FUN_1088b9100(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x0001088b8a94();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        FUN_1089291c0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
      }
      else {
        func_0x000108928d44();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x34) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108928e38; end: 108928e67;  */

long FUN_108928e38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108928e68(param_1);
  return param_1;
}



/* Entry: 108928e68; end: 108928e7b;  */

void FUN_108928e68(long param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int *)(param_1 + 0x2c) == 6) {
      func_0x000107c30258(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return;
  }
  return;
}



/* Entry: 108928e7c; end: 108928e8f;  */

void FUN_108928e7c(void)

{
  FUN_108928e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108928e90; end: 108928ebf;  */

void FUN_108928e90(long param_1)

{
  if (*(int *)(param_1 + 0x2c) == 6) {
    func_0x000107c30258(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 108928ec0; end: 108928ecb;  */

undefined ** FUN_108928ec0(void)

{
  return &PTR_DAT_110a98c18;
}



/* Entry: 108928ecc; end: 108929047;  */

long * FUN_108928ecc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    func_0x000108929280();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x000108929268();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x000108929280();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000108929268();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x2c) == 3) {
    func_0x000108929280();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000108929268();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[3] == '\x01') {
    func_0x000108929280();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000108929268();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    func_0x000108929280();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000108929268();
  }
  plVar1 = param_2;
  if (*(int *)((long)param_1 + 0x2c) == 6) {
    puVar8 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar8 + 0x17);
    puVar3 = puVar8;
    if (lVar4 < 0) {
      lVar4 = puVar8[1];
      puVar3 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f4ec562);
    plVar1 = param_3;
    func_0x000107c280a0(param_3,6,puVar8,param_2);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar1;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *param_3 - (long)plVar1) {
    _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar5);
  }
  while( true ) {
    iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar9);
    if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
    func_0x00010b4d5738();
    lVar4 = (long)plVar1 + (long)iVar9;
    plVar1 = param_3;
    func_0x000107c303e4(param_3,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar1 + (long)iVar7);
}



/* Entry: 108929048; end: 10892911b;  */

long FUN_108929048(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  lVar4 = (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)uVar1 + (ulong)*(byte *)(param_1 + 0x19) * 2
  ;
  if (*(int *)(param_1 + 0x2c) == 6) {
    uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar3 + 1;
  }
  else if (*(int *)(param_1 + 0x2c) == 3) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  return lVar4;
}



/* Entry: 10892911c; end: 10892911f;  */

void FUN_10892911c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001089292e8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    *(int *)(unaff_x21 + 0x14) = *(int *)(unaff_x20 + 0x14);
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x18) = 1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x19) = 1;
  }
  iVar2 = *(int *)(unaff_x20 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x2c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_108928e90();
      }
      *(int *)(unaff_x21 + 0x2c) = iVar2;
    }
    if (iVar2 == 6) {
      if (iVar3 != 6) {
        *(undefined **)(unaff_x21 + 0x20) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x2c) != 6) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x20,puVar1,unaff_x22);
    }
    else if (iVar2 == 3) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 108929120; end: 1089291af;  */

void FUN_108929120(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108928a24();
  func_0x0001089292e8(param_1,param_2);
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    *(int *)(unaff_x21 + 0x14) = *(int *)(unaff_x20 + 0x14);
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x18) = 1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x19) = 1;
  }
  iVar2 = *(int *)(unaff_x20 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x2c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_108928e90();
      }
      *(int *)(unaff_x21 + 0x2c) = iVar2;
    }
    if (iVar2 == 6) {
      if (iVar3 != 6) {
        *(undefined **)(unaff_x21 + 0x20) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x2c) != 6) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x20,puVar1,unaff_x22);
    }
    else if (iVar2 == 3) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1089291b0; end: 1089291bf;  */

void FUN_1089291b0(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001086da334();
  }
  else {
    func_0x0001086d9e80();
  }
  func_0x000107c32688(&UNK_110a98b30);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 1089291c0; end: 108929267;  */

undefined8 * FUN_1089291c0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110a98b40;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001089292bc();
  }
  *(undefined4 *)(puVar2 + 5) = 0;
  iVar1 = *(int *)(param_2 + 0x2c);
  *(int *)((long)puVar2 + 0x2c) = iVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(param_2 + 0x18);
  puVar2[2] = uVar3;
  if (iVar1 == 6) {
    param_2 = param_2 + 0x20;
    func_0x000107c2809c(param_2,param_1);
    puVar2[4] = param_2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  }
  return puVar2;
}



/* Entry: 108929268; end: 1089292fb;  */

void FUN_108929268(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 1089292fc; end: 10892938f;  */

undefined8 * FUN_1089292fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98cb0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010892a274();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010892a11c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 0x38);
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 108929390; end: 1089293bf;  */

long FUN_108929390(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1089293c0(param_1);
  return param_1;
}



/* Entry: 1089293c0; end: 1089293f7;  */

void FUN_1089293c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10891cac8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089293f8; end: 1089293fb;  */

long FUN_1089293f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1089293c0(param_1);
  return param_1;
}



/* Entry: 1089293fc; end: 10892940f;  */

void FUN_1089293fc(void)

{
  FUN_108929390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108929410; end: 10892941b;  */

undefined ** FUN_108929410(void)

{
  return &PTR_DAT_110a98d40;
}



/* Entry: 10892941c; end: 10892947b;  */

void FUN_10892941c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10891cbc0(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 10892947c; end: 1089295f3;  */

long * FUN_10892947c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010892a28c();
  if (extraout_x8 != 0) {
    func_0x00010892a15c();
    func_0x00010892a200();
    func_0x00010892a184();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010892a15c();
    func_0x00010892a1f0();
    func_0x00010892a184();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (long *)0x3;
    func_0x00010892a1c8(3,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_1 = (long *)0x4;
    func_0x00010892a1c8(4,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x18));
    param_4 = param_1;
  }
  func_0x00010892a2a0();
  if ((bool)in_ZR) {
    func_0x00010892a15c();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x00010892a190();
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



/* Entry: 1089295f4; end: 10892961f;  */

long FUN_1089295f4(long param_1)

{
  func_0x00010891ccf4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 108929620; end: 108929623;  */

void FUN_108929620(void)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar3 = unaff_x22;
        func_0x00010892a11c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar3;
      }
      else {
        FUN_10891ced8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108929624; end: 1089296f3;  */

void FUN_108929624(void)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar3 = unaff_x22;
        func_0x00010892a11c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar3;
      }
      else {
        FUN_10891ced8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089296f4; end: 108929727;  */

void FUN_1089296f4(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010892a2c0();
  FUN_10892941c();
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar3 = unaff_x22;
        func_0x00010892a11c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar3;
      }
      else {
        FUN_10891ced8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108929728; end: 108929737;  */

undefined1  [16] FUN_108929728(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x00010892a218();
  puVar1 = param_1 + 0x21;
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



/* Entry: 108929738; end: 1089298bb;  */

void FUN_108929738(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891da78();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891e088();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891e878();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108920744();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108920ab8();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891ea60();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891fd5c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1089058f8();
    }
    break;
  default:
    goto LAB_108929850;
  }
  __ZdlPv();
LAB_108929850:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1089298bc; end: 1089299df;  */

undefined8 * FUN_1089298bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98d00;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010892a274();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001088f38e0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1088f0114(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_3 + 0x38);
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  switch(*(undefined4 *)(param_1 + 9)) {
  case 6:
    func_0x00010892a1a8();
    FUN_108923688();
    break;
  case 7:
    func_0x00010892a1a8();
    FUN_10892370c();
    break;
  case 8:
    func_0x00010892a1a8();
    FUN_108923790();
    break;
  case 9:
    func_0x00010892a1a8();
    func_0x000108923a20();
    break;
  case 10:
    func_0x00010892a1a8();
    func_0x000108923a50();
    break;
  case 0xb:
    func_0x00010892a1a8();
    func_0x000108923ae0();
    break;
  case 0xc:
    func_0x00010892a1a8();
    FUN_10892390c();
    break;
  case 0xd:
    func_0x00010892a1a8();
    func_0x0001088b6ce4();
    break;
  default:
    goto LAB_1089299d4;
  }
  param_1[8] = param_2;
LAB_1089299d4:
  return param_1;
}



/* Entry: 1089299e0; end: 108929a0f;  */

long FUN_1089299e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108929a10(param_1);
  return param_1;
}



/* Entry: 108929a10; end: 108929a5f;  */

void FUN_108929a10(long param_1)

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
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a5a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891da78();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891e088();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891e878();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108920744();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108920ab8();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891ea60();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10891fd5c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010892a19c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108929850;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1089058f8();
    }
    break;
  default:
    goto LAB_108929850;
  }
  __ZdlPv();
LAB_108929850:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 108929a60; end: 108929a63;  */

long FUN_108929a60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_108929a10(param_1);
  return param_1;
}



/* Entry: 108929a64; end: 108929a77;  */

void FUN_108929a64(void)

{
  FUN_1089299e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108929a78; end: 108929a83;  */

undefined ** FUN_108929a78(void)

{
  return &PTR_DAT_110a98d90;
}



/* Entry: 108929a84; end: 108929aeb;  */

void FUN_108929a84(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a5a8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088b9464(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  FUN_108929738(param_1);
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



/* Entry: 108929aec; end: 108929d4f;  */

long * FUN_108929aec(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010892a28c();
  if (extraout_x8 != 0) {
    func_0x00010892a15c();
    func_0x00010892a200();
    func_0x00010892a184();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010892a15c();
    func_0x00010892a1f0();
    func_0x00010892a184();
    param_4 = param_1;
  }
  func_0x00010892a2a0();
  plVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x00010892a15c();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010892a190();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    func_0x00010892a15c();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010892a190();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_4 = (long *)0x5;
    func_0x00010892a1c8(5,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  plVar3 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar2 = *(uint *)(unaff_x20 + 0x48) - 6;
  if (uVar2 < 8) {
    func_0x00010892a1c8(plVar3,*(long *)(unaff_x20 + 0x40),
                        *(undefined4 *)
                         (*(long *)(unaff_x20 + 0x40) + *(long *)(&UNK_10df71f28 + (ulong)uVar2 * 8)
                         ));
    param_4 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (long *)0x63;
    func_0x00010892a1c8(99,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
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
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 108929d50; end: 108929d53;  */

void FUN_108929d50(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar4 = (uVar1 & 3) == 0;
  if (!(bool)uVar4) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x18);
      if (param_1 == 0) {
        param_1 = unaff_x22;
        func_0x0001088f38e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891988c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x20);
      if (param_1 == 0) {
        FUN_1088f0114(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar4) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x48);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x48);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_108929738();
      }
      *(int *)(unaff_x21 + 0x48) = iVar2;
    }
    switch(iVar2) {
    case 6:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0a0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923688();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0d0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892370c();
      break;
    case 8:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c1bc();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923790();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c348();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a20();
      break;
    case 10:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c378();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a50();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c484();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923ae0();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c258();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892390c();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_108905d54();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x0001088b6ce4();
      break;
    default:
      goto LAB_108929fd8;
    }
    *(ulong *)(unaff_x21 + 0x40) = param_1;
  }
LAB_108929fd8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108929d54; end: 108929ffb;  */

void FUN_108929d54(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar4 = (uVar1 & 3) == 0;
  if (!(bool)uVar4) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x18);
      if (param_1 == 0) {
        param_1 = unaff_x22;
        func_0x0001088f38e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891988c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x20);
      if (param_1 == 0) {
        FUN_1088f0114(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar4) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x48);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x48);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_108929738();
      }
      *(int *)(unaff_x21 + 0x48) = iVar2;
    }
    switch(iVar2) {
    case 6:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0a0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923688();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0d0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892370c();
      break;
    case 8:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c1bc();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923790();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c348();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a20();
      break;
    case 10:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c378();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a50();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c484();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923ae0();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c258();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892390c();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_108905d54();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x0001088b6ce4();
      break;
    default:
      goto LAB_108929fd8;
    }
    *(ulong *)(unaff_x21 + 0x40) = param_1;
  }
LAB_108929fd8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108929ffc; end: 10892a06f;  */

void FUN_108929ffc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010892a2c0();
  FUN_108929a84();
  uVar5 = unaff_x20;
  func_0x00010892a2ac();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar4 = (uVar1 & 3) == 0;
  if (!(bool)uVar4) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(ulong *)(unaff_x21 + 0x18);
      if (uVar5 == 0) {
        uVar5 = unaff_x22;
        func_0x0001088f38e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
      else {
        FUN_10891988c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(unaff_x21 + 0x20);
      if (uVar5 == 0) {
        FUN_1088f0114(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
        uVar5 = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010892a2a0();
  if ((bool)uVar4) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x48);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x48);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        uVar5 = unaff_x21;
        FUN_108929738();
      }
      *(int *)(unaff_x21 + 0x48) = iVar2;
    }
    switch(iVar2) {
    case 6:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0a0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923688();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c0d0();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892370c();
      break;
    case 8:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c1bc();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_108923790();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c348();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a20();
      break;
    case 10:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_10891c378();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923a50();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c484();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x000108923ae0();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        func_0x00010891c258();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      FUN_10892390c();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x00010892a174();
        FUN_108905d54();
        goto LAB_108929fd8;
      }
      func_0x00010892a1b4();
      func_0x0001088b6ce4();
      break;
    default:
      goto LAB_108929fd8;
    }
    *(ulong *)(unaff_x21 + 0x40) = uVar5;
  }
LAB_108929fd8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10892a070; end: 10892a07f;  */

void FUN_10892a070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110a98cb0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  return;
}



/* Entry: 10892a080; end: 10892a15b;  */

void FUN_10892a080(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110a98cb0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  return;
}



/* Entry: 10892a15c; end: 10892a2ff;  */

ulong * FUN_10892a15c(void)

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



/* Entry: 10892a300; end: 10892a327;  */

long FUN_10892a300(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10892a328; end: 10892a32b;  */

long FUN_10892a328(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10892a32c; end: 10892a33f;  */

void FUN_10892a32c(void)

{
  FUN_10892a300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892a340; end: 10892a35f;  */

undefined ** FUN_10892a340(void)

{
  return &PTR_DAT_110a98eb0;
}



/* Entry: 10892a360; end: 10892a3fb;  */

long * FUN_10892a360(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010892ab00();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010892ab0c();
    param_2 = plVar2;
  }
  if (param_1[3] != 0) {
    func_0x00010892ab00();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010892ab0c();
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



/* Entry: 10892a3fc; end: 10892a463;  */

ulong FUN_10892a3fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 10892a464; end: 10892a543;  */

undefined8 * FUN_10892a464(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98e70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010890161c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10892aa80(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010890161c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  if (*(int *)(param_1 + 8) == 3) {
    param_1[7] = *(undefined8 *)(param_3 + 0x38);
  }
  return param_1;
}



/* Entry: 10892a544; end: 10892a573;  */

long FUN_10892a544(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892a574(param_1);
  return param_1;
}



/* Entry: 10892a574; end: 10892a5db;  */

void FUN_10892a574(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088bc754();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10892a300();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1088bc754();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10892a5dc; end: 10892a5df;  */

long FUN_10892a5dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892a574(param_1);
  return param_1;
}



/* Entry: 10892a5e0; end: 10892a5f3;  */

void FUN_10892a5e0(void)

{
  FUN_10892a544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892a5f4; end: 10892a5ff;  */

undefined ** FUN_10892a5f4(void)

{
  return &PTR_DAT_110a98f08;
}



/* Entry: 10892a600; end: 10892a687;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10892a600(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088bc7a8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010892a34c(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001088bc7a8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 10892a688; end: 10892a867;  */

long * FUN_10892a688(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x00010892ab18(1,param_1[3],*(undefined4 *)(param_1[3] + 0x18));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x00010892ab18(2,param_1[4],*(undefined4 *)(param_1[4] + 0x20));
    param_2 = plVar2;
  }
  if ((int)param_1[8] == 3) {
    func_0x00010892ab00();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010892ab0c();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010892ab18(4,param_1[5],*(undefined4 *)(param_1[5] + 0x20));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010892ab18(5,param_1[6],*(undefined4 *)(param_1[6] + 0x20));
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
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
  if ((long)(int)uVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
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



/* Entry: 10892a868; end: 10892a893;  */

long FUN_10892a868(long param_1)

{
  FUN_10892a3fc();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10892a894; end: 10892a897;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10892a894(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = uVar4;
        func_0x000107c2a26c(uVar4,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar4;
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x0001088bc924();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar4;
        FUN_10892aa80(uVar4,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00010892a2cc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x0001088bc924();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
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


