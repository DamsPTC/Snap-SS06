/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10812a31c; end: 10812a3eb;  */

void FUN_10812a31c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10812a3ec(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10812a364;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10812a364;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10812a3c0:
    FUN_10812a42c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10812a3c0;
    }
    func_0x00010812a544(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10812a3ec(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10812a364:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10812a3ec; end: 10812a42b;  */

ulong FUN_10812a3ec(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10812a42c; end: 10812a70f;  */

void FUN_10812a42c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 extraout_w8;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar6 = param_1[3];
  lVar7 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar7 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2 + lVar7;
  _memset();
  lVar7 = 0;
  *(undefined1 *)(lVar2 + param_2) = 0xff;
  lVar2 = 6;
  if (param_2 != 7) {
    lVar2 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  param_1[3] = param_2;
  for (; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar2 = lVar4;
      FUN_10812a710();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_10812a3ec(lVar5,param_1[3],lVar2);
      *(byte *)(lVar5 + lVar3) = (byte)lVar2 & 0x7f;
      func_0x00010812a82c();
      *(undefined1 *)(extraout_x9 + extraout_x11 + extraout_x10 + 1) = extraout_w8;
      FUN_10812a730(param_1[1] + lVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10812a710; end: 10812a72f;  */

void FUN_10812a710(undefined2 *param_1)

{
  func_0x00010812a850(*param_1);
  return;
}



/* Entry: 10812a730; end: 10812a753;  */

undefined8 * FUN_10812a730(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 4) = *puVar2;
  *puVar2 = 0;
  func_0x0001080fe800(*puVar2);
  return puVar2;
}



/* Entry: 10812a754; end: 10812a7fb;  */

void FUN_10812a754(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10812a7fc; end: 10812a8e7;  */

void FUN_10812a7fc(void)

{
  return;
}



/* Entry: 10812a8e8; end: 10812a997;  */

undefined8 * FUN_10812a8e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110a26138;
  if (param_1[0xd] != 0) {
    __ZdlPv(param_1[10]);
    param_1[0xf] = 0;
    param_1[10] = &UNK_10dd5b8b0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[4] + lVar2)) {
        func_0x000107807adc(param_1[5] + lVar3);
        lVar1 = param_1[7];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[9] = 0;
    param_1[4] = &UNK_10dd5b8b0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10812aea0(param_1 + 3);
  *param_1 = &PTR_DAT_110a26098;
  func_0x0001003a8c94(param_1 + 2);
  return param_1;
}



/* Entry: 10812a998; end: 10812a99b;  */

undefined8 * FUN_10812a998(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110a26138;
  if (param_1[0xd] != 0) {
    __ZdlPv(param_1[10]);
    param_1[0xf] = 0;
    param_1[10] = &UNK_10dd5b8b0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[4] + lVar2)) {
        func_0x000107807adc(param_1[5] + lVar3);
        lVar1 = param_1[7];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[9] = 0;
    param_1[4] = &UNK_10dd5b8b0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10812aea0(param_1 + 3);
  *param_1 = &PTR_DAT_110a26098;
  func_0x0001003a8c94(param_1 + 2);
  return param_1;
}



/* Entry: 10812a99c; end: 10812a9af;  */

void FUN_10812a99c(void)

{
  FUN_10812a8e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812a9b0; end: 10812ac4f;  */

void FUN_10812a9b0(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  uint uStack_54;
  long lStack_50;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  uStack_44 = (undefined2)param_4;
  uStack_42 = (undefined1)(param_4 >> 0x10);
  puVar3 = &uStack_44;
  FUN_10812aeec();
  lVar6 = 0;
  uVar8 = (ulong)puVar3 >> 7;
  uVar7 = *(ulong *)(param_2 + 0x68);
  while( true ) {
    uVar8 = uVar8 & uVar7;
    uVar10 = *(ulong *)(*(long *)(param_2 + 0x50) + uVar8);
    uVar11 = uVar10 ^ ((ulong)puVar3 & 0x7f) * 0x101010101010101;
    for (uVar11 = uVar11 + 0xfefefefefefefeff & (uVar11 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar8 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar7;
      pbVar1 = (byte *)(*(long *)(param_2 + 0x58) + uVar4 * 8);
      if ((((uint)*pbVar1 == (param_4 & 0xff)) && ((uint)pbVar1[1] == (param_4 >> 8 & 0xff))) &&
         ((uint)pbVar1[2] == (param_4 >> 0x10 & 0xff))) {
        if (uVar7 != uVar4) {
          if (*(int *)(pbVar1 + 4) != 0) {
            plVar12 = (long *)(param_2 + 0x20);
            FUN_10812ac50();
            lVar6 = 0;
            if (*plVar12 != 0) {
              do {
                func_0x00010812b600();
                lVar6 = extraout_x8_01;
              } while (extraout_w11_01 != 0);
            }
            *param_1 = lVar6;
            return;
          }
          *param_1 = 0;
          return;
        }
        goto LAB_10812aaa4;
      }
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar8 = lVar6 + uVar8;
  }
LAB_10812aaa4:
  puVar13 = *(uint **)(param_2 + 0x18);
  uStack_54 = (uint)&uStack_44;
  func_0x00010812e3ec();
  (**(code **)(*(long *)puVar13 + 0x30))(&lStack_50,puVar13,&uStack_54);
  if (lStack_50 == 0) {
    func_0x00010812b64c();
    *puVar13 = 0;
    *param_1 = 0;
  }
  else {
    uVar2 = *(uint *)(lStack_50 + 0x10);
    uVar7 = (ulong)uVar2;
    uStack_54 = uVar2;
    func_0x00010812b64c();
    *puVar13 = uVar2;
    func_0x00010812af04();
    lVar6 = 0;
    plVar12 = (long *)(param_2 + 0x20);
    uVar8 = uVar7 >> 7;
    uVar11 = *(ulong *)(param_2 + 0x38);
    while( true ) {
      uVar8 = uVar8 & uVar11;
      uVar4 = *(ulong *)(*plVar12 + uVar8);
      uVar10 = uVar4 ^ (uVar7 & 0x7f) * 0x101010101010101;
      for (uVar10 = uVar10 + 0xfefefefefefefeff & (uVar10 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar9 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar11;
        if (*(uint *)(*(long *)(param_2 + 0x28) + uVar9 * 0x10) == uVar2) {
          if (uVar11 != uVar9) {
            lVar6 = 0;
            if (*(long *)(*(long *)(param_2 + 0x28) + uVar9 * 0x10 + 8) != 0) {
              do {
                func_0x00010812b600();
                lVar6 = extraout_x8_00;
              } while (extraout_w11_00 != 0);
            }
            *param_1 = lVar6;
            goto LAB_10812abfc;
          }
          goto LAB_10812ab8c;
        }
      }
      if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
      lVar6 = lVar6 + 8;
      uVar8 = lVar6 + uVar8;
    }
LAB_10812ab8c:
    lVar5 = 0xb8;
    __Znwm();
    lVar6 = lVar5;
    FUN_108137014();
    *param_1 = lVar6;
    FUN_10812ac50(plVar12,&uStack_54);
    if (plVar12 != param_1) {
      do {
        func_0x00010812b600();
      } while (extraout_w11 != 0);
      *plVar12 = lVar5;
      func_0x000107807b00(extraout_x8);
    }
  }
LAB_10812abfc:
  func_0x0001081298a0(&lStack_50);
  return;
}



/* Entry: 10812ac50; end: 10812ad4f;  */

long FUN_10812ac50(long *param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = (ulong)*param_2;
  func_0x00010812af04();
  lVar5 = 0;
  uVar6 = uVar3 >> 7;
  while( true ) {
    uVar6 = uVar6 & param_1[3];
    uVar7 = *(ulong *)(*param_1 + uVar6);
    uVar8 = uVar7 ^ (uVar3 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar9 = param_1[1];
      plVar4 = (long *)(uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_1[3]);
      if (*(uint *)(lVar9 + (long)plVar4 * 0x10) == *param_2) goto LAB_10812ad40;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
  plVar4 = param_1;
  FUN_10812af24(param_1,uVar3);
  lVar5 = *param_1;
  puVar1 = (uint *)(param_1[1] + (long)plVar4 * 0x10);
  *puVar1 = *param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(byte *)(lVar5 + (long)plVar4) = (byte)uVar3 & 0x7f;
  FUN_10812b4b4();
  lVar9 = param_1[1];
LAB_10812ad40:
  return lVar9 + (long)plVar4 * 0x10 + 8;
}



/* Entry: 10812ad50; end: 10812ae9f;  */

long FUN_10812ad50(long *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = param_2;
  FUN_10812aeec();
  lVar12 = 0;
  uVar5 = (ulong)puVar3 >> 7;
  uVar10 = param_1[3];
  lVar7 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar10;
    uVar8 = *(ulong *)(lVar7 + uVar5);
    uVar6 = uVar8 ^ ((ulong)puVar3 & 0x7f) * 0x101010101010101;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar4 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar11 = param_1[1];
      plVar9 = (long *)(uVar5 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar10);
      uVar4 = lVar11 + (long)plVar9 * 8;
      FUN_10812e3b0(uVar4,param_2);
      if ((uVar4 & 1) != 0) goto LAB_10812ae78;
    }
    if ((uVar8 & ~uVar8 << 6 & 0x8080808080808080) != 0) break;
    lVar12 = lVar12 + 8;
    uVar5 = lVar12 + uVar5;
  }
  plVar9 = param_1;
  FUN_10812b22c(param_1,puVar3);
  puVar1 = (undefined2 *)(param_1[1] + (long)plVar9 * 8);
  uVar2 = *(undefined1 *)(param_2 + 1);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = uVar2;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(byte *)(*param_1 + (long)plVar9) = (byte)puVar3 & 0x7f;
  FUN_10812b4b4();
  lVar11 = param_1[1];
LAB_10812ae78:
  return lVar11 + (long)plVar9 * 8 + 4;
}



/* Entry: 10812aea0; end: 10812aeeb;  */

long * FUN_10812aea0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10812aeec; end: 10812af23;  */

void FUN_10812aeec(void)

{
  func_0x00010812b580();
  return;
}



/* Entry: 10812af24; end: 10812afab;  */

void FUN_10812af24(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010812b5bc();
  FUN_10812afac();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10812afdc();
      }
      else {
        func_0x00010812b06c();
      }
      func_0x00010812b680();
      FUN_10812afac();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010812b548(lVar1);
  return;
}



/* Entry: 10812afac; end: 10812afdb;  */

ulong FUN_10812afac(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10812afdc; end: 10812b1ef;  */

void FUN_10812afdc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010812b658();
  lVar3 = (param_2 & 0xfffffffffffffff8) + 0x10;
  __Znwm(lVar3 + param_2 * 0x10);
  func_0x00010812b4fc();
  func_0x00010812b5e4();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010812b66c(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10812b1f0(unaff_x21);
      func_0x00010812b628();
      FUN_10812afac();
      func_0x00010812b4cc();
      FUN_10812b210(extraout_x8_00 + lVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10812b1f0; end: 10812b20f;  */

void FUN_10812b1f0(undefined4 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 10812b210; end: 10812b22b;  */

void FUN_10812b210(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  *puVar1 = 0;
  func_0x0001078096e0(puVar1);
  func_0x000107807b00();
  return;
}



/* Entry: 10812b22c; end: 10812b2b3;  */

void FUN_10812b22c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010812b5bc();
  FUN_10812b2b4();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10812b2e4();
      }
      else {
        FUN_10812b370();
      }
      func_0x00010812b680();
      FUN_10812b2b4();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010812b548(lVar1);
  return;
}



/* Entry: 10812b2b4; end: 10812b2e3;  */

ulong FUN_10812b2b4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10812b2e4; end: 10812b36f;  */

void FUN_10812b2e4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010812b658();
  lVar3 = (param_2 & 0xfffffffffffffffc) + 0xc;
  __Znwm(lVar3 + param_2 * 8);
  func_0x00010812b4fc();
  func_0x00010812b5e4();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010812b66c(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      puVar2 = unaff_x21;
      FUN_10812b49c();
      func_0x00010812b628();
      FUN_10812b2b4();
      func_0x00010812b4cc();
      *(undefined8 *)(extraout_x8_00 + (long)puVar2 * 8) = *unaff_x21;
    }
    unaff_x21 = unaff_x21 + 1;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10812b370; end: 10812b49b;  */

void FUN_10812b370(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x00010812b640();
  for (uVar7 = 0; uVar7 != param_1[3]; uVar7 = uVar7 + 1) {
    if (*(char *)(*param_1 + uVar7) == -2) {
      uVar1 = param_1[1] + uVar7 * 8;
      FUN_10812b49c();
      lVar5 = *param_1;
      uVar6 = param_1[3];
      lVar2 = lVar5;
      FUN_10812b2b4(lVar5,uVar6,uVar1);
      uVar3 = uVar6 & uVar1 >> 7;
      if (((lVar2 - uVar3 ^ uVar7 - uVar3) & uVar6) < 8) {
        *(byte *)(lVar5 + uVar7) = (byte)uVar1 & 0x7f;
        func_0x00010812b4b4();
      }
      else {
        *(byte *)(lVar5 + lVar2) = (byte)uVar1 & 0x7f;
        func_0x00010812b520();
        if (extraout_w9 == 0x80) {
          *(undefined8 *)(extraout_x8 + lVar2 * 8) = *(undefined8 *)(extraout_x8 + uVar7 * 8);
          *(undefined1 *)(*param_1 + uVar7) = 0x80;
          func_0x00010812b610(*param_1);
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          uVar4 = *(undefined8 *)(extraout_x8 + uVar7 * 8);
          *(undefined8 *)(extraout_x8 + uVar7 * 8) = *(undefined8 *)(extraout_x8 + lVar2 * 8);
          *(undefined8 *)(param_1[1] + lVar2 * 8) = uVar4;
          uVar7 = uVar7 - 1;
        }
      }
    }
  }
  lVar2 = 6;
  if (uVar7 != 7) {
    lVar2 = uVar7 - (uVar7 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  return;
}



/* Entry: 10812b49c; end: 10812b4b3;  */

void FUN_10812b49c(void)

{
  func_0x00010812b580();
  return;
}



/* Entry: 10812b4b4; end: 10812b693;  */

void FUN_10812b4b4(void)

{
  undefined1 in_w8;
  long in_x9;
  ulong in_x10;
  ulong in_x11;
  
  *(undefined1 *)(in_x9 + (in_x11 & in_x10) + (in_x11 & 7) + 1) = in_w8;
  return;
}



/* Entry: 10812b694; end: 10812b79f;  */

long FUN_10812b694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = param_1;
  func_0x00010812db9c();
  *(undefined8 *)(lVar1 + 0x18) = extraout_x8;
  *(undefined8 *)(lVar1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x68) = param_2;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  func_0x000108137c08(lVar1 + 0x78);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined **)(param_1 + 0x160) = &UNK_10dd5b8b0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 400) = 0x404;
  *(undefined1 *)(param_1 + 0x192) = 0;
  FUN_108134a94(param_1 + 0x198,param_3);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



/* Entry: 10812b7a0; end: 10812b7ab;  */

long FUN_10812b7a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010812db9c();
  *(undefined8 *)(lVar4 + 0x18) = extraout_x8;
  if (*(long *)(lVar4 + 0x1a8) != 0) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x1a8) + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x00010812db78();
    }
  }
  func_0x0001003a8c94(param_1 + 0x1a0);
  FUN_10812cbc4(param_1 + 0x198);
  FUN_10812cb14(param_1 + 0x160);
  FUN_108137c50(param_1 + 0x78);
  FUN_10812cc0c(param_1 + 0x70);
  func_0x00010b9a1f08(param_1 + 0x20);
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 10812b7ac; end: 10812b7bf;  */

void FUN_10812b7ac(void)

{
  func_0x00010812b720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812b7c0; end: 10812b7c7;  */

void FUN_10812b7c0(long param_1)

{
  func_0x00010812b720(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812b7c8; end: 10812b80f;  */

void FUN_10812b7c8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [23];
  undefined1 uStack_21;
  
  func_0x00010812da38();
  FUN_10812b810(auStack_38);
  FUN_1081386b8(unaff_x19 + 0x78);
  *(undefined1 *)(unaff_x20 + 0x18) = uStack_21;
  func_0x00010812da78();
  return;
}



/* Entry: 10812b810; end: 10812ba3b;  */

void FUN_10812b810(undefined8 param_1,long param_2,int param_3,byte *param_4)

{
  byte bVar1;
  
  FUN_10812d8c0(param_1,param_2 + 0x20);
  bVar1 = *(long *)(param_2 + 0x70) != 0;
  if ((param_3 != 0) && (*(long *)(param_2 + 0x70) == 0)) {
    func_0x00010812b86c();
    bVar1 = (byte)param_2 ^ 1;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = bVar1 ^ 1;
  }
  return;
}



/* Entry: 10812ba3c; end: 10812ba47;  */

/* WARNING: Removing unreachable block (ram,0x00010812b85c) */

void FUN_10812ba3c(undefined8 param_1,long param_2)

{
  FUN_10812d8c0(param_1,param_2 + 0x20);
  if (*(long *)(param_2 + 0x70) == 0) {
    func_0x00010812b86c();
  }
  return;
}



/* Entry: 10812ba48; end: 10812bb0b;  */

void FUN_10812ba48(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined1 param_7)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_31 = param_7;
  uStack_30 = param_3;
  uStack_24 = param_2;
  FUN_10812cccc();
  uStack_50 = 0;
  uStack_48 = param_4;
  if (*param_6 != 0) {
    do {
      func_0x00010812dac4();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010812bacc(&uStack_40,&uStack_48,&uStack_50,&uStack_24,&uStack_30,&uStack_31);
  func_0x000107807b00(uStack_50);
  func_0x000107475618(uStack_48);
  *param_1 = uStack_40;
  return;
}



/* Entry: 10812bb0c; end: 10812bb1f;  */

void FUN_10812bb0c(long param_1,long *param_2,ulong param_3)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 *extraout_x8_00;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_50;
  
  func_0x00010812da5c(param_1,param_2,param_1 + 0x1a0,param_3 & 0xffffff);
  func_0x00010812d91c();
  func_0x00010812db14();
  FUN_108137f50();
  func_0x00010812db90();
  if ((bool)in_ZR) {
    func_0x00010812d944();
    func_0x00010812da20();
    uVar1 = 1;
    uStack_50 = 1;
  }
  else {
    uVar1 = 2;
  }
  *extraout_x8 = uVar1;
  extraout_x8[1] = uStack_50;
  func_0x00010812da04();
  func_0x00010812d8f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010812da5c();
  FUN_10812ba3c(auStack_c0);
  if (*(char *)(*param_2 + 0x73) == '\x01') {
    func_0x00010812da2c(&uStack_c8,param_1);
    FUN_10812ba48();
    *extraout_x8_00 = 1;
    extraout_x8_00[1] = uStack_c8;
    func_0x000107807aac(0);
  }
  else {
    func_0x00010812da2c(extraout_x8_00,param_1);
    FUN_10812bb20();
  }
  func_0x0001080eb338(auStack_c0);
  return;
}



/* Entry: 10812bb20; end: 10812bb93;  */

void FUN_10812bb20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 *extraout_x8_00;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_50;
  
  func_0x00010812da5c();
  func_0x00010812d91c();
  func_0x00010812db14();
  FUN_108137f50();
  func_0x00010812db90();
  if ((bool)in_ZR) {
    func_0x00010812d944();
    func_0x00010812da20();
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
    param_5 = uStack_50;
  }
  *extraout_x8 = uVar1;
  extraout_x8[1] = param_5;
  func_0x00010812da04();
  func_0x00010812d8f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010812da5c();
  FUN_10812ba3c(auStack_c0);
  if (*(char *)(*param_2 + 0x73) == '\x01') {
    func_0x00010812da2c(&uStack_c8,param_1);
    FUN_10812ba48();
    *extraout_x8_00 = 1;
    extraout_x8_00[1] = uStack_c8;
    func_0x000107807aac(0);
  }
  else {
    func_0x00010812da2c(extraout_x8_00,param_1);
    FUN_10812bb20();
  }
  func_0x0001080eb338(auStack_c0);
  return;
}



/* Entry: 10812bb94; end: 10812bc4b;  */

void FUN_10812bb94(undefined8 param_1,long *param_2)

{
  undefined8 *extraout_x8;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  func_0x00010812da5c();
  FUN_10812ba3c(auStack_60);
  if (*(char *)(*param_2 + 0x73) == '\x01') {
    func_0x00010812da2c(&uStack_68,param_1);
    FUN_10812ba48();
    *extraout_x8 = 1;
    extraout_x8[1] = uStack_68;
    func_0x000107807aac(0);
  }
  else {
    func_0x00010812da2c(extraout_x8,param_1);
    FUN_10812bb20();
  }
  func_0x0001080eb338(auStack_60);
  return;
}



/* Entry: 10812bc4c; end: 10812c09f;  */

void FUN_10812bc4c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  undefined8 uVar12;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w11;
  undefined8 *unaff_x19;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  uint3 uStack_6c;
  undefined1 auStack_68 [16];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar10 = param_2;
  func_0x00010812d930();
  uStack_48 = extraout_x8;
  if ((bRam0000000113729b88 & 1) == 0) {
    iVar5 = 0x13729b88;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812db60("system");
      func_0x00010812db58();
    }
  }
  if ((bRam0000000113729b98 & 1) == 0) {
    iVar5 = 0x13729b98;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812db60(&DAT_10f478691);
      func_0x00010812db58();
    }
  }
  if ((bRam0000000113729ba8 & 1) == 0) {
    iVar5 = 0x13729ba8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812db60(&DAT_10f4786bc);
      func_0x00010812db58();
    }
  }
  if ((bRam0000000113729bb8 & 1) == 0) {
    iVar5 = 0x13729bb8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812da4c(&DAT_10f4786ab);
      func_0x00010812da44();
    }
  }
  if ((bRam0000000113729bc8 & 1) == 0) {
    iVar5 = 0x13729bc8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812da4c(&DAT_10f47869f);
      func_0x00010812da44();
    }
  }
  if ((bRam0000000113729bd8 & 1) == 0) {
    iVar5 = 0x13729bd8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812da4c(&DAT_10f4786cc);
      func_0x00010812da44();
    }
  }
  if ((bRam0000000113729be8 & 1) == 0) {
    iVar5 = 0x13729be8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812da4c(&DAT_10f4786da);
      func_0x00010812da44();
    }
  }
  if ((bRam0000000113729bf8 & 1) == 0) {
    iVar5 = 0x13729bf8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010812da4c(&DAT_10f478707);
      func_0x00010812da44();
    }
  }
  if ((bRam0000000113729c08 & 1) == 0) {
    iVar5 = 0x13729c08;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001003a83dc(0x113729c00,&DAT_10f4786ef);
      ___cxa_guard_release(0x113729c08);
    }
  }
  if ((bRam0000000113729c18 & 1) == 0) {
    iVar5 = 0x13729c18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001003a83dc(0x113729c10,&DAT_10f47871e);
      ___cxa_guard_release(0x113729c18);
    }
  }
  plVar6 = param_1;
  FUN_10812ba3c(auStack_68);
  lVar11 = *param_2;
  if (lVar11 == lRam0000000113729b80) {
    plVar10 = (long *)param_1[0xe];
    plVar6 = param_1 + 0xf;
    param_2 = param_1 + 0x34;
    uVar4 = 1;
  }
  else {
    uVar4 = lVar11 == lRam0000000113729b90;
    if ((bool)uVar4) {
      func_0x00010812d984();
      param_2 = param_3;
    }
    else {
      uVar4 = lVar11 == lRam0000000113729ba0 || lVar11 == lRam0000000113729bb0;
      if (lVar11 == lRam0000000113729ba0 || lVar11 == lRam0000000113729bb0) {
        func_0x00010812d984();
        param_2 = param_3;
      }
      else {
        uVar4 = lVar11 == lRam0000000113729bc0;
        if ((bool)uVar4) {
          func_0x00010812d984();
          param_2 = param_3;
        }
        else {
          uVar4 = lVar11 == lRam0000000113729bd0;
          if ((bool)uVar4) {
            func_0x00010812d984();
            param_2 = param_3;
          }
          else {
            uVar4 = lVar11 == lRam0000000113729be0;
            if ((bool)uVar4) {
              func_0x00010812d9bc();
              param_2 = param_3;
            }
            else {
              uVar4 = lVar11 == lRam0000000113729bf0 || lVar11 == lRam0000000113729c00;
              if (lVar11 == lRam0000000113729bf0 || lVar11 == lRam0000000113729c00) {
                func_0x00010812d9bc();
                param_2 = param_3;
              }
              else {
                uVar4 = lVar11 == lRam0000000113729c10;
                if (!(bool)uVar4) {
                  uStack_6c = *(uint3 *)(param_1 + 0x32);
                  plVar10 = (long *)param_1[0xe];
                  FUN_108137c94(&lStack_58,param_1 + 0xf,plVar10,param_2,&uStack_6c);
                  uVar4 = lStack_58 == 1;
                  if ((bool)uVar4) {
                    *unaff_x19 = 1;
                    unaff_x19[1] = uStack_50;
                    lStack_58 = 0;
                  }
                  else {
                    func_0x00010b99f5f8(&uStack_78,&UNK_10f47baf3);
                    func_0x000104bda960(uStack_78);
                    plVar10 = (long *)param_1[0xe];
                    param_2 = param_1 + 0x34;
                    FUN_108137f50(param_1 + 0xf,plVar10,param_2,(ulong)uStack_6c);
                  }
                  plVar6 = &lStack_58;
                  func_0x00010812cb9c();
                  goto LAB_10812be0c;
                }
                func_0x00010812d9bc();
                param_2 = param_3;
              }
            }
          }
        }
      }
    }
  }
  FUN_108137f50();
