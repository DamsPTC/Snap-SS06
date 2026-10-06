/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108652e28; end: 108652e3b;  */

void FUN_108652e28(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108652e3c; end: 108652e83;  */

void FUN_108652e3c(void)

{
  long unaff_x19;
  
  func_0x0001006ab020();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108652e84; end: 108652ec3;  */

void FUN_108652e84(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001006a86cc();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_108652ec4();
  return;
}



/* Entry: 108652ec4; end: 108652f3b;  */

void FUN_108652ec4(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_70 [80];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    FUN_108652f94(auStack_70,*param_1);
    FUN_108652f3c(param_1 + 1,auStack_70);
    func_0x0001086531c4(auStack_70);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[0xb] == '\x01') {
    func_0x0001086531c4();
    *(undefined1 *)(plVar2 + 10) = 0;
  }
  return;
}



/* Entry: 108652f3c; end: 108652f6f;  */

long FUN_108652f3c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108653078();
  }
  else {
    FUN_1086530b0();
  }
  return param_1;
}



/* Entry: 108652f70; end: 108652f93;  */

void FUN_108652f70(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x0001086531c4();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 108652f94; end: 108652fe7;  */

void FUN_108652f94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_108652fe8(param_1 + 0x20,param_2,2);
  return;
}



/* Entry: 108652fe8; end: 108653023;  */

void FUN_108652fe8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c313e0(auStack_38);
  FUN_108653024(param_1,auStack_38);
  func_0x00010865335c();
  return;
}



/* Entry: 108653024; end: 108653077;  */

void FUN_108653024(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_110a805f0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  func_0x000107c3034c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 108653078; end: 1086530af;  */

long FUN_108653078(long param_1,long param_2)

{
  func_0x00010065acbc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1086530cc(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 1086530b0; end: 1086530cb;  */

void FUN_1086530b0(long param_1)

{
  FUN_108653130();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1086530cc; end: 10865312f;  */

long FUN_1086530cc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088b6c2c(param_1);
    }
    else {
      FUN_1088b6bf8(param_1);
    }
  }
  return param_1;
}



/* Entry: 108653130; end: 10865317b;  */

undefined8 * FUN_108653130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  FUN_10865317c(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10865317c; end: 108653187;  */

undefined8 * FUN_10865317c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a805f0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_1086530cc(param_1,param_2);
  return param_1;
}



/* Entry: 108653188; end: 1086531eb;  */

undefined8 * FUN_108653188(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a805f0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_1086530cc(param_1,param_3);
  return param_1;
}



/* Entry: 1086531ec; end: 10865320b;  */

void FUN_1086531ec(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x0001086531c4();
  }
  return;
}



/* Entry: 10865320c; end: 10865325f;  */

void FUN_10865320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [8];
  
  func_0x00010065f1f4(param_1,1,param_2);
  func_0x000107c28208(param_1,2,param_3);
  FUN_1086532a8(auStack_38,param_4);
  func_0x000100867974(param_1,3,auStack_38);
  func_0x00010865335c();
  return;
}



/* Entry: 108653260; end: 1086532a7;  */

void FUN_108653260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_1086532a8(auStack_38,param_3);
  func_0x000100867974(param_1,param_2,auStack_38);
  func_0x00010865335c();
  return;
}



/* Entry: 1086532a8; end: 1086532ef;  */

