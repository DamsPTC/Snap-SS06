/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072d2e68; end: 1072d2e83;  */

bool FUN_1072d2e68(long param_1)

{
  FUN_1067e045c();
  return param_1 != 0;
}



/* Entry: 1072d2e84; end: 1072d2ec3;  */

void FUN_1072d2e84(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [56];
  
  func_0x0001005d466c(param_2);
  func_0x0001072d3110();
  func_0x0001072d313c();
  func_0x0001072d3180();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 1072d2ec4; end: 1072d2edf;  */

void FUN_1072d2ec4(long param_1)

{
  FUN_107278c90();
  *(undefined4 *)(param_1 + 0x60) = 8;
  return;
}



/* Entry: 1072d2ee0; end: 1072d2f0f;  */

void FUN_1072d2ee0(long param_1,undefined8 param_2,float *param_3)

{
  func_0x000104c318bc();
  *(double *)(param_1 + 0x40) = (double)*param_3;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  return;
}



/* Entry: 1072d2f10; end: 1072d2f1b;  */

undefined8
FUN_1072d2f10(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 * 0xa8 == 0x498) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 * 0xa8) / 0xa8;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_107296268(param_1,param_4,param_5,param_6,param_7);
  FUN_1072d2fb0();
  return param_1;
}



/* Entry: 1072d2f1c; end: 1072d2faf;  */

undefined8
FUN_1072d2f1c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 - param_2 == 0x498) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 - param_2) / 0xa8;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_107296268(param_1,param_4,param_5,param_6,param_7);
  FUN_1072d2fb0();
  return param_1;
}



/* Entry: 1072d2fb0; end: 1072d2fff;  */

void FUN_1072d2fb0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    FUN_1072d3000(auStack_48,param_1,param_2);
  }
  return;
}



/* Entry: 1072d3000; end: 1072d3023;  */

void FUN_1072d3000(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1072d3024(&uStack_18);
  return;
}



/* Entry: 1072d3024; end: 1072d302b;  */

void FUN_1072d3024(undefined8 param_1,long param_2)

{
  func_0x00010729e66c(param_1,param_2,param_2 + 0x38);
  FUN_107296738();
  return;
}



/* Entry: 1072d302c; end: 1072d306b;  */

void FUN_1072d302c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [56];
  
  func_0x0001005d466c(param_2);
  func_0x0001072d3110();
  func_0x0001072d313c();
  func_0x0001072d3180();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 1072d306c; end: 1072d30ab;  */

undefined8 * FUN_1072d306c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_1072d30ac();
  return param_1;
}



/* Entry: 1072d30ac; end: 1072d30eb;  */

void FUN_1072d30ac(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001004c3c54(param_1,param_2);
  }
  return;
}



/* Entry: 1072d30ec; end: 1072d31bb;  */

void FUN_1072d30ec(void)

{
  return;
}



/* Entry: 1072d31bc; end: 1072d31fb;  */

void FUN_1072d31bc(long param_1,undefined8 param_2)

{
  FUN_1072ab574(param_1 + 0x18);
  func_0x0001072d32c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
  return;
}



/* Entry: 1072d31fc; end: 1072d328b;  */

void FUN_1072d31fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_1072ab574(param_1 + 0x18);
  FUN_1072d328c(&lStack_38,param_1);
  FUN_1072bc8a4(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  lVar1 = lStack_30;
  for (lVar2 = lStack_38; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    func_0x000104c003e8(lVar2);
  }
  func_0x0001072bc854(&lStack_38);
  return;
}



/* Entry: 1072d328c; end: 1072d32fb;  */

