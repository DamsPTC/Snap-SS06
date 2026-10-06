/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b481df8; end: 10b481e03;  */

undefined ** FUN_10b481df8(void)

{
  return &PTR_DAT_110ceaf80;
}



/* Entry: 10b481e04; end: 10b481e3f;  */

void FUN_10b481e04(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
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



/* Entry: 10b481e40; end: 10b481f93;  */

long * FUN_10b481e40(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  undefined8 *puVar5;
  long *unaff_x23;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar5 + 0x17);
  plVar6 = param_3;
  if (lVar3 < 0) {
    plVar2 = puVar5 + 1;
    lVar3 = 0;
    if (*plVar2 == 0) goto LAB_10b481eac;
    puVar5 = (undefined8 *)*puVar5;
    lVar3 = *plVar2;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b481eac;
  func_0x00010b48246c(puVar5,lVar3,param_3,&UNK_10f76ee0f);
  lVar3 = 1;
  param_2 = param_3;
  func_0x00010b48233c();
LAB_10b481eac:
  for (uVar9 = (ulong)(*(uint *)(param_1 + 0x18) &
                      ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
      uVar9 = uVar9 - 1) {
    func_0x00010b482358();
    plVar2 = unaff_x23;
    if (lVar3 < 0) {
      lVar3 = unaff_x23[1];
      plVar2 = (long *)*unaff_x23;
    }
    func_0x00010b482460(plVar2);
    lVar8 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (((lVar8 < 0) && (lVar8 = unaff_x23[1], 0x7f < lVar8)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar8)) {
      lVar3 = 2;
      param_2 = param_3;
      plVar6 = unaff_x23;
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)lVar8;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010b482428((undefined1 *)((long)param_2 + 2));
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + lVar8);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b482404();
  if ((long)plVar6 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar4 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
    if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar7);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar4);
}



/* Entry: 10b481f94; end: 10b48203b;  */

ulong FUN_10b481f94(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
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
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    uVar4 = uVar4 + uVar5 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4823f8();
    lVar6 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x30) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b48203c; end: 10b4820a3;  */

void FUN_10b48203c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4823c0();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598fce8(puVar1,param_2 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48232c();
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



/* Entry: 10b4820a4; end: 10b4820cb;  */

void FUN_10b4820a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010564c6c0();
  }
  else {
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110ceacc8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4820cc; end: 10b4820f7;  */

undefined8 * FUN_10b4820cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b48150c(param_1,param_3);
  return param_1;
}



/* Entry: 10b4820f8; end: 10b482127;  */

long * FUN_10b4820f8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b482128; end: 10b4822a3;  */

void FUN_10b482128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b482458();
  }
  else {
    func_0x00010b48230c();
  }
  *puVar1 = &PTR_FUN_110cead18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4822a4; end: 10b482493;  */

void FUN_10b4822a4(void)

{
  return;
}



/* Entry: 10b482494; end: 10b4824c3;  */

long FUN_10b482494(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4824c4(param_1);
  return param_1;
}



/* Entry: 10b4824c4; end: 10b482503;  */

long FUN_10b4824c4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b47fd94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b480eb4();
  }
  __ZdlPv();
  FUN_10b482918(param_1 + 0x30);
  FUN_10b4828bc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b482504; end: 10b482507;  */

long FUN_10b482504(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4824c4(param_1);
  return param_1;
}



/* Entry: 10b482508; end: 10b48251b;  */

void FUN_10b482508(void)

{
  FUN_10b482494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48251c; end: 10b482527;  */

undefined ** FUN_10b48251c(void)

{
  return &PTR_DAT_110ceb090;
}



/* Entry: 10b482528; end: 10b4825ab;  */

void FUN_10b482528(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b47fdf8(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b480f2c(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 10b4825ac; end: 10b4828b3;  */

long * FUN_10b4825ac(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4829e8();
    param_2 = (long *)0x1;
    func_0x00010b482a14();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b482a14(2,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x30));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b482a14(3,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x20));
  }
  iVar6 = *(int *)(param_1 + 0x38);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4829e8();
    param_2 = (long *)0x4;
    func_0x00010b482a14();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
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
  return param_2;
}



/* Entry: 10b4828b4; end: 10b4828bb;  */

void FUN_10b4828b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110ceb050;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = param_2;
  return;
}



/* Entry: 10b4828bc; end: 10b4828eb;  */

long * FUN_10b4828bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4828ec; end: 10b482917;  */

long FUN_10b4828ec(long param_1)

{
  FUN_10b482918(param_1 + 0x20);
  FUN_10b4828bc(param_1 + 8);
  return param_1;
}



/* Entry: 10b482918; end: 10b482947;  */

long * FUN_10b482918(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b482948; end: 10b4829df;  */

void FUN_10b482948(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110ceb050;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = param_1;
  return;
}



/* Entry: 10b4829e0; end: 10b482a1b;  */

void FUN_10b4829e0(void)

{
  return;
}



/* Entry: 10b482a1c; end: 10b482a47;  */

undefined8 * FUN_10b482a1c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceb108;
  param_1[1] = param_2;
  FUN_10b482a48();
  return param_1;
}



/* Entry: 10b482a48; end: 10b482a73;  */

void FUN_10b482a48(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b482a74; end: 10b482aa3;  */

long FUN_10b482a74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b482aa4(param_1);
  return param_1;
}



/* Entry: 10b482aa4; end: 10b482ad3;  */

long FUN_10b482aa4(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b48123c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000107c30320(param_1 + 0x18,0x400400010,0);
  }
  return param_1 + 0x18;
}



/* Entry: 10b482ad4; end: 10b482ad7;  */

long FUN_10b482ad4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b482aa4(param_1);
  return param_1;
}



/* Entry: 10b482ad8; end: 10b482aeb;  */

void FUN_10b482ad8(void)