void FUN_1086532a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1088b6ab4();
  func_0x000107c27fdc(param_1,uVar1);
  func_0x00010b4d1758(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 1086532f0; end: 108653387;  */

void FUN_1086532f0(long *param_1)

{
  long *in_x9;
  long lVar1;
  long *unaff_x21;
  
  lVar1 = *param_1;
  *(long **)(lVar1 + 8) = in_x9;
  *in_x9 = lVar1;
  lVar1 = *unaff_x21;
  *(long **)(lVar1 + 8) = param_1;
  *param_1 = lVar1;
  *unaff_x21 = (long)param_1;
  param_1[1] = (long)unaff_x21;
  return;
}



/* Entry: 108653388; end: 1086533a7;  */

void FUN_108653388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1086533a8(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1086533a8; end: 1086533e3;  */

void FUN_1086533a8(undefined8 param_1)

{
  FUN_1086534e0();
  func_0x000100693c80();
  func_0x00010865365c(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086533e4; end: 108653407;  */

void FUN_1086533e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1086537b0();
  uStack_28 = param_2;
  func_0x000108653920(param_1,&uStack_28);
  return;
}



/* Entry: 108653408; end: 10865342b;  */

void FUN_108653408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_10865342c(param_1 + 0xf0,param_2,&uStack_18);
  return;
}



/* Entry: 10865342c; end: 1086534bb;  */

void FUN_10865342c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_1086539dc(param_1,param_2,param_3,param_4);
  func_0x000107c3141c(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x000107c27e6c(&lStack_38);
  return;
}



/* Entry: 1086534bc; end: 1086534df;  */

void FUN_1086534bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_108651e64(param_1 + 0x178,param_2,&uStack_18);
  return;
}



/* Entry: 1086534e0; end: 1086535b3;  */

long FUN_1086534e0(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puStack_108;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x000108653a60();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x000107c280c4(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      func_0x000107c313f4(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_110a606d0;
      uStack_40 = 0;
      func_0x000107c28204(auStack_d8);
      __Znwm();
      func_0x000108653ae0();
      func_0x000108653a30();
      goto LAB_10865357c;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x000108653a9c();
  }
LAB_10865357c:
  func_0x000108653ac0();
  func_0x000108653b00();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  puVar2 = auStack_d8;
  func_0x000107c2798c();
  func_0x000108653b38();
  func_0x000100693c80();
  lVar4 = extraout_x8;
  puStack_108 = puVar2;
  func_0x00010865365c(extraout_x8,&puStack_108);
  return lVar4;
}



/* Entry: 1086535b4; end: 10865361f;  */

void FUN_1086535b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000100693c80();
  uStack_28 = param_2;
  func_0x00010865365c(param_1,&uStack_28);
  return;
}



/* Entry: 108653620; end: 108653623;  */

undefined8 * FUN_108653620(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108653624; end: 108653637;  */

void FUN_108653624(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108653638; end: 10865368b;  */

void FUN_108653638(void)

{
  long unaff_x19;
  
  func_0x000108653ad0();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10865368c; end: 1086536cb;  */

void FUN_10865368c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000108653a8c();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1086536cc();
  return;
}



/* Entry: 1086536cc; end: 10865376b;  */

void FUN_1086536cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    func_0x000107c313f8(*param_1);
    func_0x000107c313e0(&lStack_40);
    if ((char)param_1[4] == '\x01') {
      func_0x00010065acbc(param_1 + 1,&lStack_40);
    }
    else {
      param_1[2] = lStack_38;
      param_1[1] = lStack_40;
      param_1[3] = lStack_30;
      lStack_38 = 0;
      lStack_30 = 0;
      lStack_40 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    func_0x000107c27914(&lStack_40);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[4] == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(plVar2 + 3) = 0;
  }
  return;
}



/* Entry: 10865376c; end: 1086537af;  */

void FUN_10865376c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1086537b0; end: 108653883;  */

long FUN_1086537b0(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puStack_108;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x000108653a60();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x000107c280c4(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      func_0x000107c313f4(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_110a60770;
      uStack_40 = 0;
      func_0x000107c28204(auStack_d8);
      __Znwm();
      func_0x000108653ae0();
      func_0x000108653a30();
      goto LAB_10865384c;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x000108653a9c();
  }
LAB_10865384c:
  func_0x000108653ac0();
  func_0x000108653b00();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  puVar2 = auStack_d8;
  func_0x000107c2798c();
  func_0x000108653b38();
  lVar4 = extraout_x8;
  puStack_108 = puVar2;
  func_0x000108653920(extraout_x8,&puStack_108);
  return lVar4;
}



/* Entry: 108653884; end: 1086538e3;  */

void FUN_108653884(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000108653920(param_1,&uStack_28);
  return;
}



/* Entry: 1086538e4; end: 1086538e7;  */

undefined8 * FUN_1086538e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1086538e8; end: 1086538fb;  */

void FUN_1086538e8(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086538fc; end: 1086539db;  */

void FUN_1086538fc(void)

{
  long unaff_x19;
  
  func_0x000108653ad0();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1086539dc; end: 108653a2f;  */

void FUN_1086539dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  func_0x00010065f1f4(param_1,1,param_2);
  func_0x000107c28208(param_1,2,param_3);
  func_0x00010054c7ec(param_1,3);
  iVar1 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61324();
  if (iVar1 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa8c);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108653a30; end: 108653b53;  */

undefined1 * FUN_108653a30(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(&stack0x00000070);
  func_0x000107c60d94(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 108653b54; end: 108653b9f;  */

void FUN_108653b54(undefined8 param_1)

{
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  func_0x000108653f98(auStack_40);
  FUN_108653ba0(param_1,auStack_40);
  uStack_21 = 0;
  FUN_108653be8(auStack_40,&uStack_21);
  func_0x000107c27fb8(auStack_40);
  return;
}



/* Entry: 108653ba0; end: 108653be7;  */

void FUN_108653ba0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000107c31cd0();
  return;
}



/* Entry: 108653be8; end: 108653c1b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108653be8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_108654058(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 108653c1c; end: 108653db7;  */

undefined8 FUN_108653c1c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  FUN_108653db8();
  ppuVar9 = &PTR_PTR_113280bc8;
  if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_2 + 0x68);
  }
  if (*(int *)((long)ppuVar9 + 0x1c) == 4) {
    ppuVar9 = (undefined **)ppuVar9[2];
  }
  else {
    ppuVar9 = &PTR_PTR_1132808f0;
  }
  puVar1 = ppuVar9[2];
  puVar7 = ppuVar9[3];
  ppuStack_60 = &PTR_DAT_110a825f8;
  uStack_58 = 0;
  uStack_48 = 0;
  puVar3 = (undefined8 *)(*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar3 + 0x17);
  puVar4 = puVar3;
  if (lVar5 < 0) {
    puVar4 = (undefined8 *)*puVar3;
    lVar5 = puVar3[1];
  }
  func_0x000107c30344(&ppuStack_60,puVar4,lVar5);
  pppuVar2 = &ppuStack_60;
  func_0x000108653e68();
  FUN_10802af44();
  ppuVar9 = pppuVar2[3];
  pppuVar10 = pppuVar2 + 3;
  if (((ulong)ppuVar9 & 1) != 0) {
    pppuVar10 = (undefined ***)((long)ppuVar9 + 7);
  }
  lVar5 = (long)*(int *)(pppuVar2 + 4) << 3;
  do {
    if (lVar5 == 0) {
      uVar11 = 4;
      goto LAB_108653d64;
    }
    ppuVar9 = *pppuVar10;
    lVar5 = lVar5 + -8;
    pppuVar10 = pppuVar10 + 1;
  } while (*(int *)(ppuVar9 + 7) != 1);
  func_0x00010802e2b4();
  func_0x000108653dc8();
  puVar6 = ppuVar9[1];
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(undefined **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(ppuVar9 + 3,(ulong)puVar7 & 0xfffffffffffffffc,puVar6);
  puVar7 = ppuVar9[1];
  if (((ulong)puVar7 & 1) != 0) {
    puVar7 = *(undefined **)((ulong)puVar7 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(ppuVar9 + 2,(ulong)puVar1 & 0xfffffffffffffffc,puVar7);
  func_0x00010b4d1804(auStack_78,&ppuStack_60);
  uVar8 = *(ulong *)(param_2 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c((ulong *)(param_2 + 0x60),auStack_78,uVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  uVar11 = 2;
LAB_108653d64:
  FUN_1088bf4ec(&ppuStack_60);
  return uVar11;
}



/* Entry: 108653db8; end: 108653deb;  */

void FUN_108653db8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010068511c();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 108653dec; end: 108653fdb;  */

void FUN_108653dec(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 108653fdc; end: 108654017;  */

void FUN_108653fdc(void)

{
  __Znwm(0xa0);
  FUN_108654018();
  func_0x000107c31cd4();
  func_0x000107c31cd0();
  return;
}



/* Entry: 108654018; end: 10865403f;  */

void FUN_108654018(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a60880;
  *(undefined2 *)(param_1 + 0x13) = 0;
  return;
}



/* Entry: 108654040; end: 108654043;  */

undefined8 * FUN_108654040(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108654044; end: 108654057;  */

void FUN_108654044(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108654058; end: 1086540f3;  */

long FUN_108654058(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0x99) == '\x01') {
        *(undefined1 *)(param_1 + 0x99) = 0;
      }
      *(undefined1 *)(param_1 + 0x98) = *param_3;
      *(undefined1 *)(param_1 + 0x99) = 1;
      *(undefined8 *)(param_1 + 0x10) = 2;
      func_0x000107c31508(param_1,param_2);
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1086540f4; end: 108654107;  */

void FUN_1086540f4(void)

{
  return;
}



/* Entry: 108654108; end: 108654147;  */

void FUN_108654108(void)

{
  func_0x000108656e88();
  func_0x000107c27d7c();
  func_0x0001078a80e0();
  return;
}



/* Entry: 108654148; end: 108654287;  */

void FUN_108654148(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000108656e88();
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
  }
  FUN_108842a4c(auStack_48,ppuVar1);
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(unaff_x20 + 0x40) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(unaff_x20 + 0x40);
  }
  FUN_108842a4c(auStack_60,ppuVar1);
  func_0x000108656cf8(auStack_90);
  FUN_108654108(auStack_78,auStack_90);
  func_0x000108656cf8(auStack_a8);
  func_0x000108656cf8(auStack_c0);
  func_0x000108656cf8(auStack_d8);
  func_0x000105958638();
  func_0x000108656df0();
  func_0x000108656d2c();
  func_0x000107c27914(auStack_a8);
  func_0x000107c27914(auStack_78);
  func_0x000108656ea0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 108654288; end: 1086543df;  */

undefined1 FUN_108654288(long param_1,long param_2,int *param_3,long *param_4)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  long *extraout_x9;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  int aiStack_258 [2];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [48];
  long lStack_200;
  int iStack_1f8;
  int iStack_128;
  int iStack_114;
  
  if (*param_3 == 0) {
    lVar6 = *param_4;
    lVar2 = param_4[1];
    if (((ulong)((lVar2 - lVar6) / 0x30) < 2) && ((*(byte *)(param_2 + 0x10) >> 5 & 1) == 0)) {
      while( true ) {
        if (lVar6 == lVar2) {
          return 1;
        }
        if (*(int *)(lVar6 + 0x28) != 1) {
          return 0;
        }
        FUN_1086543e0(auStack_230,param_1,*(undefined8 *)(lVar6 + 0x20),1);
        if ((iStack_128 != 0) || (bVar4 = iStack_114 == 7, bVar4)) break;
        func_0x000108656d88(lStack_200);
        plVar7 = &lStack_200;
        if (!bVar4) {
          plVar7 = extraout_x9;
        }
        lVar8 = (long)iStack_1f8 << 3;
        while (lVar8 != 0) {
          plVar5 = *(long **)(param_1 + 0x18);
          ppuVar1 = &PTR_PTR_11326cb58;
          if (*(undefined ***)(*plVar7 + 0x18) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(*plVar7 + 0x18);
          }
          func_0x000100696384(auStack_288,ppuVar1);
          FUN_10884725c(auStack_270,auStack_288);
          (**(code **)(*plVar5 + 0x10))(aiStack_258,plVar5,auStack_270);
          func_0x000108656d2c();
          func_0x000108656df0();
          iVar3 = aiStack_258[0];
          FUN_108648f24(auStack_250);
          lVar8 = lVar8 + -8;
          plVar7 = plVar7 + 1;
          if (iVar3 != 1) goto LAB_1086543b0;
        }
        func_0x000108656ee8();
        lVar6 = lVar6 + 0x30;
      }
LAB_1086543b0:
      func_0x000108656ee8();
    }
  }
  return 0;
}



/* Entry: 1086543e0; end: 1086544af;  */

void FUN_1086543e0(undefined8 param_1,long param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  undefined1 auStack_60 [48];
  
  func_0x000108656e88();
  uVar2 = *(undefined8 *)(param_2 + 8);
  if (param_4 != 1) {
    param_3 = &PTR_PTR_11327fd08;
  }
  ppuVar1 = &PTR_PTR_11326cb58;
  if ((undefined **)param_3[3] != (undefined **)0x0) {
    ppuVar1 = (undefined **)param_3[3];
  }
  func_0x000100696384(auStack_c0,ppuVar1);
  FUN_10885edd8(auStack_a8,uVar2,auStack_c0);
  FUN_108655080(auStack_60,auStack_a8);
  FUN_108656820(auStack_a8);
  func_0x000107c27914(auStack_c0);
  func_0x0001006941fc(*(undefined8 *)(unaff_x20 + 8),auStack_60,1);
  func_0x000107c27914(auStack_60);
  return;
}



/* Entry: 1086544b0; end: 10865505f;  */

void FUN_1086544b0(undefined8 param_1,ulong *param_2,ulong *param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  code *extraout_x8;
  long *extraout_x8_00;
  undefined **ppuVar9;
  undefined **extraout_x9;
  long extraout_x9_00;
  long lVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  undefined1 auStack_410 [24];
  ulong *puStack_3f8;
  ulong *puStack_3f0;
  ulong *puStack_3e8;
  byte bStack_3e0;
  byte bStack_3d8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined1 auStack_308 [8];
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  undefined1 auStack_2d0 [48];
  undefined4 uStack_2a0;
  byte bStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined1 uStack_280;
  ulong auStack_278 [4];
  undefined1 auStack_258 [24];
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  func_0x000108653f98(auStack_410);
  puVar4 = auStack_410;
  FUN_108653ba0(param_1);
  uStack_290 = 0;
  puStack_288 = (undefined1 *)0x0;
  uStack_280 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_280 = 1;
  puStack_288 = puVar4;
  (**(code **)(*(long *)param_2[3] + 0x30))(auStack_2d0);
  if ((bStack_298 & 1) == 0) {
    puVar7 = (ulong *)&UNK_10f4afa42;
    func_0x000108656d94();
    func_0x000108656ce8();
    func_0x000108656c4c();
    func_0x000108656c30();
    func_0x000108656cd8();
    ppuStack_240 = (undefined **)((ulong)ppuStack_240 & 0xffffffffffffff00);
    func_0x000108656bf4();
  }
  else {
    lStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    lVar15 = param_4[1];
    for (lVar10 = *param_4; lVar10 != lVar15; lVar10 = lVar10 + 0x30) {
      uVar2 = *(int *)(lVar10 + 0x28) == 1;
      if (!(bool)uVar2) {
        ppuStack_240 = (undefined **)CONCAT71(ppuStack_240._1_7_,1);
        func_0x000108656bf4();
        goto LAB_108654798;
      }
      puVar7 = param_2;
      FUN_1086543e0(&ppuStack_240,param_2,*(undefined8 *)(lVar10 + 0x20),1);
      puVar8 = param_2 + 7;
      func_0x000107c29ee4(auStack_278);
      func_0x000108656d88(puStack_210);
      ppuVar9 = &puStack_210;
      if (!(bool)uVar2) {
        ppuVar9 = extraout_x9;
      }
      ppuVar11 = ppuVar9 + (int)ppuStack_208;
      for (; ppuVar9 != ppuVar11; ppuVar9 = ppuVar9 + 1) {
        func_0x000108656e60();
        puVar7 = auStack_278;
        func_0x00010069c2e0();
        uVar3 = 0;
        if (1 < (int)ppuStack_208) {
          uVar3 = (uint)puVar8;
        }
        if ((uVar3 & 1) == 0) {
          plVar13 = (long *)param_2[3];
          func_0x000108656e60();
          func_0x000100696384(auStack_308);
          FUN_10884725c(&uStack_390,auStack_308);
          puVar7 = &uStack_390;
          (**(code **)(*plVar13 + 0x10))(&puStack_3f8,plVar13);
          func_0x000107c27914(&uStack_390);
          puVar8 = (ulong *)0x0;
          func_0x000107c27914();
          puVar1 = puStack_3e8;
          puVar14 = puStack_3f0;
          if ((bStack_3d8 & 1) == 0) {
            uVar12 = param_2[5];
            func_0x000108656f0c();
            func_0x000107c278b8(&uStack_390);
            func_0x000108656ce8();
            func_0x000108656c4c();
            (*extraout_x8)(uVar12,&uStack_390);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_390);
            uStack_390 = uStack_390 & 0xffffffffffffff00;
            func_0x000108656d20();
            puVar7 = &uStack_390;
            FUN_108653be8();
            func_0x000108656d70();
            func_0x000108656d34();
            func_0x000108656efc();
            goto LAB_108654798;
          }
          for (; puVar14 != puVar1; puVar14 = puVar14 + 7) {
            func_0x000108656e60();
            FUN_108842a4c(auStack_308);
            puVar7 = puVar14;
            FUN_108654108(auStack_258);
            uVar12 = uStack_2e0;
            if (uStack_2e0 < uStack_2d8) {
              func_0x000108656f38();
              FUN_108656504(uVar12);
              uVar12 = uVar12 + 0x50;
            }
            else {
              plVar13 = &lStack_2e8;
              func_0x000105956d7c(plVar13,(long)(uStack_2e0 - lStack_2e8) / 0x50 + 1);
              func_0x000105956b04(&uStack_390,plVar13,(long)(uStack_2e0 - lStack_2e8) / 0x50,
                                  &uStack_2d8);
              func_0x000108656f38(lStack_380);
              FUN_108656504();
              lStack_380 = lStack_380 + 0x50;
              puVar7 = &uStack_390;
              func_0x000105956ac0(&lStack_2e8);
              uVar12 = uStack_2e0;
              func_0x000105956d14(&uStack_390);
            }
            uStack_2e0 = uVar12;
            func_0x000108656e18();
            puVar8 = (ulong *)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          }
          func_0x000108656d70();
        }
      }
      func_0x000108656d34();
      func_0x000108656efc();
    }
    func_0x000108656e30();
    uStack_300 = 0;
    uStack_2f0 = 0;
    puVar8 = (ulong *)(param_3[0xc] & 0xfffffffffffffffc);
    uVar12 = (ulong)*(char *)((long)puVar8 + 0x17);
    puVar7 = puVar8;
    if ((long)uVar12 < 0) {
      puVar7 = (ulong *)*puVar8;
      uVar12 = puVar8[1];
    }
    puVar4 = auStack_308;
    func_0x000107c30344(puVar4,puVar7,uVar12);
    if (((ulong)puVar4 & 1) == 0) {
      puVar7 = (ulong *)&UNK_10f4afa73;
      func_0x000108656d94();
      func_0x000108656ce8();
      func_0x000108656c4c();
      func_0x000108656c30();
      func_0x000108656cd8();
      ppuStack_240 = (undefined **)((ulong)ppuStack_240 & 0xffffffffffffff00);
      func_0x000108656bf4();
    }
    else {
      func_0x000108653e68(auStack_308);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      FUN_10802af44();
      func_0x000108656c14();
      plVar13 = extraout_x8_00;
      lVar10 = extraout_x9_00;
      if (extraout_x9_00 != 0) {
LAB_108654840:
        lVar15 = *plVar13;
        if ((*(int *)(lVar15 + 0x38) != 1) ||
           ((*(byte *)(*(long *)(lVar15 + 0x30) + 0x10) >> 2 & 1) == 0)) goto LAB_10865485c;
        func_0x000108656d18(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x30) + 0x28) + 0x10),
                            &uStack_320);
        if (*(int *)(lVar15 + 0x38) == 1) {
          ppuVar9 = *(undefined ***)(lVar15 + 0x30);
        }
        else {
          ppuVar9 = &PTR_PTR_1133aa968;
        }
        func_0x000108656c84(ppuVar9);
        func_0x000108656d18(&uStack_338);
        func_0x00010802e2b4();
        uVar12 = uStack_318;
        if (-1 < (long)uStack_310) {
          uVar12 = uStack_310 >> 0x38;
        }
        if (uVar12 == 0x20) {
          uVar12 = uStack_330;
          if (-1 < (long)uStack_328) {
            uVar12 = uStack_328 >> 0x38;
          }
          if (uVar12 == 0x10) {
            func_0x0001006963ec(auStack_350,&uStack_320);
            func_0x000107c29e04(&uStack_3a8,param_2 + 7);
            FUN_108654108(&uStack_3c0,auStack_2d0);
            uStack_388 = uStack_3a0;
            uStack_390 = uStack_3a8;
            lStack_380 = lStack_398;
            uStack_3a8 = 0;
            uStack_3a0 = 0;
            lStack_398 = 0;
            uStack_370 = uStack_3b8;
            uStack_378 = uStack_3c0;
            uStack_368 = uStack_3b0;
            uStack_3c0 = 0;
            uStack_3b8 = 0;
            uStack_3b0 = 0;
            uStack_360 = uStack_2a0;
            func_0x000107c27914(&uStack_3c0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3a8);
            func_0x000107c278b8(auStack_278,"snap");
            ppuStack_240 = (undefined **)FUN_1086567fc;
            ppuStack_238 = &PTR_DAT_110a60910;
            puStack_230 = &UNK_10bcce264;
            puVar7 = auStack_278;
            FUN_1088b5aac(&puStack_3f8,auStack_350,puVar7,&uStack_390,&lStack_2e8,&ppuStack_240);
            func_0x000108656dd8();
            func_0x000108656df8();
            if ((bStack_3e0 & 1) == 0) {
              func_0x000108656f0c();
              func_0x000108656d94();
              func_0x000108656ce8();
              func_0x000108656c4c();
              func_0x000108656c30();
              func_0x000108656cd8();
              ppuStack_240 = (undefined **)((ulong)ppuStack_240 & 0xffffffffffffff00);
            }
            else {
              if (*(long *)(lVar15 + 0x18) != 0) {
                func_0x00010b5a9044();
              }
              uVar3 = *(uint *)(lVar15 + 0x10) & 0xfffffffe;
              *(uint *)(lVar15 + 0x10) = uVar3;
              if (*(long *)(lVar15 + 0x28) != 0) {
                func_0x00010b5a9044();
                uVar3 = *(uint *)(lVar15 + 0x10);
              }
              *(uint *)(lVar15 + 0x10) = uVar3 & 0xfffffffb;
              func_0x00010b4d1804(&ppuStack_240,auStack_308);
              if ((param_3[1] & 1) != 0) {
                func_0x000108656d9c();
              }
              func_0x000107c3024c(param_3 + 0xc,&ppuStack_240);
              func_0x000108656cd8();
              FUN_108655060();
              func_0x0001086565dc();
              if ((param_3[1] & 1) != 0) {
                func_0x000108656d9c();
              }
              func_0x000107c30248(param_3 + 6,&uStack_338);
              func_0x000107c29edc(&ppuStack_240,auStack_2d0);
              if ((param_3[1] & 1) != 0) {
                func_0x000108656d9c();
              }
              func_0x000107c3024c(param_3 + 7,&ppuStack_240);
              func_0x000108656cd8();
              *(undefined4 *)((long)param_3 + 0x44) = uStack_2a0;
              for (puVar7 = puStack_3f8; puVar7 != puStack_3f0; puVar7 = puVar7 + 0x13) {
                puStack_230 = (undefined *)0x0;
                ppuStack_238 = (undefined **)0x0;
                ppuStack_240 = &PTR_FUN_110a91eb0;
                puStack_228 = &DAT_11383d918;
                puStack_220 = &DAT_11383d918;
                puStack_218 = &DAT_11383d918;
                puStack_210 = &DAT_11383d918;
                ppuStack_208 = (undefined **)0x0;
                ppuStack_200 = (undefined **)0x0;
                uStack_1f8 = 0;
                func_0x0001078dbb6c(auStack_258,puVar7[6] + 0x1a,puVar7[7]);
                func_0x000107c29edc(auStack_278,auStack_258);
                if (((ulong)ppuStack_238 & 1) != 0) {
                  func_0x000108656d9c();
                }
                func_0x000107c3024c(&puStack_228,auStack_278);
                func_0x000108656df8();
                func_0x000108656e18();
                ppuVar9 = ppuStack_238;
                if (((ulong)ppuStack_238 & 1) != 0) {
                  ppuVar9 = *(undefined ***)((ulong)ppuStack_238 & 0xfffffffffffffffe);
                }
                func_0x00010539283c(&puStack_220,puVar7[9],puVar7[10] - puVar7[9],ppuVar9);
                ppuVar9 = ppuStack_238;
                if (((ulong)ppuStack_238 & 1) != 0) {
                  ppuVar9 = *(undefined ***)((ulong)ppuStack_238 & 0xfffffffffffffffe);
                }
                func_0x00010539283c(&puStack_218,puVar7[0xc],puVar7[0xd] - puVar7[0xc],ppuVar9);
                ppuVar9 = ppuStack_238;
                if (((ulong)ppuStack_238 & 1) != 0) {
                  ppuVar9 = *(undefined ***)((ulong)ppuStack_238 & 0xfffffffffffffffe);
                }
                func_0x00010539283c(&puStack_210,puVar7[0xf],puVar7[0x10] - puVar7[0xf],ppuVar9);
                func_0x000108656ef0();
                puStack_230 = (undefined *)((ulong)puStack_230 | 2);
                if (ppuStack_200 == (undefined **)0x0) {
                  ppuVar9 = ppuStack_238;
                  if (((ulong)ppuStack_238 & 1) != 0) {
                    func_0x000108656dbc();
                  }
                  func_0x000107c287e0();
                  ppuStack_200 = ppuVar9;
                }
                func_0x000107c287d0();
                func_0x000108656d34();
                func_0x000108656ef0();
                puStack_230 = (undefined *)((ulong)puStack_230 | 1);
                if (ppuStack_208 == (undefined **)0x0) {
                  ppuVar9 = ppuStack_238;
                  if (((ulong)ppuStack_238 & 1) != 0) {
                    func_0x000108656dbc();
                  }
                  func_0x000107c287e0();
                  ppuStack_208 = ppuVar9;
                }
                func_0x000107c287d0();
                func_0x000108656d34();
                uStack_1f8 = (undefined4)puVar7[0x12];
                pppuVar5 = (undefined ***)(param_3 + 2);
                func_0x000107c303b0(pppuVar5,0x108656660);
                if (pppuVar5 != &ppuStack_240) {
                  ppuVar9 = pppuVar5[1];
                  if (((ulong)ppuVar9 & 1) != 0) {
                    ppuVar9 = *(undefined ***)((ulong)ppuVar9 & 0xfffffffffffffffe);
                  }
                  ppuVar11 = ppuStack_238;
                  if (((ulong)ppuStack_238 & 1) != 0) {
                    ppuVar11 = *(undefined ***)((ulong)ppuStack_238 & 0xfffffffffffffffe);
                  }
                  if (ppuVar9 == ppuVar11) {
                    FUN_10890eda0();
                  }
                  else {
                    FUN_10890ed70();
                  }
                }
                FUN_10890e8f0(&ppuStack_240);
              }
              lVar15 = param_4[1];
              for (lVar10 = *param_4; lVar10 != lVar15; lVar10 = lVar10 + 0x30) {
                lVar6 = lVar10;
                func_0x000108655070();
                if (*(int *)(lVar6 + 0x1c) != 3) {
                  func_0x000100690874(lVar6);
                  *(undefined4 *)(lVar6 + 0x1c) = 3;
                  uVar12 = *(ulong *)(lVar6 + 8);
                  if ((uVar12 & 1) != 0) {
                    func_0x000108656dbc();
                  }
                  func_0x0001006850d0();
                  *(ulong *)(lVar6 + 0x10) = uVar12;
                }
              }
              param_5 = param_5 + 0x50;
              func_0x00010065acbc(param_5,auStack_350);
              uVar12 = uStack_2e0;
              lVar10 = lStack_2e8;
              plVar13 = (long *)param_2[5];
              func_0x000108656ce8();
              puVar7 = (ulong *)((long)(uVar12 - lVar10) / 0x50);
              (**(code **)(*plVar13 + 0x10))(plVar13,puVar7,param_5);
              ppuStack_240 = (undefined **)CONCAT71(ppuStack_240._1_7_,1);
            }
            func_0x000108656bf4();
            func_0x0001059567e0(&puStack_3f8);
            func_0x0001059567bc(&uStack_390);
            func_0x000107c27914(auStack_350);
            goto LAB_10865488c;
          }
          puVar7 = (ulong *)&UNK_10f4afab1;
          func_0x000108656d94();
          func_0x000108656ce8();
          func_0x000108656c4c();
          func_0x000108656c30();
        }
        else {
          puVar7 = (ulong *)&UNK_10f4afa95;
          func_0x000108656d94();
          func_0x000108656ce8();
          func_0x000108656c4c();
          func_0x000108656c30();
        }
        goto LAB_108654880;
      }
LAB_108654868:
      func_0x000108656f0c();
      func_0x000108656d94();
      func_0x000108656ce8();
      func_0x000108656c4c();
      func_0x000108656c30();
LAB_108654880:
      func_0x000108656cd8();
      ppuStack_240 = (undefined **)((ulong)ppuStack_240 & 0xffffffffffffff00);
      func_0x000108656bf4();
LAB_10865488c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_338);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
    }
    FUN_1088bf4ec(auStack_308);
LAB_108654798:
    func_0x000105956730(&lStack_2e8);
  }
  puVar4 = auStack_2d0;
  FUN_1086566c8(puVar4);
  while( true ) {
    func_0x000108656d20();
    func_0x000107c27fb8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
    if ((int)puVar7 == 0) {
      do {
        func_0x000108656cc8();
        func_0x000104bd46a0(puVar4);
      } while ((int)puVar7 == 0);
    }
    else {
      func_0x0001059567e0(&puStack_3f8);
      func_0x0001059567bc(&uStack_390);
      func_0x000107c27914(auStack_350);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_338);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
    FUN_1088bf4ec(auStack_308);
    func_0x000105956730(&lStack_2e8);
    FUN_1086566c8(auStack_2d0);
    ___cxa_begin_catch();
    func_0x000108656d20();
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  return;
LAB_10865485c:
  plVar13 = plVar13 + 1;
  lVar10 = lVar10 + -8;
  if (lVar10 == 0) goto LAB_108654868;
  goto LAB_108654840;
}



/* Entry: 108655060; end: 10865507f;  */

void FUN_108655060(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108656dbc();
    }
    func_0x0001006851d4();
    *(ulong *)(param_1 + 0x68) = uVar1;
  }
  return;
}



/* Entry: 108655080; end: 1086550df;  */

void FUN_108655080(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [56];
  
  puVar1 = auStack_60;
  FUN_1086569c0(auStack_60);
  FUN_1086569d8(auStack_60);
  func_0x000108656b70(param_1,puVar1);
  FUN_1086569a0(auStack_58);
  return;
}



/* Entry: 1086550e0; end: 1086554af;  */

undefined8
FUN_1086550e0(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *extraout_x8;
  long extraout_x9;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000100695348(auStack_98,param_3);
  func_0x000108656f4c();
  func_0x00010727f9a8(auStack_78,auStack_98);
  func_0x000107c279a4(auStack_98);
  FUN_108653db8();
  ppuVar11 = &PTR_PTR_113280bc8;
  if (*(undefined ***)(param_3 + 0x68) != (undefined **)0x0) {
    ppuVar11 = *(undefined ***)(param_3 + 0x68);
  }
  if (*(int *)((long)ppuVar11 + 0x1c) == 3) {
    ppuVar11 = (undefined **)ppuVar11[2];
  }
  else {
    ppuVar11 = &PTR_PTR_113280b18;
  }
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    plVar10 = *(long **)(param_1 + 0x28);
    func_0x000107c278b8(auStack_98,&UNK_10f4afba0);
    if (param_2[4] != param_2[5]) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (auStack_98,&DAT_10f62a9e8);
      func_0x000107c27fc4(auStack_98,param_2[4] + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (auStack_98,&DAT_10f62a9ea);
    }
    func_0x000108656d3c();
    func_0x000108656cb8();
    func_0x000108656c5c(*(undefined8 *)(*plVar10 + 0x28),plVar10,auStack_78,auStack_98);
    func_0x000108656e08();
    uVar8 = 4;
  }
  else {
    func_0x000108656e30();
    uStack_90 = 0;
    uStack_80 = 0;
    puVar9 = (ulong *)(param_3 + 0x60);
    puVar4 = (undefined8 *)(*puVar9 & 0xfffffffffffffffc);
    lVar6 = (long)*(char *)((long)puVar4 + 0x17);
    puVar5 = puVar4;
    if (lVar6 < 0) {
      puVar5 = (undefined8 *)*puVar4;
      lVar6 = puVar4[1];
    }
    puVar2 = auStack_98;
    func_0x000107c30344(puVar2,puVar5,lVar6);
    if (((ulong)puVar2 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x28);
      func_0x000108656e00();
      func_0x000108656d3c();
      func_0x000108656cb8();
      func_0x000108656f2c(*(undefined8 *)(*plVar10 + 0x28));
      func_0x000108656c5c(plVar10);
LAB_1086553f4:
      func_0x000108656cf0();
      uVar8 = 4;
    }
    else {
      if (param_2[1] - *param_2 != 0x20) {
        plVar10 = *(long **)(param_1 + 0x28);
        func_0x000108656e00();
        func_0x000108656d3c();
        func_0x000108656cb8();
        func_0x000108656f2c(*(undefined8 *)(*plVar10 + 0x28));
        func_0x000108656c5c(plVar10);
        func_0x000108656cf0();
      }
      lVar6 = (long)*(char *)(((ulong)ppuVar11[6] & 0xfffffffffffffffc) + 0x17);
      if (lVar6 < 0) {
        lVar6 = *(long *)(((ulong)ppuVar11[6] & 0xfffffffffffffffc) + 8);
      }
      if (lVar6 != 0x10) {
        plVar10 = *(long **)(param_1 + 0x28);
        func_0x000108656e00();
        func_0x000108656d3c();
        func_0x000108656cb8();
        func_0x000108656f2c(*(undefined8 *)(*plVar10 + 0x28));
        func_0x000108656c5c(plVar10);
        func_0x000108656cf0();
      }
      func_0x000108653e68(auStack_98);
      FUN_10802af44();
      func_0x000108656c14();
      plVar10 = extraout_x8;
      lVar6 = extraout_x9;
      do {
        if (lVar6 == 0) {
          plVar10 = *(long **)(param_1 + 0x28);
          func_0x000108656e00();
          func_0x000108656d3c();
          func_0x000108656cb8();
          func_0x000108656f2c(*(undefined8 *)(*plVar10 + 0x28));
          func_0x000108656c5c(plVar10);
          goto LAB_1086553f4;
        }
        lVar3 = *plVar10;
        lVar6 = lVar6 + -8;
        plVar10 = plVar10 + 1;
      } while (*(int *)(lVar3 + 0x38) != 1);
      func_0x00010802e2b4();
      func_0x000108653dc8();
      uVar7 = *(ulong *)(lVar3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar3 + 0x18,(ulong)ppuVar11[6] & 0xfffffffffffffffc,uVar7);
      func_0x000107c29edc(auStack_b0,param_2);
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        func_0x000108656d9c();
      }
      func_0x000107c3024c(lVar3 + 0x10,auStack_b0);
      func_0x000108656cf0();
      func_0x00010b4d1804(auStack_b0,auStack_98);
      if ((*(ulong *)(param_3 + 8) & 1) != 0) {
        func_0x000108656d9c();
      }
      func_0x000107c3024c(puVar9,auStack_b0);
      func_0x000108656cf0();
      plVar10 = *(long **)(param_1 + 0x28);
      uVar1 = *(undefined1 *)(ppuVar11 + 8);
      func_0x000108656d3c();
      (**(code **)(*plVar10 + 0x20))
                (plVar10,uVar1,param_5,puVar9,auStack_78,*(undefined4 *)(ppuVar11 + 3),param_6);
      uVar8 = 2;
    }
    FUN_1088bf4ec(auStack_98);
  }
  func_0x000108656de8();
  return uVar8;
}



