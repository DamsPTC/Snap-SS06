/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087a3da0; end: 1087a3de3;  */

void FUN_1087a3da0(void)

{
  undefined1 auStack_50 [16];
  
  func_0x0001087a46a4();
  FUN_1087a3624(auStack_50);
  func_0x0001087a43cc();
  FUN_1087a3de4();
  return;
}



/* Entry: 1087a3de4; end: 1087a3def;  */

long FUN_1087a3de4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3e1c();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3df0; end: 1087a3e1b;  */

long FUN_1087a3df0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3e1c();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3e1c; end: 1087a3e4f;  */

void FUN_1087a3e1c(void)

{
  long extraout_x9;
  
  func_0x0001087a457c();
  if (extraout_x9 != 0) {
    func_0x0001087a4434();
  }
  func_0x0001087a43f4();
  func_0x0001087a4780();
  FUN_1087a3e50();
  return;
}



/* Entry: 1087a3e50; end: 1087a3e73;  */

undefined1 * FUN_1087a3e50(long *param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_59 [17];
  undefined8 uStack_48;
  
  lVar3 = param_1[1];
  puVar6 = *(undefined1 **)(*param_1 + 0x18);
  uVar4 = *(char *)(*(long *)(*param_1 + 0x10) + 8) == 'x';
  uVar8 = (uint)!(bool)uVar4;
  iVar7 = (int)lVar3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_2 == (undefined1 *)0x0) {
    func_0x0001087a44a4(auStack_59);
    FUN_1087a3efc();
    puVar6 = auStack_59 + (int)lVar3;
    param_2 = auStack_59;
    func_0x0001087a460c();
    unaff_x19 = puVar6;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a3efc();
  }
  func_0x0001087a4420(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    param_2 = param_2 + iVar7;
    puVar5 = param_2;
    puVar2 = &DAT_10f3ddedc;
    if (uVar8 == 0) {
      puVar2 = &UNK_10e60dabc;
    }
    do {
      param_2 = param_2 + -1;
      *param_2 = puVar2[(ulong)puVar6 & 0xf];
      bVar1 = (undefined1 *)0xf < puVar6;
      puVar6 = (undefined1 *)((ulong)puVar6 >> 4);
    } while (bVar1);
    return puVar5;
  }
  return unaff_x19;
}



/* Entry: 1087a3e74; end: 1087a3efb;  */

undefined1 * FUN_1087a3e74(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  int iVar4;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_59 [17];
  undefined8 uStack_48;
  
  iVar4 = param_3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_1 == (undefined1 *)0x0) {
    func_0x0001087a44a4(auStack_59);
    FUN_1087a3efc();
    param_2 = auStack_59 + param_3;
    param_1 = auStack_59;
    func_0x0001087a460c();
    unaff_x19 = param_2;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a3efc();
  }
  func_0x0001087a4420(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    param_1 = param_1 + iVar4;
    puVar3 = param_1;
    puVar2 = &DAT_10f3ddedc;
    if (param_4 == 0) {
      puVar2 = &UNK_10e60dabc;
    }
    do {
      param_1 = param_1 + -1;
      *param_1 = puVar2[(ulong)param_2 & 0xf];
      bVar1 = (undefined1 *)0xf < param_2;
      param_2 = (undefined1 *)((ulong)param_2 >> 4);
    } while (bVar1);
    return puVar3;
  }
  return unaff_x19;
}



/* Entry: 1087a3efc; end: 1087a3f4f;  */

void FUN_1087a3efc(long param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(param_1 + param_3);
  puVar2 = &DAT_10f3ddedc;
  if (param_4 == 0) {
    puVar2 = &UNK_10e60dabc;
  }
  do {
    puVar3 = puVar3 + -1;
    *puVar3 = puVar2[param_2 & 0xf];
    bVar1 = 0xf < param_2;
    param_2 = param_2 >> 4;
  } while (bVar1);
  return;
}



/* Entry: 1087a3f50; end: 1087a3f93;  */

void FUN_1087a3f50(void)

{
  undefined1 auStack_50 [16];
  
  func_0x0001087a46a4();
  FUN_1087a3624(auStack_50);
  func_0x0001087a43cc();
  FUN_1087a3f94();
  return;
}



/* Entry: 1087a3f94; end: 1087a3f9f;  */

long FUN_1087a3f94(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3fcc();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3fa0; end: 1087a3fcb;  */

long FUN_1087a3fa0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3fcc();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3fcc; end: 1087a3fff;  */

void FUN_1087a3fcc(void)

{
  long extraout_x9;
  
  func_0x0001087a457c();
  if (extraout_x9 != 0) {
    func_0x0001087a4434();
  }
  func_0x0001087a43f4();
  func_0x0001087a4780();
  FUN_1087a4000();
  return;
}



/* Entry: 1087a4000; end: 1087a4013;  */

byte * FUN_1087a4000(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  int iVar3;
  undefined8 extraout_x8;
  byte *unaff_x19;
  byte abStack_89 [65];
  undefined8 uStack_48;
  
  func_0x0001087a4754();
  iVar3 = param_3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_1 == (byte *)0x0) {
    func_0x0001087a44a4(abStack_89);
    FUN_1087a40a0();
    param_2 = abStack_89 + param_3;
    param_1 = abStack_89;
    func_0x0001087a460c();
    unaff_x19 = param_2;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a40a0();
  }
  func_0x0001087a4420(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  param_1 = param_1 + iVar3;
  pbVar2 = param_1;
  do {
    param_1 = param_1 + -1;
    *param_1 = (byte)param_2 & 1 | 0x30;
    bVar1 = (byte *)0x1 < param_2;
    param_2 = (byte *)((ulong)param_2 >> 1);
  } while (bVar1);
  return pbVar2;
}



/* Entry: 1087a4014; end: 1087a409f;  */

byte * FUN_1087a4014(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  int iVar3;
  undefined8 extraout_x8;
  byte *unaff_x19;
  byte abStack_89 [65];
  undefined8 uStack_48;
  
  iVar3 = param_3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_1 == (byte *)0x0) {
    func_0x0001087a44a4(abStack_89);
    FUN_1087a40a0();
    param_2 = abStack_89 + param_3;
    param_1 = abStack_89;
    func_0x0001087a460c();
    unaff_x19 = param_2;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a40a0();
  }
  func_0x0001087a4420(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  param_1 = param_1 + iVar3;
  pbVar2 = param_1;
  do {
    param_1 = param_1 + -1;
    *param_1 = (byte)param_2 & 1 | 0x30;
    bVar1 = (byte *)0x1 < param_2;
    param_2 = (byte *)((ulong)param_2 >> 1);
  } while (bVar1);
  return pbVar2;
}



/* Entry: 1087a40a0; end: 1087a40db;  */

void FUN_1087a40a0(long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + param_3);
  do {
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)param_2 & 1 | 0x30;
    bVar1 = 1 < param_2;
    param_2 = param_2 >> 1;
  } while (bVar1);
  return;
}



/* Entry: 1087a40dc; end: 1087a411f;  */

void FUN_1087a40dc(void)

{
  undefined1 auStack_50 [16];
  
  func_0x0001087a46a4();
  FUN_1087a3624(auStack_50);
  func_0x0001087a43cc();
  FUN_1087a4120();
  return;
}



/* Entry: 1087a4120; end: 1087a412b;  */

long FUN_1087a4120(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a4158();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a412c; end: 1087a4157;  */

long FUN_1087a412c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a4158();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a4158; end: 1087a418b;  */

void FUN_1087a4158(void)

{
  long extraout_x9;
  
  func_0x0001087a457c();
  if (extraout_x9 != 0) {
    func_0x0001087a4434();
  }
  func_0x0001087a43f4();
  func_0x0001087a4780();
  FUN_1087a418c();
  return;
}



/* Entry: 1087a418c; end: 1087a419f;  */

byte * FUN_1087a418c(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  int iVar3;
  undefined8 extraout_x8;
  byte *unaff_x19;
  byte abStack_5e [22];
  undefined8 uStack_48;
  
  func_0x0001087a4754();
  iVar3 = param_3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_1 == (byte *)0x0) {
    func_0x0001087a44a4(abStack_5e);
    FUN_1087a4228();
    param_2 = abStack_5e + param_3;
    param_1 = abStack_5e;
    func_0x0001087a460c();
    unaff_x19 = param_2;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a4228();
  }
  func_0x0001087a4420(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  param_1 = param_1 + iVar3;
  pbVar2 = param_1;
  do {
    param_1 = param_1 + -1;
    *param_1 = (byte)param_2 & 7 | 0x30;
    bVar1 = (byte *)0x7 < param_2;
    param_2 = (byte *)((ulong)param_2 >> 3);
  } while (bVar1);
  return pbVar2;
}



/* Entry: 1087a41a0; end: 1087a4227;  */

byte * FUN_1087a41a0(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  int iVar3;
  undefined8 extraout_x8;
  byte *unaff_x19;
  byte abStack_5e [22];
  undefined8 uStack_48;
  
  iVar3 = param_3;
  func_0x0001087a4444();
  uStack_48 = extraout_x8;
  func_0x0001087a4718();
  if (param_1 == (byte *)0x0) {
    func_0x0001087a44a4(abStack_5e);
    FUN_1087a4228();
    param_2 = abStack_5e + param_3;
    param_1 = abStack_5e;
    func_0x0001087a460c();
    unaff_x19 = param_2;
  }
  else {
    func_0x0001087a44a4();
    FUN_1087a4228();
  }
  func_0x0001087a4420(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  param_1 = param_1 + iVar3;
  pbVar2 = param_1;
  do {
    param_1 = param_1 + -1;
    *param_1 = (byte)param_2 & 7 | 0x30;
    bVar1 = (byte *)0x7 < param_2;
    param_2 = (byte *)((ulong)param_2 >> 3);
  } while (bVar1);
  return pbVar2;
}



/* Entry: 1087a4228; end: 1087a424b;  */

void FUN_1087a4228(long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + param_3);
  do {
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)param_2 & 7 | 0x30;
    bVar1 = 7 < param_2;
    param_2 = param_2 >> 3;
  } while (bVar1);
  return;
}



/* Entry: 1087a424c; end: 1087a4277;  */

long FUN_1087a424c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a4278();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a4278; end: 1087a42a3;  */

long FUN_1087a4278(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1 + (long)(int)param_1[1];
  FUN_1087a366c(*param_1,lVar1,param_2);
  return lVar1;
}



/* Entry: 1087a42a4; end: 1087a42f7;  */

long * FUN_1087a42a4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1087a42f8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a42f8; end: 1087a431f;  */

long FUN_1087a42f8(long param_1)

{
  long lStack_28;
  
  func_0x0001087a3120(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1087a4320; end: 1087a4337;  */

void FUN_1087a4320(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087a4338; end: 1087a437b;  */

long * FUN_1087a4338(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1087a42f8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1087a437c; end: 1087a47eb;  */

long FUN_1087a437c(long param_1,uint *param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_4 <= *param_2) {
    lVar1 = *param_2 - param_4;
  }
  if (*(ulong *)(param_1 + 0x18) <
      *(long *)(param_1 + 0x10) + param_3 + lVar1 * (ulong)*(byte *)((long)param_2 + 0xe)) {
    func_0x0001006769e0();
  }
  return param_1;
}



/* Entry: 1087a47ec; end: 1087a484b;  */

uint FUN_1087a47ec(int param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    bVar1 = param_1 - 1U < 2;
    FUN_108770c04(param_2,param_3,&UNK_10f4bac42);
    iVar2 = (int)param_2;
  }
  else {
    iVar2 = 0;
    bVar1 = param_1 == 1;
  }
  return (uint)bVar1 | iVar2 << 8;
}



/* Entry: 1087a484c; end: 1087a4b47;  */

void FUN_1087a484c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_728 [464];
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [48];
  undefined1 auStack_510 [24];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  char cStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined1 auStack_488 [464];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [48];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [464];
  byte bStack_58;
  
  FUN_1086a7830(auStack_228,param_3 + 0x178);
  if ((bStack_58 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x4d) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x160);
    func_0x000107c29e2c(auStack_248,param_2 + 0x50);
    ppuVar2 = *(undefined ***)(param_3 + 0x58);
    if (*(int *)(param_3 + 0x60) != 0x10) {
      ppuVar2 = &PTR_PTR_113286d10;
    }
    ppuVar1 = &PTR_PTR_113286d98;
    if ((undefined **)ppuVar2[3] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar2[3];
    }
    ppuVar2 = &PTR_PTR_11326ae28;
    if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar1[3];
    }
    FUN_108844454(auStack_278,ppuVar2);
    ppuVar2 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_2 + 0x78);
    }
    func_0x000107c29ed8(auStack_290,(ulong)ppuVar2[0xc] & 0xfffffffffffffffc);
    param_2 = param_2 + 0x50;
    FUN_108844938(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_510,auStack_248);
    func_0x000108684d2c(auStack_540,auStack_278);
    func_0x000107c27994(auStack_558,auStack_290);
    FUN_108685190(auStack_728,auStack_228);
    func_0x000108636378(&uStack_4f8,uVar3,auStack_510,auStack_540,auStack_558,param_2,auStack_728,
                        param_9,param_4,1,param_5,1,param_6 | 0x100);
    *param_1 = uStack_4f8;
    param_1[2] = uStack_4e8;
    param_1[1] = uStack_4f0;
    param_1[3] = uStack_4e0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4e0 = 0;
    param_1[5] = uStack_4d0;
    param_1[4] = uStack_4d8;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    if (cStack_4b0 == '\x01') {
      param_1[7] = uStack_4c0;
      param_1[6] = uStack_4c8;
      param_1[8] = uStack_4b8;
      uStack_4b8 = 0;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      *(undefined1 *)(param_1 + 9) = 1;
    }
    param_1[0xb] = uStack_4a0;
    param_1[10] = uStack_4a8;
    param_1[0xc] = uStack_498;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_4a8 = 0;
    *(undefined4 *)(param_1 + 0xd) = uStack_490;
    func_0x00010528cf6c(param_1 + 0xe,auStack_488);
    param_1[0x49] = uStack_2b0;
    param_1[0x48] = uStack_2b8;
    param_1[0x4b] = uStack_2a0;
    param_1[0x4a] = uStack_2a8;
    *(undefined2 *)(param_1 + 0x4c) = uStack_298;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    FUN_1087a4b48(&uStack_4f8);
    func_0x000104bee6b8(auStack_728);
    func_0x000107c27914(auStack_558);
    FUN_1087a4b88(auStack_540);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
    func_0x000107c27914(auStack_290);
    FUN_1087a4b88(auStack_278);
    func_0x000107c279a4(auStack_248);
  }
  func_0x0001086a7890(auStack_228);
  return;
}



