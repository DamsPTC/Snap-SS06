/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4b72dc; end: 10b4b72e7;  */

long * FUN_10b4b72dc(long *param_1)

{
  long lVar1;
  
  func_0x00010b4b73d8();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b4b74d8();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000107c30208();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4b72e8; end: 10b4b737b;  */

long * FUN_10b4b72e8(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b4b74d8();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000107c30208();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4b737c; end: 10b4b7393;  */

void FUN_10b4b737c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b4b6c30(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4b7394; end: 10b4b73af;  */

void FUN_10b4b7394(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b4b6c30(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b73b0; end: 10b4b7553;  */

void FUN_10b4b73b0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x29;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_000001c8;
  long in_stack_000001d0;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4bbbc4(&stack0x00000178,in_stack_00000178,in_stack_00000180);
  }
  func_0x00010b206ad0(param_1 + 0x48);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4bbbc4();
  }
  func_0x00010b206ad0(param_1 + 0x50);
  lVar2 = *(long *)(unaff_x29 + -0xa8);
  for (lVar1 = *(long *)(unaff_x29 + -0xb0); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    func_0x000107c27bb8(auStack_60,lVar1,lVar1 + 0x18);
    FUN_10b4bb95c(auStack_80,param_1 + 0x10,auStack_60);
    func_0x000107c27bbc(auStack_60);
  }
  func_0x00010b4bbb94();
  lVar1 = in_stack_000001c8;
  lVar2 = in_stack_000001d0;
  while (lVar1 != lVar2) {
    func_0x00010b4bbba8();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
  }
  return;
}



/* Entry: 10b4b7554; end: 10b4b75db;  */

ulong FUN_10b4b7554(void)

{
  long lVar1;
  long unaff_x19;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_40 [16];
  
  func_0x000107c3986c();
  func_0x000107c39874();
  lVar1 = unaff_x19 + 0x78;
  FUN_10b4b75f0(lVar1,auStack_40);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar1 + 0x20) & 0xffffff00;
    uVar4 = *(uint *)(lVar1 + 0x20) & 0xff;
    uVar2 = 0x100000000;
  }
  func_0x000107c39870();
  return uVar2 | (uVar3 | uVar4);
}



/* Entry: 10b4b75dc; end: 10b4b75ef;  */

long FUN_10b4b75dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  
  plVar2 = (long *)&UNK_10f773b3d;
  func_0x000104bd47e8();
  plVar6 = (long *)plVar2[1];
  if ((plVar6 != (long *)0x0) && (plVar3 = plVar2 + 3, *plVar3 != 0)) {
    func_0x000107c30214();
    puVar7 = (undefined *)((long)plVar6 + -1);
    if (((ulong)plVar6 & (ulong)puVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & (ulong)puVar7);
    }
    else {
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*plVar2 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar3 != plVar4) break;
        plVar4 = plVar2 + 4;
        func_0x00010728905c(plVar4,plVar5 + 2,param_2);
        if ((int)plVar4 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & (ulong)puVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (ulong)puVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b4b75f0; end: 10b4b76cf;  */

long FUN_10b4b75f0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c30214();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar2 != plVar3) break;
        plVar3 = param_1 + 4;
        func_0x00010728905c(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 10b4b76d0; end: 10b4b770b;  */

void FUN_10b4b76d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107c3023c(lVar2,0x40,0,0x5f);
  }
  return;
}



/* Entry: 10b4b770c; end: 10b4b7733;  */

long FUN_10b4b770c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    func_0x000105979abc();
    return lVar1;
  }
  return 0;
}



/* Entry: 10b4b7734; end: 10b4b77fb;  */

long FUN_10b4b7734(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = (long)*(int *)*param_2 * -0x395b586ca42e166b;
  lStack_28 = (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64;
  func_0x00010b4b77d4(&lStack_28,(int *)*param_2 + 10);
  func_0x00010b4b77d4(&lStack_28,*param_2 + 8);
  lVar1 = *(long *)(*param_2 + 0x38);
  FUN_10b4b77fc(&lStack_28,lVar1,lVar1 + *(long *)(*param_2 + 0x40) * 0x10);
  func_0x00010b4b783c(&lStack_28,param_2[1],param_2[2]);
  return lStack_28;
}



/* Entry: 10b4b77fc; end: 10b4b787b;  */

void FUN_10b4b77fc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010b4b77d4(param_1,param_2);
  }
  return;
}



/* Entry: 10b4b787c; end: 10b4b78db;  */

long FUN_10b4b787c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = (long)*(int *)*param_1 * -0x395b586ca42e166b;
  lStack_28 = (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64;
  func_0x00010b4b77d4(&lStack_28,(int *)*param_1 + 10);
  func_0x00010b4b77d4(&lStack_28,*param_1 + 8);
  lVar1 = *(long *)(*param_1 + 0x38);
  FUN_10b4b77fc(&lStack_28,lVar1,lVar1 + *(long *)(*param_1 + 0x40) * 0x10);
  func_0x00010b4b783c(&lStack_28,param_1[1],param_1[2]);
  return lStack_28;
}



/* Entry: 10b4b78dc; end: 10b4b7903;  */

void FUN_10b4b78dc(undefined8 param_1,undefined8 param_2)

{
  FUN_10b4b7904(param_2);
  func_0x00010b4b796c();
  return;
}



/* Entry: 10b4b7904; end: 10b4b79b3;  */

ulong FUN_10b4b7904(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pcVar2 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar3 = (ulong)(byte)param_1[0x17];
    pcVar2 = param_1;
  }
  pcVar1 = pcVar2 + uVar3;
  uVar3 = 0;
  for (; pcVar2 != pcVar1; pcVar2 = pcVar2 + 1) {
    uVar3 = (((long)*pcVar2 * -0x395b586ca42e166b ^
             (ulong)((long)*pcVar2 * -0x395b586ca42e166b) >> 0x2f) * -0x395b586ca42e166b ^ uVar3) *
            -0x395b586ca42e166b + 0xe6546b64;
  }
  return uVar3;
}



/* Entry: 10b4b79b4; end: 10b4b7a03;  */

long * FUN_10b4b79b4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3) / 0x18) <= param_2) {
    FUN_10b4b7ff4();
    lVar3 = *param_1;
    if ((ulong)((param_1[1] - lVar3) / 0x18) <= param_2) {
      func_0x00010b4b8000();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10b4b800c();
        plVar2 = (long *)(uVar1 + 0x48);
      }
      else {
        plVar2 = param_1;
        FUN_10b4b8044();
      }
      param_1[1] = (long)plVar2;
      return plVar2 + -9;
    }
  }
  return (long *)(lVar3 + param_2 * 0x18);
}



/* Entry: 10b4b7a04; end: 10b4b7a7f;  */

long FUN_10b4b7a04(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b4b800c();
    lVar2 = uVar1 + 0x48;
  }
  else {
    lVar2 = param_1;
    FUN_10b4b8044();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x48;
}



/* Entry: 10b4b7a80; end: 10b4b7a9f;  */

long FUN_10b4b7a80(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  
  FUN_10b4b8250();
  if (param_1 != 0) {
    return param_1 + 0x18;
  }
  func_0x00010b4b8bd4();
  lVar1 = param_1 + 0xe0;
  uStack_38 = param_2;
  FUN_10b4b82ec(lVar1,&uStack_38);
  lVar3 = 0;
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0xe0);
    FUN_10b4b7ae0(plVar2,&uStack_38);
    lVar3 = *plVar2;
  }
  return lVar3;
}



/* Entry: 10b4b7aa0; end: 10b4b7adf;  */

void FUN_10b4b7aa0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0xe0;
  uStack_28 = param_2;
  FUN_10b4b82ec(lVar1,&uStack_28);
  if (lVar1 != 0) {
    FUN_10b4b7ae0(param_1 + 0xe0,&uStack_28);
  }
  return;
}



/* Entry: 10b4b7ae0; end: 10b4b7aff;  */

long * FUN_10b4b7ae0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_10b4b8308();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x18);
  }
  func_0x00010b4b8bd4();
  FUN_10b4b83a4(param_1 + 0xb8);
  plVar1 = (long *)(param_1 + 0xe0);
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10b4b6e78(plVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar4 = *(long *)(param_1 + 0xe8);
    for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
      *(undefined8 *)(*plVar1 + lVar3 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return plVar2;
}



/* Entry: 10b4b7b00; end: 10b4b7b63;  */

void FUN_10b4b7b00(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10b4b83a4(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10b4b6e78((long *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar2 = *(long *)(param_1 + 0xe8);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



/* Entry: 10b4b7b64; end: 10b4b7b87;  */

long FUN_10b4b7b64(long param_1)

{
  func_0x00010b4b8b98();
  FUN_10b4b844c();
  return param_1 + 0x18;
}



/* Entry: 10b4b7b88; end: 10b4b7bc3;  */

void FUN_10b4b7b88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000107c39888();
  uVar1 = *param_2;
  FUN_10b4b787c();
  uStack_28 = uVar1;
  FUN_10b4b7bc4(unaff_x20 + 0xe0,&uStack_28);
  func_0x000107c30200();
  return;
}



/* Entry: 10b4b7bc4; end: 10b4b7c77;  */

long FUN_10b4b7bc4(long param_1)

{
  func_0x00010b4b8b98();
  FUN_10b4b8758();
  return param_1 + 0x18;
}



/* Entry: 10b4b7c78; end: 10b4b7d6f;  */

ulong FUN_10b4b7c78(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long *unaff_x20;
  ulong uVar3;
  
  func_0x000107c39888();
  func_0x000107c39878(param_2,0x40);
  uVar3 = 0;
  while( true ) {
    if ((ulong)((unaff_x20[1] - *unaff_x20) / 0x48) <= uVar3) {
      plVar2 = unaff_x20 + 3;
      FUN_10b4b7554();
      uVar1 = (uint)plVar2;
      if ((ulong)plVar2 >> 0x20 == 0) {
        uVar1 = 0xffffffff;
      }
      return (ulong)uVar1;
    }
    func_0x00010b4b8bf8();
    if ((param_2 & 1) != 0) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}



/* Entry: 10b4b7d70; end: 10b4b7d83;  */

void FUN_10b4b7d70(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&UNK_10f773b44;
  func_0x000104bd47e8();
  func_0x000107c39888();
  lVar3 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x48) * 0x48;
  FUN_10b4b7eac(plVar1 + 2,*plVar1,plVar1[1],lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b4b7d84; end: 10b4b7e0b;  */

void FUN_10b4b7d84(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c39888();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48;
  FUN_10b4b7eac(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
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
  return;
}



/* Entry: 10b4b7e0c; end: 10b4b7e7b;  */

long * FUN_10b4b7e0c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b4b7e58();
  }
  lVar1 = param_4 + param_3 * 0x48;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x48;
  return param_1;
}



/* Entry: 10b4b7e7c; end: 10b4b7eab;  */

void FUN_10b4b7e7c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x48) {
    func_0x000107c30210(param_4,uVar1);
    param_4 = lStack_48 + 0x48;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    func_0x000107c27974(param_2);
  }
  FUN_10b4b7f44(&uStack_70);
  return;
}



/* Entry: 10b4b7eac; end: 10b4b7f43;  */

void FUN_10b4b7eac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x48) {
    func_0x000107c30210(param_4,lVar1);
    param_4 = lStack_38 + 0x48;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    func_0x000107c27974(param_2);
  }
  FUN_10b4b7f44(&uStack_60);
  return;
}



/* Entry: 10b4b7f44; end: 10b4b7fb3;  */

long FUN_10b4b7f44(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x000107c27974();
    }
  }
  return param_1;
}



/* Entry: 10b4b7fb4; end: 10b4b7fbb;  */

void FUN_10b4b7fb4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c39888(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x000107c27974();
  }
  return;
}



/* Entry: 10b4b7fbc; end: 10b4b7ff3;  */

void FUN_10b4b7fbc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c39888();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x000107c27974();
  }
  return;
}



/* Entry: 10b4b7ff4; end: 10b4b800b;  */

void FUN_10b4b7ff4(long param_1)

{
  long lVar1;
  
  func_0x00010b4b8a94();
  func_0x00010b4b8a94();
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b4b80f4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x48;
  return;
}



/* Entry: 10b4b800c; end: 10b4b8043;  */

void FUN_10b4b800c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b4b80f4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x48;
  return;
}



/* Entry: 10b4b8044; end: 10b4b80f3;  */

long FUN_10b4b8044(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  FUN_10b4b81c8(param_1,(param_1[1] - *param_1) / 0x48 + 1);
  FUN_10b4b7e0c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x48,param_1 + 2);
  FUN_10b4b80f4(lStack_58,param_2,param_3,param_4);
  lStack_58 = lStack_58 + 0x48;
  func_0x00010b4b8bc8();
  lVar2 = param_1[1];
  func_0x00010b4b8b08();
  return lVar2;
}



/* Entry: 10b4b80f4; end: 10b4b81c7;  */

undefined8 *
FUN_10b4b80f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_60,param_3);
  func_0x000107c2795c(&uStack_80,param_4);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  func_0x000107c278a8(&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return param_1;
}



/* Entry: 10b4b81c8; end: 10b4b824f;  */

ulong FUN_10b4b81c8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0x38e38e38e38e38e < param_2) {
    FUN_10b4b7d70();
    func_0x00010b4b8a94();
    FUN_10b4b8250();
    return (ulong)(param_1 != (long *)0x0);
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    uVar2 = 0x38e38e38e38e38e;
  }
  return uVar2;
}



/* Entry: 10b4b8250; end: 10b4b82eb;  */

long FUN_10b4b8250(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b4b82ec; end: 10b4b8307;  */

bool FUN_10b4b82ec(long param_1)

{
  FUN_10b4b8308();
  return param_1 != 0;
}



/* Entry: 10b4b8308; end: 10b4b83a3;  */

long FUN_10b4b8308(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b4b83a4; end: 10b4b844b;  */

void FUN_10b4b83a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010b4b6ea8(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b4b844c; end: 10b4b86fb;  */

undefined1  [16] FUN_10b4b844c(float param_1,float param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  long *unaff_x21;
  long *plVar13;
  long *unaff_x23;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_4;
  plVar14 = (long *)param_3[1];
  plVar9 = param_3;
  if (plVar14 != (long *)0x0) {
    func_0x00010b4b8c18();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar13);
    }
    else {
      unaff_x21 = plVar13;
      if (plVar14 <= plVar13) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar13 / (ulong)plVar14;
        }
        unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
      }
    }
    puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar7 = extraout_x8;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar12;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b4b84f4;
          plVar8 = (long *)unaff_x20[1];
          puVar12 = unaff_x20;
          if (plVar8 != plVar13) break;
          if ((long *)unaff_x20[2] == plVar13) {
            uVar6 = 0;
            goto LAB_10b4b86d8;
          }
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar14 <= plVar8) {
          func_0x00010b4b8c24();
          uVar7 = extraout_x8_00;
          plVar8 = extraout_x9;
        }
      } while (plVar8 == unaff_x21);
    }
  }
