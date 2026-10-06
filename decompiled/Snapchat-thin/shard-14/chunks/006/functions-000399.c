/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b512d74; end: 10b512d97;  */

undefined ** FUN_10b512d74(void)

{
  return &PTR_DAT_110cf9320;
}



/* Entry: 10b512d98; end: 10b512eab;  */

long * FUN_10b512d98(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,(int)param_1[2],param_2);
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b513010();
    plVar1 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b513004();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[3] != 0) {
    func_0x00010b513010();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x00010b513004();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x00010b513010();
    plVar1 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b513004();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x1d) == '\x01') {
    func_0x00010b513010();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x00010b513004();
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



/* Entry: 10b512eac; end: 10b512fb3;  */

long FUN_10b512eac(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  lVar2 = uVar1 + (ulong)*(byte *)(param_1 + 0x1c) * 2 + (ulong)*(byte *)(param_1 + 0x1d) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b512fb4; end: 10b513003;  */

void FUN_10b512fb4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf92e0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x16) = 0;
  return;
}



/* Entry: 10b513004; end: 10b51302b;  */

void FUN_10b513004(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b51302c; end: 10b513073;  */

void FUN_10b51302c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b513074; end: 10b5131ab;  */

long * FUN_10b513074(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = puVar4[1];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)*puVar4;
      goto LAB_10b5130b8;
    }
  }
  else if (*(char *)((long)puVar4 + 0x17) != '\0') {
LAB_10b5130b8:
    func_0x00010b5154dc(puVar4,lVar2,param_3,&UNK_10f77682f);
    param_2 = param_3;
    func_0x00010b515418(param_3,1);
  }
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    if (puVar4[1] != 0) {
      puVar4 = (undefined8 *)*puVar4;
      goto LAB_10b5130fc;
    }
  }
  else if (*(char *)((long)puVar4 + 0x17) != '\0') {
LAB_10b5130fc:
    func_0x00010b5154dc(puVar4);
    param_2 = param_3;
    func_0x00010b515418(param_3,2);
  }
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    if (puVar4[1] == 0) goto LAB_10b51315c;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if (*(char *)((long)puVar4 + 0x17) == '\0') goto LAB_10b51315c;
  func_0x00010b5154dc(puVar4);
  param_2 = param_3;
  func_0x00010b515418(param_3,3);
LAB_10b51315c:
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44();
    plVar5 = param_2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  func_0x00010b5153d0();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar3);
  }
  _memcpy(plVar1,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)plVar5);
}



/* Entry: 10b5131ac; end: 10b51327b;  */

long FUN_10b5131ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5131e4;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5131e4:
    lVar3 = 0;
    goto LAB_10b5131e8;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5131e8:
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
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51544c();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b51327c; end: 10b51329f;  */