/* Entry: 1087a4b48; end: 1087a4b87;  */

long FUN_1087a4b48(long param_1)

{
  func_0x000104bee6b8(param_1 + 0x70);
  func_0x000107c27914(param_1 + 0x50);
  func_0x000107c279a4(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 1087a4b88; end: 1087a4b9b;  */

void FUN_1087a4b88(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1087a4b9c; end: 1087a4d03;  */

void FUN_1087a4b9c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  
  while( true ) {
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = param_2;
    *(long *)((long)register0x00000008 + -0x98) = param_3;
    if (param_3 != 0) {
      plVar4 = (long *)(param_3 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)((long)register0x00000008 + -0x90) = 4;
    unaff_x20 = param_1;
    func_0x000107c28150();
    unaff_x21 = param_1[2];
    __ZNSt3__15mutex4lockEv(unaff_x21 + 8);
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x1087a4d70;
    *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_DAT_110a70348;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x60) =
         *(undefined4 *)((long)register0x00000008 + -0x90);
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x20;
    func_0x000107c28154(unaff_x21 + 0x48,(undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001087a4db4();
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 8);
    if (unaff_x22 == 0) {
      plVar4 = (long *)*param_1;
      lVar7 = param_1[3];
      uVar8 = param_1[2];
      *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[3];
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar8;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,(undefined1 *)((long)register0x00000008 + -0x80));
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    }
    func_0x000104be3970();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000104be3970((undefined1 *)((long)register0x00000008 + -0xa0));
    unaff_x30 = FUN_1087a4d04;
    puVar6 = puVar5;
    __Unwind_Resume();
    param_1 = *(undefined8 **)(puVar6 + 0x28);
    param_2 = *param_4;
    param_3 = param_4[1];
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = puVar5;
  }
  return;
}



/* Entry: 1087a4d04; end: 1087a4d13;  */

void FUN_1087a4d04(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  
  while( true ) {
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    uVar8 = *param_4;
    lVar7 = param_4[1];
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar8;
    *(long *)((long)register0x00000008 + -0x98) = lVar7;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)((long)register0x00000008 + -0x90) = 4;
    unaff_x20 = puVar6;
    func_0x000107c28150();
    unaff_x21 = puVar6[2];
    __ZNSt3__15mutex4lockEv(unaff_x21 + 8);
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x1087a4d70;
    *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_DAT_110a70348;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x60) =
         *(undefined4 *)((long)register0x00000008 + -0x90);
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x20;
    func_0x000107c28154(unaff_x21 + 0x48,(undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001087a4db4();
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 8);
    if (unaff_x22 == 0) {
      plVar4 = (long *)*puVar6;
      lVar7 = puVar6[3];
      uVar8 = puVar6[2];
      *(undefined8 *)((long)register0x00000008 + -0x78) = puVar6[3];
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar8;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,(undefined1 *)((long)register0x00000008 + -0x80));
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    }
    func_0x000104be3970();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000104be3970((undefined1 *)((long)register0x00000008 + -0xa0));
    unaff_x30 = FUN_1087a4d04;
    param_1 = puVar5;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = puVar5;
  }
  return;
}



/* Entry: 1087a4d14; end: 1087a4d27;  */

void FUN_1087a4d14(void)

{
  FUN_1087a4d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a4d28; end: 1087a4d6f;  */

undefined8 * FUN_1087a4d28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a70300;
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28714(param_1 + 1);
  return param_1;
}



/* Entry: 1087a4d70; end: 1087a4dc3;  */

void FUN_1087a4d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087a4d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1087a4dc4; end: 1087a515b;  */

void FUN_1087a4dc4(long *param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar12 = (ulong)param_2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar12;
    }
    else {
      unaff_x25 = uVar12;
      if (uVar13 <= uVar12) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar12 / uVar13;
        }
        unaff_x25 = uVar12 - uVar7 * uVar13;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_1087a4e78;
          uVar7 = plVar5[1];
          if (uVar7 != uVar12) break;
          if (*(int *)(plVar5 + 2) == param_2) {
            return;
          }
        }
        if ((uVar13 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar13 <= uVar7) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar7 / uVar13;
          }
          uVar7 = uVar7 - uVar6 * uVar13;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_1087a4e78:
  plVar5 = param_1 + 2;
  plVar2 = (long *)0x18;
  __Znwm();
  uStack_58 = 1;
  *plVar2 = 0;
  plVar2[1] = uVar12;
  *(int *)(plVar2 + 2) = param_2;
  plStack_60 = plVar5;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_1087a50ac;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  plStack_68 = plVar2;
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_1087a4f20:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087a5148);
      (*pcVar1)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    FUN_1087a57a8(param_1,lVar3);
    param_1[1] = uVar4;
    lVar3 = *param_1;
    for (uVar13 = 0; uVar4 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar3 + uVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar5;
    uVar13 = uVar4;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar4 - 1;
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar10 / uVar4;
      }
      uVar11 = uVar10;
      if (uVar4 <= uVar10) {
        uVar11 = uVar10 - uVar7 * uVar4;
      }
      if ((uVar4 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar3 + uVar11 * 8) = plVar5;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        if ((uVar4 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar4 <= uVar7) {
          uVar10 = 0;
          if (uVar4 != 0) {
            uVar10 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar10 * uVar4;
        }
        if (uVar7 != uVar11) {
          if (*(long *)(lVar3 + uVar7 * 8) == 0) {
            *(long **)(lVar3 + uVar7 * 8) = plVar9;
            uVar11 = uVar7;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar7 * 8);
            **(long **)(lVar3 + uVar7 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar13) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 < uVar13) {
      if (uVar4 != 0) goto LAB_1087a4f20;
      FUN_1087a57a8(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x25 = uVar13 - 1 & uVar12;
  }
  else {
    unaff_x25 = uVar12;
    if (uVar13 <= uVar12) {
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar12 / uVar13;
      }
      unaff_x25 = uVar12 - uVar4 * uVar13;
    }
  }
LAB_1087a50ac:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar5;
    if (*plVar2 != 0) {
      uVar12 = *(ulong *)(*plVar2 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar4 * uVar13;
      }
      *(long **)(lVar3 + uVar12 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar8;
    *plVar8 = (long)plVar2;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1087a57c0(&plStack_68);
  return;
}



/* Entry: 1087a515c; end: 1087a51ff;  */

undefined8 FUN_1087a515c(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar7 != uVar3) break;
          if (*(int *)(plVar6 + 2) == param_2) {
            return 1;
          }
        }
        if ((uVar2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar2 <= uVar7) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar7 / uVar2;
          }
          uVar7 = uVar7 - uVar1 * uVar2;
        }
      } while (uVar7 == uVar5);
    }
  }
  return 0;
}



/* Entry: 1087a5200; end: 1087a55ab;  */

void FUN_1087a5200(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long **pplStack_b0;
  undefined1 uStack_a8;
  char cStack_90;
  byte bStack_80;
  char cStack_70;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar7 = param_1 + 2;
  *puVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  func_0x000107c27ab0(puVar7,(param_3[1] - *param_3) / 0x18);
  FUN_10885f980(&lStack_c8,*param_2,param_3);
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    for (; lStack_c8 != lStack_c0; lStack_c8 = lStack_c8 + 0x180) {
      func_0x00010879d7e8(lStack_c8 + 0x18,param_1);
      func_0x00010086ca80(puVar7,lStack_c8);
    }
  }
  else {
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    pplStack_b0 = &plStack_e0;
    uStack_a8 = 0;
    lVar8 = (long)iVar3 + 1;
    if ((int)lVar8 != 0) {
      if (iVar3 < -1) {
        FUN_1087a55ac();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1087a5528);
        (*pcVar1)();
      }
      plVar9 = (long *)(lVar8 * 0x18);
      plVar4 = plVar9;
      __Znwm();
      plStack_d0 = plVar4 + lVar8 * 3;
      plVar6 = plVar4;
      for (; plStack_e0 = plVar4, plVar9 != (long *)0x0; plVar9 = plVar9 + -3) {
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar6 = plVar6 + 3;
      }
    }
    uStack_a8 = 1;
    plStack_d8 = plStack_d0;
    FUN_1087a55c0(&pplStack_b0);
    for (lVar8 = lStack_c8; plVar6 = plStack_d8, plVar9 = plStack_e0, lVar8 != lStack_c0;
        lVar8 = lVar8 + 0x180) {
      if (*(long *)(lVar8 + 0xf8) == 0) {
        func_0x000107c28840(plStack_d8 + -3,lVar8);
      }
      else {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_f0 = 0x3f800000;
        if (*(long *)(lVar8 + 0x130) != *(long *)(lVar8 + 0x138) &&
            *(long *)(lVar8 + 0x148) != *(long *)(lVar8 + 0x150)) {
          FUN_1087a4dc4(&uStack_110,3);
        }
        if ((*(char *)(lVar8 + 0x168) == '\x01') &&
           ((*(char *)(lVar8 + 0x178) != '\x01' ||
            (*(long *)(lVar8 + 0x170) < *(long *)(lVar8 + 0x160))))) {
          FUN_1087a4dc4(&uStack_110,2);
        }
        if (((((*(byte *)(lVar8 + 0x28) >> 4 & 1) != 0) &&
             ((**(code **)(*(long *)param_2[4] + 0x18))
                        (&pplStack_b0,(long *)param_2[4],lVar8 + 0x18,lVar8), cStack_70 == '\x01'))
            && ((bStack_80 & 1) != 0)) && (cStack_90 == '\x01')) {
          FUN_1087a4dc4(&uStack_110,5);
        }
        iVar2 = (int)&uStack_110;
        FUN_1087a515c(&uStack_110,3);
        iVar3 = 0;
        if (iVar2 != 0) {
          func_0x0001087a5800();
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = (int)&uStack_110;
            FUN_1087a4dc4(&uStack_110,1);
          }
        }
        func_0x0001087a5800();
        if ((iVar3 != 0) && (iVar3 = (int)&uStack_110, FUN_1087a515c(&uStack_110,5), iVar3 != 0)) {
          FUN_1087a4dc4(&uStack_110,4);
        }
        lVar11 = param_2[9];
        iVar3 = *(int *)(param_2 + 8);
        for (uVar10 = 0; (long)iVar3 * 4 - uVar10 != 0; uVar10 = uVar10 + 4) {
          uVar5 = 0;
          FUN_1087a515c(&uStack_110,*(undefined4 *)(lVar11 + uVar10));
          if ((uVar5 & 1) != 0) {
            plVar6 = plStack_e0 + (uVar10 >> 2) * 3;
            goto LAB_1087a5450;
          }
        }
        plVar6 = plStack_d8 + -3;
LAB_1087a5450:
        func_0x000107c28840(plVar6,lVar8);
        func_0x0001087a5764(&uStack_110);
      }
      func_0x00010879d7e8(lVar8 + 0x18,param_1);
    }
    for (; plVar9 != plVar6; plVar9 = plVar9 + 3) {
      lVar11 = plVar9[1];
      for (lVar8 = *plVar9; lVar8 != lVar11; lVar8 = lVar8 + 0x18) {
        func_0x000107c27994(&pplStack_b0,lVar8);
        func_0x000107c27ac4(puVar7,&pplStack_b0);
        func_0x000107c27914(&pplStack_b0);
      }
    }
    FUN_1087a5650(&plStack_e0);
  }
  func_0x0001087a567c(&lStack_c8);
  return;
}



/* Entry: 1087a55ac; end: 1087a55bf;  */

undefined * FUN_1087a55ac(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[8] & 1) == 0) {
    FUN_1087a55ec(puVar1);
  }
  return puVar1;
}



/* Entry: 1087a55c0; end: 1087a55eb;  */

long FUN_1087a55c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087a55ec(param_1);
  }
  return param_1;
}



/* Entry: 1087a55ec; end: 1087a564f;  */

void FUN_1087a55ec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x18;
      func_0x000107c27a04();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1087a5650; end: 1087a56e7;  */

undefined8 FUN_1087a5650(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1087a55ec(&uStack_28);
  return param_1;
}



/* Entry: 1087a56e8; end: 1087a56ef;  */

void FUN_1087a56e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x180;
    func_0x0001087a572c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087a56f0; end: 1087a57a7;  */

void FUN_1087a56f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x180;
    func_0x0001087a572c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1087a57a8; end: 1087a57bf;  */

void FUN_1087a57a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087a57c0; end: 1087a57eb;  */

long * FUN_1087a57c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a57ec; end: 1087a580b;  */

void FUN_1087a57ec(void)

{
  return;
}



/* Entry: 1087a580c; end: 1087a6063;  */