LAB_10b4b84f4:
  func_0x00010b4b8b58();
  func_0x00010b4b8a64();
  if ((plVar14 != (long *)0x0) && (param_1 <= param_2 * (float)plVar14)) goto LAB_10b4b8680;
  func_0x00010b4b8bb0();
  bVar3 = plVar14 == (long *)0x3;
  func_0x00010b4b8b10();
  if (bVar3) {
    unaff_x21 = (long *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = (long *)param_3[1];
    plVar9 = unaff_x21;
  }
  bVar3 = plVar14 <= unaff_x21;
  uVar4 = unaff_x21 == plVar14;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x00010b4b8b2c();
      if ((bVar3) && (((ulong)plVar14 & (long)plVar14 - 1U) == 0)) {
        func_0x00010b4b8ac8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar9) {
        unaff_x21 = plVar9;
      }
      uVar4 = unaff_x21 == plVar14;
      if (unaff_x21 < plVar14) {
        if (unaff_x21 != (long *)0x0) goto LAB_10b4b854c;
        FUN_10b4b86fc(param_3,0);
        param_3[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_10b4b854c:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4b86ec);
      (*pcVar2)();
    }
    lVar5 = (long)unaff_x21 << 3;
    __Znwm(lVar5);
    FUN_10b4b86fc(param_3,lVar5);
    param_3[1] = (long)unaff_x21;
    lVar5 = *param_3;
    for (plVar9 = (long *)0x0; uVar4 = unaff_x21 == plVar9, !(bool)uVar4;
        plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0;
    }
    plVar14 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x00010b4b8c04();
      func_0x00010b4b8c30();
      lVar5 = extraout_x8_02;
      uVar7 = extraout_x9_00;
      plVar9 = extraout_x10;
      plVar8 = extraout_x11;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)unaff_x21 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (unaff_x21 <= plVar11) {
          uVar1 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)unaff_x21;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)unaff_x21);
        }
        uVar4 = plVar11 == plVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar10;
            plVar8 = plVar11;
          }
          else {
            func_0x00010b4b8ae8();
            lVar5 = extraout_x8_03;
            uVar7 = extraout_x9_01;
            plVar9 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x00010b4b8c18();
  if ((bool)uVar4) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar13);
  }
  else {
    unaff_x21 = plVar13;
    if (plVar14 <= plVar13) {
      uVar7 = 0;
      if (plVar14 != (long *)0x0) {
        uVar7 = (ulong)plVar13 / (ulong)plVar14;
      }
      unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
    }
  }
LAB_10b4b8680:
  puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x00010b4b8b80();
    if (extraout_x9_02 != 0) {
      plVar9 = *(long **)(extraout_x9_02 + 8);
      lVar5 = extraout_x8_05;
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar9) {
        func_0x00010b4b8c24();
        lVar5 = extraout_x8_06;
        plVar9 = extraout_x9_03;
      }
      *(undefined8 **)(lVar5 + (long)plVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar12;
    *puVar12 = unaff_x20;
  }
  func_0x00010b4b8b68();
  FUN_10b4b8714();
  uVar6 = 1;
LAB_10b4b86d8:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = unaff_x20;
  return auVar15;
}



/* Entry: 10b4b86fc; end: 10b4b8713;  */

void FUN_10b4b86fc(long *param_1,long param_2)

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



/* Entry: 10b4b8714; end: 10b4b8757;  */

long * FUN_10b4b8714(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c301fc(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b4b8758; end: 10b4b8a07;  */

undefined1  [16] FUN_10b4b8758(float param_1,float param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  long *unaff_x21;
  long *plVar13;
  long *unaff_x23;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_4;
  plVar14 = (long *)param_3[1];
  plVar9 = param_3;
  if (plVar14 != (long *)0x0) {
    func_0x00010b4b8c18();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar13);
    }
    else {
      unaff_x21 = plVar13;
      if (plVar14 <= plVar13) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar13 / (ulong)plVar14;
        }
        unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
      }
    }
    puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar7 = extraout_x8;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar12;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b4b8800;
          plVar8 = (long *)unaff_x20[1];
          puVar12 = unaff_x20;
          if (plVar8 != plVar13) break;
          if ((long *)unaff_x20[2] == plVar13) {
            uVar6 = 0;
            goto LAB_10b4b89e4;
          }
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar14 <= plVar8) {
          func_0x00010b4b8c24();
          uVar7 = extraout_x8_00;
          plVar8 = extraout_x9;
        }
      } while (plVar8 == unaff_x21);
    }
  }
LAB_10b4b8800:
  func_0x00010b4b8b58();
  func_0x00010b4b8a64();
  if ((plVar14 != (long *)0x0) && (param_1 <= param_2 * (float)plVar14)) goto LAB_10b4b898c;
  func_0x00010b4b8bb0();
  bVar3 = plVar14 == (long *)0x3;
  func_0x00010b4b8b10();
  if (bVar3) {
    unaff_x21 = (long *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = (long *)param_3[1];
    plVar9 = unaff_x21;
  }
  bVar3 = plVar14 <= unaff_x21;
  uVar4 = unaff_x21 == plVar14;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x00010b4b8b2c();
      if ((bVar3) && (((ulong)plVar14 & (long)plVar14 - 1U) == 0)) {
        func_0x00010b4b8ac8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar9) {
        unaff_x21 = plVar9;
      }
      uVar4 = unaff_x21 == plVar14;
      if (unaff_x21 < plVar14) {
        if (unaff_x21 != (long *)0x0) goto LAB_10b4b8858;
        FUN_10b4b8a08(param_3,0);
        param_3[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_10b4b8858:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4b89f8);
      (*pcVar2)();
    }
    lVar5 = (long)unaff_x21 << 3;
    __Znwm(lVar5);
    FUN_10b4b8a08(param_3,lVar5);
    param_3[1] = (long)unaff_x21;
    lVar5 = *param_3;
    for (plVar9 = (long *)0x0; uVar4 = unaff_x21 == plVar9, !(bool)uVar4;
        plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0;
    }
    plVar14 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x00010b4b8c04();
      func_0x00010b4b8c30();
      lVar5 = extraout_x8_02;
      uVar7 = extraout_x9_00;
      plVar9 = extraout_x10;
      plVar8 = extraout_x11;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)unaff_x21 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (unaff_x21 <= plVar11) {
          uVar1 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)unaff_x21;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)unaff_x21);
        }
        uVar4 = plVar11 == plVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar10;
            plVar8 = plVar11;
          }
          else {
            func_0x00010b4b8ae8();
            lVar5 = extraout_x8_03;
            uVar7 = extraout_x9_01;
            plVar9 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x00010b4b8c18();
  if ((bool)uVar4) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar13);
  }
  else {
    unaff_x21 = plVar13;
    if (plVar14 <= plVar13) {
      uVar7 = 0;
      if (plVar14 != (long *)0x0) {
        uVar7 = (ulong)plVar13 / (ulong)plVar14;
      }
      unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
    }
  }
LAB_10b4b898c:
  puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x00010b4b8b80();
    if (extraout_x9_02 != 0) {
      plVar9 = *(long **)(extraout_x9_02 + 8);
      lVar5 = extraout_x8_05;
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar9) {
        func_0x00010b4b8c24();
        lVar5 = extraout_x8_06;
        plVar9 = extraout_x9_03;
      }
      *(undefined8 **)(lVar5 + (long)plVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar12;
    *puVar12 = unaff_x20;
  }
  func_0x00010b4b8b68();
  FUN_10b4b8a20();
  uVar6 = 1;
LAB_10b4b89e4:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = unaff_x20;
  return auVar15;
}



/* Entry: 10b4b8a08; end: 10b4b8a1f;  */

void FUN_10b4b8a08(long *param_1,long param_2)

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



/* Entry: 10b4b8a20; end: 10b4b8a63;  */

long * FUN_10b4b8a20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c30208(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b4b8a64; end: 10b4b8c43;  */

float FUN_10b4b8a64(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  
  *param_1 = 0;
  param_1[1] = unaff_x22;
  param_1[2] = *unaff_x25;
  param_1[3] = 0;
  return (float)(*(long *)(unaff_x19 + 0x18) + 1);
}



/* Entry: 10b4b8c44; end: 10b4b8c87;  */

void FUN_10b4b8c44(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    func_0x00010b4b9c28(lVar2,0x10);
    func_0x00010b4b9c28(lVar2 + 0x18,0x40);
  }
  return;
}



/* Entry: 10b4b8c88; end: 10b4b8cbf;  */