{
  FUN_10b482a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b482aec; end: 10b482b17;  */

undefined ** FUN_10b482aec(void)

{
  return &PTR_DAT_110ceb148;
}



/* Entry: 10b482b18; end: 10b482b83;  */

void FUN_10b482b18(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000107c30320(param_1 + 0x18,0x10400400010,0);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4812bc(*(undefined8 *)(param_1 + 0x38));
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



/* Entry: 10b482b84; end: 10b482d17;  */

long FUN_10b482b84(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puStack_60;
  long alStack_58 [3];
  
  func_0x00010b483e98();
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b483e6c();
      while (alStack_58[0] != 0) {
        unaff_x20 = alStack_58[0] + 8;
        func_0x00010b483e60(unaff_x20,alStack_58[0] + 0x10);
        func_0x000107c27d54(alStack_58);
      }
    }
    else {
      puVar2 = (undefined4 *)(uVar8 << 4);
      __Znam();
      puVar6 = puVar2;
      do {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar2 + uVar8 * 4);
      puStack_60 = puVar2;
      func_0x00010b483e6c();
      while (alStack_58[0] != 0) {
        *puVar2 = *(undefined4 *)(alStack_58[0] + 8);
        *(undefined4 **)(puVar2 + 2) = (undefined4 *)(alStack_58[0] + 8);
        func_0x000107c27d54(alStack_58);
        puVar2 = puVar2 + 4;
      }
      FUN_10b483064(puStack_60,puStack_60 + uVar8 * 4);
      uVar7 = uVar8 << 4;
      puVar6 = puStack_60;
      while (uVar8 != 0) {
        unaff_x20 = *(long *)(puVar6 + 2);
        func_0x00010b483e60(unaff_x20,unaff_x20 + 8);
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 0x10;
        uVar8 = uVar7;
      }
      FUN_10b482fa8(&puStack_60);
    }
  }
  lVar3 = unaff_x20;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    lVar3 = 2;
    func_0x000107c303cc(2,*(long *)(unaff_x21 + 0x38),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x38) + 0x14),unaff_x20,param_3);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(uVar8 + 8);
      lVar5 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar4 = uVar8 + 8;
    }
    func_0x0001053930c4(param_3,lVar4,lVar5,lVar3);
    lVar3 = param_3;
  }
  return lVar3;
}



/* Entry: 10b482d18; end: 10b482ebf;  */