void FUN_1087a580c(ulong *param_1,int *param_2,long *param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined1 uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int *piVar12;
  undefined7 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int *piVar19;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  uint uVar20;
  undefined8 uVar21;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long lVar22;
  long extraout_x11;
  ulong extraout_x11_00;
  uint unaff_w20;
  int *piVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  int *piStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  uint uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(param_2 + 4) = *(long *)(param_2 + 4) + 1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  piVar1 = param_2 + 8;
  lVar25 = *param_3;
  lVar4 = param_3[1];
  do {
    piVar12 = piVar1;
    piVar19 = piVar1;
    if (lVar25 == lVar4) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
LAB_1087a5fd0:
      FUN_1087a6188();
LAB_1087a5ffc:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1087a6000);
      (*pcVar9)();
    }
    while (piVar23 = *(int **)piVar12, piVar23 != (int *)0x0) {
      piVar12 = piVar23 + 8;
      FUN_108664d0c(piVar12,lVar25);
      bVar11 = -1 < (char)piVar12;
      lVar22 = 8;
      if (bVar11) {
        lVar22 = 0;
      }
      piVar12 = (int *)((long)piVar23 + lVar22);
      if (bVar11) {
        piVar19 = piVar23;
      }
    }
    if ((piVar1 == piVar19) ||
       (lVar22 = lVar25, FUN_108664d0c(lVar25,piVar19 + 8), (char)lVar22 < '\0')) {
      piVar19 = *(int **)piVar1;
      piVar12 = piVar1;
      while (piVar23 = piVar12, piVar19 != (int *)0x0) {
        while (piVar12 = piVar19, lVar22 = lVar25, FUN_108664d0c(lVar25,piVar12 + 8),
              -1 < (char)lVar22) {
          piVar19 = piVar12 + 8;
          FUN_108664d0c(piVar19,lVar25);
          if (-1 < (char)piVar19) {
            piVar19 = *(int **)piVar23;
            if (piVar19 == (int *)0x0) goto LAB_1087a5944;
            goto LAB_1087a59cc;
          }
          piVar23 = piVar12 + 2;
          piVar19 = *(int **)piVar23;
          if (*(int **)piVar23 == (int *)0x0) goto LAB_1087a5944;
        }
        piVar19 = *(int **)piVar12;
      }
LAB_1087a5944:
      piVar19 = (int *)0xa8;
      __Znwm();
      uStack_e8 = 0;
      uStack_e7 = 0;
      piStack_f8 = piVar19;
      uStack_f0 = piVar1;
      func_0x0001087a658c(piVar19 + 8);
      *(undefined1 *)(piVar19 + 0xe) = 0;
      *(undefined1 *)(piVar19 + 0x1e) = 0;
      piVar19[0x20] = 0;
      *(undefined2 *)(piVar19 + 0x21) = 0;
      *(undefined1 *)(piVar19 + 0x22) = 0;
      *(undefined1 *)(piVar19 + 0x24) = 0;
      piVar19[0x26] = 0;
      *(undefined1 *)(piVar19 + 0x27) = 0;
      piVar19[0x28] = 0;
      piVar19[0x29] = 0;
      uStack_e8 = 1;
      piVar19[0] = 0;
      piVar19[1] = 0;
      piVar19[2] = 0;
      piVar19[3] = 0;
      *(int **)(piVar19 + 4) = piVar12;
      *(int **)piVar23 = piVar19;
      if (**(long **)(param_2 + 6) != 0) {
        *(long *)(param_2 + 6) = **(long **)(param_2 + 6);
      }
      func_0x000107c27be4(*(undefined8 *)(param_2 + 8),piVar19);
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + 1;
      piStack_f8 = (int *)0x0;
      func_0x0001087a6484(&piStack_f8);
    }
LAB_1087a59cc:
    if (*(long *)(piVar19 + 0x28) != *(long *)(param_2 + 4)) {
      *(long *)(piVar19 + 0x28) = *(long *)(param_2 + 4);
      if (*(char *)(lVar25 + 0xf0) == '\x01') {
        uStack_e8 = *(undefined1 *)(lVar25 + 0xec);
        uStack_d8 = *(undefined1 *)(lVar25 + 0xe0);
        uVar21 = *(undefined8 *)(lVar25 + 0xd8);
        uStack_a9 = (undefined1)uVar21;
        uStack_a8 = (undefined1)((ulong)uVar21 >> 8);
        uStack_a7 = (undefined6)((ulong)uVar21 >> 0x10);
        uStack_79 = (undefined1)*(undefined8 *)(lVar25 + 0xa0);
        uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar25 + 0xa0) >> 8);
        uStack_c8 = *(undefined1 *)(lVar25 + 0xa8);
        uStack_df = (undefined7)((ulong)uVar21 >> 8);
        uStack_e7 = uStack_b0;
        uStack_e0 = uStack_a9;
        uStack_cf = uStack_78;
        uStack_d7 = uStack_80;
        uStack_d0 = uStack_79;
        uStack_f0 = (int *)CONCAT44(*(undefined4 *)(lVar25 + 0xe8),*(undefined4 *)(lVar25 + 0xd0));
        uStack_c0 = 0;
        uStack_a1 = uStack_d8;
        uStack_71 = uStack_c8;
LAB_1087a5a4c:
        uVar20 = uStack_c0;
        uStack_b8 = 1;
        if ((char)piVar19[0x1e] == '\x01') {
          uVar5 = piVar19[0x1c];
          uVar27 = (uint)(uStack_c0 == uVar5);
          if (uVar5 != 0xffffffff && uStack_c0 == uVar5) {
            uStack_b0 = SUB87(&uStack_80,0);
            uStack_a9 = (undefined1)((ulong)&uStack_80 >> 0x38);
            puVar13 = &uStack_b0;
            (*(code *)(&PTR_FUN_110a70360)[uStack_c0])(puVar13,piVar19 + 0x10,&uStack_f0);
            uVar27 = (uint)puVar13;
          }
        }
        else {
          uVar27 = 0;
        }
        _memcpy(piVar19 + 0xe,&piStack_f8,0x41);
        uVar5 = unaff_w20 & 0xffffff00;
        bVar10 = (uint)uStack_f0 - 2 < 3;
        bVar11 = uVar20 == 0 && bVar10;
        unaff_w20 = (uint)uStack_f0;
        if (uVar20 != 0 || !bVar10) {
          unaff_w20 = uVar5;
        }
        uVar20 = (uint)(bVar11 || uVar20 == 1);
        if ((uVar27 == 0) || (uVar20 == 0)) goto LAB_1087a5bc4;
        uVar20 = 1;
        uVar27 = 1;
      }
      else {
        if (((((char)param_2[1] == '\x01') &&
             (*(char *)(lVar25 + 0x20) == '\x01' && *(int *)(lVar25 + 0x1c) == 7)) &&
            (((*(byte *)(lVar25 + 0x88) & 1) != 0 || ((*(byte *)(lVar25 + 0xa8) & 1) != 0)))) &&
           (*(int *)(lVar25 + 0x18) - 1U < 3)) {
          uStack_e8 = *(undefined1 *)(lVar25 + 0x88);
          uStack_f0 = *(int **)(lVar25 + 0x80);
          uStack_b0 = SUB87(uStack_f0,0);
          uStack_a9 = (undefined1)((ulong)uStack_f0 >> 0x38);
          uStack_d8 = *(undefined1 *)(lVar25 + 0x98);
          uStack_98 = CONCAT31(uStack_98._1_3_,uStack_d8);
          uStack_a0 = *(undefined8 *)(lVar25 + 0x90);
          uStack_e7 = (undefined7)(CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_e8)) >> 8);
          uStack_90 = *(undefined8 *)(lVar25 + 0xa0);
          uStack_c8 = *(undefined1 *)(lVar25 + 0xa8);
          uStack_d7 = (undefined7)(CONCAT44(uStack_94,uStack_98) >> 8);
          uStack_e0 = (undefined1)uStack_a0;
          uStack_df = (undefined7)((ulong)uStack_a0 >> 8);
          uStack_d0 = (undefined1)uStack_90;
          uStack_cf = (undefined7)((ulong)uStack_90 >> 8);
          uStack_c0 = 1;
          uStack_a8 = uStack_e8;
          uStack_88 = uStack_c8;
          goto LAB_1087a5a4c;
        }
        piStack_f8 = (int *)((ulong)piStack_f8 & 0xffffffffffffff00);
        uStack_b8 = 0;
        if ((char)piVar19[0x1e] == '\x01') {
          *(undefined1 *)(piVar19 + 0x1e) = 0;
        }
        uVar20 = 0;
        bVar11 = false;
        uVar27 = 0;
        unaff_w20 = unaff_w20 & 0xffffff00;
LAB_1087a5bc4:
        piVar19[0x20] = 0;
        *(undefined2 *)(piVar19 + 0x21) = 0;
      }
      if ((param_4 & 1) == 0) {
        if ((((uVar20 & uVar27) == 1) && ((*(byte *)((long)piVar19 + 0x85) & 1) == 0)) &&
           ((*(byte *)(piVar19 + 0x21) & 1) == 0)) {
          *(undefined1 *)((long)piVar19 + 0x85) = 1;
          if (bVar11) {
            puVar3 = (uint *)param_1[4];
            bVar11 = (uint *)param_1[5] <= puVar3;
            if (bVar11) {
              uVar16 = param_1[3];
              lVar22 = (long)puVar3 - uVar16;
              if ((lVar22 >> 2) + 1U >> 0x3e != 0) goto LAB_1087a5fd0;
              func_0x0001087a6570((long)param_1[5] - uVar16);
              uVar26 = extraout_x9;
              if (bVar11) {
                uVar26 = extraout_x8;
              }
              if (uVar26 == 0) {
                lVar14 = 0;
              }
              else {
                if (uVar26 >> 0x3e != 0) {
                  func_0x000104bd35f4();
                  goto LAB_1087a5ffc;
                }
                lVar14 = uVar26 << 2;
                __Znwm();
              }
              puVar3 = (uint *)(lVar14 + lVar22);
              puVar24 = puVar3 + 1;
              *puVar3 = unaff_w20;
              _memcpy(puVar3 + -extraout_x11,uVar16,lVar22);
              param_1[3] = (ulong)(puVar3 + -extraout_x11);
              param_1[5] = lVar14 + uVar26 * 4;
              if (uVar16 != 0) {
                __ZdlPv(uVar16);
              }
            }
            else {
              puVar24 = puVar3 + 1;
              *puVar3 = unaff_w20;
            }
            param_1[4] = (ulong)puVar24;
          }
          else {
            FUN_1087a6194(param_1 + 0xc,*(undefined4 *)(lVar25 + 0x18));
          }
        }
      }
      else {
        lVar22 = *(long *)(piVar19 + 0x22);
        bVar7 = *(byte *)(piVar19 + 0x24);
        uVar8 = *(undefined1 *)(lVar25 + 0xa8);
        *(long *)(piVar19 + 0x22) = *(long *)(lVar25 + 0xa0);
        *(undefined1 *)(piVar19 + 0x24) = uVar8;
        if ((uVar20 & uVar27) == 1) {
          iVar6 = piVar19[0x20];
          piVar19[0x20] = iVar6 + 1;
          if ((*(byte *)(piVar19 + 0x21) & 1) == 0) {
            lVar14 = 0;
            if (!bVar11) {
              lVar14 = 8;
            }
            if (*(int *)((long)param_2 + lVar14) <= iVar6 + 1) {
              *(undefined1 *)(piVar19 + 0x21) = 1;
              if (bVar11) {
                func_0x0001087a658c(&uStack_b0);
                uVar16 = param_1[1];
                bVar11 = param_1[2] <= uVar16;
                uStack_98 = unaff_w20;
                if (bVar11) {
                  uVar26 = *param_1;
                  lVar22 = (long)(uVar16 - uVar26) >> 5;
                  if (lVar22 + 1U >> 0x3b != 0) {
                    FUN_1087a6270();
                    goto LAB_1087a5ffc;
                  }
                  func_0x0001087a654c(param_1[2] - uVar26);
                  uVar28 = extraout_x9_00;
                  if (bVar11) {
                    uVar28 = extraout_x8_00;
                  }
                  if (uVar28 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    if (uVar28 >> 0x3b != 0) {
                      func_0x000104bd35f4();
                      goto LAB_1087a5ffc;
                    }
                    lVar14 = uVar28 << 5;
                    __Znwm();
                  }
                  puVar2 = (undefined8 *)(lVar14 + (uVar16 - uVar26));
                  puVar2[1] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
                  *puVar2 = CONCAT17(uStack_a9,uStack_b0);
                  puVar2[2] = uStack_a0;
                  uStack_a8 = 0;
                  uStack_a7 = 0;
                  uStack_a1 = 0;
                  uStack_a0 = 0;
                  uStack_b0 = 0;
                  uStack_a9 = 0;
                  *(uint *)(puVar2 + 3) = unaff_w20;
                  puVar17 = puVar2 + lVar22 * -4;
                  for (uVar18 = uVar26; uVar18 != uVar16; uVar18 = uVar18 + 0x20) {
                    FUN_1087a626c(puVar17,uVar18);
                    puVar17 = puVar17 + 4;
                  }
                  for (; uVar26 != uVar16; uVar26 = uVar26 + 0x20) {
                    func_0x000107c27914(uVar26);
                  }
                  puVar17 = puVar2 + 4;
                  uVar16 = *param_1;
                  *param_1 = (ulong)(puVar2 + lVar22 * -4);
                  param_1[2] = lVar14 + uVar28 * 0x20;
                  if (uVar16 != 0) {
                    __ZdlPv();
                  }
                }
                else {
                  func_0x0001087a6510();
                  puVar17 = (undefined8 *)(uVar16 + 0x20);
                }
                param_1[1] = (ulong)puVar17;
              }
              else {
                func_0x0001087a658c(&uStack_b0);
                uVar20 = *(uint *)(lVar25 + 0x18);
                uVar16 = param_1[10];
                bVar11 = param_1[0xb] <= uVar16;
                uStack_98 = uVar20;
                if (bVar11) {
                  lVar14 = uVar16 - param_1[9];
                  lVar22 = lVar14 >> 5;
                  if (lVar22 + 1U >> 0x3b != 0) {
                    FUN_1087a6280();
                    goto LAB_1087a5ffc;
                  }
                  func_0x0001087a654c(param_1[0xb] - param_1[9]);
                  uVar26 = extraout_x9_01;
                  if (bVar11) {
                    uVar26 = extraout_x8_01;
                  }
                  if (uVar26 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    if (uVar26 >> 0x3b != 0) {
                      func_0x000104bd35f4();
                      goto LAB_1087a5ffc;
                    }
                    lVar15 = uVar26 << 5;
                    __Znwm();
                  }
                  puVar2 = (undefined8 *)(lVar15 + lVar14);
                  puVar2[1] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
                  *puVar2 = CONCAT17(uStack_a9,uStack_b0);
                  puVar2[2] = uStack_a0;
                  uStack_a8 = 0;
                  uStack_a7 = 0;
                  uStack_a1 = 0;
                  uStack_a0 = 0;
                  uStack_b0 = 0;
                  uStack_a9 = 0;
                  *(uint *)(puVar2 + 3) = uVar20;
                  puVar17 = puVar2 + lVar22 * -4;
                  for (uVar28 = extraout_x11_00; uVar18 = extraout_x11_00, uVar28 != uVar16;
                      uVar28 = uVar28 + 0x20) {
                    FUN_1087a627c(puVar17,uVar28);
                    puVar17 = puVar17 + 4;
                  }
                  for (; uVar18 != uVar16; uVar18 = uVar18 + 0x20) {
                    func_0x000107c27914();
                  }
                  puVar17 = puVar2 + 4;
                  param_1[9] = (ulong)(puVar2 + lVar22 * -4);
                  param_1[0xb] = lVar15 + uVar26 * 0x20;
                  if (extraout_x11_00 != 0) {
                    __ZdlPv();
                  }
                }
                else {
                  func_0x0001087a6510();
                  puVar17 = (undefined8 *)(uVar16 + 0x20);
                }
                param_1[10] = (ulong)puVar17;
              }
              func_0x000107c27914(&uStack_b0);
              goto LAB_1087a5cd0;
            }
          }
        }
        if (((uVar20 == 0) && (*(int *)(lVar25 + 0x18) - 1U < 2)) &&
           (((bVar7 & 1) != 0 &&
            (((*(byte *)(lVar25 + 0xa8) & 1) != 0 && (lVar22 == *(long *)(lVar25 + 0xa0))))))) {
          iVar6 = piVar19[0x26];
          piVar19[0x26] = iVar6 + 1;
          if (((*(byte *)(piVar19 + 0x27) & 1) == 0) && (*param_2 <= iVar6 + 1)) {
            *(undefined1 *)(piVar19 + 0x27) = 1;
            FUN_1087a6194(param_1 + 6,*(undefined4 *)(lVar25 + 0x18));
          }
        }
        else {
          piVar19[0x26] = 0;
          *(undefined1 *)(piVar19 + 0x27) = 0;
        }
      }
    }