void FUN_10b4b8c88(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == param_1[1]) {
    return;
  }
  uVar10 = LZCOUNT((param_1[1] - *param_1) / 0x30) << 1 ^ 0x7e;
  bVar17 = true;
  func_0x00010b4b9c34();
  do {
    puVar15 = unaff_x19 + -6;
    puVar8 = unaff_x20;
LAB_10b4b8dc8:
    unaff_x20 = puVar8;
    uVar11 = (long)unaff_x19 - (long)unaff_x20;
    uVar21 = (long)uVar11 / 0x30;
    cVar3 = SBORROW8(uVar21,5);
    cVar4 = (long)(uVar21 - 5) < 0;
    switch(uVar21) {
    case 0:
    case 1:
      goto LAB_10b4b95a4;
    case 2:
      func_0x000107c27bd4(puVar15,unaff_x20);
      func_0x00010b4b9a9c();
      if (cVar4 != cVar3) {
        return;
      }
      func_0x00010b4b9a88();
      uVar14 = unaff_x19[-5];
      uVar12 = *puVar15;
      unaff_x20[2] = unaff_x19[-4];
      unaff_x20[1] = uVar14;
      *unaff_x20 = uVar12;
      unaff_x19[-4] = uStack_90;
      unaff_x19[-5] = uStack_98;
      *puVar15 = uStack_a0;
      func_0x00010b4b9c54();
      uVar12 = unaff_x19[-1];
      uVar14 = unaff_x19[-3];
      unaff_x20[4] = unaff_x19[-2];
      unaff_x20[3] = uVar14;
      unaff_x20[5] = uVar12;
      unaff_x19[-1] = extraout_x8_02;
      unaff_x19[-2] = uStack_98;
      unaff_x19[-3] = uStack_a0;
      return;
    case 3:
      func_0x00010b4b9c20(unaff_x20,unaff_x20 + 6);
      return;
    case 4:
      FUN_10b4b9700(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,puVar15);
      return;
    case 5:
      FUN_10b4b9778(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,unaff_x20 + 0x12,puVar15);
      goto LAB_10b4b95a4;
    }
    if ((long)uVar11 < 0x480) {
      if (bVar17 == false) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 6;
          cVar3 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
          uVar5 = unaff_x20 == unaff_x19;
          if ((bool)uVar5) break;
          func_0x00010b4b9b1c(unaff_x20);
          func_0x00010b4b9a9c();
          if (cVar4 == cVar3) {
            uStack_98 = puVar8[7];
            uStack_a0 = *unaff_x20;
            uStack_90 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_80 = puVar8[10];
            uStack_88 = puVar8[9];
            uStack_78 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar15 = puVar8;
              func_0x00010b4b9c0c(puVar15 + 6);
              func_0x00010b4b9b1c(&uStack_a0);
              func_0x00010b4b9aec();
              puVar8 = puVar15 + -6;
            } while (!(bool)uVar5 && cVar4 == cVar3);
            func_0x0001075527e4(puVar15,&uStack_a0);
            func_0x00010b4b9b6c();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar16 = 0;
      puVar8 = unaff_x20;
      break;
    }
    if (uVar10 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar11 = uVar21 - 2 >> 1;
      uVar10 = uVar11;
      goto LAB_10b4b92a0;
    }
    puVar8 = unaff_x20 + (uVar21 >> 1) * 6;
    cVar3 = SBORROW8(uVar11,0x1801);
    cVar4 = (long)(uVar11 - 0x1801) < 0;
    uVar5 = uVar11 == 0x1801;
    if (uVar11 < 0x1801) {
      func_0x00010b4b9c20(puVar8,unaff_x20);
    }
    else {
      func_0x00010b4b9c20(unaff_x20,puVar8);
      FUN_10b4b95c4(unaff_x20 + 6,puVar8 + -6,unaff_x19 + -0xc);
      FUN_10b4b95c4(unaff_x20 + 0xc,puVar8 + 6,unaff_x19 + -0x12);
      FUN_10b4b95c4(puVar8 + -6,puVar8,puVar8 + 6);
      func_0x00010b4b9a88();
      uVar12 = puVar8[2];
      uVar14 = *puVar8;
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar14;
      unaff_x20[2] = uVar12;
      puVar8[2] = uStack_90;
      puVar8[1] = uStack_98;
      *puVar8 = uStack_a0;
      uVar12 = uStack_a0;
      uVar14 = uStack_98;
      func_0x00010b4b9c54();
      uVar13 = puVar8[5];
      uVar22 = puVar8[3];
      unaff_x20[4] = puVar8[4];
      unaff_x20[3] = uVar22;
      unaff_x20[5] = uVar13;
      puVar8[5] = extraout_x8;
      puVar8[4] = uVar14;
      puVar8[3] = uVar12;
    }
    uVar10 = uVar10 - 1;
    if (!bVar17) {
      func_0x000107c27bd4(unaff_x20 + -6,unaff_x20);
      func_0x00010b4b9aec();
      if ((bool)uVar5 || cVar4 != cVar3) {
        func_0x00010b4b9a88();
        func_0x00010b4b9bfc();
        func_0x00010b4b9b50(unaff_x20[5]);
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[3] = 0;
        puVar7 = &uStack_a0;
        func_0x00010b4b9b1c();
        func_0x00010b4b9aec();
        puVar8 = unaff_x20;
        if ((bool)uVar5 || cVar4 != cVar3) {
          do {
            puVar8 = puVar8 + 6;
            if (unaff_x19 <= puVar8) break;
            func_0x00010b4b9b60();
          } while ((char)puVar7 < '\x01');
        }
        else {
          do {
            puVar8 = puVar8 + 6;
            func_0x00010b4b9b60();
            func_0x00010b4b9aec();
          } while ((bool)uVar5 || cVar4 != cVar3);
        }
        cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
        cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
        uVar5 = puVar8 == unaff_x19;
        if (puVar8 < unaff_x19) {
          do {
            func_0x00010b4b9bd4();
            func_0x00010b4b9aec();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        while( true ) {
          cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
          cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
          uVar5 = puVar8 == unaff_x19;
          if (unaff_x19 <= puVar8) break;
          func_0x00010b4b9c90();
          uVar14 = unaff_x19[1];
          uVar12 = *unaff_x19;
          func_0x00010b4b9c68(unaff_x19[2]);
          unaff_x19[2] = extraout_x8_01;
          unaff_x19[1] = uVar14;
          *unaff_x19 = uVar12;
          uVar12 = puVar8[5];
          uVar22 = puVar8[4];
          uVar13 = puVar8[3];
          uVar14 = unaff_x19[5];
          uVar23 = unaff_x19[3];
          puVar8[4] = unaff_x19[4];
          puVar8[3] = uVar23;
          puVar8[5] = uVar14;
          unaff_x19[4] = uVar22;
          unaff_x19[3] = uVar13;
          unaff_x19[5] = uVar12;
          do {
            puVar8 = puVar8 + 6;
            func_0x00010b4b9b60();
            func_0x00010b4b9a9c();
          } while (cVar4 != cVar3);
          do {
            func_0x00010b4b9bd4();
            func_0x00010b4b9aec();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        puVar7 = puVar8 + -6;
        if (unaff_x20 != puVar7) {
          func_0x0001075527e4(unaff_x20,puVar7);
        }
        func_0x0001075527e4(puVar7,&uStack_a0);
        func_0x00010b4b9b6c();
        bVar17 = false;
        goto LAB_10b4b8dc8;
      }
    }
    func_0x00010b4b9a88();
    func_0x00010b4b9bfc();
    func_0x00010b4b9b50(unaff_x20[5]);
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    lVar16 = 0;
    do {
      lVar20 = lVar16;
      lVar16 = lVar20 + 0x30;
      func_0x000107c27bd4(lVar16 + (long)unaff_x20,&uStack_a0);
      func_0x00010b4b9aec();
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar7 = (undefined8 *)((long)unaff_x20 + lVar16);
    cVar3 = SBORROW8(lVar16,0x30);
    cVar4 = lVar20 < 0;
    puVar8 = puVar7;
    puVar9 = unaff_x19;
    if (lVar16 == 0x30) {
      do {
        cVar3 = SBORROW8((long)puVar7,(long)unaff_x19);
        cVar4 = (long)puVar7 - (long)unaff_x19 < 0;
        uVar5 = puVar7 == unaff_x19;
        if (unaff_x19 <= puVar7) break;
        func_0x00010b4b9bec();
        func_0x00010b4b9aec();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    else {
      do {
        func_0x00010b4b9bec();
        func_0x00010b4b9a9c();
      } while (cVar4 != cVar3);
    }
    while( true ) {
      cVar3 = SBORROW8((long)puVar8,(long)puVar9);
      cVar4 = (long)puVar8 - (long)puVar9 < 0;
      uVar5 = puVar8 == puVar9;
      if (puVar9 <= puVar8) break;
      func_0x00010b4b9c90();
      uVar14 = puVar9[1];
      uVar12 = *puVar9;
      func_0x00010b4b9c68(puVar9[2]);
      puVar9[2] = extraout_x8_00;
      puVar9[1] = uVar14;
      *puVar9 = uVar12;
      uVar12 = puVar8[5];
      uVar22 = puVar8[4];
      uVar13 = puVar8[3];
      uVar14 = puVar9[5];
      uVar23 = puVar9[3];
      puVar8[4] = puVar9[4];
      puVar8[3] = uVar23;
      puVar8[5] = uVar14;
      puVar9[4] = uVar22;
      puVar9[3] = uVar13;
      puVar9[5] = uVar12;
      do {
        puVar8 = puVar8 + 6;
        func_0x000107c27bd4(puVar8,&uStack_a0);
        func_0x00010b4b9aec();
      } while (!(bool)uVar5 && cVar4 == cVar3);
      do {
        puVar9 = puVar9 + -6;
        func_0x000107c27bd4(puVar9,&uStack_a0);
        func_0x00010b4b9aec();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    puVar9 = puVar8 + -6;
    if (unaff_x20 != puVar9) {
      func_0x0001075527e4(unaff_x20,puVar9);
    }
    func_0x0001075527e4(puVar9,&uStack_a0);
    func_0x00010b4b9b6c();
    if (puVar7 < unaff_x19) goto LAB_10b4b8fe4;
    puVar7 = unaff_x20;
    FUN_10b4b984c(unaff_x20,puVar9);
    puVar6 = puVar8;
    FUN_10b4b984c(puVar8,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00010b4b8fe0;
    unaff_x19 = puVar9;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b4b91e8:
  puVar15 = puVar8 + 6;
  cVar3 = SBORROW8((long)puVar15,(long)unaff_x19);
  cVar4 = (long)puVar15 - (long)unaff_x19 < 0;
  uVar5 = puVar15 == unaff_x19;
  if ((bool)uVar5) {
    return;
  }
  func_0x00010b4b9be4(puVar15);
  func_0x00010b4b9a9c();
  if (cVar4 == cVar3) {
    uStack_98 = puVar8[7];
    uStack_a0 = *puVar15;
    uStack_90 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar15 = 0;
    uStack_80 = puVar8[10];
    uStack_88 = puVar8[9];
    uStack_78 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar20 = lVar16;
    do {
      lVar18 = lVar20;
      func_0x0001075527e4((long)unaff_x20 + lVar18 + 0x30);
      puVar8 = unaff_x20;
      if (lVar18 == 0) goto LAB_10b4b9270;
      func_0x000107c27bd4(&uStack_a0,lVar18 + -0x30 + (long)unaff_x20);
      func_0x00010b4b9aec();
      lVar20 = lVar18 + -0x30;
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar18);
LAB_10b4b9270:
    func_0x0001075527e4(puVar8,&uStack_a0);
    func_0x00010b4b9b6c();
  }
  lVar16 = lVar16 + 0x30;
  puVar8 = puVar15;
  goto LAB_10b4b91e8;
LAB_10b4b92a0:
  do {
    if ((long)uVar10 <= (long)uVar11) {
      uVar2 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar15 = unaff_x20 + uVar2 * 6;
      uVar1 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar1,uVar21);
      cVar4 = (long)(uVar1 - uVar21) < 0;
      uVar5 = uVar1 == uVar21;
      puVar8 = puVar15;
      uVar19 = uVar2;
      if ((long)uVar1 < (long)uVar21) {
        func_0x00010b4b9be4(puVar15);
        func_0x00010b4b9aec();
        puVar8 = puVar15 + 6;
        uVar19 = uVar1;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar8 = puVar15;
          uVar19 = uVar2;
        }
      }
      puVar15 = unaff_x20 + uVar10 * 6;
      func_0x00010b4b9b80();
      func_0x00010b4b9aec();
      if ((bool)uVar5 || cVar4 != cVar3) {
        uStack_98 = puVar15[1];
        uStack_a0 = *puVar15;
        uStack_90 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        func_0x00010b4b9b50(puVar15[5],puVar15[3]);
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[3] = 0;
        do {
          puVar7 = puVar8;
          func_0x00010b4b9c0c(puVar15);
          if ((long)uVar11 < (long)uVar19) break;
          uVar2 = uVar19 << 1 | 1;
          puVar15 = unaff_x20 + uVar2 * 6;
          uVar1 = uVar19 * 2 + 2;
          cVar3 = SBORROW8(uVar1,uVar21);
          cVar4 = (long)(uVar1 - uVar21) < 0;
          uVar5 = uVar1 == uVar21;
          puVar8 = puVar15;
          uVar19 = uVar2;
          if ((long)uVar1 < (long)uVar21) {
            func_0x00010b4b9b80();
            func_0x00010b4b9aec();
            puVar8 = puVar15 + 6;
            uVar19 = uVar1;
            if ((bool)uVar5 || cVar4 != cVar3) {
              puVar8 = puVar15;
              uVar19 = uVar2;
            }
          }
          puVar9 = puVar8;
          func_0x000107c27bd4(puVar8,&uStack_a0);
          puVar15 = puVar7;
        } while ((char)puVar9 < '\x01');
        func_0x0001075527e4(puVar7,&uStack_a0);
        func_0x00010b4b9b6c();
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar21 < 2) {
LAB_10b4b95a4:
      return;
    }
    uVar14 = unaff_x20[1];
    uVar12 = *unaff_x20;
    uStack_100 = unaff_x20[2];
    uStack_110 = uVar12;
    uStack_108 = uVar14;
    func_0x00010b4b9bfc(0);
    uStack_e8 = unaff_x20[5];
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    uVar10 = extraout_x8_03;
    puVar8 = unaff_x20;
    uStack_f8 = uVar12;
    uStack_f0 = uVar14;
    do {
      uVar1 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar11,uVar21);
      cVar4 = (long)(uVar11 - uVar21) < 0;
      uVar5 = uVar11 == uVar21;
      puVar15 = puVar8 + uVar10 * 6 + 6;
      uVar2 = uVar1;
      if ((long)uVar11 < (long)uVar21) {
        func_0x00010b4b9b80();
        func_0x00010b4b9aec();
        puVar15 = puVar8 + uVar10 * 6 + 0xc;
        uVar2 = uVar11;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar15 = puVar8 + uVar10 * 6 + 6;
          uVar2 = uVar1;
        }
      }
      uVar10 = uVar2;
      func_0x00010b4b9c0c(puVar8);
      puVar8 = puVar15;
    } while ((long)uVar10 <= (long)(extraout_x9 >> 1));
    unaff_x19 = unaff_x19 + -6;
    if (puVar15 == unaff_x19) {
      func_0x0001075527e4(puVar15,&uStack_110);
    }
    else {
      func_0x0001075527e4(puVar15,unaff_x19);
      func_0x0001075527e4(unaff_x19,&uStack_110);
      uVar10 = (long)puVar15 + (0x30 - (long)unaff_x20);
      cVar3 = SBORROW8(uVar10,0x31);
      cVar4 = (long)puVar15 + (-1 - (long)unaff_x20) < 0;
      if (0x30 < (long)uVar10) {
        uVar10 = uVar10 / 0x30 - 2 >> 1;
        func_0x00010b4b9b1c(unaff_x20 + uVar10 * 6);
        func_0x00010b4b9a9c();
        if (cVar4 == cVar3) {
          uStack_98 = puVar15[1];
          uStack_a0 = *puVar15;
          uStack_90 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
          func_0x00010b4b9b50(puVar15[5],puVar15[3]);
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[3] = 0;
          puVar8 = unaff_x20 + uVar10 * 6;
          do {
            puVar7 = puVar8;
            func_0x0001075527e4(puVar15,puVar7);
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar8 = unaff_x20 + uVar10 * 6;
            puVar9 = puVar8;
            func_0x000107c27bd4(puVar8,&uStack_a0);
            puVar15 = puVar7;
          } while ('\0' < (char)puVar9);
          func_0x0001075527e4(puVar7,&uStack_a0);
          func_0x00010b4b9b6c();
        }
      }
    }
    func_0x000107c27bbc(&uStack_110);
    uVar21 = uVar21 - 1;
  } while( true );
code_r0x00010b4b8fe0:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10b4b8fe4:
    FUN_10b4b8d84(unaff_x20,puVar9,uVar10,bVar17);
    bVar17 = false;
  }
  goto LAB_10b4b8dc8;
}



/* Entry: 10b4b8cc0; end: 10b4b8d7b;  */

long FUN_10b4b8cc0(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_28;
  
  uVar2 = (long)(int)param_2[6] * -0x395b586ca42e166b;
  uVar3 = (ulong)*(uint *)((long)param_2 + 0x2c) * -0x395b586ca42e166b;
  lStack_28 = ((((ulong)*(uint *)(param_2 + 5) * -0x395b586ca42e166b ^
                (ulong)*(uint *)(param_2 + 5) * -0x395b586ca42e166b >> 0x2f) * -0x395b586ca42e166b ^
               (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b +
               0xe6546b64 ^ (uVar3 ^ uVar3 >> 0x2f) * -0x395b586ca42e166b) * -0x395b586ca42e166b +
              0xe6546b64;
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_10b4b78dc(&lStack_28,lVar4);
    FUN_10b4b78dc(&lStack_28,lVar4 + 0x18);
  }
  return lStack_28;
}



/* Entry: 10b4b8d7c; end: 10b4b8d83;  */

long FUN_10b4b8d7c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_28;
  
  uVar2 = (long)(int)param_1[6] * -0x395b586ca42e166b;
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x2c) * -0x395b586ca42e166b;
  lStack_28 = ((((ulong)*(uint *)(param_1 + 5) * -0x395b586ca42e166b ^
                (ulong)*(uint *)(param_1 + 5) * -0x395b586ca42e166b >> 0x2f) * -0x395b586ca42e166b ^
               (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b +
               0xe6546b64 ^ (uVar3 ^ uVar3 >> 0x2f) * -0x395b586ca42e166b) * -0x395b586ca42e166b +
              0xe6546b64;
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_10b4b78dc(&lStack_28,lVar4);
    FUN_10b4b78dc(&lStack_28,lVar4 + 0x18);
  }
  return lStack_28;
}



/* Entry: 10b4b8d84; end: 10b4b95c3;  */

void FUN_10b4b8d84(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x00010b4b9c34();
  do {
    puVar14 = unaff_x19 + -6;
    puVar8 = unaff_x20;
LAB_10b4b8dc8:
    unaff_x20 = puVar8;
    uVar10 = (long)unaff_x19 - (long)unaff_x20;
    uVar20 = (long)uVar10 / 0x30;
    cVar3 = SBORROW8(uVar20,5);
    cVar4 = (long)(uVar20 - 5) < 0;
    switch(uVar20) {
    case 0:
    case 1:
      goto LAB_10b4b95a4;
    case 2:
      func_0x000107c27bd4(puVar14,unaff_x20);
      func_0x00010b4b9a9c();
      if (cVar4 != cVar3) {
        return;
      }
      func_0x00010b4b9a88();
      uVar13 = unaff_x19[-5];
      uVar11 = *puVar14;
      unaff_x20[2] = unaff_x19[-4];
      unaff_x20[1] = uVar13;
      *unaff_x20 = uVar11;
      unaff_x19[-4] = uStack_90;
      unaff_x19[-5] = uStack_98;
      *puVar14 = uStack_a0;
      func_0x00010b4b9c54();
      uVar11 = unaff_x19[-1];
      uVar13 = unaff_x19[-3];
      unaff_x20[4] = unaff_x19[-2];
      unaff_x20[3] = uVar13;
      unaff_x20[5] = uVar11;
      unaff_x19[-1] = extraout_x8_02;
      unaff_x19[-2] = uStack_98;
      unaff_x19[-3] = uStack_a0;
      return;
    case 3:
      func_0x00010b4b9c20(unaff_x20,unaff_x20 + 6);
      return;
    case 4:
      FUN_10b4b9700(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,puVar14);
      return;
    case 5:
      FUN_10b4b9778(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,unaff_x20 + 0x12,puVar14);
      goto LAB_10b4b95a4;
    }
    if ((long)uVar10 < 0x480) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 6;
          cVar3 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
          uVar5 = unaff_x20 == unaff_x19;
          if ((bool)uVar5) break;
          func_0x00010b4b9b1c(unaff_x20);
          func_0x00010b4b9a9c();
          if (cVar4 == cVar3) {
            uStack_98 = puVar8[7];
            uStack_a0 = *unaff_x20;
            uStack_90 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_80 = puVar8[10];
            uStack_88 = puVar8[9];
            uStack_78 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar14 = puVar8;
              func_0x00010b4b9c0c(puVar14 + 6);
              func_0x00010b4b9b1c(&uStack_a0);
              func_0x00010b4b9aec();
              puVar8 = puVar14 + -6;
            } while (!(bool)uVar5 && cVar4 == cVar3);
            func_0x0001075527e4(puVar14,&uStack_a0);
            func_0x00010b4b9b6c();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar15 = 0;
      puVar8 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar20 - 2 >> 1;
      uVar10 = uVar16;
      goto LAB_10b4b92a0;
    }
    puVar8 = unaff_x20 + (uVar20 >> 1) * 6;
    cVar3 = SBORROW8(uVar10,0x1801);
    cVar4 = (long)(uVar10 - 0x1801) < 0;
    uVar5 = uVar10 == 0x1801;
    if (uVar10 < 0x1801) {
      func_0x00010b4b9c20(puVar8,unaff_x20);
    }
    else {
      func_0x00010b4b9c20(unaff_x20,puVar8);
      FUN_10b4b95c4(unaff_x20 + 6,puVar8 + -6,unaff_x19 + -0xc);
      FUN_10b4b95c4(unaff_x20 + 0xc,puVar8 + 6,unaff_x19 + -0x12);
      FUN_10b4b95c4(puVar8 + -6,puVar8,puVar8 + 6);
      func_0x00010b4b9a88();
      uVar11 = puVar8[2];
      uVar13 = *puVar8;
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar13;
      unaff_x20[2] = uVar11;
      puVar8[2] = uStack_90;
      puVar8[1] = uStack_98;
      *puVar8 = uStack_a0;
      uVar11 = uStack_a0;
      uVar13 = uStack_98;
      func_0x00010b4b9c54();
      uVar12 = puVar8[5];
      uVar21 = puVar8[3];
      unaff_x20[4] = puVar8[4];
      unaff_x20[3] = uVar21;
      unaff_x20[5] = uVar12;
      puVar8[5] = extraout_x8;
      puVar8[4] = uVar13;
      puVar8[3] = uVar11;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      func_0x000107c27bd4(unaff_x20 + -6,unaff_x20);
      func_0x00010b4b9aec();
      if ((bool)uVar5 || cVar4 != cVar3) {
        func_0x00010b4b9a88();
        func_0x00010b4b9bfc();
        func_0x00010b4b9b50(unaff_x20[5]);
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[3] = 0;
        puVar7 = &uStack_a0;
        func_0x00010b4b9b1c();
        func_0x00010b4b9aec();
        puVar8 = unaff_x20;
        if ((bool)uVar5 || cVar4 != cVar3) {
          do {
            puVar8 = puVar8 + 6;
            if (unaff_x19 <= puVar8) break;
            func_0x00010b4b9b60();
          } while ((char)puVar7 < '\x01');
        }
        else {
          do {
            puVar8 = puVar8 + 6;
            func_0x00010b4b9b60();
            func_0x00010b4b9aec();
          } while ((bool)uVar5 || cVar4 != cVar3);
        }
        cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
        cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
        uVar5 = puVar8 == unaff_x19;
        if (puVar8 < unaff_x19) {
          do {
            func_0x00010b4b9bd4();
            func_0x00010b4b9aec();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        while( true ) {
          cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
          cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
          uVar5 = puVar8 == unaff_x19;
          if (unaff_x19 <= puVar8) break;
          func_0x00010b4b9c90();
          uVar13 = unaff_x19[1];
          uVar11 = *unaff_x19;
          func_0x00010b4b9c68(unaff_x19[2]);
          unaff_x19[2] = extraout_x8_01;
          unaff_x19[1] = uVar13;
          *unaff_x19 = uVar11;
          uVar11 = puVar8[5];
          uVar21 = puVar8[4];
          uVar12 = puVar8[3];
          uVar13 = unaff_x19[5];
          uVar22 = unaff_x19[3];
          puVar8[4] = unaff_x19[4];
          puVar8[3] = uVar22;
          puVar8[5] = uVar13;
          unaff_x19[4] = uVar21;
          unaff_x19[3] = uVar12;
          unaff_x19[5] = uVar11;
          do {
            puVar8 = puVar8 + 6;
            func_0x00010b4b9b60();
            func_0x00010b4b9a9c();
          } while (cVar4 != cVar3);
          do {
            func_0x00010b4b9bd4();
            func_0x00010b4b9aec();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        puVar7 = puVar8 + -6;
        if (unaff_x20 != puVar7) {
          func_0x0001075527e4(unaff_x20,puVar7);
        }
        func_0x0001075527e4(puVar7,&uStack_a0);
        func_0x00010b4b9b6c();
        param_4 = 0;
        goto LAB_10b4b8dc8;
      }
    }
    func_0x00010b4b9a88();
    func_0x00010b4b9bfc();
    func_0x00010b4b9b50(unaff_x20[5]);
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    lVar15 = 0;
    do {
      lVar19 = lVar15;
      lVar15 = lVar19 + 0x30;
      func_0x000107c27bd4(lVar15 + (long)unaff_x20,&uStack_a0);
      func_0x00010b4b9aec();
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar7 = (undefined8 *)((long)unaff_x20 + lVar15);
    cVar3 = SBORROW8(lVar15,0x30);
    cVar4 = lVar19 < 0;
    puVar8 = puVar7;
    puVar9 = unaff_x19;
    if (lVar15 == 0x30) {
      do {
        cVar3 = SBORROW8((long)puVar7,(long)unaff_x19);
        cVar4 = (long)puVar7 - (long)unaff_x19 < 0;
        uVar5 = puVar7 == unaff_x19;
        if (unaff_x19 <= puVar7) break;
        func_0x00010b4b9bec();
        func_0x00010b4b9aec();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    else {
      do {
        func_0x00010b4b9bec();
        func_0x00010b4b9a9c();
      } while (cVar4 != cVar3);
    }
    while( true ) {
      cVar3 = SBORROW8((long)puVar8,(long)puVar9);
      cVar4 = (long)puVar8 - (long)puVar9 < 0;
      uVar5 = puVar8 == puVar9;
      if (puVar9 <= puVar8) break;
      func_0x00010b4b9c90();
      uVar13 = puVar9[1];
      uVar11 = *puVar9;
      func_0x00010b4b9c68(puVar9[2]);
      puVar9[2] = extraout_x8_00;
      puVar9[1] = uVar13;
      *puVar9 = uVar11;
      uVar11 = puVar8[5];
      uVar21 = puVar8[4];
      uVar12 = puVar8[3];
      uVar13 = puVar9[5];
      uVar22 = puVar9[3];
      puVar8[4] = puVar9[4];
      puVar8[3] = uVar22;
      puVar8[5] = uVar13;
      puVar9[4] = uVar21;
      puVar9[3] = uVar12;
      puVar9[5] = uVar11;
      do {
        puVar8 = puVar8 + 6;
        func_0x000107c27bd4(puVar8,&uStack_a0);
        func_0x00010b4b9aec();
      } while (!(bool)uVar5 && cVar4 == cVar3);
      do {
        puVar9 = puVar9 + -6;
        func_0x000107c27bd4(puVar9,&uStack_a0);
        func_0x00010b4b9aec();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    puVar9 = puVar8 + -6;
    if (unaff_x20 != puVar9) {
      func_0x0001075527e4(unaff_x20,puVar9);
    }
    func_0x0001075527e4(puVar9,&uStack_a0);
    func_0x00010b4b9b6c();
    if (puVar7 < unaff_x19) goto LAB_10b4b8fe4;
    puVar7 = unaff_x20;
    FUN_10b4b984c(unaff_x20,puVar9);
    puVar6 = puVar8;
    FUN_10b4b984c(puVar8,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00010b4b8fe0;
    unaff_x19 = puVar9;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b4b91e8:
  puVar14 = puVar8 + 6;
  cVar3 = SBORROW8((long)puVar14,(long)unaff_x19);
  cVar4 = (long)puVar14 - (long)unaff_x19 < 0;
  uVar5 = puVar14 == unaff_x19;
  if ((bool)uVar5) {
    return;
  }
  func_0x00010b4b9be4(puVar14);
  func_0x00010b4b9a9c();
  if (cVar4 == cVar3) {
    uStack_98 = puVar8[7];
    uStack_a0 = *puVar14;
    uStack_90 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar14 = 0;
    uStack_80 = puVar8[10];
    uStack_88 = puVar8[9];
    uStack_78 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar19 = lVar15;
    do {
      lVar17 = lVar19;
      func_0x0001075527e4((long)unaff_x20 + lVar17 + 0x30);
      puVar8 = unaff_x20;
      if (lVar17 == 0) goto LAB_10b4b9270;
      func_0x000107c27bd4(&uStack_a0,lVar17 + -0x30 + (long)unaff_x20);
      func_0x00010b4b9aec();
      lVar19 = lVar17 + -0x30;
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar17);
LAB_10b4b9270:
    func_0x0001075527e4(puVar8,&uStack_a0);
    func_0x00010b4b9b6c();
  }
  lVar15 = lVar15 + 0x30;
  puVar8 = puVar14;
  goto LAB_10b4b91e8;
LAB_10b4b92a0:
  do {
    if ((long)uVar10 <= (long)uVar16) {
      uVar2 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar14 = unaff_x20 + uVar2 * 6;
      uVar1 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar1,uVar20);
      cVar4 = (long)(uVar1 - uVar20) < 0;
      uVar5 = uVar1 == uVar20;
      puVar8 = puVar14;
      uVar18 = uVar2;
      if ((long)uVar1 < (long)uVar20) {
        func_0x00010b4b9be4(puVar14);
        func_0x00010b4b9aec();
        puVar8 = puVar14 + 6;
        uVar18 = uVar1;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar8 = puVar14;
          uVar18 = uVar2;
        }
      }
      puVar14 = unaff_x20 + uVar10 * 6;
      func_0x00010b4b9b80();
      func_0x00010b4b9aec();
      if ((bool)uVar5 || cVar4 != cVar3) {
        uStack_98 = puVar14[1];
        uStack_a0 = *puVar14;
        uStack_90 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        func_0x00010b4b9b50(puVar14[5],puVar14[3]);
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[3] = 0;
        do {
          puVar7 = puVar8;
          func_0x00010b4b9c0c(puVar14);
          if ((long)uVar16 < (long)uVar18) break;
          uVar2 = uVar18 << 1 | 1;
          puVar14 = unaff_x20 + uVar2 * 6;
          uVar1 = uVar18 * 2 + 2;
          cVar3 = SBORROW8(uVar1,uVar20);
          cVar4 = (long)(uVar1 - uVar20) < 0;
          uVar5 = uVar1 == uVar20;
          puVar8 = puVar14;
          uVar18 = uVar2;
          if ((long)uVar1 < (long)uVar20) {
            func_0x00010b4b9b80();
            func_0x00010b4b9aec();
            puVar8 = puVar14 + 6;
            uVar18 = uVar1;
            if ((bool)uVar5 || cVar4 != cVar3) {
              puVar8 = puVar14;
              uVar18 = uVar2;
            }
          }
          puVar9 = puVar8;
          func_0x000107c27bd4(puVar8,&uStack_a0);
          puVar14 = puVar7;
        } while ((char)puVar9 < '\x01');
        func_0x0001075527e4(puVar7,&uStack_a0);
        func_0x00010b4b9b6c();
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar20 < 2) {
LAB_10b4b95a4:
      return;
    }
    uVar13 = unaff_x20[1];
    uVar11 = *unaff_x20;
    uStack_100 = unaff_x20[2];
    uStack_110 = uVar11;
    uStack_108 = uVar13;
    func_0x00010b4b9bfc(0);
    uStack_e8 = unaff_x20[5];
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    uVar10 = extraout_x8_03;
    puVar8 = unaff_x20;
    uStack_f8 = uVar11;
    uStack_f0 = uVar13;
    do {
      uVar1 = uVar10 << 1 | 1;
      uVar16 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar16,uVar20);
      cVar4 = (long)(uVar16 - uVar20) < 0;
      uVar5 = uVar16 == uVar20;
      puVar14 = puVar8 + uVar10 * 6 + 6;
      uVar2 = uVar1;
      if ((long)uVar16 < (long)uVar20) {
        func_0x00010b4b9b80();
        func_0x00010b4b9aec();
        puVar14 = puVar8 + uVar10 * 6 + 0xc;
        uVar2 = uVar16;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar14 = puVar8 + uVar10 * 6 + 6;
          uVar2 = uVar1;
        }
      }
      uVar10 = uVar2;
      func_0x00010b4b9c0c(puVar8);
      puVar8 = puVar14;
    } while ((long)uVar10 <= (long)(extraout_x9 >> 1));
    unaff_x19 = unaff_x19 + -6;
    if (puVar14 == unaff_x19) {
      func_0x0001075527e4(puVar14,&uStack_110);
    }
    else {
      func_0x0001075527e4(puVar14,unaff_x19);
      func_0x0001075527e4(unaff_x19,&uStack_110);
      uVar10 = (long)puVar14 + (0x30 - (long)unaff_x20);
      cVar3 = SBORROW8(uVar10,0x31);
      cVar4 = (long)puVar14 + (-1 - (long)unaff_x20) < 0;
      if (0x30 < (long)uVar10) {
        uVar10 = uVar10 / 0x30 - 2 >> 1;
        func_0x00010b4b9b1c(unaff_x20 + uVar10 * 6);
        func_0x00010b4b9a9c();
        if (cVar4 == cVar3) {
          uStack_98 = puVar14[1];
          uStack_a0 = *puVar14;
          uStack_90 = puVar14[2];
          puVar14[1] = 0;
          puVar14[2] = 0;
          *puVar14 = 0;
          func_0x00010b4b9b50(puVar14[5],puVar14[3]);
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[3] = 0;
          puVar8 = unaff_x20 + uVar10 * 6;
          do {
            puVar7 = puVar8;
            func_0x0001075527e4(puVar14,puVar7);
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar8 = unaff_x20 + uVar10 * 6;
            puVar9 = puVar8;
            func_0x000107c27bd4(puVar8,&uStack_a0);
            puVar14 = puVar7;
          } while ('\0' < (char)puVar9);
          func_0x0001075527e4(puVar7,&uStack_a0);
          func_0x00010b4b9b6c();
        }
      }
    }
    func_0x000107c27bbc(&uStack_110);
    uVar20 = uVar20 - 1;
  } while( true );
code_r0x00010b4b8fe0:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10b4b8fe4:
    FUN_10b4b8d84(unaff_x20,puVar9,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b4b8dc8;
}



/* Entry: 10b4b95c4; end: 10b4b96ff;  */

void FUN_10b4b95c4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar7;
  undefined8 in_register_00005008;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = param_3;
  func_0x00010b4b9b1c();
  cVar3 = (char)lVar4;
  func_0x00010b4b9c14();
  iVar1 = (int)cVar3;
  if ((char)lVar4 < '\x01') {
    cVar2 = SBORROW4(iVar1,1);
    cVar3 = iVar1 + -1 < 0;
    if (0 < iVar1) {
      func_0x00010b4b9b8c();
      func_0x00010b4b9c40(*(undefined8 *)(param_3 + 0x28));
      *(undefined8 *)(param_3 + 0x28) = extraout_x9;
      param_4[4] = in_register_00005008;
      param_4[3] = param_1;
      param_4[5] = extraout_x8;
      func_0x00010b4b9b1c(param_3);
      func_0x00010b4b9a9c();
      if (cVar3 == cVar2) {
        func_0x00010b4b9bb0();
        uVar5 = param_2[5];
        uVar8 = param_2[4];
        uVar7 = param_2[3];
        uVar6 = *(undefined8 *)(param_3 + 0x28);
        uVar9 = *(undefined8 *)(param_3 + 0x18);
        param_2[4] = *(undefined8 *)(param_3 + 0x20);
        param_2[3] = uVar9;
        param_2[5] = uVar6;
        *(undefined8 *)(param_3 + 0x20) = uVar8;
        *(undefined8 *)(param_3 + 0x18) = uVar7;
        *(undefined8 *)(param_3 + 0x28) = uVar5;
      }
    }
  }
  else {
    cVar2 = SBORROW4(iVar1,1);
    cVar3 = iVar1 + -1 < 0;
    if (iVar1 < 1) {
      func_0x00010b4b9bb0();
      uVar5 = param_2[5];
      uVar8 = param_2[4];
      uVar7 = param_2[3];
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      param_2[4] = *(undefined8 *)(param_3 + 0x20);
      param_2[3] = uVar9;
      param_2[5] = uVar6;
      *(undefined8 *)(param_3 + 0x20) = uVar8;
      *(undefined8 *)(param_3 + 0x18) = uVar7;
      *(undefined8 *)(param_3 + 0x28) = uVar5;
      func_0x00010b4b9c14();
      func_0x00010b4b9a9c();
      if (cVar3 != cVar2) {
        return;
      }
      func_0x00010b4b9b8c();
      func_0x00010b4b9c40(*(undefined8 *)(param_3 + 0x28));
      *(undefined8 *)(param_3 + 0x28) = extraout_x9_00;
      uVar5 = extraout_x8_00;
    }
    else {
      uVar5 = param_2[2];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar6 = param_4[2];
      uVar9 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar9;
      param_2[2] = uVar6;
      param_4[1] = uVar8;
      *param_4 = uVar7;
      param_4[2] = uVar5;
      uVar5 = param_2[5];
      uVar8 = param_2[4];
      uVar7 = param_2[3];
      uVar6 = param_4[5];
      uVar9 = param_4[3];
      param_2[4] = param_4[4];
      param_2[3] = uVar9;
      param_2[5] = uVar6;
    }
    param_4[4] = uVar8;
    param_4[3] = uVar7;
    param_4[5] = uVar5;
  }
  return;
}



/* Entry: 10b4b9700; end: 10b4b9777;  */

void FUN_10b4b9700(void)

{
  char in_NG;
  char in_OV;
  long in_x3;
  undefined8 extraout_x8;
  
  func_0x00010b4b9c34();
  FUN_10b4b95c4();
  func_0x00010b4b9b1c(in_x3);
  func_0x00010b4b9a9c();
  if (in_NG == in_OV) {
    func_0x00010b4b9b24();
    func_0x00010b4b9c7c();
    *(undefined8 *)(in_x3 + 0x28) = extraout_x8;
    func_0x00010b4b9b74();
    func_0x00010b4b9a9c();
    if (in_NG == in_OV) {
      func_0x00010b4b9a5c();
      func_0x00010b4b9af8();
      func_0x00010b4b9a9c();
      if (in_NG == in_OV) {
        func_0x00010b4b9aa8();
      }
    }
  }
  return;
}



/* Entry: 10b4b9778; end: 10b4b984b;  */

void FUN_10b4b9778(void)

{
  char in_NG;
  char in_OV;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010b4b9c34();
  FUN_10b4b9700();
  func_0x00010b4b9be4(in_x4);
  func_0x00010b4b9a9c();
  if (in_NG == in_OV) {
    uVar1 = in_x3[2];
    uVar4 = in_x3[1];
    uVar3 = *in_x3;
    uVar2 = in_x4[2];
    uVar5 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar5;
    in_x3[2] = uVar2;
    in_x4[1] = uVar4;
    *in_x4 = uVar3;
    in_x4[2] = uVar1;
    uVar1 = in_x3[5];
    uVar4 = in_x3[4];
    uVar3 = in_x3[3];
    uVar2 = in_x4[5];
    uVar5 = in_x4[3];
    in_x3[4] = in_x4[4];
    in_x3[3] = uVar5;
    in_x3[5] = uVar2;
    in_x4[4] = uVar4;
    in_x4[3] = uVar3;
    in_x4[5] = uVar1;
    func_0x00010b4b9b1c(in_x3);
    func_0x00010b4b9a9c();
    if (in_NG == in_OV) {
      func_0x00010b4b9b24();
      func_0x00010b4b9c7c();
      in_x3[5] = extraout_x8;
      func_0x00010b4b9b74();
      func_0x00010b4b9a9c();
      if (in_NG == in_OV) {
        func_0x00010b4b9a5c();
        func_0x00010b4b9af8();
        func_0x00010b4b9a9c();
        if (in_NG == in_OV) {
          func_0x00010b4b9aa8();
        }
      }
    }
  }
  return;
}



/* Entry: 10b4b984c; end: 10b4b9a23;  */

bool FUN_10b4b984c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 in_register_00005008;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar8 = ((long)param_3 - param_2) / 0x30;
  cVar2 = SBORROW8(lVar8,5);
  cVar3 = lVar8 + -5 < 0;
  switch(lVar8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b4b9b74(1);
    func_0x00010b4b9a9c();
    if (cVar3 == cVar2) {
      func_0x00010b4b9a5c();
      uVar6 = param_3[-1];
      uVar10 = param_3[-3];
      *(undefined8 *)(param_2 + 0x20) = param_3[-2];
      *(undefined8 *)(param_2 + 0x18) = uVar10;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      param_3[-2] = in_register_00005008;
      param_3[-3] = param_1;
      param_3[-1] = extraout_x8;
    }
    break;
  case 3:
    FUN_10b4b95c4(param_2,param_2 + 0x30,param_3 + -6);
    break;
  case 4:
    FUN_10b4b9700(param_2,param_2 + 0x30,param_2 + 0x60,param_3 + -6);
    break;
  case 5:
    FUN_10b4b9778(param_2,param_2 + 0x30,param_2 + 0x60,param_2 + 0x90,param_3 + -6);
    break;
  default:
    FUN_10b4b95c4(param_2,param_2 + 0x30,param_2 + 0x60);
    lVar8 = 0;
    iVar9 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x90);
    while( true ) {
      cVar2 = SBORROW8((long)puVar5,(long)param_3);
      cVar3 = (long)puVar5 - (long)param_3 < 0;
      if (puVar5 == param_3) break;
      func_0x00010b4b9be4(puVar5);
      func_0x00010b4b9a9c();
      if (cVar3 == cVar2) {
        uStack_b8 = puVar5[1];
        uStack_c0 = *puVar5;
        uStack_b0 = puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        uStack_a0 = puVar5[4];
        uStack_a8 = puVar5[3];
        puVar5[2] = 0;
        puVar5[3] = 0;
        uStack_98 = puVar5[5];
        puVar5[4] = 0;
        puVar5[5] = 0;
        lVar7 = lVar8;
        do {
          lVar1 = param_2 + lVar7;
          func_0x0001075527e4(lVar1 + 0x90,lVar1 + 0x60);
          lVar4 = param_2;
          if (lVar7 == -0x60) goto LAB_10b4b99b4;
          cVar3 = (char)&uStack_c0;
          func_0x000107c27bd4(&uStack_c0,lVar1 + 0x30);
          lVar7 = lVar7 + -0x30;
        } while ('\0' < cVar3);
        lVar4 = param_2 + lVar7 + 0x90;
LAB_10b4b99b4:
        func_0x0001075527e4(lVar4,&uStack_c0);
        iVar9 = iVar9 + 1;
        func_0x000107c27bbc(&uStack_c0);
        if (iVar9 == 8) {
          return puVar5 + 6 == param_3;
        }
      }
      puVar5 = puVar5 + 6;
      lVar8 = lVar8 + 0x30;
    }
  }
  return true;
}



/* Entry: 10b4b9a24; end: 10b4b9a5b;  */

/* WARNING: Possible PIC construction at 0x00010b4b9a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4b9a38) */
/* WARNING: Removing unreachable block (ram,0x00010b4b9a50) */
/* WARNING: Removing unreachable block (ram,0x00010b4b9a3c) */

bool FUN_10b4b9a24(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  func_0x00010b4b9c34();
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    func_0x000107c610b0(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10b4b9a5c; end: 10b4b9ca3;  */

undefined8 FUN_10b4b9a5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = unaff_x19[2];
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x21[2];
  uVar5 = *unaff_x21;
  unaff_x19[1] = unaff_x21[1];
  *unaff_x19 = uVar5;
  unaff_x19[2] = uVar2;
  unaff_x21[1] = uVar4;
  *unaff_x21 = uVar3;
  unaff_x21[2] = uVar1;
  return unaff_x19[3];
}



/* Entry: 10b4b9ca4; end: 10b4ba08f;  */

long * FUN_10b4b9ca4(long *param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x27;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0x3f800000;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  uStack_a8 = 0;
  uStack_a0 = 0;
  *puVar6 = CONCAT44(param_3,param_2);
  puVar6[1] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 5) = 0x3f800000;
  uVar16 = (ulong)param_2;
  uVar18 = param_1[1];
  puStack_80 = puVar6;
  if (uVar18 != 0) {
    uVar7 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar7) == 0) {
      unaff_x27 = (ulong)(uVar17 - 1 & param_2);
    }
    else {
      unaff_x27 = uVar16;
      if (uVar18 <= uVar16) {
        uVar2 = 0;
        if (uVar17 != 0) {
          uVar2 = param_2 / uVar17;
        }
        unaff_x27 = (ulong)(param_2 - uVar2 * uVar17);
      }
    }
    plVar15 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10b4b9da4;
          uVar9 = plVar15[1];
          if (uVar9 != uVar16) break;
          if (*(uint *)(plVar15 + 2) == param_2) goto LAB_10b4ba020;
        }
        if ((uVar18 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar18 <= uVar9) {
          uVar10 = 0;
          if (uVar18 != 0) {
            uVar10 = uVar9 / uVar18;
          }
          uVar9 = uVar9 - uVar10 * uVar18;
        }
      } while (uVar9 == unaff_x27);
    }
  }
LAB_10b4b9da4:
  plVar15 = (long *)0x20;
  __Znwm();
  plVar1 = param_1 + 2;
  uStack_68 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar16;
  *(uint *)(plVar15 + 2) = param_2;
  puStack_80 = (undefined8 *)0x0;
  plVar15[3] = (long)puVar6;
  plStack_70 = plVar1;
  if ((uVar18 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar18))
  goto LAB_10b4b9fa8;
  bVar4 = 2 < uVar18;
  bVar5 = uVar18 == 3;
  plStack_78 = plVar15;
  func_0x00010b4bafe0(uVar18 << 1);
  uVar7 = extraout_x8;
  if (!bVar4 || bVar5) {
    uVar7 = extraout_x9;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar18 = param_1[1];
  }
  if (uVar18 < uVar7) {
LAB_10b4b9e50:
    if (uVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b4ba05c);
      (*pcVar3)();
    }
    lVar8 = uVar7 << 3;
    __Znwm(lVar8);
    FUN_10b4bacbc(param_1,lVar8);
    param_1[1] = uVar7;
    lVar8 = *param_1;
    for (uVar18 = 0; uVar7 != uVar18; uVar18 = uVar18 + 1) {
      *(undefined8 *)(lVar8 + uVar18 * 8) = 0;
    }
    plVar11 = (long *)*plVar1;
    uVar18 = uVar7;
    if (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      uVar10 = uVar7 - 1;
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar13 / uVar7;
      }
      uVar14 = uVar13;
      if (uVar7 <= uVar13) {
        uVar14 = uVar13 - uVar9 * uVar7;
      }
      if ((uVar7 & uVar10) == 0) {
        uVar14 = uVar13 & uVar10;
      }
      *(long **)(lVar8 + uVar14 * 8) = plVar1;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        uVar9 = plVar11[1];
        if ((uVar7 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar7 <= uVar9) {
          uVar13 = 0;
          if (uVar7 != 0) {
            uVar13 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar13 * uVar7;
        }
        if (uVar9 != uVar14) {
          if (*(long *)(lVar8 + uVar9 * 8) == 0) {
            *(long **)(lVar8 + uVar9 * 8) = plVar12;
            uVar14 = uVar9;
          }
          else {
            func_0x00010b4baf50();
            lVar8 = extraout_x8_00;
            uVar10 = extraout_x9_00;
            plVar11 = extraout_x10;
            uVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar7 < uVar18) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b4baf30();
    }
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 < uVar18) {
      if (uVar7 != 0) goto LAB_10b4b9e50;
      FUN_10b4bacbc(param_1,0);
      param_1[1] = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = param_1[1];
    }
  }
  if ((uVar18 & uVar18 - 1) == 0) {
    unaff_x27 = (ulong)((int)uVar18 - 1U & param_2);
  }
  else {
    unaff_x27 = uVar16;
    if (uVar18 <= uVar16) {
      uVar7 = 0;
      if (uVar18 != 0) {
        uVar7 = uVar16 / uVar18;
      }
      unaff_x27 = uVar16 - uVar7 * uVar18;
    }
  }
LAB_10b4b9fa8:
  lVar8 = *param_1;
  plVar11 = *(long **)(lVar8 + unaff_x27 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar8 + unaff_x27 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar16 = uVar16 & uVar18 - 1;
      }
      else if (uVar18 <= uVar16) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar16 / uVar18;
        }
        uVar16 = uVar16 - uVar7 * uVar18;
      }
      *(long **)(lVar8 + uVar16 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
  }
  plStack_78 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b4bacd4(&plStack_78);
LAB_10b4ba020:
  func_0x00010b4b6f2c(&puStack_80);
  func_0x00010b4b6f8c(&uStack_a8);
  return plVar15 + 3;
}



/* Entry: 10b4ba090; end: 10b4ba183;  */

long * FUN_10b4ba090(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  piVar5 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  plVar3 = param_1;
  do {
    if (piVar5 == piVar1) {
      return param_1;
    }
    iVar2 = *piVar5;
    if (iVar2 == 2) {
      func_0x00010b4bb038();
      plVar3 = (long *)*plVar3;
      FUN_10b4bb080(plVar3,piVar5[8],0xffffffff);
      plVar3 = (long *)(*plVar3 + 8);
      func_0x000107c28274(plVar3,piVar5 + 0x10);
    }
    else {
      if (iVar2 == 1) {
        func_0x00010b4bb038();
        plVar3 = (long *)*plVar3;
        FUN_10b4bb080(plVar3,piVar5[8],piVar5[0x16]);
      }
      else {
        if (iVar2 != 0) goto LAB_10b4ba150;
        plVar3 = param_1;
        FUN_10b4b9ca4(param_1,piVar5[1],piVar5[0x16]);
      }
      iVar2 = *(int *)(*plVar3 + 4);
      iVar4 = piVar5[0x16];
      if ((iVar2 != -1) && (iVar2 <= iVar4)) {
        iVar4 = iVar2;
      }
      *(int *)(*plVar3 + 4) = iVar4;
    }
LAB_10b4ba150:
    piVar5 = piVar5 + 0x18;
  } while( true );
}



/* Entry: 10b4ba184; end: 10b4ba25f;  */

void FUN_10b4ba184(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *unaff_x22;
  
  func_0x00010b4bafb0();
  if ((*(long *)(param_1 + 0x18) != 0) && (FUN_10b4bad0c(), param_1 != 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    iVar2 = *(int *)(lVar4 + 4);
    if (iVar2 != -1) {
      *unaff_x22 = iVar2;
    }
    lVar4 = lVar4 + 8;
    func_0x00010b4badac(lVar4,(long)param_2 + 0x2c);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      iVar2 = *(int *)(lVar5 + 4);
      if (iVar2 == -1) {
        iVar2 = *unaff_x22;
      }
      else {
        *unaff_x22 = iVar2;
      }
      if ((iVar2 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        lVar1 = param_2[1];
        for (lVar5 = *param_2; lVar5 != lVar1; lVar5 = lVar5 + 0x30) {
          lVar3 = *(long *)(lVar4 + 0x18) + 8;
          func_0x00010596ff94(lVar3,lVar5);
          if (lVar3 != 0) {
            func_0x000107c28274();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b4ba260; end: 10b4ba27f;  */

bool FUN_10b4ba260(long param_1)

{
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    return *(long *)(param_1 + 0x68) == 0;
  }
  return false;
}



/* Entry: 10b4ba280; end: 10b4ba9f3;  */

int * FUN_10b4ba280(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar13;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  undefined1 *puVar14;
  long *extraout_x10;
  long *plVar15;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  undefined1 *extraout_x11_02;
  long extraout_x12;
  long *plVar16;
  long extraout_x12_00;
  long *plVar17;
  undefined1 *unaff_x24;
  int *piVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined1 auStack_a8 [48];
  long *plStack_78;
  long *plStack_70;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3f800000;
  plVar10 = (long *)(param_1 + 10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *plVar10 = 0;
  plVar21 = (long *)(param_1 + 0xe);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *plVar21 = 0;
  plVar11 = (long *)(param_1 + 0x14);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *plVar11 = 0;
  plVar19 = (long *)(param_1 + 0x18);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *plVar19 = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  piVar18 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  do {
    if (piVar18 == piVar1) {
      return param_1;
    }
    iVar2 = *piVar18;
    if (iVar2 == 2) {
      func_0x00010b4baffc();
      puVar14 = auStack_a8;
      FUN_10b4bae4c();
      puVar20 = *(undefined1 **)(param_1 + 0x16);
      if (puVar20 != (undefined1 *)0x0) {
        puVar22 = puVar20 + -1;
        if (((ulong)puVar20 & (ulong)puVar22) == 0) {
          unaff_x24 = (undefined1 *)((ulong)puVar22 & (ulong)puVar14);
        }
        else {
          unaff_x24 = puVar14;
          if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            unaff_x24 = puVar14 + -(uVar13 * (long)puVar20);
          }
        }
        plVar17 = *(long **)(*plVar11 + (long)unaff_x24 * 8);
        puVar9 = puVar14;
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10b4ba4d4;
              puVar12 = (undefined1 *)plVar17[1];
              if (puVar12 != puVar14) break;
              func_0x00010b4bb060();
              if (((ulong)puVar9 & 1) != 0) goto LAB_10b4ba93c;
            }
            if (((ulong)puVar20 & (ulong)puVar22) == 0) {
              puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar22);
            }
            else if (puVar20 <= puVar12) {
              uVar13 = 0;
              if (puVar20 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar12 / (ulong)puVar20;
              }
              puVar12 = puVar12 + -(uVar13 * (long)puVar20);
            }
          } while (puVar12 == unaff_x24);
        }
      }
LAB_10b4ba4d4:
      plVar17 = (long *)0x68;
      __Znwm();
      plVar16 = plVar17;
      plStack_78 = plVar17;
      plStack_70 = plVar19;
      func_0x00010b4baf70();
      plVar16[9] = 0;
      plVar16[8] = 0;
      plVar16[0xb] = 0;
      plVar16[10] = 0;
      *(undefined4 *)(plVar16 + 0xc) = 0x3f800000;
      if ((puVar20 == (undefined1 *)0x0) ||
         ((float)param_1[0x1c] * (float)puVar20 < (float)(*(long *)(param_1 + 0x1a) + 1))) {
        bVar5 = (undefined1 *)0x2 < puVar20;
        bVar6 = puVar20 == (undefined1 *)0x3;
        func_0x00010b4bafe0((long)puVar20 << 1);
        puVar22 = extraout_x8_00;
        if (!bVar5 || bVar6) {
          puVar22 = extraout_x9_00;
        }
        if (puVar22 + -1 == (undefined1 *)0x0) {
          puVar22 = (undefined1 *)0x2;
        }
        else if (((ulong)puVar22 & (ulong)(puVar22 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        puVar20 = *(undefined1 **)(param_1 + 0x16);
        if (puVar20 < puVar22) {
LAB_10b4ba64c:
          puVar20 = puVar22;
          if ((ulong)puVar20 >> 0x3d != 0) {
            func_0x000104bd35f4();
LAB_10b4ba988:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10b4ba98c);
            (*pcVar4)();
          }
          lVar8 = (long)puVar20 << 3;
          __Znwm(lVar8);
          FUN_10b4baee0(plVar11,lVar8);
          *(undefined1 **)(param_1 + 0x16) = puVar20;
          lVar8 = *(long *)(param_1 + 0x14);
          for (puVar22 = (undefined1 *)0x0; bVar6 = puVar22 <= puVar20, puVar20 != puVar22;
              puVar22 = puVar22 + 1) {
            *(undefined8 *)(lVar8 + (long)puVar22 * 8) = 0;
          }
          if (*plVar19 != 0) {
            func_0x00010b4bb06c();
            puVar22 = extraout_x11_01;
            if (bVar6) {
              puVar22 = extraout_x11_01 + -(extraout_x12_00 * (long)puVar20);
            }
            if (((ulong)puVar20 & extraout_x9_03) == 0) {
              puVar22 = (undefined1 *)((ulong)extraout_x11_01 & extraout_x9_03);
            }
            *(long **)(extraout_x8_03 + (long)puVar22 * 8) = plVar19;
            lVar8 = extraout_x8_03;
            uVar13 = extraout_x9_03;
            plVar16 = extraout_x10_01;
            while (plVar15 = plVar16, plVar16 = (long *)*plVar15, plVar16 != (long *)0x0) {
              puVar9 = (undefined1 *)plVar16[1];
              if (((ulong)puVar20 & uVar13) == 0) {
                puVar9 = (undefined1 *)((ulong)puVar9 & uVar13);
              }
              else if (puVar20 <= puVar9) {
                uVar3 = 0;
                if (puVar20 != (undefined1 *)0x0) {
                  uVar3 = (ulong)puVar9 / (ulong)puVar20;
                }
                puVar9 = puVar9 + -(uVar3 * (long)puVar20);
              }
              if (puVar9 != puVar22) {
                if (*(long *)(lVar8 + (long)puVar9 * 8) == 0) {
                  *(long **)(lVar8 + (long)puVar9 * 8) = plVar15;
                  puVar22 = puVar9;
                }
                else {
                  func_0x00010b4baf50();
                  lVar8 = extraout_x8_04;
                  uVar13 = extraout_x9_04;
                  plVar16 = extraout_x10_02;
                  puVar22 = extraout_x11_02;
                }
              }
            }
          }
        }
        else if (puVar22 < puVar20) {
          puVar9 = (undefined1 *)(long)((float)*(ulong *)(param_1 + 0x1a) / (float)param_1[0x1c]);
          if ((puVar20 < (undefined1 *)0x3) || (((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010b4baf30();
          }
          if (puVar22 <= puVar9) {
            puVar22 = puVar9;
          }
          if (puVar22 < puVar20) {
            if (puVar22 != (undefined1 *)0x0) goto LAB_10b4ba64c;
            FUN_10b4baee0(plVar11,0);
            puVar20 = (undefined1 *)0x0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
          }
          else {
            puVar20 = *(undefined1 **)(param_1 + 0x16);
          }
        }
        if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
          unaff_x24 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar14);
        }
        else {
          unaff_x24 = puVar14;
          if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            unaff_x24 = puVar14 + -(uVar13 * (long)puVar20);
          }
        }
      }
      lVar8 = *plVar11;
      plVar16 = *(long **)(lVar8 + (long)unaff_x24 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar17 = *plVar19;
        *plVar19 = (long)plVar17;
        *(long **)(lVar8 + (long)unaff_x24 * 8) = plVar19;
        if (*plVar17 != 0) {
          puVar14 = *(undefined1 **)(*plVar17 + 8);
          if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
            puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)(puVar20 + -1));
          }
          else if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            puVar14 = puVar14 + -(uVar13 * (long)puVar20);
          }
          *(long **)(lVar8 + (long)puVar14 * 8) = plVar17;
        }
      }
      else {
        *plVar17 = *plVar16;
        *plVar16 = (long)plVar17;
      }
      plStack_78 = (long *)0x0;
      *(long *)(param_1 + 0x1a) = *(long *)(param_1 + 0x1a) + 1;
      FUN_10b4baef8(&plStack_78);
LAB_10b4ba93c:
      func_0x00010b4bb04c();
      func_0x000107c28274(plVar17 + 8,piVar18 + 0x10);
    }
    else if (iVar2 == 1) {
      iVar2 = piVar18[0x16];
      func_0x00010b4baffc();
      puVar14 = auStack_a8;
      FUN_10b4bae4c();
      puVar20 = *(undefined1 **)(param_1 + 0xc);
      if (puVar20 != (undefined1 *)0x0) {
        puVar22 = puVar20 + -1;
        if (((ulong)puVar20 & (ulong)puVar22) == 0) {
          unaff_x24 = (undefined1 *)((ulong)puVar22 & (ulong)puVar14);
        }
        else {
          unaff_x24 = puVar14;
          if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            unaff_x24 = puVar14 + -(uVar13 * (long)puVar20);
          }
        }
        plVar17 = *(long **)(*plVar10 + (long)unaff_x24 * 8);
        puVar9 = puVar14;
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10b4ba404;
              puVar12 = (undefined1 *)plVar17[1];
              if (puVar12 != puVar14) break;
              func_0x00010b4bb060();
              if (((ulong)puVar9 & 1) != 0) goto LAB_10b4ba87c;
            }
            if (((ulong)puVar20 & (ulong)puVar22) == 0) {
              puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar22);
            }
            else if (puVar20 <= puVar12) {
              uVar13 = 0;
              if (puVar20 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar12 / (ulong)puVar20;
              }
              puVar12 = puVar12 + -(uVar13 * (long)puVar20);
            }
          } while (puVar12 == unaff_x24);
        }
      }
LAB_10b4ba404:
      plVar17 = (long *)0x48;
      __Znwm();
      plVar16 = plVar17;
      plStack_78 = plVar17;
      plStack_70 = plVar21;
      func_0x00010b4baf70();
      *(undefined4 *)((long)plVar16 + 0x40) = 0;
      if ((puVar20 == (undefined1 *)0x0) ||
         ((float)param_1[0x12] * (float)puVar20 < (float)(*(long *)(param_1 + 0x10) + 1))) {
        bVar5 = (undefined1 *)0x2 < puVar20;
        bVar6 = puVar20 == (undefined1 *)0x3;
        func_0x00010b4bafe0((long)puVar20 << 1);
        puVar22 = extraout_x8;
        if (!bVar5 || bVar6) {
          puVar22 = extraout_x9;
        }
        if (puVar22 + -1 == (undefined1 *)0x0) {
          puVar22 = (undefined1 *)0x2;
        }
        else if (((ulong)puVar22 & (ulong)(puVar22 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        puVar20 = *(undefined1 **)(param_1 + 0xc);
        if (puVar20 < puVar22) {
LAB_10b4ba570:
          if ((ulong)puVar22 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b4ba988;
          }
          lVar8 = (long)puVar22 << 3;
          __Znwm(lVar8);
          FUN_10b4bae90(plVar10,lVar8);
          *(undefined1 **)(param_1 + 0xc) = puVar22;
          lVar8 = *(long *)(param_1 + 10);
          for (puVar20 = (undefined1 *)0x0; bVar6 = puVar20 <= puVar22, puVar22 != puVar20;
              puVar20 = puVar20 + 1) {
            *(undefined8 *)(lVar8 + (long)puVar20 * 8) = 0;
          }
          puVar20 = puVar22;
          if (*plVar21 != 0) {
            func_0x00010b4bb06c();
            puVar9 = extraout_x11;
            if (bVar6) {
              puVar9 = extraout_x11 + -(extraout_x12 * (long)puVar22);
            }
            if (((ulong)puVar22 & extraout_x9_01) == 0) {
              puVar9 = (undefined1 *)((ulong)extraout_x11 & extraout_x9_01);
            }
            *(long **)(extraout_x8_01 + (long)puVar9 * 8) = plVar21;
            lVar8 = extraout_x8_01;
            uVar13 = extraout_x9_01;
            plVar16 = extraout_x10;
            while (plVar15 = plVar16, plVar16 = (long *)*plVar15, plVar16 != (long *)0x0) {
              puVar12 = (undefined1 *)plVar16[1];
              if (((ulong)puVar22 & uVar13) == 0) {
                puVar12 = (undefined1 *)((ulong)puVar12 & uVar13);
              }
              else if (puVar22 <= puVar12) {
                uVar3 = 0;
                if (puVar22 != (undefined1 *)0x0) {
                  uVar3 = (ulong)puVar12 / (ulong)puVar22;
                }
                puVar12 = puVar12 + -(uVar3 * (long)puVar22);
              }
              if (puVar12 != puVar9) {
                if (*(long *)(lVar8 + (long)puVar12 * 8) == 0) {
                  *(long **)(lVar8 + (long)puVar12 * 8) = plVar15;
                  puVar9 = puVar12;
                }
                else {
                  func_0x00010b4baf50();
                  lVar8 = extraout_x8_02;
                  uVar13 = extraout_x9_02;
                  plVar16 = extraout_x10_00;
                  puVar9 = extraout_x11_00;
                }
              }
            }
          }
        }
        else if (puVar22 < puVar20) {
          puVar9 = (undefined1 *)(long)((float)*(ulong *)(param_1 + 0x10) / (float)param_1[0x12]);
          if ((puVar20 < (undefined1 *)0x3) || (((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010b4baf30();
          }
          if (puVar22 <= puVar9) {
            puVar22 = puVar9;
          }
          if (puVar22 < puVar20) {
            if (puVar22 != (undefined1 *)0x0) goto LAB_10b4ba570;
            FUN_10b4bae90(plVar10,0);
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            puVar20 = (undefined1 *)0x0;
          }
          else {
            puVar20 = *(undefined1 **)(param_1 + 0xc);
          }
        }
        if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
          unaff_x24 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar14);
        }
        else {
          unaff_x24 = puVar14;
          if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            unaff_x24 = puVar14 + -(uVar13 * (long)puVar20);
          }
        }
      }
      lVar8 = *plVar10;
      plVar16 = *(long **)(lVar8 + (long)unaff_x24 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar17 = *plVar21;
        *plVar21 = (long)plVar17;
        *(long **)(lVar8 + (long)unaff_x24 * 8) = plVar21;
        if (*plVar17 != 0) {
          puVar14 = *(undefined1 **)(*plVar17 + 8);
          if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
            puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)(puVar20 + -1));
          }
          else if (puVar20 <= puVar14) {
            uVar13 = 0;
            if (puVar20 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)puVar20;
            }
            puVar14 = puVar14 + -(uVar13 * (long)puVar20);
          }
          *(long **)(lVar8 + (long)puVar14 * 8) = plVar17;
        }
      }
      else {
        *plVar17 = *plVar16;
        *plVar16 = (long)plVar17;
      }
      plStack_78 = (long *)0x0;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      FUN_10b4baea8(&plStack_78);
LAB_10b4ba87c:
      *(int *)((long)plVar17 + 0x40) = iVar2;
      func_0x00010b4bb04c();
    }
    else if (iVar2 == 0) {
      iVar2 = piVar18[0x16];
      piVar7 = param_1;
      func_0x0001074d68bc(param_1,piVar18 + 2);
      *piVar7 = iVar2;
    }
    piVar18 = piVar18 + 0x18;
  } while( true );
}