undefined8 * FUN_1072d328c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_1072d3678(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1072d32fc; end: 1072d3333;  */

void FUN_1072d32fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10724cbe8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 1072d3334; end: 1072d33d3;  */

long FUN_1072d3334(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_1072d33d4(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_1072d34a8(auStack_48,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_10724cbe8(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x20;
  FUN_1072d3414(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x0001072d3608(auStack_48);
  return lVar2;
}



/* Entry: 1072d33d4; end: 1072d3413;  */

long * FUN_1072d33d4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x7ffffffffffffff;
    }
    return plVar2;
  }
  FUN_1072d3494();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1072d3530(plVar2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 1072d3414; end: 1072d3493;  */

void FUN_1072d3414(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1072d3530(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1072d3494; end: 1072d34a7;  */

long * FUN_1072d3494(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f409355;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072d34f0();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x20;
  return plVar2;
}



/* Entry: 1072d34a8; end: 1072d3513;  */

long * FUN_1072d34a8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072d34f0();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1072d3514; end: 1072d352f;  */

void FUN_1072d3514(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (param_2 >> 0x3b != 0) {
    func_0x000104bd35f4();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x20) {
      func_0x000105302f48(param_4,uVar1);
      param_4 = param_4 + 0x20;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      func_0x0001006393ec(param_2);
    }
    func_0x0001072d3884();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 5);
  return;
}



/* Entry: 1072d3530; end: 1072d35c3;  */

void FUN_1072d3530(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    func_0x000105302f48(param_4,lVar1);
    param_4 = param_4 + 0x20;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x0001006393ec(param_2);
  }
  func_0x0001072d3884();
  return;
}



/* Entry: 1072d35c4; end: 1072d3633;  */

long FUN_1072d35c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x0001006393ec();
    }
  }
  return param_1;
}



/* Entry: 1072d3634; end: 1072d363b;  */

void FUN_1072d3634(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072d363c; end: 1072d3677;  */

void FUN_1072d363c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072d3678; end: 1072d3683;  */

void FUN_1072d3678(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  long lVar7;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_98 [88];
  
  uVar6 = (long)(param_3 - param_2) >> 5;
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1 + 2;
  uVar5 = *param_1;
  puVar2 = param_1;
  if ((ulong)((long)(*puVar3 - uVar5) >> 5) < uVar6) {
    if (uVar5 != 0) {
      FUN_1072bc8a4(param_1);
      __ZdlPv(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar4 = uVar6;
    FUN_1072d33d4();
    if ((ulong)puVar2 >> 0x3b == 0) {
      func_0x0001072d34f0();
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar3;
      param_1[2] = (ulong)(puVar3 + (long)puVar2 * 4);
      puVar2 = param_1;
      uVar4 = param_2;
      uVar5 = param_3;
    }
    else {
      unaff_x30 = FUN_1072d377c;
      FUN_1072d3494();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x22 = puVar3;
      unaff_x23 = uVar6;
      unaff_x29 = puVar1;
    }
  }
  else {
    lVar7 = param_1[1] - uVar5;
    if (uVar6 <= (ulong)(lVar7 >> 5)) {
      FUN_1072d3824(param_2,param_3);
      func_0x0001072ce520(param_1,param_2);
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -4;
        func_0x0001006393ec();
      }
      *(ulong **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1072d3824(param_2,param_2 + lVar7);
    uVar4 = param_2 + lVar7;
    uVar5 = param_3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = puVar2[1];
  *(ulong *)((long)register0x00000008 + -0x50) = uVar6;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar6;
  *(ulong **)((long)register0x00000008 + -0x70) = puVar2 + 2;
  *(undefined1 **)((long)register0x00000008 + -0x68) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x48);
  *(undefined1 *)((long)register0x00000008 + -0x58) = 0;
  for (; uVar4 != uVar5; uVar4 = uVar4 + 0x20) {
    FUN_10724cbe8(uVar6,uVar4);
    uVar6 = *(long *)((long)register0x00000008 + -0x48) + 0x20;
    *(ulong *)((long)register0x00000008 + -0x48) = uVar6;
  }
  *(undefined1 *)((long)register0x00000008 + -0x58) = 1;
  func_0x0001072d3884();
  puVar2[1] = uVar6;
  return;
}



/* Entry: 1072d3684; end: 1072d377b;  */

void FUN_1072d3684(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  ulong unaff_x23;
  ulong uVar7;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_98 [88];
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1 + 2;
  uVar5 = *param_1;
  puVar2 = param_1;
  if ((ulong)((long)(*puVar3 - uVar5) >> 5) < param_4) {
    if (uVar5 != 0) {
      FUN_1072bc8a4(param_1);
      __ZdlPv(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar4 = param_4;
    FUN_1072d33d4();
    if ((ulong)puVar2 >> 0x3b == 0) {
      func_0x0001072d34f0();
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar3;
      param_1[2] = (ulong)(puVar3 + (long)puVar2 * 4);
      puVar2 = param_1;
      uVar4 = param_2;
      uVar5 = param_3;
    }
    else {
      unaff_x30 = FUN_1072d377c;
      FUN_1072d3494();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x22 = puVar3;
      unaff_x23 = param_4;
      unaff_x29 = puVar1;
    }
  }
  else {
    lVar6 = param_1[1] - uVar5;
    if (param_4 <= (ulong)(lVar6 >> 5)) {
      FUN_1072d3824(param_2,param_3);
      func_0x0001072ce520(param_1,param_2);
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -4;
        func_0x0001006393ec();
      }
      *(ulong **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1072d3824(param_2,param_2 + lVar6);
    uVar4 = param_2 + lVar6;
    uVar5 = param_3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar7 = puVar2[1];
  *(ulong *)((long)register0x00000008 + -0x50) = uVar7;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar7;
  *(ulong **)((long)register0x00000008 + -0x70) = puVar2 + 2;
  *(undefined1 **)((long)register0x00000008 + -0x68) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x48);
  *(undefined1 *)((long)register0x00000008 + -0x58) = 0;
  for (; uVar4 != uVar5; uVar4 = uVar4 + 0x20) {
    FUN_10724cbe8(uVar7,uVar4);
    uVar7 = *(long *)((long)register0x00000008 + -0x48) + 0x20;
    *(ulong *)((long)register0x00000008 + -0x48) = uVar7;
  }
  *(undefined1 *)((long)register0x00000008 + -0x58) = 1;
  func_0x0001072d3884();
  puVar2[1] = uVar7;
  return;
}



/* Entry: 1072d377c; end: 1072d3823;  */

void FUN_1072d377c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_10724cbe8(lVar1,param_2);
    lVar1 = lVar1 + 0x20;
  }
  func_0x0001072d3884();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1072d3824; end: 1072d387b;  */

long FUN_1072d3824(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    func_0x000107282d64(lVar1,param_1);
    lVar1 = lVar1 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



/* Entry: 1072d387c; end: 1072d389f;  */

void FUN_1072d387c(void)

{
  return;
}



/* Entry: 1072d38a0; end: 1072d391b;  */

undefined8 *
FUN_1072d38a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_11099c070;
  FUN_1072d391c(param_1 + 1,param_3,param_4);
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[4] = 0;
  FUN_10726ed14(param_1 + 5);
  param_1[7] = param_1;
  return param_1;
}



/* Entry: 1072d391c; end: 1072d39af;  */

void FUN_1072d391c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x150;
  __Znwm();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1072d5a78();
  *param_1 = uVar1;
  func_0x00010724bd74(&uStack_50);
  func_0x00010724bd50(&uStack_40);
  return;
}



/* Entry: 1072d39b0; end: 1072d3a07;  */

undefined8 * FUN_1072d39b0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11099c070;
  plVar1 = param_1 + 5;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar1);
  FUN_1072508cc(plVar1);
  func_0x0001072ac4dc(param_1 + 2);
  FUN_1072d5be8(param_1 + 1);
  return param_1;
}



/* Entry: 1072d3a08; end: 1072d3a0b;  */

undefined8 * FUN_1072d3a08(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11099c070;
  plVar1 = param_1 + 5;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar1);
  FUN_1072508cc(plVar1);
  func_0x0001072ac4dc(param_1 + 2);
  FUN_1072d5be8(param_1 + 1);
  return param_1;
}



/* Entry: 1072d3a0c; end: 1072d3a1f;  */

void FUN_1072d3a0c(void)

{
  FUN_1072d39b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d3a20; end: 1072d3d9b;  */

undefined8 *
FUN_1072d3a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long *aplStack_768 [2];
  char cStack_758;
  long lStack_750;
  undefined8 *puStack_748;
  undefined1 auStack_740 [504];
  undefined1 auStack_548 [32];
  undefined4 uStack_528;
  long lStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 auStack_508 [70];
  long alStack_2d8 [2];
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *apuStack_2b8 [63];
  undefined1 auStack_c0 [32];
  undefined4 uStack_a0;
  long alStack_78 [3];
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_1;
  func_0x0001072d6684();
  plVar9 = (long *)(lVar4 + 0x20);
  do {
    puVar7 = (undefined8 *)*plVar9;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = (long)puVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = extraout_x8;
  FUN_10724ef84(&puStack_2c0,param_2);
  FUN_1072d3d9c(aplStack_768,uVar8,&puStack_2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_2c0);
  uVar3 = cStack_758 == '\x01';
  if ((bool)uVar3) {
    plVar9 = &lStack_750;
    lStack_750 = param_1;
    puStack_748 = puVar7;
    FUN_1072d488c(auStack_740,param_3);
    FUN_1072d5a18(auStack_548,param_4);
    uStack_518 = *(undefined8 *)(param_1 + 0x30);
    lStack_520 = *(long *)(param_1 + 0x28);
    uStack_528 = param_5;
    if (*(long *)(param_1 + 0x30) != 0) {
      do {
        func_0x0001072d666c();
      } while (extraout_w10 != 0);
    }
    uStack_510 = *(undefined8 *)(param_1 + 0x38);
    alStack_78[0] = 0;
    alStack_78[1] = 0;
    apuStack_2b8[0] = (undefined8 *)0x0;
    puStack_2c0 = (undefined8 *)0x0;
    func_0x00010725b1d4(&puStack_2c0);
    func_0x00010725b1d4(alStack_78);
    puVar5 = auStack_508;
    FUN_1072d4854(puVar5,&lStack_750);
    alStack_2d8[1] = 1;
    func_0x0001072d6800();
    puStack_2c8 = puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_11099c260;
    ppuVar6 = &puStack_2c0;
    FUN_1072d5dcc(ppuVar6,&lStack_520);
    func_0x0001072d6754();
    *ppuVar6 = &PTR_FUN_11099c2b0;
    FUN_1072d5dcc(ppuVar6 + 1,&puStack_2c0);
    ppuStack_60 = ppuVar6;
    puVar5[3] = &PTR_SUB_11099c370;
    func_0x000104bff864(puVar5 + 4,alStack_78);
    func_0x000104bff8d8(alStack_78);
    FUN_1072d3e28(&puStack_2c0);
    puStack_2c8 = (undefined8 *)0x0;
    FUN_1072d5d7c(alStack_2d8);
    FUN_1072d3e28(&lStack_520);
    func_0x0001072d3e50(&lStack_750);
    uStack_778 = 0;
    uStack_770 = 0;
    puStack_2c0 = puVar5 + 3;
    apuStack_2b8[0] = puVar5;
    (**(code **)(*aplStack_768[0] + 0x10))(aplStack_768[0],&puStack_2c0);
    func_0x000104bff90c(&puStack_2c0);
    func_0x0001072d3e70(&uStack_778);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    FUN_10724bb70(&lStack_520,plVar9 + 3);
    lVar4 = lStack_520;
    if (lStack_520 != 0) {
      plVar9 = (long *)plVar9[2];
      puStack_2c0 = puVar7;
      FUN_1072d488c(apuStack_2b8,param_3);
      FUN_1072d5a18(auStack_c0,param_4);
      uStack_a0 = param_5;
      FUN_1072d6188(alStack_78,plVar9,FUN_1072d3e94,0,&puStack_2c0);
      alStack_2d8[0] = alStack_78[0];
      func_0x0001072d6408(&puStack_2c0);
      func_0x0001073ae140(lVar4,alStack_2d8);
      lVar4 = alStack_2d8[0];
      alStack_2d8[0] = 0;
      if (lVar4 != 0) {
        func_0x0001072d6660();
      }
    }
    func_0x00010724bcd8(&lStack_520);
  }
  FUN_1072ba1e0(aplStack_768);
  func_0x0001072d664c(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    lVar4 = alStack_2d8[0];
    alStack_2d8[0] = 0;
    if (lVar4 != 0) {
      func_0x0001072d6660();
    }
    func_0x00010724bcd8(&lStack_520);
    do {
      FUN_1072ba1e0(aplStack_768);
      func_0x0001072d6694();
      func_0x00010724b374(plVar9 + 2);
    } while( true );
  }
  return puVar7;
}



/* Entry: 1072d3d9c; end: 1072d3e27;  */

void FUN_1072d3d9c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 1;
  lStack_40 = param_2;
  FUN_10724e404();
  param_2 = param_2 + 0xa8;
  FUN_1072d5cb4(param_2,param_3);
  if (param_2 == 0) {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x0001072d666c();
      } while (extraout_w10 != 0);
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10724e49c(&lStack_40);
  return;
}



/* Entry: 1072d3e28; end: 1072d3e93;  */

undefined8 FUN_1072d3e28(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072d3e50(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072d3e94; end: 1072d4457;  */

void FUN_1072d3e94(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long *extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long *plVar9;
  long *extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  long *plVar11;
  long *extraout_x10;
  long *plVar12;
  long *plVar13;
  long *extraout_x11;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  long lStack_540;
  long lStack_538;
  undefined8 uStack_530;
  long *plStack_520;
  long *plStack_518;
  ulong uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long *plStack_4e8;
  undefined1 auStack_4e0 [504];
  undefined1 auStack_2e8 [32];
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [504];
  undefined1 auStack_a0 [32];
  undefined4 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar8 = param_1;
  func_0x0001072d6684();
  plVar16 = *(long **)(lVar8 + 0x30);
  uStack_58 = extraout_x8;
  if (plVar16 == (long *)0x0) {
    uStack_510 = (ulong)*(uint *)(param_1 + 0x40);
    uStack_500 = (ulong)*(uint *)(param_1 + 0x28);
    plStack_520 = (long *)(ulong)*(uint *)(param_1 + 0x2c);
    plStack_518 = (long *)0x0;
    uStack_508 = 0;
    uStack_4f8 = 0;
    func_0x0001003a91d4(&UNK_10f40935c);
    func_0x0001003a9204(&lStack_538);
    func_0x00010786df04(0x10,&lStack_538,0,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_538);
  }
  else {
    lStack_4f0 = param_1;
    plStack_4e8 = param_2;
    FUN_1072d488c(auStack_4e0,param_3);
    FUN_1072d5a18(auStack_2e8,param_4);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x138);
    lStack_2b8 = *(long *)(param_1 + 0x140);
    if (lStack_2b8 != 0) {
      plVar17 = (long *)(lStack_2b8 + 0x10);
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_2b0 = *(undefined8 *)(param_1 + 0x148);
    lStack_538 = 0;
    uStack_530 = 0;
    plStack_520 = (long *)0x0;
    plStack_518 = (long *)0x0;
    uStack_2c8 = param_5;
    func_0x00010725b1d4(&plStack_520);
    func_0x00010725b1d4(&lStack_538);
    puVar5 = &uStack_2a8;
    FUN_1072d5320(puVar5,&lStack_4f0);
    puStack_60 = (undefined8 *)0x0;
    func_0x0001072d6754();
    *puVar5 = &PTR_FUN_11099c160;
    puVar5[2] = lStack_2b8;
    puVar5[1] = uStack_2c0;
    uStack_2c0 = 0;
    lStack_2b8 = 0;
    puVar5[3] = uStack_2b0;
    puVar5[5] = uStack_2a0;
    puVar5[4] = uStack_2a8;
    FUN_1072d488c(puVar5 + 6,auStack_298);
    FUN_1072d5a18(puVar5 + 0x45,auStack_a0);
    *(undefined4 *)(puVar5 + 0x49) = uStack_80;
    puStack_60 = puVar5;
    (**(code **)(*plVar16 + 0x10))(&lStack_540,plVar16,param_3,auStack_78);
    func_0x0001072ad0c8(auStack_78);
    FUN_1072d594c(&uStack_2c0);
    func_0x0001072d5974(&lStack_4f0);
    lStack_538 = param_1 + 0x58;
    uStack_530 = CONCAT71(uStack_530._1_7_,1);
    FUN_107279a5c();
    plVar17 = *(long **)(param_1 + 0x108);
    if (plVar17 != (long *)0x0) {
      uVar7 = (long)plVar17 - 1;
      if (((ulong)plVar17 & uVar7) == 0) {
        plVar16 = (long *)(uVar7 & (ulong)param_2);
      }
      else {
        plVar16 = param_2;
        if (plVar17 <= param_2) {
          uVar10 = 0;
          if (plVar17 != (long *)0x0) {
            uVar10 = (ulong)param_2 / (ulong)plVar17;
          }
          plVar16 = (long *)((long)param_2 - uVar10 * (long)plVar17);
        }
      }
      plVar15 = *(long **)(*(long *)(param_1 + 0x100) + (long)plVar16 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_1072d40d4;
            plVar9 = (long *)plVar15[1];
            if (plVar9 != param_2) break;
            if ((long *)plVar15[2] == param_2) {
              in_ZR = 1;
              goto LAB_1072d433c;
            }
          }
          if (((ulong)plVar17 & uVar7) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar7);
          }
          else if (plVar17 <= plVar9) {
            uVar10 = 0;
            if (plVar17 != (long *)0x0) {
              uVar10 = (ulong)plVar9 / (ulong)plVar17;
            }
            plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar17);
          }
        } while (plVar9 == plVar16);
      }
    }
LAB_1072d40d4:
    plVar15 = (long *)0x20;
    __Znwm();
    plVar9 = (long *)(param_1 + 0x110);
    uStack_510 = 1;
    *plVar15 = 0;
    plVar15[1] = (long)param_2;
    plVar15[2] = (long)param_2;
    plVar15[3] = 0;
    fVar18 = (float)(*(long *)(param_1 + 0x118) + 1);
    plStack_518 = plVar9;
    if ((plVar17 == (long *)0x0) ||
       (fVar19 = *(float *)(param_1 + 0x120) * (float)plVar17, in_ZR = fVar19 == fVar18,
       fVar19 < fVar18)) {
      plStack_520 = plVar15;
      func_0x0001072d67ac();
      bVar3 = (long *)0x2 < plVar17;
      bVar4 = plVar17 == (long *)0x3;
      func_0x0001072d6838();
      plVar16 = extraout_x8_00;
      if (!bVar3 || bVar4) {
        plVar16 = extraout_x9;
      }
      if ((long)plVar16 - 1U == 0) {
        plVar16 = (long *)0x2;
      }
      else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar17 = *(long **)(param_1 + 0x108);
      }
      if (plVar17 < plVar16) {
LAB_1072d4168:
        if ((ulong)plVar16 >> 0x3d != 0) goto LAB_1072d4394;
        lVar8 = (long)plVar16 << 3;
        __Znwm(lVar8);
        FUN_1072d5994(param_1 + 0x100,lVar8);
        *(long **)(param_1 + 0x108) = plVar16;
        lVar8 = *(long *)(param_1 + 0x100);
        for (plVar17 = (long *)0x0; plVar16 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
          *(undefined8 *)(lVar8 + (long)plVar17 * 8) = 0;
        }
        plVar11 = (long *)*plVar9;
        plVar17 = plVar16;
        if (plVar11 != (long *)0x0) {
          plVar12 = (long *)plVar11[1];
          uVar10 = (long)plVar16 - 1;
          uVar7 = 0;
          if (plVar16 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar13 = plVar12;
          if (plVar16 <= plVar12) {
            plVar13 = (long *)((long)plVar12 - uVar7 * (long)plVar16);
          }
          if (((ulong)plVar16 & uVar10) == 0) {
            plVar13 = (long *)((ulong)plVar12 & uVar10);
          }
          *(long **)(lVar8 + (long)plVar13 * 8) = plVar9;
          while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
            plVar14 = (long *)plVar11[1];
            if (((ulong)plVar16 & uVar10) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar10);
            }
            else if (plVar16 <= plVar14) {
              uVar7 = 0;
              if (plVar16 != (long *)0x0) {
                uVar7 = (ulong)plVar14 / (ulong)plVar16;
              }
              plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar16);
            }
            if (plVar14 != plVar13) {
              if (*(long *)(lVar8 + (long)plVar14 * 8) == 0) {
                *(long **)(lVar8 + (long)plVar14 * 8) = plVar12;
                plVar13 = plVar14;
              }
              else {
                *plVar12 = *plVar11;
                func_0x0001072d6794();
                lVar8 = extraout_x8_01;
                uVar10 = extraout_x9_00;
                plVar11 = extraout_x10;
                plVar13 = extraout_x11;
              }
            }
          }
        }
      }
      else if (plVar16 < plVar17) {
        plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x118) / *(float *)(param_1 + 0x120));
        if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001072d66f0();
        }
        if (plVar16 <= plVar11) {
          plVar16 = plVar11;
        }
        if (plVar16 < plVar17) {
          if (plVar16 != (long *)0x0) goto LAB_1072d4168;
          FUN_1072d5994(param_1 + 0x100,0);
          *(undefined8 *)(param_1 + 0x108) = 0;
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = *(long **)(param_1 + 0x108);
        }
      }
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar16 = (long *)((long)plVar17 - 1U & (ulong)param_2);
        in_ZR = true;
      }
      else {
        in_ZR = param_2 == plVar17;
        plVar16 = param_2;
        if (plVar17 <= param_2) {
          uVar7 = 0;
          if (plVar17 != (long *)0x0) {
            uVar7 = (ulong)param_2 / (ulong)plVar17;
          }
          plVar16 = (long *)((long)param_2 - uVar7 * (long)plVar17);
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x100);
    plVar11 = *(long **)(lVar8 + (long)plVar16 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar15 = *plVar9;
      *plVar9 = (long)plVar15;
      *(long **)(lVar8 + (long)plVar16 * 8) = plVar9;
      if (*plVar15 != 0) {
        plVar16 = *(long **)(*plVar15 + 8);
        if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
          plVar16 = (long *)((ulong)plVar16 & (long)plVar17 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = plVar16 == plVar17;
          if (plVar17 <= plVar16) {
            uVar7 = 0;
            if (plVar17 != (long *)0x0) {
              uVar7 = (ulong)plVar16 / (ulong)plVar17;
            }
            plVar16 = (long *)((long)plVar16 - uVar7 * (long)plVar17);
          }
        }
        *(long **)(lVar8 + (long)plVar16 * 8) = plVar15;
      }
    }
    else {
      *plVar15 = *plVar11;
      *plVar11 = (long)plVar15;
    }
    plStack_520 = (long *)0x0;
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
    FUN_1072d5860(&plStack_520);
LAB_1072d433c:
    lVar8 = lStack_540;
    lStack_540 = 0;
    lVar6 = plVar15[3];
    plVar15[3] = lVar8;
    if (lVar6 != 0) {
      func_0x0001072d6660();
    }
    func_0x0001072d672c();
    lVar8 = lStack_540;
    lStack_540 = 0;
    if (lVar8 != 0) {
      func_0x0001072d6660();
    }
  }
  func_0x0001072d664c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1072d4394:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1072d439c);
  (*pcVar2)();
}