/* Entry: 1086554b0; end: 10865551f;  */

long FUN_1086554b0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010065acbc();
  }
  else {
    func_0x0001006b7934();
  }
  return param_1;
}



/* Entry: 108655520; end: 108655527;  */

long FUN_108655520(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  long unaff_x19;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_3a8 [24];
  undefined8 uStack_390;
  long lStack_388;
  undefined1 uStack_380;
  undefined1 auStack_378 [24];
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined1 auStack_340 [8];
  ulong uStack_338;
  ulong uStack_330;
  byte bStack_320;
  undefined1 auStack_2a8 [24];
  byte bStack_290;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  char cStack_118;
  undefined1 auStack_110 [24];
  byte bStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  uint uStack_88;
  byte bStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000108656e88();
  uStack_390 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_380 = 1;
  lStack_388 = param_1;
  func_0x000108656d0c();
  func_0x000108656f4c();
  func_0x000108656f04(auStack_3a8);
  func_0x000108656db4();
  func_0x000108656ec8();
  iVar4 = (int)unaff_x19 + 0x38;
  func_0x000100693498();
  if (iVar4 != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x50);
    (**(code **)(*plVar5 + 0x10))();
    func_0x000108656ca0();
    if (((ulong)plVar5 & 1) != 0) goto LAB_1086555ac;
LAB_108655780:
    unaff_x19 = 1;
    goto LAB_108655e84;
  }
