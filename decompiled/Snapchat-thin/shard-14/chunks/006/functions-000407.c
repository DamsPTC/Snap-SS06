/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b526944; end: 10b52699f;  */

ulong FUN_10b526944(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(iVar1 << 1 ^ iVar1 >> 0x1f) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b5269a0; end: 10b5269cb;  */

long FUN_10b5269a0(long param_1)

{
  func_0x00010b526f94();
  FUN_10b526c90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5269cc; end: 10b5269cf;  */

long FUN_10b5269cc(long param_1)

{
  func_0x00010b526f94();
  FUN_10b526c90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5269d0; end: 10b5269e3;  */

void FUN_10b5269d0(void)

{
  FUN_10b5269a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5269e4; end: 10b5269ef;  */

undefined ** FUN_10b5269e4(void)

{
  return &PTR_DAT_110cfdc88;
}



/* Entry: 10b5269f0; end: 10b526ba3;  */

long * FUN_10b5269f0(long param_1,long *param_2,long *param_3)

{
  char in_NG;
  char in_OV;
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *unaff_x23;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  plVar1 = param_2;
  for (uVar7 = (ulong)(*(uint *)(param_1 + 0x18) &
                      ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    func_0x00010b526f54();
    puVar2 = unaff_x23;
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x23[1];
      puVar2 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b526f7c(puVar2);
    lVar6 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar6 < 0) {
      lVar6 = unaff_x23[1];
      in_OV = SBORROW8(lVar6,0x7f);
      in_NG = lVar6 + -0x7f < 0;
      if (lVar6 < 0x80) goto LAB_10b526a64;
LAB_10b526a98:
      param_2 = (long *)0x15;
      plVar1 = param_3;
      func_0x00010b526f9c();
    }
    else {
LAB_10b526a64:
      func_0x00010b526fc0();
      if (in_NG != in_OV) goto LAB_10b526a98;
      *(undefined2 *)plVar1 = 0x1aa;
      *(char *)((long)plVar1 + 2) = (char)lVar6;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010b526f40();
      plVar1 = (long *)((long)plVar1 + lVar6);
    }
  }
  uVar7 = (ulong)(*(uint *)(param_1 + 0x30) & ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)
                 );
  do {
    if (uVar7 == 0) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        return plVar1;
      }
      uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
      uVar7 = (ulong)*(char *)(uVar3 + 0x1f);
      if ((long)uVar7 < 0) {
        lVar6 = *(long *)(uVar3 + 8);
        uVar7 = *(ulong *)(uVar3 + 0x10);
      }
      else {
        lVar6 = uVar3 + 8;
      }
      if ((long)(int)uVar7 <= *param_3 - (long)plVar1) {
        _memcpy(plVar1,lVar6,uVar7 & 0xffffffff);
        return (long *)((long)plVar1 + (long)(int)uVar7);
      }
      while( true ) {
        iVar5 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar4 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        lVar6 = (long)plVar1 + (long)iVar5;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar4);
    }
    func_0x00010b526f54();
    puVar2 = unaff_x23;
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x23[1];
      puVar2 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b526f7c(puVar2);
    lVar6 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar6 < 0) {
      lVar6 = unaff_x23[1];
      in_OV = SBORROW8(lVar6,0x7f);
      in_NG = lVar6 + -0x7f < 0;
      if (lVar6 < 0x80) goto LAB_10b526af8;
LAB_10b526b2c:
      param_2 = (long *)0x16;
      plVar1 = param_3;
      func_0x00010b526f9c();
    }
    else {
LAB_10b526af8:
      func_0x00010b526fc0();
      if (in_NG != in_OV) goto LAB_10b526b2c;
      *(undefined2 *)plVar1 = 0x1b2;
      *(char *)((long)plVar1 + 2) = (char)lVar6;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010b526f40();
      plVar1 = (long *)((long)plVar1 + lVar6);
    }
    uVar7 = uVar7 - 1;
  } while( true );
}



/* Entry: 10b526ba4; end: 10b526c43;  */