/* Entry: 1072d4458; end: 1072d44db;  */

void FUN_1072d4458(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001072d6684();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_11099c1d0;
  uStack_50 = param_2;
  uStack_28 = extraout_x8;
  FUN_1072d5604(auStack_60,*(long *)(param_1 + 8) + 0x58,&uStack_50,appuStack_48);
  FUN_1072ad074(auStack_60);
  FUN_1072ad094(appuStack_48);
  func_0x0001072d664c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = appuStack_48;
  FUN_1072ad094();
  func_0x0001072d6694();
                    /* WARNING: Could not recover jumptable at 0x0001072d44ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pppuVar1[1][9] + 0x80))();
  return;
}



/* Entry: 1072d44dc; end: 1072d4503;  */

void FUN_1072d44dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072d44ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x48) + 0x80))();
  return;
}



/* Entry: 1072d4504; end: 1072d452f;  */

undefined8 * FUN_1072d4504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c0b0;
  func_0x0001072aca24(param_1 + 1);
  return param_1;
}



/* Entry: 1072d4530; end: 1072d4533;  */

undefined8 * FUN_1072d4530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c0b0;
  func_0x0001072aca24(param_1 + 1);
  return param_1;
}



/* Entry: 1072d4534; end: 1072d4547;  */

void FUN_1072d4534(void)