void FUN_10b482d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined4 *unaff_x21;
  
  uVar2 = param_4;
  func_0x00010b483e98();
  func_0x000107c28094(uVar2,param_3);
  uVar3 = 10;
  func_0x000107c280a8(10,uVar2);
  func_0x000107c280a8((int)unaff_x20[5] + ((int)LZCOUNT(*unaff_x21) * -9 + 0x160U >> 6) +
                      ((int)LZCOUNT((int)unaff_x20[5]) * -9 + 0x160U >> 6) + 2,uVar3);
  uVar3 = 1;
  FUN_10b47cdf0(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  lVar1 = unaff_x20[5];
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0((int)lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b482ec0; end: 10b482f5b;  */

void FUN_10b482ec0(long param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong uVar2;
  
  func_0x00010b483e98();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b483cac(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      func_0x00010b483020(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar2;
    }
    else {
      FUN_10b481460();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b482f5c; end: 10b482f63;  */

undefined8 * FUN_10b482f5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110ceb108;
  puVar1[1] = param_2;
  FUN_10b482a48();
  return puVar1;
}



/* Entry: 10b482f64; end: 10b482fa7;  */

long FUN_10b482f64(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x400400010,0);
  }
  return param_1;
}



/* Entry: 10b482fa8; end: 10b482fcb;  */

undefined8 FUN_10b482fa8(undefined8 param_1)

{
  FUN_10b482fcc(param_1,0);
  return param_1;
}



/* Entry: 10b482fcc; end: 10b482fe3;  */

void FUN_10b482fcc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10b482fe4; end: 10b483063;  */

undefined8 * FUN_10b482fe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110ceb108;
  puVar1[1] = param_1;
  FUN_10b482a48();
  return puVar1;
}



/* Entry: 10b483064; end: 10b483083;  */

void FUN_10b483064(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b483084(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10b483084; end: 10b4830ab;  */

uint * FUN_10b483084(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar13;
  undefined8 uVar14;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint *unaff_x30;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar12 = LZCOUNT((long)param_2 - (long)param_1 >> 4) << 1 ^ 0x7e;
  iVar17 = 1;
  puVar10 = param_2;
  puVar9 = param_1;
LAB_10b4830dc:
  puVar11 = puVar10 + -4;
LAB_10b4830f0:
  lVar13 = -uVar12;
  puVar6 = puVar9;
LAB_10b4830f8:
  puVar9 = puVar6;
  lVar13 = lVar13 + 1;
  uVar12 = (long)puVar10 - (long)puVar9 >> 4;
  uVar4 = 4 < uVar12;
  switch(uVar12) {
  case 2:
    func_0x00010b483e8c(puVar10[-4]);
    if (!(bool)uVar4) {
      *puVar9 = extraout_w8;
      puVar10[-4] = extraout_w9;
      uVar14 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + -2);
      *(undefined8 *)(puVar10 + -2) = uVar14;
    }
  case 0:
  case 1:
LAB_10b483260:
    func_0x00010b483dfc(unaff_x30);
    return unaff_x30;
  case 3:
    puVar10 = puVar9 + 4;
    func_0x00010b483dfc();
    uVar1 = *puVar10;
    uVar15 = *puVar9;
    uVar2 = *puVar11;
    if (uVar1 < uVar15) {
      if (uVar2 < uVar1) {
        *puVar9 = uVar2;
        *puVar11 = uVar15;
        uVar14 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar11 + 2);
        *(undefined8 *)(puVar11 + 2) = uVar14;
      }
      else {
        *puVar9 = uVar1;
        *puVar10 = uVar15;
        uVar14 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)(puVar10 + 2) = uVar14;
        if (*puVar11 < uVar15) {
          *puVar10 = *puVar11;
          *puVar11 = uVar15;
          *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
          *(undefined8 *)(puVar11 + 2) = uVar14;
        }
      }
    }
    else {
      if (uVar1 <= uVar2) {
        return (uint *)0x0;
      }
      *puVar10 = uVar2;
      *puVar11 = uVar1;
      uVar14 = *(undefined8 *)(puVar10 + 2);
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)(puVar11 + 2) = uVar14;
      uVar1 = *puVar9;
      if (*puVar10 < uVar1) {
        *puVar9 = *puVar10;
        *puVar10 = uVar1;
        uVar14 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)(puVar10 + 2) = uVar14;
      }
    }
    return (uint *)0x1;
  case 4:
    puVar10 = puVar9;
    func_0x00010b483dfc(puVar9,puVar9 + 4,puVar9 + 8,puVar11,param_3);
    func_0x00010b483e78();
    FUN_10b483368();
    bVar5 = *puVar11 <= *puVar9;
    if (((!bVar5) && (func_0x00010b483dd4(), !bVar5)) && (func_0x00010b483dac(), !bVar5)) {
      func_0x00010b483e20();
    }
    return puVar10;
  case 5:
    puVar10 = puVar9;
    puVar6 = puVar11;
    func_0x00010b483dfc(puVar9,puVar9 + 4,puVar9 + 8,puVar9 + 0xc,puVar11,param_3);
    func_0x00010b483e78();
    FUN_10b483434();
    func_0x00010b483e8c(*puVar6);
    if (!(bool)uVar4) {
      *puVar9 = extraout_w8_00;
      *puVar6 = extraout_w9_00;
      uVar14 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(puVar6 + 2) = uVar14;
      bVar5 = *puVar11 <= *puVar9;
      if (((!bVar5) && (func_0x00010b483dd4(), !bVar5)) && (func_0x00010b483dac(), !bVar5)) {
        func_0x00010b483e20();
      }
    }
    return puVar10;
  }
  if ((long)uVar12 < 0x18) {
    func_0x00010b483d9c();
    if (iVar17 == 0) {
      func_0x00010b483dfc();
      if (param_1 != param_2) {
        puVar10 = param_1 + 6;
        while (param_1 + 4 != param_2) {
          uVar1 = param_1[4];
          uVar15 = *param_1;
          if (uVar1 < uVar15) {
            uVar14 = *(undefined8 *)(param_1 + 6);
            puVar9 = puVar10;
            do {
              puVar11 = puVar9;
              puVar11[-2] = uVar15;
              puVar9 = puVar11 + -4;
              *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
              uVar15 = puVar11[-10];
            } while (uVar1 < uVar15);
            puVar11[-6] = uVar1;
            *(undefined8 *)puVar9 = uVar14;
          }
          puVar10 = puVar10 + 4;
          param_1 = param_1 + 4;
        }
      }
      return param_1;
    }
    func_0x00010b483dfc();
    if (param_1 == param_2) {
      return param_1;
    }
    lVar13 = 0;
    puVar10 = param_1;
    goto LAB_10b483500;
  }
  if (lVar13 == 1) {
    puVar11 = puVar10;
    func_0x00010b483dfc();
    if (puVar9 == puVar10) {
      return puVar11;
    }
    if (puVar9 != puVar10) {
      func_0x00010b4839b8();
      lVar13 = (long)puVar10 - (long)puVar9;
      for (; bVar5 = puVar11 <= puVar10, puVar10 != puVar11; puVar10 = puVar10 + 4) {
        func_0x00010b483e8c(*puVar10);
        if (!bVar5) {
          *puVar10 = extraout_w9_01;
          *puVar9 = extraout_w8_01;
          uVar14 = *(undefined8 *)(puVar10 + 2);
          *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + 2);
          *(undefined8 *)(puVar9 + 2) = uVar14;
          FUN_10b483a18(puVar9,param_3,lVar13 >> 4,puVar9);
        }
      }
      func_0x00010b483d9c();
      FUN_10b483af0();
      puVar11 = puVar10;
    }
    return puVar11;
  }
  puVar6 = puVar9 + (uVar12 >> 1) * 4;
  uVar4 = 0x80 < uVar12;
  if ((bool)uVar4) {
    func_0x00010b483e18(puVar9,puVar6,puVar11);
    param_1 = puVar6 + -4;
    func_0x00010b483e18(puVar9 + 4,param_1,puVar10 + -8);
    func_0x00010b483e18(puVar9 + 8,puVar6 + 4,puVar10 + -0xc);
    param_2 = puVar6;
    func_0x00010b483e18(param_1,puVar6,puVar6 + 4);
    uVar1 = *puVar9;
    *puVar9 = *puVar6;
    *puVar6 = uVar1;
    uVar14 = *(undefined8 *)(puVar9 + 2);
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar6 + 2) = uVar14;
  }
  else {
    param_2 = puVar9;
    func_0x00010b483e18(puVar6,puVar9,puVar11);
    param_1 = puVar6;
  }
  puVar7 = param_1;
  if ((iVar17 == 0) && (func_0x00010b483e8c(puVar9[-4]), puVar7 = param_1, (bool)uVar4)) {
    func_0x00010b483d9c();
    func_0x00010b4835e8();
    puVar9 = param_1;
    goto LAB_10b48322c;
  }
  func_0x00010b483d9c();
  func_0x00010b4836b4();
  if (((ulong)param_2 & 1) != 0) {
    puVar8 = puVar9;
    FUN_10b483780(puVar9,puVar7,param_3);
    puVar6 = puVar7 + 4;
    param_1 = puVar6;
    param_2 = puVar10;
    FUN_10b483780(puVar6,puVar10,param_3);
    if ((int)param_1 == 0) goto code_r0x00010b4831f8;
    uVar12 = -lVar13;
    puVar10 = puVar7;
    if (((ulong)puVar8 & 1) != 0) goto LAB_10b483260;
    goto LAB_10b4830dc;
  }
  goto LAB_10b483200;
LAB_10b483500:
  if (puVar10 + 4 == param_2) {
    return param_1;
  }
  uVar1 = puVar10[4];
  uVar15 = *puVar10;
  if (uVar1 < uVar15) {
    uVar14 = *(undefined8 *)(puVar10 + 6);
    lVar3 = lVar13;
    do {
      lVar16 = lVar3;
      *(uint *)((long)param_1 + lVar16 + 0x10) = uVar15;
      *(undefined8 *)((long)param_1 + lVar16 + 0x18) = *(undefined8 *)((long)param_1 + lVar16 + 8);
      puVar9 = param_1;
      if (lVar16 == 0) goto LAB_10b483558;
      uVar15 = *(uint *)((long)param_1 + lVar16 + -0x10);
      lVar3 = lVar16 + -0x10;
    } while (uVar1 < uVar15);
    puVar9 = (uint *)((long)param_1 + lVar16);
LAB_10b483558:
    *puVar9 = uVar1;
    *(undefined8 *)(puVar9 + 2) = uVar14;
  }
  lVar13 = lVar13 + 0x10;
  puVar10 = puVar10 + 4;
  goto LAB_10b483500;
code_r0x00010b4831f8:
  if (((ulong)puVar8 & 1) == 0) goto LAB_10b483200;
  goto LAB_10b4830f8;
LAB_10b483200:
  param_2 = puVar7;
  FUN_10b4830ac(puVar9,puVar7,param_3,-lVar13,iVar17);
  param_1 = puVar9;
  puVar9 = puVar7 + 4;