LAB_1086555ac:
  func_0x000108656d44(*(undefined8 *)(param_1 + 0x68));
  if ((bool)in_ZR) {
    ppuVar9 = *(undefined ***)(extraout_x8 + 0x10);
  }
  else {
    ppuVar9 = &PTR_PTR_113280b18;
  }
  if (*(int *)(ppuVar9 + 3) == 0) {
    func_0x000108656f0c();
    func_0x000108656ce0();
    func_0x000108656cd0();
    func_0x000108656da8();
    func_0x000108656c3c();
    func_0x000108656eb8();
    func_0x000108656cb0();
    unaff_x19 = 4;
    goto LAB_108655e84;
  }
  ppuVar9 = ppuVar9 + 2;
  func_0x000108656d88(*ppuVar9);
  if (!(bool)in_ZR) {
    ppuVar9 = extraout_x9;
  }
  uVar3 = *(undefined ***)(*ppuVar9 + 0x38) == (undefined **)0x0;
  ppuVar2 = &PTR_PTR_11326cb58;
  if (!(bool)uVar3) {
    ppuVar2 = *(undefined ***)(*ppuVar9 + 0x38);
  }
  uVar6 = unaff_x19 + 0x38;
  func_0x0001006933e4(uVar6,ppuVar2);
  if ((int)uVar6 == 0) {
LAB_108655628:
    func_0x000108656d0c();
    func_0x000108656f4c();
    func_0x000108656f04(&lStack_78);
    func_0x000108656db4();
    func_0x000108656ec8();
    func_0x000108656d44(*(undefined8 *)(uVar6 + 0x68));
    if ((bool)uVar3) {
      ppuVar9 = *(undefined ***)(extraout_x8_00 + 0x10);
    }
    else {
      ppuVar9 = &PTR_PTR_113280b18;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x30))(auStack_b8);
    if ((bStack_80 & 1) == 0) {
      func_0x000108656ce0();
      func_0x000108656cd0();
      func_0x000108656da8();
      func_0x000108656c3c();
      func_0x000108656eb8();
      func_0x000108656cb0();
      unaff_x19 = 4;
    }
    else {
      puVar7 = auStack_b8;
      func_0x000107c29edc(&lStack_d0,puVar7);
      ppuVar8 = ppuVar9 + 2;
      func_0x000108656d88(*ppuVar8);
      ppuVar2 = ppuVar8;
      if (!(bool)uVar3) {
        ppuVar2 = extraout_x9_00;
      }
      ppuVar1 = ppuVar2 + *(int *)(ppuVar9 + 3);
      for (lVar11 = (long)*(int *)(ppuVar9 + 3) << 3; ppuVar10 = ppuVar1, lVar11 != 0;
          lVar11 = lVar11 + -8) {
        puVar7 = (undefined1 *)(*(ulong *)(*ppuVar2 + 0x18) & 0xfffffffffffffffc);
        func_0x000107c278d0(puVar7,&lStack_d0);
        ppuVar10 = ppuVar2;
        if (((ulong)puVar7 & 1) != 0) break;
        ppuVar2 = ppuVar2 + 1;
      }
      func_0x000108656d88(ppuVar9[2]);
      if (!(bool)uVar3) {
        ppuVar8 = extraout_x9_01;
      }
      if (ppuVar10 == ppuVar8 + *(int *)(ppuVar9 + 3)) {
        func_0x000108656ce0();
        func_0x000108656cd0();
        func_0x000108656c68();
        func_0x000108656c04();
        func_0x000108656cb0();
        unaff_x19 = 3;
      }
      else {
        if (uStack_88 < *(uint *)(*ppuVar10 + 0x48)) {
          plVar5 = *(long **)(unaff_x19 + 0x28);
          func_0x000108656ce0();
          func_0x000108656cd0();
          (**(code **)(*plVar5 + 0x28))
                    (plVar5,&lStack_78,auStack_340,puVar7,*(undefined1 *)(ppuVar9 + 8),0,
                     *(undefined4 *)(ppuVar9 + 3),uStack_88);
          func_0x000108656cb0();
        }
        uStack_f0 = 0;
        uStack_d8 = 0;
        auStack_110[0] = 0;
        bStack_f8 = 0;
        func_0x000108656f18();
        puVar12 = ppuVar9[7];
        plVar5 = *(long **)(unaff_x19 + 0x18);
        func_0x000100696384(&lStack_190);
        FUN_10884725c(&lStack_210,&lStack_190);
        (**(code **)(*plVar5 + 0x10))(auStack_340,plVar5,&lStack_210);
        func_0x000108656dc8();
        func_0x000107c27914(&lStack_190);
        if ((bStack_320 & 1) == 0) {
          uStack_150 = uStack_150 & 0xffffffffffffff00;
          cStack_118 = '\0';
        }
        else {
          func_0x0001006963ec(&lStack_210,(ulong)puVar12 & 0xfffffffffffffffc);
          for (; uStack_338 != uStack_330; uStack_338 = uStack_338 + 0x38) {
            uVar6 = uStack_338;
            func_0x0001006760a8(uStack_338,&lStack_210);
            if ((uVar6 & 1) != 0) {
              FUN_1086564c4(&uStack_150,uStack_338);
              cStack_118 = '\x01';
              goto LAB_108655b2c;
            }
          }
          cStack_118 = '\0';
          uStack_150 = uStack_150 & 0xffffffffffffff00;
LAB_108655b2c:
          func_0x000108656dc8();
        }
        FUN_108648f24(&uStack_338);
        if ((cStack_118 == '\x01') && (lStack_130 - lStack_138 == 0x20)) {
          func_0x0001086554e4(&uStack_f0,&uStack_150);
          func_0x0001086554e4(auStack_110,&lStack_138);
          uStack_1c8 = uStack_120;
LAB_108655bec:
          func_0x000107c29e04(&lStack_1a8,unaff_x19 + 0x38);
          FUN_108654108(&uStack_1c0,auStack_b8);
          uStack_180 = uStack_198;
          lStack_188 = lStack_1a0;
          lStack_190 = lStack_1a8;
          lStack_1a0 = 0;
          lStack_1a8 = 0;
          uStack_198 = 0;
          uStack_170 = uStack_1b8;
          uStack_178 = uStack_1c0;
          uStack_168 = uStack_1b0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_160 = uStack_88;
          func_0x000107c27914(&uStack_1c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1a8);
          func_0x000108656f18();
          FUN_108842a4c(&lStack_230);
          FUN_108654108(&lStack_250,&uStack_f0);
          func_0x000107c27994(&lStack_270,auStack_110);
          uStack_200 = uStack_220;
          lStack_208 = lStack_228;
          lStack_210 = lStack_230;
          lStack_228 = 0;
          uStack_220 = 0;
          lStack_230 = 0;
          lStack_1f0 = lStack_248;
          lStack_1f8 = lStack_250;
          uStack_1e8 = uStack_240;
          lStack_250 = 0;
          lStack_248 = 0;
          uStack_240 = 0;
          lStack_1d8 = lStack_268;
          lStack_1e0 = lStack_270;
          uStack_1d0 = uStack_260;
          lStack_268 = 0;
          uStack_260 = 0;
          lStack_270 = 0;
          func_0x000108656ec0();
          func_0x000107c27914(&lStack_250);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_230);
          FUN_108654148(auStack_340,*ppuVar10);
          func_0x000107c278b8(&lStack_360,"snap");
          FUN_1088b5ba4(auStack_2a8,auStack_340,&lStack_360,&lStack_190,&lStack_210);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_360);
          func_0x000108656e28();
          FUN_1086550e0();
          func_0x0001059569b4(auStack_2a8);
          func_0x000108656dd0();
          func_0x0001059567bc(&lStack_190);
        }
        else {
          func_0x000108656cf8(auStack_340);
          func_0x0001086554b0(&uStack_f0,auStack_340);
          func_0x000107c27914(auStack_340);
          lVar11 = CONCAT71(uStack_ef,uStack_f0);
          if (lStack_e8 - lVar11 == 0x41) {
            FUN_1088b5294(auStack_340,lVar11,0x41,lStack_a0,lStack_98 - lStack_a0);
            func_0x0001052b2b60(auStack_110,auStack_340);
            func_0x000107c279c4(auStack_340);
            if ((bStack_f8 & 1) != 0) {
              uStack_1c8 = *(uint *)((long)ppuVar9 + 0x44);
              goto LAB_108655bec;
            }
            func_0x000108656ce0();
            func_0x000108656cd0();
            func_0x000108656c68();
            func_0x000108656c04();
          }
          else {
            func_0x000108656ce0(lVar11,&UNK_10f4afb7d);
            func_0x000108656cd0();
            func_0x000108656c68();
            func_0x000108656c04();
          }
          func_0x000108656cb0();
          unaff_x19 = 4;
        }
        func_0x0001086566e8(&uStack_150);
        func_0x000107c279c4(auStack_110);
        func_0x000107c279c4(&uStack_f0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d0);
    }
    func_0x000108656e10();
    lVar11 = -0x68;
  }
  else {
    uVar3 = *(undefined ***)(*ppuVar9 + 0x40) == (undefined **)0x0;
    ppuVar2 = &PTR_PTR_11326cb58;
    if (!(bool)uVar3) {
      ppuVar2 = *(undefined ***)(*ppuVar9 + 0x40);
    }
    uVar6 = unaff_x19 + 0x38;
    func_0x0001006933e4(uVar6,ppuVar2);
    if ((uVar6 & 1) != 0) goto LAB_108655628;
    lVar11 = *(long *)(unaff_x19 + 0x50);
    func_0x000100671198();
    func_0x000108656ca0();
    if ((int)lVar11 == 0) goto LAB_108655780;
    func_0x000108656d0c();
    func_0x000108656f4c();
    func_0x000108656f04(&uStack_f0);
    func_0x000108656db4();
    func_0x000108656ec8();
    func_0x000108656d44(*(undefined8 *)(lVar11 + 0x68));
    if ((bool)uVar3) {
      ppuVar9 = *(undefined ***)(extraout_x8_01 + 0x10);
    }
    else {
      ppuVar9 = &PTR_PTR_113280b18;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x30))(auStack_b8);
    if ((bStack_80 & 1) == 0) {
      func_0x000108656ce0();
      func_0x000108656cd0();
      func_0x000108656e50();
      func_0x000108656da8();
      func_0x000108656c3c();
      func_0x000108656eb8();
      func_0x000108656cb0();
      unaff_x19 = 4;
    }
    else {
      func_0x000107c27994(auStack_110,auStack_b8);
      func_0x000107c27994(&lStack_78,&lStack_a0);
      func_0x000108656cf8(&lStack_d0);
      if (lStack_d0 == lStack_c8) {
LAB_108655934:
        puVar12 = ppuVar9[2];
        ppuVar9 = ppuVar9 + 2;
        if (((ulong)puVar12 & 1) != 0) {
          ppuVar9 = (undefined **)(puVar12 + 7);
        }
        func_0x000108656cf8(&lStack_1a8);
        ppuVar2 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(*ppuVar9 + 0x40) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(*ppuVar9 + 0x40);
        }
        FUN_108842a4c(&uStack_1c0,ppuVar2);
        FUN_108654108(&lStack_230,&lStack_1a8);
        uStack_120 = *(uint *)(*ppuVar9 + 0x48);
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        uStack_140 = uStack_1b0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        lStack_130 = lStack_228;
        lStack_138 = lStack_230;
        uStack_128 = uStack_220;
        lStack_230 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        func_0x000107c27914(&lStack_230);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c0);
        FUN_1088b5294(auStack_2a8,lStack_1a8,lStack_1a0 - lStack_1a8,lStack_78,lStack_70 - lStack_78
                     );
        if ((bStack_290 & 1) == 0) {
          func_0x000108656ce0();
          func_0x000108656cd0();
          func_0x000108656e50();
          func_0x000108656da8();
          func_0x000108656c04();
          func_0x000108656cb0();
          unaff_x19 = 4;
        }
        else {
          func_0x000107c29e04(&lStack_250,unaff_x19 + 0x38);
          FUN_108654108(&lStack_270,auStack_110);
          func_0x000107c27994(&lStack_360,auStack_2a8);
          uStack_200 = uStack_240;
          lStack_208 = lStack_248;
          lStack_210 = lStack_250;
          lStack_248 = 0;
          uStack_240 = 0;
          lStack_250 = 0;
          lStack_1f0 = lStack_268;
          lStack_1f8 = lStack_270;
          uStack_1e8 = uStack_260;
          lStack_270 = 0;
          lStack_268 = 0;
          uStack_260 = 0;
          lStack_1d8 = lStack_358;
          lStack_1e0 = lStack_360;
          uStack_1d0 = uStack_350;
          lStack_358 = 0;
          uStack_350 = 0;
          lStack_360 = 0;
          uStack_1c8 = uStack_88;
          func_0x000108656ea0();
          func_0x000108656ec0();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_250);
          FUN_108654148(auStack_340,*ppuVar9);
          func_0x000107c278b8(auStack_378,"snap");
          FUN_1088b5ba4(&lStack_190,auStack_340,auStack_378,&uStack_150,&lStack_210);
          func_0x000108656de8();
          func_0x000108656e28();
          FUN_1086550e0();
          func_0x0001059569b4(&lStack_190);
          func_0x000108656dd0();
        }
        func_0x000107c279c4(auStack_2a8);
        func_0x0001059567bc(&uStack_150);
        func_0x000107c27914(&lStack_1a8);
      }
      else {
        plVar5 = &lStack_d0;
        func_0x0001006760a8(plVar5,auStack_110);
        if (((ulong)plVar5 & 1) != 0) goto LAB_108655934;
        func_0x000100671198();
        func_0x000108656ca0();
        func_0x000108656ce0();
        func_0x000108656cd0();
        func_0x000108656e50();
        func_0x000108656da8();
        func_0x000108656c04();
        func_0x000108656cb0();
        unaff_x19 = 4;
      }
      func_0x000107c27914(&lStack_d0);
      func_0x000107c27914(&lStack_78);
      func_0x000107c27914(auStack_110);
    }
    func_0x000108656e10();
    lVar11 = -0xe0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            (&stack0xfffffffffffffff0 + lVar11);