/* Entry: 10b4ba9f4; end: 10b4bacbb;  */

void FUN_10b4ba9f4(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *unaff_x22;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar10 = param_2;
  func_0x00010b4bafb0();
  func_0x000107c27958(&uStack_90,*plVar10 + 8);
  lVar6 = param_1;
  func_0x0001074d96ac(param_1,&uStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  if (lVar6 != 0) {
    *unaff_x22 = *(int *)(lVar6 + 0x28);
  }
  func_0x000107c27958(&uStack_a8,*param_2 + 8);
  func_0x000107c27958(&uStack_c0,*param_2 + 0x28);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_68 = uStack_b0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  func_0x00010b4baff4();
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  if ((puVar7 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x40) != 0)) {
    puVar3 = &uStack_90;
    FUN_10b4bae4c();
    uVar8 = (long)puVar7 - 1;
    if (((ulong)puVar7 & uVar8) == 0) {
      puVar9 = (undefined8 *)((ulong)puVar3 & uVar8);
    }
    else {
      puVar9 = puVar3;
      if (puVar7 <= puVar3) {
        uVar2 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar2 = (ulong)puVar3 / (ulong)puVar7;
        }
        puVar9 = (undefined8 *)((long)puVar3 - uVar2 * (long)puVar7);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x28) + (long)puVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10b4bab4c;
          puVar5 = (undefined8 *)plVar10[1];
          if (puVar5 != puVar3) break;
          lVar6 = (long)(plVar10 + 2);
          FUN_10b4b9a24(lVar6,&uStack_90);
          if ((int)lVar6 != 0) {
            iVar1 = *(int *)(plVar10 + 8);
            *unaff_x22 = iVar1;
            if (iVar1 == 0) goto LAB_10b4bac54;
            goto LAB_10b4bab54;
          }
        }
        if (((ulong)puVar7 & uVar8) == 0) {
          puVar5 = (undefined8 *)((ulong)puVar5 & uVar8);
        }
        else if (puVar7 <= puVar5) {
          uVar2 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar5 / (ulong)puVar7;
          }
          puVar5 = (undefined8 *)((long)puVar5 - uVar2 * (long)puVar7);
        }
      } while (puVar5 == puVar9);
    }
  }