undefined8 FUN_10b51327c(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b5132a0; end: 10b5132a3;  */

undefined8 FUN_10b5132a0(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b5132a4; end: 10b5132b7;  */

void FUN_10b5132a4(void)

{
  FUN_10b51327c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5132b8; end: 10b5132d7;  */

undefined ** FUN_10b5132b8(void)

{
  return &PTR_DAT_110cf9840;
}



/* Entry: 10b5132d8; end: 10b513347;  */

long * FUN_10b5132d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((int)param_1[2] != 0) {
    func_0x00010b515278();
    func_0x00010b51533c();
    func_0x00010b515330();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5154e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b513348; end: 10b5133db;  */

long FUN_10b513348(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 10b5133dc; end: 10b5133ff;  */

undefined8 FUN_10b5133dc(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b513400; end: 10b513403;  */

undefined8 FUN_10b513400(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b513404; end: 10b513417;  */

void FUN_10b513404(void)

{
  FUN_10b5133dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b513418; end: 10b513437;  */

undefined ** FUN_10b513418(void)

{
  return &PTR_DAT_110cf9890;
}



/* Entry: 10b513438; end: 10b5134bb;  */

long * FUN_10b513438(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((int)param_1[2] != 0) {
    func_0x00010b515278();
    func_0x00010b51533c();
    func_0x00010b515330();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b515278();
    func_0x00010b5153b8();
    param_4 = (long *)(ulong)(uint)(unaff_w21 << 1 ^ unaff_w21 >> 0x1f);
    func_0x000107c280a8(param_4,param_1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b5134bc; end: 10b5135a7;  */

long FUN_10b5134bc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  lVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (iVar1 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(iVar1 << 1 ^ iVar1 >> 0x1f) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5135a8; end: 10b5135cb;  */

undefined8 FUN_10b5135a8(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b5135cc; end: 10b5135cf;  */

undefined8 FUN_10b5135cc(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b5135d0; end: 10b5135e3;  */

void FUN_10b5135d0(void)

{
  FUN_10b5135a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5135e4; end: 10b513603;  */

undefined ** FUN_10b5135e4(void)

{
  return &PTR_DAT_110cf98e8;
}



/* Entry: 10b513604; end: 10b5136db;  */

long * FUN_10b513604(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b515278();
    func_0x00010b5153c8();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b515278();
    func_0x00010b5153e4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
    func_0x00010b515278();
    func_0x00010b515458();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    func_0x00010b515278();
    func_0x00010b5154d4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b5136dc; end: 10b51371f;  */

long FUN_10b5136dc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar2 = ((ulong)(ushort)((ushort)(byte)uVar1 + (ushort)(byte)((uint)uVar1 >> 8) +
                           (ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)((uint)uVar1 >> 0x18)
                          ) & 0x7f) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b513720; end: 10b513733;  */

void FUN_10b513720(void)

{
  func_0x000107c3045c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b513734; end: 10b51373f;  */

undefined ** FUN_10b513734(void)

{
  return &PTR_DAT_110cf9950;
}



/* Entry: 10b513740; end: 10b51379b;  */

void FUN_10b513740(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5135f0(*(undefined8 *)(param_1 + 0x90));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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



/* Entry: 10b51379c; end: 10b513a9f;  */

long * FUN_10b51379c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar6;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b515304();
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 != 0) {
    func_0x00010b515278();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar6 = extraout_x8;
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b5152bc();
        uVar6 = extraout_x8_00;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    func_0x00010b515278();
    func_0x00010b5153e4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    func_0x00010b515278();
    func_0x00010b5154d4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    func_0x00010b515278();
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,param_1);
    func_0x00010b515284();
    param_4 = plVar3;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x40);
  if (uVar1 != 0) {
    func_0x00010b515278();
    param_4 = (long *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x4a;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar6 = extraout_x8_01;
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b5152bc();
        uVar6 = extraout_x8_02;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0xa1) == '\x01') {
    func_0x00010b515278();
    plVar4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b515284();
    param_4 = plVar4;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (uVar1 != 0) {
    func_0x00010b515278();
    param_4 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x5a;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar6 = extraout_x8_03;
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b5152bc();
        uVar6 = extraout_x8_04;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x70);
  if (0 < (int)uVar1) {
    func_0x00010b515278();
    param_4 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x62;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar6 = extraout_x8_05;
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b5152bc();
        uVar6 = extraout_x8_06;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x88);
  if (0 < (int)uVar1) {
    func_0x00010b515278();
    param_4 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x6a;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar6 = extraout_x8_07;
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b5152bc();
        uVar6 = extraout_x8_08;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x14);
    plVar4 = (long *)0xe;
    func_0x00010b515378();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0xa2) == '\x01') {
    func_0x00010b515278();
    plVar3 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar4);
    func_0x00010b515284();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0xa3) == '\x01') {
    func_0x00010b515278();
    param_4 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar3);
    func_0x00010b515284();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8_09 + 8);
      param_3 = *(ulong *)(extraout_x8_09 + 0x10);
    }
    else {
      lVar5 = extraout_x8_09 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar1 = iVar7 - iVar8;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
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



/* Entry: 10b513aa0; end: 10b513cc7;  */

void FUN_10b513aa0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar6;
  int extraout_w11;
  int extraout_w11_00;
  int iVar7;
  long extraout_x14;
  long extraout_x14_00;
  int iVar8;
  
  lVar5 = 0;
  lVar4 = 0;
  for (lVar6 = (long)*(int *)(param_1 + 0x18); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar5 = lVar5 + 0x100000000;
  }
  iVar3 = (int)lVar4;
  iVar7 = 0;
  if (lVar4 != 0) {
    iVar7 = iVar3 + ((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = 0;
  *(int *)(param_1 + 0x28) = iVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      func_0x00010b5154a4();
      lVar4 = extraout_x14 + extraout_x9;
      iVar7 = extraout_w11;
    } while (extraout_x8 != 1);
  }
  iVar3 = (int)lVar4;
  iVar7 = iVar3 + iVar7;
  if (lVar4 != 0) {
    iVar7 = iVar7 + ((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = 0;
  *(int *)(param_1 + 0x40) = iVar3;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      func_0x00010b5154a4();
      lVar4 = extraout_x14_00 + extraout_x8_00;
      iVar7 = extraout_w11_00;
    } while (extraout_x9_00 != 1);
  }
  iVar3 = (int)lVar4;
  iVar7 = iVar3 + iVar7;
  if (lVar4 != 0) {
    iVar7 = iVar7 + ((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  lVar4 = param_1 + 0x60;
  FUN_10b4d3e0c();
  iVar8 = (int)lVar4;
  *(int *)(param_1 + 0x70) = iVar8;
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = ((int)LZCOUNT((long)iVar8) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = param_1 + 0x78;
  FUN_10b4d3e0c();
  iVar2 = (int)lVar4;
  *(int *)(param_1 + 0x88) = iVar2;
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar8 + iVar7 + iVar3 + iVar2 + iVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5136dc(*(undefined8 *)(param_1 + 0x90));
    func_0x00010b515254();
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x98)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x9c)) * -9 + 0x1a0U >> 6);
  }
  iVar7 = iVar1 + (uint)*(byte *)(param_1 + 0xa0) * 2 + (uint)*(byte *)(param_1 + 0xa1) * 2 +
          (uint)*(byte *)(param_1 + 0xa2) * 2;
  iVar3 = iVar7 + 3;
  if (*(char *)(param_1 + 0xa3) == '\0') {
    iVar3 = iVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51544c();
    lVar4 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar4 = *(long *)(extraout_x9_01 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b513cc8; end: 10b513ccb;  */

void FUN_10b513cc8(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000107c39d58();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c282d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x000107c282d0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x000107c282d0(unaff_x21 + 0x60,unaff_x20 + 0x60);
  puVar1 = (ulong *)(unaff_x21 + 0x78);
  func_0x000107c282d0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x90);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b51513c();
      *(ulong **)(unaff_x21 + 0x90) = puVar2;
      puVar1 = puVar2;
    }
    else {
      func_0x00010b513558();
    }
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)(unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa0) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa1) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa2) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa2) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa3) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa3) = 1;
  }
  func_0x000107c39d44();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5153ec();
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



/* Entry: 10b513ccc; end: 10b513dcb;  */

void FUN_10b513ccc(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000107c39d58();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c282d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x000107c282d0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x000107c282d0(unaff_x21 + 0x60,unaff_x20 + 0x60);
  puVar1 = (ulong *)(unaff_x21 + 0x78);
  func_0x000107c282d0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x90);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b51513c();
      *(ulong **)(unaff_x21 + 0x90) = puVar2;
      puVar1 = puVar2;
    }
    else {
      func_0x00010b513558();
    }
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)(unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa0) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa1) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa2) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa2) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa3) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa3) = 1;
  }
  func_0x000107c39d44();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5153ec();
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