LAB_108655e84:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
  return unaff_x19;
}



/* Entry: 108655528; end: 108656137;  */

long FUN_108655528(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  long unaff_x19;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_3a8 [24];
  undefined8 uStack_390;
  long lStack_388;
  undefined1 uStack_380;
  undefined1 auStack_378 [24];
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined1 auStack_340 [8];
  ulong uStack_338;
  ulong uStack_330;
  byte bStack_320;
  undefined1 auStack_2a8 [24];
  byte bStack_290;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  char cStack_118;
  undefined1 auStack_110 [24];
  byte bStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  uint uStack_88;
  byte bStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000108656e88();
  uStack_390 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_380 = 1;
  lStack_388 = param_1;
  func_0x000108656d0c();
  func_0x000108656f4c();
  func_0x000108656f04(auStack_3a8);
  func_0x000108656db4();
  func_0x000108656ec8();
  if (param_3 != 0) {
    iVar4 = (int)unaff_x19 + 0x38;
    func_0x000100693498();
    if (iVar4 == 0) goto LAB_1086555ac;
    plVar5 = *(long **)(unaff_x19 + 0x50);
    (**(code **)(*plVar5 + 0x10))();
    func_0x000108656ca0();
    if (((ulong)plVar5 & 1) != 0) goto LAB_1086555ac;
LAB_108655780:
    unaff_x19 = 1;
    goto LAB_108655e84;
  }
LAB_1086555ac:
  func_0x000108656d44(*(undefined8 *)(param_1 + 0x68));
  if ((bool)in_ZR) {
    ppuVar9 = *(undefined ***)(extraout_x8 + 0x10);
  }
  else {
    ppuVar9 = &PTR_PTR_113280b18;
  }
  if (*(int *)(ppuVar9 + 3) == 0) {
    func_0x000108656f0c();
    func_0x000108656ce0();
    func_0x000108656cd0();
    func_0x000108656da8();
    func_0x000108656c3c();
    func_0x000108656eb8();
    func_0x000108656cb0();
    unaff_x19 = 4;
    goto LAB_108655e84;
  }
  ppuVar9 = ppuVar9 + 2;
  func_0x000108656d88(*ppuVar9);
  if (!(bool)in_ZR) {
    ppuVar9 = extraout_x9;
  }
  uVar3 = *(undefined ***)(*ppuVar9 + 0x38) == (undefined **)0x0;
  ppuVar2 = &PTR_PTR_11326cb58;
  if (!(bool)uVar3) {
    ppuVar2 = *(undefined ***)(*ppuVar9 + 0x38);
  }
  uVar7 = unaff_x19 + 0x38;
  func_0x0001006933e4(uVar7,ppuVar2);
  if ((int)uVar7 == 0) {
LAB_108655628:
    func_0x000108656d0c();
    func_0x000108656f4c();
    func_0x000108656f04(&lStack_78);
    func_0x000108656db4();
    func_0x000108656ec8();
    func_0x000108656d44(*(undefined8 *)(uVar7 + 0x68));
    if ((bool)uVar3) {
      ppuVar9 = *(undefined ***)(extraout_x8_00 + 0x10);
    }
    else {
      ppuVar9 = &PTR_PTR_113280b18;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x30))(auStack_b8);
    if ((bStack_80 & 1) == 0) {
      func_0x000108656ce0();
      func_0x000108656cd0();
      func_0x000108656da8();
      func_0x000108656c3c();
      func_0x000108656eb8();
      func_0x000108656cb0();
      unaff_x19 = 4;
    }
    else {
      puVar6 = auStack_b8;
      func_0x000107c29edc(&lStack_d0,puVar6);
      ppuVar8 = ppuVar9 + 2;
      func_0x000108656d88(*ppuVar8);
      ppuVar2 = ppuVar8;
      if (!(bool)uVar3) {
        ppuVar2 = extraout_x9_00;
      }
      ppuVar1 = ppuVar2 + *(int *)(ppuVar9 + 3);
      for (lVar11 = (long)*(int *)(ppuVar9 + 3) << 3; ppuVar10 = ppuVar1, lVar11 != 0;
          lVar11 = lVar11 + -8) {
        puVar6 = (undefined1 *)(*(ulong *)(*ppuVar2 + 0x18) & 0xfffffffffffffffc);
        func_0x000107c278d0(puVar6,&lStack_d0);
        ppuVar10 = ppuVar2;
        if (((ulong)puVar6 & 1) != 0) break;
        ppuVar2 = ppuVar2 + 1;
      }
      func_0x000108656d88(ppuVar9[2]);
      if (!(bool)uVar3) {
        ppuVar8 = extraout_x9_01;
      }
      if (ppuVar10 == ppuVar8 + *(int *)(ppuVar9 + 3)) {
        func_0x000108656ce0();
        func_0x000108656cd0();
        func_0x000108656c68();
        func_0x000108656c04();
        func_0x000108656cb0();
        unaff_x19 = 3;
      }
      else {
        if (uStack_88 < *(uint *)(*ppuVar10 + 0x48)) {
          plVar5 = *(long **)(unaff_x19 + 0x28);
          func_0x000108656ce0();
          func_0x000108656cd0();
          (**(code **)(*plVar5 + 0x28))
                    (plVar5,&lStack_78,auStack_340,puVar6,*(undefined1 *)(ppuVar9 + 8),0,
                     *(undefined4 *)(ppuVar9 + 3),uStack_88);
          func_0x000108656cb0();
        }
        uStack_f0 = 0;
        uStack_d8 = 0;
        auStack_110[0] = 0;
        bStack_f8 = 0;
        func_0x000108656f18();
        puVar12 = ppuVar9[7];
        plVar5 = *(long **)(unaff_x19 + 0x18);
        func_0x000100696384(&lStack_190);
        FUN_10884725c(&lStack_210,&lStack_190);
        (**(code **)(*plVar5 + 0x10))(auStack_340,plVar5,&lStack_210);
        func_0x000108656dc8();
        func_0x000107c27914(&lStack_190);
        if ((bStack_320 & 1) == 0) {
          uStack_150 = uStack_150 & 0xffffffffffffff00;
          cStack_118 = '\0';
        }
        else {
          func_0x0001006963ec(&lStack_210,(ulong)puVar12 & 0xfffffffffffffffc);
          for (; uStack_338 != uStack_330; uStack_338 = uStack_338 + 0x38) {
            uVar7 = uStack_338;
            func_0x0001006760a8(uStack_338,&lStack_210);
            if ((uVar7 & 1) != 0) {
              FUN_1086564c4(&uStack_150,uStack_338);
              cStack_118 = '\x01';
              goto LAB_108655b2c;
            }
          }
          cStack_118 = '\0';
          uStack_150 = uStack_150 & 0xffffffffffffff00;
LAB_108655b2c:
          func_0x000108656dc8();
        }
        FUN_108648f24(&uStack_338);
        if ((cStack_118 == '\x01') && (lStack_130 - lStack_138 == 0x20)) {
          func_0x0001086554e4(&uStack_f0,&uStack_150);
          func_0x0001086554e4(auStack_110,&lStack_138);
          uStack_1c8 = uStack_120;
LAB_108655bec:
          func_0x000107c29e04(&lStack_1a8,unaff_x19 + 0x38);
          FUN_108654108(&uStack_1c0,auStack_b8);
          uStack_180 = uStack_198;
          lStack_188 = lStack_1a0;
          lStack_190 = lStack_1a8;
          lStack_1a0 = 0;
          lStack_1a8 = 0;
          uStack_198 = 0;
          uStack_170 = uStack_1b8;
          uStack_178 = uStack_1c0;
          uStack_168 = uStack_1b0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_160 = uStack_88;
          func_0x000107c27914(&uStack_1c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1a8);
          func_0x000108656f18();
          FUN_108842a4c(&lStack_230);
          FUN_108654108(&lStack_250,&uStack_f0);
          func_0x000107c27994(&lStack_270,auStack_110);
          uStack_200 = uStack_220;
          lStack_208 = lStack_228;
          lStack_210 = lStack_230;
          lStack_228 = 0;
          uStack_220 = 0;
          lStack_230 = 0;
          lStack_1f0 = lStack_248;
          lStack_1f8 = lStack_250;
          uStack_1e8 = uStack_240;
          lStack_250 = 0;
          lStack_248 = 0;
          uStack_240 = 0;
          lStack_1d8 = lStack_268;
          lStack_1e0 = lStack_270;
          uStack_1d0 = uStack_260;
          lStack_268 = 0;
          uStack_260 = 0;
          lStack_270 = 0;
          func_0x000108656ec0();
          func_0x000107c27914(&lStack_250);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_230);
          FUN_108654148(auStack_340,*ppuVar10);
          func_0x000107c278b8(&lStack_360,"snap");
          FUN_1088b5ba4(auStack_2a8,auStack_340,&lStack_360,&lStack_190,&lStack_210);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_360);
          func_0x000108656e28();
          FUN_1086550e0();
          func_0x0001059569b4(auStack_2a8);
          func_0x000108656dd0();
          func_0x0001059567bc(&lStack_190);
        }
        else {
          func_0x000108656cf8(auStack_340);
          func_0x0001086554b0(&uStack_f0,auStack_340);
          func_0x000107c27914(auStack_340);
          lVar11 = CONCAT71(uStack_ef,uStack_f0);
          if (lStack_e8 - lVar11 == 0x41) {
            FUN_1088b5294(auStack_340,lVar11,0x41,lStack_a0,lStack_98 - lStack_a0);
            func_0x0001052b2b60(auStack_110,auStack_340);
            func_0x000107c279c4(auStack_340);
            if ((bStack_f8 & 1) != 0) {
              uStack_1c8 = *(uint *)((long)ppuVar9 + 0x44);
              goto LAB_108655bec;
            }
            func_0x000108656ce0();
            func_0x000108656cd0();
            func_0x000108656c68();
            func_0x000108656c04();
          }
          else {
            func_0x000108656ce0(lVar11,&UNK_10f4afb7d);
            func_0x000108656cd0();
            func_0x000108656c68();
            func_0x000108656c04();
          }
          func_0x000108656cb0();
          unaff_x19 = 4;
        }
        func_0x0001086566e8(&uStack_150);
        func_0x000107c279c4(auStack_110);
        func_0x000107c279c4(&uStack_f0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d0);
    }
    func_0x000108656e10();
    lVar11 = -0x68;
  }
  else {
    uVar3 = *(undefined ***)(*ppuVar9 + 0x40) == (undefined **)0x0;
    ppuVar2 = &PTR_PTR_11326cb58;
    if (!(bool)uVar3) {
      ppuVar2 = *(undefined ***)(*ppuVar9 + 0x40);
    }
    uVar7 = unaff_x19 + 0x38;
    func_0x0001006933e4(uVar7,ppuVar2);
    if ((uVar7 & 1) != 0) goto LAB_108655628;
    if (param_3 != 0) {
      uVar7 = *(ulong *)(unaff_x19 + 0x50);
      func_0x000100671198();
      func_0x000108656ca0();
      if ((int)uVar7 == 0) goto LAB_108655780;
    }
    func_0x000108656d0c();
    func_0x000108656f4c();
    func_0x000108656f04(&uStack_f0);
    func_0x000108656db4();
    func_0x000108656ec8();
    func_0x000108656d44(*(undefined8 *)(uVar7 + 0x68));
    if ((bool)uVar3) {
      ppuVar9 = *(undefined ***)(extraout_x8_01 + 0x10);
    }
    else {
      ppuVar9 = &PTR_PTR_113280b18;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x30))(auStack_b8);
    if ((bStack_80 & 1) == 0) {
      func_0x000108656ce0();
      func_0x000108656cd0();
      func_0x000108656e50();
      func_0x000108656da8();
      func_0x000108656c3c();
      func_0x000108656eb8();
      func_0x000108656cb0();
      unaff_x19 = 4;
    }
    else {
      func_0x000107c27994(auStack_110,auStack_b8);
      func_0x000107c27994(&lStack_78,&lStack_a0);
      func_0x000108656cf8(&lStack_d0);
      if (lStack_d0 == lStack_c8) {
LAB_108655934:
        puVar12 = ppuVar9[2];
        ppuVar9 = ppuVar9 + 2;
        if (((ulong)puVar12 & 1) != 0) {
          ppuVar9 = (undefined **)(puVar12 + 7);
        }
        func_0x000108656cf8(&lStack_1a8);
        ppuVar2 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(*ppuVar9 + 0x40) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(*ppuVar9 + 0x40);
        }
        FUN_108842a4c(&uStack_1c0,ppuVar2);
        FUN_108654108(&lStack_230,&lStack_1a8);
        uStack_120 = *(uint *)(*ppuVar9 + 0x48);
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        uStack_140 = uStack_1b0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        lStack_130 = lStack_228;
        lStack_138 = lStack_230;
        uStack_128 = uStack_220;
        lStack_230 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        func_0x000107c27914(&lStack_230);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c0);
        FUN_1088b5294(auStack_2a8,lStack_1a8,lStack_1a0 - lStack_1a8,lStack_78,lStack_70 - lStack_78
                     );
        if ((bStack_290 & 1) == 0) {
          func_0x000108656ce0();
          func_0x000108656cd0();
          func_0x000108656e50();
          func_0x000108656da8();
          func_0x000108656c04();
          func_0x000108656cb0();
          unaff_x19 = 4;
        }
        else {
          func_0x000107c29e04(&lStack_250,unaff_x19 + 0x38);
          FUN_108654108(&lStack_270,auStack_110);
          func_0x000107c27994(&lStack_360,auStack_2a8);
          uStack_200 = uStack_240;
          lStack_208 = lStack_248;
          lStack_210 = lStack_250;
          lStack_248 = 0;
          uStack_240 = 0;
          lStack_250 = 0;
          lStack_1f0 = lStack_268;
          lStack_1f8 = lStack_270;
          uStack_1e8 = uStack_260;
          lStack_270 = 0;
          lStack_268 = 0;
          uStack_260 = 0;
          lStack_1d8 = lStack_358;
          lStack_1e0 = lStack_360;
          uStack_1d0 = uStack_350;
          lStack_358 = 0;
          uStack_350 = 0;
          lStack_360 = 0;
          uStack_1c8 = uStack_88;
          func_0x000108656ea0();
          func_0x000108656ec0();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_250);
          FUN_108654148(auStack_340,*ppuVar9);
          func_0x000107c278b8(auStack_378,"snap");
          FUN_1088b5ba4(&lStack_190,auStack_340,auStack_378,&uStack_150,&lStack_210);
          func_0x000108656de8();
          func_0x000108656e28();
          FUN_1086550e0();
          func_0x0001059569b4(&lStack_190);
          func_0x000108656dd0();
        }
        func_0x000107c279c4(auStack_2a8);
        func_0x0001059567bc(&uStack_150);
        func_0x000107c27914(&lStack_1a8);
      }
      else {
        plVar5 = &lStack_d0;
        func_0x0001006760a8(plVar5,auStack_110);
        if (((ulong)plVar5 & 1) != 0) goto LAB_108655934;
        func_0x000100671198();
        func_0x000108656ca0();
        func_0x000108656ce0();
        func_0x000108656cd0();
        func_0x000108656e50();
        func_0x000108656da8();
        func_0x000108656c04();
        func_0x000108656cb0();
        unaff_x19 = 4;
      }
      func_0x000107c27914(&lStack_d0);
      func_0x000107c27914(&lStack_78);
      func_0x000107c27914(auStack_110);
    }
    func_0x000108656e10();
    lVar11 = -0xe0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            (&stack0xfffffffffffffff0 + lVar11);