LAB_10b4bab4c:
  if (*unaff_x22 != 0) {
LAB_10b4bab54:
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    if ((puVar7 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x68) != 0)) {
      puVar3 = &uStack_90;
      FUN_10b4bae4c();
      uVar8 = (long)puVar7 - 1;
      if (((ulong)puVar7 & uVar8) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar3 & uVar8);
      }
      else {
        puVar9 = puVar3;
        if (puVar7 <= puVar3) {
          uVar2 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar3 / (ulong)puVar7;
          }
          puVar9 = (undefined8 *)((long)puVar3 - uVar2 * (long)puVar7);
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x50) + (long)puVar9 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10b4bac54;
            puVar5 = (undefined8 *)plVar10[1];
            if (puVar5 != puVar3) break;
            lVar6 = (long)(plVar10 + 2);
            FUN_10b4b9a24(lVar6,&uStack_90);
            if ((int)lVar6 != 0) {
              for (lVar6 = *(long *)(*param_2 + 0x40) << 4; lVar6 != 0; lVar6 = lVar6 + -0x10) {
                func_0x00010b4bb054();
                lVar4 = (long)(plVar10 + 8);
                func_0x00010596ff94(lVar4,&uStack_a8);
                func_0x00010b4baff4();
                if (lVar4 != 0) {
                  func_0x00010b4bb054();
                  func_0x00010726db00();
                  func_0x00010b4baff4();
                }
              }
              goto LAB_10b4bac54;
            }
          }
          if (((ulong)puVar7 & uVar8) == 0) {
            puVar5 = (undefined8 *)((ulong)puVar5 & uVar8);
          }
          else if (puVar7 <= puVar5) {
            uVar2 = 0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar2 = (ulong)puVar5 / (ulong)puVar7;
            }
            puVar5 = (undefined8 *)((long)puVar5 - uVar2 * (long)puVar7);
          }
        } while (puVar5 == puVar9);
      }
    }
  }