/* Entry: 10b513dcc; end: 10b513dcf;  */

undefined8 FUN_10b513dcc(undefined8 param_1)

{
  func_0x000100650c64();
  return param_1;
}



/* Entry: 10b513dd0; end: 10b513de3;  */

void FUN_10b513dd0(void)

{
  func_0x000107c3046c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b513de4; end: 10b513def;  */

undefined ** FUN_10b513de4(void)

{
  return &PTR_DAT_110cf99a0;
}



/* Entry: 10b513df0; end: 10b513ed3;  */

long * FUN_10b513df0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  int iVar4;
  int iVar5;
  
  func_0x00010b515304();
  if ((int)param_1[2] != 0) {
    func_0x00010b515278();
    func_0x00010b51533c();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b515278();
    func_0x00010b5153b8();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b515278();
    func_0x00010b515458();
    func_0x00010b515284();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b515278();
    plVar3 = *(long **)(unaff_x20 + 0x18);
    func_0x00010b5154d4();
    func_0x000107c280ac(plVar3,param_1);
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b515278();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010b515284();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b513ed4; end: 10b513f7b;  */

long FUN_10b513ed4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w11;
  
  func_0x00010b515460();
  lVar1 = extraout_x8;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + extraout_x8;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9) >> 6)
    ;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9) >> 6)
    ;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b513f7c; end: 10b513fbf;  */