LAB_1087a5cd0:
    lVar25 = lVar25 + 0xf8;
  } while( true );
}



/* Entry: 1087a6064; end: 1087a6187;  */

bool FUN_1087a6064(undefined8 param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (*param_2 == *param_3) {
    bVar1 = *(byte *)(param_2 + 2);
    uVar4 = (uint)bVar1;
    uVar5 = (uint)*(byte *)(param_3 + 2);
    if (bVar1 == *(byte *)(param_3 + 2) && bVar1 != 0) {
      uVar4 = param_2[1];
      uVar5 = param_3[1];
    }
    if (uVar4 == uVar5) {
      cVar2 = (char)param_2[6];
      if (cVar2 == (char)param_3[6] && cVar2 != '\0') {
        if (*(double *)(param_2 + 4) == *(double *)(param_3 + 4)) goto LAB_1087a60cc;
      }
      else if (cVar2 == (char)param_3[6]) {
LAB_1087a60cc:
        bVar3 = (char)param_2[10] == (char)param_3[10];
        if ((bVar3) && ((char)param_2[10] != '\0')) {
          bVar3 = *(long *)(param_2 + 8) == *(long *)(param_3 + 8);
        }
        return bVar3;
      }
    }
  }
  return false;
}



/* Entry: 1087a6188; end: 1087a6193;  */

void FUN_1087a6188(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x8;
  ulong extraout_x9;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  func_0x0001087a64d8();
  puVar2 = (undefined4 *)param_1[1];
  bVar3 = (undefined4 *)param_1[2] <= puVar2;
  uVar7 = SUB84(param_2,0);
  if (bVar3) {
    lVar6 = *param_1;
    lVar8 = (long)puVar2 - lVar6;
    if ((lVar8 >> 2) + 1U >> 0x3e != 0) {
      FUN_1087a6260();
      plVar4 = param_1;
LAB_1087a625c:
      func_0x000104bd35f4();
      func_0x0001087a64d8();
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar6 = *param_2;
      plVar4[1] = param_2[1];
      *plVar4 = lVar6;
      plVar4[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(int *)(plVar4 + 3) = (int)param_2[3];
      return;
    }
    plVar4 = param_1;
    func_0x0001087a6570(param_1[2] - lVar6);
    uVar1 = extraout_x9;
    if (bVar3) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_1087a625c;
      lVar5 = uVar1 << 2;
      __Znwm();
    }
    puVar2 = (undefined4 *)(lVar5 + lVar8);
    puVar9 = puVar2 + 1;
    *puVar2 = uVar7;
    _memcpy(puVar2 + -(lVar8 >> 2),lVar6,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 2));
    param_1[1] = (long)puVar9;
    param_1[2] = lVar5 + uVar1 * 4;
    if (lVar6 != 0) {
      __ZdlPv(lVar6);
    }
  }
  else {
    puVar9 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1087a6194; end: 1087a625f;  */

void FUN_1087a6194(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x8;
  ulong extraout_x9;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  bVar3 = (undefined4 *)param_1[2] <= puVar2;
  uVar7 = SUB84(param_2,0);
  if (bVar3) {
    lVar6 = *param_1;
    lVar8 = (long)puVar2 - lVar6;
    if ((lVar8 >> 2) + 1U >> 0x3e != 0) {
      FUN_1087a6260();
      plVar4 = param_1;
LAB_1087a625c:
      func_0x000104bd35f4();
      func_0x0001087a64d8();
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar6 = *param_2;
      plVar4[1] = param_2[1];
      *plVar4 = lVar6;
      plVar4[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(int *)(plVar4 + 3) = (int)param_2[3];
      return;
    }
    plVar4 = param_1;
    func_0x0001087a6570(param_1[2] - lVar6);
    uVar1 = extraout_x9;
    if (bVar3) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_1087a625c;
      lVar5 = uVar1 << 2;
      __Znwm();
    }
    puVar2 = (undefined4 *)(lVar5 + lVar8);
    puVar9 = puVar2 + 1;
    *puVar2 = uVar7;
    _memcpy(puVar2 + -(lVar8 >> 2),lVar6,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 2));
    param_1[1] = (long)puVar9;
    param_1[2] = lVar5 + uVar1 * 4;
    if (lVar6 != 0) {
      __ZdlPv(lVar6);
    }
  }
  else {
    puVar9 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1087a6260; end: 1087a626b;  */

void FUN_1087a6260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001087a64d8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1087a626c; end: 1087a626f;  */

void FUN_1087a626c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1087a6270; end: 1087a627b;  */

void FUN_1087a6270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001087a64d8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1087a627c; end: 1087a627f;  */

void FUN_1087a627c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1087a6280; end: 1087a628b;  */

undefined8 FUN_1087a6280(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001087a64d8();
  func_0x0001087a62cc(param_1 + 0x60);
  FUN_1087a6308(param_1 + 0x48);
  func_0x0001087a62cc(param_1 + 0x30);
  func_0x0001087a63a8(param_1 + 0x18);
  func_0x0001087a653c(param_1);
  func_0x0001087a6408();
  return unaff_x19;
}



/* Entry: 1087a628c; end: 1087a62ef;  */

undefined8 FUN_1087a628c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001087a62cc(param_1 + 0x60);
  FUN_1087a6308(param_1 + 0x48);
  func_0x0001087a62cc(param_1 + 0x30);
  func_0x0001087a63a8(param_1 + 0x18);
  func_0x0001087a653c(param_1);
  func_0x0001087a6408();
  return unaff_x19;
}



/* Entry: 1087a62f0; end: 1087a6307;  */

void FUN_1087a62f0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087a6308; end: 1087a6367;  */

void FUN_1087a6308(void)

{
  func_0x0001087a653c();
  func_0x0001087a632c();
  return;
}



/* Entry: 1087a6368; end: 1087a636f;  */

void FUN_1087a6368(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087a6370; end: 1087a63cb;  */

void FUN_1087a6370(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1087a63cc; end: 1087a63e3;  */

void FUN_1087a63cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087a63e4; end: 1087a6443;  */

void FUN_1087a63e4(void)

{
  func_0x0001087a653c();
  func_0x0001087a6408();
  return;
}



/* Entry: 1087a6444; end: 1087a644b;  */

void FUN_1087a6444(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087a644c; end: 1087a64cb;  */

void FUN_1087a644c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1087a64cc; end: 1087a65e3;  */

void FUN_1087a64cc(void)

{
  return;
}



/* Entry: 1087a65e4; end: 1087a6707;  */

void FUN_1087a65e4(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined1 auStack_300 [680];
  long lStack_58;
  long lStack_50;
  
  if ((char)param_4[3] == '\x01') {
    FUN_10886986c(auStack_300,*param_1,param_4);
    func_0x0001087a6adc();
    func_0x0001087a6ad4();
    FUN_1087a67c4(param_2,param_4,&lStack_58);
    func_0x0001087a6af0();
  }
  if ((1 < (ulong)((param_3[1] - *param_3) / 0x18)) &&
     (((char)param_4[3] != '\x01' || (param_4[1] - *param_4 != param_3[1] - *param_3)))) {
    FUN_10886986c(auStack_300,*param_1,param_3);
    func_0x0001087a6adc();
    func_0x0001087a6ad4();
    if (lStack_58 != lStack_50) {
      plVar1 = &lStack_58;
      FUN_1087a683c();
      (**(code **)(*(long *)*param_2 + 0xf0))
                ((long *)*param_2,param_3,(int)plVar1[0x11],2,plVar1[0x13] * 1000);
    }
    func_0x0001087a6af0();
  }
  return;
}



/* Entry: 1087a6708; end: 1087a67c3;  */

void FUN_1087a6708(undefined8 param_1)

{
  undefined1 auStack_ab0 [672];
  undefined1 auStack_810 [672];
  undefined1 auStack_570 [672];
  undefined1 auStack_2d0 [672];
  
  FUN_1086d5044(auStack_570);
  FUN_1087a68d0(auStack_2d0,auStack_570);
  _bzero(auStack_ab0,0x2a0);
  FUN_1087a68d0(auStack_810,auStack_ab0);
  FUN_1087a693c(param_1,auStack_2d0,auStack_810);
  func_0x0001087a6ae8();
  func_0x0001087a6aa8(auStack_ab0);
  func_0x0001087a6ab0();
  func_0x0001087a6aa8(auStack_570);
  return;
}



/* Entry: 1087a67c4; end: 1087a683b;  */

void FUN_1087a67c4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  if (*param_3 != param_3[1]) {
    FUN_1087a683c();
                    /* WARNING: Could not recover jumptable at 0x0001087a681c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0xf0))
              ((long *)*param_1,param_2,(int)param_3[0x11],2,param_3[0x13] * 1000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001087a6838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,param_2);
  return;
}



/* Entry: 1087a683c; end: 1087a684f;  */

void FUN_1087a683c(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0x1087a6594;
  FUN_1087a6874(*param_1,param_1[1],&uStack_18);
  return;
}



/* Entry: 1087a6850; end: 1087a6873;  */

void FUN_1087a6850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1087a6874(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1087a6874; end: 1087a68cf;  */

long FUN_1087a6874(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  lVar3 = param_1;
  if (param_1 != param_2) {
    while (param_1 = lVar1, lVar3 = lVar3 + 0x290, lVar3 != param_2) {
      lVar2 = param_1;
      (*(code *)*param_3)(param_1,lVar3);
      lVar1 = lVar3;
      if ((int)lVar2 == 0) {
        lVar1 = param_1;
      }
    }
  }
  return param_1;
}



/* Entry: 1087a68d0; end: 1087a691b;  */

void FUN_1087a68d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_2d0 [672];
  
  FUN_1087a691c(auStack_2d0,param_2);
  FUN_1087a691c(param_1,auStack_2d0);
  func_0x0001087a6ab0();
  return;
}



/* Entry: 1087a691c; end: 1087a693b;  */

void FUN_1087a691c(void)

{
  func_0x0001087a6af8();
  FUN_1087920ac();
  return;
}



/* Entry: 1087a693c; end: 1087a69bf;  */

undefined8 * FUN_1087a693c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_570 [672];
  undefined1 auStack_2d0 [672];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001087a6a88(auStack_2d0);
  func_0x0001087a6a88(auStack_570,param_3);
  FUN_1087a69c0(param_1,auStack_2d0,auStack_570);
  func_0x0001087a6ab0();
  func_0x0001087a6ae8();
  return param_1;
}



/* Entry: 1087a69c0; end: 1087a6a5b;  */

void FUN_1087a69c0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(param_2 + 0x53) & 1) != 0 || ((*(byte *)(param_3 + 0x53) & 1) != 0)) &&
         (*param_2 != *param_3))) {
    plVar1 = param_2;
    FUN_1086d505c(param_2);
    FUN_1087907cc(param_1,plVar1);
    FUN_10879579c(param_2);
  }
  uStack_38 = 1;
  FUN_1087a6a5c(&uStack_40);
  return;
}



/* Entry: 1087a6a5c; end: 1087a6aa7;  */

long FUN_1087a6a5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108791ca8(param_1);
  }
  return param_1;
}



/* Entry: 1087a6aa8; end: 1087a6b0b;  */

void FUN_1087a6aa8(long param_1)