LAB_10b4bac54:
  func_0x000107c27bbc(&uStack_90);
  return;
}



/* Entry: 10b4bacbc; end: 10b4bacd3;  */

void FUN_10b4bacbc(long *param_1,long param_2)

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



/* Entry: 10b4bacd4; end: 10b4bad0b;  */

void FUN_10b4bacd4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bb00c();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010b4b6f2c(unaff_x20 + 0x18);
    }
    func_0x00010b4bb028();
  }
  return;
}



/* Entry: 10b4bad0c; end: 10b4bae4b;  */

long FUN_10b4bad0c(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 10b4bae4c; end: 10b4bae8f;  */

ulong FUN_10b4bae4c(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x000107c278c4(puVar1,param_1);
  puVar2 = &uStack_22;
  func_0x000107c278c4(puVar2,param_1 + 0x18);
  return (ulong)puVar2 ^ (ulong)puVar1;
}



/* Entry: 10b4bae90; end: 10b4baea7;  */

void FUN_10b4bae90(long *param_1,long param_2)

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



/* Entry: 10b4baea8; end: 10b4baedf;  */

void FUN_10b4baea8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bb00c();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000107c27bbc(unaff_x20 + 0x10);
    }
    func_0x00010b4bb028();
  }
  return;
}



/* Entry: 10b4baee0; end: 10b4baef7;  */