LAB_10b48322c:
  iVar17 = 0;
  uVar12 = -lVar13;
  goto LAB_10b4830f0;
}



/* Entry: 10b4830ac; end: 10b483367;  */

uint * FUN_10b4830ac(uint *param_1,uint *param_2,undefined8 param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint uVar15;
  long lVar16;
  uint *unaff_x30;
  
  puVar10 = param_2;
  puVar9 = param_1;
LAB_10b4830dc:
  puVar11 = puVar10 + -4;
LAB_10b4830f0:
  param_4 = -param_4;
  puVar6 = puVar9;
LAB_10b4830f8:
  puVar9 = puVar6;
  param_4 = param_4 + 1;
  uVar12 = (long)puVar10 - (long)puVar9 >> 4;
  uVar4 = 4 < uVar12;
  switch(uVar12) {
  case 2:
    func_0x00010b483e8c(puVar10[-4]);
    if (!(bool)uVar4) {
      *puVar9 = extraout_w8;
      puVar10[-4] = extraout_w9;
      uVar13 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + -2);
      *(undefined8 *)(puVar10 + -2) = uVar13;
    }
  case 0:
  case 1:
LAB_10b483260:
    func_0x00010b483dfc(unaff_x30);
    return unaff_x30;
  case 3:
    puVar10 = puVar9 + 4;
    func_0x00010b483dfc();
    uVar1 = *puVar10;
    uVar15 = *puVar9;
    uVar2 = *puVar11;
    if (uVar1 < uVar15) {
      if (uVar2 < uVar1) {
        *puVar9 = uVar2;
        *puVar11 = uVar15;
        uVar13 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar11 + 2);
        *(undefined8 *)(puVar11 + 2) = uVar13;
      }
      else {
        *puVar9 = uVar1;
        *puVar10 = uVar15;
        uVar13 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)(puVar10 + 2) = uVar13;
        if (*puVar11 < uVar15) {
          *puVar10 = *puVar11;
          *puVar11 = uVar15;
          *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
          *(undefined8 *)(puVar11 + 2) = uVar13;
        }
      }
    }
    else {
      if (uVar1 <= uVar2) {
        return (uint *)0x0;
      }
      *puVar10 = uVar2;
      *puVar11 = uVar1;
      uVar13 = *(undefined8 *)(puVar10 + 2);
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)(puVar11 + 2) = uVar13;
      uVar1 = *puVar9;
      if (*puVar10 < uVar1) {
        *puVar9 = *puVar10;
        *puVar10 = uVar1;
        uVar13 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)(puVar10 + 2) = uVar13;
      }
    }
    return (uint *)0x1;
  case 4:
    puVar10 = puVar9;
    func_0x00010b483dfc(puVar9,puVar9 + 4,puVar9 + 8,puVar11,param_3);
    func_0x00010b483e78();
    FUN_10b483368();
    bVar5 = *puVar11 <= *puVar9;
    if (((!bVar5) && (func_0x00010b483dd4(), !bVar5)) && (func_0x00010b483dac(), !bVar5)) {
      func_0x00010b483e20();
    }
    return puVar10;
  case 5:
    puVar10 = puVar9;
    puVar6 = puVar11;
    func_0x00010b483dfc(puVar9,puVar9 + 4,puVar9 + 8,puVar9 + 0xc,puVar11,param_3);
    func_0x00010b483e78();
    FUN_10b483434();
    func_0x00010b483e8c(*puVar6);
    if (!(bool)uVar4) {
      *puVar9 = extraout_w8_00;
      *puVar6 = extraout_w9_00;
      uVar13 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(puVar6 + 2) = uVar13;
      bVar5 = *puVar11 <= *puVar9;
      if (((!bVar5) && (func_0x00010b483dd4(), !bVar5)) && (func_0x00010b483dac(), !bVar5)) {
        func_0x00010b483e20();
      }
    }
    return puVar10;
  }
  if ((long)uVar12 < 0x18) {
    func_0x00010b483d9c();
    if ((param_5 & 1) == 0) {
      func_0x00010b483dfc();
      if (param_1 != param_2) {
        puVar10 = param_1 + 6;
        while (param_1 + 4 != param_2) {
          uVar1 = param_1[4];
          uVar15 = *param_1;
          if (uVar1 < uVar15) {
            uVar13 = *(undefined8 *)(param_1 + 6);
            puVar9 = puVar10;
            do {
              puVar11 = puVar9;
              puVar11[-2] = uVar15;
              puVar9 = puVar11 + -4;
              *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
              uVar15 = puVar11[-10];
            } while (uVar1 < uVar15);
            puVar11[-6] = uVar1;
            *(undefined8 *)puVar9 = uVar13;
          }
          puVar10 = puVar10 + 4;
          param_1 = param_1 + 4;
        }
      }
      return param_1;
    }
    func_0x00010b483dfc();
    if (param_1 == param_2) {
      return param_1;
    }
    lVar14 = 0;
    puVar10 = param_1;
    goto LAB_10b483500;
  }
  if (param_4 == 1) {
    puVar11 = puVar10;
    func_0x00010b483dfc();
    if (puVar9 == puVar10) {
      return puVar11;
    }
    if (puVar9 != puVar10) {
      func_0x00010b4839b8();
      lVar14 = (long)puVar10 - (long)puVar9;
      for (; bVar5 = puVar11 <= puVar10, puVar10 != puVar11; puVar10 = puVar10 + 4) {
        func_0x00010b483e8c(*puVar10);
        if (!bVar5) {
          *puVar10 = extraout_w9_01;
          *puVar9 = extraout_w8_01;
          uVar13 = *(undefined8 *)(puVar10 + 2);
          *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + 2);
          *(undefined8 *)(puVar9 + 2) = uVar13;
          FUN_10b483a18(puVar9,param_3,lVar14 >> 4,puVar9);
        }
      }
      func_0x00010b483d9c();
      FUN_10b483af0();
      puVar11 = puVar10;
    }
    return puVar11;
  }
  puVar6 = puVar9 + (uVar12 >> 1) * 4;
  uVar4 = 0x80 < uVar12;
  if ((bool)uVar4) {
    func_0x00010b483e18(puVar9,puVar6,puVar11);
    param_1 = puVar6 + -4;
    func_0x00010b483e18(puVar9 + 4,param_1,puVar10 + -8);
    func_0x00010b483e18(puVar9 + 8,puVar6 + 4,puVar10 + -0xc);
    param_2 = puVar6;
    func_0x00010b483e18(param_1,puVar6,puVar6 + 4);
    uVar1 = *puVar9;
    *puVar9 = *puVar6;
    *puVar6 = uVar1;
    uVar13 = *(undefined8 *)(puVar9 + 2);
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar6 + 2) = uVar13;
  }
  else {
    param_2 = puVar9;
    func_0x00010b483e18(puVar6,puVar9,puVar11);
    param_1 = puVar6;
  }
  puVar7 = param_1;
  if (((param_5 & 1) == 0) && (func_0x00010b483e8c(puVar9[-4]), puVar7 = param_1, (bool)uVar4)) {
    func_0x00010b483d9c();
    func_0x00010b4835e8();
    puVar9 = param_1;
    goto LAB_10b48322c;
  }
  func_0x00010b483d9c();
  func_0x00010b4836b4();
  if (((ulong)param_2 & 1) != 0) {
    puVar8 = puVar9;
    FUN_10b483780(puVar9,puVar7,param_3);
    puVar6 = puVar7 + 4;
    param_1 = puVar6;
    param_2 = puVar10;
    FUN_10b483780(puVar6,puVar10,param_3);
    if ((int)param_1 == 0) goto code_r0x00010b4831f8;
    param_4 = -param_4;
    puVar10 = puVar7;
    if (((ulong)puVar8 & 1) != 0) goto LAB_10b483260;
    goto LAB_10b4830dc;
  }
  goto LAB_10b483200;