{
  if (*(char *)(param_1 + 0x298) == '\x01') {
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 1087a6b0c; end: 1087a6f7f;  */

void FUN_1087a6b0c(long param_1,long *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [40];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [32];
  undefined4 uStack_d0;
  undefined1 auStack_c8 [40];
  uint auStack_a0 [6];
  undefined1 auStack_88 [24];
  char cStack_70;
  
  if (*param_2 != param_2[1]) {
    ppuVar9 = *(undefined ***)(*param_2 + 0x80);
    ppuVar1 = &PTR_PTR_113286e08;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9;
    }
    if (((ulong)ppuVar1[2] & 1) != 0) {
      ppuVar9 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(ppuVar1[0x21] + 0x18) != (undefined **)0x0) {
        ppuVar9 = *(undefined ***)(ppuVar1[0x21] + 0x18);
      }
      FUN_1088472f0(auStack_88,ppuVar9);
      if (cStack_70 == '\x01') {
        puVar5 = auStack_a0;
        func_0x000107c27994(puVar5,auStack_88);
        ppuVar1 = &PTR_PTR_113286e08;
        if (*(undefined ***)(*param_2 + 0x80) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(*param_2 + 0x80);
        }
        ppuVar9 = &PTR_PTR_113284250;
        if ((undefined **)ppuVar1[0x21] != (undefined **)0x0) {
          ppuVar9 = (undefined **)ppuVar1[0x21];
        }
        uVar2 = *(uint *)((long)ppuVar9 + 0x24);
        if (uVar2 != 0) {
          puVar13 = *(uint **)(param_1 + 0x20);
          puVar6 = puVar5;
          if ((puVar13 != (uint *)0x0) && (*(long *)(param_1 + 0x30) != 0)) {
            FUN_108848654();
            uVar14 = (long)puVar13 - 1;
            if (((ulong)puVar13 & uVar14) == 0) {
              puVar15 = (uint *)((ulong)puVar5 & uVar14);
            }
            else {
              puVar15 = puVar5;
              if (puVar13 <= puVar5) {
                uVar3 = 0;
                uVar12 = (uint)puVar13;
                if (uVar12 != 0) {
                  uVar3 = (uint)puVar5 / uVar12;
                }
                puVar15 = (uint *)(ulong)((uint)puVar5 - uVar3 * uVar12);
              }
            }
            plVar16 = *(long **)(*(long *)(param_1 + 0x18) + (long)puVar15 * 8);
            puVar6 = puVar5;
            if (plVar16 != (long *)0x0) {
              do {
                while( true ) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_1087a6c60;
                  puVar10 = (uint *)plVar16[1];
                  if (puVar5 != puVar10) break;
                  puVar6 = (uint *)(plVar16 + 2);
                  func_0x000107c28078(puVar6,auStack_a0);
                  if ((int)puVar6 != 0) {
                    func_0x0001087a7644();
                    if ((char)puVar6[1] != '\x01') goto LAB_1087a6df4;
                    func_0x0001087a7644();
                    uVar14 = (param_2[1] - *param_2) / 0x1a8;
                    if ((char)puVar6[1] == '\x01' && uVar14 <= *puVar6) goto LAB_1087a6df4;
                    func_0x0001087a7644();
                    *puVar6 = (uint)uVar14;
                    *(undefined1 *)(puVar6 + 1) = 1;
                    func_0x0001087a7628();
                    uStack_d0 = 0x1af;
                    func_0x0001087a7674();
                    puVar7 = auStack_108;
                    func_0x000107c278b8(puVar7);
                    func_0x0001087a7658();
                    puVar8 = auStack_f0;
                    func_0x000107c28824(puVar8,auStack_108,puVar7);
                    func_0x000107c2884c(auStack_c8,puVar8);
                    func_0x0001087a7668();
                    func_0x0001087a7650();
                    func_0x000107c2882c(auStack_c8);
                    puVar7 = auStack_108;
                    goto LAB_1087a6de8;
                  }
                }
                if (((ulong)puVar13 & uVar14) == 0) {
                  puVar10 = (uint *)((ulong)puVar10 & uVar14);
                }
                else if (puVar13 <= puVar10) {
                  uVar4 = 0;
                  if (puVar13 != (uint *)0x0) {
                    uVar4 = (ulong)puVar10 / (ulong)puVar13;
                  }
                  puVar10 = (uint *)((long)puVar10 - uVar4 * (long)puVar13);
                }
              } while (puVar10 == puVar15);
            }
          }
LAB_1087a6c60:
          uVar14 = (param_2[1] - *param_2) / 0x1a8;
          if (uVar14 == uVar2) {
            func_0x0001087a7644();
            if ((char)puVar6[1] == '\x01') {
              *(undefined1 *)(puVar6 + 1) = 0;
            }
            puVar11 = (undefined8 *)(*param_2 + 0x80);
            uVar14 = 0xffffffffffffffff;
            do {
              if (uVar14 - (param_2[1] - *param_2) / 0x1a8 == -1) {
                func_0x0001087a7628();
                uStack_d0 = 0x1ac;
                func_0x0001087a7674();
                puVar7 = auStack_1c8;
                func_0x000107c278b8(puVar7);
                func_0x0001087a7658();
                puVar8 = auStack_f0;
                func_0x000107c28824(puVar8,auStack_1c8,puVar7);
                func_0x000107c2884c(auStack_1b0,puVar8);
                func_0x0001087a7668();
                func_0x0001087a7650();
                func_0x000107c2882c(auStack_1b0);
                puVar7 = auStack_1c8;
                goto LAB_1087a6de8;
              }
              ppuVar1 = &PTR_PTR_113286e08;
              if ((undefined **)*puVar11 != (undefined **)0x0) {
                ppuVar1 = (undefined **)*puVar11;
              }
              ppuVar9 = &PTR_PTR_113284250;
              if ((undefined **)ppuVar1[0x21] != (undefined **)0x0) {
                ppuVar9 = (undefined **)ppuVar1[0x21];
              }
              puVar11 = puVar11 + 0x35;
              uVar14 = uVar14 + 1;
            } while (uVar14 == *(uint *)(ppuVar9 + 4));
            func_0x0001087a7628();
            uStack_d0 = 0x1ad;
            func_0x0001087a7674();
            puVar7 = auStack_188;
            func_0x000107c278b8(puVar7);
            func_0x0001087a7658();
            puVar8 = auStack_f0;
            func_0x000107c28824(puVar8,auStack_188,puVar7);
            func_0x000107c2884c(auStack_170,puVar8);
            func_0x0001087a7668();
            func_0x0001087a7650();
            func_0x000107c2882c(auStack_170);
            puVar7 = auStack_188;
          }
          else {
            func_0x0001087a7644();
            *puVar6 = (uint)uVar14;
            *(undefined1 *)(puVar6 + 1) = 1;
            func_0x0001087a7628();
            uStack_d0 = 0x1ae;
            func_0x0001087a7674();
            puVar7 = auStack_148;
            func_0x000107c278b8(puVar7);
            func_0x0001087a7658();
            puVar8 = auStack_f0;
            func_0x000107c28824(puVar8,auStack_148,puVar7);
            func_0x000107c2884c(auStack_130,puVar8);
            func_0x0001087a7668();
            func_0x0001087a7650();
            func_0x000107c2882c(auStack_130);
            puVar7 = auStack_148;
          }
LAB_1087a6de8:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
          func_0x000107c2882c(auStack_f0);
        }
LAB_1087a6df4:
        func_0x000107c27914(auStack_a0);
      }
      func_0x000107c279dc(auStack_88);
    }
  }
  return;
}



/* Entry: 1087a6f80; end: 1087a733b;  */

long * FUN_1087a6f80(long *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x25;
  
  uVar7 = param_2;
  FUN_108848654();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar13 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar13) == 0) {
      unaff_x25 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar15 <= uVar7) {
        uVar1 = 0;
        if (uVar14 != 0) {
          uVar1 = (uint)uVar7 / uVar14;
        }
        unaff_x25 = (ulong)((uint)uVar7 - uVar1 * uVar14);
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1087a7044;
          uVar5 = plVar12[1];
          if (uVar5 != uVar7) break;
          plVar3 = plVar12 + 2;
          func_0x000107c28078(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_1087a7300;
        }
        if ((uVar15 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar15 <= uVar5) {
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = uVar5 / uVar15;
          }
          uVar5 = uVar5 - uVar6 * uVar15;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_1087a7044:
  plVar3 = param_1 + 2;
  plVar12 = (long *)0x30;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar7;
  func_0x000107c27994(plVar12 + 2,param_2);
  *(undefined1 *)(plVar12 + 5) = 0;
  *(undefined1 *)((long)plVar12 + 0x2c) = 0;
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_1087a728c;
  uVar13 = 1;
  if (2 < uVar15) {
    uVar13 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar13 = uVar13 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar13 <= uVar15) {
    uVar13 = uVar15;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar13) {
LAB_1087a70fc:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087a7328);
      (*pcVar2)();
    }
    lVar4 = uVar13 << 3;
    __Znwm(lVar4);
    FUN_1087a75c8(param_1,lVar4);
    param_1[1] = uVar13;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar3;
    uVar15 = uVar13;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar13 - 1;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar10 / uVar13;
      }
      uVar11 = uVar10;
      if (uVar13 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar13;
      }
      if ((uVar13 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar4 + uVar11 * 8) = plVar3;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar13 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar4 + uVar5 * 8) == 0) {
            *(long **)(lVar4 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + uVar5 * 8);
            **(long **)(lVar4 + uVar5 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar15) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 < uVar15) {
      if (uVar13 != 0) goto LAB_1087a70fc;
      FUN_1087a75c8(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = (int)uVar15 - 1 & uVar7;
  }
  else {
    unaff_x25 = uVar7;
    if (uVar15 <= uVar7) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = uVar7 / uVar15;
      }
      unaff_x25 = uVar7 - uVar13 * uVar15;
    }
  }
LAB_1087a728c:
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar3;
    *plVar3 = (long)plVar12;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar3;
    if (*plVar12 != 0) {
      uVar7 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar7 = uVar7 & uVar15 - 1;
      }
      else if (uVar15 <= uVar7) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar13 * uVar15;
      }
      *(long **)(lVar4 + uVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x0001087a7660();
LAB_1087a7300:
  return plVar12 + 5;
}



/* Entry: 1087a733c; end: 1087a753f;  */

void FUN_1087a733c(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *(ulong *)(param_1 + 0x20);
  if ((uVar12 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar6 = param_2;
    FUN_108848654();
    uVar13 = uVar12 - 1;
    if ((uVar12 & uVar13) == 0) {
      uVar9 = uVar6 & uVar13;
    }
    else {
      uVar9 = uVar6;
      if (uVar12 <= uVar6) {
        uVar1 = 0;
        uVar11 = (uint)uVar12;
        if (uVar11 != 0) {
          uVar1 = (uint)uVar6 / uVar11;
        }
        uVar9 = (ulong)((uint)uVar6 - uVar1 * uVar11);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x18) + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
          uVar4 = plVar10[1];
          if (uVar4 != uVar6) break;
          plVar3 = plVar10 + 2;
          func_0x000107c28078(plVar3,param_2);
          if ((int)plVar3 != 0) {
            uVar6 = *(ulong *)(param_1 + 0x20);
            lVar5 = *plVar10;
            uVar12 = plVar10[1];
            uVar13 = uVar6 - 1;
            if ((uVar6 & uVar13) == 0) {
              uVar12 = uVar13 & uVar12;
            }
            else if (uVar6 <= uVar12) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar9 * uVar6;
            }
            lVar8 = *(long *)(param_1 + 0x18);
            plVar3 = *(long **)(lVar8 + uVar12 * 8);
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != plVar10);
            if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_1087a7484:
              if (lVar5 == 0) {
LAB_1087a74b8:
                *(undefined8 *)(lVar8 + uVar12 * 8) = 0;
                lVar5 = *plVar10;
                goto LAB_1087a74c0;
              }
              uVar9 = *(ulong *)(lVar5 + 8);
              if ((uVar6 & uVar13) == 0) {
                uVar4 = uVar9 & uVar13;
              }
              else {
                uVar4 = uVar9;
                if (uVar6 <= uVar9) {
                  uVar4 = 0;
                  if (uVar6 != 0) {
                    uVar4 = uVar9 / uVar6;
                  }
                  uVar4 = uVar9 - uVar4 * uVar6;
                }
              }
              if (uVar4 != uVar12) goto LAB_1087a74b8;
            }
            else {
              uVar9 = plVar7[1];
              if ((uVar6 & uVar13) == 0) {
                uVar9 = uVar9 & uVar13;
              }
              else if (uVar6 <= uVar9) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar4 * uVar6;
              }
              if (uVar9 != uVar12) goto LAB_1087a7484;
LAB_1087a74c0:
              if (lVar5 == 0) goto LAB_1087a74f8;
              uVar9 = *(ulong *)(lVar5 + 8);
            }
            if ((uVar6 & uVar13) == 0) {
              uVar9 = uVar9 & uVar13;
            }
            else if (uVar6 <= uVar9) {
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar13 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar13 * uVar6;
            }
            if (uVar9 != uVar12) {
              *(long **)(lVar8 + uVar9 * 8) = plVar7;
              lVar5 = *plVar10;
            }
LAB_1087a74f8:
            *plVar7 = lVar5;
            *plVar10 = 0;
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
            func_0x0001087a7660();
            return;
          }
        }
        if ((uVar12 & uVar13) == 0) {
          uVar4 = uVar4 & uVar13;
        }
        else if (uVar12 <= uVar4) {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = uVar4 / uVar12;
          }
          uVar4 = uVar4 - uVar2 * uVar12;
        }
      } while (uVar4 == uVar9);
    }
  }
  return;
}



/* Entry: 1087a7540; end: 1087a7543;  */