long FUN_10b526ba4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar3 = (ulong)uVar1 << 1;
  lVar2 = param_1;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    func_0x00010b526f1c();
    lVar3 = lVar2 + lVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar3 = lVar3 + (ulong)uVar1 * 2;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    func_0x00010b526f1c();
    lVar3 = lVar2 + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b526c44; end: 10b526c5f;  */

void FUN_10b526c44(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b526c60; end: 10b526c8f;  */

long * FUN_10b526c60(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b526c90; end: 10b526d9b;  */

/* WARNING: Possible PIC construction at 0x00010b526ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b526ca8) */

long * FUN_10b526c90(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10b526d9c; end: 10b526e0b;  */

undefined8 * FUN_10b526d9c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfdb78;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b5267f4();
  return puVar1;
}



/* Entry: 10b526e0c; end: 10b526e9b;  */

undefined8 * FUN_10b526e0c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b526fb4();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cfdb28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b526f88();
  }
  func_0x00010598fd00(puVar1 + 2,param_1,param_2 + 0x10);
  func_0x00010598fd00(puVar1 + 5,param_1,param_2 + 0x28);
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10b526e9c; end: 10b526edf;  */

undefined8 * FUN_10b526e9c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  if (param_1 == 0) {
    __Znwm(0x2b8);
  }
  else {
    FUN_10b4d80e0(param_1,0x2b8);
  }
  func_0x00010b534b64();
  *unaff_x19 = &PTR_FUN_110cfefe8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5341ac();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  func_0x00010598fd00(unaff_x19 + 3);
  func_0x000108c6ef28(unaff_x19 + 6);
  unaff_x19[9] = 0;
  unaff_x19[10] = 0;
  unaff_x19[0xb] = unaff_x21;
  FUN_10b531000(unaff_x19 + 9,unaff_x20 + 0x48);
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  unaff_x19[0xe] = unaff_x21;
  func_0x00010b531010(unaff_x19 + 0xc,unaff_x20 + 0x60);
  func_0x000108c6ef28(unaff_x19 + 0xf);
  unaff_x19[0x12] = 0;
  unaff_x19[0x13] = 0;
  unaff_x19[0x14] = unaff_x21;
  func_0x00010b531020(unaff_x19 + 0x12,unaff_x20 + 0x90);
  unaff_x19[0x15] = 0;
  unaff_x19[0x16] = 0;
  unaff_x19[0x17] = unaff_x21;
  func_0x00010b531030(unaff_x19 + 0x15,unaff_x20 + 0xa8);
  func_0x000107c282d4(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x1a) = 0;
  FUN_10b531908(unaff_x19 + 0x1b);
  unaff_x19[0x1e] = 0;
  unaff_x19[0x1f] = 0;
  unaff_x19[0x20] = unaff_x21;
  func_0x00010b531040(unaff_x19 + 0x1e,unaff_x20 + 0xf0);
  unaff_x19[0x21] = 0;
  unaff_x19[0x22] = 0;
  unaff_x19[0x23] = unaff_x21;
  func_0x00010b531050(unaff_x19 + 0x21,unaff_x20 + 0x108);
  unaff_x19[0x24] = 0;
  unaff_x19[0x25] = 0;
  unaff_x19[0x26] = unaff_x21;
  func_0x00010b531060(unaff_x19 + 0x24,unaff_x20 + 0x120);
  unaff_x19[0x27] = 0;
  unaff_x19[0x28] = 0;
  unaff_x19[0x29] = unaff_x21;
  func_0x00010b531070(unaff_x19 + 0x27,unaff_x20 + 0x138);
  unaff_x19[0x2a] = 0;
  unaff_x19[0x2b] = 0;
  unaff_x19[0x2c] = unaff_x21;
  func_0x00010b531080(unaff_x19 + 0x2a,unaff_x20 + 0x150);
  FUN_10b5319a0(unaff_x19 + 0x2d);
  unaff_x19[0x30] = 0;
  unaff_x19[0x31] = 0;
  unaff_x19[0x32] = unaff_x21;
  func_0x00010b5310a0(unaff_x19 + 0x30,unaff_x20 + 0x180);
  unaff_x19[0x33] = 0;
  unaff_x19[0x34] = 0;
  unaff_x19[0x35] = unaff_x21;
  func_0x00010b5310b0(unaff_x19 + 0x33,unaff_x20 + 0x198);
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533310();
  }
  unaff_x19[0x36] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533368();
  }
  unaff_x19[0x37] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5333e4();
  }
  unaff_x19[0x38] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533498();
  }
  unaff_x19[0x39] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b53350c();
  }
  unaff_x19[0x3a] = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5335e4();
  }
  unaff_x19[0x3b] = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533644();
  }
  unaff_x19[0x3c] = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b53369c();
  }
  unaff_x19[0x3d] = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b5336cc();
  }
  unaff_x19[0x3e] = uVar2;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533774();
  }
  unaff_x19[0x3f] = uVar2;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5337c0();
  }
  unaff_x19[0x40] = uVar2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b53389c();
  }
  unaff_x19[0x41] = uVar2;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5338f8();
  }
  unaff_x19[0x42] = uVar2;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533958();
  }
  unaff_x19[0x43] = uVar2;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5339a4();
  }
  unaff_x19[0x44] = uVar2;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5339f0();
  }
  unaff_x19[0x45] = uVar2;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533a3c();
  }
  unaff_x19[0x46] = uVar2;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533a9c();
  }
  unaff_x19[0x47] = uVar2;
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533ad8();
  }
  unaff_x19[0x48] = uVar2;
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533b28();
  }
  unaff_x19[0x49] = uVar2;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533b78();
  }
  unaff_x19[0x4a] = uVar2;
  if ((uVar1 >> 0x15 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533c34();
  }
  unaff_x19[0x4b] = uVar2;
  if ((uVar1 >> 0x16 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533c84();
  }
  unaff_x19[0x4c] = uVar2;
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533cdc();
  }
  unaff_x19[0x4d] = uVar2;
  if ((uVar1 >> 0x18 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533d28();
  }
  unaff_x19[0x4e] = uVar2;
  if ((uVar1 >> 0x19 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533d78();
  }
  unaff_x19[0x4f] = uVar2;
  if ((uVar1 >> 0x1a & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533dd0();
  }
  unaff_x19[0x50] = uVar2;
  if ((uVar1 >> 0x1b & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533e20();
  }
  unaff_x19[0x51] = uVar2;
  if ((uVar1 >> 0x1c & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533e6c();
  }
  unaff_x19[0x52] = uVar2;
  if ((uVar1 >> 0x1d & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533ee4();
  }
  unaff_x19[0x53] = uVar2;
  if ((uVar1 >> 0x1e & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b533f48();
  }
  unaff_x19[0x54] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined2 *)(unaff_x19 + 0x56) = *(undefined2 *)(unaff_x20 + 0x2b0);
  unaff_x19[0x55] = uVar2;
  return unaff_x19;
}



/* Entry: 10b526ee0; end: 10b526fd3;  */

void FUN_10b526ee0(void)

{
  return;
}



/* Entry: 10b526fd4; end: 10b527003;  */

void FUN_10b526fd4(void)

{
  func_0x00010b526488();
  FUN_10b5270fc();
  return;
}



/* Entry: 10b527004; end: 10b52703b;  */

void FUN_10b527004(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  byte *pbVar1;
  
  func_0x000107c28094(param_1,param_3);
  pbVar1 = (byte *)0x58;
  func_0x000107c280a8(0x58,param_1);
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  return;
}



/* Entry: 10b52703c; end: 10b527053;  */

void FUN_10b52703c(void)

{
  FUN_10b5a6b34();
  FUN_10b5270fc();
  return;
}



/* Entry: 10b527054; end: 10b5270fb;  */

undefined8 * FUN_10b527054(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  func_0x00010b527124();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    param_2 = 0x68;
    FUN_10b4d80e0();
  }
  func_0x00010b527130();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110cfdbc8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b526f88();
  }
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)unaff_x20 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x24) = 0;
  unaff_x20[5] = param_2;
  FUN_10b5267e4(unaff_x20 + 3,param_3 + 0x18);
  lVar2 = 0;
  *(undefined4 *)(unaff_x20 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  uVar1 = *(uint *)(unaff_x20 + 2);
  if ((uVar1 & 1) != 0) {
    lVar2 = param_2;
    FUN_10b526d9c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  unaff_x20[6] = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    FUN_10b526e0c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  unaff_x20[7] = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    FUN_10b526e9c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  unaff_x20[8] = lVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(unaff_x20 + 10) = *(undefined4 *)(param_3 + 0x50);
  unaff_x20[9] = uVar3;
  if (*(int *)(unaff_x20 + 0xc) == 0xd) {
    param_3 = param_3 + 0x58;
    func_0x000107c2809c(param_3,param_2);
  }
  else {
    if (*(int *)(unaff_x20 + 0xc) != 0xc) {
      return unaff_x20;
    }
    FUN_10b526e9c(param_2,*(undefined8 *)(param_3 + 0x58));
    param_3 = param_2;
  }
  unaff_x20[0xb] = param_3;
  return unaff_x20;
}



/* Entry: 10b5270fc; end: 10b527143;  */

long FUN_10b5270fc(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b527144; end: 10b52718b;  */

long FUN_10b527144(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52718c; end: 10b52718f;  */

long FUN_10b52718c(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527190; end: 10b5271a3;  */

void FUN_10b527190(void)

{
  FUN_10b527144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5271a4; end: 10b5271af;  */

undefined ** FUN_10b5271a4(void)

{
  return &PTR_DAT_110cff028;
}



/* Entry: 10b5271b0; end: 10b5271f3;  */

void FUN_10b5271b0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b534360();
  func_0x00010b534a94();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5347e4();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b534b50();
    }
  }
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5271f4; end: 10b52730f;  */

long * FUN_10b5271f4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x00010b534274();
  uVar2 = *(uint *)(param_1 + 2);
  plVar4 = (long *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    func_0x00010b5341e0();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x00010b534a88();
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_10b527260;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10b527260;
  param_4 = (long *)&UNK_10f777054;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_10b527260:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b527310; end: 10b5273b3;  */

void FUN_10b527310(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5273b4; end: 10b5273fb;  */

long FUN_10b5273b4(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5273fc; end: 10b5273ff;  */

long FUN_10b5273fc(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527400; end: 10b527413;  */

void FUN_10b527400(void)

{
  FUN_10b5273b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527414; end: 10b52741f;  */

undefined ** FUN_10b527414(void)

{
  return &PTR_DAT_110cff080;
}



/* Entry: 10b527420; end: 10b527463;  */

void FUN_10b527420(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b534360();
  func_0x00010b534a94();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5347e4();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b534b50();
    }
  }
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b527464; end: 10b52758f;  */

long * FUN_10b527464(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5274b0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5274b0;
  param_4 = (long *)&UNK_10f7770a6;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b5274b0:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    func_0x00010b534a88();
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b534648();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b527590; end: 10b527593;  */

void FUN_10b527590(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b527594; end: 10b527637;  */

void FUN_10b527594(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b527638; end: 10b52767f;  */

long FUN_10b527638(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527680; end: 10b527683;  */

long FUN_10b527680(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527684; end: 10b527697;  */

void FUN_10b527684(void)

{
  FUN_10b527638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527698; end: 10b5276a3;  */

undefined ** FUN_10b527698(void)

{
  return &PTR_DAT_110cff0e0;
}



/* Entry: 10b5276a4; end: 10b5276ef;  */

void FUN_10b5276a4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x00010b534360();
  func_0x00010b534a94();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5347e4();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b534b50();
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10b5276f0; end: 10b5277b7;  */

long * FUN_10b5276f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534274();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    func_0x00010b5341e0();
    unaff_x20 = param_1;
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52774c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52774c;
  param_4 = (long *)&UNK_10f7770f0;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52774c:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b534320();
    func_0x00010b5348f8();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5277b8; end: 10b527843;  */

void FUN_10b5277b8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534a7c();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b5347dc();
      func_0x00010b5345d4();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b534b48();
      func_0x00010b5345d4();
    }
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x00010b53414c();
    func_0x00010b534a28();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b527844; end: 10b527847;  */

void FUN_10b527844(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b527848; end: 10b5278f7;  */

void FUN_10b527848(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5278f8; end: 10b52792b;  */

long FUN_10b5278f8(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5cb448();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52792c; end: 10b52792f;  */

long FUN_10b52792c(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5cb448();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527930; end: 10b527943;  */

void FUN_10b527930(void)

{
  FUN_10b5278f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527944; end: 10b52794f;  */

undefined ** FUN_10b527944(void)

{
  return &PTR_DAT_110cff140;
}



/* Entry: 10b527950; end: 10b527a37;  */

void FUN_10b527950(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5cb4cc(unaff_x19[3]);
  }
  func_0x00010b534764();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b527a38; end: 10b527a97;  */

void FUN_10b527a38(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10b532a78();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10b5cb678();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b527a98; end: 10b527abb;  */

undefined8 FUN_10b527a98(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527abc; end: 10b527abf;  */

undefined8 FUN_10b527abc(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527ac0; end: 10b527ad3;  */

void FUN_10b527ac0(void)

{
  FUN_10b527a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527ad4; end: 10b527af3;  */

undefined ** FUN_10b527ad4(void)

{
  return &PTR_DAT_110cff1a0;
}



/* Entry: 10b527af4; end: 10b527b73;  */

long * FUN_10b527af4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((int)param_1[2] != 0) {
    func_0x00010b53425c();
    func_0x00010b5346a0();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b53425c();
    func_0x00010b5346f8();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b527b74; end: 10b527c2b;  */

ulong FUN_10b527b74(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b527c2c; end: 10b527c4f;  */

undefined8 FUN_10b527c2c(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527c50; end: 10b527c53;  */

undefined8 FUN_10b527c50(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527c54; end: 10b527c67;  */

void FUN_10b527c54(void)

{
  FUN_10b527c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527c68; end: 10b527c87;  */

undefined ** FUN_10b527c68(void)

{
  return &PTR_DAT_110cff1f8;
}



/* Entry: 10b527c88; end: 10b527cf7;  */

long * FUN_10b527c88(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b53425c();
    func_0x00010b53498c();
    func_0x00010b534970();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b53425c();
    func_0x00010b53497c();
    func_0x00010b534970();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b527cf8; end: 10b527d6f;  */

long FUN_10b527cf8(long param_1)

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



/* Entry: 10b527d70; end: 10b527d93;  */

undefined8 FUN_10b527d70(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527d94; end: 10b527d97;  */

undefined8 FUN_10b527d94(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b527d98; end: 10b527dab;  */

void FUN_10b527d98(void)

{
  FUN_10b527d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527dac; end: 10b527dcb;  */

undefined ** FUN_10b527dac(void)

{
  return &PTR_DAT_110cff258;
}



/* Entry: 10b527dcc; end: 10b527e3b;  */

long * FUN_10b527dcc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b53425c();
    func_0x00010b53498c();
    func_0x00010b534970();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b53425c();
    func_0x00010b53497c();
    func_0x00010b534970();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b527e3c; end: 10b527e83;  */

long FUN_10b527e3c(long param_1)

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



/* Entry: 10b527e84; end: 10b527ec7;  */

long FUN_10b527e84(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b527c2c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b527d70();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527ec8; end: 10b527ecb;  */

long FUN_10b527ec8(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b527c2c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b527d70();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b527ecc; end: 10b527edf;  */

void FUN_10b527ecc(void)

{
  FUN_10b527e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b527ee0; end: 10b527eeb;  */

undefined ** FUN_10b527ee0(void)

{
  return &PTR_DAT_110cff2b8;
}



/* Entry: 10b527eec; end: 10b527f43;  */

void FUN_10b527eec(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b527c74(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b527db8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b527f44; end: 10b52809b;  */

long * FUN_10b527f44(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5342b4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x00010b5343c0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b53425c();
    plVar2 = (long *)0x19;
    func_0x000107c280a8(0x19,param_1);
    func_0x00010b534970();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b53425c();
    func_0x000107c280a8(0x21,plVar2);
    func_0x00010b534970();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b52809c; end: 10b52809f;  */

void FUN_10b52809c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  uint unaff_w23;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b534ba4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        FUN_10b532aa8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b527bfc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        FUN_10b532b04();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010b527d40();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5280a0; end: 10b52814b;  */

void FUN_10b5280a0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  uint unaff_w23;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b534ba4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        FUN_10b532aa8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b527bfc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        FUN_10b532b04();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010b527d40();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52814c; end: 10b528173;  */

undefined8 FUN_10b52814c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b528174; end: 10b528177;  */

undefined8 FUN_10b528174(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b528178; end: 10b52818b;  */

void FUN_10b528178(void)

{
  FUN_10b52814c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52818c; end: 10b528197;  */

undefined ** FUN_10b52818c(void)

{
  return &PTR_DAT_110cff320;
}



/* Entry: 10b528198; end: 10b5281c7;  */

void FUN_10b528198(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
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



/* Entry: 10b5281c8; end: 10b52825f;  */

long * FUN_10b5281c8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52820c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52820c;
  param_4 = (long *)&UNK_10f77713a;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52820c:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b534320();
    func_0x00010b5346f8();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b528260; end: 10b5282c7;  */

void FUN_10b528260(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b53414c();
    func_0x00010b534964();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5282c8; end: 10b5282cb;  */

void FUN_10b5282c8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b5282cc; end: 10b52831f;  */

void FUN_10b5282cc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b528320; end: 10b528363;  */

long FUN_10b528320(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b527e84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b52814c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528364; end: 10b528367;  */

long FUN_10b528364(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b527e84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b52814c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528368; end: 10b52837b;  */

void FUN_10b528368(void)

{
  FUN_10b528320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52837c; end: 10b528387;  */

undefined ** FUN_10b52837c(void)

{
  return &PTR_DAT_110cff380;
}



/* Entry: 10b528388; end: 10b5283df;  */

void FUN_10b528388(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b527eec(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b528198(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5283e0; end: 10b528513;  */

long * FUN_10b5283e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00010b5343c0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b53425c();
    func_0x00010b534940();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b528514; end: 10b5285ab;  */

void FUN_10b528514(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  uint unaff_w23;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b534ba4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x00010b532b60();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5280a0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b532bf0();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_10b5282cc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5285ac; end: 10b5285df;  */

long FUN_10b5285ac(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5357a4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5285e0; end: 10b5285e3;  */

long FUN_10b5285e0(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5357a4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5285e4; end: 10b5285f7;  */

void FUN_10b5285e4(void)

{
  FUN_10b5285ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5285f8; end: 10b528603;  */

undefined ** FUN_10b5285f8(void)

{
  return &PTR_DAT_110cff3d8;
}



/* Entry: 10b528604; end: 10b528643;  */

void FUN_10b528604(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b535814(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b528644; end: 10b5286c3;  */

long * FUN_10b528644(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((int)param_1[4] != 0) {
    func_0x00010b53425c();
    func_0x00010b53477c();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b5286c4; end: 10b528723;  */

void FUN_10b5286c4(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b528724();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b53414c();
    func_0x00010b534964();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b528724; end: 10b52873f;  */

long FUN_10b528724(long param_1)

{
  long extraout_x8;
  
  FUN_10b535910();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b528740; end: 10b528743;  */

void FUN_10b528740(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10b532c40();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10b5359bc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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