LAB_10b483500:
  if (puVar10 + 4 == param_2) {
    return param_1;
  }
  uVar1 = puVar10[4];
  uVar15 = *puVar10;
  if (uVar1 < uVar15) {
    uVar13 = *(undefined8 *)(puVar10 + 6);
    lVar3 = lVar14;
    do {
      lVar16 = lVar3;
      *(uint *)((long)param_1 + lVar16 + 0x10) = uVar15;
      *(undefined8 *)((long)param_1 + lVar16 + 0x18) = *(undefined8 *)((long)param_1 + lVar16 + 8);
      puVar9 = param_1;
      if (lVar16 == 0) goto LAB_10b483558;
      uVar15 = *(uint *)((long)param_1 + lVar16 + -0x10);
      lVar3 = lVar16 + -0x10;
    } while (uVar1 < uVar15);
    puVar9 = (uint *)((long)param_1 + lVar16);
LAB_10b483558:
    *puVar9 = uVar1;
    *(undefined8 *)(puVar9 + 2) = uVar13;
  }
  lVar14 = lVar14 + 0x10;
  puVar10 = puVar10 + 4;
  goto LAB_10b483500;
code_r0x00010b4831f8:
  if (((ulong)puVar8 & 1) == 0) goto LAB_10b483200;
  goto LAB_10b4830f8;
LAB_10b483200:
  param_2 = puVar7;
  FUN_10b4830ac(puVar9,puVar7,param_3,-param_4,param_5 & 1);
  param_1 = puVar9;
  puVar9 = puVar7 + 4;
LAB_10b48322c:
  param_5 = 0;
  param_4 = -param_4;
  goto LAB_10b4830f0;
}



/* Entry: 10b483368; end: 10b483433;  */

undefined8 FUN_10b483368(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = *param_3;
  if (uVar1 < uVar2) {
    if (uVar3 < uVar1) {
      *param_1 = uVar3;
      *param_3 = uVar2;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = uVar4;
    }
    else {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar4;
      if (*param_3 < uVar2) {
        *param_2 = *param_3;
        *param_3 = uVar2;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_3 + 2) = uVar4;
      }
    }
  }
  else {
    if (uVar1 <= uVar3) {
      return 0;
    }
    *param_2 = uVar3;
    *param_3 = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = uVar4;
    uVar1 = *param_1;
    if (*param_2 < uVar1) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar4;
    }
  }
  return 1;
}



/* Entry: 10b483434; end: 10b48347b;  */

void FUN_10b483434(void)

{
  bool bVar1;
  uint *unaff_x21;
  uint *unaff_x22;
  
  func_0x00010b483e78();
  FUN_10b483368();
  bVar1 = *unaff_x21 <= *unaff_x22;
  if (((!bVar1) && (func_0x00010b483dd4(), !bVar1)) && (func_0x00010b483dac(), !bVar1)) {
    func_0x00010b483e20();
  }
  return;
}



/* Entry: 10b48347c; end: 10b4834ef;  */

void FUN_10b48347c(void)

{
  undefined1 in_CY;
  bool bVar1;
  undefined4 *in_x4;
  uint extraout_w8;
  undefined8 uVar2;
  undefined4 extraout_w9;
  uint *unaff_x21;
  uint *unaff_x22;
  
  func_0x00010b483e78();
  FUN_10b483434();
  func_0x00010b483e8c(*in_x4);
  if (!(bool)in_CY) {
    *unaff_x22 = extraout_w8;
    *in_x4 = extraout_w9;
    uVar2 = *(undefined8 *)(unaff_x22 + 2);
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(in_x4 + 2);
    *(undefined8 *)(in_x4 + 2) = uVar2;
    bVar1 = *unaff_x21 <= *unaff_x22;
    if (((!bVar1) && (func_0x00010b483dd4(), !bVar1)) && (func_0x00010b483dac(), !bVar1)) {
      func_0x00010b483e20();
    }
  }
  return;
}



/* Entry: 10b4834f0; end: 10b48377f;  */

void FUN_10b4834f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    puVar4 = param_1;
    while (puVar4 + 4 != param_2) {
      uVar1 = puVar4[4];
      uVar6 = *puVar4;
      if (uVar1 < uVar6) {
        uVar5 = *(undefined8 *)(puVar4 + 6);
        lVar2 = lVar3;
        do {
          lVar8 = lVar2;
          *(uint *)((long)param_1 + lVar8 + 0x10) = uVar6;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) = *(undefined8 *)((long)param_1 + lVar8 + 8)
          ;
          puVar7 = param_1;
          if (lVar8 == 0) goto LAB_10b483558;
          uVar6 = *(uint *)((long)param_1 + lVar8 + -0x10);
          lVar2 = lVar8 + -0x10;
        } while (uVar1 < uVar6);
        puVar7 = (uint *)((long)param_1 + lVar8);
LAB_10b483558:
        *puVar7 = uVar1;
        *(undefined8 *)(puVar7 + 2) = uVar5;
      }
      lVar3 = lVar3 + 0x10;
      puVar4 = puVar4 + 4;
    }
  }
  return;
}