undefined8 * FUN_1087a7540(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a70380;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 1087a7544; end: 1087a7557;  */

void FUN_1087a7544(void)

{
  FUN_1087a7558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a7558; end: 1087a75c7;  */

undefined8 * FUN_1087a7558(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a70380;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 1087a75c8; end: 1087a75df;  */

void FUN_1087a75c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087a75e0; end: 1087a7627;  */

long * FUN_1087a75e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1087a7628; end: 1087a767f;  */

void FUN_1087a7628(void)

{
  return;
}



/* Entry: 1087a7680; end: 1087a76ff;  */

void FUN_1087a7680(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  (**(code **)(*(long *)*param_1 + 0x10))();
  if ((((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0) &&
      ((*(byte *)(*(long *)(param_2 + 0x30) + 0x10) >> 1 & 1) != 0)) &&
     (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 0x19) == '\x01')) {
    (**(code **)(*(long *)param_1[2] + 0x48))((long *)param_1[2],0x1a2,1);
    lVar1 = param_1[1] + 0x550;
    if (*(char *)(param_1[1] + 0x618) == '\x01') {
      func_0x000107c2a500();
      *(undefined1 *)(lVar1 + 200) = 0;
    }
    return;
  }
  return;
}



/* Entry: 1087a7700; end: 1087a7723;  */

void FUN_1087a7700(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x000107c2a500();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 1087a7724; end: 1087a8d0f;  */

void FUN_1087a7724(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 uVar26;
  undefined8 **extraout_x8;
  undefined8 **extraout_x8_00;
  undefined8 **ppuVar27;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w10_41;
  int extraout_w10_42;
  undefined8 extraout_x10;
  undefined8 uVar28;
  undefined8 ***extraout_x10_00;
  long extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 uVar29;
  undefined8 ***extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  uint uVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  undefined8 *puVar37;
  long lVar38;
  byte bVar39;
  long lVar40;
  undefined8 ***pppuVar41;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_150;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 **ppuStack_80;
  long lStack_78;
  
  uVar16 = *(ulong *)*param_2;
  if ((uVar16 == 0) || (func_0x000107c29e14(uVar16,0x39), (uVar16 & 1) == 0)) {
    pbVar17 = (byte *)(param_2 + 7);
    func_0x000107c289e8();
    bVar39 = *pbVar17;
  }
  else {
    bVar39 = 1;
  }
  puVar37 = (undefined8 *)*param_2;
  uVar12 = 1;
  uVar13 = (undefined **)puVar37[0x5b] == (undefined **)0x0;
  ppuVar1 = &PTR_PTR_1133a62f8;
  if (!(bool)uVar13) {
    ppuVar1 = (undefined **)puVar37[0x5b];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x000107c29248(&uStack_190);
  lVar38 = puVar37[6];
  lVar33 = puVar37[6];
  pppuVar41 = (undefined8 ***)puVar37[5];
  uVar18 = 0x108;
  __Znwm();
  ppuStack_80 = pppuVar41;
  lStack_78 = lVar33;
  if (lVar38 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10 != 0);
  }
  lStack_88 = puVar37[8];
  uStack_90 = puVar37[7];
  if (puVar37[8] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_00 != 0);
  }
  lStack_98 = puVar37[0xe];
  uStack_a0 = puVar37[0xd];
  if (puVar37[0xe] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_01 != 0);
  }
  lStack_a8 = puVar37[0x18];
  uStack_b0 = puVar37[0x17];
  if (puVar37[0x18] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_02 != 0);
  }
  lStack_b8 = puVar37[0x12];
  uStack_c0 = puVar37[0x11];
  if (puVar37[0x12] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_03 != 0);
  }
  lStack_c8 = puVar37[10];
  uStack_d0 = puVar37[9];
  if (puVar37[10] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_04 != 0);
  }
  uStack_d8 = puVar37[0xc];
  uStack_e0 = puVar37[0xb];
  if (puVar37[0xc] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_05 != 0);
  }
  lStack_e8 = puVar37[0x16];
  lStack_f0 = puVar37[0x15];
  if (puVar37[0x16] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_06 != 0);
  }
  func_0x000107c27994(&pppuStack_170,puVar37 + 2);
  lStack_f8 = param_3[1];
  uStack_100 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_07 != 0);
  }
  uStack_110 = puVar37[0x2d];
  lStack_108 = puVar37[0x2e];
  if (lStack_108 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_08 != 0);
  }
  uStack_120 = puVar37[0x27];
  lStack_118 = puVar37[0x28];
  if (lStack_118 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_09 != 0);
  }
  uStack_130 = puVar37[0x2b];
  lStack_128 = puVar37[0x2c];
  if (lStack_128 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_10 != 0);
  }
  uStack_140 = puVar37[0x33];
  lStack_138 = puVar37[0x34];
  if (lStack_138 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_11 != 0);
  }
  uStack_178 = uStack_188;
  uStack_180 = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  func_0x0001087a9e2c();
  func_0x0001087a9e14();
  func_0x0001087ceba4(uVar18);
  func_0x000107c289ac(&uStack_180);
  func_0x000107c29954(&uStack_140);
  func_0x000107c29948(&uStack_130);
  func_0x000107c288a4(&uStack_120);
  func_0x000107c28ab4(&uStack_110);
  func_0x000104be36f0(&uStack_100);
  func_0x000107c27914(&pppuStack_170);
  func_0x000107c28ab8(&lStack_f0);
  func_0x0001087a9dc4();
  func_0x000107c29194(&uStack_d0);
  func_0x000107c29958(&uStack_c0);
  puVar22 = &uStack_b0;
  func_0x000107c2814c();
  func_0x0001087a9d90();
  func_0x0001087a9ccc();
  func_0x0001087a9d50();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c30(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bb0();
  }
  else {
    func_0x0001087a9bf4();
    if ((bool)uVar12) {
      func_0x0001087a9ca4();
      func_0x0001087a9bc0();
      func_0x0001087a9e08();
      if (puVar22 != (undefined8 *)0x0) {
        func_0x0001087a9d48();
      }
      func_0x0001087a9b5c((long)puVar37 - lVar38);
      func_0x0001087a9c18();
    }
    else {
      *puVar37 = uVar18;
      puVar37 = puVar37 + 1;
    }
    param_1[1] = (long)puVar37;
  }
  func_0x000107c29254(&uStack_190);
  plVar21 = *(long **)(*param_2 + 0x148);
  lVar35 = *(long *)(*param_2 + 0x150);
  puVar37 = (undefined8 *)0x20;
  __Znwm();
  if (lVar35 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_12 != 0);
  }
  *(undefined4 *)(puVar37 + 1) = 2;
  *puVar37 = &PTR_FUN_110a71eb8;
  puVar37[2] = plVar21;
  puVar37[3] = lVar35;
  pppuStack_170 = (undefined8 ***)0x0;
  puStack_168 = (undefined8 *)0x0;
  ppppuVar24 = &pppuStack_170;
  func_0x000107c28858();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c30(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bb0();
  }
  else {
    func_0x0001087a9bf4();
    if ((bool)uVar12) {
      func_0x0001087a9ca4();
      func_0x0001087a9bc0();
      func_0x0001087a9e08();
      if (ppppuVar24 != (undefined8 ****)0x0) {
        func_0x0001087a9d48();
      }
      func_0x0001087a9b5c((long)plVar21 - lVar38);
      func_0x0001087a9c18();
    }
    else {
      *plVar21 = (long)puVar37;
      plVar21 = plVar21 + 1;
    }
    param_1[1] = (long)plVar21;
  }
  if ((bVar39 & 1) == 0) {
    func_0x0001087a9d34();
    func_0x0001087a9d78();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
  }
  pbVar17 = (byte *)(param_2 + 0x19);
  func_0x000107c289e8();
  if ((*pbVar17 & 1) == 0) {
    lVar35 = *param_2;
    lVar19 = 0x50;
    __Znwm();
    lVar20 = lVar19;
    FUN_1087bbe04();
    func_0x0001087a9cc0();
    if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
       (func_0x0001087a9c30(), (bool)uVar13)) {
      func_0x0001087a9bcc();
      func_0x0001087a9be8();
      if (pppuStack_170 != (undefined8 ***)0x0) {
        func_0x0001087a9ba4();
      }
      func_0x0001087a9bb0();
    }
    else {
      func_0x0001087a9bf4();
      if ((bool)uVar12) {
        func_0x0001087a9ca4();
        func_0x0001087a9bc0();
        func_0x0001087a9e08();
        if (lVar20 != 0) {
          func_0x0001087a9d48();
        }
        func_0x0001087a9b5c((long)plVar21 - lVar38);
        func_0x0001087a9c18();
      }
      else {
        *plVar21 = lVar19;
        plVar21 = plVar21 + 1;
      }
      param_1[1] = (long)plVar21;
    }
  }
  func_0x0001087a9ed4();
  lVar20 = 0xa8;
  __Znwm();
  pppuStack_170 = pppuVar41;
  puStack_168 = (undefined8 *)lVar33;
  if (plVar21 != (long *)0x0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_13 != 0);
  }
  lStack_78 = *(undefined8 *)(lVar35 + 0x30);
  ppuStack_80 = *(undefined8 ***)(lVar35 + 0x28);
  if (*(long *)(lVar35 + 0x30) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_14 != 0);
  }
  lStack_88 = *(undefined8 *)(lVar35 + 0x40);
  uStack_90 = *(undefined8 *)(lVar35 + 0x38);
  if (*(long *)(lVar35 + 0x40) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_15 != 0);
  }
  lStack_98 = *(undefined8 *)(lVar35 + 0x60);
  uStack_a0 = *(undefined8 *)(lVar35 + 0x58);
  if (*(long *)(lVar35 + 0x60) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_16 != 0);
  }
  uStack_b0 = *(undefined8 *)(lVar35 + 0x318);
  lStack_a8 = *(long *)(lVar35 + 800);
  if (lStack_a8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_17 != 0);
  }
  uStack_c0 = *(undefined8 *)(lVar35 + 0x138);
  lStack_b8 = *(long *)(lVar35 + 0x140);
  if (lStack_b8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_18 != 0);
  }
  func_0x0001087a9d58();
  FUN_1087bc0c0(lVar20);
  func_0x000107c288a4(&uStack_c0);
  puVar37 = &uStack_b0;
  func_0x000107c29118();
  func_0x0001087a9d90();
  func_0x0001087a9ccc();
  func_0x0001087a9d50();
  func_0x0001087a9e44();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c30(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bb0();
  }
  else {
    func_0x0001087a9bf4();
    if ((bool)uVar12) {
      func_0x0001087a9ca4();
      func_0x0001087a9bc0();
      func_0x0001087a9e08();
      if (puVar37 != (undefined8 *)0x0) {
        func_0x0001087a9d48();
      }
      func_0x0001087a9b5c((long)plVar21 - lVar38);
      func_0x0001087a9c18();
    }
    else {
      *plVar21 = lVar20;
      plVar21 = plVar21 + 1;
    }
    param_1[1] = (long)plVar21;
  }
  lVar38 = *param_2;
  pppuVar2 = *(undefined8 ****)(lVar38 + 0x138);
  puVar37 = *(undefined8 **)(lVar38 + 0x140);
  uVar18 = 0xb8;
  __Znwm();
  if (puVar37 != (undefined8 *)0x0) {
    plVar21 = puVar37 + 1;
    do {
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  pppuStack_170 = pppuVar2;
  puStack_168 = puVar37;
  FUN_1087c5c00(uVar18,lVar38 + 0xe8,lVar38 + 0x38,lVar38 + 0x1f8,lVar38 + 0x58,&pppuStack_170,
                lVar38 + 0x1b8,ppuVar1,lVar38 + 0x308);
  ppppuVar24 = &pppuStack_170;
  func_0x000107c288a4();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c30(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bb0();
  }
  else {
    func_0x0001087a9bf4();
    if ((bool)uVar12) {
      func_0x0001087a9ca4();
      func_0x0001087a9bc0();
      func_0x0001087a9e08();
      if (ppppuVar24 != (undefined8 ****)0x0) {
        func_0x0001087a9d48();
      }
      func_0x0001087a9b5c((long)puVar37 - (long)pppuVar2);
      func_0x0001087a9c18();
    }
    else {
      *puVar37 = uVar18;
      puVar37 = puVar37 + 1;
    }
    param_1[1] = (long)puVar37;
  }
  func_0x0001087a9ed4();
  uVar18 = 0xb8;
  __Znwm();
  pppuStack_170 = pppuVar41;
  puStack_168 = (undefined8 *)lVar33;
  if (puVar37 != (undefined8 *)0x0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_19 != 0);
  }
  lStack_78 = *(undefined8 *)(lVar38 + 0x30);
  ppuStack_80 = *(undefined8 ***)(lVar38 + 0x28);
  if (*(long *)(lVar38 + 0x30) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_20 != 0);
  }
  lStack_88 = *(undefined8 *)(lVar38 + 0x40);
  uStack_90 = *(undefined8 *)(lVar38 + 0x38);
  if (*(long *)(lVar38 + 0x40) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_21 != 0);
  }
  uStack_a0 = *(undefined8 *)(lVar38 + 0x128);
  lStack_98 = *(long *)(lVar38 + 0x130);
  if (lStack_98 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_22 != 0);
  }
  uStack_b0 = *(undefined8 *)(lVar38 + 0x138);
  lStack_a8 = *(long *)(lVar38 + 0x140);
  if (lStack_a8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_23 != 0);
  }
  lStack_b8 = *(undefined8 *)(lVar38 + 0xb0);
  uStack_c0 = *(undefined8 *)(lVar38 + 0xa8);
  if (*(long *)(lVar38 + 0xb0) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_24 != 0);
  }
  func_0x0001087a9d58();
  FUN_1087bee7c(uVar18);
  puVar37 = &uStack_c0;
  func_0x000107c28ab8();
  func_0x0001087a9e98();
  func_0x0001087a9d88();
  func_0x0001087a9ccc();
  func_0x0001087a9d50();
  func_0x0001087a9e44();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c30(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if (pppuStack_170 != (undefined8 ***)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bb0();
  }
  else {
    plVar21 = param_1 + 2;
    puVar22 = (undefined8 *)param_1[1];
    if (puVar22 < (undefined8 *)*plVar21) {
      puVar32 = puVar22 + 1;
      *puVar22 = uVar18;
    }
    else {
      func_0x0001087a9c94();
      func_0x0001087a9bc0();
      lVar38 = *param_1;
      puVar32 = (undefined8 *)param_1[1];
      plStack_150 = plVar21;
      if (puVar37 != (undefined8 *)0x0) {
        func_0x0001087a9dcc();
      }
      func_0x0001087a9b5c((long)puVar32 - lVar38);
      func_0x0001087a9c24();
    }
    param_1[1] = (long)puVar32;
  }
  plVar21 = param_2 + 0x1f;
  func_0x000107c289e8();
  lVar38 = *plVar21;
  if ((char)lVar38 == '\x01') {
    lVar35 = *param_2 + 0x1b8;
    FUN_10883fe6c();
  }
  else {
    lVar35 = 0x7fffffffffffffff;
  }
  plVar21 = param_2 + 0x25;
  func_0x000107c289e8();
  uVar12 = (char)*plVar21 != '\0';
  uVar13 = (char)*plVar21 == '\x01';
  if ((bool)uVar13) {
    lVar20 = *param_2 + 0x1b8;
    FUN_10883fed8();
    pbVar17 = (byte *)(param_2 + 0x2b);
    func_0x000107c289e8();
    bVar7 = *pbVar17;
    if (bVar7 == 1) {
      iVar34 = (int)*param_2 + 0x1b8;
      FUN_10883ff4c();
    }
    else {
      iVar34 = 1;
    }
    plVar21 = param_2 + 0x37;
    func_0x000107c289e8();
    cVar8 = (char)*plVar21;
    uVar12 = cVar8 != '\0';
    uVar13 = cVar8 == '\x01';
    uStack_1a0._4_4_ = (uint)((ulong)pppuVar41 >> 0x20);
    if ((bool)uVar13) {
      iVar36 = (int)*param_2 + 0x1b8;
      FUN_108840080();
      iVar15 = iVar36;
      if ((bVar7 & 1) == 0) {
        uVar30 = 0;
        uVar14 = 0;
LAB_1087a8054:
        plVar21 = param_2 + 0x3d;
        func_0x000107c289e8();
        cVar8 = (char)*plVar21;
        if (cVar8 == '\0' && uVar30 == 0) {
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,1);
          uVar16 = (ulong)uVar30;
          goto LAB_1087a80cc;
        }
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,1);
      }
      else {
LAB_1087a8040:
        iVar36 = iVar15;
        pbVar17 = (byte *)(param_2 + 0x31);
        func_0x000107c289e8();
        uVar30 = (uint)*pbVar17;
        if (cVar8 != '\0') {
          uVar14 = 1;
          goto LAB_1087a8054;
        }
        uVar14 = 1;
        if (uVar30 == 0) goto LAB_1087a80c8;
        cVar8 = '\0';
        uStack_1a0 = (ulong)uStack_1a0._4_4_ << 0x20;
      }
      lStack_1b0 = *param_2 + 0x1b8;
      FUN_10883ffb0();
      iVar15 = (int)*param_2 + 0x1b8;
      FUN_108840024();
      uStack_1b8 = CONCAT44(uVar30,iVar15);
    }
    else {
      iVar36 = 1;
      iVar15 = 1;
      if (bVar7 != 0) goto LAB_1087a8040;
      uVar14 = 0;
LAB_1087a80c8:
      uVar16 = 0;
      cVar8 = '\0';
      uStack_1a0 = (ulong)pppuVar41 & 0xffffffff00000000;
LAB_1087a80cc:
      lStack_1b0 = 0;
      uStack_1b8 = uVar16 << 0x20;
    }
  }
  else {
    uStack_1b8 = 0;
    lStack_1b0 = 0;
    uVar14 = 0;
    cVar8 = '\0';
    uStack_1a0 = (ulong)pppuVar41 & 0xffffffff00000000;
    lVar20 = 0x7fffffffffffffff;
    iVar34 = 1;
    iVar36 = 1;
  }
  lVar31 = *param_2;
  lVar19 = lVar31 + 0x1b8;
  FUN_10883fdec(lVar19,lVar31);
  lVar40 = *param_2;
  lVar23 = lVar40;
  if ((char)lVar38 == '\0') {
    lStack_f0 = 0;
    lStack_e8 = 0;
    lVar38 = lStack_f0;
  }
  else {
    lVar38 = *(long *)(lVar40 + 0x348);
    lStack_e8 = *(long *)(lVar40 + 0x350);
    lStack_f0 = lVar38;
    if (lStack_e8 != 0) {
      do {
        func_0x000107c3351c();
      } while (extraout_w10_25 != 0);
      lVar23 = *param_2;
    }
  }
  pppuVar41 = *(undefined8 ****)(lVar31 + 0xb8);
  puVar37 = *(undefined8 **)(lVar31 + 0xc0);
  puVar22 = (undefined8 *)0xc8;
  __Znwm();
  pppuStack_170 = pppuVar41;
  puStack_168 = puVar37;
  if (puVar37 != (undefined8 *)0x0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_26 != 0);
  }
  ppuVar27 = *(undefined8 ***)(lVar31 + 200);
  lStack_78 = *(long *)(lVar31 + 0xd0);
  uVar18 = 0;
  ppuStack_80 = ppuVar27;
  if (lStack_78 != 0) {
    do {
      func_0x0001087a9c08();
      ppuVar27 = extraout_x8;
      uVar18 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uVar28 = *(undefined8 *)(lVar31 + 0x38);
  lStack_88 = *(long *)(lVar31 + 0x40);
  uVar29 = 0;
  uStack_90 = uVar28;
  if (lStack_88 != 0) {
    do {
      func_0x0001087a9dec();
      ppuVar27 = extraout_x8_00;
      uVar18 = extraout_x9_00;
      uVar28 = extraout_x10;
      uVar29 = extraout_x11;
    } while (extraout_w14 != 0);
  }
  lVar11 = lStack_e8;
  uVar3 = *(undefined8 *)(lVar31 + 0x118);
  lVar31 = *(long *)(lVar31 + 0x120);
  if (lVar31 != 0) {
    plVar21 = (long *)(lVar31 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  uVar4 = *(undefined8 *)(lVar40 + 0x138);
  lVar6 = *(long *)(lVar40 + 0x140);
  if (lVar6 != 0) {
    plVar21 = (long *)(lVar6 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  uVar5 = *(undefined8 *)(lVar40 + 0x1b8);
  lVar40 = *(long *)(lVar40 + 0x1c0);
  if (lVar40 != 0) {
    plVar21 = (long *)(lVar40 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  uVar26 = *(undefined8 *)(lVar23 + 0x358);
  lVar23 = *(long *)(lVar23 + 0x360);
  if (lVar23 != 0) {
    plVar21 = (long *)(lVar23 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  *(undefined4 *)(puVar22 + 1) = 8;
  *puVar22 = &PTR_FUN_110a718a8;
  puVar22[2] = pppuVar41;
  puVar22[3] = puVar37;
  pppuStack_170 = (undefined8 ***)0x0;
  puStack_168 = (undefined8 *)0x0;
  puVar22[4] = uVar28;
  puVar22[5] = uVar29;
  uStack_90 = 0;
  lStack_88 = 0;
  puVar22[6] = ppuVar27;
  puVar22[7] = uVar18;
  ppuStack_80 = (undefined8 **)0x0;
  lStack_78 = 0;
  puVar22[8] = uVar3;
  puVar22[9] = lVar31;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar22[10] = lVar19;
  puVar22[0xb] = uVar4;
  uStack_b0 = 0;
  lStack_a8 = 0;
  puVar22[0xc] = lVar6;
  puVar22[0xd] = uVar5;
  uStack_c0 = 0;
  lStack_b8 = 0;
  puVar22[0xe] = lVar40;
  puVar22[0xf] = lVar38;
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar22[0x10] = lVar11;
  puVar22[0x11] = uVar26;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar22[0x12] = lVar23;
  puVar22[0x13] = lVar35;
  puVar22[0x14] = lVar20;
  *(int *)(puVar22 + 0x15) = iVar34;
  *(undefined1 *)((long)puVar22 + 0xac) = uVar14;
  puVar22[0x16] = lStack_1b0;
  *(undefined4 *)(puVar22 + 0x17) = (undefined4)uStack_1b8;
  *(int *)((long)puVar22 + 0xbc) = iVar36;
  *(char *)(puVar22 + 0x18) = (char)uStack_1a0;
  *(char *)((long)puVar22 + 0xc1) = (char)((ulong)uStack_1b8 >> 0x20);
  *(char *)((long)puVar22 + 0xc2) = cVar8;
  func_0x000107c29778(&uStack_e0);
  func_0x000107c2994c(&uStack_d0);
  func_0x000107c289fc(&uStack_c0);
  func_0x0001087a9e98();
  func_0x000107c28868(&uStack_a0);
  func_0x0001087a9ccc();
  pppuVar41 = &ppuStack_80;
  func_0x000107c286d8();
  func_0x0001087a9d98();
  func_0x0001087a9cc0();
  uVar14 = false;
  if ((bool)uVar13) {
    func_0x0001087a9cb4();
    uVar14 = false;
    if ((bool)uVar13) {
      uVar12 = *(uint *)(puVar22 + 1) <= *(uint *)(param_2 + 5);
      uVar14 = *(uint *)(param_2 + 5) == *(uint *)(puVar22 + 1);
      if ((bool)uVar14) {
        func_0x0001087a9bcc();
        func_0x0001087a9be8();
        if (pppuStack_170 != (undefined8 ***)0x0) {
          func_0x0001087a9ba4();
        }
        func_0x0001087a9da8();
        goto LAB_1087a8394;
      }
    }
  }
  func_0x0001087a9ddc();
  if ((bool)uVar12) {
    func_0x0001087a9d04();
    func_0x0001087a9bc0();
    puVar32 = (undefined8 *)param_1[1];
    plStack_150 = param_1;
    if (pppuVar41 != (undefined8 ***)0x0) {
      func_0x0001087a9dcc();
    }
    func_0x0001087a9cf4();
    puStack_160 = extraout_x8_01 + 1;
    *extraout_x8_01 = puVar22;
    puStack_168 = extraout_x8_01;
    func_0x0001087a9c54();
    func_0x0001087a9e68();
  }
  else {
    puVar32 = puVar37 + 1;
    *puVar37 = puVar22;
  }
  param_1[1] = (long)puVar32;
LAB_1087a8394:
  plVar21 = &lStack_f0;
  func_0x000107c2994c();
  puVar37 = (undefined8 *)*param_2;
  func_0x0001087a9cd4();
  func_0x0001087a9ce0();
  func_0x0001087a9e54();
  if (lVar38 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_27 != 0);
  }
  lVar20 = puVar37[0x1c];
  lVar35 = puVar37[0x1b];
  if (puVar37[0x1c] != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_28 != 0);
  }
  lVar19 = puVar37[0x23];
  lVar23 = 0;
  if (puVar37[0x24] != 0) {
    do {
      func_0x0001087a9c08();
      lVar23 = extraout_x8_02;
      lVar19 = extraout_x9_01;
    } while (extraout_w12_00 != 0);
  }
  *(undefined4 *)(plVar21 + 1) = 0x18;
  *plVar21 = (long)&PTR_FUN_110a713a8;
  pppuStack_170 = (undefined8 ****)0x0;
  puStack_168 = (undefined8 *)0x0;
  plVar21[3] = lVar33;
  plVar21[2] = uStack_1a0;
  plVar21[5] = lVar20;
  plVar21[4] = lVar35;
  ppuStack_80 = (undefined8 **)0x0;
  lStack_78 = 0;
  plVar21[6] = lVar19;
  plVar21[7] = lVar23;
  func_0x0001087a9c5c();
  pppuVar41 = &ppuStack_80;
  func_0x000107c286dc();
  func_0x0001087a9d98();
  func_0x0001087a9cc0();
  if ((((bool)uVar14) && (func_0x0001087a9cb4(), (bool)uVar14)) &&
     (func_0x0001087a9c6c(), (bool)uVar14)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bd8();
  }
  else {
    func_0x0001087a9c40();
    if ((bool)uVar12) {
      func_0x0001087a9c94();
      func_0x0001087a9bc0();
      func_0x0001087a9ea8();
      if (pppuVar41 != (undefined8 ***)0x0) {
        func_0x0001087a9dd4();
      }
      func_0x0001087a9b80((long)puVar37 - lVar38);
      func_0x0001087a9c24();
    }
    else {
      *puVar37 = plVar21;
      puVar37 = puVar37 + 1;
    }
    param_1[1] = (long)puVar37;
  }
  lVar33 = *param_2;
  puVar37 = *(undefined8 **)(lVar33 + 0x100);
  puVar22 = (undefined8 *)0x30;
  __Znwm();
  if (puVar37 != (undefined8 *)0x0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_29 != 0);
  }
  if (*(long *)(lVar33 + 0x140) != 0) {
    do {
      func_0x0001087a9c08();
    } while (extraout_w12_01 != 0);
  }
  *(undefined4 *)(puVar22 + 1) = 7;
  *puVar22 = &PTR_FUN_110a710e0;
  func_0x0001087a9c7c();
  func_0x000107c288a4(&ppuStack_80);
  ppppuVar24 = &pppuStack_170;
  func_0x000107c29114();
  func_0x0001087a9cc0();
  if ((((bool)uVar14) && (func_0x0001087a9cb4(), (bool)uVar14)) &&
     (func_0x0001087a9c6c(), (bool)uVar14)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    ppppuVar24 = (undefined8 ****)pppuStack_170;
    if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bd8();
  }
  else {
    func_0x0001087a9c40();
    if ((bool)uVar12) {
      func_0x0001087a9c94();
      func_0x0001087a9bc0();
      ppppuVar25 = ppppuVar24;
      func_0x0001087a9ea8();
      if (ppppuVar25 == (undefined8 ****)0x0) {
        ppppuVar24 = (undefined8 ****)0x0;
      }
      else {
        func_0x0001087a9dd4();
      }
      func_0x0001087a9b80((long)puVar37 - lVar38);
      func_0x0001087a9c24();
    }
    else {
      *puVar37 = puVar22;
      puVar37 = puVar37 + 1;
    }
    param_1[1] = (long)puVar37;
  }
  if ((bVar39 & 1) != 0) {
    func_0x0001087a9d34();
    func_0x0001087a9d78();
    ppppuVar24 = (undefined8 ****)pppuStack_170;
    if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
      func_0x0001087a9ba4();
    }
  }
  puVar37 = (undefined8 *)*param_2;
  func_0x0001087a9cd4();
  func_0x0001087a9ce0();
  func_0x0001087a9e54();
  if (lVar38 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_30 != 0);
  }
  if (puVar37[0x3c] != 0) {
    do {
      func_0x0001087a9c08();
    } while (extraout_w12_02 != 0);
  }
  if (puVar37[0x24] != 0) {
    do {
      func_0x0001087a9dec();
    } while (extraout_w14_00 != 0);
  }
  *(undefined4 *)(ppppuVar24 + 1) = 0x1a;
  *ppppuVar24 = (undefined8 ***)&PTR_FUN_110a71d28;
  func_0x0001087a9c7c();
  ppppuVar24[6] = extraout_x11_00;
  ppppuVar24[7] = extraout_x10_00;
  func_0x0001087a9c5c();
  pppuVar41 = &ppuStack_80;
  func_0x000107c286f4();
  func_0x0001087a9d98();
  func_0x0001087a9cc0();
  if ((((bool)uVar14) && (func_0x0001087a9cb4(), (bool)uVar14)) &&
     (func_0x0001087a9c6c(), (bool)uVar14)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bd8();
  }
  else {
    func_0x0001087a9c40();
    if ((bool)uVar12) {
      func_0x0001087a9c94();
      func_0x0001087a9bc0();
      func_0x0001087a9ea8();
      if (pppuVar41 != (undefined8 ***)0x0) {
        func_0x0001087a9dd4();
      }
      func_0x0001087a9b80((long)puVar37 - lVar38);
      func_0x0001087a9c24();
    }
    else {
      *puVar37 = ppppuVar24;
      puVar37 = puVar37 + 1;
    }
    param_1[1] = (long)puVar37;
  }
  plVar21 = param_2 + 0xd;
  func_0x000107c289e8();
  uVar12 = (char)*plVar21 != '\0';
  uVar13 = (char)*plVar21 == '\x01';
  if ((bool)uVar13) {
    puVar37 = (undefined8 *)*param_2;
    func_0x0001087a9cd4();
    func_0x0001087a9ce0();
    func_0x0001087a9e54();
    if (lVar38 != 0) {
      do {
        func_0x000107c3351c();
      } while (extraout_w10_31 != 0);
    }
    if (puVar37[0x3c] != 0) {
      do {
        func_0x0001087a9c08();
      } while (extraout_w12_03 != 0);
    }
    if (puVar37[0x24] != 0) {
      do {
        func_0x0001087a9dec();
      } while (extraout_w14_01 != 0);
    }
    *(undefined4 *)(plVar21 + 1) = 0x1b;
    *plVar21 = (long)&PTR_FUN_110a71230;
    func_0x0001087a9c7c();
    plVar21[6] = extraout_x11_01;
    plVar21[7] = extraout_x10_01;
    func_0x0001087a9c5c();
    pppuVar41 = &ppuStack_80;
    func_0x000107c286f4();
    func_0x0001087a9d98();
    func_0x0001087a9cc0();
    if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
       (func_0x0001087a9c6c(), (bool)uVar13)) {
      func_0x0001087a9bcc();
      func_0x0001087a9be8();
      if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
        func_0x0001087a9ba4();
      }
      func_0x0001087a9bd8();
    }
    else {
      func_0x0001087a9c40();
      if ((bool)uVar12) {
        func_0x0001087a9c94();
        func_0x0001087a9bc0();
        func_0x0001087a9ea8();
        if (pppuVar41 != (undefined8 ***)0x0) {
          func_0x0001087a9dd4();
        }
        func_0x0001087a9b80((long)puVar37 - lVar38);
        func_0x0001087a9c24();
      }
      else {
        *puVar37 = plVar21;
        puVar37 = puVar37 + 1;
      }
      param_1[1] = (long)puVar37;
    }
  }
  lVar33 = *param_2;
  uVar13 = *(long *)(lVar33 + 0x2d8) == 0;
  func_0x000107c29940(&uStack_180,lVar33 + 0x2f8);
  lVar38 = *param_2;
  uVar18 = 0x148;
  __Znwm();
  func_0x000107c27994(&ppuStack_80,lVar33 + 0x10);
  lStack_88 = *(undefined8 *)(lVar33 + 0x40);
  uStack_90 = *(undefined8 *)(lVar33 + 0x38);
  if (*(long *)(lVar33 + 0x40) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_32 != 0);
  }
  uStack_a0 = *(undefined8 *)(lVar33 + 0x128);
  lStack_98 = *(long *)(lVar33 + 0x130);
  if (lStack_98 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_33 != 0);
  }
  lStack_a8 = *(undefined8 *)(lVar33 + 0xf0);
  uStack_b0 = *(undefined8 *)(lVar33 + 0xe8);
  if (*(long *)(lVar33 + 0xf0) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_34 != 0);
  }
  uStack_c0 = *(undefined8 *)(lVar33 + 0x158);
  lStack_b8 = *(long *)(lVar33 + 0x160);
  if (lStack_b8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_35 != 0);
  }
  uStack_d0 = *(undefined8 *)(lVar33 + 0x138);
  lStack_c8 = *(long *)(lVar33 + 0x140);
  if (lStack_c8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_36 != 0);
  }
  uStack_d8 = *(undefined8 *)(lVar33 + 0x50);
  uStack_e0 = *(undefined8 *)(lVar33 + 0x48);
  if (*(long *)(lVar33 + 0x50) != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_37 != 0);
  }
  lStack_f0 = *(long *)(lVar33 + 0x108);
  lStack_e8 = *(long *)(lVar33 + 0x110);
  if (lStack_e8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_38 != 0);
  }
  uStack_100 = *(undefined8 *)(lVar33 + 0x1c8);
  lStack_f8 = *(long *)(lVar33 + 0x1d0);
  if (lStack_f8 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_39 != 0);
  }
  uStack_110 = *(undefined8 *)(lVar33 + 0x1f8);
  lStack_108 = *(long *)(lVar33 + 0x200);
  if (lStack_108 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_40 != 0);
  }
  lStack_118 = uStack_178;
  uStack_120 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_130 = *(undefined8 *)(lVar38 + 0x308);
  lStack_128 = *(long *)(lVar38 + 0x310);
  if (lStack_128 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_41 != 0);
  }
  uStack_140 = *(undefined8 *)(lVar38 + 0x328);
  lStack_138 = *(long *)(lVar38 + 0x330);
  if (lStack_138 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10_42 != 0);
  }
  func_0x000107c2965c(&pppuStack_170,param_2 + 0x13);
  func_0x0001087a9e2c();
  func_0x0001087a9e14();
  FUN_1087c6e94(uVar18);
  func_0x000107c289f8(&pppuStack_170);
  func_0x000107c2916c(&uStack_140);
  func_0x000107c297ac(&uStack_130);
  func_0x000107c29574(&uStack_120);
  func_0x000107c2917c(&uStack_110);
  func_0x000107c2995c(&uStack_100);
  func_0x000107c286d0(&lStack_f0);
  func_0x0001087a9dc4();
  func_0x000107c288a4(&uStack_d0);
  func_0x000107c29948(&uStack_c0);
  func_0x000107c288e8(&uStack_b0);
  func_0x0001087a9d88();
  func_0x0001087a9ccc();
  pppuVar41 = &ppuStack_80;
  func_0x000107c27914();
  func_0x0001087a9cc0();
  if ((((bool)uVar13) && (func_0x0001087a9cb4(), (bool)uVar13)) &&
     (func_0x0001087a9c6c(), (bool)uVar13)) {
    func_0x0001087a9bcc();
    func_0x0001087a9be8();
    if ((undefined8 ****)pppuStack_170 != (undefined8 ****)0x0) {
      func_0x0001087a9ba4();
    }
    func_0x0001087a9bd8();
  }
  else {
    plVar21 = param_1 + 2;
    puVar37 = (undefined8 *)param_1[1];
    if (puVar37 < (undefined8 *)*plVar21) {
      puVar22 = puVar37 + 1;
      *puVar37 = uVar18;
    }
    else {
      func_0x0001087a9d04();
      func_0x0001087a9bc0();
      lVar38 = *param_1;
      puVar22 = (undefined8 *)param_1[1];
      plStack_150 = plVar21;
      if (pppuVar41 != (undefined8 ***)0x0) {
        FUN_1087a919c(plVar21);
      }
      func_0x0001087a9b80((long)puVar22 - lVar38);
      func_0x0001087a9e68();
    }
    param_1[1] = (long)puVar22;
  }
  func_0x000107c29574(&uStack_180);
  return;
}



