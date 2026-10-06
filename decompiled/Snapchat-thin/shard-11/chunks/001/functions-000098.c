/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10818a798; end: 10818a7f3;  */

long * FUN_10818a798(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  FUN_10818acf0();
  plVar1 = param_1;
  if (param_2 == param_1) {
    return param_2;
  }
  do {
    do {
      plVar1 = plVar1 + 1;
      if (plVar1 == param_2) {
        return param_1;
      }
    } while (*plVar1 == *param_3);
    *param_1 = *plVar1;
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 10818a7f4; end: 10818a8b3;  */

void FUN_10818a7f4(long param_1,int param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  uStack_21 = (undefined1)param_2;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((param_2 != 0 && ((uVar2 >> 3 & 1) == 0)))) {
      if ((param_2 != 0) && ((uVar2 & 1) == 0)) {
        uVar4 = uVar2 | 8;
        *(short *)(param_1 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 10818a8b4; end: 10818a9af;  */

long * FUN_10818a8b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long param_6,undefined8 param_7)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [12];
  byte bStack_34;
  
  func_0x00010818add8(auStack_40);
  if ((bStack_34 & 1) == 0) {
    uVar1 = *(ushort *)(param_5 + 5);
    if ((uVar1 >> 2 & 1) != 0) {
      if ((param_6 == 0) || ((uVar1 & 10) == 0)) {
        (**(code **)(*param_5 + 0x18))(param_5,param_6,param_7);
        *(undefined4 *)(param_5 + 3) = param_1;
        *(undefined4 *)((long)param_5 + 0x1c) = param_2;
        *(undefined4 *)(param_5 + 4) = param_3;
        *(undefined4 *)((long)param_5 + 0x24) = param_4;
      }
      else {
        lStack_48 = param_5[4];
        lVar3 = param_5[3];
        if ((uVar1 & 2) != 0) {
          param_6 = 0;
        }
        lStack_50 = lVar3;
        (**(code **)(*param_5 + 0x18))(param_5,param_6,param_7);
        *(int *)(param_5 + 3) = (int)lVar3;
        *(undefined4 *)((long)param_5 + 0x1c) = param_2;
        *(undefined4 *)(param_5 + 4) = param_3;
        *(undefined4 *)((long)param_5 + 0x24) = param_4;
        func_0x00010818adcc();
        plVar2 = param_5 + 3;
        FUN_10818a9b0(plVar2,&lStack_50);
        if ((int)plVar2 != 0) {
          func_0x00010818adcc();
        }
      }
      *(ushort *)(param_5 + 5) = *(ushort *)(param_5 + 5) & 0xfff3;
    }
  }
  func_0x00010818a9f8(auStack_40);
  return param_5 + 3;
}



/* Entry: 10818a9b0; end: 10818a9c7;  */

uint FUN_10818a9b0(uint param_1)

{
  FUN_10815cc68();
  return param_1 ^ 1;
}



/* Entry: 10818a9c8; end: 10818aa27;  */

void FUN_10818a9c8(long *param_1,long param_2,uint param_3)

{
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(bool *)((long)param_1 + 0xc) = (param_3 & *(ushort *)(param_2 + 0x28) >> 2 & 0xf) != 0;
  *(ushort *)(param_2 + 0x28) = *(ushort *)(param_2 + 0x28) | (ushort)((param_3 & 0xf) << 2);
  return;
}



/* Entry: 10818aa28; end: 10818aa5b;  */

undefined8 FUN_10818aa28(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10818aa5c(&uStack_28);
  return param_1;
}



/* Entry: 10818aa5c; end: 10818aa73;  */

void FUN_10818aa5c(undefined8 *param_1)

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



/* Entry: 10818aa74; end: 10818aa87;  */

void FUN_10818aa74(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f47dace;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10818aa88; end: 10818ab07;  */

void FUN_10818aa88(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 10818ab08; end: 10818ab2b;  */

void FUN_10818ab08(void)

{
  FUN_10818ab2c();
  return;
}



/* Entry: 10818ab2c; end: 10818ab47;  */

long * FUN_10818ab2c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10818ab74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818ab48; end: 10818ab73;  */

long * FUN_10818ab48(long *param_1)

{
  FUN_10818ab74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818ab74; end: 10818ab97;  */

void FUN_10818ab74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10818ab98; end: 10818abcf;  */

undefined8 * FUN_10818ab98(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x00010818ade4();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10818abd0();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10818abd0; end: 10818ac23;  */

undefined8 FUN_10818abd0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010818ad48();
  func_0x00010818adb4();
  if (param_2 != 0) {
    FUN_10818ab08();
  }
  func_0x00010818ad98();
  func_0x00010818ad64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010818ad70();
  return uVar1;
}



/* Entry: 10818ac24; end: 10818ac63;  */

long * FUN_10818ac24(long *param_1,long *param_2)

{
  undefined1 in_CY;
  long *plVar1;
  long *unaff_x19;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_10818aa74();
  func_0x00010818ade4();
  if ((bool)in_CY) {
    plVar1 = unaff_x19;
    FUN_10818ac9c();
  }
  else {
    plVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = (long)plVar1;
  return plVar1 + -1;
}



/* Entry: 10818ac64; end: 10818ac9b;  */

undefined8 * FUN_10818ac64(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x00010818ade4();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10818ac9c();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10818ac9c; end: 10818acef;  */

undefined8 FUN_10818ac9c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010818ad48();
  func_0x00010818adb4();
  if (param_2 != 0) {
    FUN_10818ab08();
  }
  func_0x00010818ad98();
  func_0x00010818ad64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010818ad70();
  return uVar1;
}



/* Entry: 10818acf0; end: 10818ad0f;  */

void FUN_10818acf0(void)

{
  FUN_10818ad10();
  return;
}



/* Entry: 10818ad10; end: 10818adf7;  */

void FUN_10818ad10(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 10818adf8; end: 10818ae6f;  */

undefined8 * FUN_10818adf8(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = *param_3;
  *param_3 = 0;
  FUN_1081884a0(param_2,&uStack_38,0);
  FUN_108154cb4(&uStack_38);
  *param_2 = &PTR_DAT_110a2bc00;
  *(undefined4 *)(param_2 + 7) = param_1;
  return param_2;
}



/* Entry: 10818ae70; end: 10818af3f;  */

void FUN_10818ae70(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_150 [120];
  float fStack_d8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [136];
  
  if (0.0 < *(float *)(param_1 + 0x38)) {
    if (1.0 <= *(float *)(param_1 + 0x38)) {
      plVar1 = *(long **)(param_1 + 0x30);
      if ((((*(ushort *)(plVar1 + 5) >> 6 & 1) == 0) &&
          (*(float *)(plVar1 + 3) < *(float *)(plVar1 + 4))) &&
         (*(float *)((long)plVar1 + 0x1c) < *(float *)((long)plVar1 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x00010818c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        return;
      }
      return;
    }
    FUN_10818ccbc(auStack_150,param_2);
    fStack_d8 = *(float *)(param_1 + 0x38) * fStack_d8;
    FUN_1081660c4(auStack_c0,auStack_150);
    FUN_10818cd40(auStack_150);
    FUN_1081885d4(param_1,param_2,auStack_b8);
    FUN_10818cd40(auStack_c0);
  }
  return;
}



/* Entry: 10818af40; end: 10818af7f;  */

long * FUN_10818af40(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(float *)(param_1 + 0x38) <= 0.0) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 10818af80; end: 10818afdb;  */

void FUN_10818af80(void)

{
  FUN_108188544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818afdc; end: 10818b15b;  */

void FUN_10818afdc(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  bVar1 = *(byte *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x44) = 0x40800000;
  *(uint *)(param_1 + 9) = (uint)bVar1;
  FUN_1083762f4(param_1,*(undefined4 *)((long)param_2 + 0x3c));
  if (*(byte *)(param_2 + 8) < 3) {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffff3f | (uint)*(byte *)(param_2 + 8) << 6
    ;
  }
  if (0.0 <= *(float *)(param_2 + 6)) {
    *(float *)(param_1 + 8) = *(float *)(param_2 + 6);
  }
  if (0.0 <= *(float *)((long)param_2 + 0x34)) {
    *(float *)((long)param_1 + 0x44) = *(float *)((long)param_2 + 0x34);
  }
  if (*(byte *)((long)param_2 + 0x41) < 3) {
    *(uint *)(param_1 + 9) =
         *(uint *)(param_1 + 9) & 0xffffffcf | (uint)*(byte *)((long)param_2 + 0x41) << 4;
  }
  if (*(uint *)((long)param_2 + 0x44) < 3) {
    *(uint *)(param_1 + 9) =
         *(uint *)(param_1 + 9) & 0xfffffff3 | *(uint *)((long)param_2 + 0x44) << 2;
  }
  (**(code **)(*param_2 + 0x20))(param_2,param_1);
  puVar2 = param_1;
  FUN_108188360();
  fVar3 = *(float *)((long)param_2 + 0x2c);
  fVar4 = 1.0;
  if (fVar3 <= 0.0 && fVar3 <= 1.0) {
    fVar4 = 0.0;
  }
  if (0.0 < fVar3 && fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  fVar4 = (float)NEON_fminnm((float)(double)(long)(fVar4 * (float)((ulong)puVar2 & 0xffffffff) + 0.5
                                                  ),0x4effffff);
  if (fVar4 <= -2.1474835e+09) {
    fVar4 = -2.1474835e+09;
  }
  fVar3 = 1.0;
  if ((float)(uint)(int)fVar4 * 0.003921569 <= 1.0) {
    fVar3 = (float)(uint)(int)fVar4 * 0.003921569;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)((long)param_1 + 0x3c) = fVar3;
  return;
}



/* Entry: 10818b15c; end: 10818b1bf;  */

void FUN_10818b15c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  func_0x00010818b190();
  *param_1 = uVar1;
  return;
}



/* Entry: 10818b1c0; end: 10818b1e3;  */

undefined8 FUN_10818b1c0(void)

{
  return 0;
}



/* Entry: 10818b1e4; end: 10818b267;  */

void FUN_10818b1e4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x50;
    __Znwm();
    *param_2 = 0;
    lStack_38 = lVar2;
    FUN_10818b268();
    *param_1 = uVar1;
    FUN_10816be5c(&lStack_38);
  }
  return;
}



/* Entry: 10818b268; end: 10818b2ff;  */

undefined8 * FUN_10818b268(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x00010818af94();
  *puVar1 = &PTR_FUN_110a2bcc8;
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1[9] = lVar2;
  uStack_38 = 0;
  if (lVar2 != 0) {
    do {
      func_0x00010818b404();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a5b8(param_1,&uStack_38);
  func_0x00010818b414();
  return param_1;
}



/* Entry: 10818b300; end: 10818b363;  */

void FUN_10818b300(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x00010818b404();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a6d4(param_1,&uStack_28);
  func_0x00010818b414();
  FUN_10816be5c((long *)(param_1 + 0x48));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818b364; end: 10818b367;  */

void FUN_10818b364(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x00010818b404();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a6d4(param_1,&uStack_28);
  func_0x00010818b414();
  FUN_10816be5c((long *)(param_1 + 0x48));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818b368; end: 10818b3e3;  */

void FUN_10818b368(void)

{
  FUN_10818b300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b3e4; end: 10818b3e7;  */

undefined8 * FUN_10818b3e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818b3e8; end: 10818b3fb;  */

void FUN_10818b3e8(void)

{
  FUN_10818a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b3fc; end: 10818b41b;  */

void FUN_10818b3fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10818b400);
  (*pcVar1)();
}



/* Entry: 10818b41c; end: 10818b457;  */

undefined8 * FUN_10818b41c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_108188e38();
  *puVar1 = &PTR_DAT_110a2bd48;
  func_0x000108376b14(puVar1 + 6,param_2);
  return param_1;
}



/* Entry: 10818b458; end: 10818b4c7;  */

void FUN_10818b458(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  func_0x000108342398(param_2,param_1 + 0x30,1,param_3);
  func_0x00010833c27c();
  if ((*(byte *)(unaff_x22 + 0xe) >> 1 & 1) == 0) {
    FUN_10816eab0(&uStack_80,unaff_x21[0x188] + 0x18);
    FUN_10827a0d8();
    if (iVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uVar2 = unaff_x22;
      FUN_1083773e8();
      if ((int)uVar2 != 0) goto LAB_10833e670;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar2 = unaff_x22;
      FUN_1083777d4();
      if ((int)uVar2 != 0) {
        FUN_108384c90(&uStack_80,&uStack_40);
        goto LAB_10833e670;
      }
      func_0x0001083777e0();
      if ((unaff_x22 & 1) != 0) goto LAB_10833e670;
    }
  }
  func_0x0001083423c0(*(undefined8 *)(*unaff_x21 + 0x180));
LAB_10833e670:
  func_0x000108342298();
  return;
}



/* Entry: 10818b4c8; end: 10818b4db;  */

void FUN_10818b4c8(void)

{
  FUN_10818b4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b4dc; end: 10818b54b;  */

undefined8 * FUN_10818b4dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bd48;
  FUN_10837ca38(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818b54c; end: 10818b597;  */

void FUN_10818b54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *unaff_x21;
  
  param_1 = param_1 + 0x2c;
  func_0x000108342398(param_2,param_1,1,param_3);
  iVar1 = (int)param_1;
  FUN_1082ffd68();
  if (iVar1 != 0) {
    func_0x00010833c27c();
    FUN_1082d8624();
    func_0x000108341f64();
    func_0x000108342298(*(undefined8 *)(*unaff_x21 + 0x170));
  }
  return;
}



/* Entry: 10818b598; end: 10818b5eb;  */

void FUN_10818b598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_108188e38();
  *param_1 = &PTR_FUN_110a2be00;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x54) = uVar6;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x44) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8;
  return;
}



/* Entry: 10818b5ec; end: 10818b61b;  */

void FUN_10818b5ec(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010833c27c();
  lVar1 = 0x170;
  if (*(int *)(param_1 + 0x5c) != 1) {
    lVar1 = 0x178;
  }
                    /* WARNING: Could not recover jumptable at 0x00010833e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + lVar1))(param_2,param_1 + 0x2c,1,param_3);
  return;
}



/* Entry: 10818b61c; end: 10818b68b;  */

void FUN_10818b61c(long param_1,undefined8 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)param_1 + 0x2c;
  FUN_108188ea8(*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x5c) != 1)) {
    fVar2 = (float)*param_2;
    fVar3 = (float)((ulong)*param_2 >> 0x20);
    uStack_30 = CONCAT44(fVar3 + -0.00024414062,fVar2 + -0.00024414062);
    uStack_28 = CONCAT44(fVar3 + 0.00024414062,fVar2 + 0.00024414062);
    FUN_108385750(param_1 + 0x2c,&uStack_30);
  }
  return;
}



/* Entry: 10818b68c; end: 10818b6a7;  */

undefined4 FUN_10818b68c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* Entry: 10818b6a8; end: 10818b6bb;  */

void FUN_10818b6a8(void)

{
  FUN_10818a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b6bc; end: 10818b6bf;  */

undefined8 * FUN_10818b6bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818b6c0; end: 10818b6d3;  */

void FUN_10818b6c0(void)

{
  FUN_10818a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b6d4; end: 10818b6df;  */

undefined4 FUN_10818b6d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* Entry: 10818b6e0; end: 10818b74f;  */

void FUN_10818b6e0(undefined8 *param_1,long *param_2)

{
  undefined8 unaff_x19;
  undefined1 auStack_50 [16];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010818c710();
    func_0x00010818c72c();
    func_0x00010818c874();
    FUN_10818b750();
    *param_1 = unaff_x19;
    func_0x000106f47224(auStack_50);
    func_0x00010818c6e4();
  }
  return;
}



/* Entry: 10818b750; end: 10818b793;  */

void FUN_10818b750(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010818c6b0();
  func_0x00010818c704();
  func_0x00010818c6e4();
  func_0x00010818c744(&PTR_FUN_110a2be80);
  *(undefined8 *)(unaff_x19 + 0x38) = extraout_x8;
  return;
}



/* Entry: 10818b794; end: 10818b813;  */

void FUN_10818b794(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_180 [40];
  undefined8 uStack_158;
  undefined1 auStack_150 [288];
  
  func_0x00010818c71c();
  uStack_158 = 0;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    do {
      func_0x00010818c6a0();
      uStack_158 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010818c840();
  FUN_10818ceb4(auStack_150,&uStack_158,auStack_180);
  func_0x00010818c7e0();
  func_0x00010818c7d8();
  func_0x00010818c7f0();
  func_0x00010818c6c8();
  func_0x00010818c838();
  return;
}



/* Entry: 10818b814; end: 10818b883;  */

void FUN_10818b814(undefined8 *param_1,long *param_2)

{
  undefined8 unaff_x19;
  undefined1 auStack_50 [16];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010818c710();
    func_0x00010818c72c();
    func_0x00010818c874();
    FUN_10818b884();
    *param_1 = unaff_x19;
    FUN_10816be5c(auStack_50);
    func_0x00010818c6e4();
  }
  return;
}



/* Entry: 10818b884; end: 10818b907;  */

void FUN_10818b884(void)

{
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  
  func_0x00010818c6b0();
  func_0x00010818c704();
  func_0x00010818c6e4();
  func_0x00010818c744(&PTR_FUN_110a2bec0);
  *(long *)(unaff_x19 + 0x38) = extraout_x8;
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
    func_0x00010818c810();
    func_0x00010818c7d0();
  }
  return;
}



/* Entry: 10818b908; end: 10818b94f;  */

void FUN_10818b908(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818c7f8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
    func_0x00010818c760();
    func_0x00010818c79c();
  }
  FUN_10816be5c();
  func_0x00010818c7c8();
  return;
}



/* Entry: 10818b950; end: 10818b953;  */

void FUN_10818b950(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818c7f8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
    func_0x00010818c760();
    func_0x00010818c79c();
  }
  FUN_10816be5c();
  func_0x00010818c7c8();
  return;
}



/* Entry: 10818b954; end: 10818b967;  */

void FUN_10818b954(void)

{
  FUN_10818b908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818b968; end: 10818b9f7;  */

void FUN_10818b968(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  
  func_0x00010818c7f8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
    func_0x00010818c760();
    func_0x00010818c79c();
  }
  FUN_10818b9f8();
  if (*unaff_x20 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11_00 != 0);
    FUN_10818a5b8();
    func_0x00010818c79c();
  }
  return;
}



/* Entry: 10818b9f8; end: 10818ba27;  */

undefined8 FUN_10818b9f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x00010818c67c(param_1,uVar1);
  return param_1;
}



/* Entry: 10818ba28; end: 10818ba73;  */

undefined4 FUN_10818ba28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10818a8b4(*(long *)(param_1 + 0x38),param_2,param_3);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  FUN_10818a8b4(puVar1,param_2,param_3);
  return *puVar1;
}



/* Entry: 10818ba74; end: 10818bafb;  */

void FUN_10818ba74(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_180 [40];
  undefined8 uStack_158;
  undefined1 auStack_150 [288];
  
  func_0x00010818c71c();
  uStack_158 = 0;
  if ((*(long *)(unaff_x20 + 0x38) != 0) &&
     (uStack_158 = 0, *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30) != 0)) {
    do {
      func_0x00010818c6a0();
      uStack_158 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010818c840();
  FUN_10818ce74(auStack_150,&uStack_158,auStack_180);
  func_0x00010818c7e0();
  func_0x00010818c7d8();
  func_0x00010818c7f0();
  func_0x00010818c6c8();
  func_0x00010818c838();
  return;
}



/* Entry: 10818bafc; end: 10818bb23;  */

void FUN_10818bafc(undefined8 *param_1)

{
  func_0x00010818a53c(param_1,1);
  *param_1 = &PTR_DAT_110a2bf00;
  param_1[6] = 0;
  return;
}



/* Entry: 10818bb24; end: 10818bb53;  */

undefined8 * FUN_10818bb24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bf00;
  func_0x000106f47224(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818bb54; end: 10818bb97;  */

void FUN_10818bb54(void)

{
  undefined8 uStack_28;
  
  func_0x00010818c7a4();
  uStack_28 = 0;
  func_0x000108114f18();
  func_0x000106f47224(&uStack_28);
  func_0x00010818c860();
  return;
}



/* Entry: 10818bb98; end: 10818bc37;  */

void FUN_10818bb98(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010818c6a0();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar1;
  }
  else {
    uVar1 = 0x48;
    __Znwm();
    lStack_48 = *param_2;
    *param_2 = 0;
    *param_3 = 0;
    lStack_50 = lVar2;
    func_0x00010818c874();
    FUN_10818bc38();
    *param_1 = uVar1;
    FUN_108159600(&lStack_50);
    func_0x00010818c6e4();
  }
  return;
}



/* Entry: 10818bc38; end: 10818bcc7;  */

void FUN_10818bc38(void)

{
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  
  func_0x00010818c6b0();
  FUN_1081884a0();
  func_0x00010818c6e4();
  func_0x00010818c744(&PTR_FUN_110a2bf38);
  *(long *)(unaff_x19 + 0x38) = extraout_x8;
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
  }
  func_0x00010818c810();
  func_0x00010818c7d0();
  return;
}



/* Entry: 10818bcc8; end: 10818bd0f;  */

void FUN_10818bcc8(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818c7f8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
  }
  func_0x00010818c760();
  func_0x00010818c79c();
  FUN_108159600();
  func_0x00010818c7c8();
  return;
}



/* Entry: 10818bd10; end: 10818bd13;  */

void FUN_10818bd10(void)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010818c7f8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010818c6a0();
    } while (extraout_w11 != 0);
  }
  func_0x00010818c760();
  func_0x00010818c79c();
  FUN_108159600();
  func_0x00010818c7c8();
  return;
}