/* Entry: 10b483780; end: 10b483907;  */

bool FUN_10b483780(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    if (param_2[-4] < uVar1) {
      *param_1 = param_2[-4];
      param_2[-4] = uVar1;
      uVar6 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar6;
      return true;
    }
    return true;
  case 3:
    FUN_10b483368(param_1,param_1 + 4,param_2 + -4,param_3);
    break;
  case 4:
    FUN_10b483434(param_1,param_1 + 4,param_1 + 8,param_2 + -4,param_3);
    break;
  case 5:
    FUN_10b48347c(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
    break;
  default:
    FUN_10b483368(param_1,param_1 + 4,param_1 + 8,param_3);
    lVar3 = 0;
    iVar4 = 0;
    puVar8 = param_1 + 0xc;
    puVar10 = param_1 + 8;
    while (puVar5 = puVar8, puVar5 != param_2) {
      uVar1 = *puVar5;
      uVar7 = *puVar10;
      if (uVar1 < uVar7) {
        uVar6 = *(undefined8 *)(puVar5 + 2);
        lVar2 = lVar3;
        do {
          lVar9 = lVar2;
          *(uint *)((long)param_1 + lVar9 + 0x30) = uVar7;
          *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x28);
          puVar8 = param_1;
          if (lVar9 == -0x20) goto LAB_10b4838a8;
          uVar7 = *(uint *)((long)param_1 + lVar9 + 0x10);
          lVar2 = lVar9 + -0x10;
        } while (uVar1 < uVar7);
        puVar8 = (uint *)((long)param_1 + lVar9 + 0x20);
LAB_10b4838a8:
        *puVar8 = uVar1;
        *(undefined8 *)(puVar8 + 2) = uVar6;
        iVar4 = iVar4 + 1;
        if (iVar4 == 8) {
          return puVar5 + 4 == param_2;
        }
      }
      lVar3 = lVar3 + 0x10;
      puVar10 = puVar5;
      puVar8 = puVar5 + 4;
    }
  }
  return true;
}



/* Entry: 10b483908; end: 10b483a17;  */

undefined4 *
FUN_10b483908(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 extraout_w8;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_w9;
  
  if (param_1 != param_2) {
    func_0x00010b4839b8(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; bVar1 = param_3 <= param_2, param_2 != param_3; param_2 = param_2 + 4) {
      func_0x00010b483e8c(*param_2);
      if (!bVar1) {
        *param_2 = extraout_w9;
        *param_1 = extraout_w8;
        uVar3 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar3;
        FUN_10b483a18(param_1,param_4,lVar2 >> 4,param_1);
      }
    }
    func_0x00010b483d9c();
    FUN_10b483af0();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 10b483a18; end: 10b483aef;  */

void FUN_10b483a18(long param_1,undefined8 param_2,long param_3,uint *param_4)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  
  if (1 < param_3) {
    uVar6 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar6) {
      lVar10 = (long)param_4 - param_1 >> 3;
      uVar1 = lVar10 + 1;
      puVar7 = (uint *)(param_1 + uVar1 * 0x10);
      uVar9 = lVar10 + 2;
      if ((long)uVar9 < param_3) {
        uVar3 = *puVar7;
        uVar4 = puVar7[4];
        uVar12 = uVar3;
        if (uVar3 <= uVar4) {
          uVar12 = uVar4;
        }
        puVar8 = puVar7 + 4;
        if (uVar4 <= uVar3) {
          puVar8 = puVar7;
          uVar9 = uVar1;
        }
      }
      else {
        uVar12 = *puVar7;
        puVar8 = puVar7;
        uVar9 = uVar1;
      }
      uVar3 = *param_4;
      if (uVar3 <= uVar12) {
        uVar11 = *(undefined8 *)(param_4 + 2);
        do {
          puVar7 = puVar8;
          *param_4 = uVar12;
          *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar7 + 2);
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          puVar2 = (uint *)(param_1 + uVar1 * 0x10);
          uVar9 = uVar9 * 2 + 2;
          if ((long)uVar9 < param_3) {
            uVar4 = *puVar2;
            uVar5 = puVar2[4];
            uVar12 = uVar4;
            if (uVar4 <= uVar5) {
              uVar12 = uVar5;
            }
            puVar8 = puVar2 + 4;
            if (uVar5 <= uVar4) {
              puVar8 = puVar2;
              uVar9 = uVar1;
            }
          }
          else {
            uVar12 = *puVar2;
            puVar8 = puVar2;
            uVar9 = uVar1;
          }
          param_4 = puVar7;
        } while (uVar3 <= uVar12);
        *puVar7 = uVar3;
        *(undefined8 *)(puVar7 + 2) = uVar11;
      }
    }
  }
  return;
}



/* Entry: 10b483af0; end: 10b483b3b;  */

void FUN_10b483af0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010b483e98();
  lVar1 = param_2 - param_1 >> 4;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    FUN_10b483b3c();
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 10b483b3c; end: 10b483bd3;  */

void FUN_10b483b3c(uint *param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (1 < param_4) {
    uVar7 = *param_1;
    uVar8 = *(undefined8 *)(param_1 + 2);
    puVar3 = param_1;
    FUN_10b483bd4(param_1,param_3,param_4);
    if (puVar3 != (uint *)(param_2 + -0x10)) {
      *puVar3 = *(uint *)(param_2 + -0x10);
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_2 + -8);
      *(uint *)(param_2 + -0x10) = uVar7;
      *(undefined8 *)(param_2 + -8) = uVar8;
      lVar4 = (long)puVar3 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar4) {
        uVar5 = lVar4 - 2U >> 1;
        uVar1 = *puVar3;
        uVar7 = param_1[uVar5 * 4];
        if (uVar7 < uVar1) {
          uVar8 = *(undefined8 *)(puVar3 + 2);
          puVar2 = param_1 + uVar5 * 4;
          do {
            puVar6 = puVar2;
            *puVar3 = uVar7;
            *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar6 + 2);
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1 >> 1;
            uVar7 = param_1[uVar5 * 4];
            puVar3 = puVar6;
            puVar2 = param_1 + uVar5 * 4;
          } while (uVar7 < uVar1);
          *puVar6 = uVar1;
          *(undefined8 *)(puVar6 + 2) = uVar8;
        }
      }
      return;
    }
    *puVar3 = uVar7;
    *(undefined8 *)(puVar3 + 2) = uVar8;
  }
  return;
}