/* Entry: 1087a8d10; end: 1087a8e07;  */

void FUN_1087a8d10(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  long *extraout_x8;
  undefined8 extraout_x9;
  long lVar3;
  undefined8 *unaff_x22;
  undefined8 *puVar4;
  long alStack_68 [2];
  long *plStack_58;
  long lStack_48;
  
  bVar2 = *(char *)(param_1 + 0x24) != '\0';
  if ((*(char *)(param_1 + 0x24) == '\x01') &&
     (bVar2 = *(char *)(param_1 + 0x2c) != '\0', *(char *)(param_1 + 0x2c) == '\x01')) {
    uVar1 = *(uint *)(*param_3 + 8);
    bVar2 = uVar1 <= *(uint *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x28) == uVar1) {
      FUN_1087a9084(alStack_68,uVar1,*(undefined4 *)(param_1 + 0x20),param_1 + 0x30);
      FUN_1087a8ffc(param_2,alStack_68);
      if (alStack_68[0] == 0) {
        return;
      }
      func_0x0001087a9ba4();
      return;
    }
  }
  func_0x0001087a9ddc();
  if (bVar2) {
    func_0x0001087a9d04();
    func_0x0001087a9bc0();
    puVar4 = *(undefined8 **)(param_2 + 8);
    lStack_48 = param_2;
    if (param_1 != 0) {
      func_0x0001087a9dcc();
    }
    func_0x0001087a9cf4();
    lVar3 = *param_3;
    *param_3 = 0;
    plStack_58 = extraout_x8 + 1;
    *extraout_x8 = lVar3;
    func_0x0001087a9c54();
    func_0x0001087a9e5c();
  }
  else {
    *param_3 = 0;
    puVar4 = unaff_x22 + 1;
    *unaff_x22 = extraout_x9;
  }
  *(undefined8 **)(param_2 + 8) = puVar4;
  return;
}