LAB_108655e84:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
  return unaff_x19;
}



/* Entry: 108656138; end: 108656427;  */

void FUN_108656138(undefined4 *param_1,int param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined **ppuVar3;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long lVar5;
  long alStack_1d0 [2];
  byte bStack_1c0;
  long lStack_168;
  undefined1 auStack_108 [40];
  undefined **ppuStack_e0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  lVar4 = param_3;
  func_0x000108656e30();
  uStack_58 = 0;
  uStack_48 = 0;
  func_0x000108656e70(*(undefined8 *)(lVar4 + 0x28));
  uVar2 = 0;
  func_0x000107c30344();
  if ((uVar2 & 1) == 0) {
    func_0x000108656e40();
  }
  else {
    func_0x000108653e68(auStack_60);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_10802af44();
    func_0x000108656c14();
    plVar1 = extraout_x8;
    for (lVar4 = extraout_x9; lVar4 != 0; lVar4 = lVar4 + -8) {
      lVar5 = *plVar1;
      if ((*(int *)(lVar5 + 0x38) == 1) &&
         ((*(byte *)(*(long *)(lVar5 + 0x30) + 0x10) >> 2 & 1) != 0)) {
        func_0x000108656d18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x30) + 0x28) + 0x10),
                            &uStack_78);
        if (*(int *)(lVar5 + 0x38) == 1) {
          ppuVar3 = *(undefined ***)(lVar5 + 0x30);
        }
        else {
          ppuVar3 = &PTR_PTR_1133aa968;
        }
        func_0x000108656c84(ppuVar3);
        func_0x000108656d18(&uStack_90);
        goto LAB_108656328;
      }
      plVar1 = plVar1 + 1;
    }
    func_0x00010068e5ac(auStack_108,param_3);
    ppuVar3 = &PTR_PTR_113280c30;
    if (ppuStack_e0 != (undefined **)0x0) {
      ppuVar3 = ppuStack_e0;
    }
    FUN_108656428(alStack_1d0,ppuVar3);
    if (((bStack_1c0 & 1) == 0) || (*(int *)(lStack_168 + 0x1c) != 3)) {
      func_0x000108656e40();
      func_0x000108656ea8();
      func_0x000108656eb0();
    }
    else {
      FUN_108655528();
      if (param_2 == 2) {
        func_0x000108656e70(ppuStack_e0);
        func_0x000107c30344(auStack_60);
        func_0x000108653e68(auStack_60);
        FUN_10802af44();
        func_0x000108656c14();
        plVar1 = extraout_x8_00;
        for (lVar4 = extraout_x9_00; lVar4 != 0; lVar4 = lVar4 + -8) {
          lVar5 = *plVar1;
          if ((*(int *)(lVar5 + 0x38) == 1) &&
             ((*(byte *)(*(long *)(lVar5 + 0x30) + 0x10) >> 2 & 1) != 0)) {
            func_0x000108656d18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x30) + 0x28) + 0x10),
                                &uStack_78);
            if (*(int *)(lVar5 + 0x38) == 1) {
              ppuVar3 = *(undefined ***)(lVar5 + 0x30);
            }
            else {
              ppuVar3 = &PTR_PTR_1133aa968;
            }
            func_0x000108656c84(ppuVar3);
            func_0x000108656d18(&uStack_90);
            break;
          }
          plVar1 = plVar1 + 1;
        }
      }
      else {
        func_0x000108656e40();
      }
      func_0x000108656ea8();
      func_0x000108656eb0();
      if (param_2 == 2) {
LAB_108656328:
        FUN_108656434(alStack_1d0);
        lVar4 = alStack_1d0[0];
        FUN_108656708();
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          func_0x000108656d9c();
        }
        func_0x000107c30248(lVar4 + 0x18,&uStack_90);
        lVar4 = alStack_1d0[0];
        FUN_108656708();
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          func_0x000108656d9c();
        }
        func_0x000107c30248(lVar4 + 0x10,&uStack_78);
        lVar4 = alStack_1d0[0];
        *param_1 = 1;
        alStack_1d0[0] = 0;
        *(long *)(param_1 + 2) = lVar4;
        func_0x000108656b9c(alStack_1d0);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  FUN_1088bf4ec(auStack_60);
  return;
}