/* Entry: 10b483bd4; end: 10b483cab;  */

uint * FUN_10b483bd4(uint *param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = 0;
  do {
    puVar1 = param_1 + uVar7 * 4 + 4;
    uVar3 = uVar7 << 1 | 1;
    uVar2 = uVar7 * 2 + 2;
    if ((long)uVar2 < param_3) {
      uVar5 = param_1[uVar7 * 4 + 8];
      uVar4 = param_1[uVar7 * 4 + 4];
      uVar8 = uVar4;
      if (uVar4 <= uVar5) {
        uVar8 = uVar5;
      }
      puVar6 = param_1 + uVar7 * 4 + 8;
      uVar7 = uVar2;
      if (uVar5 <= uVar4) {
        puVar6 = puVar1;
        uVar7 = uVar3;
      }
    }
    else {
      uVar8 = *puVar1;
      puVar6 = puVar1;
      uVar7 = uVar3;
    }
    *param_1 = uVar8;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar6 + 2);
    param_1 = puVar6;
  } while ((long)uVar7 <= (param_3 + -2) / 2);
  return puVar6;
}



/* Entry: 10b483cac; end: 10b483d8b;  */

void FUN_10b483cac(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long alStack_58 [3];
  
  plVar2 = alStack_58;
  func_0x00010564c19c();
  while (lVar1 = alStack_58[0], alStack_58[0] != 0) {
    func_0x00010b483e3c();
    if (plVar2 == (long *)0x0) {
      uVar3 = (ulong)((int)*param_1 + 1);
      plVar2 = param_1;
      func_0x000105689120(param_1,uVar3);
      if ((int)plVar2 != 0) {
        func_0x00010b483e3c();
        param_2 = uVar3;
      }
      plVar2 = param_1;
      func_0x000107c27d64(param_1,0x40);
      *(int *)(plVar2 + 1) = *(int *)(lVar1 + 8);
      lVar4 = param_1[3];
      plVar2[2] = (long)&PTR_FUN_110cea818;
      plVar2[3] = lVar4;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[6] = lVar4;
      *(int *)(plVar2 + 7) = 0;
      func_0x0001056891b0(param_1,param_2,plVar2);
      *(int *)param_1 = (int)*param_1 + 1;
    }
    param_2 = lVar1 + 0x10;
    FUN_10b47e570(plVar2 + 2);
    plVar2 = alStack_58;
    func_0x000107c27d54();
  }
  return;
}



/* Entry: 10b483d8c; end: 10b483ea3;  */

void FUN_10b483d8c(void)

{
  return;
}



/* Entry: 10b483ea4; end: 10b483f5b;  */

undefined * FUN_10b483ea4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383d540 & 1) == 0) {
    iVar2 = 0x1383d540;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_10b483f5c();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383d538 = uVar1;
      param_1 = 0x1383d540;
      ___cxa_guard_release();
    }
  }
  FUN_10b483f5c();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383d548);
  }
  return puVar3;
}



/* Entry: 10b483f5c; end: 10b483f6f;  */

undefined1  [16] FUN_10b483f5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_10e5b11ec;
  auVar1._0_8_ = &PTR_DAT_110ceb1b0;
  return auVar1;
}



/* Entry: 10b483f70; end: 10b483f9f;  */

undefined8 * FUN_10b483f70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceb220;
  param_1[1] = param_2;
  FUN_10b483fa0();
  return param_1;
}



/* Entry: 10b483fa0; end: 10b483fcf;  */

void FUN_10b483fa0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b483fd0; end: 10b484013;  */

long FUN_10b483fd0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b484014; end: 10b484017;  */

long FUN_10b484014(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b484018; end: 10b48402b;  */

void FUN_10b484018(void)

{
  FUN_10b483fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48402c; end: 10b484037;  */

undefined ** FUN_10b48402c(void)

{
  return &PTR_DAT_110ceb260;
}



/* Entry: 10b484038; end: 10b48408b;  */

void FUN_10b484038(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b48408c; end: 10b484247;  */

long * FUN_10b48408c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1c),param_2,param_3);
  }
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar3 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x40),plVar2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = &lStack_78;
      func_0x00010564c19c(plVar2);
      while (plVar5 = plVar2, lVar11 = lStack_78, lStack_78 != 0) {
        lVar6 = lStack_78 + 8;
        lVar9 = lStack_78 + 0x20;
        func_0x00010b4843cc();
        lVar7 = (long)*(char *)(lVar11 + 0x1f);
        if (lVar7 < 0) {
          lVar6 = *(long *)(lVar11 + 8);
          lVar7 = *(long *)(lVar11 + 0x10);
        }
        func_0x00010b4843c0(lVar6,lVar7);
        lVar6 = (long)*(char *)(lVar11 + 0x37);
        if (lVar6 < 0) {
          lVar9 = *(long *)(lVar11 + 0x20);
          lVar6 = *(long *)(lVar11 + 0x28);
        }
        func_0x00010b4843c0(lVar9,lVar6);
        plVar2 = &lStack_78;
        func_0x000107c27d54(plVar2);
        plVar3 = plVar5;
      }
    }
    else {
      plVar2 = &lStack_78;
      func_0x000105991b98(plVar2);
      puVar1 = apuStack_70[0];
      for (lVar11 = lStack_78 << 3; plVar5 = plVar2, lVar11 != 0; lVar11 = lVar11 + -8) {
        puVar10 = (undefined8 *)*puVar1;
        plVar2 = puVar10 + 3;
        func_0x00010b4843cc();
        lVar6 = (long)*(char *)((long)puVar10 + 0x17);
        puVar4 = puVar10;
        if (lVar6 < 0) {
          lVar6 = puVar10[1];
          puVar4 = (undefined8 *)*puVar10;
        }
        func_0x00010b4843c0(puVar4,lVar6);
        lVar6 = (long)*(char *)((long)puVar10 + 0x2f);
        if (lVar6 < 0) {
          plVar2 = (long *)puVar10[3];
          lVar6 = puVar10[4];
        }
        func_0x00010b4843c0(plVar2,lVar6);
        puVar1 = puVar1 + 1;
        plVar3 = plVar5;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar11 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      lVar11 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    func_0x0001053930c4(param_3,lVar6,lVar11,plVar3);
    plVar3 = param_3;
  }
  return plVar3;
}



/* Entry: 10b484248; end: 10b4842ff;  */