{
  FUN_1072d4504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d4548; end: 1072d4697;  */

undefined8
FUN_1072d4548(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [312];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar3 = param_1;
  func_0x0001072d6800();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_11099c3c0;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_DAT_11099c410;
  FUN_1072d5a18(puVar3 + 4,param_4);
  plVar4 = (long *)param_1[1];
  puStack_70 = puVar6;
  puStack_68 = puVar3;
  FUN_10724ef84(auStack_88,param_2);
  FUN_1072d6858(auStack_1c0,param_3);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_1d0 = puVar6;
  puStack_1c8 = puVar3;
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_88,auStack_1c0,&puStack_1d0,param_5);
  func_0x0001072d6710();
  func_0x0001072d6568();
  FUN_1072d59ac(auStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x0001072d6544(&puStack_70);
  return param_5;
}



/* Entry: 1072d4698; end: 1072d46a7;  */

void FUN_1072d4698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072d46a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 1072d46a8; end: 1072d475f;  */

void FUN_1072d46a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long unaff_x19;
  long *plVar1;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_178 [312];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001072d66c0();
  FUN_1072d4760(&uStack_40,param_3);
  plVar1 = *(long **)(unaff_x19 + 8);
  FUN_1072d6858(auStack_178);
  lStack_188 = lStack_38;
  uStack_190 = uStack_40;
  if (lStack_38 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_178,&uStack_190);
  func_0x0001072d6628(&uStack_190);
  FUN_1072d59ac(auStack_178);
  func_0x0001072d6604(&uStack_40);
  return;
}