void FUN_10b4baee0(long *param_1,long param_2)

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



/* Entry: 10b4baef8; end: 10b4baf2f;  */

void FUN_10b4baef8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bb00c();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010b4b7108(unaff_x20 + 0x10);
    }
    func_0x00010b4bb028();
  }
  return;
}



/* Entry: 10b4baf30; end: 10b4bb07f;  */

ulong FUN_10b4baf30(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 10b4bb080; end: 10b4bb10b;  */

long FUN_10b4bb080(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  uStack_60 = param_2;
  uStack_5c = param_3;
  uStack_24 = param_2;
  FUN_10b4bb124(auStack_30,&uStack_60);
  FUN_10b4bb10c(param_1 + 8,&uStack_24,auStack_30);
  FUN_10b4bb5c4();
  func_0x000107c2826c(&uStack_58);
  return param_1 + 0x18;
}



/* Entry: 10b4bb10c; end: 10b4bb123;  */

void FUN_10b4bb10c(void)

{
  FUN_10b4bb184();
  return;
}



/* Entry: 10b4bb124; end: 10b4bb183;  */

void FUN_10b4bb124(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x00010b4bb158();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b4bb184; end: 10b4bb1a3;  */

void FUN_10b4bb184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b4bb1a4(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10b4bb1a4; end: 10b4bb563;  */

undefined1  [16] FUN_10b4bb1a4(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x25;
  undefined1 auVar19 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar2 = *param_2;
  uVar16 = (ulong)uVar2;
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar7 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar7) == 0) {
      unaff_x25 = (ulong)(uVar17 - 1 & uVar2);
    }
    else {
      unaff_x25 = uVar16;
      if (uVar18 <= uVar16) {
        uVar4 = 0;
        if (uVar17 != 0) {
          uVar4 = uVar2 / uVar17;
        }
        unaff_x25 = (ulong)(uVar2 - uVar4 * uVar17);
      }
    }
    plVar15 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10b4bb25c;
          uVar9 = plVar15[1];
          if (uVar9 != uVar16) break;
          if (*(uint *)(plVar15 + 2) == uVar2) {
            uVar6 = 0;
            goto LAB_10b4bb528;
          }
        }
        if ((uVar18 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar18 <= uVar9) {
          uVar10 = 0;
          if (uVar18 != 0) {
            uVar10 = uVar9 / uVar18;
          }
          uVar9 = uVar9 - uVar10 * uVar18;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_10b4bb25c:
  uVar3 = *param_3;
  plVar1 = param_1 + 2;
  plVar15 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar16;
  *(undefined4 *)(plVar15 + 2) = uVar3;
  lVar8 = *param_4;
  *param_4 = 0;
  plVar15[3] = lVar8;
  plStack_60 = plVar1;
  if ((uVar18 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar18))
  goto LAB_10b4bb4ac;
  uVar7 = 1;
  if (2 < uVar18) {
    uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
  }
  uVar7 = uVar7 | uVar18 << 1;
  uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  plStack_68 = plVar15;
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar18 = param_1[1];
  }
  if (uVar18 < uVar7) {
LAB_10b4bb31c:
    if (uVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10b4bb550);
      (*pcVar5)();
    }
    lVar8 = uVar7 << 3;
    __Znwm(lVar8);
    FUN_10b4bb564(param_1,lVar8);
    param_1[1] = uVar7;
    lVar8 = *param_1;
    for (uVar18 = 0; uVar7 != uVar18; uVar18 = uVar18 + 1) {
      *(undefined8 *)(lVar8 + uVar18 * 8) = 0;
    }
    plVar11 = (long *)*plVar1;
    uVar18 = uVar7;
    if (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      uVar10 = uVar7 - 1;
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar13 / uVar7;
      }
      uVar14 = uVar13;
      if (uVar7 <= uVar13) {
        uVar14 = uVar13 - uVar9 * uVar7;
      }
      if ((uVar7 & uVar10) == 0) {
        uVar14 = uVar13 & uVar10;
      }
      *(long **)(lVar8 + uVar14 * 8) = plVar1;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        uVar9 = plVar11[1];
        if ((uVar7 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar7 <= uVar9) {
          uVar13 = 0;
          if (uVar7 != 0) {
            uVar13 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar13 * uVar7;
        }
        if (uVar9 != uVar14) {
          if (*(long *)(lVar8 + uVar9 * 8) == 0) {
            *(long **)(lVar8 + uVar9 * 8) = plVar12;
            uVar14 = uVar9;
          }
          else {
            *plVar12 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar8 + uVar9 * 8);
            **(long **)(lVar8 + uVar9 * 8) = (long)plVar11;
            plVar11 = plVar12;
          }
        }
      }
    }
  }
  else if (uVar7 < uVar18) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 < uVar18) {
      if (uVar7 != 0) goto LAB_10b4bb31c;
      FUN_10b4bb564(param_1,0);
      param_1[1] = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = param_1[1];
    }
  }
  if ((uVar18 & uVar18 - 1) == 0) {
    unaff_x25 = (ulong)((int)uVar18 - 1U & uVar2);
  }
  else {
    unaff_x25 = uVar16;
    if (uVar18 <= uVar16) {
      uVar7 = 0;
      if (uVar18 != 0) {
        uVar7 = uVar16 / uVar18;
      }
      unaff_x25 = uVar16 - uVar7 * uVar18;
    }
  }
LAB_10b4bb4ac:
  lVar8 = *param_1;
  plVar11 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar16 = uVar16 & uVar18 - 1;
      }
      else if (uVar18 <= uVar16) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar16 / uVar18;
        }
        uVar16 = uVar16 - uVar7 * uVar18;
      }
      *(long **)(lVar8 + uVar16 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b4bb57c(&plStack_68);
  uVar6 = 1;
LAB_10b4bb528:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar15;
  return auVar19;
}