ulong FUN_10b484248(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long alStack_38 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar1 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar1,alStack_38[0] + 0x20);
    uVar3 = lVar1 + uVar3;
    func_0x000107c27d54(alStack_38);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x0001059918cc();
    uVar3 = uVar3 + lVar1 + 1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b484300; end: 10b4843b7;  */

void FUN_10b484300(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x000105992a88(uVar2,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    else {
      func_0x00010bce80a4();
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
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



/* Entry: 10b4843b8; end: 10b4843e3;  */

undefined8 * FUN_10b4843b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110ceb220;
  puVar1[1] = param_2;
  FUN_10b483fa0();
  return puVar1;
}



/* Entry: 10b4843e4; end: 10b484463;  */

undefined8 * FUN_10b4843e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb2d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = *(undefined1 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}



/* Entry: 10b484464; end: 10b484493;  */

long FUN_10b484464(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484494(param_1);
  return param_1;
}



/* Entry: 10b484494; end: 10b4844bb;  */

/* WARNING: Possible PIC construction at 0x00010b4844a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4844ac) */

void FUN_10b484494(long param_1)

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



/* Entry: 10b4844bc; end: 10b4844bf;  */

long FUN_10b4844bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484494(param_1);
  return param_1;
}



/* Entry: 10b4844c0; end: 10b4844d3;  */

void FUN_10b4844c0(void)

{
  FUN_10b484464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4844d4; end: 10b4844df;  */

undefined ** FUN_10b4844d4(void)

{
  return &PTR_DAT_110ceb310;
}



/* Entry: 10b4844e0; end: 10b48452b;  */

void FUN_10b4844e0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b48452c; end: 10b484667;  */

long * FUN_10b48452c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_1;
  if ((int)param_1[4] != 0) {
    plVar1 = param_1;
    func_0x00010b484860();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b484848();
    param_2 = plVar2;
  }
  puVar7 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b484594;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b484594:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f76ee94);
    plVar2 = param_3;
    func_0x00010b48483c(param_3,2);
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    func_0x00010b484860();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b484848();
  }
  puVar7 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b484624;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b484624;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f76eec3);
  param_2 = param_3;
  func_0x00010b48483c(param_3,4);
LAB_10b484624:
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



/* Entry: 10b484668; end: 10b48471b;  */

void FUN_10b484668(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4846a0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4846a0:
    iVar1 = 0;
    goto LAB_10b4846a4;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4846a4:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x24) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



/* Entry: 10b48471c; end: 10b48471f;  */

void FUN_10b48471c(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
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



/* Entry: 10b484720; end: 10b4847db;  */

void FUN_10b484720(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
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



/* Entry: 10b4847dc; end: 10b4847e3;  */

void FUN_10b4847dc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110ceb2d0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 10b4847e4; end: 10b48483b;  */

void FUN_10b4847e4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110ceb2d0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 10b48483c; end: 10b484873;  */

long * FUN_10b48483c(long *param_1,undefined8 param_2)

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



/* Entry: 10b484874; end: 10b4848ff;  */

undefined8 * FUN_10b484874(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb378;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b484ca4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b484900; end: 10b484933;  */

long FUN_10b484900(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484934(param_1);
  return param_1;
}



/* Entry: 10b484934; end: 10b484963;  */

void FUN_10b484934(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4855b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b484964; end: 10b484967;  */

long FUN_10b484964(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484934(param_1);
  return param_1;
}



/* Entry: 10b484968; end: 10b48497b;  */

void FUN_10b484968(void)

{
  FUN_10b484900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48497c; end: 10b484987;  */

undefined ** FUN_10b48497c(void)

{
  return &PTR_DAT_110ceb3b8;
}



/* Entry: 10b484988; end: 10b4849db;  */

void FUN_10b484988(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b485680(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b4849dc; end: 10b484ae3;  */

long * FUN_10b4849dc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b484a6c;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b484a6c;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f76eee7);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,plVar1);
  plVar1 = plVar3;
LAB_10b484a6c:
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x000107c280a8(plVar1,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar8 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar10;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar8);
  }
  _memcpy(plVar1,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar6);
}



/* Entry: 10b484ae4; end: 10b484b8b;  */

long FUN_10b484ae4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b484b1c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b484b1c:
    lVar3 = 0;
    goto LAB_10b484b20;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b484b20:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b484b8c();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
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



/* Entry: 10b484b8c; end: 10b484bb7;  */

long FUN_10b484b8c(long param_1)

{
  FUN_10b485afc();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b484bb8; end: 10b484bbb;  */

void FUN_10b484bb8(long param_1,long param_2)

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
      FUN_10b484ca4(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b485cd8();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b484bbc; end: 10b484c9b;  */

void FUN_10b484bbc(long param_1,long param_2)

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
      FUN_10b484ca4(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b485cd8();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b484c9c; end: 10b484ca3;  */

void FUN_10b484c9c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110ceb378;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b484ca4; end: 10b484ce7;  */

undefined8 * FUN_10b484ca4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xa8;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0xa8);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110ceb570;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x00010598fd00(puVar2 + 3,param_1,param_2 + 0x18);
  func_0x0001088f25c8(puVar2 + 6,param_1,param_2 + 0x30);
  *(undefined4 *)(puVar2 + 8) = 0;
  func_0x0001088f25c8(puVar2 + 9,param_1,param_2 + 0x48);
  *(undefined4 *)(puVar2 + 0xb) = 0;
  lVar3 = param_2 + 0x60;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[0xc] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10b486030(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  puVar2[0xd] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4861a0();
  }
  puVar2[0xe] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4861a0();
  }
  puVar2[0xf] = puVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4861a0();
  }
  puVar2[0x10] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b486098(param_1,*(undefined8 *)(param_2 + 0x88));
  }
  puVar2[0x11] = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  puVar2[0x13] = uVar6;
  puVar2[0x12] = uVar5;
  return puVar2;
}



/* Entry: 10b484ce8; end: 10b484cf3;  */

void FUN_10b484ce8(void)

{
  return;
}



/* Entry: 10b484cf4; end: 10b484d23;  */

long FUN_10b484cf4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484d24(param_1);
  return param_1;
}



/* Entry: 10b484d24; end: 10b484d53;  */

void FUN_10b484d24(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b48a354();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b484d54; end: 10b484d57;  */

long FUN_10b484d54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b484d24(param_1);
  return param_1;
}



/* Entry: 10b484d58; end: 10b484d6b;  */

void FUN_10b484d58(void)

{
  FUN_10b484cf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