/* Entry: 108656428; end: 108656433;  */

void FUN_108656428(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010068f650(param_1,0,param_2);
  func_0x00010068f86c(&PTR_FUN_110a92270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c349ac();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  func_0x00010068f878(unaff_x19 + 0x18,unaff_x21 + 0x18);
  func_0x00010068f898(unaff_x19 + 0x30);
  func_0x00010068fab0(unaff_x19 + 0x48);
  lVar3 = unaff_x21 + 0x60;
  func_0x00010068fb90();
  *(long *)(unaff_x19 + 0x60) = lVar3;
  *(undefined4 *)(unaff_x19 + 0xc0) = *(undefined4 *)(unaff_x21 + 0xc0);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x00010068fba4();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x00010068fccc();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a470();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x00010068fd5c();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a564();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a568();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c2a56c();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a570();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x21 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar4;
  iVar2 = *(int *)(unaff_x19 + 0xc0);
  if (iVar2 == 0x15) {
    func_0x000107c34a0c();
    func_0x000107c2a580();
  }
  else if (iVar2 == 0xd) {
    func_0x000107c34a0c();
    func_0x000107c2a578();
  }
  else if (iVar2 == 0xe) {
    func_0x000107c34a0c();
    func_0x000107c2a57c();
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    func_0x000107c34a0c();
    func_0x000107c2a574();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  return;
}



/* Entry: 108656434; end: 108656467;  */

void FUN_108656434(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000107c31ce4();
  *param_2 = &PTR_FUN_110a92180;
  param_2[1] = 0;
  param_2[3] = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 108656468; end: 10865646b;  */

undefined8 * FUN_108656468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a608c0;
  func_0x000107c28800(param_1 + 10);
  func_0x000107c27914(param_1 + 7);
  func_0x000107c28804(param_1 + 5);
  func_0x000107c286cc(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10865646c; end: 10865647f;  */

void FUN_10865646c(void)

{
  func_0x0001086567a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108656480; end: 1086564c3;  */

void FUN_108656480(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 1086564c4; end: 108656503;  */

void FUN_1086564c4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108656e88();
  func_0x000107c27994();
  func_0x000107c27994(param_1 + 0x18,unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 108656504; end: 1086565a7;  */

undefined8
FUN_108656504(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x000107c27994(auStack_78,param_4);
  func_0x000105957524(param_1,&uStack_40,&uStack_60,auStack_78,*param_5);
  func_0x000108656df0();
  func_0x000108656d2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 1086565a8; end: 1086566c7;  */

void FUN_1086565a8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108656dbc();
    }
    func_0x0001006851d4();
    *(ulong *)(param_1 + 0x68) = uVar1;
  }
  return;
}



/* Entry: 1086566c8; end: 108656707;  */

void FUN_1086566c8(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108649af0();
  }
  return;
}



/* Entry: 108656708; end: 1086567fb;  */

void FUN_108656708(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 4) {
    func_0x000100690c2c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108656dbc();
    }
    func_0x000108656758();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1086567fc; end: 10865681f;  */

void FUN_1086567fc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108656800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))();
  return;
}



/* Entry: 108656820; end: 108656883;  */

undefined8 * FUN_108656820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_108656884(param_1 + 1,&uStack_60);
  FUN_1086569a0((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_1086569a0(param_1 + 2);
  return param_1;
}



/* Entry: 108656884; end: 1086568ab;  */

undefined8 * FUN_108656884(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1086568ac(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1086568ac; end: 1086568cf;  */

undefined8 FUN_1086568ac(undefined8 param_1)

{
  FUN_1086568d0();
  return param_1;
}



/* Entry: 1086568d0; end: 1086568f7;  */

long FUN_1086568d0(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return param_1;
    }
    FUN_10865696c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x00010065acbc();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    return param_1;
  }
  return param_1;
}



/* Entry: 1086568f8; end: 10865692b;  */

long FUN_1086568f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010065acbc();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return param_1;
}



/* Entry: 10865692c; end: 10865696b;  */

void FUN_10865692c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10865696c; end: 10865699f;  */

void FUN_10865696c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined8 *)((long)param_1 + 0x25) = *(undefined8 *)((long)param_2 + 0x25);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1086569a0; end: 1086569bf;  */