/* Entry: 1072d4760; end: 1072d47c7;  */

void FUN_1072d4760(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001072d6800();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_11099c460;
  puVar1[3] = &PTR_DAT_11099c4b0;
  FUN_10724cbe8(puVar1 + 4,param_2);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1072d47c8; end: 1072d4853;  */

void FUN_1072d47c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_1072d4760(&uStack_30,param_3);
  plVar1 = *(long **)(param_1 + 8);
  lStack_38 = lStack_28;
  uStack_40 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x28))();
  func_0x0001072d6628(&uStack_40);
  func_0x0001072d6604(&uStack_30);
  return;
}



/* Entry: 1072d4854; end: 1072d488b;  */

void FUN_1072d4854(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072d66c0();
  func_0x0001072d682c();
  func_0x0001072d6820();
  *(undefined4 *)(unaff_x19 + 0x228) = *(undefined4 *)(unaff_x20 + 0x228);
  return;
}



/* Entry: 1072d488c; end: 1072d49e7;  */

undefined4 * FUN_1072d488c(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  FUN_107263b58(param_1 + 0x10,param_2 + 0x10);
  FUN_1072d49e8(param_1 + 0x20,param_2 + 0x20);
  FUN_1072d4a74(param_1 + 0x34,param_2 + 0x34);
  uVar3 = *(undefined8 *)(param_2 + 0x46);
  uVar2 = *(undefined8 *)(param_2 + 0x44);
  uVar4 = *(undefined8 *)((long)param_2 + 0x119);
  *(undefined8 *)((long)param_1 + 0x121) = *(undefined8 *)((long)param_2 + 0x121);
  *(undefined8 *)((long)param_1 + 0x119) = uVar4;
  *(undefined8 *)(param_1 + 0x46) = uVar3;
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  func_0x00010028af84(param_1 + 0x4c,param_2 + 0x4c);
  lVar1 = *(long *)(param_2 + 0x56);
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  FUN_107263b58(param_1 + 0x5c,param_2 + 0x5c);
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  func_0x0001072d51d0(param_1 + 0x6e,param_2 + 0x6e);
  func_0x00010028b0c8(param_1 + 0x74,param_2 + 0x74);
  return param_1;
}