void FUN_10b513f7c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c30470(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b513fc0; end: 10b514043;  */

long * FUN_10b513fc0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((int)param_1[4] != 0) {
    func_0x00010b515278();
    func_0x00010b5153c8();
    func_0x00010b515330();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (long *)0x2;
    func_0x00010b515378();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b514044; end: 10b5140c3;  */

void FUN_10b514044(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b513ed4();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010b5154bc();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51544c();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5140c4; end: 10b5140d3;  */

long FUN_10b5140c4(long param_1)

{
  func_0x000100650c64();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 10b5140d4; end: 10b514117;  */

void FUN_10b5140d4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b514118; end: 10b514227;  */

long * FUN_10b514118(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((int)param_1[5] != 0) {
    func_0x00010b515278();
    param_2 = param_1;
    func_0x00010b5153c8();
    func_0x00010b515330();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b515238();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x00010b515378(2);
    func_0x00010b515440();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5153d0();
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



/* Entry: 10b514228; end: 10b514253;  */

long FUN_10b514228(long param_1)

{
  func_0x000107c39d2c();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b514254; end: 10b514257;  */

long FUN_10b514254(long param_1)

{
  func_0x000107c39d2c();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b514258; end: 10b51426b;  */

void FUN_10b514258(void)

{
  FUN_10b514228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51426c; end: 10b51428f;  */

undefined ** FUN_10b51426c(void)

{
  return &PTR_DAT_110cf9ae8;
}



/* Entry: 10b514290; end: 10b514343;  */

long * FUN_10b514290(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b515304();
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b515278();
    func_0x00010b5153c8();
    func_0x00010b515330();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0) {
    func_0x00010b515278();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x12;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    func_0x00010b5154f0();
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar4 = extraout_x8;
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b5152bc();
        uVar4 = extraout_x8_00;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar3 = extraout_x8_01 + 8;
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
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b514344; end: 10b5143ef;  */

long FUN_10b514344(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  lVar2 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar1 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar2;
    lVar1 = lVar1 + 0x100000000;
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5143f0; end: 10b514427;  */

void FUN_10b5143f0(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c39d68();
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b515408();
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



/* Entry: 10b514428; end: 10b514453;  */

void FUN_10b514428(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b514454; end: 10b514477;  */

undefined8 FUN_10b514454(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b514478; end: 10b51447b;  */

undefined8 FUN_10b514478(undefined8 param_1)

{
  func_0x000107c39d2c();
  return param_1;
}



/* Entry: 10b51447c; end: 10b51448f;  */

void FUN_10b51447c(void)

{
  FUN_10b514454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b514490; end: 10b5144b3;  */

undefined ** FUN_10b514490(void)

{
  return &PTR_DAT_110cf9b50;
}



/* Entry: 10b5144b4; end: 10b51453f;  */

long * FUN_10b5144b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b515304();
  if ((int)param_1[3] != 0) {
    func_0x00010b515278();
    func_0x00010b5153c8();
    func_0x00010b515330();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b515278();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,param_1);
    param_4 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b514540; end: 10b51459f;  */

long FUN_10b514540(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5145a0; end: 10b5145b3;  */

void FUN_10b5145a0(void)

{
  func_0x000107c30488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5145b4; end: 10b5145d7;  */

undefined ** FUN_10b5145b4(void)

{
  return &PTR_DAT_110cf9bb0;
}



/* Entry: 10b5145d8; end: 10b51466f;  */

long * FUN_10b5145d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b515304();
  if ((int)param_1[2] != 0) {
    func_0x00010b515278();
    func_0x00010b51533c();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b515278();
    func_0x00010b5153b8();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b515278();
    func_0x00010b515458();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b514670; end: 10b5146f3;  */

long FUN_10b514670(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w11;
  
  func_0x00010b515460();
  lVar1 = extraout_x8;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9) >> 6) +
            extraout_x8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5146f4; end: 10b5147eb;  */

long * FUN_10b5146f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b515304();
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b515278();
    func_0x00010b5153c8();
    func_0x00010b515330();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b515278();
    func_0x00010b5153e4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    func_0x00010b515278();
    func_0x00010b515458();
    func_0x00010b515284();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0) {
    func_0x00010b515278();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x22;
    while (0x7f < uVar1) {
      func_0x00010b5152d0();
    }
    func_0x00010b5154f0();
    do {
      func_0x00010b515278();
      func_0x00010b515434();
      uVar4 = extraout_x8;
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b5152bc();
        uVar4 = extraout_x8_00;
      }
      func_0x00010b51534c();
    } while (!bVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar3 = extraout_x8_01 + 8;
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
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5147ec; end: 10b5148cf;  */

long FUN_10b5147ec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x2c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5148d0; end: 10b5148e3;  */

void FUN_10b5148d0(void)

{
  func_0x000107c30494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5148e4; end: 10b5148ef;  */

undefined ** FUN_10b5148e4(void)

{
  return &PTR_DAT_110cf9c88;
}



/* Entry: 10b5148f0; end: 10b514987;  */

void FUN_10b5148f0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b51449c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5145c0(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
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



/* Entry: 10b514988; end: 10b514c3f;  */

long * FUN_10b514988(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b515304();
  if ((int)param_1[0xe] != 0) {
    func_0x00010b515278();
    param_2 = param_1;
    func_0x00010b5153c8();
    func_0x00010b515284();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x00010b515278();
    param_2 = param_1;
    func_0x00010b5153e4();
    func_0x00010b515284();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (iVar5 != 0) {
    func_0x00010b515238();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x3;
    func_0x00010b515378();
    func_0x00010b515440();
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x00010b515238();
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x4;
    func_0x00010b515378();
    func_0x00010b515440();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x60);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x1c);
    param_1 = (long *)0x5;
    func_0x00010b515378();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x1c);
    param_1 = (long *)0x6;
    func_0x00010b515378();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x50);
  while (iVar5 != 0) {
    func_0x00010b515238();
    param_3 = (ulong)*(uint *)(param_2 + 6);
    param_1 = (long *)0x7;
    func_0x00010b515378();
    func_0x00010b515440();
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    func_0x00010b515278();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,param_1);
    func_0x00010b515284();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    func_0x00010b515278();
    plVar3 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b515284();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    func_0x00010b515278();
    param_4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b515284();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
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



/* Entry: 10b514c40; end: 10b514c43;  */

void FUN_10b514c40(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x000107c39d58();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c304a0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c304a4(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x000107c304a8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5151ac();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10b514428();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107c304c0();
        *(ulong **)(unaff_x21 + 0x68) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x000107c30484();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  func_0x000107c39d44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5153ec();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b514c44; end: 10b514d43;  */

void FUN_10b514c44(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x000107c39d58();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c304a0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c304a4(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x000107c304a8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5151ac();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10b514428();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107c304c0();
        *(ulong **)(unaff_x21 + 0x68) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x000107c30484();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  func_0x000107c39d44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5153ec();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b514d44; end: 10b514d47;  */

undefined8 FUN_10b514d44(undefined8 param_1)

{
  func_0x000100650c64();
  func_0x000100650c98(param_1);
  return param_1;
}



/* Entry: 10b514d48; end: 10b514d5b;  */

void FUN_10b514d48(void)

{
  func_0x000107c304b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b514d5c; end: 10b514f93;  */

long * FUN_10b514d5c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b515304();
  if ((int)param_1[0xe] != 0) {
    param_1 = unaff_x19;
    func_0x000107c282e4();
    param_3 = param_4;
    param_4 = param_1;
  }
  uVar2 = (ulong)*(uint *)(unaff_x20 + 0x74);
  if (*(uint *)(unaff_x20 + 0x74) != 0) {
    func_0x00010b5154e4();
    param_4 = param_1;
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x00010b515238();
    param_3 = (long *)(ulong)*(uint *)(uVar2 + 0x2c);
    func_0x00010b515378(3);
    func_0x00010b515440();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  while (iVar4 != 0) {
    func_0x00010b515238();
    param_3 = (long *)(ulong)*(uint *)(uVar2 + 0x18);
    func_0x00010b515378(4);
    func_0x00010b515440();
  }
  iVar4 = *(int *)(unaff_x20 + 0x50);
  while (iVar4 != 0) {
    func_0x00010b515238();
    param_3 = (long *)(ulong)*(uint *)(uVar2 + 0x18);
    func_0x00010b515378(5);
    func_0x00010b515440();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    param_4 = (long *)0x7;
    func_0x00010b515378();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    param_4 = (long *)0x8;
    func_0x00010b515378();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5153d0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b514f94; end: 10b514fc7;  */

void FUN_10b514f94(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010064e728();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010064e810(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010064e9c8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x00010064e9d8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010064ea0c();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x000107c30464();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010064eb74();
        *(ulong **)(unaff_x21 + 0x68) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x000107c3049c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  func_0x00010064e9e8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000107c39d48();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b514fc8; end: 10b51513b;  */

void FUN_10b514fc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c39d54();
  }
  else {
    func_0x00010b5153a0();
  }
  *puVar1 = &PTR_FUN_110cf93f0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b51513c; end: 10b5151ab;  */

undefined8 * FUN_10b51513c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf9440;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b513558();
  return puVar1;
}



/* Entry: 10b5151ac; end: 10b515217;  */

undefined8 * FUN_10b5151ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c39d54();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf95d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10b514428();
  return puVar1;
}



/* Entry: 10b515218; end: 10b515507;  */

void FUN_10b515218(void)

{
  return;
}



/* Entry: 10b515508; end: 10b51551b;  */

void FUN_10b515508(void)

{
  func_0x000107c304c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51551c; end: 10b5155fb;  */

byte * FUN_10b51551c(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar7 != 0) {
    pbVar2 = param_1;
    FUN_10b515738();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    piVar8 = *(int **)(param_1 + 0x18);
    piVar1 = piVar8 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b515738();
      uVar5 = (ulong)*piVar8;
      pbVar4 = pbVar2;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_2;
      }
      piVar8 = piVar8 + 1;
      *pbVar4 = (byte)uVar5;
    } while (piVar8 < piVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        pbVar4 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar4);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 10b5155fc; end: 10b51568f;  */

long FUN_10b5155fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b515690; end: 10b5156db;  */

void FUN_10b515690(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5156dc; end: 10b5156e3;  */

void FUN_10b5156dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_DAT_110cf9e98;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5156e4; end: 10b515737;  */

void FUN_10b5156e4(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110cf9e98;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b515738; end: 10b51576b;  */

ulong * FUN_10b515738(void)

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



/* Entry: 10b51576c; end: 10b51578f;  */

undefined8 FUN_10b51576c(undefined8 param_1)

{
  func_0x000107c39d80();
  return param_1;
}



/* Entry: 10b515790; end: 10b515793;  */

undefined8 FUN_10b515790(undefined8 param_1)

{
  func_0x000107c39d80();
  return param_1;
}



/* Entry: 10b515794; end: 10b5157a7;  */

void FUN_10b515794(void)

{
  FUN_10b51576c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5157a8; end: 10b5157c7;  */

undefined ** FUN_10b5157a8(void)

{
  return &PTR_DAT_110cfa088;
}



/* Entry: 10b5157c8; end: 10b515833;  */

long * FUN_10b5157c8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b51616c();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b516154();
    param_4 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b516160();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b516234();
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



/* Entry: 10b515834; end: 10b515883;  */

long FUN_10b515834(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b515884; end: 10b5158b7;  */

long FUN_10b515884(long param_1)

{
  func_0x000107c39d80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51576c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5158b8; end: 10b5158bb;  */

long FUN_10b5158b8(long param_1)

{
  func_0x000107c39d80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51576c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5158bc; end: 10b5158cf;  */

void FUN_10b5158bc(void)

{
  FUN_10b515884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5158d0; end: 10b5158db;  */

undefined ** FUN_10b5158d0(void)

{
  return &PTR_DAT_110cfa0f8;
}



/* Entry: 10b5158dc; end: 10b51591f;  */

void FUN_10b5158dc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39d8c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5157b4(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b515920; end: 10b5159ef;  */

long * FUN_10b515920(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b51616c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_1 = (long *)0x1;
    func_0x00010b516204();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b516154();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b516160();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b516154();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b516160();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b516154();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b5161e4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b516234();
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



/* Entry: 10b5159f0; end: 10b515aa7;  */

void FUN_10b5159f0(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x000107c39d8c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b515834();
    func_0x00010b51617c();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b515aa8; end: 10b515b37;  */

void FUN_10b515aa8(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b516220();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b516068();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x00010b515744(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b51620c();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b515b38; end: 10b515b63;  */

long FUN_10b515b38(long param_1)

{
  func_0x000107c39d80();
  FUN_10b515f2c(param_1 + 0x10);
  return param_1;
}