void FUN_1086569a0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086569c0; end: 1086569d7;  */

void FUN_1086569c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_108656a98(param_1 + 1,param_2 + 0x10);
  uVar1 = *param_1;
  *param_1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



/* Entry: 1086569d8; end: 108656a5f;  */

long * FUN_1086569d8(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4afbaf,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    func_0x000108656e08();
    func_0x000108656cf0();
  }
  return param_1 + 1;
}



/* Entry: 108656a60; end: 108656a97;  */

void FUN_108656a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_108656a98(param_1 + 1,param_2 + 1);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* Entry: 108656a98; end: 108656b13;  */

void FUN_108656a98(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != *(char *)(param_2 + 6)) {
    if (cVar1 == '\0') {
      func_0x000108656950(param_1,param_2);
    }
    else {
      func_0x000108656950(param_2,param_1);
      param_2 = param_1;
    }
    if (*(char *)(param_2 + 6) == '\x01') {
      func_0x000107c27914();
      *(undefined1 *)(param_2 + 6) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_38 = param_1[3];
    uStack_30 = (undefined5)param_1[4];
    uStack_2b = (undefined3)*(undefined8 *)((long)param_1 + 0x25);
    uStack_28 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x25) >> 0x18);
    FUN_1086568f8();
    FUN_1086568f8(param_2,&uStack_50);
    func_0x000107c27914(&uStack_50);
    return;
  }
  return;
}



/* Entry: 108656b14; end: 108656bbf;  */

void FUN_108656b14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_40 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_38 = param_1[3];
  uStack_30 = (undefined5)param_1[4];
  uStack_2b = (undefined3)*(undefined8 *)((long)param_1 + 0x25);
  uStack_28 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x25) >> 0x18);
  FUN_1086568f8();
  FUN_1086568f8(param_2,&uStack_50);
  func_0x000107c27914(&uStack_50);
  return;
}



/* Entry: 108656bc0; end: 108656bd7;  */

void FUN_108656bc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000100690be0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108656bd8; end: 108656bf3;  */

void FUN_108656bd8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100690be0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108656bf4; end: 108656f57;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108656bf4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *in_stack_00000048;
  
  FUN_108654058(in_stack_00000048,&stack0x00000048,&stack0x00000210);
  plVar4 = in_stack_00000048;
  if (in_stack_00000048 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_00000048 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*in_stack_00000048 + 0x10))(in_stack_00000048,1,&stack0x00000048);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



/* Entry: 108656f58; end: 10865712f;  */

void FUN_108656f58(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined2 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  func_0x000108657944();
  func_0x00010865797c();
  func_0x000107c278b8(auStack_68,"success");
  puVar1 = auStack_d8;
  func_0x000107c28818(puVar1,auStack_68,1);
  func_0x000107c278b8(auStack_80,&UNK_10f4afbda);
  func_0x000107c2881c(puVar1,auStack_80,param_2);
  func_0x000108657994(*param_1,puVar1);
  func_0x00010865791c();
  func_0x000108657914();
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108657924();
  func_0x000107c29794();
  func_0x00010865797c();
  (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,auStack_d8,param_3);
  func_0x000108657924();
  func_0x000107c278b8(&uStack_f0,"");
  func_0x000107c28080(&uStack_110,"");
  uStack_c0 = uStack_e0;
  auStack_d8[0] = 1;
  uStack_c8 = uStack_e8;
  uStack_d0 = uStack_f0;
  lStack_b8 = param_3 / 1000000;
  lStack_b0 = (long)(int)param_2;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0x101;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_88 = cStack_f8 == '\x01';
  if ((bool)uStack_88) {
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    uStack_90 = uStack_100;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
  }
  func_0x000107c279a4(&uStack_110);
  func_0x000107c31cf4();
  func_0x0001086579f8();
  (**(code **)(extraout_x8 + 0x38))();
  FUN_108657888(auStack_d8);
  return;
}



/* Entry: 108657130; end: 108657133;  */

undefined8 * FUN_108657130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a60a10;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 108657134; end: 108657333;  */

void FUN_108657134(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long *unaff_x19;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000108657944();
  func_0x0001086579b8();
  lStack_c0 = CONCAT44(lStack_c0._4_4_,0x6d);
  func_0x000107c278b8(auStack_58,"success");
  puVar1 = auStack_e0;
  func_0x000107c28818(puVar1,auStack_58,0);
  func_0x000107c278b8(auStack_70,"failure_reason");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,param_2);
  func_0x000107c28820(puVar1,auStack_70,auStack_88);
  func_0x000108657994(*param_1,puVar1);
  func_0x00010865791c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000108657964();
  uVar2 = param_2;
  func_0x000107c27cf4(param_2,&UNK_10f4afa42);
  if ((int)uVar2 != 0) {
    func_0x00010865792c();
    func_0x0001086579e0(*(undefined8 *)(*unaff_x19 + 0x30));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  }
  func_0x000107c278b8(&uStack_f8,"");
  func_0x000107c27f70(&uStack_118,param_2);
  uStack_c8 = uStack_e8;
  auStack_e0[0] = 0;
  uStack_d0 = uStack_f0;
  uStack_d8 = uStack_f8;
  lStack_c0 = param_3 / 1000000;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0x101;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_90 = cStack_100 == '\x01';
  if ((bool)uStack_90) {
    uStack_a0 = uStack_110;
    uStack_a8 = uStack_118;
    uStack_98 = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
  }
  func_0x0001086579d0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f8);
  func_0x0001086579f8();
  (**(code **)(extraout_x8 + 0x38))();
  FUN_108657888(auStack_e0);
  return;
}



/* Entry: 108657334; end: 108657553;  */

void FUN_108657334(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [96];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000108657944();
  func_0x0001086579a0();
  func_0x00010865796c();
  puVar1 = auStack_128;
  func_0x000107c28818(puVar1,auStack_80,1);
  func_0x000108657954();
  func_0x000107c28818(puVar1,auStack_98,param_2);
  func_0x000107c278b8(auStack_b0,&DAT_10f30f9c0);
  func_0x000107c28818(puVar1,auStack_b0,param_3);
  func_0x000107c278b8(auStack_c8,&UNK_10f4afc01);
  func_0x000107c2881c(puVar1,auStack_c8,param_7);
  func_0x000108657994(*param_1,puVar1);
  func_0x00010865791c();
  puVar2 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010865793c();
  func_0x00010865794c();
  func_0x000108657914();
  func_0x0001086579d8();
  func_0x000107c29794();
  func_0x0001086579a0();
  (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,auStack_128,param_4);
  func_0x0001086579d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_140,param_5);
  func_0x000107c28080(auStack_160,"");
  func_0x0001086296e4(auStack_128,1,auStack_140,param_4 / 1000000,param_3 & 0xffffffff | 0x100,
                      param_2 & 0xffffffff | 0x100,auStack_160,(long)param_6,(long)(int)param_7);
  func_0x000107c279a4(auStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  func_0x0001086579f8();
  (**(code **)(extraout_x8 + 0x40))();
  func_0x0001086578b4(auStack_128);
  return;
}



/* Entry: 108657554; end: 108657797;  */

void FUN_108657554(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6,int param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long *unaff_x19;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [32];
  undefined4 uStack_120;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000108657944();
  func_0x0001086579b8();
  uStack_120 = 0x6e;
  func_0x00010865796c();
  puVar1 = auStack_140;
  func_0x000107c28818(puVar1,auStack_80,0);
  func_0x000108657954();
  func_0x000107c28818(puVar1,auStack_98,param_5);
  func_0x000107c278b8(auStack_b0,"failure_reason");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,param_3);
  func_0x000107c28820(puVar1,auStack_b0,auStack_c8);
  func_0x000107c278b8(auStack_e0,&UNK_10f4afc01);
  func_0x000107c2881c(puVar1,auStack_e0,param_8);
  func_0x000108657994(*param_1,puVar1);
  func_0x00010865791c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  func_0x00010865793c();
  func_0x00010865794c();
  func_0x000108657914();
  func_0x000108657964();
  uVar2 = param_3;
  func_0x000107c27cf4(param_3,&UNK_10f4afa42);
  if ((int)uVar2 != 0) {
    func_0x00010865792c();
    func_0x0001086579e0(*(undefined8 *)(*unaff_x19 + 0x30));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,param_2);
  func_0x000107c27f70(auStack_178,param_3);
  func_0x0001086296e4(auStack_140,0,auStack_158,param_4 / 1000000,param_6 | 0x100,
                      param_5 & 0xffffffff | 0x100,auStack_178,(long)param_7,(long)(int)param_8);
  func_0x0001086579d0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x0001086579f8();
  (**(code **)(extraout_x8 + 0x40))();
  func_0x0001086578b4(auStack_140);
  return;
}



/* Entry: 108657798; end: 10865784b;  */

void FUN_108657798(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x000107c29794();
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_110a609a8;
  uStack_40 = 0;
  uStack_28 = 0x6c;
  func_0x000107c278b8(auStack_60,"reason");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78,param_2);
  pppuVar1 = &ppuStack_48;
  func_0x000107c28820(pppuVar1,auStack_60,auStack_78);
  func_0x000108657994(*param_1,pppuVar1);
  func_0x00010865791c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x000107c31cf4();
  func_0x000108657924();
  return;
}



/* Entry: 10865784c; end: 10865784f;  */

undefined8 * FUN_10865784c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60938;
  func_0x000107c286e0(param_1 + 1);
  return param_1;
}



/* Entry: 108657850; end: 108657877;  */

void FUN_108657850(void)

{
  func_0x0001086578e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