/* Entry: 1072d49e8; end: 1072d4a17;  */

void FUN_1072d49e8(long param_1)

{
  func_0x0001072d684c();
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_1072d4a18();
  return;
}



/* Entry: 1072d4a18; end: 1072d4a2b;  */

void FUN_1072d4a18(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1072d4a48();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 1072d4a2c; end: 1072d4a47;  */

void FUN_1072d4a2c(long param_1)

{
  FUN_1072d4a48();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1072d4a48; end: 1072d4a73;  */

void FUN_1072d4a48(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c2fe00();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1072d4a74; end: 1072d4aa3;  */

void FUN_1072d4a74(long param_1)

{
  func_0x0001072d684c();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1072d4aa4();
  return;
}



/* Entry: 1072d4aa4; end: 1072d4ab7;  */

void FUN_1072d4aa4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1072d4ad4();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1072d4ab8; end: 1072d4ad3;  */

void FUN_1072d4ab8(long param_1)

{
  FUN_1072d4ad4();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1072d4ad4; end: 1072d4afb;  */

undefined4 * FUN_1072d4ad4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1072d4afc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1072d4afc; end: 1072d4b2b;  */

void FUN_1072d4afc(long param_1)

{
  func_0x0001072d684c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1072d4b2c();
  return;
}



/* Entry: 1072d4b2c; end: 1072d4b3f;  */

void FUN_1072d4b2c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1072d4b5c();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1072d4b40; end: 1072d4b5b;  */

void FUN_1072d4b40(long param_1)

{
  FUN_1072d4b5c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1072d4b5c; end: 1072d4bab;  */

void FUN_1072d4b5c(undefined8 *param_1,long param_2)

{
  func_0x0001072d66c0();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x0001072d4bec();
  func_0x0001072d4bac();
  return;
}



/* Entry: 1072d4bac; end: 1072d4c9b;  */

void FUN_1072d4bac(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x0001072d4dbc(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1072d4c9c; end: 1072d4d87;  */

void FUN_1072d4c9c(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1072d4d88(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1072d4da0(plVar3);
    FUN_1072d4d88(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001072d6794();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072d4d88; end: 1072d4d9f;  */

void FUN_1072d4d88(long *param_1,long param_2)

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



/* Entry: 1072d4da0; end: 1072d4def;  */

void FUN_1072d4da0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072d4dd4();
  return;
}



/* Entry: 1072d4df0; end: 1072d4ff7;  */

undefined1  [16] FUN_1072d4df0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  plVar7 = param_1 + 3;
  func_0x000100102e7c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1072d4eb4;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x0001000e107c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1072d4fc8;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1072d4eb4:
  FUN_1072d4ff8(aplStack_68,param_1,plVar7,param_3);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    func_0x0001072d67ac();
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x0001072d6838();
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x0001072d4bec(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = aplStack_68[0];
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar7;
    if (*aplStack_68[0] != 0) {
      plVar7 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1072d5150(aplStack_68);
  uVar4 = 1;
LAB_1072d4fc8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1072d4ff8; end: 1072d504f;  */

void FUN_1072d4ff8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1072d5050(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1072d5050; end: 1072d5087;  */

void FUN_1072d5050(long param_1)

{
  long unaff_x20;
  
  func_0x0001072d66c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_1072d5088(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072d5088; end: 1072d50bb;  */

void FUN_1072d5088(long param_1)

{
  func_0x0001072d684c();
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1072d50bc();
  return;
}



/* Entry: 1072d50bc; end: 1072d510b;  */

void FUN_1072d50bc(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072d66c0();
  FUN_10724b204();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099c120)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1072d510c; end: 1072d514f;  */

void FUN_1072d510c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  return;
}



/* Entry: 1072d5150; end: 1072d5173;  */

undefined8 FUN_1072d5150(undefined8 param_1)

{
  FUN_1072d5174(param_1,0);
  return param_1;
}



/* Entry: 1072d5174; end: 1072d518b;  */

void FUN_1072d5174(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010724b1dc(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1072d518c; end: 1072d5203;  */

void FUN_1072d518c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010724b1dc(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1072d5204; end: 1072d527b;  */

void FUN_1072d5204(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001072d66c0();
    FUN_1072d527c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  func_0x0001072d52b0(&uStack_40);
  return;
}



/* Entry: 1072d527c; end: 1072d531f;  */

long * FUN_1072d527c(long *param_1,long param_2)

{
  long *plVar1;
  
  if (-1 < param_2) {
    plVar1 = param_1 + 2;
    func_0x000100033e30();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2;
    return plVar1;
  }
  FUN_106889720();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x00010015b8ec(param_1);
  }
  return param_1;
}



/* Entry: 1072d5320; end: 1072d5357;  */

void FUN_1072d5320(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072d66c0();
  func_0x0001072d682c();
  func_0x0001072d6820();
  *(undefined4 *)(unaff_x19 + 0x228) = *(undefined4 *)(unaff_x20 + 0x228);
  return;
}



/* Entry: 1072d5358; end: 1072d535b;  */

undefined8 * FUN_1072d5358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c160;
  FUN_1072d594c(param_1 + 1);
  return param_1;
}



/* Entry: 1072d535c; end: 1072d536f;  */

void FUN_1072d535c(void)

{
  FUN_1072d5584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d5370; end: 1072d53a7;  */

undefined8 FUN_1072d5370(undefined8 param_1)

{
  func_0x0001072d6754();
  FUN_1072d55b0();
  return param_1;
}



/* Entry: 1072d53a8; end: 1072d53cb;  */

long FUN_1072d53a8(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x0001072d677c(&PTR_FUN_11099c160);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  FUN_1072d5320(param_2 + 0x20,param_1 + 0x18);
  return param_2;
}



/* Entry: 1072d53cc; end: 1072d554b;  */

void FUN_1072d53cc(long param_1,long param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001072d66c0();
  func_0x0001072d6684();
  uStack_38 = extraout_x8;
  func_0x00010726fc00(&ppuStack_58,param_1 + 8);
  if (ppuStack_58 == (undefined **)0x0) {
LAB_1072d5438:
    func_0x0001072d673c();
    ppuStack_58 = (undefined **)0x0;
    uStack_50 = 0;
  }
  else {
    func_0x00010726fc3c();
    in_ZR = *ppuStack_58 == (undefined *)0xffffffffffffffff;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_1072d5438;
    }
    ppuStack_58 = (undefined **)0x0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_1072508cc(&uStack_68);
  }
  func_0x0001072d673c();
  func_0x00010726fc00(&ppuStack_58);
  if (ppuStack_58 == (undefined **)0x0) {
    func_0x0001072d673c();
  }
  else {
    puVar2 = *ppuStack_58;
    func_0x0001072d673c();
    in_ZR = puVar2 == (undefined *)0xffffffffffffffff;
    if (!(bool)in_ZR) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      ppuStack_58 = &PTR_FUN_11099c1d0;
      pppuStack_40 = &ppuStack_58;
      FUN_1072d5604(&uStack_68,lVar3 + 0x58,unaff_x19 + 0x28,&ppuStack_58);
      FUN_1072ad074(&uStack_68);
      FUN_1072ad094(&ppuStack_58);
      if ((*(int *)(unaff_x19 + 0x248) != 0) && (*(byte **)(unaff_x20 + 0x10) != (byte *)0x0)) {
        bVar1 = **(byte **)(unaff_x20 + 0x10);
        in_ZR = bVar1 == 6;
        if ((bVar1 < 7) && (in_ZR = (1 << (ulong)(bVar1 & 0x1f) & 0x58U) == 0, !(bool)in_ZR)) {
          param_2 = *(long *)(unaff_x19 + 0x28);
          FUN_1072d3e94(lVar3,param_2,unaff_x19 + 0x30,unaff_x19 + 0x228,
                        *(int *)(unaff_x19 + 0x248) + -1);
          goto LAB_1072d5508;
        }
      }
      FUN_1072d5930();
      param_2 = unaff_x20;
    }
  }
LAB_1072d5508:
  func_0x0001072d6734();
  func_0x0001072d664c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072d6734();
  func_0x0001072d6694();
  func_0x0001072d67ec(param_2);
  func_0x0001072d676c();
  return;
}



/* Entry: 1072d554c; end: 1072d5577;  */

void FUN_1072d554c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072d67ec(param_2,param_1,&PTR_DAT_11099c240);
  func_0x0001072d676c();
  return;
}



/* Entry: 1072d5578; end: 1072d5583;  */

undefined ** FUN_1072d5578(void)

{
  return &PTR_DAT_11099c240;
}



/* Entry: 1072d5584; end: 1072d55af;  */

undefined8 * FUN_1072d5584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c160;
  FUN_1072d594c(param_1 + 1);
  return param_1;
}



/* Entry: 1072d55b0; end: 1072d5603;  */

long FUN_1072d55b0(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072d677c(&PTR_FUN_11099c160);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  FUN_1072d5320(param_1 + 0x20,param_2 + 0x18);
  return param_1;
}



/* Entry: 1072d5604; end: 1072d57c7;  */

void FUN_1072d5604(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined3 uStack_43;
  
  func_0x0001072d66c0();
  FUN_107279a5c();
  func_0x0001072d67d0();
  if ((param_2 == 0) || (FUN_1072ace20(param_4,param_2 + 0x18), (int)param_4 == 0)) {
    uVar2 = 0;
    *(undefined1 *)unaff_x19 = 0;
    goto LAB_1072d579c;
  }
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x0001072d67d0();
  if (param_4 != (long *)0x0) {
    uVar5 = *(ulong *)(unaff_x20 + 0xb0);
    lVar3 = *param_4;
    uVar4 = param_4[1];
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar4 = uVar7 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar9 * uVar5;
    }
    lVar8 = *(long *)(unaff_x20 + 0xa8);
    plVar1 = *(long **)(lVar8 + uVar4 * 8);
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
    } while ((long *)*plVar6 != param_4);
    plStack_50 = (long *)(unaff_x20 + 0xb8);
    if (plVar6 == plStack_50) {
LAB_1072d56f0:
      if (lVar3 == 0) {
LAB_1072d5724:
        *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
        lVar3 = *param_4;
        goto LAB_1072d572c;
      }
      uVar9 = *(ulong *)(lVar3 + 8);
      if ((uVar5 & uVar7) == 0) {
        uVar10 = uVar9 & uVar7;
      }
      else {
        uVar10 = uVar9;
        if (uVar5 <= uVar9) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar9 / uVar5;
          }
          uVar10 = uVar9 - uVar10 * uVar5;
        }
      }
      if (uVar10 != uVar4) goto LAB_1072d5724;
LAB_1072d5734:
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar7 * uVar5;
      }
      if (uVar9 != uVar4) {
        *(long **)(lVar8 + uVar9 * 8) = plVar6;
        lVar3 = *param_4;
      }
    }
    else {
      uVar9 = plVar6[1];
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar10 * uVar5;
      }
      if (uVar9 != uVar4) goto LAB_1072d56f0;
LAB_1072d572c:
      if (lVar3 != 0) {
        uVar9 = *(ulong *)(lVar3 + 8);
        goto LAB_1072d5734;
      }
    }
    *plVar6 = lVar3;
    *param_4 = 0;
    *(long *)(unaff_x20 + 0xc0) = *(long *)(unaff_x20 + 0xc0) + -1;
    uStack_48 = 1;
    uStack_47 = 0;
    uStack_43 = 0;
    plStack_58 = param_4;
    FUN_1072d5860(&plStack_58);
  }
  *unaff_x19 = uVar11;
  uVar2 = 1;
LAB_1072d579c:
  *(undefined1 *)(unaff_x19 + 1) = uVar2;
  func_0x0001072d672c();
  return;
}



/* Entry: 1072d57c8; end: 1072d585f;  */

long FUN_1072d57c8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1072d5860; end: 1072d58a3;  */

long * FUN_1072d5860(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072aca78(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1072d58a4; end: 1072d58ab;  */

void FUN_1072d58a4(void)

{
  return;
}



/* Entry: 1072d58ac; end: 1072d58cf;  */

void FUN_1072d58ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_11099c1d0;
  return;
}



/* Entry: 1072d58d0; end: 1072d58f7;  */

void FUN_1072d58d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099c1d0;
  return;
}



/* Entry: 1072d58f8; end: 1072d5923;  */

void FUN_1072d58f8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072d67ec(param_2,param_1,&PTR_DAT_11099c230);
  func_0x0001072d676c();
  return;
}



/* Entry: 1072d5924; end: 1072d592f;  */

undefined ** FUN_1072d5924(void)

{
  return &PTR_DAT_11099c230;
}



/* Entry: 1072d5930; end: 1072d594b;  */

long * FUN_1072d5930(long *param_1)

{
  long *unaff_x19;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072d593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  func_0x0001072d5974(param_1 + 3);
  func_0x00010725c0a0();
  if (param_1 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072d594c; end: 1072d5993;  */

undefined8 FUN_1072d594c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072d5974(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}