/* Entry: 10b4bb564; end: 10b4bb57b;  */

void FUN_10b4bb564(long *param_1,long param_2)

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



/* Entry: 10b4bb57c; end: 10b4bb5c3;  */

long * FUN_10b4bb57c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b4b6fe0(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b4bb5c4; end: 10b4bb5cf;  */

undefined8 FUN_10b4bb5c4(undefined8 param_1)

{
  long unaff_x29;
  
  func_0x000107c39838(unaff_x29 + -0x20);
  FUN_10b4b7000();
  return param_1;
}



/* Entry: 10b4bb5d0; end: 10b4bb65f;  */

undefined4 *
FUN_10b4bb5d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_4);
  param_1[8] = param_5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 10,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x10,param_7);
  param_1[0x16] = param_8;
  return param_1;
}



/* Entry: 10b4bb660; end: 10b4bb717;  */

void FUN_10b4bb660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c278b8(auStack_58,&UNK_10f773b9c);
  func_0x000107c278b8(auStack_70,&UNK_10f773b9c);
  FUN_10b4bb5d0(param_1,0,param_2,param_3,0,auStack_58,auStack_70,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10b4bb718; end: 10b4bb7af;  */

void FUN_10b4bb718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c278b8(auStack_58,&UNK_10f773b9c);
  FUN_10b4bb5d0(param_1,1,param_2,param_3,param_4,param_5,auStack_58,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10b4bb7b0; end: 10b4bb7fb;  */

undefined4 *
FUN_10b4bb7b0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = 2;
  param_1[1] = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3);
  param_1[8] = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 10,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x10,param_6);
  param_1[0x16] = 0;
  return param_1;
}



/* Entry: 10b4bb7fc; end: 10b4bb87b;  */

void FUN_10b4bb7fc(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_2 + 0x20,param_1 + 0x18,uVar1);
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_2 + 0x18,param_1,uVar1);
  FUN_10b4bb87c();
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}



/* Entry: 10b4bb87c; end: 10b4bb88b;  */

void FUN_10b4bb87c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b4bbb44();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 10b4bb88c; end: 10b4bb95b;  */

void FUN_10b4bb88c(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  if ((*(ulong *)(param_5 + 8) & 1) != 0) {
    func_0x00010b4bbbc4(param_1,*param_1,param_1[1]);
  }
  func_0x00010b206ad0(param_5 + 0x48);
  if ((*(ulong *)(param_5 + 8) & 1) != 0) {
    func_0x00010b4bbbc4();
  }
  func_0x00010b206ad0(param_5 + 0x50);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    func_0x000107c27bb8(auStack_60,lVar1,lVar1 + 0x18);
    FUN_10b4bb95c(auStack_80,param_5 + 0x10,auStack_60);
    func_0x000107c27bbc(auStack_60);
  }
  func_0x00010b4bbb94();
  lVar1 = *param_4;
  lVar2 = param_4[1];
  while (lVar1 != lVar2) {
    func_0x00010b4bbba8();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
  }
  return;
}



/* Entry: 10b4bb95c; end: 10b4bb963;  */

void FUN_10b4bb95c(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  piVar2 = param_2;
  func_0x000107c27d5c(param_2,puVar4,uVar1,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar2 != 0) {
      uVar1 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      func_0x000107c27d5c(param_2,puVar4,uVar1,0);
    }
    piVar2 = param_2;
    func_0x000107c27d64(param_2,0x38);
    lVar3 = *(long *)(param_2 + 6);
    uVar6 = param_3[2];
    uVar7 = *param_3;
    *(undefined8 *)(piVar2 + 4) = param_3[1];
    *(undefined8 *)(piVar2 + 2) = uVar7;
    *(undefined8 *)(piVar2 + 6) = uVar6;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    if (lVar3 != 0) {
      FUN_10b4d8014(lVar3,piVar2 + 2,&UNK_104c611dc);
    }
    lVar3 = *(long *)(param_2 + 6);
    uVar7 = param_3[4];
    uVar6 = param_3[3];
    *(undefined8 *)(piVar2 + 0xc) = param_3[5];
    *(undefined8 *)(piVar2 + 10) = uVar7;
    *(undefined8 *)(piVar2 + 8) = uVar6;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[3] = 0;
    if (lVar3 != 0) {
      FUN_10b4d8014(lVar3,piVar2 + 8,&UNK_104c611dc);
    }
    func_0x000107c27d68(param_2,puVar4,piVar2);
    *param_2 = *param_2 + 1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *param_1 = piVar2;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)puVar4;
  *(undefined1 *)(param_1 + 3) = uVar5;
  return;
}



/* Entry: 10b4bb964; end: 10b4bbaa7;  */

void FUN_10b4bb964(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  long param_6)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if ((*(ulong *)(param_6 + 8) & 1) != 0) {
    func_0x00010b4bbbc4(param_1,*param_1,param_1[1]);
  }
  func_0x00010b206ad0(param_6 + 0x48);
  if ((*(ulong *)(param_6 + 8) & 1) != 0) {
    func_0x00010b4bbbc4();
  }
  func_0x00010b206ad0(param_6 + 0x50);
  lVar1 = 0;
  lVar2 = 0;
  for (lVar3 = 0; lVar3 != param_3[1]; lVar3 = lVar3 + 1) {
    func_0x000107c27958(&uStack_98,*param_3 + lVar2);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_68,*param_4 + lVar1);
    FUN_10b4bb95c(auStack_b8,param_6 + 0x10,&uStack_80);
    func_0x000107c27bbc(&uStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
    lVar2 = lVar2 + 0x10;
    lVar1 = lVar1 + 0x18;
  }
  func_0x00010b4bbb94();
  lVar3 = *param_5;
  lVar2 = param_5[1];
  while (lVar3 != lVar2) {
    func_0x00010b4bbba8();
    lVar3 = extraout_x8;
    lVar2 = extraout_x9;
  }
  return;
}



/* Entry: 10b4bbaa8; end: 10b4bbb07;  */

void FUN_10b4bbaa8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  func_0x000107c27fdc(param_1,plVar1);
  FUN_10b4d1758(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 10b4bbb08; end: 10b4bbb93;  */

void FUN_10b4bbb08(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b4bbb44();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 10b4bbb94; end: 10b4bbbcf;  */

/* WARNING: Possible PIC construction at 0x00010598e028: Changing call to branch */

void FUN_10b4bbb94(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long *plVar13;
  ulong uVar14;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  pplVar9 = (long **)(unaff_x19 + 0x30);
  uVar10 = (uint)((ulong)(unaff_x20[1] - *unaff_x20) >> 3);
  if ((int)uVar10 <= *(int *)(unaff_x19 + 0x34)) {
    return;
  }
  uVar2 = *(uint *)pplVar9;
  iVar1 = *(int *)(unaff_x19 + 0x34);
  plVar13 = *(long **)(unaff_x19 + 0x38);
  if (iVar1 == 0) {
    if ((int)uVar10 < 1) goto code_r0x00010598df90;
code_r0x00010598df78:
    if ((int)uVar10 < (int)(iVar1 << 1 | 1U)) {
      uVar10 = iVar1 * 2 + 1;
    }
    uVar14 = (ulong)uVar10;
  }
  else {
    plVar13 = (long *)plVar13[-1];
    if ((int)uVar10 < 1) {
code_r0x00010598df90:
      uVar14 = 1;
    }
    else {
      if (iVar1 < 0x3ffffffc) goto code_r0x00010598df78;
      uVar14 = 0x7fffffff;
    }
  }
  plVar8 = (long *)(uVar14 * 8 + 8);
  if (plVar13 == (long *)0x0) {
    uVar14 = (ulong)uVar2;
    func_0x000100064708();
    uVar14 = uVar14 - 8 >> 3;
    if (0x7ffffffe < uVar14) {
      uVar14 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0001053abb00(pplVar6,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar13 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar13 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar13 = pplVar6[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar9,plVar13);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar9 = aplStack_58;
      func_0x00010ae6c700();
      goto code_r0x00010598e090;
    }
    plVar7 = plVar13;
    func_0x0001053abb54(plVar13,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar13;
  if (*(int *)(unaff_x19 + 0x34) < 1) {
    *(int *)(unaff_x19 + 0x34) = (int)uVar14;
    *(long **)(unaff_x19 + 0x38) = plVar8 + 1;
    return;
  }
  if (0 < (int)uVar2) {
    _memcpy(plVar8 + 1,*(undefined8 *)(unaff_x19 + 0x38),(ulong)uVar2 << 3);
  }
code_r0x00010598e090:
  plVar13 = pplVar9[1] + -1;
  if (*plVar13 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar13);
    return;
  }
  uVar14 = (long)(int)*(uint *)((long)pplVar9 + 4) * 8 + 8;
  ppuVar4 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar13);
  if (ppuVar4[1] != (undefined *)*extraout_x8) {
    return;
  }
  puVar5 = ppuVar4[2];
  uVar11 = 0x3b - LZCOUNT(uVar14);
  bVar3 = puVar5[0x50];
  if (uVar11 < bVar3) {
    lVar12 = *(long *)(puVar5 + 0x58);
    *plVar13 = *(long *)(lVar12 + uVar11 * 8);
    *(long **)(lVar12 + uVar11 * 8) = plVar13;
  }
  else {
    if (bVar3 == 0) {
      lVar12 = 0;
    }
    else {
      _memmove(plVar13,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
      lVar12 = (ulong)(byte)puVar5[0x50] << 3;
    }
    uVar11 = uVar14 >> 3;
    if (0 < (long)((uVar14 & 0xfffffffffffffff8) - lVar12)) {
      _bzero((long)plVar13 + lVar12);
    }
    *(long **)(puVar5 + 0x58) = plVar13;
    if (0x3f < uVar11) {
      uVar11 = 0x40;
    }
    puVar5[0x50] = (char)uVar11;
  }
  return;
}



/* Entry: 10b4bbbd0; end: 10b4bbf17;  */

void FUN_10b4bbbd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c31544(auStack_68);
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *puVar3 = &PTR_FUN_110cf08e0;
  puVar3[1] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar4 = puVar3;
  puStack_70 = puVar3;
  func_0x000107c3034c();
  if (((ulong)puVar4 & 1) == 0) {
    *param_1 = 0;
    goto LAB_10b4bbe44;
  }
  uStack_78 = 0;
  ppuVar1 = &PTR_PTR_1133752b0;
  if ((undefined **)puVar3[3] != (undefined **)0x0) {
    ppuVar1 = (undefined **)puVar3[3];
  }
  iVar2 = *(int *)((long)ppuVar1 + 0x1c);
  if (iVar2 == 3) {
    puVar7 = ppuVar1[2];
    FUN_10b4bbffc(*(undefined8 *)(puVar7 + 0x18));
    puVar6 = auStack_138;
    func_0x00010b4bc040();
    func_0x00010b4bc048();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    if ((int)puVar6 == -1) {
      param_4 = 0xffffffff;
    }
    else {
      FUN_10b4bbffc(*(undefined8 *)(puVar7 + 0x20));
      func_0x00010b4bc040(auStack_150);
      func_0x00010b4b7cf4(param_4,puVar6,auStack_150);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    }
    func_0x00010b4bc034(*(undefined8 *)(puVar7 + 0x18));
    func_0x00010b4bc034(*(undefined8 *)(puVar7 + 0x28));
    FUN_10b4bb7b0(auStack_f0,puVar6,extraout_x10 & 0xfffffffffffffffc,param_4,
                  extraout_x9_00 & 0xfffffffffffffffc,
                  *(ulong *)(extraout_x8_01 + 0x10) & 0xfffffffffffffffc);
    func_0x00010b4bc028();
LAB_10b4bbe34:
    FUN_10b4b6c30(auStack_f0);
  }
  else {
    if (iVar2 == 2) {
      puVar7 = ppuVar1[2];
      ppuVar1 = &PTR_PTR_113375290;
      FUN_10b4bbffc(*(undefined8 *)(puVar7 + 0x18));
      puVar6 = auStack_108;
      func_0x00010b4bc040();
      func_0x00010b4bc048();
      puVar5 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      if ((int)puVar6 == -1) {
        param_4 = 0xffffffff;
      }
      else {
        FUN_10b4bbffc(*(undefined8 *)(puVar7 + 0x20));
        func_0x00010b4bc040(auStack_120);
        func_0x00010b4b7cf4(param_4,puVar6,auStack_120);
        puVar5 = auStack_120;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      }
      func_0x00010b4bc034(*(undefined8 *)(puVar7 + 0x18));
      uVar8 = *(ulong *)(extraout_x8_00 + 0x10);
      if (extraout_x9 != (undefined **)0x0) {
        ppuVar1 = extraout_x9;
      }
      puVar7 = ppuVar1[2];
      func_0x00010b4bc00c();
      FUN_10b4bb718(auStack_f0,puVar6,uVar8 & 0xfffffffffffffffc,param_4,
                    (ulong)puVar7 & 0xfffffffffffffffc,puVar5);
      func_0x00010b4bc028();
      goto LAB_10b4bbe34;
    }
    if (iVar2 == 1) {
      puVar7 = ppuVar1[2];
      FUN_10b4bbffc(*(undefined8 *)(puVar7 + 0x18));
      puVar6 = auStack_90;
      func_0x00010b4bc040(puVar6);
      func_0x00010b4bc048();
      puVar5 = auStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      func_0x00010b4bc034(*(undefined8 *)(puVar7 + 0x18));
      uVar8 = *(ulong *)(extraout_x8 + 0x10);
      func_0x00010b4bc00c();
      FUN_10b4bb660(auStack_f0,puVar6,uVar8 & 0xfffffffffffffffc,puVar5);
      func_0x00010b4bc028();
      goto LAB_10b4bbe34;
    }
    *param_1 = 0;
  }
  func_0x00010b4b735c(&uStack_78);
LAB_10b4bbe44:
  FUN_10b4bbfc8(&puStack_70);
  func_0x000107c27914(auStack_68);
  return;
}



/* Entry: 10b4bbf18; end: 10b4bbf4b;  */

void FUN_10b4bbf18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_10b4b6bc0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b4bbf4c; end: 10b4bbfc7;  */

undefined4 FUN_10b4bbf4c(int param_1)

{
  if (param_1 - 2U < 7) {
    return *(undefined4 *)(&UNK_10e5b46d8 + (ulong)(param_1 - 2U) * 4);
  }
  return 10000;
}



/* Entry: 10b4bbfc8; end: 10b4bbffb;  */

long * FUN_10b4bbfc8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10b4bd5c0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4bbffc; end: 10b4bc09b;  */

void FUN_10b4bbffc(void)

{
  return;
}