/* Entry: 1087a8e08; end: 1087a8f07;  */

void FUN_1087a8e08(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 uVar3;
  int extraout_w10;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  uStack_50 = param_2;
  lStack_48 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000107c3351c();
    } while (extraout_w10 != 0);
  }
  uVar2 = *param_4;
  uVar3 = 0;
  uStack_60 = uVar2;
  if (param_4[1] != 0) {
    do {
      func_0x0001087a9c08();
      uVar2 = extraout_x8;
      uVar3 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uVar5 = param_5[1];
  uVar4 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x0001087a9c08();
      uVar2 = extraout_x8_00;
      uVar3 = extraout_x9_00;
    } while (extraout_w12_00 != 0);
  }
  uVar7 = param_6[1];
  uVar6 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x0001087a9c08();
      uVar2 = extraout_x8_01;
      uVar3 = extraout_x9_01;
    } while (extraout_w12_01 != 0);
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a70428;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  uStack_50 = 0;
  lStack_48 = 0;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[9] = uVar7;
  puVar1[8] = uVar6;
  uStack_80 = 0;
  uStack_78 = 0;
  *param_1 = puVar1;
  func_0x000107c288a4(&uStack_80);
  func_0x000107c28858(&uStack_70);
  func_0x000107c28808(&uStack_60);
  func_0x000107c28800(&uStack_50);
  return;
}



/* Entry: 1087a8f08; end: 1087a8f6f;  */

undefined8 FUN_1087a8f08(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001087a8f34(&uStack_28);
  return param_1;
}



/* Entry: 1087a8f70; end: 1087a8f77;  */

void FUN_1087a8f70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a9dfc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087a8fac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087a8f78; end: 1087a8ffb;  */

void FUN_1087a8f78(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a9dfc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087a8fac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087a8ffc; end: 1087a9083;  */

void FUN_1087a8ffc(long param_1)

{
  undefined1 in_CY;
  undefined8 uVar1;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *puVar2;
  
  func_0x0001087a9eb4();
  func_0x0001087a9ddc();
  if ((bool)in_CY) {
    func_0x0001087a9d04();
    func_0x0001087a9bc0();
    puVar2 = *(undefined8 **)(unaff_x19 + 8);
    if (param_1 != 0) {
      func_0x0001087a9dcc();
    }
    func_0x0001087a9cf4();
    uVar1 = *unaff_x20;
    *unaff_x20 = 0;
    *extraout_x8 = uVar1;
    func_0x0001087a9c54();
    func_0x0001087a9e5c();
  }
  else {
    uVar1 = *unaff_x20;
    *unaff_x20 = 0;
    puVar2 = unaff_x22 + 1;
    *unaff_x22 = uVar1;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2;
  return;
}



/* Entry: 1087a9084; end: 1087a90d3;  */

void FUN_1087a9084(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  uVar2 = *param_4;
  *puVar1 = &PTR_FUN_110a703d8;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = param_2;
  *(undefined4 *)(puVar1 + 2) = param_3;
  *(undefined8 *)((long)puVar1 + 0x14) = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1087a90d4; end: 1087a9113;  */

ulong FUN_1087a90d4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1 >> 2;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1fffffffffffffff;
    }
    return uVar2;
  }
  FUN_1087a9188();
  func_0x0001087a9dfc();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}