LAB_10812be0c:
  func_0x00010812db50();
  func_0x00010812d908(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010812da5c();
  plVar7 = plVar6;
  func_0x00010812d930();
  uStack_c8 = extraout_x8_00;
  (**(code **)(*plVar7 + 0x48))(&lStack_d8);
  plVar7 = plStack_d0;
  uVar4 = lStack_d8 == 1;
  if ((bool)uVar4) {
    FUN_10812ba3c(auStack_e8,plVar6);
    func_0x00010812d944();
    func_0x00010812da20();
    func_0x00010812da78();
    uVar12 = 1;
    plVar7 = param_2;
  }
  else {
    plStack_d0 = (long *)0x0;
    uVar12 = 2;
  }
  *unaff_x19 = uVar12;
  unaff_x19[1] = plVar7;
  plVar8 = &lStack_d8;
  func_0x00010812cb9c();
  func_0x00010812d908(uStack_c8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  plVar9 = (long *)plVar8[0x35];
  plStack_120 = &lStack_d8;
  plStack_118 = plVar6;
  plStack_110 = plVar7;
  if ((plVar9 == (long *)0x0) ||
     ((**(code **)(*plVar9 + 0x20))(&lStack_128,plVar9,plVar10), lStack_128 == 0)) {
    puVar1 = &UNK_10f7d0ef0;
    if (*plVar10 != 0) {
      puVar1 = (undefined *)(*plVar10 + 0x18);
    }
    FUN_108350d4c(&lStack_128,plVar8[0xe],puVar1);
    if ((lStack_128 == 0) || (func_0x00010812db84(), (int)lStack_128 == 0)) {
      *extraout_x8_01 = 0;
    }
    else {
      lVar11 = 0x80;
      __Znwm();
      func_0x00010812a864();
      plVar10 = (long *)(lVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *extraout_x8_01 = lVar11;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        func_0x00010812db78();
      }
    }
    FUN_10812aea0(&lStack_128);
  }
  else {
    func_0x00010812c270(&lStack_130,plVar8[0xd],plVar10);
    FUN_108129c9c(lStack_130,0x404,&lStack_128);
    if (lStack_130 == 0) {
      lStack_130 = 0;
      lVar11 = 0;
    }
    else {
      do {
        func_0x00010812dac4();
        lVar11 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    *extraout_x8_01 = lVar11;
    FUN_10812ce6c(lStack_130);
    func_0x0001080fe800(lStack_128);
  }
  return;
}



/* Entry: 10812c0a0; end: 10812c147;  */

void FUN_10812c0a0(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined1 auStack_68 [16];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010812da5c();
  plVar5 = param_1;
  func_0x00010812d930();
  uStack_48 = extraout_x8;
  (**(code **)(*plVar5 + 0x48))(&lStack_58);
  uVar9 = uStack_50;
  uVar4 = lStack_58 == 1;
  if ((bool)uVar4) {
    FUN_10812ba3c(auStack_68,param_1);
    func_0x00010812d944();
    func_0x00010812da20();
    func_0x00010812da78();
    uVar8 = 1;
    uVar9 = param_3;
  }
  else {
    uStack_50 = 0;
    uVar8 = 2;
  }
  *unaff_x19 = uVar8;
  unaff_x19[1] = uVar9;
  plVar5 = &lStack_58;
  func_0x00010812cb9c();
  func_0x00010812d908(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    plVar6 = (long *)plVar5[0x35];
    plStack_a0 = &lStack_58;
    plStack_98 = param_1;
    uStack_90 = uVar9;
    if ((plVar6 == (long *)0x0) ||
       ((**(code **)(*plVar6 + 0x20))(&lStack_a8,plVar6,param_2), lStack_a8 == 0)) {
      puVar1 = &UNK_10f7d0ef0;
      if (*param_2 != 0) {
        puVar1 = (undefined *)(*param_2 + 0x18);
      }
      FUN_108350d4c(&lStack_a8,plVar5[0xe],puVar1);
      if ((lStack_a8 == 0) || (func_0x00010812db84(), (int)lStack_a8 == 0)) {
        *extraout_x8_00 = 0;
      }
      else {
        lVar7 = 0x80;
        __Znwm();
        func_0x00010812a864();
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *extraout_x8_00 = lVar7;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          func_0x00010812db78();
        }
      }
      FUN_10812aea0(&lStack_a8);
    }
    else {
      func_0x00010812c270(&lStack_b0,plVar5[0xd],param_2);
      FUN_108129c9c(lStack_b0,0x404,&lStack_a8);
      if (lStack_b0 == 0) {
        lStack_b0 = 0;
        lVar7 = 0;
      }
      else {
        do {
          func_0x00010812dac4();
          lVar7 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      *extraout_x8_00 = lVar7;
      FUN_10812ce6c(lStack_b0);
      func_0x0001080fe800(lStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 10812c148; end: 10812c2ab;  */

void FUN_10812c148(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int extraout_w11;
  long lStack_40;
  long lStack_38;
  
  plVar4 = *(long **)(param_2 + 0x1a8);
  if ((plVar4 == (long *)0x0) ||
     ((**(code **)(*plVar4 + 0x20))(&lStack_38,plVar4,param_3), lStack_38 == 0)) {
    puVar1 = &UNK_10f7d0ef0;
    if (*param_3 != 0) {
      puVar1 = (undefined *)(*param_3 + 0x18);
    }
    FUN_108350d4c(&lStack_38,*(undefined8 *)(param_2 + 0x70),puVar1);
    if ((lStack_38 == 0) || (func_0x00010812db84(), (int)lStack_38 == 0)) {
      *param_1 = 0;
    }
    else {
      lVar5 = 0x80;
      __Znwm();
      func_0x00010812a864();
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = lVar5;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x00010812db78();
      }
    }
    FUN_10812aea0(&lStack_38);
  }
  else {
    func_0x00010812c270(&lStack_40,*(undefined8 *)(param_2 + 0x68),param_3);
    FUN_108129c9c(lStack_40,0x404,&lStack_38);
    if (lStack_40 == 0) {
      lStack_40 = 0;
      lVar5 = 0;
    }
    else {
      do {
        func_0x00010812dac4();
        lVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar5;
    FUN_10812ce6c(lStack_40);
    func_0x0001080fe800(lStack_38);
  }
  return;
}



/* Entry: 10812c2ac; end: 10812c2b3;  */

void FUN_10812c2ac(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int extraout_w11;
  long lStack_40;
  long lStack_38;
  
  plVar4 = *(long **)(param_2 + 400);
  if ((plVar4 == (long *)0x0) ||
     ((**(code **)(*plVar4 + 0x20))(&lStack_38,plVar4,param_3), lStack_38 == 0)) {
    puVar1 = &UNK_10f7d0ef0;
    if (*param_3 != 0) {
      puVar1 = (undefined *)(*param_3 + 0x18);
    }
    FUN_108350d4c(&lStack_38,*(undefined8 *)(param_2 + 0x58),puVar1);
    if ((lStack_38 == 0) || (func_0x00010812db84(), (int)lStack_38 == 0)) {
      *param_1 = 0;
    }
    else {
      lVar5 = 0x80;
      __Znwm();
      func_0x00010812a864();
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = lVar5;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x00010812db78();
      }
    }
    FUN_10812aea0(&lStack_38);
  }
  else {
    func_0x00010812c270(&lStack_40,*(undefined8 *)(param_2 + 0x50),param_3);
    FUN_108129c9c(lStack_40,0x404,&lStack_38);
    if (lStack_40 == 0) {
      lStack_40 = 0;
      lVar5 = 0;
    }
    else {
      do {
        func_0x00010812dac4();
        lVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar5;
    FUN_10812ce6c(lStack_40);
    func_0x0001080fe800(lStack_38);
  }
  return;
}



/* Entry: 10812c2b4; end: 10812c323;  */

void FUN_10812c2b4(undefined8 param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010812da5c();
  func_0x00010812da8c();
  func_0x00010812da2c(extraout_x8,param_1);
  FUN_10812bb20();
  func_0x00010812da54();
  return;
}



/* Entry: 10812c324; end: 10812c36f;  */

void FUN_10812c324(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010812da8c();
  FUN_108137f50(param_1,param_2 + 0x78,*(undefined8 *)(param_2 + 0x70),param_3,param_4 & 0xffffff);
  func_0x00010812da54();
  return;
}



/* Entry: 10812c370; end: 10812c393;  */

void FUN_10812c370(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_60;
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  
  lVar1 = *param_2;
  func_0x00010812da5c(*(undefined4 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),param_1,param_2,
                      (ulong)*(uint3 *)(*(long *)(lVar1 + 0x20) + 0x70));
  func_0x00010812da38();
  uStack_44 = param_5;
  FUN_10812ba3c(auStack_58);
  lVar1 = unaff_x19 + 0x160;
  FUN_10812c580(lVar1,&uStack_44);
  if (*(long *)(unaff_x19 + 0x160) + *(long *)(unaff_x19 + 0x178) == lVar1) {
    FUN_10812c430(&uStack_60);
    FUN_10812c624(unaff_x19 + 0x160,&uStack_44);
    FUN_10812c64c();
    func_0x00010812d9d4();
    FUN_10812cca8(uStack_60);
  }
  else {
    func_0x00010812d9d4();
  }
  func_0x00010812da78();
  return;
}



/* Entry: 10812c394; end: 10812c42f;  */

void FUN_10812c394(void)

{
  long lVar1;
  undefined4 in_w5;
  long unaff_x19;
  undefined8 uStack_60;
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  
  func_0x00010812da5c();
  func_0x00010812da38();
  uStack_44 = in_w5;
  FUN_10812ba3c(auStack_58);
  lVar1 = unaff_x19 + 0x160;
  FUN_10812c580(lVar1,&uStack_44);
  if (*(long *)(unaff_x19 + 0x160) + *(long *)(unaff_x19 + 0x178) == lVar1) {
    FUN_10812c430(&uStack_60);
    FUN_10812c624(unaff_x19 + 0x160,&uStack_44);
    FUN_10812c64c();
    func_0x00010812d9d4();
    FUN_10812cca8(uStack_60);
  }
  else {
    func_0x00010812d9d4();
  }
  func_0x00010812da78();
  return;
}



/* Entry: 10812c430; end: 10812c57f;  */

long * FUN_10812c430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lStack_f8;
  long lStack_f0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010812d930();
  puVar7 = *(undefined8 **)(lVar2 + 0x70);
  lVar2 = lVar2 + 0x78;
  uStack_38 = extraout_x8;
  FUN_108138460(&plStack_a0,lVar2,puVar7);
  iVar1 = (int)lVar2;
  if (plStack_a0 == (long *)0x0) {
    auStack_98[0] = 0;
    uStack_40 = 0;
    func_0x000105c3b044();
    if (iVar1 != 0) {
      FUN_108117408(auStack_98,&UNK_10f47bb09);
    }
    lStack_c8 = CONCAT44(lStack_c8._4_4_,0x50190);
    puVar7 = (undefined8 *)0x0;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x40))
              (&lStack_a8,*(long **)(param_1 + 0x70),0,&lStack_c8,0,0,param_3);
    if (lStack_a8 == 0) {
      *unaff_x19 = 0;
    }
    else {
      lStack_b0 = 0x1138270b0;
      func_0x00010812daa4();
      lVar3 = lStack_a8;
      func_0x0001003a8364();
      lVar2 = lStack_b0 + 8;
      lStack_c8 = lVar2;
      _strlen();
      lStack_c0 = lVar2;
      func_0x0001003a8458(&uStack_b8,lVar3,&lStack_c8);
      puVar7 = &uStack_b8;
      func_0x0001081380a0(param_1 + 0x78,puVar7);
      func_0x0001003a8cb8(uStack_b8);
      func_0x00010812db68();
    }
    func_0x0001081298a0(&lStack_a8);
    FUN_1080e8dd4(auStack_98);
  }
  else {
    *unaff_x19 = plStack_a0;
    plStack_a0 = (long *)0x0;
  }
  plVar4 = plStack_a0;
  FUN_10812cca8();
  func_0x00010812d908(uStack_38);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar5 = plVar4;
  lStack_f0 = param_1;
  FUN_10812cee0();
  plVar6 = plVar4;
  FUN_10812cf04(plVar4,puVar7,plVar5,&lStack_f8);
  if ((int)plVar6 == 0) {
    plVar4 = (long *)(*plVar4 + plVar4[3]);
  }
  else {
    plVar4 = (long *)(*plVar4 + lStack_f8);
  }
  return plVar4;
}



/* Entry: 10812c580; end: 10812c5af;  */

long FUN_10812c580(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10812cee0();
  plVar2 = param_1;
  FUN_10812cf04(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10812c5b0; end: 10812c623;  */

long FUN_10812c5b0(long param_1)

{
  undefined1 in_ZR;
  undefined8 in_x4;
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_50;
  
  func_0x00010812da5c();
  func_0x00010812d91c();
  func_0x00010812db14();
  func_0x000108137fa0();
  func_0x00010812db90();
  uVar2 = uStack_50;
  if ((bool)in_ZR) {
    func_0x00010812d944();
    func_0x00010812da20();
    uVar1 = 1;
    uVar2 = in_x4;
  }
  else {
    uStack_50 = 0;
    uVar1 = 2;
  }
  *extraout_x8 = uVar1;
  extraout_x8[1] = uVar2;
  func_0x00010812da04();
  func_0x00010812d8f0();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10812c624;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10812cfc4(auStack_88);
  return lStack_80 + 8;
}



/* Entry: 10812c624; end: 10812c64b;  */

long FUN_10812c624(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10812cfc4(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10812c64c; end: 10812c68f;  */

long * FUN_10812c64c(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010812dac4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10812cca8();
  }
  return param_1;
}



/* Entry: 10812c690; end: 10812c75f;  */

void FUN_10812c690(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x23;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long alStack_58 [3];
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar7 = (undefined4)param_2;
  func_0x00010812d91c();
  FUN_10812ba3c(alStack_58);
  func_0x00010812da78();
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  uVar6 = *(undefined8 *)(param_3 + 0x70);
  FUN_10812cccc();
  __Znwm(0x170);
  func_0x00010812dafc();
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x00010812d974();
    } while (extraout_w10 != 0);
  }
  FUN_10812d568(unaff_x23 + 0x18,uVar6,uVar2,param_3);
  func_0x0001080dafac(param_3);
  func_0x00010812da68();
  if ((alStack_58[0] != 0) && (*(long *)(alStack_58[0] + 0x10) != 0)) {
    do {
      func_0x00010812d974();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = alStack_58[0];
  FUN_10812cb90();
  func_0x000107475618(param_3);
  func_0x00010812d8f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010812da38();
  func_0x00010b9a67cc(&plStack_b8,uVar6,0x20,1);
  if (lStack_b0 - (long)plStack_b8 == 8) {
    FUN_10812ba3c(&puStack_c8,param_1);
    plVar5 = plStack_b8;
    func_0x00010812d9a8(&DAT_10f4785ae);
    if (((((ulong)plVar5 & 1) == 0) &&
        (plVar5 = plStack_b8, func_0x00010812d9a8(&DAT_10f4785b5,0x41c80000),
        ((ulong)plVar5 & 1) == 0)) &&
       (plVar5 = plStack_b8, func_0x00010812d9a8(&DAT_10f4785bc,0x41980000),
       ((ulong)plVar5 & 1) == 0)) {
      plVar5 = plStack_b8;
      func_0x00010812d9a8("body",0x41880000);
      uVar7 = 0x41600000;
      uVar9 = 0;
      if (((ulong)plVar5 & 1) == 0) {
        func_0x00010812db50(0x41600000);
        goto LAB_10812c840;
      }
    }
    func_0x00010812dad4();
    func_0x00010812da80();
    FUN_10812bb0c();
    func_0x00010812db50();
  }
  else {
LAB_10812c840:
    lStack_d8 = *plStack_b8;
    if (lStack_d8 != 0) {
      piVar1 = (int *)(lStack_d8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((ulong)(lStack_b0 - (long)plStack_b8) < 9) {
      fVar8 = 12.0;
    }
    else {
      func_0x00010b9a8e18(&puStack_c8,plStack_b8 + 1);
      func_0x00010b9a92f0(&puStack_c8);
      func_0x00010b9a8d98(&puStack_c8);
      if (0x10 < (ulong)(lStack_b0 - (long)plStack_b8)) {
        func_0x0001003ac774(&uStack_e0,plStack_b8 + 2);
        puStack_c8 = &DAT_10f4785c3;
        uStack_c0 = 8;
        func_0x00010b9a5ea8(&uStack_e0,&puStack_c8);
        func_0x0001003a8cb8(uStack_e0);
      }
      fVar8 = (float)(double)CONCAT44(uVar9,uVar7);
    }
    func_0x00010812da80(fVar8);
    FUN_10812c0a0();
    func_0x00010812db70();
  }
  func_0x000104bfe1e0(&plStack_b8);
  return;
}



/* Entry: 10812c760; end: 10812c927;  */

void FUN_10812c760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  func_0x00010812da38();
  func_0x00010b9a67cc(&plStack_58,param_3,0x20,1);
  if (lStack_50 - (long)plStack_58 == 8) {
    FUN_10812ba3c(&puStack_68);
    plVar4 = plStack_58;
    func_0x00010812d9a8(&DAT_10f4785ae);
    if (((((ulong)plVar4 & 1) == 0) &&
        (plVar4 = plStack_58, func_0x00010812d9a8(&DAT_10f4785b5,0x41c80000),
        ((ulong)plVar4 & 1) == 0)) &&
       (plVar4 = plStack_58, func_0x00010812d9a8(&DAT_10f4785bc,0x41980000),
       ((ulong)plVar4 & 1) == 0)) {
      plVar4 = plStack_58;
      func_0x00010812d9a8("body",0x41880000);
      uVar5 = 0x41600000;
      uVar7 = 0;
      if (((ulong)plVar4 & 1) == 0) {
        func_0x00010812db50(0x41600000);
        goto LAB_10812c840;
      }
    }
    func_0x00010812dad4();
    func_0x00010812da80();
    FUN_10812bb0c();
    func_0x00010812db50();
  }
  else {
LAB_10812c840:
    lStack_78 = *plStack_58;
    if (lStack_78 != 0) {
      piVar1 = (int *)(lStack_78 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((ulong)(lStack_50 - (long)plStack_58) < 9) {
      fVar6 = 12.0;
    }
    else {
      func_0x00010b9a8e18(&puStack_68,plStack_58 + 1);
      func_0x00010b9a92f0(&puStack_68);
      func_0x00010b9a8d98(&puStack_68);
      if (0x10 < (ulong)(lStack_50 - (long)plStack_58)) {
        func_0x0001003ac774(&uStack_80,plStack_58 + 2);
        puStack_68 = &DAT_10f4785c3;
        uStack_60 = 8;
        func_0x00010b9a5ea8(&uStack_80,&puStack_68);
        func_0x0001003a8cb8(uStack_80);
      }
      fVar6 = (float)(double)CONCAT44(uVar7,uVar5);
    }
    func_0x00010812da80(fVar6);
    FUN_10812c0a0();
    func_0x00010812db70();
  }
  func_0x000104bfe1e0(&plStack_58);
  return;
}



/* Entry: 10812c928; end: 10812c967;  */

void FUN_10812c928(void)

{
  func_0x00010812da38();
  func_0x00010812da8c();
  func_0x00010812dad4();
  func_0x00010812da80(0x41400000,0x3ff0000000000000);
  FUN_10812bb0c();
  func_0x00010812da54();
  return;
}



/* Entry: 10812c968; end: 10812c9ab;  */

void FUN_10812c968(void)

{
  func_0x00010812da5c();
  func_0x00010812da38();
  func_0x00010812da8c();
  func_0x00010812dad4();
  func_0x00010812da80();
  func_0x00010812da2c();
  FUN_10812bb0c();
  func_0x00010812da54();
  return;
}



/* Entry: 10812c9ac; end: 10812ca0f;  */

void FUN_10812c9ac(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_38;
  
  func_0x00010812f5f0(&uStack_38,param_2,param_5);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3 & 0xffffff,param_4,&uStack_38);
  func_0x0001080fe800(uStack_38);
  return;
}



/* Entry: 10812ca10; end: 10812cb13;  */

void FUN_10812ca10(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  
  FUN_10812b810(auStack_50,param_1,0,0);
  func_0x0001081381e4(param_1 + 0x78,param_2,param_3 & 0xffffff,param_4,param_5);
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x178);
    if (uVar1 < 0x80) {
      if (uVar1 != 0) {
        lVar3 = 8;
        for (uVar2 = 0; uVar2 != uVar1; uVar2 = uVar2 + 1) {
          if (-1 < *(char *)(*(long *)(param_1 + 0x160) + uVar2)) {
            FUN_10812cc84(*(long *)(param_1 + 0x168) + lVar3);
            uVar1 = *(ulong *)(param_1 + 0x178);
          }
          lVar3 = lVar3 + 0x10;
        }
        *(undefined8 *)(param_1 + 0x170) = 0;
        _memset(*(undefined8 *)(param_1 + 0x160),0x80,uVar1 + 8);
        *(undefined1 *)(*(long *)(param_1 + 0x160) + uVar1) = 0xff;
        uVar1 = *(ulong *)(param_1 + 0x178);
        lVar3 = 6;
        if (uVar1 != 7) {
          lVar3 = uVar1 - (uVar1 >> 3);
        }
        *(long *)(param_1 + 0x188) = lVar3 - *(long *)(param_1 + 0x170);
      }
    }
    else {
      FUN_10812cb14(param_1 + 0x160);
    }
  }
  func_0x00010812da54();
  return;
}



/* Entry: 10812cb14; end: 10812cb8f;  */

void FUN_10812cb14(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        FUN_10812cc84(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10812cb90; end: 10812cbc3;  */

void FUN_10812cb90(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10812cbc4; end: 10812cbe7;  */

undefined8 * FUN_10812cbc4(undefined8 *param_1)

{
  FUN_10812cbe8(*param_1);
  return param_1;
}



/* Entry: 10812cbe8; end: 10812cc0b;  */

void FUN_10812cbe8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010812da1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812cc0c; end: 10812cc2f;  */

undefined8 * FUN_10812cc0c(undefined8 *param_1)

{
  FUN_10812cc30(*param_1);
  return param_1;
}



/* Entry: 10812cc30; end: 10812cc83;  */

void FUN_10812cc30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010812cc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10812cc84; end: 10812cca7;  */

undefined8 * FUN_10812cc84(undefined8 *param_1)

{
  FUN_10812cca8(*param_1);
  return param_1;
}



/* Entry: 10812cca8; end: 10812cccb;  */

void FUN_10812cca8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010812da1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812cccc; end: 10812ccfb;  */

undefined1 *
FUN_10812cccc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((param_1 != (undefined1 *)0x0) &&
     (puVar1 = param_1, func_0x00010b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    pcStack_28 = FUN_10812ccfc;
    puVar2 = &uStack_31;
    puStack_30 = &stack0xfffffffffffffff0;
    FUN_10812cd30(puVar2,puVar1,param_2,param_3,param_4,param_5);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10812ccfc; end: 10812cd2f;  */

void FUN_10812ccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_10812cd30(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10812cd30; end: 10812cdc7;  */

undefined8 *
FUN_10812cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 auStack_60 [2];
  long lStack_50;
  
  puVar2 = auStack_60;
  func_0x00010812d91c();
  FUN_1081299e0(auStack_60,1);
  FUN_10812cdc8(lStack_50,param_3,param_4,param_5,param_6,param_7);
  lVar1 = lStack_50;
  lStack_50 = 0;
  FUN_1081299c4(param_1,lVar1 + 0x18);
  FUN_108129b20();
  func_0x00010812d8f0();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a26048;
  puVar2[1] = 0;
  func_0x00010812cdfc(puVar2 + 3);
  return puVar2;
}



/* Entry: 10812cdc8; end: 10812ce6b;  */

undefined8 * FUN_10812cdc8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a26048;
  param_1[1] = 0;
  func_0x00010812cdfc(param_1 + 3);
  return param_1;
}



/* Entry: 10812ce6c; end: 10812ce8f;  */

void FUN_10812ce6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010812da1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812ce90; end: 10812cedf;  */

long FUN_10812ce90(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10812cf04();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10812cee0; end: 10812cf03;  */

void FUN_10812cee0(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10812cfa4(&lStack_18);
  return;
}



/* Entry: 10812cf04; end: 10812cfa3;  */

bool FUN_10812cf04(long *param_1,int *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    iVar1 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar5 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      *param_4 = uVar8;
      if (*(int *)(param_1[1] + uVar8 * 0x10) == iVar1) goto LAB_10812cf98;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10812cf98:
  return uVar6 != 0;
}



/* Entry: 10812cfa4; end: 10812cfc3;  */

void FUN_10812cfa4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_2);
  return;
}



/* Entry: 10812cfc4; end: 10812d19f;  */

void FUN_10812cfc4(long *param_1,long *param_2,int *param_3)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  plVar3 = param_2;
  FUN_10812cee0();
  lVar7 = 0;
  uVar8 = (ulong)plVar3 >> 7;
  lVar5 = *param_2;
  while( true ) {
    uVar8 = uVar8 & param_2[3];
    uVar11 = *(ulong *)(lVar5 + uVar8);
    uVar9 = uVar11 ^ ((ulong)plVar3 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar10 = param_2[1];
      plVar4 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_2[3]);
      if (*(int *)(lVar10 + (long)plVar4 * 0x10) == *param_3) {
        uVar6 = 0;
        goto LAB_10812d07c;
      }
    }
    if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  }
  plVar4 = param_2;
  func_0x00010812d0d8(param_2,plVar3);
  lVar7 = *param_2;
  piVar1 = (int *)(param_2[1] + (long)plVar4 * 0x10);
  *piVar1 = *param_3;
  piVar1[2] = 0;
  piVar1[3] = 0;
  *(byte *)(lVar7 + (long)plVar4) = (byte)plVar3 & 0x7f;
  func_0x00010812dae4();
  lVar5 = *param_2;
  lVar10 = param_2[1];
  uVar6 = 1;
LAB_10812d07c:
  *param_1 = lVar5 + (long)plVar4;
  param_1[1] = lVar10 + (long)plVar4 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10812d1a0; end: 10812d1df;  */

ulong FUN_10812d1a0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10812d1e0; end: 10812d4a3;  */

void FUN_10812d1e0(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10812d4a4();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10812d1a0(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10812d4c4(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10812d4a4; end: 10812d4c3;  */

void FUN_10812d4a4(undefined4 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 10812d4c4; end: 10812d4df;  */

undefined8 * FUN_10812d4c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  *puVar1 = 0;
  FUN_10812cca8(*puVar1);
  return puVar1;
}



/* Entry: 10812d4e0; end: 10812d53f;  */

void FUN_10812d4e0(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    lStack_20 = param_2;
    lStack_18 = param_3;
    if (param_3 != 0) {
      do {
        func_0x00010812d974();
      } while (extraout_w10 != 0);
    }
    func_0x0001003a8180(param_2 + 8,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10812d540; end: 10812d543;  */

void FUN_10812d540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a26268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10812d544; end: 10812d557;  */

void FUN_10812d544(void)

{
  FUN_10812d8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812d558; end: 10812d567;  */

void FUN_10812d558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010812d560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10812d568; end: 10812d5e3;  */

undefined8 * FUN_10812d568(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int extraout_w10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a262b8;
  func_0x000108137c08(param_1 + 3,param_3,0);
  param_1[0x20] = param_2;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x10) != 0)) {
    do {
      func_0x00010812d974();
    } while (extraout_w10 != 0);
  }
  param_1[0x21] = param_4;
  param_1[0x22] = 0x32aaaba7;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  return param_1;
}



/* Entry: 10812d5e4; end: 10812d5e7;  */

undefined8 * FUN_10812d5e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a262b8;
  func_0x00010b9a1f08(param_1 + 0x22);
  func_0x0001080e7680(param_1 + 0x21);
  FUN_108137c50(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10812d5e8; end: 10812d5fb;  */

void FUN_10812d5e8(void)

{
  FUN_10812d864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812d5fc; end: 10812d60f;  */

void FUN_10812d5fc(long param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010812d60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x108) + 0x30))
            (*(long **)(param_1 + 0x108),param_2,param_3 & 0xffffff);
  return;
}



/* Entry: 10812d610; end: 10812d72b;  */

void FUN_10812d610(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010812db38();
  func_0x0001081381e4(param_1 + 0x18,param_2,param_3 & 0xffffff,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x110);
  return;
}



/* Entry: 10812d72c; end: 10812d863;  */

long * FUN_10812d72c(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  func_0x00010812da38();
  func_0x00010812d91c();
  func_0x00010812db38();
  uVar2 = *(ulong *)(unaff_x19 + 0x100);
  plVar1 = (long *)(unaff_x19 + 0x18);
  uVar3 = param_2;
  FUN_108137c94(auStack_48,plVar1,uVar2,param_2,0);
  func_0x00010812db90();
  if ((bool)in_ZR) {
    *unaff_x20 = extraout_x8;
    unaff_x20[1] = uStack_40;
    uStack_40 = 0;
    func_0x00010812da04();
    func_0x00010812dab4();
    param_2 = uVar2;
  }
  else {
    func_0x00010812da04();
    func_0x00010812dab4();
    plVar1 = *(long **)(unaff_x19 + 0x108);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  func_0x00010812d8f0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010812da38();
    func_0x00010812d91c();
    func_0x00010812db38();
    plVar1 = (long *)(unaff_x19 + 0x18);
    FUN_108137f50(auStack_98,plVar1,*(undefined8 *)(unaff_x19 + 0x100),param_2,uVar3 & 0xffffff);
    func_0x00010812db90();
    if ((bool)in_ZR) {
      *unaff_x20 = extraout_x8_00;
      unaff_x20[1] = uStack_90;
      uStack_90 = 0;
      func_0x00010812da04();
      func_0x00010812dab4();
    }
    else {
      func_0x00010812da04();
      func_0x00010812dab4();
      plVar1 = *(long **)(unaff_x19 + 0x108);
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2,uVar3 & 0xffffff);
    }
    func_0x00010812d8f0();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      *plVar1 = (long)&PTR_FUN_110a262b8;
      func_0x00010b9a1f08(plVar1 + 0x22);
      func_0x0001080e7680(plVar1 + 0x21);
      FUN_108137c50(plVar1 + 3);
      func_0x0001003a81d8(plVar1 + 1);
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 10812d864; end: 10812d8af;  */

undefined8 * FUN_10812d864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a262b8;
  func_0x00010b9a1f08(param_1 + 0x22);
  func_0x0001080e7680(param_1 + 0x21);
  FUN_108137c50(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10812d8b0; end: 10812d8bf;  */

void FUN_10812d8b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a26268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10812d8c0; end: 10812d8ef;  */

undefined8 * FUN_10812d8c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  __ZNSt3__15mutex4lockEv(param_2);
  return param_1;
}



/* Entry: 10812d8f0; end: 10812dc8f;  */

void FUN_10812d8f0(void)

{
  return;
}



/* Entry: 10812dc90; end: 10812e297;  */

void FUN_10812dc90(long *param_1,undefined *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  long *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  long *extraout_x8_17;
  long *extraout_x8_18;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  long lVar5;
  
  if ((bRam0000000113729c28 & 1) == 0) {
    iVar4 = 0x13729c28;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001003a83dc(&DAT_113729c20,&DAT_10f37767c);
      ___cxa_guard_release(0x113729c28);
    }
  }
  if ((bRam0000000113729c38 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8;
    if (extraout_w9 != 0) {
      param_2 = &DAT_10f47bb2f;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_00;
    }
  }
  if ((bRam0000000113729c48 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_01;
    if (extraout_w9_00 != 0) {
      param_2 = &DAT_10f47bb34;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_02;
    }
  }
  if ((bRam0000000113729c58 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_03;
    if (extraout_w9_01 != 0) {
      param_2 = &UNK_10f47bb3f;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_04;
    }
  }
  if ((bRam0000000113729c68 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_05;
    if (extraout_w9_02 != 0) {
      param_2 = &UNK_10f47bb45;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_06;
    }
  }
  if ((bRam0000000113729c78 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_07;
    if (extraout_w9_03 != 0) {
      param_2 = &UNK_10f47bb4c;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_08;
    }
  }
  if ((bRam0000000113729c88 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_09;
    if (extraout_w9_04 != 0) {
      param_2 = &UNK_10f47bb53;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_10;
    }
  }
  if ((bRam0000000113729c98 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_11;
    if (extraout_w9_05 != 0) {
      param_2 = &UNK_10f47bb5c;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_12;
    }
  }
  if ((bRam0000000113729ca8 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_13;
    if (extraout_w9_06 != 0) {
      param_2 = &DAT_10f47bb61;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_14;
    }
  }
  if ((bRam0000000113729cb8 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_15;
    if (extraout_w9_07 != 0) {
      param_2 = &UNK_10f47bb6b;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_16;
    }
  }
  if ((bRam0000000113729cc8 & 1) == 0) {
    FUN_10812e478();
    func_0x00010812e488();
    param_1 = extraout_x8_17;
    if (extraout_w9_08 != 0) {
      param_2 = &DAT_10f47bb71;
      func_0x00010812e4d0();
      func_0x00010812e4c8();
      func_0x00010812e4e4();
      param_1 = extraout_x8_18;
    }
  }
  lVar5 = *(long *)(&PTR_DAT_110a26328)[(ulong)param_2 & 0xffffffff];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 10812e298; end: 10812e2db;  */

bool FUN_10812e298(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  iVar1 = (int)&uStack_20;
  if (param_2 == param_4) {
    uStack_20 = param_1;
    lStack_18 = param_2;
    func_0x000107c27978(&uStack_20,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10812e2dc; end: 10812e3af;  */

void FUN_10812e2dc(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 extraout_w8;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_2;
  FUN_10812e298(param_2,param_3,&UNK_10f47bb45,6);
  iVar1 = (int)uVar2;
  if (((uVar2 & 1) == 0) && (func_0x00010812e498(), iVar1 == 0)) {
    func_0x00010812e4a8();
    if (iVar1 == 0) {
      func_0x00010812e498();
      if (iVar1 == 0) {
        func_0x0001003a8364();
        uStack_40 = param_2;
        uStack_38 = param_3;
        func_0x0001003a91d4(&UNK_10f47bbcc);
        func_0x00010812e510();
        func_0x00010812e520();
        func_0x00010812e530();
        func_0x00010812e4fc();
        func_0x000104bda960(0);
        func_0x0001003a8cb8(uStack_48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      }
      else {
        func_0x00010812e4f0();
        *(undefined1 *)(param_1 + 8) = 2;
      }
    }
    else {
      func_0x00010812e4f0();
      *(undefined1 *)(param_1 + 8) = extraout_w8;
    }
  }
  else {
    func_0x00010812e4f0();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10812e3b0; end: 10812e44f;  */

bool FUN_10812e3b0(char *param_1,char *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}



/* Entry: 10812e450; end: 10812e477;  */

/* WARNING: Possible PIC construction at 0x00010812e464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010812e468) */

long FUN_10812e450(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10812e478; end: 10812e53b;  */

void FUN_10812e478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_acquire_110346be0)();
  return;
}



/* Entry: 10812e53c; end: 10812f37f;  */

void FUN_10812e53c(long param_1)

{
  func_0x00010812f2d8();
  if (param_1 != 0) {
    func_0x0001096f8de8();
  }
  return;
}



/* Entry: 10812f380; end: 10812f427;  */

undefined8 * FUN_10812f380(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a263c0;
  func_0x0001003a8c94(param_1 + 4);
  func_0x00010812cb9c(param_1 + 2);
  return param_1;
}