/* Entry: 10818bd14; end: 10818bd27;  */

void FUN_10818bd14(void)

{
  FUN_10818bcc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818bd28; end: 10818bdeb;  */

void FUN_10818bd28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  ulong uStack_80;
  undefined8 uStack_78;
  bool bStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_1081885e4();
  func_0x00010818c880();
  bStack_70 = *(int *)(param_5 + 0x40) != 1;
  if (bStack_70) {
    uStack_80 = uStack_80 & 0xffffffffffffff00;
  }
  else {
    uStack_78 = CONCAT44(param_4,param_3);
    uStack_80 = CONCAT44(param_2,param_1);
  }
  bStack_70 = !bStack_70;
  uStack_60 = param_1;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_10818bdec(*(undefined8 *)(param_5 + 0x38),&uStack_80);
  FUN_10818a8b4(*(undefined8 *)(param_5 + 0x38),param_6,param_7);
  plVar1 = *(long **)(*(long *)(param_5 + 0x38) + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&uStack_60);
    func_0x00010818c880();
  }
  return;
}



/* Entry: 10818bdec; end: 10818be57;  */

void FUN_10818bdec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 == *(char *)(param_2 + 2) && cVar2 != '\0') {
    uVar4 = param_1 + 0x38;
    FUN_10815cc68(uVar4,param_2);
    if ((uVar4 & 1) == 0) goto FUN_10818a7f4;
  }
  else if (cVar2 != *(char *)(param_2 + 2)) {
FUN_10818a7f4:
    uVar8 = param_2[1];
    uVar7 = *param_2;
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar3 = *(ushort *)(param_1 + 0x28);
      uVar6 = (uint)uVar3;
      if (((uVar3 >> 2 & 1) == 0) || ((uVar3 >> 3 & 1) == 0)) {
        if ((uVar3 & 1) == 0) {
          uVar6 = uVar3 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar6;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar6 | 4;
        puStack_40 = &uStack_21;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar6 >> 4 & 1) == 0) {
          if (puVar5 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar5[1];
          for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar1; puVar5 = puVar5 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar5);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10818be58; end: 10818be5b;  */

void FUN_10818be58(void)

{
  return;
}



/* Entry: 10818be5c; end: 10818bf03;  */

void FUN_10818be5c(void)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_180;
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [144];
  
  func_0x00010818c71c();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x00010818c754();
  uStack_180 = 0;
  if (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x30) != 0) {
    do {
      func_0x00010818c6a0();
      uStack_180 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1 = auStack_150;
  FUN_10818d11c(puVar1,lVar2 + 0x18,auStack_178,&uStack_180);
  FUN_1081660c4(auStack_c0,puVar1);
  FUN_10811e834(&uStack_180);
  func_0x00010818c7f0();
  func_0x00010818c6c8();
  func_0x00010818c838();
  return;
}



/* Entry: 10818bf04; end: 10818bf33;  */

void FUN_10818bf04(undefined8 *param_1)

{
  func_0x00010818a53c(param_1,1);
  *param_1 = &PTR_DAT_110a2bf78;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 10818bf34; end: 10818bf63;  */

undefined8 * FUN_10818bf34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bf78;
  FUN_10811e834(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818bf64; end: 10818bfa7;  */

void FUN_10818bf64(void)

{
  undefined8 uStack_28;
  
  func_0x00010818c7a4();
  uStack_28 = 0;
  FUN_108167c3c();
  FUN_10811e834(&uStack_28);
  func_0x00010818c860();
  return;
}



/* Entry: 10818bfa8; end: 10818bfcb;  */

void FUN_10818bfa8(undefined8 *param_1)

{
  FUN_10818bf04();
  *param_1 = &PTR_FUN_110a2bfb0;
  param_1[10] = 0;
  return;
}



/* Entry: 10818bfcc; end: 10818bff3;  */

undefined8 * FUN_10818bfcc(undefined8 *param_1)

{
  FUN_10811e834(param_1 + 10);
  *param_1 = &PTR_DAT_110a2bf78;
  FUN_10811e834(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818bff4; end: 10818bff7;  */

undefined8 * FUN_10818bff4(undefined8 *param_1)

{
  FUN_10811e834(param_1 + 10);
  *param_1 = &PTR_DAT_110a2bf78;
  FUN_10811e834(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818bff8; end: 10818c00b;  */

void FUN_10818bff8(void)

{
  FUN_10818bfcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818c00c; end: 10818c033;  */

void FUN_10818c00c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10818c034();
  *param_1 = uVar1;
  return;
}



/* Entry: 10818c034; end: 10818c063;  */

void FUN_10818c034(undefined8 *param_1)

{
  FUN_10818bf04();
  *param_1 = &PTR_FUN_110a2bfe8;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xff000000;
  return;
}



/* Entry: 10818c064; end: 10818c067;  */

undefined8 * FUN_10818c064(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bf78;
  FUN_10811e834(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818c068; end: 10818c07b;  */

void FUN_10818c068(void)

{
  FUN_10818bf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818c07c; end: 10818c15b;  */

void FUN_10818c07c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_70;
  iVar1 = *(int *)(param_1 + 0x60);
  FUN_108343500(*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 == 1) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    func_0x00010818c778();
    FUN_1083b1f94();
    func_0x00010818c808();
    FUN_10810a400(&uStack_58);
    puVar2 = &uStack_68;
  }
  else {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    func_0x00010818c778();
    FUN_1083b1c78();
    func_0x00010818c808();
    FUN_10810a400(&uStack_58);
  }
  FUN_10811e834(puVar2);
  return;
}



/* Entry: 10818c15c; end: 10818c183;  */

void FUN_10818c15c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_10818c184();
  *param_1 = uVar1;
  return;
}



/* Entry: 10818c184; end: 10818c1af;  */

void FUN_10818c184(undefined8 *param_1)

{
  FUN_10818bf04();
  *param_1 = &PTR_FUN_110a2c020;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 3;
  return;
}



/* Entry: 10818c1b0; end: 10818c1b3;  */

undefined8 * FUN_10818c1b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bf78;
  FUN_10811e834(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818c1b4; end: 10818c1c7;  */

void FUN_10818c1b4(void)

{
  FUN_10818bf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818c1c8; end: 10818c217;  */

void FUN_10818c1c8(long param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_1083afdf4(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                *(undefined4 *)(param_1 + 0x54),&uStack_28,param_1 + 0x38);
  FUN_10811e834(&uStack_28);
  return;
}



/* Entry: 10818c218; end: 10818c287;  */

void FUN_10818c218(undefined8 *param_1,long *param_2)

{
  undefined8 unaff_x19;
  undefined1 auStack_50 [16];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010818c710();
    func_0x00010818c72c();
    func_0x00010818c874();
    FUN_10818c288();
    *param_1 = unaff_x19;
    FUN_108154c6c(auStack_50);
    func_0x00010818c6e4();
  }
  return;
}



/* Entry: 10818c288; end: 10818c2cb;  */

void FUN_10818c288(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010818c6b0();
  func_0x00010818c704();
  func_0x00010818c6e4();
  func_0x00010818c744(&PTR_FUN_110a2c058);
  *(undefined8 *)(unaff_x19 + 0x38) = extraout_x8;
  return;
}



/* Entry: 10818c2cc; end: 10818c2f3;  */

void FUN_10818c2cc(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  FUN_108154c6c(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818c2f4; end: 10818c2f7;  */

void FUN_10818c2f4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  FUN_108154c6c(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818c2f8; end: 10818c30b;  */

void FUN_10818c2f8(void)

{
  FUN_10818c2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818c30c; end: 10818c3b3;  */

void FUN_10818c30c(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined1 auStack_c0 [144];
  
  FUN_10818ccbc(auStack_150);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x00010818c6a0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar1 = uStack_130;
  uStack_158 = 0;
  uStack_130 = uVar2;
  func_0x00010818c60c(uVar1);
  FUN_1081660c4(auStack_c0,auStack_150);
  FUN_108154c6c(&uStack_158);
  FUN_10818cd40(auStack_150);
  func_0x00010818c6c8();
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 10818c3b4; end: 10818c3b7;  */

long * FUN_10818c3b4(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 10818c3b8; end: 10818c427;  */

void FUN_10818c3b8(undefined8 *param_1,long *param_2)

{
  undefined8 *unaff_x22;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010818c710();
    *unaff_x22 = 0;
    FUN_10818c428();
    *param_1 = param_2;
    func_0x00010818c6e4();
  }
  return;
}



/* Entry: 10818c428; end: 10818c47b;  */

undefined8 * FUN_10818c428(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_2 = 0;
  func_0x00010818c704();
  func_0x00010818c6e4();
  *param_1 = &PTR_FUN_110a2c098;
  *(undefined4 *)(param_1 + 7) = param_3;
  return param_1;
}



/* Entry: 10818c47c; end: 10818c47f;  */

void FUN_10818c47c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818c480; end: 10818c493;  */

void FUN_10818c480(void)

{
  FUN_108188544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


